// addr:      7101856ad0
// offset:    0x1856ad0
// name:      FUN_7101856ad0
// mangled:   
// signature: undefined __cdecl FUN_7101856ad0(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7101856ad0(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  short sVar6;
  char cVar7;
  undefined8 uVar8;
  int iVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  char cVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  undefined6 uVar17;
  undefined4 uVar18;
  bool bVar19;
  uint uVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined8 **ppuVar25;
  long *plVar26;
  long lVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  ulong *puVar30;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  byte ****ppppbVar31;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 uVar32;
  long *********ppppppppplVar33;
  undefined **ppuVar34;
  long ****pppplVar35;
  byte ****ppppbVar36;
  long ****pppplVar37;
  undefined1 uVar38;
  undefined8 uVar39;
  char *pcVar40;
  code *pcVar41;
  byte *pbVar42;
  ulong uVar43;
  ushort *puVar44;
  short *psVar45;
  int iVar46;
  uint uVar47;
  long lVar48;
  ulong uVar49;
  long lVar50;
  uint uVar51;
  uint uVar52;
  long ********pppppppplVar53;
  long *plVar54;
  long *plVar55;
  undefined8 *puVar56;
  long *plVar57;
  undefined1 auVar58 [16];
  ulong *local_af0;
  ulong *local_ae8;
  ulong *local_ae0;
  undefined2 local_ad8;
  undefined1 local_ad6;
  undefined2 local_ad4;
  undefined8 local_ad0;
  undefined8 *puStack_ac8;
  undefined8 local_ac0;
  undefined8 *puStack_ab8;
  undefined8 local_a80;
  undefined8 uStack_a78;
  undefined1 local_a70;
  undefined4 uStack_a6f;
  undefined1 uStack_a6b;
  undefined2 uStack_a6a;
  char local_a68;
  undefined8 local_a60;
  undefined2 local_a58;
  undefined2 uStack_a56;
  undefined4 uStack_a54;
  undefined1 local_a50 [4];
  char local_a4c [12];
  long *local_a40;
  undefined4 uStack_a10;
  undefined4 local_a0c;
  undefined4 uStack_a08;
  short local_a04 [2];
  char local_a00;
  undefined4 uStack_9ff;
  undefined1 uStack_9fb;
  undefined2 uStack_9fa;
  char local_9f8;
  uint local_604;
  undefined8 uStack_600;
  undefined8 local_5f8;
  ushort local_5f0 [24];
  undefined2 local_5c0;
  char cStack_5be;
  undefined1 uStack_5bd;
  short sStack_5bc;
  undefined8 uStack_5ba;
  undefined8 local_5b2;
  undefined2 local_5aa;
  char local_5a8;
  undefined8 local_5a4;
  int local_59c;
  uint uStack_598;
  undefined8 local_594;
  int local_58c;
  undefined8 local_580;
  undefined8 local_578;
  undefined4 local_570;
  undefined2 local_56c;
  char local_56a [2];
  undefined1 *local_568;
  undefined4 local_560;
  long alStack_550 [4];
  undefined8 local_530;
  undefined4 local_528;
  ushort local_524 [2];
  undefined8 local_520;
  long *local_500;
  long alStack_4f0 [4];
  long *local_4d0;
  long alStack_4c0 [4];
  long *local_4a0;
  long alStack_490 [4];
  long *local_470;
  undefined4 local_460;
  long local_124;
  undefined4 local_11c;
  uint local_118 [14];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  char local_c8;
  undefined8 local_c4;
  int local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined **local_a0;
  ulong local_98;
  undefined **local_90;
  ulong local_88;
  
  lVar22 = FUN_710392e290(0x10,0x170,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  if (lVar22 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a60 = (undefined **)((ulong)local_a60 & 0xffffffff00000000);
      local_580 = (undefined **)&DAT_00000170;
      pppplVar37 = (long ****)&local_580;
      uVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a60);
      local_594 = uVar12;
      _local_59c = iVar46;
      local_5b2 = uVar11;
      uStack_5ba = uVar8;
      local_5c0 = uVar10;
      uStack_600 = uVar39;
      uVar12 = local_594;
      iVar46 = _local_59c;
      uVar11 = local_5b2;
      uVar8 = uStack_5ba;
      uVar10 = local_5c0;
      uVar39 = uStack_600;
      if (((uVar23 & 1) != 0) &&
         (lVar22 = FUN_710392e290(0x10,0x170,pppplVar37,param_4,param_5,param_6,param_7,param_8),
         local_594 = uVar12, _local_59c = iVar46, local_5b2 = uVar11, uStack_5ba = uVar8,
         local_5c0 = uVar10, uStack_600 = uVar39, uVar18 = local_594._4_4_, uVar20 = uStack_598,
         uVar17 = local_5b2._2_6_, uVar16 = uStack_5ba._4_4_, cVar14 = uStack_5ba._3_1_,
         uVar15 = uStack_5ba._2_1_, cVar5 = local_5c0._1_1_, uVar13 = uStack_600._4_4_,
         uVar39 = uStack_600, uVar10 = local_5c0, uVar8 = uStack_5ba, uVar11 = local_5b2,
         iVar46 = _local_59c, uVar12 = local_594, uStack_600._4_4_ = uVar13, local_5c0._1_1_ = cVar5
         , uStack_5ba._2_1_ = uVar15, uStack_5ba._3_1_ = cVar14, uStack_5ba._4_4_ = uVar16,
         local_5b2._2_6_ = uVar17, uStack_598 = uVar20, local_594._4_4_ = uVar18, lVar22 != 0))
      goto LAB_7101856b58;
    }
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar18 = local_594._4_4_;
    uVar20 = uStack_598;
    uVar17 = local_5b2._2_6_;
    uVar16 = uStack_5ba._4_4_;
    cVar14 = uStack_5ba._3_1_;
    uVar15 = uStack_5ba._2_1_;
    cVar5 = local_5c0._1_1_;
    uVar13 = uStack_600._4_4_;
    lVar22 = 0;
    uVar39 = uStack_600;
    uVar10 = local_5c0;
    uVar8 = uStack_5ba;
    uVar11 = local_5b2;
    iVar46 = _local_59c;
    uVar12 = local_594;
    uStack_600._4_4_ = uVar13;
    local_5c0._1_1_ = cVar5;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    local_5b2._2_6_ = uVar17;
    uStack_598 = uVar20;
    local_594._4_4_ = uVar18;
  }
LAB_7101856b58:
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  ppppppppplVar33 = (long *********)0x10c;
  *(undefined4 *)(lVar22 + 0x134) = 0;
  *(long *)lVar22 = lVar22;
  *(undefined8 *)(lVar22 + 0x18) = 0;
  *(undefined8 *)(lVar22 + 0x20) = 0;
  *(undefined8 *)(lVar22 + 0x138) = 0xffffffff;
  *(undefined4 *)(lVar22 + 0x140) = 0xffffffff;
  *(undefined1 *)(lVar22 + 0x144) = 0;
  *(undefined8 *)(lVar22 + 8) = 0;
  *(undefined8 *)(lVar22 + 0x10) = 0;
  uVar39 = uStack_600;
  uStack_600._4_4_ = uVar13;
  uVar10 = local_5c0;
  local_5c0._1_1_ = cVar5;
  uVar8 = uStack_5ba;
  uStack_5ba._2_1_ = uVar15;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._4_4_ = uVar16;
  uVar11 = local_5b2;
  local_5b2._2_6_ = uVar17;
  iVar46 = _local_59c;
  uStack_598 = uVar20;
  uVar12 = local_594;
  local_594._4_4_ = uVar18;
  memset((void *)(lVar22 + 0x28),0,0x10c);
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  *(undefined4 *)(lVar22 + 0x148) = 0;
  puVar24 = (undefined8 *)
            FUN_710392e290(0x10,0x80,(long ****)ppppppppplVar33,param_4,param_5,param_6,param_7,
                           param_8);
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  uVar32 = extraout_x1;
  if (puVar24 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a60 = (undefined **)((ulong)local_a60 & 0xffffffff00000000);
      local_580 = (undefined **)&DAT_00000080;
      ppppppppplVar33 = (long *********)&local_580;
      auVar58 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a60);
      local_594 = uVar12;
      _local_59c = iVar46;
      local_5b2 = uVar11;
      uStack_5ba = uVar8;
      local_5c0 = uVar10;
      uStack_600 = uVar39;
      uVar12 = local_594;
      iVar46 = _local_59c;
      uVar11 = local_5b2;
      uVar8 = uStack_5ba;
      uVar10 = local_5c0;
      uVar39 = uStack_600;
      uVar32 = auVar58._8_8_;
      if (((auVar58._0_8_ & 1) != 0) &&
         (puVar24 = (undefined8 *)
                    FUN_710392e290(0x10,0x80,(long ****)ppppppppplVar33,param_4,param_5,param_6,
                                   param_7,param_8), local_594 = uVar12, _local_59c = iVar46,
         local_5b2 = uVar11, uStack_5ba = uVar8, local_5c0 = uVar10, uStack_600 = uVar39,
         uVar18 = local_594._4_4_, uVar20 = uStack_598, uVar17 = local_5b2._2_6_,
         uVar16 = uStack_5ba._4_4_, cVar14 = uStack_5ba._3_1_, uVar15 = uStack_5ba._2_1_,
         cVar5 = local_5c0._1_1_, uVar13 = uStack_600._4_4_, uVar32 = extraout_x1_00,
         uVar39 = uStack_600, uVar10 = local_5c0, uVar8 = uStack_5ba, uVar11 = local_5b2,
         iVar46 = _local_59c, uVar12 = local_594, uStack_600._4_4_ = uVar13, local_5c0._1_1_ = cVar5
         , uStack_5ba._2_1_ = uVar15, uStack_5ba._3_1_ = cVar14, uStack_5ba._4_4_ = uVar16,
         local_5b2._2_6_ = uVar17, uStack_598 = uVar20, local_594._4_4_ = uVar18,
         puVar24 != (undefined8 *)0x0)) goto LAB_7101856be0;
    }
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar18 = local_594._4_4_;
    uVar20 = uStack_598;
    uVar17 = local_5b2._2_6_;
    uVar16 = uStack_5ba._4_4_;
    cVar14 = uStack_5ba._3_1_;
    uVar15 = uStack_5ba._2_1_;
    cVar5 = local_5c0._1_1_;
    uVar13 = uStack_600._4_4_;
    puVar24 = (undefined8 *)0x0;
    uVar39 = uStack_600;
    uVar10 = local_5c0;
    uVar8 = uStack_5ba;
    uVar11 = local_5b2;
    iVar46 = _local_59c;
    uVar12 = local_594;
    uStack_600._4_4_ = uVar13;
    local_5c0._1_1_ = cVar5;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    local_5b2._2_6_ = uVar17;
    uStack_598 = uVar20;
    local_594._4_4_ = uVar18;
  }
LAB_7101856be0:
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  *puVar24 = &PTR_FUN_7105181b40;
  puVar24[2] = 0;
  puVar24[1] = puVar24 + 2;
  puVar24[5] = 0;
  puVar24[3] = 0;
  puVar24[4] = puVar24 + 5;
  puVar24[8] = 0;
  puVar24[6] = 0;
  puVar24[7] = puVar24 + 8;
  puVar24[0xb] = 0;
  puVar24[9] = 0;
  puVar24[10] = puVar24 + 0xb;
  *(undefined4 *)(puVar24 + 0xd) = 2;
  puVar24[0xc] = 0;
  *(undefined4 *)(puVar24 + 0xf) = 0;
  puVar24[0xe] = 0;
  *(undefined8 **)(lVar22 + 0x150) = puVar24;
  *(undefined4 *)(lVar22 + 0x168) = 0xffffffff;
  *(code **)(lVar22 + 0x28) = FUN_71018550d0;
  *(undefined8 *)(lVar22 + 0x30) = 0;
  *(code **)(lVar22 + 0x38) = FUN_71018551e0;
  *(undefined8 *)(lVar22 + 0x40) = 0;
  *(code **)(lVar22 + 0x48) = FUN_71018553f0;
  *(undefined8 *)(lVar22 + 0x50) = 0;
  *(code **)(lVar22 + 0x68) = FUN_7101855600;
  *(undefined8 *)(lVar22 + 0x70) = 0;
  *(code **)(lVar22 + 0x78) = FUN_71018557b0;
  *(undefined8 *)(lVar22 + 0x80) = 0;
  *(code **)(lVar22 + 0x98) = FUN_7101855ae0;
  *(undefined8 *)(lVar22 + 0xa0) = 0;
  *(code **)(lVar22 + 0x58) = FUN_7101855570;
  *(undefined8 *)(lVar22 + 0x60) = 0;
  *(code **)(lVar22 + 0xa8) = FUN_7101856100;
  *(undefined8 *)(lVar22 + 0xb0) = 0;
  *(code **)(lVar22 + 0x88) = FUN_7101855910;
  *(undefined8 *)(lVar22 + 0x90) = 0;
  *(code **)(lVar22 + 200) = FUN_71018562f0;
  *(undefined8 *)(lVar22 + 0xd0) = 0;
  *(undefined8 *)(lVar22 + 0x158) = 0;
  *(undefined8 *)(lVar22 + 0x160) = 0;
  *(code **)(lVar22 + 0xb8) = FUN_71018561f0;
  *(undefined8 *)(lVar22 + 0xc0) = 0;
  *(code **)(lVar22 + 0xd8) = FUN_7101856330;
  *(undefined8 *)(lVar22 + 0xe0) = 0;
  puVar24 = *(undefined8 **)(param_2 + 0xa8);
  uVar39 = uStack_600;
  uVar10 = local_5c0;
  uVar8 = uStack_5ba;
  uVar11 = local_5b2;
  iVar46 = _local_59c;
  uVar12 = local_594;
  if (puVar24 != (undefined8 *)0x0) {
    if (((DAT_71053248b8 & 1) == 0) &&
       (uStack_600._4_4_ = uVar13, local_5c0._1_1_ = cVar5, uStack_5ba._2_1_ = uVar15,
       uStack_5ba._3_1_ = cVar14, uStack_5ba._4_4_ = uVar16, local_5b2._2_6_ = uVar17,
       uStack_598 = uVar20, local_594._4_4_ = uVar18, iVar21 = __cxa_guard_acquire(&DAT_71053248b8),
       uVar18 = local_594._4_4_, uVar20 = uStack_598, uVar17 = local_5b2._2_6_,
       uVar16 = uStack_5ba._4_4_, cVar14 = uStack_5ba._3_1_, uVar15 = uStack_5ba._2_1_,
       cVar5 = local_5c0._1_1_, uVar13 = uStack_600._4_4_, uVar39 = uStack_600, uVar10 = local_5c0,
       uVar8 = uStack_5ba, uVar11 = local_5b2, iVar46 = _local_59c, uVar12 = local_594, iVar21 != 0)
       ) {
      if (((DAT_7105324748 & 1) == 0) &&
         (uStack_600._4_4_ = uVar13, local_5c0._1_1_ = cVar5, uStack_5ba._2_1_ = uVar15,
         uStack_5ba._3_1_ = cVar14, uStack_5ba._4_4_ = uVar16, local_5b2._2_6_ = uVar17,
         uStack_598 = uVar20, local_594._4_4_ = uVar18,
         iVar21 = __cxa_guard_acquire(&DAT_7105324748), uVar18 = local_594._4_4_,
         uVar20 = uStack_598, uVar17 = local_5b2._2_6_, uVar16 = uStack_5ba._4_4_,
         cVar14 = uStack_5ba._3_1_, uVar15 = uStack_5ba._2_1_, cVar5 = local_5c0._1_1_,
         uVar13 = uStack_600._4_4_, uVar39 = uStack_600, uVar10 = local_5c0, uVar8 = uStack_5ba,
         uVar11 = local_5b2, iVar46 = _local_59c, uVar12 = local_594, iVar21 != 0)) {
        if (((DAT_7105324750 & 1) == 0) &&
           (uStack_600._4_4_ = uVar13, local_5c0._1_1_ = cVar5, uStack_5ba._2_1_ = uVar15,
           uStack_5ba._3_1_ = cVar14, uStack_5ba._4_4_ = uVar16, local_5b2._2_6_ = uVar17,
           uStack_598 = uVar20, local_594._4_4_ = uVar18,
           iVar21 = __cxa_guard_acquire(&DAT_7105324750), uVar18 = local_594._4_4_,
           uVar20 = uStack_598, uVar17 = local_5b2._2_6_, uVar16 = uStack_5ba._4_4_,
           cVar14 = uStack_5ba._3_1_, uVar15 = uStack_5ba._2_1_, cVar5 = local_5c0._1_1_,
           uVar13 = uStack_600._4_4_, uVar39 = uStack_600, uVar10 = local_5c0, uVar8 = uStack_5ba,
           uVar11 = local_5b2, iVar46 = _local_59c, uVar12 = local_594, iVar21 != 0)) {
          DAT_7105324758 = 0;
          uStack_600._4_4_ = uVar13;
          local_5c0._1_1_ = cVar5;
          uStack_5ba._2_1_ = uVar15;
          uStack_5ba._3_1_ = cVar14;
          uStack_5ba._4_4_ = uVar16;
          local_5b2._2_6_ = uVar17;
          uStack_598 = uVar20;
          local_594._4_4_ = uVar18;
          __cxa_guard_release(&DAT_7105324750);
          uVar12 = local_594;
          iVar46 = _local_59c;
          uVar11 = local_5b2;
          uVar8 = uStack_5ba;
          uVar10 = local_5c0;
          uVar39 = uStack_600;
          uVar13 = uStack_600._4_4_;
          cVar5 = local_5c0._1_1_;
          uVar15 = uStack_5ba._2_1_;
          cVar14 = uStack_5ba._3_1_;
          uVar16 = uStack_5ba._4_4_;
          uVar17 = local_5b2._2_6_;
          uVar20 = uStack_598;
          uVar18 = local_594._4_4_;
        }
        local_594._4_4_ = uVar18;
        uStack_598 = uVar20;
        local_5b2._2_6_ = uVar17;
        uStack_5ba._4_4_ = uVar16;
        uStack_5ba._3_1_ = cVar14;
        uStack_5ba._2_1_ = uVar15;
        local_5c0._1_1_ = cVar5;
        uStack_600._4_4_ = uVar13;
        local_594 = uVar12;
        _local_59c = iVar46;
        local_5b2 = uVar11;
        uStack_5ba = uVar8;
        local_5c0 = uVar10;
        uStack_600 = uVar39;
        uVar18 = local_594._4_4_;
        uVar20 = uStack_598;
        uVar17 = local_5b2._2_6_;
        uVar16 = uStack_5ba._4_4_;
        cVar14 = uStack_5ba._3_1_;
        uVar15 = uStack_5ba._2_1_;
        cVar5 = local_5c0._1_1_;
        uVar13 = uStack_600._4_4_;
        DAT_7105324760 = &DAT_7105324758;
        uVar39 = uStack_600;
        uStack_600._4_4_ = uVar13;
        uVar10 = local_5c0;
        local_5c0._1_1_ = cVar5;
        uVar8 = uStack_5ba;
        uStack_5ba._2_1_ = uVar15;
        uStack_5ba._3_1_ = cVar14;
        uStack_5ba._4_4_ = uVar16;
        uVar11 = local_5b2;
        local_5b2._2_6_ = uVar17;
        iVar46 = _local_59c;
        uStack_598 = uVar20;
        uVar12 = local_594;
        local_594._4_4_ = uVar18;
        __cxa_guard_release(&DAT_7105324748);
        uVar12 = local_594;
        iVar46 = _local_59c;
        uVar11 = local_5b2;
        uVar8 = uStack_5ba;
        uVar10 = local_5c0;
        uVar39 = uStack_600;
        uVar13 = uStack_600._4_4_;
        cVar5 = local_5c0._1_1_;
        uVar15 = uStack_5ba._2_1_;
        cVar14 = uStack_5ba._3_1_;
        uVar16 = uStack_5ba._4_4_;
        uVar17 = local_5b2._2_6_;
        uVar20 = uStack_598;
        uVar18 = local_594._4_4_;
      }
      local_594._4_4_ = uVar18;
      uStack_598 = uVar20;
      local_5b2._2_6_ = uVar17;
      uStack_5ba._4_4_ = uVar16;
      uStack_5ba._3_1_ = cVar14;
      uStack_5ba._2_1_ = uVar15;
      local_5c0._1_1_ = cVar5;
      uStack_600._4_4_ = uVar13;
      local_594 = uVar12;
      _local_59c = iVar46;
      local_5b2 = uVar11;
      uStack_5ba = uVar8;
      local_5c0 = uVar10;
      uStack_600 = uVar39;
      uVar18 = local_594._4_4_;
      uVar20 = uStack_598;
      uVar17 = local_5b2._2_6_;
      uVar16 = uStack_5ba._4_4_;
      cVar14 = uStack_5ba._3_1_;
      uVar15 = uStack_5ba._2_1_;
      cVar5 = local_5c0._1_1_;
      uVar13 = uStack_600._4_4_;
      DAT_71053248c0 = &DAT_7105324760;
      uVar39 = uStack_600;
      uStack_600._4_4_ = uVar13;
      uVar10 = local_5c0;
      local_5c0._1_1_ = cVar5;
      uVar8 = uStack_5ba;
      uStack_5ba._2_1_ = uVar15;
      uStack_5ba._3_1_ = cVar14;
      uStack_5ba._4_4_ = uVar16;
      uVar11 = local_5b2;
      local_5b2._2_6_ = uVar17;
      iVar46 = _local_59c;
      uStack_598 = uVar20;
      uVar12 = local_594;
      local_594._4_4_ = uVar18;
      __cxa_guard_release(&DAT_71053248b8);
      uVar12 = local_594;
      iVar46 = _local_59c;
      uVar11 = local_5b2;
      uVar8 = uStack_5ba;
      uVar10 = local_5c0;
      uVar39 = uStack_600;
      uVar13 = uStack_600._4_4_;
      cVar5 = local_5c0._1_1_;
      uVar15 = uStack_5ba._2_1_;
      cVar14 = uStack_5ba._3_1_;
      uVar16 = uStack_5ba._4_4_;
      uVar17 = local_5b2._2_6_;
      uVar20 = uStack_598;
      uVar18 = local_594._4_4_;
    }
    local_594._4_4_ = uVar18;
    uStack_598 = uVar20;
    local_5b2._2_6_ = uVar17;
    uStack_5ba._4_4_ = uVar16;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._2_1_ = uVar15;
    local_5c0._1_1_ = cVar5;
    uStack_600._4_4_ = uVar13;
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar18 = local_594._4_4_;
    uVar20 = uStack_598;
    uVar17 = local_5b2._2_6_;
    uVar16 = uStack_5ba._4_4_;
    cVar14 = uStack_5ba._3_1_;
    uVar15 = uStack_5ba._2_1_;
    cVar5 = local_5c0._1_1_;
    uVar13 = uStack_600._4_4_;
    uVar39 = uStack_600;
    uStack_600._4_4_ = uVar13;
    uVar10 = local_5c0;
    local_5c0._1_1_ = cVar5;
    uVar8 = uStack_5ba;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    uVar11 = local_5b2;
    local_5b2._2_6_ = uVar17;
    iVar46 = _local_59c;
    uStack_598 = uVar20;
    uVar12 = local_594;
    local_594._4_4_ = uVar18;
    auVar58 = (**(code **)*puVar24)(puVar24);
    uVar12 = local_594;
    iVar46 = _local_59c;
    uVar11 = local_5b2;
    uVar8 = uStack_5ba;
    uVar10 = local_5c0;
    uVar39 = uStack_600;
    uVar32 = auVar58._8_8_;
    for (ppuVar25 = auVar58._0_8_; uVar13 = uStack_600._4_4_, cVar5 = local_5c0._1_1_,
        uVar15 = uStack_5ba._2_1_, cVar14 = uStack_5ba._3_1_, uVar16 = uStack_5ba._4_4_,
        uVar17 = local_5b2._2_6_, uVar20 = uStack_598, uVar18 = local_594._4_4_,
        ppuVar25 != (undefined8 **)0x0; ppuVar25 = (undefined8 **)*ppuVar25) {
      if (ppuVar25 == &DAT_71053248c0) {
        *(undefined4 *)(lVar22 + 0x168) = *(undefined4 *)(puVar24 + 1);
        break;
      }
    }
  }
  local_594._4_4_ = uVar18;
  uStack_598 = uVar20;
  local_5b2._2_6_ = uVar17;
  uStack_5ba._4_4_ = uVar16;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._2_1_ = uVar15;
  local_5c0._1_1_ = cVar5;
  uStack_600._4_4_ = uVar13;
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  uVar39 = uStack_600;
  uVar10 = local_5c0;
  uVar8 = uStack_5ba;
  uVar11 = local_5b2;
  iVar46 = _local_59c;
  uVar12 = local_594;
  if (0x12 < *(uint *)(lVar22 + 0x134)) goto LAB_7101859190;
  *(undefined4 *)(lVar22 + (long)(int)*(uint *)(lVar22 + 0x134) * 4 + 0xe8) = 0;
  uVar23 = *(ulong *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar22;
  if (uVar23 != 0) {
    lVar22 = *(long *)(uVar23 + 0x158);
    *(undefined8 *)(uVar23 + 0x158) = 0;
    uVar39 = uStack_5ba;
    uVar8 = local_5b2;
    uVar11 = local_594;
    if (lVar22 != 0) {
      uVar39 = uStack_600;
      uStack_600._4_4_ = uVar13;
      local_5c0._1_1_ = cVar5;
      uVar8 = uStack_5ba;
      uStack_5ba._2_1_ = uVar15;
      uStack_5ba._3_1_ = cVar14;
      uStack_5ba._4_4_ = uVar16;
      uVar11 = local_5b2;
      local_5b2._2_6_ = uVar17;
      uStack_598 = uVar20;
      local_594._4_4_ = uVar18;
      FUN_71032cad20(lVar22);
      uVar11 = local_594;
      iVar46 = _local_59c;
      uVar8 = local_5b2;
      uVar15 = uStack_5ba._2_1_;
      uVar39 = uStack_5ba;
      cVar5 = local_5c0._1_1_;
      uVar13 = uStack_600._4_4_;
      uVar32 = extraout_x1_01;
      cVar14 = uStack_5ba._3_1_;
      uVar16 = uStack_5ba._4_4_;
      uVar17 = local_5b2._2_6_;
      uVar20 = uStack_598;
      uVar18 = local_594._4_4_;
    }
    local_594._4_4_ = uVar18;
    uStack_598 = uVar20;
    local_5b2._2_6_ = uVar17;
    uStack_5ba._4_4_ = uVar16;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._2_1_ = uVar15;
    local_5c0._1_1_ = cVar5;
    uStack_600._4_4_ = uVar13;
    local_594 = uVar11;
    _local_59c = iVar46;
    local_5b2 = uVar8;
    uStack_5ba = uVar39;
    uVar18 = local_594._4_4_;
    uVar20 = uStack_598;
    uVar17 = local_5b2._2_6_;
    uVar16 = uStack_5ba._4_4_;
    cVar14 = uStack_5ba._3_1_;
    uVar15 = uStack_5ba._2_1_;
    cVar5 = local_5c0._1_1_;
    uVar13 = uStack_600._4_4_;
    uVar39 = uStack_600;
    uStack_600._4_4_ = uVar13;
    uVar10 = local_5c0;
    local_5c0._1_1_ = cVar5;
    uVar8 = uStack_5ba;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    uVar11 = local_5b2;
    local_5b2._2_6_ = uVar17;
    iVar46 = _local_59c;
    uStack_598 = uVar20;
    uVar12 = local_594;
    local_594._4_4_ = uVar18;
    FUN_710323b9e0(*(long *)(uVar23 + 0x150),uVar32,ppppppppplVar33,param_4,param_5,param_6,param_7,
                   param_8);
    uVar12 = local_594;
    iVar46 = _local_59c;
    uVar11 = local_5b2;
    uVar8 = uStack_5ba;
    uVar10 = local_5c0;
    uVar39 = uStack_600;
    plVar26 = *(long **)(uVar23 + 0x150);
    *(undefined8 *)(uVar23 + 0x150) = 0;
    if (plVar26 != (long *)0x0) {
      (**(code **)(*plVar26 + 8))();
      local_594 = uVar12;
      _local_59c = iVar46;
      local_5b2 = uVar11;
      uStack_5ba = uVar8;
      local_5c0 = uVar10;
      uStack_600 = uVar39;
      uVar12 = local_594;
      iVar46 = _local_59c;
      uVar11 = local_5b2;
      uVar8 = uStack_5ba;
      cVar5 = local_5c0._1_1_;
      uVar13 = uStack_600._4_4_;
      uVar39 = uStack_600;
      uVar10 = local_5c0;
      uStack_600._4_4_ = uVar13;
      local_5c0._1_1_ = cVar5;
    }
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar18 = local_594._4_4_;
    uVar20 = uStack_598;
    uVar17 = local_5b2._2_6_;
    uVar16 = uStack_5ba._4_4_;
    cVar14 = uStack_5ba._3_1_;
    uVar15 = uStack_5ba._2_1_;
    cVar5 = local_5c0._1_1_;
    uVar13 = uStack_600._4_4_;
    uVar39 = uStack_600;
    uStack_600._4_4_ = uVar13;
    uVar10 = local_5c0;
    local_5c0._1_1_ = cVar5;
    uVar8 = uStack_5ba;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    uVar11 = local_5b2;
    local_5b2._2_6_ = uVar17;
    iVar46 = _local_59c;
    uStack_598 = uVar20;
    uVar12 = local_594;
    local_594._4_4_ = uVar18;
    FUN_710392eb40(uVar23);
    uVar12 = local_594;
    iVar46 = _local_59c;
    uVar11 = local_5b2;
    uVar8 = uStack_5ba;
    uVar10 = local_5c0;
    uVar39 = uStack_600;
    lVar22 = *(long *)(param_1 + 0x58);
    uVar13 = uStack_600._4_4_;
    cVar5 = local_5c0._1_1_;
    uVar15 = uStack_5ba._2_1_;
    cVar14 = uStack_5ba._3_1_;
    uVar16 = uStack_5ba._4_4_;
    uVar17 = local_5b2._2_6_;
    uVar20 = uStack_598;
    uVar18 = local_594._4_4_;
  }
  local_594._4_4_ = uVar18;
  uStack_598 = uVar20;
  local_5b2._2_6_ = uVar17;
  uStack_5ba._4_4_ = uVar16;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._2_1_ = uVar15;
  local_5c0._1_1_ = cVar5;
  uStack_600._4_4_ = uVar13;
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  lVar27 = *(long *)(lVar22 + 0x150);
  plVar26 = (long *)(lVar22 + 0x150);
  uVar39 = uStack_600;
  uStack_600._4_4_ = uVar13;
  uVar10 = local_5c0;
  local_5c0._1_1_ = cVar5;
  uVar8 = uStack_5ba;
  uStack_5ba._2_1_ = uVar15;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._4_4_ = uVar16;
  uVar11 = local_5b2;
  local_5b2._2_6_ = uVar17;
  iVar46 = _local_59c;
  uStack_598 = uVar20;
  uVar12 = local_594;
  local_594._4_4_ = uVar18;
  FUN_710323beb0(lVar27,(ulong *)&DAT_7104544e50,(long)*(int *)(lVar27 + 0x70),
                 (ulong)*(uint *)(lVar27 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  lVar27 = *(long *)(lVar22 + 0x150);
  FUN_710323beb0(lVar27,(ulong *)&DAT_7104544e58,(long)*(int *)(lVar27 + 0x70),
                 (ulong)*(uint *)(lVar27 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  lVar27 = *(long *)(lVar22 + 0x150);
  local_580 = (undefined **)0x1dd5d06117;
  FUN_710323beb0(lVar27,&local_580,(long)*(int *)(lVar27 + 0x70),(ulong)*(uint *)(lVar27 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  lVar27 = *(long *)(lVar22 + 0x150);
  local_580 = (undefined **)0x22f525ad60;
  FUN_710323beb0(lVar27,&local_580,(long)*(int *)(lVar27 + 0x70),(ulong)*(uint *)(lVar27 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  lVar27 = *(long *)(lVar22 + 0x150);
  ppppppppplVar33 = (long *********)(long)*(int *)(lVar27 + 0x70);
  ppppbVar36 = (byte ****)(ulong)*(uint *)(lVar27 + 0x68);
  pppplVar37 = (long ****)0x1;
  FUN_710323beb0(lVar27,(ulong *)&DAT_7104544e60,(long)ppppppppplVar33,(ulong)ppppbVar36,
                 (long ****)0x1,param_6,param_7,param_8);
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  local_580 = (undefined **)FUN_7103238e70(0x71ffff10add0d436,0x13);
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  uVar32 = extraout_x1_02;
  if (((ulong)local_580 & 0xffffffffff) != 0) {
    lVar27 = *plVar26;
    ppppppppplVar33 = (long *********)(long)*(int *)(lVar27 + 0x70);
    ppppbVar36 = (byte ****)(ulong)*(uint *)(lVar27 + 0x68);
    FUN_710323c4e0(lVar27,&local_580,ppppppppplVar33,ppppbVar36,pppplVar37,param_6,param_7,param_8);
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar12 = local_594;
    iVar46 = _local_59c;
    uVar11 = local_5b2;
    uVar15 = uStack_5ba._2_1_;
    uVar8 = uStack_5ba;
    cVar5 = local_5c0._1_1_;
    uVar13 = uStack_600._4_4_;
    uVar32 = extraout_x1_03;
    uVar39 = uStack_600;
    uVar10 = local_5c0;
    uStack_600._4_4_ = uVar13;
    local_5c0._1_1_ = cVar5;
    uStack_5ba._2_1_ = uVar15;
  }
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  lVar27 = *plVar26;
  uVar39 = uStack_600;
  uStack_600._4_4_ = uVar13;
  uVar10 = local_5c0;
  local_5c0._1_1_ = cVar5;
  uVar8 = uStack_5ba;
  uStack_5ba._2_1_ = uVar15;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._4_4_ = uVar16;
  uVar11 = local_5b2;
  local_5b2._2_6_ = uVar17;
  iVar46 = _local_59c;
  uStack_598 = uVar20;
  uVar12 = local_594;
  local_594._4_4_ = uVar18;
  uVar23 = FUN_710323cb80(lVar27,uVar32,ppppppppplVar33,ppppbVar36,pppplVar37,param_6,param_7,
                          param_8);
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  uVar13 = uStack_600._4_4_;
  cVar5 = local_5c0._1_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar14 = uStack_5ba._3_1_;
  uVar16 = uStack_5ba._4_4_;
  uVar17 = local_5b2._2_6_;
  uVar20 = uStack_598;
  uVar18 = local_594._4_4_;
  while (local_594 = uVar12, _local_59c = iVar46, local_5b2 = uVar11, uStack_5ba = uVar8,
        local_5c0 = uVar10, uStack_600 = uVar39, uStack_600._4_4_ = uVar13, local_5c0._1_1_ = cVar5,
        uStack_5ba._2_1_ = uVar15, uStack_5ba._3_1_ = cVar14, uStack_5ba._4_4_ = uVar16,
        local_5b2._2_6_ = uVar17, uStack_598 = uVar20, local_594._4_4_ = uVar18, (uVar23 & 1) == 0)
  {
    uVar39 = uStack_600;
    uVar10 = local_5c0;
    uVar8 = uStack_5ba;
    uVar11 = local_5b2;
    iVar46 = _local_59c;
    uVar12 = local_594;
    nn::os::SleepThread(1000000);
    uVar12 = local_594;
    iVar46 = _local_59c;
    uVar11 = local_5b2;
    uVar8 = uStack_5ba;
    uVar10 = local_5c0;
    uVar39 = uStack_600;
    uVar23 = FUN_710323cb80(lVar27,extraout_x1_04,ppppppppplVar33,ppppbVar36,pppplVar37,param_6,
                            param_7,param_8);
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar12 = local_594;
    iVar46 = _local_59c;
    uVar11 = local_5b2;
    uVar8 = uStack_5ba;
    uVar10 = local_5c0;
    uVar39 = uStack_600;
    uVar13 = uStack_600._4_4_;
    cVar5 = local_5c0._1_1_;
    uVar15 = uStack_5ba._2_1_;
    cVar14 = uStack_5ba._3_1_;
    uVar16 = uStack_5ba._4_4_;
    uVar17 = local_5b2._2_6_;
    uVar20 = uStack_598;
    uVar18 = local_594._4_4_;
  }
  uVar39 = uStack_600;
  uVar10 = local_5c0;
  uVar8 = uStack_5ba;
  uVar11 = local_5b2;
  iVar46 = _local_59c;
  uVar12 = local_594;
  puVar24 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar33,ppppbVar36,pppplVar37,param_6,
                           param_7,param_8);
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  if (puVar24 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a60 = (undefined **)((ulong)local_a60 & 0xffffffff00000000);
      local_580 = (undefined **)&DAT_00000088;
      ppppppppplVar33 = (long *********)&local_580;
      uVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a60);
      local_594 = uVar12;
      _local_59c = iVar46;
      local_5b2 = uVar11;
      uStack_5ba = uVar8;
      local_5c0 = uVar10;
      uStack_600 = uVar39;
      uVar12 = local_594;
      iVar46 = _local_59c;
      uVar11 = local_5b2;
      uVar8 = uStack_5ba;
      uVar10 = local_5c0;
      uVar39 = uStack_600;
      if (((uVar23 & 1) != 0) &&
         (puVar24 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar33,ppppbVar36,pppplVar37,
                                   param_6,param_7,param_8), local_594 = uVar12, _local_59c = iVar46
         , local_5b2 = uVar11, uStack_5ba = uVar8, local_5c0 = uVar10, uStack_600 = uVar39,
         uVar12 = local_594, iVar46 = _local_59c, uVar11 = local_5b2, uVar8 = uStack_5ba,
         uVar10 = local_5c0, uVar39 = uStack_600, puVar24 != (undefined8 *)0x0))
      goto LAB_7101856ee0;
    }
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar18 = local_594._4_4_;
    uVar20 = uStack_598;
    uVar17 = local_5b2._2_6_;
    uVar16 = uStack_5ba._4_4_;
    cVar14 = uStack_5ba._3_1_;
    uVar15 = uStack_5ba._2_1_;
    cVar5 = local_5c0._1_1_;
    uVar13 = uStack_600._4_4_;
    puVar24 = (undefined8 *)0x0;
    uVar39 = uStack_600;
    uVar10 = local_5c0;
    uVar8 = uStack_5ba;
    uVar11 = local_5b2;
    iVar46 = _local_59c;
    uVar12 = local_594;
    uStack_600._4_4_ = uVar13;
    local_5c0._1_1_ = cVar5;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    local_5b2._2_6_ = uVar17;
    uStack_598 = uVar20;
    local_594._4_4_ = uVar18;
  }
LAB_7101856ee0:
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  *puVar24 = &PTR_FUN_71050ac320;
  puVar24[1] = 0;
  *(undefined1 *)(puVar24 + 0xb) = 0;
  puVar24[2] = 0;
  puVar24[3] = 0;
  puVar24[0xf] = plVar26;
  *(undefined1 *)(puVar24 + 0xe) = 1;
  puVar24[9] = 0;
  puVar24[10] = 0;
  puVar24[0xc] = 0;
  puVar24[0xd] = 0x1ffffffff;
  uVar39 = uStack_600;
  uStack_600._4_4_ = uVar13;
  uVar10 = local_5c0;
  local_5c0._1_1_ = cVar5;
  uVar8 = uStack_5ba;
  uStack_5ba._2_1_ = uVar15;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._4_4_ = uVar16;
  uVar11 = local_5b2;
  local_5b2._2_6_ = uVar17;
  iVar46 = _local_59c;
  uStack_598 = uVar20;
  uVar12 = local_594;
  local_594._4_4_ = uVar18;
  puVar28 = (undefined8 *)
            FUN_710392e290(0x10,0x1d0,(long ****)ppppppppplVar33,ppppbVar36,pppplVar37,param_6,
                           param_7,param_8);
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  if (puVar28 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a60 = (undefined **)((ulong)local_a60 & 0xffffffff00000000);
      local_580 = (undefined **)&DAT_000001d0;
      ppppppppplVar33 = (long *********)&local_580;
      uVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a60);
      local_594 = uVar12;
      _local_59c = iVar46;
      local_5b2 = uVar11;
      uStack_5ba = uVar8;
      local_5c0 = uVar10;
      uStack_600 = uVar39;
      uVar12 = local_594;
      iVar46 = _local_59c;
      uVar11 = local_5b2;
      uVar8 = uStack_5ba;
      uVar10 = local_5c0;
      uVar39 = uStack_600;
      if (((uVar23 & 1) != 0) &&
         (puVar28 = (undefined8 *)
                    FUN_710392e290(0x10,0x1d0,(long ****)ppppppppplVar33,ppppbVar36,pppplVar37,
                                   param_6,param_7,param_8), local_594 = uVar12, _local_59c = iVar46
         , local_5b2 = uVar11, uStack_5ba = uVar8, local_5c0 = uVar10, uStack_600 = uVar39,
         uVar12 = local_594, iVar46 = _local_59c, uVar11 = local_5b2, uVar8 = uStack_5ba,
         uVar10 = local_5c0, uVar39 = uStack_600, puVar28 != (undefined8 *)0x0))
      goto LAB_7101856f68;
    }
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar18 = local_594._4_4_;
    uVar20 = uStack_598;
    uVar17 = local_5b2._2_6_;
    uVar16 = uStack_5ba._4_4_;
    cVar14 = uStack_5ba._3_1_;
    uVar15 = uStack_5ba._2_1_;
    cVar5 = local_5c0._1_1_;
    uVar13 = uStack_600._4_4_;
    puVar28 = (undefined8 *)0x0;
    uVar39 = uStack_600;
    uVar10 = local_5c0;
    uVar8 = uStack_5ba;
    uVar11 = local_5b2;
    iVar46 = _local_59c;
    uVar12 = local_594;
    uStack_600._4_4_ = uVar13;
    local_5c0._1_1_ = cVar5;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    local_5b2._2_6_ = uVar17;
    uStack_598 = uVar20;
    local_594._4_4_ = uVar18;
  }
LAB_7101856f68:
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  *(undefined4 *)(puVar28 + 1) = 0x1000;
  puVar28[2] = 0;
  puVar28[3] = 0;
  puVar28[4] = 0;
  puVar28[6] = 0;
  puVar28[5] = puVar28 + 6;
  puVar28[9] = plVar26;
  puVar28[10] = &PTR_FUN_71050ac3a0;
  *(undefined2 *)(puVar28 + 0x28) = 0x100;
  puVar28[7] = 0;
  puVar28[8] = 0;
  *puVar28 = &DAT_71050ac358;
  puVar28[0xd] = 0;
  *(undefined4 *)(puVar28 + 0x26) = 0xffffffff;
  *(undefined1 *)((long)puVar28 + 0x134) = 0;
  *(undefined4 *)((long)puVar28 + 0x144) = 0x4001;
  *(undefined1 *)(puVar28 + 0x29) = 1;
  *(undefined4 *)((long)puVar28 + 0x14c) = 1;
  *(undefined1 *)(puVar28 + 0x2a) = 0;
  puVar28[0x27] = &PTR_FUN_71050ac4b8;
  puVar28[0xb] = puVar28;
  puVar28[0xc] = puVar28;
  puVar28[0x24] = 0;
  puVar28[0x25] = 0xffffffff;
  puVar28[0xe] = 0;
  puVar28[0xf] = 0;
  puVar28[0x22] = 0;
  puVar28[0x23] = 0;
  puVar28[0x20] = 0;
  puVar28[0x21] = 0;
  puVar28[0x1e] = 0;
  puVar28[0x1f] = 0;
  puVar28[0x1c] = 0;
  puVar28[0x1d] = 0;
  puVar28[0x1a] = 0;
  puVar28[0x1b] = 0;
  puVar28[0x18] = 0;
  puVar28[0x19] = 0;
  puVar28[0x16] = 0;
  puVar28[0x17] = 0;
  puVar28[0x14] = 0;
  puVar28[0x15] = 0;
  puVar28[0x12] = 0;
  puVar28[0x13] = 0;
  puVar28[0x10] = 0;
  puVar28[0x11] = 0;
  uVar39 = uStack_600;
  uStack_600._4_4_ = uVar13;
  uVar10 = local_5c0;
  local_5c0._1_1_ = cVar5;
  uVar8 = uStack_5ba;
  uStack_5ba._2_1_ = uVar15;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._4_4_ = uVar16;
  uVar11 = local_5b2;
  local_5b2._2_6_ = uVar17;
  iVar46 = _local_59c;
  uStack_598 = uVar20;
  uVar12 = local_594;
  local_594._4_4_ = uVar18;
  puVar29 = (undefined8 *)
            FUN_710392e290(0x10,0xf0,(long ****)ppppppppplVar33,ppppbVar36,pppplVar37,param_6,
                           param_7,param_8);
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  if (puVar29 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a60 = (undefined **)((ulong)local_a60 & 0xffffffff00000000);
      local_580 = (undefined **)&DAT_000000f0;
      pppplVar35 = (long ****)&local_580;
      uVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a60);
      local_594 = uVar12;
      _local_59c = iVar46;
      local_5b2 = uVar11;
      uStack_5ba = uVar8;
      local_5c0 = uVar10;
      uStack_600 = uVar39;
      uVar12 = local_594;
      iVar46 = _local_59c;
      uVar11 = local_5b2;
      uVar8 = uStack_5ba;
      uVar10 = local_5c0;
      uVar39 = uStack_600;
      if (((uVar23 & 1) != 0) &&
         (puVar29 = (undefined8 *)
                    FUN_710392e290(0x10,0xf0,pppplVar35,ppppbVar36,pppplVar37,param_6,param_7,
                                   param_8), local_594 = uVar12, _local_59c = iVar46,
         local_5b2 = uVar11, uStack_5ba = uVar8, local_5c0 = uVar10, uStack_600 = uVar39,
         uVar12 = local_594, iVar46 = _local_59c, uVar11 = local_5b2, uVar8 = uStack_5ba,
         uVar10 = local_5c0, uVar39 = uStack_600, puVar29 != (undefined8 *)0x0))
      goto LAB_7101857068;
    }
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar18 = local_594._4_4_;
    uVar20 = uStack_598;
    uVar17 = local_5b2._2_6_;
    uVar16 = uStack_5ba._4_4_;
    cVar14 = uStack_5ba._3_1_;
    uVar15 = uStack_5ba._2_1_;
    cVar5 = local_5c0._1_1_;
    uVar13 = uStack_600._4_4_;
    puVar29 = (undefined8 *)0x0;
    uVar39 = uStack_600;
    uVar10 = local_5c0;
    uVar8 = uStack_5ba;
    uVar11 = local_5b2;
    iVar46 = _local_59c;
    uVar12 = local_594;
    uStack_600._4_4_ = uVar13;
    local_5c0._1_1_ = cVar5;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    local_5b2._2_6_ = uVar17;
    uStack_598 = uVar20;
    local_594._4_4_ = uVar18;
  }
LAB_7101857068:
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  *(undefined4 *)(puVar29 + 0x1a) = 0xffffffff;
  puVar29[6] = 0;
  puVar29[7] = FUN_7101bde1a0;
  puVar29[8] = 0;
  puVar29[9] = FUN_7101bde1b0;
  puVar29[10] = 0;
  puVar29[0xb] = FUN_7101bde370;
  ppuVar34 = &PTR_DAT_71050ac300;
  *puVar29 = puVar28 + 0x27;
  puVar29[1] = plVar26;
  ppppbVar36 = (byte ****)0x21aef10d66;
  pppplVar37 = (long ****)0x1;
  puVar29[4] = 0;
  puVar29[5] = 0;
  *(undefined1 *)((long)puVar29 + 0xd4) = 0;
  puVar29[0x1d] = 0xffffffff;
  puVar29[2] = puVar29;
  puVar29[3] = 0;
  puVar29[0x18] = 0;
  puVar29[0x19] = 0xffffffff;
  puVar29[0x16] = 0;
  puVar29[0x17] = 0;
  puVar29[0x14] = 0;
  puVar29[0x15] = 0;
  puVar29[0x12] = 0;
  puVar29[0x13] = 0;
  puVar29[0x10] = 0;
  puVar29[0x11] = 0;
  puVar29[0xe] = 0;
  puVar29[0xf] = 0;
  *(undefined4 *)(puVar29 + 0xf) = 0;
  puVar29[0x1b] = 0;
  puVar29[0x1c] = 0;
  puVar29[0xc] = 0;
  puVar29[0xd] = FUN_7101bde490;
  puVar28[0x2b] = puVar29;
  *(undefined4 *)(puVar28 + 0x2c) = 0xffffffff;
  lVar27 = DAT_710532f840;
  puVar28[0x2d] = *(undefined8 *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
  uVar39 = *(undefined8 *)(*(long *)(lVar27 + 8) + 0xc0);
  *(undefined4 *)((long)puVar28 + 0x1b4) = 0;
  *(undefined2 *)(puVar28 + 0x36) = 0;
  puVar28[0x34] = 0;
  puVar28[0x35] = 0;
  puVar28[0x32] = 0;
  puVar28[0x33] = 0;
  puVar28[0x30] = 0;
  puVar28[0x31] = 0;
  puVar28[0x2e] = uVar39;
  puVar28[0x2f] = 0;
  puVar28[0x37] = 0xffffffffffffffff;
  puVar28[0x38] = 0xffffffff;
  uVar39 = uStack_600;
  uStack_600._4_4_ = uVar13;
  uVar10 = local_5c0;
  local_5c0._1_1_ = cVar5;
  uVar8 = uStack_5ba;
  uStack_5ba._2_1_ = uVar15;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._4_4_ = uVar16;
  uVar11 = local_5b2;
  local_5b2._2_6_ = uVar17;
  iVar46 = _local_59c;
  uStack_598 = uVar20;
  uVar12 = local_594;
  local_594._4_4_ = uVar18;
  FUN_71032cb040((long)puVar28,plVar26,(long ****)&PTR_DAT_71050ac300,(byte ****)0x21aef10d66,
                 (long ****)0x1,param_6,param_7,param_8);
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  local_580 = (undefined **)FUN_7103238e70(0x71ffff11a65e8b53,0x13);
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  if (((ulong)local_580 & 0xffffffffff) != 0) {
    lVar27 = *plVar26;
    ppuVar34 = (undefined **)(long)*(int *)(lVar27 + 0x70);
    ppppbVar36 = (byte ****)(ulong)*(uint *)(lVar27 + 0x68);
    FUN_710323c4e0(lVar27,&local_580,(long *********)ppuVar34,ppppbVar36,pppplVar37,param_6,param_7,
                   param_8);
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar12 = local_594;
    iVar46 = _local_59c;
    uVar11 = local_5b2;
    uVar8 = uStack_5ba;
    uVar10 = local_5c0;
    uVar39 = uStack_600;
  }
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  uVar39 = uStack_600;
  uStack_600._4_4_ = uVar13;
  uVar10 = local_5c0;
  local_5c0._1_1_ = cVar5;
  uVar8 = uStack_5ba;
  uStack_5ba._2_1_ = uVar15;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._4_4_ = uVar16;
  uVar11 = local_5b2;
  local_5b2._2_6_ = uVar17;
  iVar46 = _local_59c;
  uStack_598 = uVar20;
  uVar12 = local_594;
  local_594._4_4_ = uVar18;
  local_580 = (undefined **)FUN_7103238e70(0x71ffff12bf2b2922,0x13);
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  if (((ulong)local_580 & 0xffffffffff) != 0) {
    lVar27 = *plVar26;
    ppuVar34 = (undefined **)(long)*(int *)(lVar27 + 0x70);
    ppppbVar36 = (byte ****)(ulong)*(uint *)(lVar27 + 0x68);
    FUN_710323c4e0(lVar27,&local_580,(long *********)ppuVar34,ppppbVar36,pppplVar37,param_6,param_7,
                   param_8);
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar12 = local_594;
    iVar46 = _local_59c;
    uVar11 = local_5b2;
    uVar8 = uStack_5ba;
    uVar10 = local_5c0;
    uVar39 = uStack_600;
  }
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  uVar39 = uStack_600;
  uStack_600._4_4_ = uVar13;
  uVar10 = local_5c0;
  local_5c0._1_1_ = cVar5;
  uVar8 = uStack_5ba;
  uStack_5ba._2_1_ = uVar15;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._4_4_ = uVar16;
  uVar11 = local_5b2;
  local_5b2._2_6_ = uVar17;
  iVar46 = _local_59c;
  uStack_598 = uVar20;
  uVar12 = local_594;
  local_594._4_4_ = uVar18;
  local_580 = (undefined **)FUN_7103238e70(0x71ffff0f83b14356,0x13);
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  if (((ulong)local_580 & 0xffffffffff) != 0) {
    lVar27 = *plVar26;
    ppuVar34 = (undefined **)(long)*(int *)(lVar27 + 0x70);
    ppppbVar36 = (byte ****)(ulong)*(uint *)(lVar27 + 0x68);
    FUN_710323c4e0(lVar27,&local_580,(long *********)ppuVar34,ppppbVar36,pppplVar37,param_6,param_7,
                   param_8);
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar12 = local_594;
    iVar46 = _local_59c;
    uVar11 = local_5b2;
    uVar8 = uStack_5ba;
    uVar10 = local_5c0;
    uVar39 = uStack_600;
  }
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  local_af0 = (ulong *)0x0;
  lVar50 = *(long *)(DAT_710532f730 + 8);
  lVar27 = *(long *)(*(long *)(lVar50 + 0x2e8) + 8);
  pcVar40 = *(char **)(lVar27 + 0x20);
  if ((*pcVar40 == '\f') && (iVar46 = *(int *)(pcVar40 + 1) + -1, 0 < *(int *)(pcVar40 + 1))) {
    iVar21 = 0;
    uVar23 = *(ulong *)(lVar27 + 0x48) & 0xffffffffff;
    pbVar42 = &DAT_7104742dbb;
    do {
      iVar3 = iVar46 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*(long *)(lVar27 + 0x18) + 0x28) + (long)*(int *)(pcVar40 + 5) +
                       (long)iVar3 * 8);
      uVar49 = *(ulong *)(*(long *)(*(long *)(lVar27 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
      if (uVar49 == uVar23) {
        uVar52 = puVar1[1];
        if ((int)uVar52 < 0) goto LAB_710185728c;
        pbVar42 = (byte *)(pcVar40 + (int)uVar52);
        break;
      }
      iVar9 = iVar3 + -1;
      if (uVar49 <= uVar23) {
        iVar21 = iVar3 + 1;
        iVar9 = iVar46;
      }
      iVar46 = iVar9;
    } while (iVar21 <= iVar46);
  }
  else {
LAB_710185728c:
    pbVar42 = &DAT_7104742dbb;
  }
  if (*pbVar42 - 0xb < 2) {
    iVar21 = *(int *)(pbVar42 + 1);
    if (iVar21 != 0) {
      uVar39 = uStack_600;
      uVar10 = local_5c0;
      uVar8 = uStack_5ba;
      uVar11 = local_5b2;
      iVar46 = _local_59c;
      uVar12 = local_594;
      if (iVar21 < 0) goto LAB_7101859190;
      pppppppplVar53 = (long ********)((long)iVar21 << 3);
      uStack_600._4_4_ = uVar13;
      local_5c0._1_1_ = cVar5;
      uStack_5ba._2_1_ = uVar15;
      uStack_5ba._3_1_ = cVar14;
      uStack_5ba._4_4_ = uVar16;
      local_5b2._2_6_ = uVar17;
      uStack_598 = uVar20;
      local_594._4_4_ = uVar18;
      local_af0 = (ulong *)FUN_710392e290(0x10,pppppppplVar53,(long ****)ppuVar34,ppppbVar36,
                                          pppplVar37,param_6,param_7,param_8);
      uVar18 = local_594._4_4_;
      uVar20 = uStack_598;
      uVar17 = local_5b2._2_6_;
      uVar16 = uStack_5ba._4_4_;
      cVar14 = uStack_5ba._3_1_;
      uVar15 = uStack_5ba._2_1_;
      cVar5 = local_5c0._1_1_;
      uVar13 = uStack_600._4_4_;
      uVar39 = uStack_600;
      uVar10 = local_5c0;
      uVar8 = uStack_5ba;
      uVar11 = local_5b2;
      iVar46 = _local_59c;
      uVar12 = local_594;
      if (local_af0 == (ulong *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_a60 = (undefined **)((ulong)local_a60 & 0xffffffff00000000);
          ppuVar34 = (undefined **)&local_580;
          local_580 = (undefined **)pppppppplVar53;
          uStack_600._4_4_ = uVar13;
          local_5c0._1_1_ = cVar5;
          uStack_5ba._2_1_ = uVar15;
          uStack_5ba._3_1_ = cVar14;
          uStack_5ba._4_4_ = uVar16;
          local_5b2._2_6_ = uVar17;
          uStack_598 = uVar20;
          local_594._4_4_ = uVar18;
          uVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a60);
          uVar12 = local_594;
          iVar46 = _local_59c;
          uVar11 = local_5b2;
          uVar8 = uStack_5ba;
          uVar10 = local_5c0;
          uVar39 = uStack_600;
          uVar13 = uStack_600._4_4_;
          cVar5 = local_5c0._1_1_;
          uVar15 = uStack_5ba._2_1_;
          cVar14 = uStack_5ba._3_1_;
          uVar16 = uStack_5ba._4_4_;
          uVar17 = local_5b2._2_6_;
          uVar20 = uStack_598;
          uVar18 = local_594._4_4_;
          if (((uVar23 & 1) != 0) &&
             (local_af0 = (ulong *)FUN_710392e290(0x10,pppppppplVar53,(long ****)ppuVar34,ppppbVar36
                                                  ,pppplVar37,param_6,param_7,param_8),
             local_594 = uVar12, _local_59c = iVar46, local_5b2 = uVar11, uStack_5ba = uVar8,
             local_5c0 = uVar10, uStack_600 = uVar39, uVar12 = local_594, iVar46 = _local_59c,
             uVar11 = local_5b2, uVar8 = uStack_5ba, uVar10 = local_5c0, uVar39 = uStack_600,
             uVar13 = uStack_600._4_4_, cVar5 = local_5c0._1_1_, uVar15 = uStack_5ba._2_1_,
             cVar14 = uStack_5ba._3_1_, uVar16 = uStack_5ba._4_4_, uVar17 = local_5b2._2_6_,
             uVar20 = uStack_598, uVar18 = local_594._4_4_, local_af0 != (ulong *)0x0))
          goto LAB_7101857318;
        }
        local_594._4_4_ = uVar18;
        uStack_598 = uVar20;
        local_5b2._2_6_ = uVar17;
        uStack_5ba._4_4_ = uVar16;
        uStack_5ba._3_1_ = cVar14;
        uStack_5ba._2_1_ = uVar15;
        local_5c0._1_1_ = cVar5;
        uStack_600._4_4_ = uVar13;
        local_594 = uVar12;
        _local_59c = iVar46;
        local_5b2 = uVar11;
        uStack_5ba = uVar8;
        local_5c0 = uVar10;
        uStack_600 = uVar39;
        uVar18 = local_594._4_4_;
        uVar20 = uStack_598;
        uVar17 = local_5b2._2_6_;
        uVar16 = uStack_5ba._4_4_;
        cVar14 = uStack_5ba._3_1_;
        uVar15 = uStack_5ba._2_1_;
        cVar5 = local_5c0._1_1_;
        uVar13 = uStack_600._4_4_;
        local_af0 = (ulong *)0x0;
        uVar39 = uStack_600;
        uVar10 = local_5c0;
        uVar8 = uStack_5ba;
        uVar11 = local_5b2;
        iVar46 = _local_59c;
        uVar12 = local_594;
      }
LAB_7101857318:
      local_594._4_4_ = uVar18;
      uStack_598 = uVar20;
      local_5b2._2_6_ = uVar17;
      uStack_5ba._4_4_ = uVar16;
      uStack_5ba._3_1_ = cVar14;
      uStack_5ba._2_1_ = uVar15;
      local_5c0._1_1_ = cVar5;
      uStack_600._4_4_ = uVar13;
      local_594 = uVar12;
      _local_59c = iVar46;
      local_5b2 = uVar11;
      uStack_5ba = uVar8;
      local_5c0 = uVar10;
      uStack_600 = uVar39;
      uVar18 = local_594._4_4_;
      uVar20 = uStack_598;
      uVar17 = local_5b2._2_6_;
      uVar16 = uStack_5ba._4_4_;
      cVar14 = uStack_5ba._3_1_;
      uVar15 = uStack_5ba._2_1_;
      cVar5 = local_5c0._1_1_;
      uVar13 = uStack_600._4_4_;
      local_ae0 = local_af0 + iVar21;
      uVar52 = 0;
      local_ae8 = local_af0;
      do {
        local_594._4_4_ = uVar18;
        uStack_598 = uVar20;
        local_5b2._2_6_ = uVar17;
        uStack_5ba._4_4_ = uVar16;
        uStack_5ba._3_1_ = cVar14;
        uStack_5ba._2_1_ = uVar15;
        local_5c0._1_1_ = cVar5;
        uStack_600._4_4_ = uVar13;
        uVar18 = local_594._4_4_;
        uVar20 = uStack_598;
        uVar17 = local_5b2._2_6_;
        uVar16 = uStack_5ba._4_4_;
        cVar14 = uStack_5ba._3_1_;
        uVar15 = uStack_5ba._2_1_;
        cVar5 = local_5c0._1_1_;
        uVar13 = uStack_600._4_4_;
        uVar39 = uStack_600;
        uStack_600._4_4_ = uVar13;
        uVar10 = local_5c0;
        local_5c0._1_1_ = cVar5;
        uVar8 = uStack_5ba;
        uStack_5ba._2_1_ = uVar15;
        uStack_5ba._3_1_ = cVar14;
        uStack_5ba._4_4_ = uVar16;
        uVar11 = local_5b2;
        local_5b2._2_6_ = uVar17;
        iVar46 = _local_59c;
        uStack_598 = uVar20;
        uVar12 = local_594;
        local_594._4_4_ = uVar18;
        uVar23 = FUN_7103293b70(*(long *)(*(long *)(lVar50 + 0x2e8) + 8),uVar52);
        uVar12 = local_594;
        iVar46 = _local_59c;
        uVar11 = local_5b2;
        uVar8 = uStack_5ba;
        uVar10 = local_5c0;
        uVar39 = uStack_600;
        if (local_ae8 < local_ae0) {
          *local_ae8 = uVar23;
          local_ae8 = local_ae8 + 1;
          puVar30 = local_af0;
          uVar13 = uStack_600._4_4_;
          cVar5 = local_5c0._1_1_;
          uVar15 = uStack_5ba._2_1_;
          cVar14 = uStack_5ba._3_1_;
          uVar16 = uStack_5ba._4_4_;
          uVar17 = local_5b2._2_6_;
          uVar20 = uStack_598;
          uVar18 = local_594._4_4_;
        }
        else {
          ppppppppplVar33 = (long *********)((long)local_ae8 - (long)local_af0);
          uVar49 = ((long)ppppppppplVar33 >> 3) + 1;
          if (uVar49 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          if ((ulong)((long)local_ae0 - (long)local_af0 >> 3) < 0xfffffffffffffff) {
            uVar43 = (long)local_ae0 - (long)local_af0 >> 2;
            if (uVar49 <= uVar43) {
              uVar49 = uVar43;
            }
            uVar13 = uStack_600._4_4_;
            cVar5 = local_5c0._1_1_;
            uVar15 = uStack_5ba._2_1_;
            cVar14 = uStack_5ba._3_1_;
            uVar16 = uStack_5ba._4_4_;
            uVar17 = local_5b2._2_6_;
            uVar20 = uStack_598;
            uVar18 = local_594._4_4_;
            if (uVar49 != 0) {
              if (uVar49 >> 0x3d == 0) goto LAB_71018573ac;
              goto LAB_7101859190;
            }
LAB_710185740c:
            local_594._4_4_ = uVar18;
            uStack_598 = uVar20;
            local_5b2._2_6_ = uVar17;
            uStack_5ba._4_4_ = uVar16;
            uStack_5ba._3_1_ = cVar14;
            uStack_5ba._2_1_ = uVar15;
            local_5c0._1_1_ = cVar5;
            uStack_600._4_4_ = uVar13;
            local_594 = uVar12;
            _local_59c = iVar46;
            local_5b2 = uVar11;
            uStack_5ba = uVar8;
            local_5c0 = uVar10;
            uStack_600 = uVar39;
            uVar18 = local_594._4_4_;
            uVar20 = uStack_598;
            uVar17 = local_5b2._2_6_;
            uVar16 = uStack_5ba._4_4_;
            cVar14 = uStack_5ba._3_1_;
            uVar15 = uStack_5ba._2_1_;
            cVar5 = local_5c0._1_1_;
            uVar13 = uStack_600._4_4_;
            puVar30 = (ulong *)0x0;
            uVar39 = uStack_600;
            uVar10 = local_5c0;
            uVar8 = uStack_5ba;
            uVar11 = local_5b2;
            iVar46 = _local_59c;
            uVar12 = local_594;
          }
          else {
            uVar49 = 0x1fffffffffffffff;
LAB_71018573ac:
            pppppppplVar53 = (long ********)(uVar49 * 8);
            if (pppppppplVar53 == (long ********)0x0) {
              pppppppplVar53 = (long ********)0x1;
            }
            puVar30 = (ulong *)FUN_710392e290(0x10,pppppppplVar53,(long ****)ppuVar34,ppppbVar36,
                                              pppplVar37,param_6,param_7,param_8);
            local_594 = uVar12;
            _local_59c = iVar46;
            local_5b2 = uVar11;
            uStack_5ba = uVar8;
            local_5c0 = uVar10;
            uStack_600 = uVar39;
            uVar18 = local_594._4_4_;
            uVar20 = uStack_598;
            uVar17 = local_5b2._2_6_;
            uVar16 = uStack_5ba._4_4_;
            cVar14 = uStack_5ba._3_1_;
            uVar15 = uStack_5ba._2_1_;
            cVar5 = local_5c0._1_1_;
            uVar13 = uStack_600._4_4_;
            uVar39 = uStack_600;
            uVar10 = local_5c0;
            uVar8 = uStack_5ba;
            uVar11 = local_5b2;
            iVar46 = _local_59c;
            uVar12 = local_594;
            if (puVar30 == (ulong *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_a60 = (undefined **)((ulong)local_a60 & 0xffffffff00000000);
                ppuVar34 = (undefined **)&local_580;
                local_580 = (undefined **)pppppppplVar53;
                uStack_600._4_4_ = uVar13;
                local_5c0._1_1_ = cVar5;
                uStack_5ba._2_1_ = uVar15;
                uStack_5ba._3_1_ = cVar14;
                uStack_5ba._4_4_ = uVar16;
                local_5b2._2_6_ = uVar17;
                uStack_598 = uVar20;
                local_594._4_4_ = uVar18;
                uVar43 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a60);
                uVar12 = local_594;
                iVar46 = _local_59c;
                uVar11 = local_5b2;
                uVar8 = uStack_5ba;
                uVar10 = local_5c0;
                uVar39 = uStack_600;
                uVar13 = uStack_600._4_4_;
                cVar5 = local_5c0._1_1_;
                uVar15 = uStack_5ba._2_1_;
                cVar14 = uStack_5ba._3_1_;
                uVar16 = uStack_5ba._4_4_;
                uVar17 = local_5b2._2_6_;
                uVar20 = uStack_598;
                uVar18 = local_594._4_4_;
                if (((uVar43 & 1) != 0) &&
                   (puVar30 = (ulong *)FUN_710392e290(0x10,pppppppplVar53,(long ****)ppuVar34,
                                                      ppppbVar36,pppplVar37,param_6,param_7,param_8)
                   , local_594 = uVar12, _local_59c = iVar46, local_5b2 = uVar11, uStack_5ba = uVar8
                   , local_5c0 = uVar10, uStack_600 = uVar39, uVar12 = local_594,
                   iVar46 = _local_59c, uVar11 = local_5b2, uVar8 = uStack_5ba, uVar10 = local_5c0,
                   uVar39 = uStack_600, uVar13 = uStack_600._4_4_, cVar5 = local_5c0._1_1_,
                   uVar15 = uStack_5ba._2_1_, cVar14 = uStack_5ba._3_1_, uVar16 = uStack_5ba._4_4_,
                   uVar17 = local_5b2._2_6_, uVar20 = uStack_598, uVar18 = local_594._4_4_,
                   puVar30 != (ulong *)0x0)) goto LAB_7101857410;
              }
              goto LAB_710185740c;
            }
          }
LAB_7101857410:
          local_594._4_4_ = uVar18;
          uStack_598 = uVar20;
          local_5b2._2_6_ = uVar17;
          uStack_5ba._4_4_ = uVar16;
          uStack_5ba._3_1_ = cVar14;
          uStack_5ba._2_1_ = uVar15;
          local_5c0._1_1_ = cVar5;
          uStack_600._4_4_ = uVar13;
          local_594 = uVar12;
          _local_59c = iVar46;
          local_5b2 = uVar11;
          uStack_5ba = uVar8;
          local_5c0 = uVar10;
          uStack_600 = uVar39;
          uVar18 = local_594._4_4_;
          uVar20 = uStack_598;
          uVar17 = local_5b2._2_6_;
          uVar16 = uStack_5ba._4_4_;
          cVar14 = uStack_5ba._3_1_;
          uVar15 = uStack_5ba._2_1_;
          cVar5 = local_5c0._1_1_;
          uVar13 = uStack_600._4_4_;
          local_ae0 = puVar30 + uVar49;
          local_ae8 = puVar30 + ((long)ppppppppplVar33 >> 3) + 1;
          puVar30[(long)ppppppppplVar33 >> 3] = uVar23;
          uVar39 = uStack_5ba;
          uVar8 = local_5b2;
          iVar46 = _local_59c;
          uVar11 = local_594;
          if (0 < (long)ppppppppplVar33) {
            uVar39 = uStack_600;
            uStack_600._4_4_ = uVar13;
            uVar10 = local_5c0;
            local_5c0._1_1_ = cVar5;
            uVar8 = uStack_5ba;
            uStack_5ba._2_1_ = uVar15;
            uStack_5ba._3_1_ = cVar14;
            uStack_5ba._4_4_ = uVar16;
            uVar11 = local_5b2;
            local_5b2._2_6_ = uVar17;
            uStack_598 = uVar20;
            uVar12 = local_594;
            local_594._4_4_ = uVar18;
            memcpy(puVar30,local_af0,(size_t)ppppppppplVar33);
            uVar11 = local_594;
            iVar46 = _local_59c;
            uVar8 = local_5b2;
            uVar39 = uStack_5ba;
            cVar5 = local_5c0._1_1_;
            uVar13 = uStack_600._4_4_;
            ppuVar34 = (undefined **)ppppppppplVar33;
            uVar15 = uStack_5ba._2_1_;
            cVar14 = uStack_5ba._3_1_;
            uVar16 = uStack_5ba._4_4_;
            uVar17 = local_5b2._2_6_;
            uVar20 = uStack_598;
            uVar18 = local_594._4_4_;
          }
          local_594._4_4_ = uVar18;
          uStack_598 = uVar20;
          local_5b2._2_6_ = uVar17;
          uStack_5ba._4_4_ = uVar16;
          uStack_5ba._3_1_ = cVar14;
          uStack_5ba._2_1_ = uVar15;
          local_5c0._1_1_ = cVar5;
          uStack_600._4_4_ = uVar13;
          local_594 = uVar11;
          _local_59c = iVar46;
          local_5b2 = uVar8;
          uStack_5ba = uVar39;
          uVar18 = local_594._4_4_;
          uVar20 = uStack_598;
          uVar17 = local_5b2._2_6_;
          uVar16 = uStack_5ba._4_4_;
          cVar14 = uStack_5ba._3_1_;
          uVar15 = uStack_5ba._2_1_;
          cVar5 = local_5c0._1_1_;
          uVar13 = uStack_600._4_4_;
          uVar39 = uStack_600;
          uVar10 = local_5c0;
          uVar8 = uStack_5ba;
          uVar11 = local_5b2;
          iVar46 = _local_59c;
          uVar12 = local_594;
          if (local_af0 != (ulong *)0x0) {
            uStack_600._4_4_ = uVar13;
            local_5c0._1_1_ = cVar5;
            uStack_5ba._2_1_ = uVar15;
            uStack_5ba._3_1_ = cVar14;
            uStack_5ba._4_4_ = uVar16;
            local_5b2._2_6_ = uVar17;
            uStack_598 = uVar20;
            local_594._4_4_ = uVar18;
            FUN_710392eb40((ulong)local_af0);
            uVar12 = local_594;
            iVar46 = _local_59c;
            uVar11 = local_5b2;
            uVar15 = uStack_5ba._2_1_;
            uVar8 = uStack_5ba;
            cVar5 = local_5c0._1_1_;
            uVar13 = uStack_600._4_4_;
            uVar39 = uStack_600;
            uVar10 = local_5c0;
            cVar14 = uStack_5ba._3_1_;
            uVar16 = uStack_5ba._4_4_;
            uVar17 = local_5b2._2_6_;
            uVar20 = uStack_598;
            uVar18 = local_594._4_4_;
          }
        }
        local_594._4_4_ = uVar18;
        uStack_598 = uVar20;
        local_5b2._2_6_ = uVar17;
        uStack_5ba._4_4_ = uVar16;
        uStack_5ba._3_1_ = cVar14;
        uStack_5ba._2_1_ = uVar15;
        local_5c0._1_1_ = cVar5;
        uStack_600._4_4_ = uVar13;
        local_594 = uVar12;
        _local_59c = iVar46;
        local_5b2 = uVar11;
        uStack_5ba = uVar8;
        local_5c0 = uVar10;
        uStack_600 = uVar39;
        local_af0 = puVar30;
        uVar18 = local_594._4_4_;
        uVar20 = uStack_598;
        uVar17 = local_5b2._2_6_;
        uVar16 = uStack_5ba._4_4_;
        cVar14 = uStack_5ba._3_1_;
        uVar15 = uStack_5ba._2_1_;
        cVar5 = local_5c0._1_1_;
        uVar13 = uStack_600._4_4_;
        uVar52 = uVar52 + 1;
        puVar30 = local_af0;
      } while ((int)uVar52 < iVar21);
      for (; puVar30 != local_ae8; puVar30 = puVar30 + 1) {
        uVar39 = uStack_600;
        uStack_600._4_4_ = uVar13;
        uVar10 = local_5c0;
        local_5c0._1_1_ = cVar5;
        uVar8 = uStack_5ba;
        uStack_5ba._2_1_ = uVar15;
        uStack_5ba._3_1_ = cVar14;
        uStack_5ba._4_4_ = uVar16;
        uVar11 = local_5b2;
        local_5b2._2_6_ = uVar17;
        iVar46 = _local_59c;
        uStack_598 = uVar20;
        uVar12 = local_594;
        local_594._4_4_ = uVar18;
        local_580 = (undefined **)FUN_7103239360(*puVar30);
        uVar12 = local_594;
        iVar46 = _local_59c;
        uVar11 = local_5b2;
        uVar8 = uStack_5ba;
        uVar10 = local_5c0;
        uVar39 = uStack_600;
        if (((ulong)local_580 & 0xffffffffff) != 0) {
          lVar27 = *plVar26;
          FUN_710323c4e0(lVar27,&local_580,(long *********)(long)*(int *)(lVar27 + 0x70),
                         (byte ****)(ulong)*(uint *)(lVar27 + 0x68),pppplVar37,param_6,param_7,
                         param_8);
          local_594 = uVar12;
          _local_59c = iVar46;
          local_5b2 = uVar11;
          uStack_5ba = uVar8;
          local_5c0 = uVar10;
          uStack_600 = uVar39;
          uVar12 = local_594;
          iVar46 = _local_59c;
          uVar11 = local_5b2;
          uVar8 = uStack_5ba;
          uVar10 = local_5c0;
          uVar39 = uStack_600;
        }
        local_594 = uVar12;
        _local_59c = iVar46;
        local_5b2 = uVar11;
        uStack_5ba = uVar8;
        local_5c0 = uVar10;
        uStack_600 = uVar39;
        uVar18 = local_594._4_4_;
        uVar20 = uStack_598;
        uVar17 = local_5b2._2_6_;
        uVar16 = uStack_5ba._4_4_;
        cVar14 = uStack_5ba._3_1_;
        uVar15 = uStack_5ba._2_1_;
        cVar5 = local_5c0._1_1_;
        uVar13 = uStack_600._4_4_;
      }
    }
  }
  local_594._4_4_ = uVar18;
  uStack_598 = uVar20;
  local_5b2._2_6_ = uVar17;
  uStack_5ba._4_4_ = uVar16;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._2_1_ = uVar15;
  local_5c0._1_1_ = cVar5;
  uStack_600._4_4_ = uVar13;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  uStack_600._4_4_ = uVar13;
  local_5c0._1_1_ = cVar5;
  uStack_5ba._2_1_ = uVar15;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._4_4_ = uVar16;
  local_5b2._2_6_ = uVar17;
  uStack_598 = uVar20;
  local_594._4_4_ = uVar18;
  if ((ulong)((long)(puVar28[3] - puVar28[2]) >> 3) < 2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  puVar29 = *(undefined8 **)(puVar28[2] + 8);
  uVar4 = *(undefined4 *)((long)puVar28 + 0x14c);
  lVar50 = **(long **)*puVar29;
  *(undefined4 *)(*(long *)(lVar50 + 0x600) + 0x494) = uVar4;
  lVar27 = *(long *)(lVar50 + 0x608);
  lVar50 = *(long *)(lVar50 + 0x610);
  if (lVar27 != lVar50) {
    uVar23 = (lVar50 + -0x10) - lVar27;
    uVar52 = ((uint)(uVar23 >> 4) & 0xfffffff) + 1;
    if ((uVar52 & 3) != 0) {
      lVar48 = -((ulong)uVar52 & 3);
      do {
        plVar26 = (long *)(lVar27 + 8);
        lVar27 = lVar27 + 0x10;
        lVar48 = lVar48 + 1;
        *(undefined4 *)(*plVar26 + 0x494) = uVar4;
      } while (lVar48 != 0);
    }
    if (0x2f < uVar23) {
      do {
        *(undefined4 *)(*(long *)(lVar27 + 8) + 0x494) = uVar4;
        *(undefined4 *)(*(long *)(lVar27 + 0x18) + 0x494) = uVar4;
        *(undefined4 *)(*(long *)(lVar27 + 0x28) + 0x494) = uVar4;
        plVar26 = (long *)(lVar27 + 0x38);
        lVar27 = lVar27 + 0x40;
        *(undefined4 *)(*plVar26 + 0x494) = uVar4;
      } while (lVar50 != lVar27);
    }
  }
  *(undefined2 *)(puVar28 + 0x28) = 0x100;
  *(undefined4 *)((long)puVar28 + 0x144) = 0x4001;
  *(undefined1 *)(puVar28 + 0x29) = 1;
  *(undefined2 *)((long)puVar28 + 0x142) = local_ad4;
  *(undefined1 *)((long)puVar28 + 0x14b) = local_ad6;
  *(undefined2 *)((long)puVar28 + 0x149) = local_ad8;
  *(undefined4 *)((long)puVar28 + 0x14c) = 1;
  *(undefined1 *)(puVar28 + 0x2a) = 0;
  plVar26 = *(long **)*puVar29;
  lVar50 = puVar28[0x2b];
  plVar54 = plVar26 + 1;
  lVar27 = *plVar26;
  uVar39 = uStack_600;
  uVar10 = local_5c0;
  uVar8 = uStack_5ba;
  uVar11 = local_5b2;
  iVar46 = _local_59c;
  uVar12 = local_594;
  if (((DAT_71053144d8 & 1) == 0) &&
     (iVar21 = __cxa_guard_acquire(&DAT_71053144d8), uVar12 = local_594, iVar46 = _local_59c,
     uVar11 = local_5b2, uVar8 = uStack_5ba, uVar10 = local_5c0, uVar39 = uStack_600,
     uVar13 = uStack_600._4_4_, cVar5 = local_5c0._1_1_, uVar15 = uStack_5ba._2_1_,
     cVar14 = uStack_5ba._3_1_, uVar16 = uStack_5ba._4_4_, uVar17 = local_5b2._2_6_,
     uVar20 = uStack_598, uVar18 = local_594._4_4_, iVar21 != 0)) {
    FUN_7101764000();
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar12 = local_594;
    iVar46 = _local_59c;
    uVar11 = local_5b2;
    uVar8 = uStack_5ba;
    uVar10 = local_5c0;
    uVar39 = uStack_600;
    FUN_71000001c0();
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar12 = local_594;
    iVar46 = _local_59c;
    uVar11 = local_5b2;
    uVar8 = uStack_5ba;
    uVar10 = local_5c0;
    uVar39 = uStack_600;
    __cxa_guard_release(&DAT_71053144d8);
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar12 = local_594;
    iVar46 = _local_59c;
    uVar11 = local_5b2;
    uVar8 = uStack_5ba;
    uVar10 = local_5c0;
    uVar39 = uStack_600;
    uVar13 = uStack_600._4_4_;
    cVar5 = local_5c0._1_1_;
    uVar15 = uStack_5ba._2_1_;
    cVar14 = uStack_5ba._3_1_;
    uVar16 = uStack_5ba._4_4_;
    uVar17 = local_5b2._2_6_;
    uVar20 = uStack_598;
    uVar18 = local_594._4_4_;
  }
  local_594._4_4_ = uVar18;
  uStack_598 = uVar20;
  local_5b2._2_6_ = uVar17;
  uStack_5ba._4_4_ = uVar16;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._2_1_ = uVar15;
  local_5c0._1_1_ = cVar5;
  uStack_600._4_4_ = uVar13;
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  *(undefined4 *)(*(long *)(lVar27 + 0x600) + 0x18) = 0x80;
  *(undefined4 *)(*(long *)(lVar27 + 0x600) + 0x1c) = 0x40000;
  local_580 = (undefined **)0x0;
  local_570 = 1;
  local_56c = 1;
  local_56a[0] = '\x01';
  local_578 = (undefined8 *)&DAT_00000101;
  local_560 = 0;
  local_530 = (long *)0x0;
  local_568 = &DAT_41f0000000000000;
  local_500 = (long *)0x0;
  local_4a0 = (long *)0x0;
  local_470 = (long *)0x0;
  local_460 = 0;
  local_a60 = &PTR_FUN_71050ac3e0;
  local_4d0 = (long *)0x0;
  local_a58 = 0x6478;
  uStack_a56 = 0x530;
  uStack_a54 = 0x71;
  local_a40 = &local_a60;
  uVar39 = uStack_600;
  uStack_600._4_4_ = uVar13;
  uVar10 = local_5c0;
  local_5c0._1_1_ = cVar5;
  uVar8 = uStack_5ba;
  uStack_5ba._2_1_ = uVar15;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._4_4_ = uVar16;
  uVar11 = local_5b2;
  local_5b2._2_6_ = uVar17;
  iVar46 = _local_59c;
  uStack_598 = uVar20;
  uVar12 = local_594;
  local_594._4_4_ = uVar18;
  FUN_7101a7ed70(&local_a60,alStack_550);
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  if (&local_a60 == local_a40) {
    pcVar41 = *(code **)(*local_a40 + 0x20);
LAB_710185766c:
    (*pcVar41)();
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar12 = local_594;
    iVar46 = _local_59c;
    uVar11 = local_5b2;
    uVar8 = uStack_5ba;
    cVar5 = local_5c0._1_1_;
    uVar13 = uStack_600._4_4_;
    uVar39 = uStack_600;
    uVar10 = local_5c0;
    uStack_600._4_4_ = uVar13;
    local_5c0._1_1_ = cVar5;
  }
  else if (local_a40 != (long *)0x0) {
    pcVar41 = *(code **)(*local_a40 + 0x28);
    goto LAB_710185766c;
  }
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  local_a60 = &PTR_FUN_71050ac428;
  local_a40 = &local_a60;
  uVar39 = uStack_600;
  uStack_600._4_4_ = uVar13;
  uVar10 = local_5c0;
  local_5c0._1_1_ = cVar5;
  uVar8 = uStack_5ba;
  uStack_5ba._2_1_ = uVar15;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._4_4_ = uVar16;
  uVar11 = local_5b2;
  local_5b2._2_6_ = uVar17;
  iVar46 = _local_59c;
  uStack_598 = uVar20;
  uVar12 = local_594;
  local_594._4_4_ = uVar18;
  FUN_7101989a30(&local_a60,alStack_4c0);
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  if (&local_a60 == local_a40) {
    pcVar41 = *(code **)(*local_a40 + 0x20);
LAB_71018576b8:
    (*pcVar41)();
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar12 = local_594;
    iVar46 = _local_59c;
    uVar11 = local_5b2;
    uVar8 = uStack_5ba;
    cVar5 = local_5c0._1_1_;
    uVar13 = uStack_600._4_4_;
    uVar39 = uStack_600;
    uVar10 = local_5c0;
    uStack_600._4_4_ = uVar13;
    local_5c0._1_1_ = cVar5;
  }
  else if (local_a40 != (long *)0x0) {
    pcVar41 = *(code **)(*local_a40 + 0x28);
    goto LAB_71018576b8;
  }
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  local_a60 = &PTR_FUN_71050ac470;
  local_a40 = &local_a60;
  uVar39 = uStack_600;
  uStack_600._4_4_ = uVar13;
  uVar10 = local_5c0;
  local_5c0._1_1_ = cVar5;
  uVar8 = uStack_5ba;
  uStack_5ba._2_1_ = uVar15;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._4_4_ = uVar16;
  uVar11 = local_5b2;
  local_5b2._2_6_ = uVar17;
  iVar46 = _local_59c;
  uStack_598 = uVar20;
  uVar12 = local_594;
  local_594._4_4_ = uVar18;
  FUN_7101989a30(&local_a60,&local_520);
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  if (&local_a60 == local_a40) {
    pcVar41 = *(code **)(*local_a40 + 0x20);
LAB_7101857704:
    (*pcVar41)();
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar12 = local_594;
    iVar46 = _local_59c;
    uVar11 = local_5b2;
    uVar8 = uStack_5ba;
    cVar5 = local_5c0._1_1_;
    uVar13 = uStack_600._4_4_;
    uVar39 = uStack_600;
    uVar10 = local_5c0;
    uStack_600._4_4_ = uVar13;
    local_5c0._1_1_ = cVar5;
  }
  else if (local_a40 != (long *)0x0) {
    pcVar41 = *(code **)(*local_a40 + 0x28);
    goto LAB_7101857704;
  }
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  plVar2 = (long *)(lVar50 + 0xd8);
  ppppbVar36 = (byte ****)&local_580;
  uVar39 = uStack_600;
  uStack_600._4_4_ = uVar13;
  uVar10 = local_5c0;
  local_5c0._1_1_ = cVar5;
  uVar8 = uStack_5ba;
  uStack_5ba._2_1_ = uVar15;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._4_4_ = uVar16;
  uVar11 = local_5b2;
  local_5b2._2_6_ = uVar17;
  iVar46 = _local_59c;
  uStack_598 = uVar20;
  uVar12 = local_594;
  local_594._4_4_ = uVar18;
  FUN_7103770b30(plVar2,plVar54,(long ****)"selector",ppppbVar36,pppplVar37,param_6,param_7,param_8)
  ;
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  plVar55 = *(long **)(lVar50 + 0xd8);
  uVar23 = plVar55[0x31] - plVar55[0x30];
  if (0 < (int)(uVar23 >> 3)) {
    uVar23 = uVar23 >> 3 & 0xffffffff;
    FUN_710376e070(plVar55,0,*(long *****)plVar55[0x30],ppppbVar36,pppplVar37,param_6,param_7,
                   param_8);
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar18 = local_594._4_4_;
    uVar12 = local_594;
    uVar20 = uStack_598;
    iVar46 = _local_59c;
    uVar17 = local_5b2._2_6_;
    uVar11 = local_5b2;
    uVar16 = uStack_5ba._4_4_;
    cVar14 = uStack_5ba._3_1_;
    uVar15 = uStack_5ba._2_1_;
    uVar8 = uStack_5ba;
    cVar5 = local_5c0._1_1_;
    uVar10 = local_5c0;
    uVar13 = uStack_600._4_4_;
    uVar39 = uStack_600;
    uStack_600._4_4_ = uVar13;
    local_5c0._1_1_ = cVar5;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    local_5b2._2_6_ = uVar17;
    uStack_598 = uVar20;
    local_594._4_4_ = uVar18;
    if (uVar23 != 1) {
      uVar49 = 1;
      do {
        local_594 = uVar12;
        _local_59c = iVar46;
        local_5b2 = uVar11;
        uStack_5ba = uVar8;
        local_5c0 = uVar10;
        uStack_600 = uVar39;
        uVar18 = local_594._4_4_;
        uVar20 = uStack_598;
        uVar17 = local_5b2._2_6_;
        uVar16 = uStack_5ba._4_4_;
        cVar14 = uStack_5ba._3_1_;
        uVar15 = uStack_5ba._2_1_;
        cVar5 = local_5c0._1_1_;
        uVar13 = uStack_600._4_4_;
        uVar39 = uStack_600;
        uStack_600._4_4_ = uVar13;
        uVar10 = local_5c0;
        local_5c0._1_1_ = cVar5;
        uVar8 = uStack_5ba;
        uStack_5ba._2_1_ = uVar15;
        uStack_5ba._3_1_ = cVar14;
        uStack_5ba._4_4_ = uVar16;
        uVar11 = local_5b2;
        local_5b2._2_6_ = uVar17;
        iVar46 = _local_59c;
        uStack_598 = uVar20;
        uVar12 = local_594;
        local_594._4_4_ = uVar18;
        FUN_710376e070(plVar55,(int)uVar49,*(long *****)(plVar55[0x30] + uVar49 * 8),ppppbVar36,
                       pppplVar37,param_6,param_7,param_8);
        uVar12 = local_594;
        iVar46 = _local_59c;
        uVar11 = local_5b2;
        uVar8 = uStack_5ba;
        uVar10 = local_5c0;
        uVar39 = uStack_600;
        uVar49 = uVar49 + 1;
      } while (uVar23 != uVar49);
    }
  }
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  pppplVar35 = (long ****)&DAT_00000007;
  ppppbVar36 = (byte ****)0x0;
  uVar39 = uStack_600;
  uStack_600._4_4_ = uVar13;
  uVar10 = local_5c0;
  local_5c0._1_1_ = cVar5;
  uVar8 = uStack_5ba;
  uStack_5ba._2_1_ = uVar15;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._4_4_ = uVar16;
  uVar11 = local_5b2;
  local_5b2._2_6_ = uVar17;
  iVar46 = _local_59c;
  uStack_598 = uVar20;
  uVar12 = local_594;
  local_594._4_4_ = uVar18;
  FUN_7103771930(*plVar2,2,(long ****)&DAT_00000007,(byte ****)0x0,pppplVar37,param_6,param_7,
                 param_8);
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  lVar27 = *(long *)(*plVar2 + 0x180);
  uVar23 = *(long *)(*plVar2 + 0x188) - lVar27;
  if ((int)(uVar23 >> 3) < 3) {
    ppppbVar31 = (byte ****)0x0;
  }
  else {
    uVar13 = uStack_600._4_4_;
    cVar5 = local_5c0._1_1_;
    uVar15 = uStack_5ba._2_1_;
    cVar14 = uStack_5ba._3_1_;
    uVar16 = uStack_5ba._4_4_;
    uVar17 = local_5b2._2_6_;
    uVar20 = uStack_598;
    uVar18 = local_594._4_4_;
    if ((ulong)((long)uVar23 >> 3) < 3) goto LAB_7101859194;
    ppppbVar31 = *(byte *****)(*(long *)(lVar27 + 0x10) + 0x88);
  }
  FUN_7103776640(&local_a60,(long)plVar54,ppppbVar31,pppplVar35,ppppbVar36,pppplVar37,param_6,
                 param_7,param_8);
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  FUN_7103776390(&local_90,&local_a60,pppplVar35,ppppbVar36,pppplVar37,param_6,param_7,param_8);
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  FUN_710337d360(&local_90,extraout_x1_05,(undefined **)pppplVar35,ppppbVar36,pppplVar37,param_6,
                 param_7,param_8);
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar23 = local_88;
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  local_90 = &PTR_FUN_710523d988;
  local_88 = 0;
  if (uVar23 != 0) {
    uVar49 = *(ulong *)(uVar23 + 0x18);
    *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar23 + 0x18) = 0;
    if (uVar49 != 0) {
      FUN_710392eb40(uVar49);
      local_594 = uVar12;
      _local_59c = iVar46;
      local_5b2 = uVar11;
      uStack_5ba = uVar8;
      local_5c0 = uVar10;
      uStack_600 = uVar39;
      uVar12 = local_594;
      iVar46 = _local_59c;
      uVar11 = local_5b2;
      uVar8 = uStack_5ba;
      uVar10 = local_5c0;
      uVar39 = uStack_600;
    }
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar18 = local_594._4_4_;
    uVar20 = uStack_598;
    uVar17 = local_5b2._2_6_;
    uVar16 = uStack_5ba._4_4_;
    cVar14 = uStack_5ba._3_1_;
    uVar15 = uStack_5ba._2_1_;
    cVar5 = local_5c0._1_1_;
    uVar13 = uStack_600._4_4_;
    uVar39 = uStack_600;
    uStack_600._4_4_ = uVar13;
    uVar10 = local_5c0;
    local_5c0._1_1_ = cVar5;
    uVar8 = uStack_5ba;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    uVar11 = local_5b2;
    local_5b2._2_6_ = uVar17;
    iVar46 = _local_59c;
    uStack_598 = uVar20;
    uVar12 = local_594;
    local_594._4_4_ = uVar18;
    FUN_710392eb40(uVar23);
    uVar12 = local_594;
    iVar46 = _local_59c;
    uVar11 = local_5b2;
    uVar8 = uStack_5ba;
    uVar10 = local_5c0;
    uVar39 = uStack_600;
  }
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  uVar39 = uStack_600;
  uStack_600._4_4_ = uVar13;
  uVar10 = local_5c0;
  local_5c0._1_1_ = cVar5;
  uVar8 = uStack_5ba;
  uStack_5ba._2_1_ = uVar15;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._4_4_ = uVar16;
  uVar11 = local_5b2;
  local_5b2._2_6_ = uVar17;
  iVar46 = _local_59c;
  uStack_598 = uVar20;
  uVar12 = local_594;
  local_594._4_4_ = uVar18;
  (**(code **)(*(long *)*plVar2 + 0x70))((long *)*plVar2,0);
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  (**(code **)(*(long *)*plVar2 + 0x60))((long *)*plVar2,0);
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  uVar23 = CONCAT44(uStack_a54,CONCAT22(uStack_a56,local_a58));
  local_a60 = &PTR_FUN_710523d988;
  local_a58 = 0;
  uStack_a56 = 0;
  uStack_a54 = 0;
  if (uVar23 != 0) {
    uVar49 = *(ulong *)(uVar23 + 0x18);
    *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar23 + 0x18) = 0;
    if (uVar49 != 0) {
      FUN_710392eb40(uVar49);
      local_594 = uVar12;
      _local_59c = iVar46;
      local_5b2 = uVar11;
      uStack_5ba = uVar8;
      local_5c0 = uVar10;
      uStack_600 = uVar39;
      uVar12 = local_594;
      iVar46 = _local_59c;
      uVar11 = local_5b2;
      uVar8 = uStack_5ba;
      uVar10 = local_5c0;
      uVar39 = uStack_600;
    }
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar18 = local_594._4_4_;
    uVar20 = uStack_598;
    uVar17 = local_5b2._2_6_;
    uVar16 = uStack_5ba._4_4_;
    cVar14 = uStack_5ba._3_1_;
    uVar15 = uStack_5ba._2_1_;
    cVar5 = local_5c0._1_1_;
    uVar13 = uStack_600._4_4_;
    uVar39 = uStack_600;
    uStack_600._4_4_ = uVar13;
    uVar10 = local_5c0;
    local_5c0._1_1_ = cVar5;
    uVar8 = uStack_5ba;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    uVar11 = local_5b2;
    local_5b2._2_6_ = uVar17;
    iVar46 = _local_59c;
    uStack_598 = uVar20;
    uVar12 = local_594;
    local_594._4_4_ = uVar18;
    FUN_710392eb40(uVar23);
    uVar12 = local_594;
    iVar46 = _local_59c;
    uVar11 = local_5b2;
    uVar8 = uStack_5ba;
    uVar10 = local_5c0;
    uVar39 = uStack_600;
  }
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  if (alStack_490 == local_470) {
    pcVar41 = *(code **)(*local_470 + 0x20);
LAB_7101857898:
    uVar39 = uStack_600;
    uStack_600._4_4_ = uVar13;
    uVar10 = local_5c0;
    local_5c0._1_1_ = cVar5;
    uVar8 = uStack_5ba;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    uVar11 = local_5b2;
    local_5b2._2_6_ = uVar17;
    iVar46 = _local_59c;
    uStack_598 = uVar20;
    uVar12 = local_594;
    local_594._4_4_ = uVar18;
    (*pcVar41)();
    uVar11 = local_594;
    iVar46 = _local_59c;
    uVar8 = local_5b2;
    uVar39 = uStack_5ba;
    cVar5 = local_5c0._1_1_;
    uVar13 = uStack_600._4_4_;
    uVar15 = uStack_5ba._2_1_;
    cVar14 = uStack_5ba._3_1_;
    uVar16 = uStack_5ba._4_4_;
    uVar17 = local_5b2._2_6_;
    uVar20 = uStack_598;
    uVar18 = local_594._4_4_;
  }
  else {
    uVar39 = uStack_5ba;
    uVar8 = local_5b2;
    iVar46 = _local_59c;
    uVar11 = local_594;
    if (local_470 != (long *)0x0) {
      pcVar41 = *(code **)(*local_470 + 0x28);
      goto LAB_7101857898;
    }
  }
  local_594._4_4_ = uVar18;
  uStack_598 = uVar20;
  local_5b2._2_6_ = uVar17;
  uStack_5ba._4_4_ = uVar16;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._2_1_ = uVar15;
  local_5c0._1_1_ = cVar5;
  uStack_600._4_4_ = uVar13;
  local_594 = uVar11;
  _local_59c = iVar46;
  local_5b2 = uVar8;
  uStack_5ba = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  if (alStack_4c0 == local_4a0) {
    pcVar41 = *(code **)(*local_4a0 + 0x20);
LAB_71018578c8:
    uVar39 = uStack_600;
    uStack_600._4_4_ = uVar13;
    uVar10 = local_5c0;
    local_5c0._1_1_ = cVar5;
    uVar8 = uStack_5ba;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    uVar11 = local_5b2;
    local_5b2._2_6_ = uVar17;
    iVar46 = _local_59c;
    uStack_598 = uVar20;
    uVar12 = local_594;
    local_594._4_4_ = uVar18;
    (*pcVar41)();
    uVar11 = local_594;
    iVar46 = _local_59c;
    uVar8 = local_5b2;
    uVar39 = uStack_5ba;
    cVar5 = local_5c0._1_1_;
    uVar13 = uStack_600._4_4_;
    uVar15 = uStack_5ba._2_1_;
    cVar14 = uStack_5ba._3_1_;
    uVar16 = uStack_5ba._4_4_;
    uVar17 = local_5b2._2_6_;
    uVar20 = uStack_598;
    uVar18 = local_594._4_4_;
  }
  else {
    uVar39 = uStack_5ba;
    uVar8 = local_5b2;
    iVar46 = _local_59c;
    uVar11 = local_594;
    if (local_4a0 != (long *)0x0) {
      pcVar41 = *(code **)(*local_4a0 + 0x28);
      goto LAB_71018578c8;
    }
  }
  local_594._4_4_ = uVar18;
  uStack_598 = uVar20;
  local_5b2._2_6_ = uVar17;
  uStack_5ba._4_4_ = uVar16;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._2_1_ = uVar15;
  local_5c0._1_1_ = cVar5;
  uStack_600._4_4_ = uVar13;
  local_594 = uVar11;
  _local_59c = iVar46;
  local_5b2 = uVar8;
  uStack_5ba = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  if (alStack_4f0 == local_4d0) {
    pcVar41 = *(code **)(*local_4d0 + 0x20);
LAB_71018578f8:
    uVar39 = uStack_600;
    uStack_600._4_4_ = uVar13;
    uVar10 = local_5c0;
    local_5c0._1_1_ = cVar5;
    uVar8 = uStack_5ba;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    uVar11 = local_5b2;
    local_5b2._2_6_ = uVar17;
    iVar46 = _local_59c;
    uStack_598 = uVar20;
    uVar12 = local_594;
    local_594._4_4_ = uVar18;
    (*pcVar41)();
    uVar11 = local_594;
    iVar46 = _local_59c;
    uVar8 = local_5b2;
    uVar39 = uStack_5ba;
    cVar5 = local_5c0._1_1_;
    uVar13 = uStack_600._4_4_;
    uVar15 = uStack_5ba._2_1_;
    cVar14 = uStack_5ba._3_1_;
    uVar16 = uStack_5ba._4_4_;
    uVar17 = local_5b2._2_6_;
    uVar20 = uStack_598;
    uVar18 = local_594._4_4_;
  }
  else {
    uVar39 = uStack_5ba;
    uVar8 = local_5b2;
    iVar46 = _local_59c;
    uVar11 = local_594;
    if (local_4d0 != (long *)0x0) {
      pcVar41 = *(code **)(*local_4d0 + 0x28);
      goto LAB_71018578f8;
    }
  }
  local_594._4_4_ = uVar18;
  uStack_598 = uVar20;
  local_5b2._2_6_ = uVar17;
  uStack_5ba._4_4_ = uVar16;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._2_1_ = uVar15;
  local_5c0._1_1_ = cVar5;
  uStack_600._4_4_ = uVar13;
  local_594 = uVar11;
  _local_59c = iVar46;
  local_5b2 = uVar8;
  uStack_5ba = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  if (&local_520 == local_500) {
    pcVar41 = *(code **)(*local_500 + 0x20);
LAB_7101857928:
    uVar39 = uStack_600;
    uStack_600._4_4_ = uVar13;
    uVar10 = local_5c0;
    local_5c0._1_1_ = cVar5;
    uVar8 = uStack_5ba;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    uVar11 = local_5b2;
    local_5b2._2_6_ = uVar17;
    iVar46 = _local_59c;
    uStack_598 = uVar20;
    uVar12 = local_594;
    local_594._4_4_ = uVar18;
    (*pcVar41)();
    uVar11 = local_594;
    iVar46 = _local_59c;
    uVar8 = local_5b2;
    uVar39 = uStack_5ba;
    cVar5 = local_5c0._1_1_;
    uVar13 = uStack_600._4_4_;
    uVar15 = uStack_5ba._2_1_;
    cVar14 = uStack_5ba._3_1_;
    uVar16 = uStack_5ba._4_4_;
    uVar17 = local_5b2._2_6_;
    uVar20 = uStack_598;
    uVar18 = local_594._4_4_;
  }
  else {
    uVar39 = uStack_5ba;
    uVar8 = local_5b2;
    iVar46 = _local_59c;
    uVar11 = local_594;
    if (local_500 != (long *)0x0) {
      pcVar41 = *(code **)(*local_500 + 0x28);
      goto LAB_7101857928;
    }
  }
  local_594._4_4_ = uVar18;
  uStack_598 = uVar20;
  local_5b2._2_6_ = uVar17;
  uStack_5ba._4_4_ = uVar16;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._2_1_ = uVar15;
  local_5c0._1_1_ = cVar5;
  uStack_600._4_4_ = uVar13;
  local_594 = uVar11;
  _local_59c = iVar46;
  local_5b2 = uVar8;
  uStack_5ba = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  if (alStack_550 == local_530) {
    pcVar41 = *(code **)(*local_530 + 0x20);
LAB_710185795c:
    uVar39 = uStack_600;
    uStack_600._4_4_ = uVar13;
    uVar10 = local_5c0;
    local_5c0._1_1_ = cVar5;
    uVar8 = uStack_5ba;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    uVar11 = local_5b2;
    local_5b2._2_6_ = uVar17;
    iVar46 = _local_59c;
    uStack_598 = uVar20;
    uVar12 = local_594;
    local_594._4_4_ = uVar18;
    (*pcVar41)();
    uVar11 = local_594;
    iVar46 = _local_59c;
    uVar8 = local_5b2;
    uVar39 = uStack_5ba;
    cVar5 = local_5c0._1_1_;
    uVar13 = uStack_600._4_4_;
    uVar15 = uStack_5ba._2_1_;
    cVar14 = uStack_5ba._3_1_;
    uVar16 = uStack_5ba._4_4_;
    uVar17 = local_5b2._2_6_;
    uVar20 = uStack_598;
    uVar18 = local_594._4_4_;
  }
  else {
    uVar39 = uStack_5ba;
    uVar8 = local_5b2;
    iVar46 = _local_59c;
    uVar11 = local_594;
    if (local_530 != (long *)0x0) {
      pcVar41 = *(code **)(*local_530 + 0x28);
      goto LAB_710185795c;
    }
  }
  local_594._4_4_ = uVar18;
  uStack_598 = uVar20;
  local_5b2._2_6_ = uVar17;
  uStack_5ba._4_4_ = uVar16;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._2_1_ = uVar15;
  local_5c0._1_1_ = cVar5;
  uStack_600._4_4_ = uVar13;
  local_594 = uVar11;
  _local_59c = iVar46;
  local_5b2 = uVar8;
  uStack_5ba = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  plVar55 = (long *)(lVar50 + 0xe0);
  ppppbVar36 = (byte ****)&local_580;
  local_580 = (undefined **)0x0;
  local_570 = 1;
  local_56c = 1;
  local_56a[0] = '\x01';
  local_568 = &DAT_41f0000000000000;
  local_560 = 0;
  local_530 = (long *)0x0;
  local_500 = (long *)0x0;
  local_4d0 = (long *)0x0;
  local_4a0 = (long *)0x0;
  local_470 = (long *)0x0;
  local_460 = 0;
  local_578 = (undefined8 *)&DAT_00010101;
  uVar39 = uStack_600;
  uStack_600._4_4_ = uVar13;
  uVar10 = local_5c0;
  local_5c0._1_1_ = cVar5;
  uVar8 = uStack_5ba;
  uStack_5ba._2_1_ = uVar15;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._4_4_ = uVar16;
  uVar11 = local_5b2;
  local_5b2._2_6_ = uVar17;
  iVar46 = _local_59c;
  uStack_598 = uVar20;
  uVar12 = local_594;
  local_594._4_4_ = uVar18;
  FUN_7103770b30(plVar55,plVar54,(long ****)"selector_01",ppppbVar36,pppplVar37,param_6,param_7,
                 param_8);
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  plVar57 = *(long **)(lVar50 + 0xe0);
  uVar23 = plVar57[0x31] - plVar57[0x30];
  if (0 < (int)(uVar23 >> 3)) {
    uVar23 = uVar23 >> 3 & 0xffffffff;
    FUN_710376e070(plVar57,0,*(long *****)plVar57[0x30],ppppbVar36,pppplVar37,param_6,param_7,
                   param_8);
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar18 = local_594._4_4_;
    uVar12 = local_594;
    uVar20 = uStack_598;
    iVar46 = _local_59c;
    uVar17 = local_5b2._2_6_;
    uVar11 = local_5b2;
    uVar16 = uStack_5ba._4_4_;
    cVar14 = uStack_5ba._3_1_;
    uVar15 = uStack_5ba._2_1_;
    uVar8 = uStack_5ba;
    cVar5 = local_5c0._1_1_;
    uVar10 = local_5c0;
    uVar13 = uStack_600._4_4_;
    uVar39 = uStack_600;
    uStack_600._4_4_ = uVar13;
    local_5c0._1_1_ = cVar5;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    local_5b2._2_6_ = uVar17;
    uStack_598 = uVar20;
    local_594._4_4_ = uVar18;
    if (uVar23 != 1) {
      uVar49 = 1;
      do {
        local_594 = uVar12;
        _local_59c = iVar46;
        local_5b2 = uVar11;
        uStack_5ba = uVar8;
        local_5c0 = uVar10;
        uStack_600 = uVar39;
        uVar18 = local_594._4_4_;
        uVar20 = uStack_598;
        uVar17 = local_5b2._2_6_;
        uVar16 = uStack_5ba._4_4_;
        cVar14 = uStack_5ba._3_1_;
        uVar15 = uStack_5ba._2_1_;
        cVar5 = local_5c0._1_1_;
        uVar13 = uStack_600._4_4_;
        uVar39 = uStack_600;
        uStack_600._4_4_ = uVar13;
        uVar10 = local_5c0;
        local_5c0._1_1_ = cVar5;
        uVar8 = uStack_5ba;
        uStack_5ba._2_1_ = uVar15;
        uStack_5ba._3_1_ = cVar14;
        uStack_5ba._4_4_ = uVar16;
        uVar11 = local_5b2;
        local_5b2._2_6_ = uVar17;
        iVar46 = _local_59c;
        uStack_598 = uVar20;
        uVar12 = local_594;
        local_594._4_4_ = uVar18;
        FUN_710376e070(plVar57,(int)uVar49,*(long *****)(plVar57[0x30] + uVar49 * 8),ppppbVar36,
                       pppplVar37,param_6,param_7,param_8);
        uVar12 = local_594;
        iVar46 = _local_59c;
        uVar11 = local_5b2;
        uVar8 = uStack_5ba;
        uVar10 = local_5c0;
        uVar39 = uStack_600;
        uVar49 = uVar49 + 1;
      } while (uVar23 != uVar49);
    }
  }
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  ppppppppplVar33 = (long *********)0x6;
  ppppbVar36 = (byte ****)0x0;
  uVar39 = uStack_600;
  uStack_600._4_4_ = uVar13;
  uVar10 = local_5c0;
  local_5c0._1_1_ = cVar5;
  uVar8 = uStack_5ba;
  uStack_5ba._2_1_ = uVar15;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._4_4_ = uVar16;
  uVar11 = local_5b2;
  local_5b2._2_6_ = uVar17;
  iVar46 = _local_59c;
  uStack_598 = uVar20;
  uVar12 = local_594;
  local_594._4_4_ = uVar18;
  FUN_7103771930(*plVar55,0,(long ****)0x6,(byte ****)0x0,pppplVar37,param_6,param_7,param_8);
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  (**(code **)(*(long *)*plVar55 + 0x70))((long *)*plVar55,0);
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  if (alStack_490 == local_470) {
    (**(code **)(*local_470 + 0x20))();
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar13 = local_594._4_4_;
    uVar20 = uStack_598;
    uVar11 = local_5b2;
    uVar8 = uStack_5ba;
    uVar10 = local_5c0;
    uVar39 = uStack_600;
    iVar46 = _local_59c;
    uVar12 = local_594;
    uStack_598 = uVar20;
    local_594._4_4_ = uVar13;
  }
  else if (local_470 != (long *)0x0) {
    (**(code **)(*local_470 + 0x28))();
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar12 = local_594;
    iVar46 = _local_59c;
    uVar11 = local_5b2;
    uVar8 = uStack_5ba;
    uVar10 = local_5c0;
    uVar39 = uStack_600;
  }
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  if (alStack_4c0 == local_4a0) {
    pcVar41 = *(code **)(*local_4a0 + 0x20);
LAB_7101857ab0:
    uVar39 = uStack_600;
    uStack_600._4_4_ = uVar13;
    uVar10 = local_5c0;
    local_5c0._1_1_ = cVar5;
    uVar8 = uStack_5ba;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    uVar11 = local_5b2;
    local_5b2._2_6_ = uVar17;
    iVar46 = _local_59c;
    uStack_598 = uVar20;
    uVar12 = local_594;
    local_594._4_4_ = uVar18;
    (*pcVar41)();
    uVar11 = local_594;
    iVar46 = _local_59c;
    uVar8 = local_5b2;
    uVar39 = uStack_5ba;
    cVar5 = local_5c0._1_1_;
    uVar13 = uStack_600._4_4_;
    uVar15 = uStack_5ba._2_1_;
    cVar14 = uStack_5ba._3_1_;
    uVar16 = uStack_5ba._4_4_;
    uVar17 = local_5b2._2_6_;
    uVar20 = uStack_598;
    uVar18 = local_594._4_4_;
  }
  else {
    uVar39 = uStack_5ba;
    uVar8 = local_5b2;
    iVar46 = _local_59c;
    uVar11 = local_594;
    if (local_4a0 != (long *)0x0) {
      pcVar41 = *(code **)(*local_4a0 + 0x28);
      goto LAB_7101857ab0;
    }
  }
  local_594._4_4_ = uVar18;
  uStack_598 = uVar20;
  local_5b2._2_6_ = uVar17;
  uStack_5ba._4_4_ = uVar16;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._2_1_ = uVar15;
  local_5c0._1_1_ = cVar5;
  uStack_600._4_4_ = uVar13;
  local_594 = uVar11;
  _local_59c = iVar46;
  local_5b2 = uVar8;
  uStack_5ba = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  if (alStack_4f0 == local_4d0) {
    pcVar41 = *(code **)(*local_4d0 + 0x20);
LAB_7101857ae0:
    uVar39 = uStack_600;
    uStack_600._4_4_ = uVar13;
    uVar10 = local_5c0;
    local_5c0._1_1_ = cVar5;
    uVar8 = uStack_5ba;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    uVar11 = local_5b2;
    local_5b2._2_6_ = uVar17;
    iVar46 = _local_59c;
    uStack_598 = uVar20;
    uVar12 = local_594;
    local_594._4_4_ = uVar18;
    (*pcVar41)();
    uVar11 = local_594;
    iVar46 = _local_59c;
    uVar8 = local_5b2;
    uVar39 = uStack_5ba;
    cVar5 = local_5c0._1_1_;
    uVar13 = uStack_600._4_4_;
    uVar15 = uStack_5ba._2_1_;
    cVar14 = uStack_5ba._3_1_;
    uVar16 = uStack_5ba._4_4_;
    uVar17 = local_5b2._2_6_;
    uVar20 = uStack_598;
    uVar18 = local_594._4_4_;
  }
  else {
    uVar39 = uStack_5ba;
    uVar8 = local_5b2;
    iVar46 = _local_59c;
    uVar11 = local_594;
    if (local_4d0 != (long *)0x0) {
      pcVar41 = *(code **)(*local_4d0 + 0x28);
      goto LAB_7101857ae0;
    }
  }
  local_594._4_4_ = uVar18;
  uStack_598 = uVar20;
  local_5b2._2_6_ = uVar17;
  uStack_5ba._4_4_ = uVar16;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._2_1_ = uVar15;
  local_5c0._1_1_ = cVar5;
  uStack_600._4_4_ = uVar13;
  local_594 = uVar11;
  _local_59c = iVar46;
  local_5b2 = uVar8;
  uStack_5ba = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  if (&local_520 == local_500) {
    pcVar41 = *(code **)(*local_500 + 0x20);
LAB_7101857b10:
    uVar39 = uStack_600;
    uStack_600._4_4_ = uVar13;
    uVar10 = local_5c0;
    local_5c0._1_1_ = cVar5;
    uVar8 = uStack_5ba;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    uVar11 = local_5b2;
    local_5b2._2_6_ = uVar17;
    iVar46 = _local_59c;
    uStack_598 = uVar20;
    uVar12 = local_594;
    local_594._4_4_ = uVar18;
    (*pcVar41)();
    uVar11 = local_594;
    iVar46 = _local_59c;
    uVar8 = local_5b2;
    uVar39 = uStack_5ba;
    cVar5 = local_5c0._1_1_;
    uVar13 = uStack_600._4_4_;
    uVar15 = uStack_5ba._2_1_;
    cVar14 = uStack_5ba._3_1_;
    uVar16 = uStack_5ba._4_4_;
    uVar17 = local_5b2._2_6_;
    uVar20 = uStack_598;
    uVar18 = local_594._4_4_;
  }
  else {
    uVar39 = uStack_5ba;
    uVar8 = local_5b2;
    iVar46 = _local_59c;
    uVar11 = local_594;
    if (local_500 != (long *)0x0) {
      pcVar41 = *(code **)(*local_500 + 0x28);
      goto LAB_7101857b10;
    }
  }
  local_594._4_4_ = uVar18;
  uStack_598 = uVar20;
  local_5b2._2_6_ = uVar17;
  uStack_5ba._4_4_ = uVar16;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._2_1_ = uVar15;
  local_5c0._1_1_ = cVar5;
  uStack_600._4_4_ = uVar13;
  local_594 = uVar11;
  _local_59c = iVar46;
  local_5b2 = uVar8;
  uStack_5ba = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  if (alStack_550 == local_530) {
    pcVar41 = *(code **)(*local_530 + 0x20);
LAB_7101857b40:
    uVar39 = uStack_600;
    uStack_600._4_4_ = uVar13;
    uVar10 = local_5c0;
    local_5c0._1_1_ = cVar5;
    uVar8 = uStack_5ba;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    uVar11 = local_5b2;
    local_5b2._2_6_ = uVar17;
    iVar46 = _local_59c;
    uStack_598 = uVar20;
    uVar12 = local_594;
    local_594._4_4_ = uVar18;
    (*pcVar41)();
    uVar11 = local_594;
    iVar46 = _local_59c;
    uVar8 = local_5b2;
    uVar39 = uStack_5ba;
    cVar5 = local_5c0._1_1_;
    uVar13 = uStack_600._4_4_;
    uVar15 = uStack_5ba._2_1_;
    cVar14 = uStack_5ba._3_1_;
    uVar16 = uStack_5ba._4_4_;
    uVar17 = local_5b2._2_6_;
    uVar20 = uStack_598;
    uVar18 = local_594._4_4_;
  }
  else {
    uVar39 = uStack_5ba;
    uVar8 = local_5b2;
    iVar46 = _local_59c;
    uVar11 = local_594;
    if (local_530 != (long *)0x0) {
      pcVar41 = *(code **)(*local_530 + 0x28);
      goto LAB_7101857b40;
    }
  }
  local_594._4_4_ = uVar18;
  uStack_598 = uVar20;
  local_5b2._2_6_ = uVar17;
  uStack_5ba._4_4_ = uVar16;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._2_1_ = uVar15;
  local_5c0._1_1_ = cVar5;
  uStack_600._4_4_ = uVar13;
  local_594 = uVar11;
  _local_59c = iVar46;
  local_5b2 = uVar8;
  uStack_5ba = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  plVar55 = *(long **)(*plVar2 + 0x180);
  uVar23 = *(long *)(*plVar2 + 0x188) - (long)plVar55;
  if ((int)(uVar23 >> 3) < 1) {
    ppppbVar31 = (byte ****)0x0;
  }
  else {
    if (uVar23 == 0) goto LAB_7101859194;
    ppppbVar31 = *(byte *****)(*plVar55 + 0x88);
  }
  uVar39 = uStack_600;
  uStack_600._4_4_ = uVar13;
  uVar10 = local_5c0;
  local_5c0._1_1_ = cVar5;
  uVar8 = uStack_5ba;
  uStack_5ba._2_1_ = uVar15;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._4_4_ = uVar16;
  uVar11 = local_5b2;
  local_5b2._2_6_ = uVar17;
  iVar46 = _local_59c;
  uStack_598 = uVar20;
  uVar12 = local_594;
  local_594._4_4_ = uVar18;
  FUN_7103776640(&local_a60,(long)plVar54,ppppbVar31,ppppppppplVar33,ppppbVar36,pppplVar37,param_6,
                 param_7,param_8);
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  uStack_600._4_4_ = uVar13;
  local_5c0._1_1_ = cVar5;
  uStack_5ba._2_1_ = uVar15;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._4_4_ = uVar16;
  local_5b2._2_6_ = uVar17;
  uStack_598 = uVar20;
  local_594._4_4_ = uVar18;
  if ((int)(uint)DAT_7105306478 < 0x2030200) {
    if ((uint)DAT_7105306478 == 0x2010000) {
      uVar39 = uStack_600;
      uVar10 = local_5c0;
      uVar8 = uStack_5ba;
      uVar11 = local_5b2;
      iVar46 = _local_59c;
      uVar12 = local_594;
      FUN_7103776910(&local_580,(long)&local_a60,(long ****)"set_txt_mode",ppppppppplVar33,
                     ppppbVar36,pppplVar37,param_6,param_7,param_8);
      uVar12 = local_594;
      iVar46 = _local_59c;
      uVar11 = local_5b2;
      uVar8 = uStack_5ba;
      uVar10 = local_5c0;
      uVar39 = uStack_600;
      FUN_710377a120((long)&local_580,"mnu_local_new_rm_mel_btn_00",ppppppppplVar33,ppppbVar36,
                     pppplVar37,param_6,param_7,param_8);
      local_594 = uVar12;
      _local_59c = iVar46;
      local_5b2 = uVar11;
      uStack_5ba = uVar8;
      local_5c0 = uVar10;
      uStack_600 = uVar39;
      puVar56 = local_578;
      uVar12 = local_594;
      iVar46 = _local_59c;
      uVar11 = local_5b2;
      uVar8 = uStack_5ba;
      uVar10 = local_5c0;
      uVar39 = uStack_600;
      local_580 = &PTR_FUN_710523d9a8;
      local_578 = (undefined8 *)0x0;
      if (puVar56 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar56);
        local_594 = uVar12;
        _local_59c = iVar46;
        local_5b2 = uVar11;
        uStack_5ba = uVar8;
        local_5c0 = uVar10;
        uStack_600 = uVar39;
        uVar12 = local_594;
        iVar46 = _local_59c;
        uVar11 = local_5b2;
        uVar8 = uStack_5ba;
        uVar10 = local_5c0;
        uVar39 = uStack_600;
      }
      local_594 = uVar12;
      _local_59c = iVar46;
      local_5b2 = uVar11;
      uStack_5ba = uVar8;
      local_5c0 = uVar10;
      uStack_600 = uVar39;
      uVar18 = local_594._4_4_;
      uVar20 = uStack_598;
      uVar17 = local_5b2._2_6_;
      uVar16 = uStack_5ba._4_4_;
      cVar14 = uStack_5ba._3_1_;
      uVar15 = uStack_5ba._2_1_;
      cVar5 = local_5c0._1_1_;
      uVar13 = uStack_600._4_4_;
      lVar27 = CONCAT44(uStack_a54,CONCAT22(uStack_a56,local_a58));
      uVar39 = uStack_600;
      uStack_600._4_4_ = uVar13;
      uVar10 = local_5c0;
      local_5c0._1_1_ = cVar5;
      uVar8 = uStack_5ba;
      uStack_5ba._2_1_ = uVar15;
      uStack_5ba._3_1_ = cVar14;
      uStack_5ba._4_4_ = uVar16;
      uVar11 = local_5b2;
      local_5b2._2_6_ = uVar17;
      iVar46 = _local_59c;
      uStack_598 = uVar20;
      uVar12 = local_594;
      local_594._4_4_ = uVar18;
      FUN_7103778300(0x3f800000,lVar27,0x710425f263);
      uVar12 = local_594;
      iVar46 = _local_59c;
      uVar11 = local_5b2;
      uVar8 = uStack_5ba;
      uVar10 = local_5c0;
      uVar39 = uStack_600;
      pcVar40 = "mark_melee";
LAB_7101857e20:
      local_594 = uVar12;
      _local_59c = iVar46;
      local_5b2 = uVar11;
      uStack_5ba = uVar8;
      local_5c0 = uVar10;
      uStack_600 = uVar39;
      uVar18 = local_594._4_4_;
      uVar20 = uStack_598;
      uVar17 = local_5b2._2_6_;
      uVar16 = uStack_5ba._4_4_;
      cVar14 = uStack_5ba._3_1_;
      uVar15 = uStack_5ba._2_1_;
      cVar5 = local_5c0._1_1_;
      uVar13 = uStack_600._4_4_;
      uVar39 = uStack_600;
      uStack_600._4_4_ = uVar13;
      uVar10 = local_5c0;
      local_5c0._1_1_ = cVar5;
      uVar8 = uStack_5ba;
      uStack_5ba._2_1_ = uVar15;
      uStack_5ba._3_1_ = cVar14;
      uStack_5ba._4_4_ = uVar16;
      uVar11 = local_5b2;
      local_5b2._2_6_ = uVar17;
      iVar46 = _local_59c;
      uStack_598 = uVar20;
      uVar12 = local_594;
      local_594._4_4_ = uVar18;
      FUN_7103778300(0x3f800000,lVar27,(long)pcVar40);
      uVar12 = local_594;
      iVar46 = _local_59c;
      uVar11 = local_5b2;
      uVar8 = uStack_5ba;
      uVar10 = local_5c0;
      uVar39 = uStack_600;
      uVar13 = uStack_600._4_4_;
      cVar5 = local_5c0._1_1_;
      uVar15 = uStack_5ba._2_1_;
      cVar14 = uStack_5ba._3_1_;
      uVar16 = uStack_5ba._4_4_;
      uVar17 = local_5b2._2_6_;
      uVar20 = uStack_598;
      uVar18 = local_594._4_4_;
    }
    else {
      uVar39 = uStack_600;
      uVar10 = local_5c0;
      uVar8 = uStack_5ba;
      uVar11 = local_5b2;
      iVar46 = _local_59c;
      uVar12 = local_594;
      if ((uint)DAT_7105306478 != 0x2020000) {
        if ((uint)DAT_7105306478 != 0x2030100) goto LAB_7101857dac;
        FUN_7103776910(&local_580,(long)&local_a60,(long ****)"set_txt_mode",ppppppppplVar33,
                       ppppbVar36,pppplVar37,param_6,param_7,param_8);
        uVar12 = local_594;
        iVar46 = _local_59c;
        uVar11 = local_5b2;
        uVar8 = uStack_5ba;
        uVar10 = local_5c0;
        uVar39 = uStack_600;
        FUN_710377a120((long)&local_580,"mnu_local_new_rm_mel_btn_02",ppppppppplVar33,ppppbVar36,
                       pppplVar37,param_6,param_7,param_8);
        local_594 = uVar12;
        _local_59c = iVar46;
        local_5b2 = uVar11;
        uStack_5ba = uVar8;
        local_5c0 = uVar10;
        uStack_600 = uVar39;
        puVar56 = local_578;
        uVar12 = local_594;
        iVar46 = _local_59c;
        uVar11 = local_5b2;
        uVar8 = uStack_5ba;
        uVar10 = local_5c0;
        uVar39 = uStack_600;
        local_580 = &PTR_FUN_710523d9a8;
        local_578 = (undefined8 *)0x0;
        if (puVar56 != (undefined8 *)0x0) {
          FUN_710392eb40((ulong)puVar56);
          local_594 = uVar12;
          _local_59c = iVar46;
          local_5b2 = uVar11;
          uStack_5ba = uVar8;
          local_5c0 = uVar10;
          uStack_600 = uVar39;
          uVar12 = local_594;
          iVar46 = _local_59c;
          uVar11 = local_5b2;
          uVar8 = uStack_5ba;
          uVar10 = local_5c0;
          uVar39 = uStack_600;
        }
        local_594 = uVar12;
        _local_59c = iVar46;
        local_5b2 = uVar11;
        uStack_5ba = uVar8;
        local_5c0 = uVar10;
        uStack_600 = uVar39;
        uVar18 = local_594._4_4_;
        uVar20 = uStack_598;
        uVar17 = local_5b2._2_6_;
        uVar16 = uStack_5ba._4_4_;
        cVar14 = uStack_5ba._3_1_;
        uVar15 = uStack_5ba._2_1_;
        cVar5 = local_5c0._1_1_;
        uVar13 = uStack_600._4_4_;
        lVar27 = CONCAT44(uStack_a54,CONCAT22(uStack_a56,local_a58));
        uVar39 = uStack_600;
        uStack_600._4_4_ = uVar13;
        uVar10 = local_5c0;
        local_5c0._1_1_ = cVar5;
        uVar8 = uStack_5ba;
        uStack_5ba._2_1_ = uVar15;
        uStack_5ba._3_1_ = cVar14;
        uStack_5ba._4_4_ = uVar16;
        uVar11 = local_5b2;
        local_5b2._2_6_ = uVar17;
        iVar46 = _local_59c;
        uStack_598 = uVar20;
        uVar12 = local_594;
        local_594._4_4_ = uVar18;
        FUN_7103778300(0x3f800000,lVar27,0x71042b428f);
        uVar12 = local_594;
        iVar46 = _local_59c;
        uVar11 = local_5b2;
        uVar8 = uStack_5ba;
        uVar10 = local_5c0;
        uVar39 = uStack_600;
        pcVar40 = "mark_verious";
        goto LAB_7101857e20;
      }
    }
    local_594._4_4_ = uVar18;
    uStack_598 = uVar20;
    local_5b2._2_6_ = uVar17;
    uStack_5ba._4_4_ = uVar16;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._2_1_ = uVar15;
    local_5c0._1_1_ = cVar5;
    uStack_600._4_4_ = uVar13;
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar18 = local_594._4_4_;
    uVar20 = uStack_598;
    uVar17 = local_5b2._2_6_;
    uVar16 = uStack_5ba._4_4_;
    cVar14 = uStack_5ba._3_1_;
    uVar15 = uStack_5ba._2_1_;
    cVar5 = local_5c0._1_1_;
    uVar13 = uStack_600._4_4_;
    uVar39 = uStack_600;
    uStack_600._4_4_ = uVar13;
    uVar10 = local_5c0;
    local_5c0._1_1_ = cVar5;
    uVar8 = uStack_5ba;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    uVar11 = local_5b2;
    local_5b2._2_6_ = uVar17;
    iVar46 = _local_59c;
    uStack_598 = uVar20;
    uVar12 = local_594;
    local_594._4_4_ = uVar18;
    FUN_7103776910(&local_580,(long)&local_a60,(long ****)"set_txt_modecategory",ppppppppplVar33,
                   ppppbVar36,pppplVar37,param_6,param_7,param_8);
    uVar12 = local_594;
    iVar46 = _local_59c;
    uVar11 = local_5b2;
    uVar8 = uStack_5ba;
    uVar10 = local_5c0;
    uVar39 = uStack_600;
    FUN_710377a120((long)&local_580,"mnu_local_new_rm_mel_btn_top",ppppppppplVar33,ppppbVar36,
                   pppplVar37,param_6,param_7,param_8);
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    puVar56 = local_578;
    uVar12 = local_594;
    iVar46 = _local_59c;
    uVar11 = local_5b2;
    uVar8 = uStack_5ba;
    uVar10 = local_5c0;
    uVar39 = uStack_600;
    local_580 = &PTR_FUN_710523d9a8;
    local_578 = (undefined8 *)0x0;
    if (puVar56 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar56);
      local_594 = uVar12;
      _local_59c = iVar46;
      local_5b2 = uVar11;
      uStack_5ba = uVar8;
      local_5c0 = uVar10;
      uStack_600 = uVar39;
      uVar12 = local_594;
      iVar46 = _local_59c;
      uVar11 = local_5b2;
      uVar8 = uStack_5ba;
      uVar10 = local_5c0;
      uVar39 = uStack_600;
    }
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar18 = local_594._4_4_;
    uVar20 = uStack_598;
    uVar17 = local_5b2._2_6_;
    uVar16 = uStack_5ba._4_4_;
    cVar14 = uStack_5ba._3_1_;
    uVar15 = uStack_5ba._2_1_;
    cVar5 = local_5c0._1_1_;
    uVar13 = uStack_600._4_4_;
    uVar23 = CONCAT44(uStack_a54,CONCAT22(uStack_a56,local_a58));
    pcVar40 = "mode_melee";
    uVar39 = uStack_600;
    uVar10 = local_5c0;
    uVar8 = uStack_5ba;
    uVar11 = local_5b2;
    iVar46 = _local_59c;
    uVar12 = local_594;
    uStack_600._4_4_ = uVar13;
    local_5c0._1_1_ = cVar5;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    local_5b2._2_6_ = uVar17;
    uStack_598 = uVar20;
    local_594._4_4_ = uVar18;
LAB_7101857ef8:
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar18 = local_594._4_4_;
    uVar20 = uStack_598;
    uVar17 = local_5b2._2_6_;
    uVar16 = uStack_5ba._4_4_;
    cVar14 = uStack_5ba._3_1_;
    uVar15 = uStack_5ba._2_1_;
    cVar5 = local_5c0._1_1_;
    uVar13 = uStack_600._4_4_;
    uVar39 = uStack_600;
    uStack_600._4_4_ = uVar13;
    uVar10 = local_5c0;
    local_5c0._1_1_ = cVar5;
    uVar8 = uStack_5ba;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    uVar11 = local_5b2;
    local_5b2._2_6_ = uVar17;
    iVar46 = _local_59c;
    uStack_598 = uVar20;
    uVar12 = local_594;
    local_594._4_4_ = uVar18;
    FUN_7103778300(0x3f800000,uVar23,(long)pcVar40);
    uVar12 = local_594;
    iVar46 = _local_59c;
    uVar11 = local_5b2;
    uVar8 = uStack_5ba;
    uVar10 = local_5c0;
    uVar39 = uStack_600;
    uVar13 = uStack_600._4_4_;
    cVar5 = local_5c0._1_1_;
    uVar15 = uStack_5ba._2_1_;
    cVar14 = uStack_5ba._3_1_;
    uVar16 = uStack_5ba._4_4_;
    uVar17 = local_5b2._2_6_;
    uVar20 = uStack_598;
    uVar18 = local_594._4_4_;
  }
  else {
    if (0x40201ff < (int)(uint)DAT_7105306478) {
      if ((uint)DAT_7105306478 == 0x4020200) {
        uVar39 = uStack_600;
        uVar10 = local_5c0;
        uVar8 = uStack_5ba;
        uVar11 = local_5b2;
        iVar46 = _local_59c;
        uVar12 = local_594;
        FUN_7103776910(&local_580,(long)&local_a60,(long ****)"set_txt_modecategory",ppppppppplVar33
                       ,ppppbVar36,pppplVar37,param_6,param_7,param_8);
        uVar12 = local_594;
        iVar46 = _local_59c;
        uVar11 = local_5b2;
        uVar8 = uStack_5ba;
        uVar10 = local_5c0;
        uVar39 = uStack_600;
        FUN_710377a120((long)&local_580,"mnu_local_new_rm_oth_btn_02",ppppppppplVar33,ppppbVar36,
                       pppplVar37,param_6,param_7,param_8);
        local_594 = uVar12;
        _local_59c = iVar46;
        local_5b2 = uVar11;
        uStack_5ba = uVar8;
        local_5c0 = uVar10;
        uStack_600 = uVar39;
        puVar56 = local_578;
        uVar12 = local_594;
        iVar46 = _local_59c;
        uVar11 = local_5b2;
        uVar8 = uStack_5ba;
        uVar10 = local_5c0;
        uVar39 = uStack_600;
        local_580 = &PTR_FUN_710523d9a8;
        local_578 = (undefined8 *)0x0;
        if (puVar56 != (undefined8 *)0x0) {
          FUN_710392eb40((ulong)puVar56);
          local_594 = uVar12;
          _local_59c = iVar46;
          local_5b2 = uVar11;
          uStack_5ba = uVar8;
          local_5c0 = uVar10;
          uStack_600 = uVar39;
          uVar12 = local_594;
          iVar46 = _local_59c;
          uVar11 = local_5b2;
          uVar8 = uStack_5ba;
          uVar10 = local_5c0;
          uVar39 = uStack_600;
        }
        local_594 = uVar12;
        _local_59c = iVar46;
        local_5b2 = uVar11;
        uStack_5ba = uVar8;
        local_5c0 = uVar10;
        uStack_600 = uVar39;
        uVar18 = local_594._4_4_;
        uVar20 = uStack_598;
        uVar17 = local_5b2._2_6_;
        uVar16 = uStack_5ba._4_4_;
        cVar14 = uStack_5ba._3_1_;
        uVar15 = uStack_5ba._2_1_;
        cVar5 = local_5c0._1_1_;
        uVar13 = uStack_600._4_4_;
        lVar27 = CONCAT44(uStack_a54,CONCAT22(uStack_a56,local_a58));
        uVar39 = uStack_600;
        uStack_600._4_4_ = uVar13;
        uVar10 = local_5c0;
        local_5c0._1_1_ = cVar5;
        uVar8 = uStack_5ba;
        uStack_5ba._2_1_ = uVar15;
        uStack_5ba._3_1_ = cVar14;
        uStack_5ba._4_4_ = uVar16;
        uVar11 = local_5b2;
        local_5b2._2_6_ = uVar17;
        iVar46 = _local_59c;
        uStack_598 = uVar20;
        uVar12 = local_594;
        local_594._4_4_ = uVar18;
        FUN_7103778300(0x3f800000,lVar27,0x71042f81c8);
        uVar12 = local_594;
        iVar46 = _local_59c;
        uVar11 = local_5b2;
        uVar8 = uStack_5ba;
        uVar10 = local_5c0;
        uVar39 = uStack_600;
        pcVar40 = "mark_all";
      }
      else {
        if ((uint)DAT_7105306478 != 0x4020300) goto LAB_7101857dac;
        uVar39 = uStack_600;
        uVar10 = local_5c0;
        uVar8 = uStack_5ba;
        uVar11 = local_5b2;
        iVar46 = _local_59c;
        uVar12 = local_594;
        FUN_7103776910(&local_580,(long)&local_a60,(long ****)"set_txt_modecategory",ppppppppplVar33
                       ,ppppbVar36,pppplVar37,param_6,param_7,param_8);
        uVar12 = local_594;
        iVar46 = _local_59c;
        uVar11 = local_5b2;
        uVar8 = uStack_5ba;
        uVar10 = local_5c0;
        uVar39 = uStack_600;
        FUN_710377a120((long)&local_580,"mnu_local_new_rm_oth_btn_03",ppppppppplVar33,ppppbVar36,
                       pppplVar37,param_6,param_7,param_8);
        local_594 = uVar12;
        _local_59c = iVar46;
        local_5b2 = uVar11;
        uStack_5ba = uVar8;
        local_5c0 = uVar10;
        uStack_600 = uVar39;
        puVar56 = local_578;
        uVar12 = local_594;
        iVar46 = _local_59c;
        uVar11 = local_5b2;
        uVar8 = uStack_5ba;
        uVar10 = local_5c0;
        uVar39 = uStack_600;
        local_580 = &PTR_FUN_710523d9a8;
        local_578 = (undefined8 *)0x0;
        if (puVar56 != (undefined8 *)0x0) {
          FUN_710392eb40((ulong)puVar56);
          local_594 = uVar12;
          _local_59c = iVar46;
          local_5b2 = uVar11;
          uStack_5ba = uVar8;
          local_5c0 = uVar10;
          uStack_600 = uVar39;
          uVar12 = local_594;
          iVar46 = _local_59c;
          uVar11 = local_5b2;
          uVar8 = uStack_5ba;
          uVar10 = local_5c0;
          uVar39 = uStack_600;
        }
        local_594 = uVar12;
        _local_59c = iVar46;
        local_5b2 = uVar11;
        uStack_5ba = uVar8;
        local_5c0 = uVar10;
        uStack_600 = uVar39;
        uVar18 = local_594._4_4_;
        uVar20 = uStack_598;
        uVar17 = local_5b2._2_6_;
        uVar16 = uStack_5ba._4_4_;
        cVar14 = uStack_5ba._3_1_;
        uVar15 = uStack_5ba._2_1_;
        cVar5 = local_5c0._1_1_;
        uVar13 = uStack_600._4_4_;
        lVar27 = CONCAT44(uStack_a54,CONCAT22(uStack_a56,local_a58));
        uVar39 = uStack_600;
        uStack_600._4_4_ = uVar13;
        uVar10 = local_5c0;
        local_5c0._1_1_ = cVar5;
        uVar8 = uStack_5ba;
        uStack_5ba._2_1_ = uVar15;
        uStack_5ba._3_1_ = cVar14;
        uStack_5ba._4_4_ = uVar16;
        uVar11 = local_5b2;
        local_5b2._2_6_ = uVar17;
        iVar46 = _local_59c;
        uStack_598 = uVar20;
        uVar12 = local_594;
        local_594._4_4_ = uVar18;
        FUN_7103778300(0x3f800000,lVar27,0x71044128d5);
        uVar12 = local_594;
        iVar46 = _local_59c;
        uVar11 = local_5b2;
        uVar8 = uStack_5ba;
        uVar10 = local_5c0;
        uVar39 = uStack_600;
        pcVar40 = "mark_nasake";
      }
LAB_7101857ee0:
      local_594 = uVar12;
      _local_59c = iVar46;
      local_5b2 = uVar11;
      uStack_5ba = uVar8;
      local_5c0 = uVar10;
      uStack_600 = uVar39;
      uVar18 = local_594._4_4_;
      uVar20 = uStack_598;
      uVar17 = local_5b2._2_6_;
      uVar16 = uStack_5ba._4_4_;
      cVar14 = uStack_5ba._3_1_;
      uVar15 = uStack_5ba._2_1_;
      cVar5 = local_5c0._1_1_;
      uVar13 = uStack_600._4_4_;
      uVar39 = uStack_600;
      uStack_600._4_4_ = uVar13;
      uVar10 = local_5c0;
      local_5c0._1_1_ = cVar5;
      uVar8 = uStack_5ba;
      uStack_5ba._2_1_ = uVar15;
      uStack_5ba._3_1_ = cVar14;
      uStack_5ba._4_4_ = uVar16;
      uVar11 = local_5b2;
      local_5b2._2_6_ = uVar17;
      iVar46 = _local_59c;
      uStack_598 = uVar20;
      uVar12 = local_594;
      local_594._4_4_ = uVar18;
      FUN_7103778300(0x3f800000,lVar27,(long)pcVar40);
      uVar12 = local_594;
      iVar46 = _local_59c;
      uVar11 = local_5b2;
      uVar8 = uStack_5ba;
      uVar10 = local_5c0;
      uVar39 = uStack_600;
      uVar23 = CONCAT44(uStack_a54,CONCAT22(uStack_a56,local_a58));
      pcVar40 = "mode_standard";
      goto LAB_7101857ef8;
    }
    if ((uint)DAT_7105306478 == 0x2030200) {
      uVar39 = uStack_600;
      uVar10 = local_5c0;
      uVar8 = uStack_5ba;
      uVar11 = local_5b2;
      iVar46 = _local_59c;
      uVar12 = local_594;
      FUN_7103776910(&local_580,(long)&local_a60,(long ****)"set_txt_mode",ppppppppplVar33,
                     ppppbVar36,pppplVar37,param_6,param_7,param_8);
      uVar12 = local_594;
      iVar46 = _local_59c;
      uVar11 = local_5b2;
      uVar8 = uStack_5ba;
      uVar10 = local_5c0;
      uVar39 = uStack_600;
      FUN_710377a120((long)&local_580,"mnu_local_new_rm_mel_btn_03",ppppppppplVar33,ppppbVar36,
                     pppplVar37,param_6,param_7,param_8);
      local_594 = uVar12;
      _local_59c = iVar46;
      local_5b2 = uVar11;
      uStack_5ba = uVar8;
      local_5c0 = uVar10;
      uStack_600 = uVar39;
      puVar56 = local_578;
      uVar12 = local_594;
      iVar46 = _local_59c;
      uVar11 = local_5b2;
      uVar8 = uStack_5ba;
      uVar10 = local_5c0;
      uVar39 = uStack_600;
      local_580 = &PTR_FUN_710523d9a8;
      local_578 = (undefined8 *)0x0;
      if (puVar56 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar56);
        local_594 = uVar12;
        _local_59c = iVar46;
        local_5b2 = uVar11;
        uStack_5ba = uVar8;
        local_5c0 = uVar10;
        uStack_600 = uVar39;
        uVar12 = local_594;
        iVar46 = _local_59c;
        uVar11 = local_5b2;
        uVar8 = uStack_5ba;
        uVar10 = local_5c0;
        uVar39 = uStack_600;
      }
      local_594 = uVar12;
      _local_59c = iVar46;
      local_5b2 = uVar11;
      uStack_5ba = uVar8;
      local_5c0 = uVar10;
      uStack_600 = uVar39;
      uVar18 = local_594._4_4_;
      uVar20 = uStack_598;
      uVar17 = local_5b2._2_6_;
      uVar16 = uStack_5ba._4_4_;
      cVar14 = uStack_5ba._3_1_;
      uVar15 = uStack_5ba._2_1_;
      cVar5 = local_5c0._1_1_;
      uVar13 = uStack_600._4_4_;
      lVar27 = CONCAT44(uStack_a54,CONCAT22(uStack_a56,local_a58));
      uVar39 = uStack_600;
      uStack_600._4_4_ = uVar13;
      uVar10 = local_5c0;
      local_5c0._1_1_ = cVar5;
      uVar8 = uStack_5ba;
      uStack_5ba._2_1_ = uVar15;
      uStack_5ba._3_1_ = cVar14;
      uStack_5ba._4_4_ = uVar16;
      uVar11 = local_5b2;
      local_5b2._2_6_ = uVar17;
      iVar46 = _local_59c;
      uStack_598 = uVar20;
      uVar12 = local_594;
      local_594._4_4_ = uVar18;
      FUN_7103778300(0x3f800000,lVar27,0x710433a07f);
      uVar12 = local_594;
      iVar46 = _local_59c;
      uVar11 = local_5b2;
      uVar8 = uStack_5ba;
      uVar10 = local_5c0;
      uVar39 = uStack_600;
      pcVar40 = "mark_ssdn";
      goto LAB_7101857e20;
    }
    if ((uint)DAT_7105306478 == 0x4020100) {
      uVar39 = uStack_600;
      uVar10 = local_5c0;
      uVar8 = uStack_5ba;
      uVar11 = local_5b2;
      iVar46 = _local_59c;
      uVar12 = local_594;
      FUN_7103776910(&local_580,(long)&local_a60,(long ****)"set_txt_modecategory",ppppppppplVar33,
                     ppppbVar36,pppplVar37,param_6,param_7,param_8);
      uVar12 = local_594;
      iVar46 = _local_59c;
      uVar11 = local_5b2;
      uVar8 = uStack_5ba;
      uVar10 = local_5c0;
      uVar39 = uStack_600;
      FUN_710377a120((long)&local_580,"mnu_local_new_rm_oth_btn_01",ppppppppplVar33,ppppbVar36,
                     pppplVar37,param_6,param_7,param_8);
      local_594 = uVar12;
      _local_59c = iVar46;
      local_5b2 = uVar11;
      uStack_5ba = uVar8;
      local_5c0 = uVar10;
      uStack_600 = uVar39;
      puVar56 = local_578;
      uVar12 = local_594;
      iVar46 = _local_59c;
      uVar11 = local_5b2;
      uVar8 = uStack_5ba;
      uVar10 = local_5c0;
      uVar39 = uStack_600;
      local_580 = &PTR_FUN_710523d9a8;
      local_578 = (undefined8 *)0x0;
      if (puVar56 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar56);
        local_594 = uVar12;
        _local_59c = iVar46;
        local_5b2 = uVar11;
        uStack_5ba = uVar8;
        local_5c0 = uVar10;
        uStack_600 = uVar39;
        uVar12 = local_594;
        iVar46 = _local_59c;
        uVar11 = local_5b2;
        uVar8 = uStack_5ba;
        uVar10 = local_5c0;
        uVar39 = uStack_600;
      }
      local_594 = uVar12;
      _local_59c = iVar46;
      local_5b2 = uVar11;
      uStack_5ba = uVar8;
      local_5c0 = uVar10;
      uStack_600 = uVar39;
      uVar18 = local_594._4_4_;
      uVar20 = uStack_598;
      uVar17 = local_5b2._2_6_;
      uVar16 = uStack_5ba._4_4_;
      cVar14 = uStack_5ba._3_1_;
      uVar15 = uStack_5ba._2_1_;
      cVar5 = local_5c0._1_1_;
      uVar13 = uStack_600._4_4_;
      lVar27 = CONCAT44(uStack_a54,CONCAT22(uStack_a56,local_a58));
      uVar39 = uStack_600;
      uStack_600._4_4_ = uVar13;
      uVar10 = local_5c0;
      local_5c0._1_1_ = cVar5;
      uVar8 = uStack_5ba;
      uStack_5ba._2_1_ = uVar15;
      uStack_5ba._3_1_ = cVar14;
      uStack_5ba._4_4_ = uVar16;
      uVar11 = local_5b2;
      local_5b2._2_6_ = uVar17;
      iVar46 = _local_59c;
      uStack_598 = uVar20;
      uVar12 = local_594;
      local_594._4_4_ = uVar18;
      FUN_7103778300(0x3f800000,lVar27,0x7104329e78);
      uVar12 = local_594;
      iVar46 = _local_59c;
      uVar11 = local_5b2;
      uVar8 = uStack_5ba;
      uVar10 = local_5c0;
      uVar39 = uStack_600;
      pcVar40 = "mark_100";
      goto LAB_7101857ee0;
    }
LAB_7101857dac:
    uVar23 = CONCAT44(uStack_a54,CONCAT22(uStack_a56,local_a58));
    uVar39 = uStack_600;
    uVar10 = local_5c0;
    uVar8 = uStack_5ba;
    uVar11 = local_5b2;
    iVar46 = _local_59c;
    uVar12 = local_594;
  }
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uStack_a54 = 0;
  uStack_a56 = 0;
  local_a58 = 0;
  local_a60 = &PTR_FUN_710523d988;
  uVar39 = uStack_600;
  uVar10 = local_5c0;
  uVar8 = uStack_5ba;
  uVar11 = local_5b2;
  iVar46 = _local_59c;
  uVar12 = local_594;
  if (uVar23 != 0) {
    uStack_a54 = 0;
    uStack_a56 = 0;
    local_a58 = 0;
    local_a60 = &PTR_FUN_710523d988;
    uVar49 = *(ulong *)(uVar23 + 0x18);
    *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar23 + 0x18) = 0;
    if (uVar49 != 0) {
      uStack_600._4_4_ = uVar13;
      local_5c0._1_1_ = cVar5;
      uStack_5ba._2_1_ = uVar15;
      uStack_5ba._3_1_ = cVar14;
      uStack_5ba._4_4_ = uVar16;
      local_5b2._2_6_ = uVar17;
      uStack_598 = uVar20;
      local_594._4_4_ = uVar18;
      FUN_710392eb40(uVar49);
      uVar12 = local_594;
      iVar46 = _local_59c;
      uVar11 = local_5b2;
      uVar8 = uStack_5ba;
      uVar10 = local_5c0;
      uVar39 = uStack_600;
      uVar13 = uStack_600._4_4_;
      cVar5 = local_5c0._1_1_;
      uVar15 = uStack_5ba._2_1_;
      cVar14 = uStack_5ba._3_1_;
      uVar16 = uStack_5ba._4_4_;
      uVar17 = local_5b2._2_6_;
      uVar20 = uStack_598;
      uVar18 = local_594._4_4_;
    }
    local_594._4_4_ = uVar18;
    uStack_598 = uVar20;
    local_5b2._2_6_ = uVar17;
    uStack_5ba._4_4_ = uVar16;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._2_1_ = uVar15;
    local_5c0._1_1_ = cVar5;
    uStack_600._4_4_ = uVar13;
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar18 = local_594._4_4_;
    uVar20 = uStack_598;
    uVar17 = local_5b2._2_6_;
    uVar16 = uStack_5ba._4_4_;
    cVar14 = uStack_5ba._3_1_;
    uVar15 = uStack_5ba._2_1_;
    cVar5 = local_5c0._1_1_;
    uVar13 = uStack_600._4_4_;
    uVar39 = uStack_600;
    uStack_600._4_4_ = uVar13;
    uVar10 = local_5c0;
    local_5c0._1_1_ = cVar5;
    uVar8 = uStack_5ba;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    uVar11 = local_5b2;
    local_5b2._2_6_ = uVar17;
    iVar46 = _local_59c;
    uStack_598 = uVar20;
    uVar12 = local_594;
    local_594._4_4_ = uVar18;
    FUN_710392eb40(uVar23);
    uVar12 = local_594;
    iVar46 = _local_59c;
    uVar11 = local_5b2;
    uVar8 = uStack_5ba;
    uVar10 = local_5c0;
    uVar39 = uStack_600;
    uVar13 = uStack_600._4_4_;
    cVar5 = local_5c0._1_1_;
    uVar15 = uStack_5ba._2_1_;
    cVar14 = uStack_5ba._3_1_;
    uVar16 = uStack_5ba._4_4_;
    uVar17 = local_5b2._2_6_;
    uVar20 = uStack_598;
    uVar18 = local_594._4_4_;
  }
  local_594._4_4_ = uVar18;
  uStack_598 = uVar20;
  local_5b2._2_6_ = uVar17;
  uStack_5ba._4_4_ = uVar16;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._2_1_ = uVar15;
  local_5c0._1_1_ = cVar5;
  uStack_600._4_4_ = uVar13;
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  uVar39 = uStack_600;
  uVar10 = local_5c0;
  uVar8 = uStack_5ba;
  uVar11 = local_5b2;
  iVar46 = _local_59c;
  uVar12 = local_594;
  if ((int)(uint)DAT_7105306478 < 0x2030100) {
    if (((uint)DAT_7105306478 == 0x2010000) || ((uint)DAT_7105306478 == 0x2020000)) {
LAB_7101857f7c:
      lVar27 = *(long *)(*plVar2 + 0x180);
      uVar23 = *(long *)(*plVar2 + 0x188) - lVar27;
      if ((int)(uVar23 >> 3) < 2) {
        ppppbVar31 = (byte ****)0x0;
      }
      else {
        if ((ulong)((long)uVar23 >> 3) < 2) {
LAB_7101859194:
          local_594._4_4_ = uVar18;
          uStack_598 = uVar20;
          local_5b2._2_6_ = uVar17;
          uStack_5ba._4_4_ = uVar16;
          uStack_5ba._3_1_ = cVar14;
          uStack_5ba._2_1_ = uVar15;
          local_5c0._1_1_ = cVar5;
          uStack_600._4_4_ = uVar13;
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        ppppbVar31 = *(byte *****)(*(long *)(lVar27 + 8) + 0x88);
      }
      uStack_600._4_4_ = uVar13;
      local_5c0._1_1_ = cVar5;
      uStack_5ba._2_1_ = uVar15;
      uStack_5ba._3_1_ = cVar14;
      uStack_5ba._4_4_ = uVar16;
      local_5b2._2_6_ = uVar17;
      uStack_598 = uVar20;
      local_594._4_4_ = uVar18;
      FUN_7103776640(&local_a0,(long)plVar54,ppppbVar31,ppppppppplVar33,ppppbVar36,pppplVar37,
                     param_6,param_7,param_8);
      uVar18 = local_594._4_4_;
      uVar20 = uStack_598;
      uVar17 = local_5b2._2_6_;
      uVar16 = uStack_5ba._4_4_;
      cVar14 = uStack_5ba._3_1_;
      uVar15 = uStack_5ba._2_1_;
      cVar5 = local_5c0._1_1_;
      uVar13 = uStack_600._4_4_;
      local_580 = (undefined **)_DAT_71053050fc;
      local_578 = (undefined8 *)(ulong)DAT_7105305100._4_4_;
      uVar23 = 0;
      while( true ) {
        if ((&DAT_7105305110)[uVar23] == '\0') break;
        local_56a[uVar23 - 2] = (&DAT_7105305110)[uVar23];
        if (0x3e < (int)uVar23 + 1U) {
          uVar23 = (ulong)((int)uVar23 + 1);
          break;
        }
        if ((&DAT_7105305111)[uVar23] == '\0') {
          uVar23 = uVar23 + 1;
          break;
        }
        local_56a[uVar23 - 1] = (&DAT_7105305111)[uVar23];
        uVar23 = uVar23 + 2;
      }
      uVar51 = 0x811c9dc5;
      local_56a[(uVar23 & 0xffffffff) - 2] = '\0';
      local_570 = (int)uVar23;
      uVar47 = (uint)(byte)local_56c;
      uVar52 = uVar51;
      if ((byte)local_56c != 0) {
        pbVar42 = (byte *)((long)&local_56c + 1);
        do {
          uVar52 = uVar52 * 0x89 ^ uVar47;
          uVar47 = (uint)*pbVar42;
          pbVar42 = pbVar42 + 1;
        } while (uVar47 != 0);
      }
      local_578 = (undefined8 *)CONCAT44(uVar52,DAT_7105305100._4_4_);
      for (uVar23 = 0; (&DAT_7105305158)[uVar23] != 0; uVar23 = uVar23 + 2) {
        local_524[uVar23] = (&DAT_7105305158)[uVar23];
        if (0x1fe < (int)uVar23 + 1U) {
          uVar23 = (ulong)((int)uVar23 + 1);
          break;
        }
        if ((&DAT_710530515a)[uVar23] == 0) {
          uVar23 = uVar23 + 1;
          break;
        }
        local_524[uVar23 + 1] = (&DAT_710530515a)[uVar23];
      }
      local_524[uVar23 & 0xffffffff] = 0;
      uVar47 = (uint)local_524[0];
      local_528 = (int)uVar23;
      uVar52 = uVar51;
      if (local_524[0] != 0) {
        puVar44 = local_524;
        do {
          puVar44 = puVar44 + 1;
          uVar52 = uVar52 * 0x89 ^ uVar47;
          uVar47 = (uint)*puVar44;
        } while (uVar47 != 0);
      }
      local_124 = CONCAT71(DAT_7105305558._1_7_,(char)DAT_7105305558);
      local_530 = (long *)CONCAT44(uVar52,(undefined4)local_530);
      local_11c = DAT_7105305560;
      local_118[0] = 0;
      uVar39 = uStack_600;
      uStack_600._4_4_ = uVar13;
      uVar10 = local_5c0;
      local_5c0._1_1_ = cVar5;
      uVar8 = uStack_5ba;
      uStack_5ba._2_1_ = uVar15;
      uStack_5ba._3_1_ = cVar14;
      uStack_5ba._4_4_ = uVar16;
      uVar11 = local_5b2;
      local_5b2._2_6_ = uVar17;
      iVar46 = _local_59c;
      uStack_598 = uVar20;
      uVar12 = local_594;
      local_594._4_4_ = uVar18;
      FUN_7101696040(local_118,&DAT_710530556c);
      uVar18 = local_594._4_4_;
      uVar20 = uStack_598;
      uVar17 = local_5b2._2_6_;
      uVar16 = uStack_5ba._4_4_;
      cVar14 = uStack_5ba._3_1_;
      uVar15 = uStack_5ba._2_1_;
      cVar5 = local_5c0._1_1_;
      uVar13 = uStack_600._4_4_;
      local_d0 = DAT_71053055ac;
      local_d8 = CONCAT17(DAT_71053055a4._7_1_,
                          CONCAT52(DAT_71053055a4._2_5_,
                                   CONCAT11(DAT_71053055a4._1_1_,(undefined1)DAT_71053055a4)));
      local_e0 = CONCAT62(DAT_710530559c._2_6_,CONCAT11(DAT_710530559c._1_1_,(char)DAT_710530559c));
      local_c8 = DAT_71053055b4;
      local_c4 = DAT_71053055b8;
      local_bc = DAT_71053055c0;
      local_b0 = DAT_71053055cc;
      local_b8 = DAT_71053055c4;
      if (((uint)DAT_7105306478 == 0x2030100) ||
         (uVar39 = uStack_600, (uint)DAT_7105306478 == 0x2010000)) {
        puVar56 = *(undefined8 **)(*DAT_7105314510 + 0x18);
        local_a60 = (undefined **)0xffffffffffffffff;
        local_a0c = 0;
        uStack_a08 = 0;
        local_a04[0] = 0;
        local_604 = local_604 & 0xffffff00;
        _local_a50 = 0;
        local_a58 = 0;
        uStack_a56 = 0;
        uStack_a54 = 0;
        uStack_600 = 0xffffffffffffffff;
        uStack_600._4_4_ = 0xffffffff;
        local_5f8 = 0;
        local_5f0[0] = 0;
        local_5c0 = 0;
        local_5c0._1_1_ = '\0';
        cStack_5be = '\0';
        sStack_5bc = 0x3c;
        uStack_5ba = 0x200000503;
        uStack_5ba._2_1_ = 0;
        uStack_5ba._3_1_ = '\0';
        uStack_5ba._4_4_ = 2;
        local_5b2 = 0x10300010100000a;
        local_5b2._2_6_ = 0x10300010100;
        local_5aa = 0x100;
        local_5a8 = '\x02';
        local_594 = 0xffffffffffffffff;
        local_594._4_4_ = 0xffffffff;
        _local_59c = -0xffffffff00000001;
        uStack_598 = 0xffffffff;
        local_5a4 = 0xffffffffffffffff;
        local_58c = -1;
        uVar39 = uStack_600;
        uVar10 = local_5c0;
        uVar8 = uStack_5ba;
        uVar11 = local_5b2;
        iVar46 = _local_59c;
        uVar12 = local_594;
        if (DAT_710532f730 != 0) {
          lVar27 = *(long *)(DAT_710532f730 + 8);
          lVar48 = *(long *)(lVar27 + 0x178);
          uVar23 = FUN_71032b23e0(*(long *)(lVar48 + 8),0xd56784f97);
          uVar12 = local_594;
          iVar46 = _local_59c;
          uVar11 = local_5b2;
          uVar8 = uStack_5ba;
          uVar10 = local_5c0;
          uVar39 = uStack_600;
          uVar13 = uStack_600._4_4_;
          uStack_600 = uVar39;
          cVar5 = local_5c0._1_1_;
          local_5c0 = uVar10;
          uVar16 = uStack_5ba._4_4_;
          uVar15 = uStack_5ba._2_1_;
          cVar14 = uStack_5ba._3_1_;
          uStack_5ba = uVar8;
          uVar17 = local_5b2._2_6_;
          local_5b2 = uVar11;
          uVar20 = uStack_598;
          _local_59c = iVar46;
          uVar18 = local_594._4_4_;
          local_594 = uVar12;
          uVar39 = uStack_600;
          uStack_600._4_4_ = uVar13;
          uVar10 = local_5c0;
          local_5c0._1_1_ = cVar5;
          uVar8 = uStack_5ba;
          uStack_5ba._2_1_ = uVar15;
          uStack_5ba._3_1_ = cVar14;
          uStack_5ba._4_4_ = uVar16;
          uVar11 = local_5b2;
          local_5b2._2_6_ = uVar17;
          iVar46 = _local_59c;
          uStack_598 = uVar20;
          uVar12 = local_594;
          local_594._4_4_ = uVar18;
          uVar49 = FUN_71032b1e40(lVar48,uVar23);
          uVar12 = local_594;
          iVar46 = _local_59c;
          uVar11 = local_5b2;
          uVar8 = uStack_5ba;
          uVar10 = local_5c0;
          uVar39 = uStack_600;
          if (-1 < (int)uVar49) {
            uVar13 = uStack_600._4_4_;
            uStack_600 = uVar39;
            cVar5 = local_5c0._1_1_;
            local_5c0 = uVar10;
            uVar16 = uStack_5ba._4_4_;
            uVar15 = uStack_5ba._2_1_;
            cVar14 = uStack_5ba._3_1_;
            uStack_5ba = uVar8;
            uVar17 = local_5b2._2_6_;
            local_5b2 = uVar11;
            uVar20 = uStack_598;
            _local_59c = iVar46;
            uVar18 = local_594._4_4_;
            local_594 = uVar12;
            uVar39 = uStack_600;
            uStack_600._4_4_ = uVar13;
            uVar10 = local_5c0;
            local_5c0._1_1_ = cVar5;
            uVar8 = uStack_5ba;
            uStack_5ba._2_1_ = uVar15;
            uStack_5ba._3_1_ = cVar14;
            uStack_5ba._4_4_ = uVar16;
            uVar11 = local_5b2;
            local_5b2._2_6_ = uVar17;
            iVar46 = _local_59c;
            uStack_598 = uVar20;
            uVar12 = local_594;
            local_594._4_4_ = uVar18;
            uVar23 = FUN_71032b1e40(*(long *)(lVar27 + 0x178),uVar23);
            uVar12 = local_594;
            iVar46 = _local_59c;
            uVar11 = local_5b2;
            uVar8 = uStack_5ba;
            uVar10 = local_5c0;
            uVar39 = uStack_600;
            uVar49 = uVar23 >> 5 & 0x7ffffff;
            (&uStack_598)[uVar49] =
                 (&uStack_598)[uVar49] & (1 << (ulong)((uint)uVar23 & 0x1f) ^ 0xffffffffU);
            local_594 = uVar12;
            uVar12 = local_594;
          }
        }
        local_594 = uVar12;
        _local_59c = iVar46;
        local_5b2 = uVar11;
        uStack_5ba = uVar8;
        local_5c0 = uVar10;
        uStack_600 = uVar39;
        uVar18 = local_594._4_4_;
        uVar20 = uStack_598;
        uVar17 = local_5b2._2_6_;
        uVar16 = uStack_5ba._4_4_;
        cVar14 = uStack_5ba._3_1_;
        uVar15 = uStack_5ba._2_1_;
        cVar5 = local_5c0._1_1_;
        uVar13 = uStack_600._4_4_;
        lVar27 = 0;
        uVar52 = 0xffffffff;
        uVar39 = uStack_600;
        uStack_600._4_4_ = uVar13;
        do {
          local_594._4_4_ = uVar18;
          uStack_598 = uVar20;
          local_5b2._2_6_ = uVar17;
          uStack_5ba._4_4_ = uVar16;
          uStack_5ba._3_1_ = cVar14;
          uStack_5ba._2_1_ = uVar15;
          local_5c0._1_1_ = cVar5;
          uStack_600 = uVar39;
          uVar18 = local_594._4_4_;
          uVar20 = uStack_598;
          uVar17 = local_5b2._2_6_;
          uVar16 = uStack_5ba._4_4_;
          cVar14 = uStack_5ba._3_1_;
          uVar15 = uStack_5ba._2_1_;
          cVar5 = local_5c0._1_1_;
          uVar13 = uStack_600._4_4_;
          ppppppppplVar33 = (long *********)&local_a60;
          uVar39 = uStack_600;
          uStack_600._4_4_ = uVar13;
          uVar10 = local_5c0;
          local_5c0._1_1_ = cVar5;
          uVar8 = uStack_5ba;
          uStack_5ba._2_1_ = uVar15;
          uStack_5ba._3_1_ = cVar14;
          uStack_5ba._4_4_ = uVar16;
          uVar11 = local_5b2;
          local_5b2._2_6_ = uVar17;
          iVar46 = _local_59c;
          uStack_598 = uVar20;
          uVar12 = local_594;
          local_594._4_4_ = uVar18;
          uVar23 = FUN_71017dcc40(puVar56,(uint)lVar27,(uint *)ppppppppplVar33);
          uVar18 = local_594._4_4_;
          uVar20 = uStack_598;
          uVar17 = local_5b2._2_6_;
          uVar16 = uStack_5ba._4_4_;
          cVar14 = uStack_5ba._3_1_;
          uVar15 = uStack_5ba._2_1_;
          cVar5 = local_5c0._1_1_;
          uVar39 = uStack_600;
          uVar47 = uVar52;
          if ((uVar23 & 1) != 0) {
            if ((uint)local_580 == (uint)local_a60) {
              if ((local_580._4_4_ == local_a60._4_4_) &&
                 ((int)local_578 == CONCAT22(uStack_a56,local_a58))) {
                if ((char)local_e0 == (char)local_5c0) {
                  if (((local_e0._1_1_ == local_5c0._1_1_) && (local_e0._2_1_ == cStack_5be)) &&
                     (local_e0._4_2_ == sStack_5bc)) {
                    if (local_e0._6_1_ == (char)uStack_5ba) {
                      if (local_e0._7_1_ == uStack_5ba._1_1_) {
                        if ((char)local_d8 == uStack_5ba._2_1_) {
                          if (local_d8._1_1_ == uStack_5ba._3_1_) {
                            if (local_d8._2_1_ == uStack_5ba._4_1_) {
                              if (local_d8._3_1_ == uStack_5ba._5_1_) {
                                if (local_d8._4_1_ == uStack_5ba._6_1_) {
                                  if (local_d8._5_1_ == uStack_5ba._7_1_) {
                                    if (local_d8._6_1_ == (char)local_5b2) {
                                      if (local_d8._7_1_ == local_5b2._1_1_) {
                                        if ((char)local_d0 == local_5b2._2_1_) {
                                          if (local_d0._1_1_ == local_5b2._3_1_) {
                                            if (local_d0._2_1_ == local_5b2._4_1_) {
                                              if (local_d0._3_1_ == local_5b2._5_1_) {
                                                if (local_d0._4_1_ == local_5b2._6_1_) {
                                                  if (local_d0._5_1_ == local_5b2._7_1_) {
                                                    if (local_d0._6_1_ == (char)local_5aa) {
                                                      if ((local_d0._7_1_ == local_5aa._1_1_) &&
                                                         (local_c8 == local_5a8)) {
                                                        if ((int)local_c4 == (int)local_5a4) {
                                                          if ((local_c4._4_4_ == local_5a4._4_4_) &&
                                                             (local_bc == local_59c)) {
                                                            if ((uint)local_b8 == uStack_598) {
                                                              if (local_b8._4_4_ == (int)local_594)
                                                              {
                                                                if (((int)local_b0 ==
                                                                     local_594._4_4_) &&
                                                                   (uVar47 = (uint)lVar27,
                                                                   local_b0._4_4_ != local_58c)) {
                                                                  uVar47 = uVar52;
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          lVar27 = lVar27 + 1;
          uVar52 = uVar47;
        } while (lVar27 != 0x1e);
        uVar13 = uStack_600._4_4_;
        if ((int)uVar47 < 0) {
          lVar27 = 0;
          do {
            local_594._4_4_ = uVar18;
            uStack_598 = uVar20;
            local_5b2._2_6_ = uVar17;
            uStack_5ba._4_4_ = uVar16;
            uStack_5ba._3_1_ = cVar14;
            uStack_5ba._2_1_ = uVar15;
            local_5c0._1_1_ = cVar5;
            uStack_600._4_4_ = uVar13;
            uStack_600 = uVar39;
            uVar18 = local_594._4_4_;
            uVar20 = uStack_598;
            uVar17 = local_5b2._2_6_;
            uVar16 = uStack_5ba._4_4_;
            cVar14 = uStack_5ba._3_1_;
            uVar15 = uStack_5ba._2_1_;
            cVar5 = local_5c0._1_1_;
            uVar13 = uStack_600._4_4_;
            ppppppppplVar33 = (long *********)&local_a60;
            uVar39 = uStack_600;
            uStack_600._4_4_ = uVar13;
            uVar10 = local_5c0;
            local_5c0._1_1_ = cVar5;
            uVar8 = uStack_5ba;
            uStack_5ba._2_1_ = uVar15;
            uStack_5ba._3_1_ = cVar14;
            uStack_5ba._4_4_ = uVar16;
            uVar11 = local_5b2;
            local_5b2._2_6_ = uVar17;
            iVar46 = _local_59c;
            uStack_598 = uVar20;
            uVar12 = local_594;
            local_594._4_4_ = uVar18;
            uVar23 = FUN_71017dcc40(puVar56,(uint)lVar27,(uint *)ppppppppplVar33);
            uVar12 = local_594;
            iVar46 = _local_59c;
            uVar17 = local_5b2._2_6_;
            uVar16 = uStack_5ba._4_4_;
            uVar15 = uStack_5ba._2_1_;
            uVar8 = uStack_5ba;
            uVar10 = local_5c0;
            uVar13 = uStack_600._4_4_;
            uVar39 = uStack_600;
            uVar11 = local_5b2;
            uStack_5ba._2_1_ = uVar15;
            uStack_5ba._4_4_ = uVar16;
            if ((uVar23 & 1) != 0) {
              uStack_5ba._3_1_ = SUB81(uVar8,3);
              local_5c0._1_1_ = SUB21(uVar10,1);
              if ((uint)DAT_7105306478 == 0x2030300) {
                uStack_5ba._2_1_ = SUB81(uVar8,2);
                if (((uStack_5ba._2_1_ != '\0' || uStack_5ba._3_1_ != '\0') || (sStack_5bc == 0)) ||
                   (local_5c0._1_1_ == '\0')) {
LAB_710185865c:
                  local_604 = (uint)local_604._1_3_ << 8;
                  uStack_5ba._2_1_ = uVar15;
                  goto LAB_71018587b0;
                }
              }
              else if ((uint)DAT_7105306478 == 0x2030200) {
                uStack_5ba._5_1_ = SUB81(uVar8,5);
                if (((uStack_5ba._3_1_ != '\0' || uStack_5ba._5_1_ != '\0') ||
                     local_5b2._2_1_ != '\0') || (local_5c0._1_1_ != '\x01')) goto LAB_710185865c;
              }
              local_604._0_1_ = 1;
              local_604 = CONCAT31(local_604._1_3_,1);
              uVar20 = (uint)uStack_600;
              if ((uint)uStack_600 <= uStack_600._4_4_) {
                uVar20 = uStack_600._4_4_;
              }
              uStack_5ba._2_1_ = uVar15;
              if ((int)uVar47 < (int)uVar20) {
                local_578 = (undefined8 *)CONCAT44(local_578._4_4_,CONCAT22(uStack_a56,local_a58));
                local_580 = local_a60;
                uVar23 = 0;
                do {
                  uVar49 = uVar23;
                  if (local_a4c[uVar23] == '\0') break;
                  local_56a[uVar23 - 2] = local_a4c[uVar23];
                  if (local_a4c[uVar23 + 1] == '\0') {
                    uVar49 = uVar23 + 1;
                    break;
                  }
                  cVar5 = local_a4c[uVar23 + 2];
                  local_56a[uVar23 - 1] = local_a4c[uVar23 + 1];
                  if (cVar5 == '\0') {
                    uVar49 = uVar23 + 2;
                    break;
                  }
                  uVar49 = uVar23 + 3;
                  local_56a[uVar23] = cVar5;
                  uVar23 = uVar49;
                } while ((uint)uVar49 < 0x3f);
                local_56a[(uVar49 & 0xffffffff) - 2] = '\0';
                local_570 = (int)uVar49;
                uVar47 = (uint)(byte)local_56c;
                pbVar42 = (byte *)((long)&local_56c + 1);
                uVar52 = uVar51;
                if ((byte)local_56c != 0) {
                  do {
                    uVar52 = uVar52 * 0x89 ^ uVar47;
                    uVar47 = (uint)*pbVar42;
                    pbVar42 = pbVar42 + 1;
                  } while (uVar47 != 0);
                }
                local_578 = (undefined8 *)CONCAT44(uVar52,CONCAT22(uStack_a56,local_a58));
                uVar23 = 0;
                psVar45 = (short *)((long)&local_520 + 2);
                while( true ) {
                  if (local_a04[uVar23] == 0) break;
                  psVar45[-3] = local_a04[uVar23];
                  if (local_a04[uVar23 + 1] == 0) {
                    uVar23 = uVar23 | 1;
                    break;
                  }
                  psVar45[-2] = local_a04[uVar23 + 1];
                  if (*(short *)(&local_a00 + uVar23 * 2) == 0) {
                    uVar23 = uVar23 | 2;
                    break;
                  }
                  psVar45[-1] = *(short *)(&local_a00 + uVar23 * 2);
                  if (0x1fe < (int)uVar23 + 3U) {
                    uVar23 = (ulong)((int)uVar23 + 3);
                    break;
                  }
                  sVar6 = *(short *)((long)&uStack_9ff + uVar23 * 2 + 1);
                  if (sVar6 == 0) {
                    uVar23 = uVar23 | 3;
                    break;
                  }
                  uVar23 = uVar23 + 4;
                  *psVar45 = sVar6;
                  psVar45 = psVar45 + 4;
                }
                local_524[uVar23 & 0xffffffff] = 0;
                local_528 = (undefined4)uVar23;
                uVar47 = (uint)local_524[0];
                uVar52 = uVar51;
                puVar44 = local_524;
                if (local_524[0] != 0) {
                  do {
                    uVar52 = uVar52 * 0x89 ^ uVar47;
                    uVar47 = (uint)puVar44[1];
                    puVar44 = puVar44 + 1;
                  } while (uVar47 != 0);
                }
                local_530 = (long *)CONCAT44(uVar52,(undefined4)local_530);
                local_124 = CONCAT84(uStack_600,local_604);
                local_11c = uVar13;
                cVar5 = local_5c0._1_1_;
                local_5c0 = uVar10;
                cVar14 = uStack_5ba._3_1_;
                uStack_5ba = uVar8;
                uVar52 = uStack_598;
                _local_59c = iVar46;
                uVar16 = local_594._4_4_;
                local_594 = uVar12;
                uStack_600._4_4_ = uVar13;
                uVar10 = local_5c0;
                local_5c0._1_1_ = cVar5;
                uVar8 = uStack_5ba;
                uStack_5ba._3_1_ = cVar14;
                local_5b2._2_6_ = uVar17;
                iVar46 = _local_59c;
                uStack_598 = uVar52;
                uVar12 = local_594;
                local_594._4_4_ = uVar16;
                FUN_7101696040(local_118,local_5f0);
                uVar12 = local_594;
                iVar46 = _local_59c;
                uVar11 = local_5b2;
                uVar8 = uStack_5ba;
                uVar10 = local_5c0;
                uVar39 = uStack_600;
                local_e0 = CONCAT86(uVar8,CONCAT24(sStack_5bc,
                                                   CONCAT13(uStack_5bd,
                                                            CONCAT12(cStack_5be,
                                                                     CONCAT12(local_5c0._1_1_,uVar10
                                                                             )))));
                local_d8 = CONCAT86(uVar11,CONCAT42(uStack_5ba._4_4_,
                                                    CONCAT11(uStack_5ba._3_1_,uStack_5ba._2_1_)));
                local_d0 = CONCAT26(local_5aa,local_5b2._2_6_);
                local_c8 = local_5a8;
                local_bc = iVar46;
                local_c4 = local_5a4;
                local_b8 = CONCAT84(uVar12,uStack_598);
                local_b0 = CONCAT44(local_58c,local_594._4_4_);
                uVar47 = uVar20;
                uVar13 = uStack_600._4_4_;
                uVar17 = local_5b2._2_6_;
              }
            }
LAB_71018587b0:
            local_5b2._2_6_ = uVar17;
            uStack_600._4_4_ = uVar13;
            local_594 = uVar12;
            _local_59c = iVar46;
            local_5b2 = uVar11;
            uStack_5ba = uVar8;
            local_5c0 = uVar10;
            uStack_600 = uVar39;
            uVar18 = local_594._4_4_;
            uVar20 = uStack_598;
            uVar17 = local_5b2._2_6_;
            uVar16 = uStack_5ba._4_4_;
            cVar14 = uStack_5ba._3_1_;
            uVar15 = uStack_5ba._2_1_;
            cVar5 = local_5c0._1_1_;
            uVar13 = uStack_600._4_4_;
            lVar27 = lVar27 + 1;
            uVar39 = uStack_600;
          } while (lVar27 != 0x1e);
          if ((int)uVar47 < 0) {
            uVar52 = DAT_71053050f0 & 0x7f000000;
            bVar19 = DAT_71053050f4 != '\0';
            if ((int)(uint)DAT_7105306478 < 0x2030300) {
              if ((uint)DAT_7105306478 == 0x2020000) {
                ppppppppplVar33 = (long *********)0x1;
                ppppbVar36 = (byte ****)0x1;
              }
              else if ((uint)DAT_7105306478 == 0x2030200) {
                ppppbVar36 = (byte ****)0x1;
                ppppppppplVar33 = (long *********)&DAT_00000004;
              }
              else {
LAB_7101858870:
                ppppppppplVar33 = (long *********)0x0;
                ppppbVar36 = (byte ****)0x0;
              }
            }
            else if ((uint)DAT_7105306478 == 0x2030300) {
              ppppbVar36 = (byte ****)0x0;
              ppppppppplVar33 = (long *********)0x3;
            }
            else {
              if ((uint)DAT_7105306478 != 0x2040000) goto LAB_7101858870;
              ppppbVar36 = (byte ****)0x0;
              ppppppppplVar33 = (long *********)0x2;
            }
            uStack_600._4_4_ = uVar13;
            uVar10 = local_5c0;
            local_5c0._1_1_ = cVar5;
            uVar8 = uStack_5ba;
            uStack_5ba._2_1_ = uVar15;
            uStack_5ba._3_1_ = cVar14;
            uStack_5ba._4_4_ = uVar16;
            uVar11 = local_5b2;
            local_5b2._2_6_ = uVar17;
            iVar46 = _local_59c;
            uStack_598 = uVar20;
            uVar12 = local_594;
            local_594._4_4_ = uVar18;
            FUN_7103298680((uint *)&local_ad0,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1a8),
                           (uint)ppppppppplVar33,(char)ppppbVar36);
            uVar18 = local_594._4_4_;
            uVar20 = uStack_598;
            uVar17 = local_5b2._2_6_;
            uVar16 = uStack_5ba._4_4_;
            cVar14 = uStack_5ba._3_1_;
            uVar15 = uStack_5ba._2_1_;
            cVar5 = local_5c0._1_1_;
            uVar13 = uStack_600._4_4_;
            if (bVar19 || uVar52 == 0x7000000) {
              local_a70 = 0;
              uStack_a6b = 1;
            }
            local_580 = (undefined **)CONCAT44((uint)local_ad0,(uint)local_580);
            local_578 = (undefined8 *)CONCAT44(local_578._4_4_,local_ad0._4_4_);
            for (uVar23 = 0; *(char *)((long)&local_ac0 + uVar23) != '\0'; uVar23 = uVar23 + 2) {
              local_56a[uVar23 - 2] = *(char *)((long)&local_ac0 + uVar23);
              if (0x3e < (int)uVar23 + 1U) {
                uVar23 = (ulong)((int)uVar23 + 1);
                break;
              }
              cVar7 = *(char *)((long)&local_ac0 + uVar23 + 1);
              if (cVar7 == '\0') {
                uVar23 = uVar23 + 1;
                break;
              }
              local_56a[uVar23 - 1] = cVar7;
            }
            local_56a[(uVar23 & 0xffffffff) - 2] = '\0';
            local_570 = (int)uVar23;
            uVar47 = (uint)(byte)local_56c;
            uVar52 = uVar51;
            if ((byte)local_56c != 0) {
              pbVar42 = (byte *)((long)&local_56c + 1);
              do {
                uVar52 = uVar52 * 0x89 ^ uVar47;
                uVar47 = (uint)*pbVar42;
                pbVar42 = pbVar42 + 1;
              } while (uVar47 != 0);
            }
            local_578 = (undefined8 *)CONCAT44(uVar52,local_ad0._4_4_);
            local_d0 = CONCAT26(uStack_a6a,CONCAT15(uStack_a6b,CONCAT41(uStack_a6f,local_a70)));
            local_e0 = local_a80;
            local_d8 = uStack_a78;
            uVar39 = uStack_600;
            if (local_a68 == '\0') {
              local_bc = 0;
              local_c4 = 0;
            }
            else {
              local_bc = -1;
              local_c4 = 0xffffffffffffffff;
            }
          }
        }
      }
      local_594._4_4_ = uVar18;
      uStack_598 = uVar20;
      local_5b2._2_6_ = uVar17;
      uStack_5ba._4_4_ = uVar16;
      uStack_5ba._3_1_ = cVar14;
      uStack_5ba._2_1_ = uVar15;
      local_5c0._1_1_ = cVar5;
      uStack_600._4_4_ = uVar13;
      uStack_600 = uVar39;
      uVar18 = local_594._4_4_;
      uVar52 = uStack_598;
      uVar17 = local_5b2._2_6_;
      uVar16 = uStack_5ba._4_4_;
      cVar7 = uStack_5ba._3_1_;
      uVar15 = uStack_5ba._2_1_;
      cVar14 = local_5c0._1_1_;
      uVar13 = uStack_600._4_4_;
      cVar5 = DAT_71053050f4;
      uVar20 = DAT_71053050f0;
      uVar39 = local_e0;
      uVar8 = local_d8;
      uStack_600._4_4_ = uVar13;
      local_5c0._1_1_ = cVar14;
      uStack_5ba._2_1_ = uVar15;
      uStack_5ba._3_1_ = cVar7;
      uStack_5ba._4_4_ = uVar16;
      local_5b2._2_6_ = uVar17;
      uStack_598 = uVar52;
      local_594._4_4_ = uVar18;
      if ((uint)DAT_7105306478 == 0x2030300) {
        if (((local_e0._1_1_ != '\0') && (local_e0._4_2_ != 0)) &&
           (((char)local_d8 == '\0' && (local_d8._1_1_ == '\0')))) goto LAB_7101858c08;
        local_124 = (ulong)local_124._1_7_ << 8;
        ppppppppplVar33 = (long *********)0x3;
        ppppbVar36 = (byte ****)0x0;
        uVar39 = uStack_600;
        uVar10 = local_5c0;
        uVar8 = uStack_5ba;
        uVar11 = local_5b2;
        iVar46 = _local_59c;
        uVar12 = local_594;
        FUN_7103298680((uint *)&local_a60,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1a8),3,'\0');
        uVar18 = local_594._4_4_;
        uVar52 = uStack_598;
        uVar17 = local_5b2._2_6_;
        uVar16 = uStack_5ba._4_4_;
        cVar7 = uStack_5ba._3_1_;
        uVar15 = uStack_5ba._2_1_;
        cVar14 = local_5c0._1_1_;
        uVar13 = uStack_600._4_4_;
        if (cVar5 == '\0') {
LAB_7101858aa4:
          local_594._4_4_ = uVar18;
          uStack_598 = uVar52;
          local_5b2._2_6_ = uVar17;
          uStack_5ba._4_4_ = uVar16;
          uStack_5ba._3_1_ = cVar7;
          uStack_5ba._2_1_ = uVar15;
          local_5c0._1_1_ = cVar14;
          uStack_600._4_4_ = uVar13;
          uVar18 = local_594._4_4_;
          uVar52 = uStack_598;
          uVar17 = local_5b2._2_6_;
          uVar16 = uStack_5ba._4_4_;
          cVar7 = uStack_5ba._3_1_;
          uVar15 = uStack_5ba._2_1_;
          cVar14 = local_5c0._1_1_;
          uVar13 = uStack_600._4_4_;
          if ((uVar20 & 0x7f000000) == 0x7000000) goto LAB_7101858ab4;
        }
        else {
LAB_7101858ab4:
          local_594._4_4_ = uVar18;
          uStack_598 = uVar52;
          local_5b2._2_6_ = uVar17;
          uStack_5ba._4_4_ = uVar16;
          uStack_5ba._3_1_ = cVar7;
          uStack_5ba._2_1_ = uVar15;
          local_5c0._1_1_ = cVar14;
          uStack_600._4_4_ = uVar13;
          uVar18 = local_594._4_4_;
          uVar52 = uStack_598;
          uVar17 = local_5b2._2_6_;
          uVar16 = uStack_5ba._4_4_;
          cVar7 = uStack_5ba._3_1_;
          uVar15 = uStack_5ba._2_1_;
          cVar14 = local_5c0._1_1_;
          uVar13 = uStack_600._4_4_;
          local_a00 = '\0';
          uStack_9fb = 1;
        }
        local_594._4_4_ = uVar18;
        uStack_598 = uVar52;
        local_5b2._2_6_ = uVar17;
        uStack_5ba._4_4_ = uVar16;
        uStack_5ba._3_1_ = cVar7;
        uStack_5ba._2_1_ = uVar15;
        local_5c0._1_1_ = cVar14;
        uStack_600._4_4_ = uVar13;
        uVar18 = local_594._4_4_;
        uVar52 = uStack_598;
        uVar17 = local_5b2._2_6_;
        uVar16 = uStack_5ba._4_4_;
        cVar7 = uStack_5ba._3_1_;
        uVar15 = uStack_5ba._2_1_;
        cVar14 = local_5c0._1_1_;
        uVar13 = uStack_600._4_4_;
        local_578 = (undefined8 *)CONCAT44(local_578._4_4_,local_a60._4_4_);
        local_580 = (undefined **)CONCAT44((uint)local_a60,(uint)local_580);
        for (uVar23 = 0; local_a50[uVar23] != '\0'; uVar23 = uVar23 + 2) {
          local_56a[uVar23 - 2] = local_a50[uVar23];
          if (0x3e < (int)uVar23 + 1U) {
            uVar23 = (ulong)((int)uVar23 + 1);
            break;
          }
          if (local_a50[uVar23 + 1] == '\0') {
            uVar23 = uVar23 + 1;
            break;
          }
          local_56a[uVar23 - 1] = local_a50[uVar23 + 1];
        }
        local_56a[(uVar23 & 0xffffffff) - 2] = '\0';
        uVar20 = (uint)(byte)local_56c;
        local_570 = (int)uVar23;
        if ((byte)local_56c != 0) {
          pbVar42 = (byte *)((long)&local_56c + 1);
          do {
            uVar51 = uVar51 * 0x89 ^ uVar20;
            uVar20 = (uint)*pbVar42;
            pbVar42 = pbVar42 + 1;
          } while (uVar20 != 0);
        }
        uVar39 = CONCAT44(local_a0c,uStack_a10);
        uVar8 = CONCAT26(local_a04[1],CONCAT24(local_a04[0],uStack_a08));
        local_578 = (undefined8 *)CONCAT44(uVar51,local_a60._4_4_);
        local_d0 = CONCAT26(uStack_9fa,CONCAT15(uStack_9fb,CONCAT41(uStack_9ff,local_a00)));
        if (local_9f8 == '\0') {
          local_bc = 0;
          local_c4 = 0;
        }
        else {
          local_bc = -1;
          local_c4 = 0xffffffffffffffff;
        }
        local_e0._1_1_ = (char)((uint)uStack_a10 >> 8);
        local_d8._1_1_ = (char)((uint)uStack_a08 >> 8);
        if ((uint)DAT_7105306478 == 0x2030300) {
          if (((local_e0._1_1_ != '\0') && (local_e0._4_2_ = (short)local_a0c, local_e0._4_2_ != 0))
             && ((local_d8._0_1_ = (char)uStack_a08, (char)local_d8 == '\0' &&
                 (local_d8._1_1_ == '\0')))) goto LAB_7101858c08;
LAB_7101858c00:
          uVar38 = 0;
          local_e0 = uVar39;
          local_d8 = uVar8;
        }
        else {
          if (((uint)DAT_7105306478 == 0x2030200) &&
             ((((local_e0._1_1_ != '\x01' || (local_d8._1_1_ != '\0')) ||
               (local_d8._3_1_ = (char)((uint)uStack_a08 >> 0x18), local_d8._3_1_ != '\0')) ||
              (local_a00 != '\0')))) goto LAB_7101858c00;
LAB_7101858c08:
          local_594._4_4_ = uVar18;
          uStack_598 = uVar52;
          local_5b2._2_6_ = uVar17;
          uStack_5ba._4_4_ = uVar16;
          uStack_5ba._3_1_ = cVar7;
          uStack_5ba._2_1_ = uVar15;
          local_5c0._1_1_ = cVar14;
          uStack_600._4_4_ = uVar13;
          local_d8 = uVar8;
          local_e0 = uVar39;
          uVar18 = local_594._4_4_;
          uVar52 = uStack_598;
          uVar17 = local_5b2._2_6_;
          uVar16 = uStack_5ba._4_4_;
          cVar7 = uStack_5ba._3_1_;
          uVar15 = uStack_5ba._2_1_;
          cVar14 = local_5c0._1_1_;
          uVar13 = uStack_600._4_4_;
          uVar38 = 1;
        }
        local_594._4_4_ = uVar18;
        uStack_598 = uVar52;
        local_5b2._2_6_ = uVar17;
        uStack_5ba._4_4_ = uVar16;
        uStack_5ba._3_1_ = cVar7;
        uStack_5ba._2_1_ = uVar15;
        local_5c0._1_1_ = cVar14;
        uStack_600._4_4_ = uVar13;
        uVar18 = local_594._4_4_;
        uVar52 = uStack_598;
        uVar17 = local_5b2._2_6_;
        uVar16 = uStack_5ba._4_4_;
        cVar7 = uStack_5ba._3_1_;
        uVar15 = uStack_5ba._2_1_;
        cVar14 = local_5c0._1_1_;
        uVar13 = uStack_600._4_4_;
        local_124 = CONCAT71(local_124._1_7_,uVar38);
      }
      else {
        if ((uint)DAT_7105306478 != 0x2030200) goto LAB_7101858c08;
        if ((((local_e0._1_1_ == '\x01') && (local_d8._1_1_ == '\0')) && (local_d8._3_1_ == '\0'))
           && ((char)local_d0 == '\0')) {
          uVar38 = 1;
        }
        else {
          uVar38 = 0;
        }
        local_124 = CONCAT71(local_124._1_7_,uVar38);
        if ((((char)local_e0 != '\0') || (local_e0._1_1_ != '\x01')) ||
           ((local_d8._1_1_ != '\0' || (local_d8._7_1_ != '\0')))) {
          ppppppppplVar33 = (long *********)&DAT_00000004;
          ppppbVar36 = (byte ****)0x1;
          uVar39 = uStack_600;
          uVar10 = local_5c0;
          uVar8 = uStack_5ba;
          uVar11 = local_5b2;
          iVar46 = _local_59c;
          uVar12 = local_594;
          FUN_7103298680((uint *)&local_a60,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1a8),4,
                         '\x01');
          uVar18 = local_594._4_4_;
          uVar52 = uStack_598;
          uVar17 = local_5b2._2_6_;
          uVar16 = uStack_5ba._4_4_;
          cVar7 = uStack_5ba._3_1_;
          uVar15 = uStack_5ba._2_1_;
          cVar14 = local_5c0._1_1_;
          uVar13 = uStack_600._4_4_;
          if (cVar5 == '\0') goto LAB_7101858aa4;
          goto LAB_7101858ab4;
        }
      }
      local_594._4_4_ = uVar18;
      uStack_598 = uVar52;
      local_5b2._2_6_ = uVar17;
      uStack_5ba._4_4_ = uVar16;
      uStack_5ba._3_1_ = cVar7;
      uStack_5ba._2_1_ = uVar15;
      local_5c0._1_1_ = cVar14;
      uStack_600._4_4_ = uVar13;
      uVar18 = local_594._4_4_;
      uVar20 = uStack_598;
      uVar17 = local_5b2._2_6_;
      uVar16 = uStack_5ba._4_4_;
      cVar14 = uStack_5ba._3_1_;
      uVar15 = uStack_5ba._2_1_;
      cVar5 = local_5c0._1_1_;
      uVar13 = uStack_600._4_4_;
      uVar39 = uStack_600;
      uStack_600._4_4_ = uVar13;
      uVar10 = local_5c0;
      local_5c0._1_1_ = cVar5;
      uVar8 = uStack_5ba;
      uStack_5ba._2_1_ = uVar15;
      uStack_5ba._3_1_ = cVar14;
      uStack_5ba._4_4_ = uVar16;
      uVar11 = local_5b2;
      local_5b2._2_6_ = uVar17;
      iVar46 = _local_59c;
      uStack_598 = uVar20;
      uVar12 = local_594;
      local_594._4_4_ = uVar18;
      FUN_71017a3910(&local_580);
      uVar12 = local_594;
      iVar46 = _local_59c;
      uVar11 = local_5b2;
      uVar8 = uStack_5ba;
      uVar10 = local_5c0;
      uVar39 = uStack_600;
      uStack_600 = uVar39;
      local_5c0 = uVar10;
      uStack_5ba = uVar8;
      local_5b2 = uVar11;
      _local_59c = iVar46;
      local_594 = uVar12;
      if ((uint)DAT_7105306478 == 0x2030200) {
        if ((((char)local_e0 == '\0') && (local_e0._1_1_ == '\x01')) &&
           ((local_d8._1_1_ == '\0' && (local_d8._7_1_ == '\0')))) goto LAB_7101858cdc;
LAB_7101858c54:
        uVar13 = uStack_600._4_4_;
        cVar5 = local_5c0._1_1_;
        uVar16 = uStack_5ba._4_4_;
        uVar15 = uStack_5ba._2_1_;
        cVar14 = uStack_5ba._3_1_;
        uVar17 = local_5b2._2_6_;
        uVar20 = uStack_598;
        uVar18 = local_594._4_4_;
        uVar39 = uStack_600;
        uStack_600._4_4_ = uVar13;
        uVar10 = local_5c0;
        local_5c0._1_1_ = cVar5;
        uVar8 = uStack_5ba;
        uStack_5ba._2_1_ = uVar15;
        uStack_5ba._3_1_ = cVar14;
        uStack_5ba._4_4_ = uVar16;
        uVar11 = local_5b2;
        local_5b2._2_6_ = uVar17;
        iVar46 = _local_59c;
        uStack_598 = uVar20;
        uVar12 = local_594;
        local_594._4_4_ = uVar18;
        FUN_7103776910(&local_a60,(long)&local_a0,(long ****)"set_txt_mode_off",ppppppppplVar33,
                       ppppbVar36,pppplVar37,param_6,param_7,param_8);
        uVar12 = local_594;
        iVar46 = _local_59c;
        uVar11 = local_5b2;
        uVar8 = uStack_5ba;
        uVar10 = local_5c0;
        uVar39 = uStack_600;
        plVar54 = (long *)CONCAT44(uStack_a54,CONCAT22(uStack_a56,local_a58));
        lVar27 = *plVar54;
        if (lVar27 != 0) {
          *(byte *)(lVar27 + 0x58) = *(byte *)(lVar27 + 0x58) & 0xfe;
        }
        local_a60 = &PTR_FUN_710523d9a8;
        local_a58 = 0;
        uStack_a56 = 0;
        uStack_a54 = 0;
        if (plVar54 != (long *)0x0) {
          uVar13 = uStack_600._4_4_;
          uStack_600 = uVar39;
          cVar5 = local_5c0._1_1_;
          local_5c0 = uVar10;
          uVar16 = uStack_5ba._4_4_;
          uVar15 = uStack_5ba._2_1_;
          cVar14 = uStack_5ba._3_1_;
          uStack_5ba = uVar8;
          uVar17 = local_5b2._2_6_;
          local_5b2 = uVar11;
          uVar20 = uStack_598;
          _local_59c = iVar46;
          uVar18 = local_594._4_4_;
          local_594 = uVar12;
          uVar39 = uStack_600;
          uStack_600._4_4_ = uVar13;
          uVar10 = local_5c0;
          local_5c0._1_1_ = cVar5;
          uVar8 = uStack_5ba;
          uStack_5ba._2_1_ = uVar15;
          uStack_5ba._3_1_ = cVar14;
          uStack_5ba._4_4_ = uVar16;
          uVar11 = local_5b2;
          local_5b2._2_6_ = uVar17;
          iVar46 = _local_59c;
          uStack_598 = uVar20;
          uVar12 = local_594;
          local_594._4_4_ = uVar18;
          FUN_710392eb40((ulong)plVar54);
          uVar12 = local_594;
          iVar46 = _local_59c;
          uVar11 = local_5b2;
          uVar8 = uStack_5ba;
          uVar10 = local_5c0;
          uVar39 = uStack_600;
        }
        local_594 = uVar12;
        _local_59c = iVar46;
        local_5b2 = uVar11;
        uStack_5ba = uVar8;
        local_5c0 = uVar10;
        uStack_600 = uVar39;
        uVar18 = local_594._4_4_;
        uVar20 = uStack_598;
        uVar17 = local_5b2._2_6_;
        uVar16 = uStack_5ba._4_4_;
        cVar14 = uStack_5ba._3_1_;
        uVar15 = uStack_5ba._2_1_;
        cVar5 = local_5c0._1_1_;
        uVar13 = uStack_600._4_4_;
        uVar39 = uStack_600;
        uStack_600._4_4_ = uVar13;
        uVar10 = local_5c0;
        local_5c0._1_1_ = cVar5;
        uVar8 = uStack_5ba;
        uStack_5ba._2_1_ = uVar15;
        uStack_5ba._3_1_ = cVar14;
        uStack_5ba._4_4_ = uVar16;
        uVar11 = local_5b2;
        local_5b2._2_6_ = uVar17;
        iVar46 = _local_59c;
        uStack_598 = uVar20;
        uVar12 = local_594;
        local_594._4_4_ = uVar18;
        FUN_7103776910(&local_a60,(long)&local_a0,(long ****)"set_txt_mode_on",ppppppppplVar33,
                       ppppbVar36,pppplVar37,param_6,param_7,param_8);
        uVar12 = local_594;
        iVar46 = _local_59c;
        uVar11 = local_5b2;
        uVar8 = uStack_5ba;
        uVar10 = local_5c0;
        uVar39 = uStack_600;
        plVar54 = (long *)CONCAT44(uStack_a54,CONCAT22(uStack_a56,local_a58));
        lVar27 = *plVar54;
        if (lVar27 != 0) {
          *(byte *)(lVar27 + 0x58) = *(byte *)(lVar27 + 0x58) & 0xfe;
        }
        local_a60 = &PTR_FUN_710523d9a8;
        local_a58 = 0;
        uStack_a56 = 0;
        uStack_a54 = 0;
        if (plVar54 != (long *)0x0) {
          uVar13 = uStack_600._4_4_;
          uStack_600 = uVar39;
          cVar5 = local_5c0._1_1_;
          local_5c0 = uVar10;
          uVar16 = uStack_5ba._4_4_;
          uVar15 = uStack_5ba._2_1_;
          cVar14 = uStack_5ba._3_1_;
          uStack_5ba = uVar8;
          uVar17 = local_5b2._2_6_;
          local_5b2 = uVar11;
          uVar20 = uStack_598;
          _local_59c = iVar46;
          uVar18 = local_594._4_4_;
          local_594 = uVar12;
          uVar39 = uStack_600;
          uStack_600._4_4_ = uVar13;
          uVar10 = local_5c0;
          local_5c0._1_1_ = cVar5;
          uVar8 = uStack_5ba;
          uStack_5ba._2_1_ = uVar15;
          uStack_5ba._3_1_ = cVar14;
          uStack_5ba._4_4_ = uVar16;
          uVar11 = local_5b2;
          local_5b2._2_6_ = uVar17;
          iVar46 = _local_59c;
          uStack_598 = uVar20;
          uVar12 = local_594;
          local_594._4_4_ = uVar18;
          FUN_710392eb40((ulong)plVar54);
          uVar12 = local_594;
          iVar46 = _local_59c;
          uVar11 = local_5b2;
          uVar8 = uStack_5ba;
          uVar10 = local_5c0;
          uVar39 = uStack_600;
        }
      }
      else {
        if ((char)local_124 == '\0') goto LAB_7101858c54;
LAB_7101858cdc:
        local_a60 = (undefined **)0x0;
        local_a58 = 0;
        uVar13 = uStack_600._4_4_;
        cVar5 = local_5c0._1_1_;
        uVar16 = uStack_5ba._4_4_;
        uVar15 = uStack_5ba._2_1_;
        cVar14 = uStack_5ba._3_1_;
        uVar17 = local_5b2._2_6_;
        uVar20 = uStack_598;
        uVar18 = local_594._4_4_;
        uVar39 = uStack_600;
        uStack_600._4_4_ = uVar13;
        uVar10 = local_5c0;
        local_5c0._1_1_ = cVar5;
        uVar8 = uStack_5ba;
        uStack_5ba._2_1_ = uVar15;
        uStack_5ba._3_1_ = cVar14;
        uStack_5ba._4_4_ = uVar16;
        uVar11 = local_5b2;
        local_5b2._2_6_ = uVar17;
        iVar46 = _local_59c;
        uStack_598 = uVar20;
        uVar12 = local_594;
        local_594._4_4_ = uVar18;
        FUN_71017ab0c0((long)&local_580,&local_a60);
        uVar12 = local_594;
        iVar46 = _local_59c;
        uVar11 = local_5b2;
        uVar8 = uStack_5ba;
        uVar10 = local_5c0;
        uVar39 = uStack_600;
        local_ac0 = &local_a0;
        local_ad0 = lVar50;
        puStack_ac8 = &local_580;
        puStack_ab8 = &local_a60;
        uVar13 = uStack_600._4_4_;
        uStack_600 = uVar39;
        cVar5 = local_5c0._1_1_;
        local_5c0 = uVar10;
        uVar16 = uStack_5ba._4_4_;
        uVar15 = uStack_5ba._2_1_;
        cVar14 = uStack_5ba._3_1_;
        uStack_5ba = uVar8;
        uVar17 = local_5b2._2_6_;
        local_5b2 = uVar11;
        uVar20 = uStack_598;
        _local_59c = iVar46;
        uVar18 = local_594._4_4_;
        local_594 = uVar12;
        uVar39 = uStack_600;
        uStack_600._4_4_ = uVar13;
        uVar10 = local_5c0;
        local_5c0._1_1_ = cVar5;
        uVar8 = uStack_5ba;
        uStack_5ba._2_1_ = uVar15;
        uStack_5ba._3_1_ = cVar14;
        uStack_5ba._4_4_ = uVar16;
        uVar11 = local_5b2;
        local_5b2._2_6_ = uVar17;
        iVar46 = _local_59c;
        uStack_598 = uVar20;
        uVar12 = local_594;
        local_594._4_4_ = uVar18;
        FUN_7101bdd9d0(&local_ad0,(byte ****)"set_txt_mode_on",ppppppppplVar33,ppppbVar36,pppplVar37
                       ,param_6,param_7,param_8);
        uVar12 = local_594;
        iVar46 = _local_59c;
        uVar11 = local_5b2;
        uVar8 = uStack_5ba;
        uVar10 = local_5c0;
        uVar39 = uStack_600;
        uVar13 = uStack_600._4_4_;
        uStack_600 = uVar39;
        cVar5 = local_5c0._1_1_;
        local_5c0 = uVar10;
        uVar16 = uStack_5ba._4_4_;
        uVar15 = uStack_5ba._2_1_;
        cVar14 = uStack_5ba._3_1_;
        uStack_5ba = uVar8;
        uVar17 = local_5b2._2_6_;
        local_5b2 = uVar11;
        uVar20 = uStack_598;
        _local_59c = iVar46;
        uVar18 = local_594._4_4_;
        local_594 = uVar12;
        uVar39 = uStack_600;
        uStack_600._4_4_ = uVar13;
        uVar10 = local_5c0;
        local_5c0._1_1_ = cVar5;
        uVar8 = uStack_5ba;
        uStack_5ba._2_1_ = uVar15;
        uStack_5ba._3_1_ = cVar14;
        uStack_5ba._4_4_ = uVar16;
        uVar11 = local_5b2;
        local_5b2._2_6_ = uVar17;
        iVar46 = _local_59c;
        uStack_598 = uVar20;
        uVar12 = local_594;
        local_594._4_4_ = uVar18;
        FUN_7101bdd9d0(&local_ad0,(byte ****)"set_txt_mode_off",ppppppppplVar33,ppppbVar36,
                       pppplVar37,param_6,param_7,param_8);
        uVar12 = local_594;
        iVar46 = _local_59c;
        uVar11 = local_5b2;
        uVar8 = uStack_5ba;
        uVar10 = local_5c0;
        uVar39 = uStack_600;
      }
      local_594 = uVar12;
      _local_59c = iVar46;
      local_5b2 = uVar11;
      uStack_5ba = uVar8;
      local_5c0 = uVar10;
      uStack_600 = uVar39;
      uVar23 = local_98;
      uVar18 = local_594._4_4_;
      uVar20 = uStack_598;
      uVar17 = local_5b2._2_6_;
      uVar16 = uStack_5ba._4_4_;
      cVar14 = uStack_5ba._3_1_;
      uVar15 = uStack_5ba._2_1_;
      cVar5 = local_5c0._1_1_;
      uVar13 = uStack_600._4_4_;
      local_a0 = &PTR_FUN_710523d988;
      local_98 = 0;
      uVar39 = uStack_600;
      uVar10 = local_5c0;
      uVar8 = uStack_5ba;
      uVar11 = local_5b2;
      iVar46 = _local_59c;
      uVar12 = local_594;
      if (uVar23 != 0) {
        uVar49 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar49 != 0) {
          uStack_600._4_4_ = uVar13;
          local_5c0._1_1_ = cVar5;
          uStack_5ba._2_1_ = uVar15;
          uStack_5ba._3_1_ = cVar14;
          uStack_5ba._4_4_ = uVar16;
          local_5b2._2_6_ = uVar17;
          uStack_598 = uVar20;
          local_594._4_4_ = uVar18;
          FUN_710392eb40(uVar49);
          uVar12 = local_594;
          iVar46 = _local_59c;
          uVar11 = local_5b2;
          uVar8 = uStack_5ba;
          uVar10 = local_5c0;
          uVar39 = uStack_600;
          uVar13 = uStack_600._4_4_;
          cVar5 = local_5c0._1_1_;
          uVar15 = uStack_5ba._2_1_;
          cVar14 = uStack_5ba._3_1_;
          uVar16 = uStack_5ba._4_4_;
          uVar17 = local_5b2._2_6_;
          uVar20 = uStack_598;
          uVar18 = local_594._4_4_;
        }
        local_594._4_4_ = uVar18;
        uStack_598 = uVar20;
        local_5b2._2_6_ = uVar17;
        uStack_5ba._4_4_ = uVar16;
        uStack_5ba._3_1_ = cVar14;
        uStack_5ba._2_1_ = uVar15;
        local_5c0._1_1_ = cVar5;
        uStack_600._4_4_ = uVar13;
        local_594 = uVar12;
        _local_59c = iVar46;
        local_5b2 = uVar11;
        uStack_5ba = uVar8;
        local_5c0 = uVar10;
        uStack_600 = uVar39;
        uVar18 = local_594._4_4_;
        uVar20 = uStack_598;
        uVar17 = local_5b2._2_6_;
        uVar16 = uStack_5ba._4_4_;
        cVar14 = uStack_5ba._3_1_;
        uVar15 = uStack_5ba._2_1_;
        cVar5 = local_5c0._1_1_;
        uVar13 = uStack_600._4_4_;
        uVar39 = uStack_600;
        uStack_600._4_4_ = uVar13;
        uVar10 = local_5c0;
        local_5c0._1_1_ = cVar5;
        uVar8 = uStack_5ba;
        uStack_5ba._2_1_ = uVar15;
        uStack_5ba._3_1_ = cVar14;
        uStack_5ba._4_4_ = uVar16;
        uVar11 = local_5b2;
        local_5b2._2_6_ = uVar17;
        iVar46 = _local_59c;
        uStack_598 = uVar20;
        uVar12 = local_594;
        local_594._4_4_ = uVar18;
        FUN_710392eb40(uVar23);
        uVar12 = local_594;
        iVar46 = _local_59c;
        uVar11 = local_5b2;
        uVar8 = uStack_5ba;
        uVar10 = local_5c0;
        uVar39 = uStack_600;
        uVar13 = uStack_600._4_4_;
        cVar5 = local_5c0._1_1_;
        uVar15 = uStack_5ba._2_1_;
        cVar14 = uStack_5ba._3_1_;
        uVar16 = uStack_5ba._4_4_;
        uVar17 = local_5b2._2_6_;
        uVar20 = uStack_598;
        uVar18 = local_594._4_4_;
      }
    }
  }
  else if (((uint)DAT_7105306478 == 0x2030200) || ((uint)DAT_7105306478 == 0x2030100))
  goto LAB_7101857f7c;
  local_594._4_4_ = uVar18;
  uStack_598 = uVar20;
  local_5b2._2_6_ = uVar17;
  uStack_5ba._4_4_ = uVar16;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._2_1_ = uVar15;
  local_5c0._1_1_ = cVar5;
  uStack_600._4_4_ = uVar13;
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  uVar39 = uStack_600;
  uStack_600._4_4_ = uVar13;
  uVar10 = local_5c0;
  local_5c0._1_1_ = cVar5;
  uVar8 = uStack_5ba;
  uStack_5ba._2_1_ = uVar15;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._4_4_ = uVar16;
  uVar11 = local_5b2;
  local_5b2._2_6_ = uVar17;
  iVar46 = _local_59c;
  uStack_598 = uVar20;
  uVar12 = local_594;
  local_594._4_4_ = uVar18;
  FUN_7103771d60(&local_580,*plVar2,(long ****)0x2,ppppbVar36,pppplVar37,param_6,param_7,param_8);
  puVar56 = local_578;
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  if ((int)(uint)DAT_7105306478 < 0x2030200) {
    if ((((uint)DAT_7105306478 == 0x2010000) || ((uint)DAT_7105306478 == 0x2020000)) ||
       ((uint)DAT_7105306478 == 0x2030100)) {
      bVar19 = (char)DAT_7105305558 != '\0';
      goto LAB_7101858e38;
    }
LAB_7101858df8:
    bVar19 = false;
  }
  else {
    bVar19 = true;
    if ((int)(uint)DAT_7105306478 < 0x4020200) {
      if ((uint)DAT_7105306478 == 0x2030200) {
        bVar19 = false;
        if (((char)DAT_710530559c == '\0' && DAT_71053055a4._1_1_ == '\0') &&
           (DAT_710530559c._1_1_ == '\x01')) {
          bVar19 = DAT_71053055a4._7_1_ == '\0';
        }
      }
      else {
        uVar20 = 0x100;
LAB_7101858dec:
        if ((uint)DAT_7105306478 != (uVar20 | 0x4020000)) goto LAB_7101858df8;
      }
    }
    else if ((uint)DAT_7105306478 != 0x4020200) {
      uVar20 = 0x300;
      goto LAB_7101858dec;
    }
  }
LAB_7101858e38:
  plVar54 = (long *)*local_578;
  if (plVar54 != (long *)0x0) {
    uVar13 = uStack_600._4_4_;
    uStack_600 = uVar39;
    cVar5 = local_5c0._1_1_;
    local_5c0 = uVar10;
    uVar16 = uStack_5ba._4_4_;
    uVar15 = uStack_5ba._2_1_;
    cVar14 = uStack_5ba._3_1_;
    uStack_5ba = uVar8;
    uVar17 = local_5b2._2_6_;
    local_5b2 = uVar11;
    uVar20 = uStack_598;
    _local_59c = iVar46;
    uVar18 = local_594._4_4_;
    local_594 = uVar12;
    uVar39 = uStack_600;
    uStack_600._4_4_ = uVar13;
    uVar10 = local_5c0;
    local_5c0._1_1_ = cVar5;
    uVar8 = uStack_5ba;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    uVar11 = local_5b2;
    local_5b2._2_6_ = uVar17;
    iVar46 = _local_59c;
    uStack_598 = uVar20;
    uVar12 = local_594;
    local_594._4_4_ = uVar18;
    (**(code **)(*plVar54 + 0x208))(plVar54,bVar19);
    uVar12 = local_594;
    iVar46 = _local_59c;
    uVar11 = local_5b2;
    uVar8 = uStack_5ba;
    uVar10 = local_5c0;
    uVar39 = uStack_600;
    uVar13 = uStack_600._4_4_;
    uStack_600 = uVar39;
    cVar5 = local_5c0._1_1_;
    local_5c0 = uVar10;
    uVar16 = uStack_5ba._4_4_;
    uVar15 = uStack_5ba._2_1_;
    cVar14 = uStack_5ba._3_1_;
    uStack_5ba = uVar8;
    uVar17 = local_5b2._2_6_;
    local_5b2 = uVar11;
    uVar20 = uStack_598;
    _local_59c = iVar46;
    uVar18 = local_594._4_4_;
    local_594 = uVar12;
    uVar39 = uStack_600;
    uStack_600._4_4_ = uVar13;
    uVar10 = local_5c0;
    local_5c0._1_1_ = cVar5;
    uVar8 = uStack_5ba;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    uVar11 = local_5b2;
    local_5b2._2_6_ = uVar17;
    iVar46 = _local_59c;
    uStack_598 = uVar20;
    uVar12 = local_594;
    local_594._4_4_ = uVar18;
    uVar23 = (**(code **)(*plVar54 + 0x200))(plVar54);
    uVar12 = local_594;
    iVar46 = _local_59c;
    uVar11 = local_5b2;
    uVar8 = uStack_5ba;
    uVar10 = local_5c0;
    uVar39 = uStack_600;
    if ((uVar23 & 1) == 0) {
      uVar20 = 1;
    }
    else {
      uVar13 = uStack_600._4_4_;
      uStack_600 = uVar39;
      cVar5 = local_5c0._1_1_;
      local_5c0 = uVar10;
      uVar16 = uStack_5ba._4_4_;
      uVar15 = uStack_5ba._2_1_;
      cVar14 = uStack_5ba._3_1_;
      uStack_5ba = uVar8;
      uVar17 = local_5b2._2_6_;
      local_5b2 = uVar11;
      uVar20 = uStack_598;
      _local_59c = iVar46;
      uVar18 = local_594._4_4_;
      local_594 = uVar12;
      uVar39 = uStack_600;
      uStack_600._4_4_ = uVar13;
      uVar10 = local_5c0;
      local_5c0._1_1_ = cVar5;
      uVar8 = uStack_5ba;
      uStack_5ba._2_1_ = uVar15;
      uStack_5ba._3_1_ = cVar14;
      uStack_5ba._4_4_ = uVar16;
      uVar11 = local_5b2;
      local_5b2._2_6_ = uVar17;
      iVar46 = _local_59c;
      uStack_598 = uVar20;
      uVar12 = local_594;
      local_594._4_4_ = uVar18;
      uVar20 = (**(code **)(*plVar54 + 0x210))(plVar54);
      uVar12 = local_594;
      iVar46 = _local_59c;
      uVar11 = local_5b2;
      uVar8 = uStack_5ba;
      uVar10 = local_5c0;
      uVar39 = uStack_600;
      uVar20 = uVar20 ^ 1;
    }
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar18 = local_594._4_4_;
    uVar52 = uStack_598;
    uVar17 = local_5b2._2_6_;
    uVar16 = uStack_5ba._4_4_;
    cVar14 = uStack_5ba._3_1_;
    uVar15 = uStack_5ba._2_1_;
    cVar5 = local_5c0._1_1_;
    uVar13 = uStack_600._4_4_;
    uVar39 = uStack_600;
    uStack_600._4_4_ = uVar13;
    uVar10 = local_5c0;
    local_5c0._1_1_ = cVar5;
    uVar8 = uStack_5ba;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    uVar11 = local_5b2;
    local_5b2._2_6_ = uVar17;
    iVar46 = _local_59c;
    uStack_598 = uVar52;
    uVar12 = local_594;
    local_594._4_4_ = uVar18;
    (**(code **)(*plVar54 + 0x388))(plVar54,uVar20 & 1,0);
    uVar12 = local_594;
    iVar46 = _local_59c;
    uVar11 = local_5b2;
    uVar8 = uStack_5ba;
    uVar10 = local_5c0;
    uVar39 = uStack_600;
  }
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  local_580 = &PTR_FUN_710523d9c8;
  local_578 = (undefined8 *)0x0;
  uVar39 = uStack_5ba;
  uVar8 = local_5b2;
  iVar46 = _local_59c;
  uVar11 = local_594;
  if (puVar56 != (undefined8 *)0x0) {
    uVar39 = uStack_600;
    uStack_600._4_4_ = uVar13;
    uVar10 = local_5c0;
    local_5c0._1_1_ = cVar5;
    uVar8 = uStack_5ba;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    uVar11 = local_5b2;
    local_5b2._2_6_ = uVar17;
    uStack_598 = uVar20;
    uVar12 = local_594;
    local_594._4_4_ = uVar18;
    FUN_710392eb40((ulong)puVar56);
    uVar11 = local_594;
    iVar46 = _local_59c;
    uVar8 = local_5b2;
    uVar15 = uStack_5ba._2_1_;
    uVar39 = uStack_5ba;
    cVar5 = local_5c0._1_1_;
    uVar13 = uStack_600._4_4_;
    cVar14 = uStack_5ba._3_1_;
    uVar16 = uStack_5ba._4_4_;
    uVar17 = local_5b2._2_6_;
    uVar20 = uStack_598;
    uVar18 = local_594._4_4_;
  }
  local_594._4_4_ = uVar18;
  uStack_598 = uVar20;
  local_5b2._2_6_ = uVar17;
  uStack_5ba._4_4_ = uVar16;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._2_1_ = uVar15;
  local_5c0._1_1_ = cVar5;
  uStack_600._4_4_ = uVar13;
  local_594 = uVar11;
  _local_59c = iVar46;
  local_5b2 = uVar8;
  uStack_5ba = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  pppplVar35 = (long ****)(ulong)DAT_7105306478._4_1_;
  uVar39 = uStack_600;
  uStack_600._4_4_ = uVar13;
  uVar10 = local_5c0;
  local_5c0._1_1_ = cVar5;
  uVar8 = uStack_5ba;
  uStack_5ba._2_1_ = uVar15;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._4_4_ = uVar16;
  uVar11 = local_5b2;
  local_5b2._2_6_ = uVar17;
  iVar46 = _local_59c;
  uStack_598 = uVar20;
  uVar12 = local_594;
  local_594._4_4_ = uVar18;
  FUN_7101bddb60(lVar50,puVar29,(ulong)pppplVar35,ppppbVar36,pppplVar37,param_6,param_7,param_8);
  uVar12 = local_594;
  iVar46 = _local_59c;
  uVar11 = local_5b2;
  uVar8 = uStack_5ba;
  uVar10 = local_5c0;
  uVar39 = uStack_600;
  uVar32 = extraout_x1_06;
  if ((int)(uint)DAT_7105306478 < 0x3010000) {
    if ((int)(uint)DAT_7105306478 < 0x2030100) {
      if (((uint)DAT_7105306478 == 0x2010000) || ((uint)DAT_7105306478 == 0x2020000)) {
LAB_7101858f64:
        lVar27 = plVar26[2];
        pcVar40 = "ly01_melee";
        goto LAB_7101858fbc;
      }
    }
    else if (((uint)DAT_7105306478 == 0x2030100) || ((uint)DAT_7105306478 == 0x2030200))
    goto LAB_7101858f64;
  }
  else {
    if ((int)(uint)DAT_7105306478 < 0x4020200) {
      if ((uint)DAT_7105306478 != 0x3010000) {
        uVar20 = 0x100;
LAB_7101858f88:
        if ((uint)DAT_7105306478 != (uVar20 | 0x4020000)) goto LAB_7101858fc4;
        goto LAB_7101858f94;
      }
    }
    else {
      if ((uint)DAT_7105306478 != 0x4020200) {
        uVar20 = 0x300;
        goto LAB_7101858f88;
      }
LAB_7101858f94:
      uVar13 = uStack_600._4_4_;
      uStack_600 = uVar39;
      cVar5 = local_5c0._1_1_;
      local_5c0 = uVar10;
      uVar16 = uStack_5ba._4_4_;
      uVar15 = uStack_5ba._2_1_;
      cVar14 = uStack_5ba._3_1_;
      uStack_5ba = uVar8;
      uVar17 = local_5b2._2_6_;
      local_5b2 = uVar11;
      uVar20 = uStack_598;
      _local_59c = iVar46;
      uVar18 = local_594._4_4_;
      local_594 = uVar12;
      uVar39 = uStack_600;
      uStack_600._4_4_ = uVar13;
      uVar10 = local_5c0;
      local_5c0._1_1_ = cVar5;
      uVar8 = uStack_5ba;
      uStack_5ba._2_1_ = uVar15;
      uStack_5ba._3_1_ = cVar14;
      uStack_5ba._4_4_ = uVar16;
      uVar11 = local_5b2;
      local_5b2._2_6_ = uVar17;
      iVar46 = _local_59c;
      uStack_598 = uVar20;
      uVar12 = local_594;
      local_594._4_4_ = uVar18;
      FUN_7103778300(0x3f800000,plVar26[2],0x710435b628);
      uVar18 = local_594._4_4_;
      uVar20 = uStack_598;
      uVar17 = local_5b2._2_6_;
      uVar16 = uStack_5ba._4_4_;
      cVar14 = uStack_5ba._3_1_;
      uVar15 = uStack_5ba._2_1_;
      cVar5 = local_5c0._1_1_;
      uVar13 = uStack_600._4_4_;
      uVar39 = uStack_600;
      uVar10 = local_5c0;
      uVar8 = uStack_5ba;
      uVar11 = local_5b2;
      iVar46 = _local_59c;
      uVar12 = local_594;
      uStack_600._4_4_ = uVar13;
      local_5c0._1_1_ = cVar5;
      uStack_5ba._2_1_ = uVar15;
      uStack_5ba._3_1_ = cVar14;
      uStack_5ba._4_4_ = uVar16;
      local_5b2._2_6_ = uVar17;
      uStack_598 = uVar20;
      local_594._4_4_ = uVar18;
    }
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar18 = local_594._4_4_;
    uVar20 = uStack_598;
    uVar17 = local_5b2._2_6_;
    uVar16 = uStack_5ba._4_4_;
    cVar14 = uStack_5ba._3_1_;
    uVar15 = uStack_5ba._2_1_;
    cVar5 = local_5c0._1_1_;
    uVar13 = uStack_600._4_4_;
    lVar27 = plVar26[2];
    pcVar40 = "ly02_standard";
    uVar39 = uStack_600;
    uVar10 = local_5c0;
    uVar8 = uStack_5ba;
    uVar11 = local_5b2;
    iVar46 = _local_59c;
    uVar12 = local_594;
    uStack_600._4_4_ = uVar13;
    local_5c0._1_1_ = cVar5;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    local_5b2._2_6_ = uVar17;
    uStack_598 = uVar20;
    local_594._4_4_ = uVar18;
LAB_7101858fbc:
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar18 = local_594._4_4_;
    uVar20 = uStack_598;
    uVar17 = local_5b2._2_6_;
    uVar16 = uStack_5ba._4_4_;
    cVar14 = uStack_5ba._3_1_;
    uVar15 = uStack_5ba._2_1_;
    cVar5 = local_5c0._1_1_;
    uVar13 = uStack_600._4_4_;
    uVar39 = uStack_600;
    uStack_600._4_4_ = uVar13;
    uVar10 = local_5c0;
    local_5c0._1_1_ = cVar5;
    uVar8 = uStack_5ba;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    uVar11 = local_5b2;
    local_5b2._2_6_ = uVar17;
    iVar46 = _local_59c;
    uStack_598 = uVar20;
    uVar12 = local_594;
    local_594._4_4_ = uVar18;
    FUN_7103778300(0x3f800000,lVar27,(long)pcVar40);
    uVar12 = local_594;
    iVar46 = _local_59c;
    uVar11 = local_5b2;
    uVar8 = uStack_5ba;
    uVar10 = local_5c0;
    uVar39 = uStack_600;
    uVar32 = extraout_x1_07;
  }
LAB_7101858fc4:
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  if ((*(long *)(plVar26[2] + 8) != 0) &&
     (lVar27 = *(long *)(*(long *)(plVar26[2] + 8) + 0x18), lVar27 != 0)) {
    *(byte *)(lVar27 + 0x58) = *(byte *)(lVar27 + 0x58) & 0xfe;
  }
  puVar28[0x11] = FUN_7101bdbe00;
  puVar28[0x12] = 0;
  puVar28[0x13] = FUN_7101bdbe10;
  puVar28[0x14] = 0;
  puVar28[0x15] = FUN_7101bdc040;
  puVar28[0x16] = 0;
  puVar28[0x17] = FUN_7101bdd1d0;
  puVar28[0x18] = 0;
  puVar28[0x19] = FUN_7101bdd3c0;
  puVar28[0x1a] = 0;
  uVar39 = uStack_600;
  uVar10 = local_5c0;
  uVar8 = uStack_5ba;
  uVar11 = local_5b2;
  iVar46 = _local_59c;
  uVar12 = local_594;
  if (*(uint *)((long)puVar28 + 0x124) < 0x13) {
    *(undefined4 *)((long)puVar28 + (long)(int)*(uint *)((long)puVar28 + 0x124) * 4 + 0xd8) = 0;
    if (local_af0 != (ulong *)0x0) {
      uStack_600._4_4_ = uVar13;
      local_5c0._1_1_ = cVar5;
      uStack_5ba._2_1_ = uVar15;
      uStack_5ba._3_1_ = cVar14;
      uStack_5ba._4_4_ = uVar16;
      local_5b2._2_6_ = uVar17;
      uStack_598 = uVar20;
      local_594._4_4_ = uVar18;
      FUN_710392eb40((ulong)local_af0);
      uVar12 = local_594;
      iVar46 = _local_59c;
      uVar11 = local_5b2;
      uVar8 = uStack_5ba;
      uVar10 = local_5c0;
      uVar39 = uStack_600;
      uVar32 = extraout_x1_08;
      uVar13 = uStack_600._4_4_;
      cVar5 = local_5c0._1_1_;
      uVar15 = uStack_5ba._2_1_;
      cVar14 = uStack_5ba._3_1_;
      uVar16 = uStack_5ba._4_4_;
      uVar17 = local_5b2._2_6_;
      uVar20 = uStack_598;
      uVar18 = local_594._4_4_;
    }
    local_594._4_4_ = uVar18;
    uStack_598 = uVar20;
    local_5b2._2_6_ = uVar17;
    uStack_5ba._4_4_ = uVar16;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._2_1_ = uVar15;
    local_5c0._1_1_ = cVar5;
    uStack_600._4_4_ = uVar13;
    local_594 = uVar12;
    _local_59c = iVar46;
    local_5b2 = uVar11;
    uStack_5ba = uVar8;
    local_5c0 = uVar10;
    uStack_600 = uVar39;
    uVar4 = local_594._4_4_;
    uVar20 = uStack_598;
    uVar17 = local_5b2._2_6_;
    uVar18 = uStack_5ba._4_4_;
    cVar14 = uStack_5ba._3_1_;
    uVar15 = uStack_5ba._2_1_;
    cVar5 = local_5c0._1_1_;
    uVar16 = uStack_600._4_4_;
    puVar24[0x10] = puVar28;
    puVar24[2] = &DAT_7105333600;
    uVar13 = DAT_7105333664;
    *(undefined4 *)(puVar24 + 0xd) = DAT_7105333660;
    *(undefined4 *)((long)puVar24 + 0x6c) = uVar13;
    do {
      uVar52 = DAT_7105333650;
      cVar7 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
      if (bVar19) {
        DAT_7105333650 = 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0' || (uVar52 & 1) != 0);
    puVar24[9] = DAT_7105333648;
    DAT_7105333650 = 0;
    DAT_7105333648 = puVar24;
    uVar39 = uStack_600;
    uStack_600._4_4_ = uVar16;
    uVar10 = local_5c0;
    local_5c0._1_1_ = cVar5;
    uVar8 = uStack_5ba;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar18;
    uVar11 = local_5b2;
    local_5b2._2_6_ = uVar17;
    iVar46 = _local_59c;
    uStack_598 = uVar20;
    uVar12 = local_594;
    local_594._4_4_ = uVar4;
    FUN_71032caea0((long)puVar24,uVar32,pppplVar35,ppppbVar36,pppplVar37,param_6,param_7,param_8);
    uVar12 = local_594;
    iVar46 = _local_59c;
    uVar11 = local_5b2;
    uVar8 = uStack_5ba;
    uVar10 = local_5c0;
    uVar39 = uStack_600;
    lVar27 = *(long *)(lVar22 + 0x158);
    *(undefined8 **)(lVar22 + 0x158) = puVar24;
    if (lVar27 == 0) {
      return;
    }
    uVar13 = uStack_600._4_4_;
    uStack_600 = uVar39;
    cVar5 = local_5c0._1_1_;
    local_5c0 = uVar10;
    uVar16 = uStack_5ba._4_4_;
    uVar15 = uStack_5ba._2_1_;
    cVar14 = uStack_5ba._3_1_;
    uStack_5ba = uVar8;
    uVar17 = local_5b2._2_6_;
    local_5b2 = uVar11;
    uVar20 = uStack_598;
    _local_59c = iVar46;
    uVar18 = local_594._4_4_;
    local_594 = uVar12;
    uVar39 = uStack_600;
    uStack_600._4_4_ = uVar13;
    uVar10 = local_5c0;
    local_5c0._1_1_ = cVar5;
    uVar8 = uStack_5ba;
    uStack_5ba._2_1_ = uVar15;
    uStack_5ba._3_1_ = cVar14;
    uStack_5ba._4_4_ = uVar16;
    uVar11 = local_5b2;
    local_5b2._2_6_ = uVar17;
    iVar46 = _local_59c;
    uStack_598 = uVar20;
    uVar12 = local_594;
    local_594._4_4_ = uVar18;
    FUN_71032cad20(lVar27);
    return;
  }
LAB_7101859190:
  local_594._4_4_ = uVar18;
  uStack_598 = uVar20;
  local_5b2._2_6_ = uVar17;
  uStack_5ba._4_4_ = uVar16;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._2_1_ = uVar15;
  local_5c0._1_1_ = cVar5;
  uStack_600._4_4_ = uVar13;
  local_594 = uVar12;
  _local_59c = iVar46;
  local_5b2 = uVar11;
  uStack_5ba = uVar8;
  local_5c0 = uVar10;
  uStack_600 = uVar39;
  uVar18 = local_594._4_4_;
  uVar20 = uStack_598;
  uVar17 = local_5b2._2_6_;
  uVar16 = uStack_5ba._4_4_;
  cVar14 = uStack_5ba._3_1_;
  uVar15 = uStack_5ba._2_1_;
  cVar5 = local_5c0._1_1_;
  uVar13 = uStack_600._4_4_;
  uVar39 = uStack_600;
  uStack_600._4_4_ = uVar13;
  uVar10 = local_5c0;
  local_5c0._1_1_ = cVar5;
  uVar8 = uStack_5ba;
  uStack_5ba._2_1_ = uVar15;
  uStack_5ba._3_1_ = cVar14;
  uStack_5ba._4_4_ = uVar16;
  uVar11 = local_5b2;
  local_5b2._2_6_ = uVar17;
  iVar46 = _local_59c;
  uStack_598 = uVar20;
  uVar12 = local_594;
  local_594._4_4_ = uVar18;
                    /* WARNING: Subroutine does not return */
  abort();
}

