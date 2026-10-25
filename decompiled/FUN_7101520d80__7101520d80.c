// addr:      7101520d80
// offset:    0x1520d80
// name:      FUN_7101520d80
// mangled:   
// signature: undefined __cdecl FUN_7101520d80(undefined8 param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)


void FUN_7101520d80(undefined8 param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  long *plVar1;
  short *psVar2;
  uint uVar3;
  short sVar4;
  char cVar5;
  long ********__src;
  int iVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint *puVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  ushort *puVar18;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined *puVar19;
  long ****pppplVar20;
  undefined **ppuVar21;
  byte ****ppppbVar22;
  uint uVar23;
  int *piVar24;
  long ********pppppppplVar25;
  uint uVar26;
  uint uVar27;
  char *pcVar28;
  long lVar29;
  ushort uVar30;
  int iVar31;
  char *pcVar32;
  ulong uVar33;
  long lVar34;
  long ********pppppppplVar35;
  long lVar36;
  ushort *puVar37;
  long *plVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  long *********ppppppppplVar42;
  long *plVar43;
  long *********ppppppppplVar44;
  long lVar45;
  float fVar46;
  undefined4 uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  long ********local_190;
  long *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long ********local_90;
  long ********local_88;
  long ********local_80;
  long ********local_78;
  uint local_70 [4];
  
  lVar45 = *(long *)(DAT_71052c3800 + 8);
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_90 = (long ********)((ulong)local_90 & 0xffffffff00000000);
      local_190 = (long ********)&DAT_00000088;
      param_3 = &local_190;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar10 != (undefined8 *)0x0)) goto LAB_7101520e0c;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101520e0c:
  *puVar10 = &PTR_FUN_710506d6d8;
  puVar10[1] = 0;
  puVar10[0xc] = 0;
  puVar10[0xd] = 0x1ffffffff;
  puVar10[2] = 0;
  puVar10[3] = 0;
  *(undefined1 *)(puVar10 + 0xb) = 0;
  puVar10[0xf] = (long *)(lVar45 + 0x118);
  *(undefined1 *)(puVar10 + 0xe) = 1;
  puVar10[9] = 0;
  puVar10[10] = 0;
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0x48,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_90 = (long ********)((ulong)local_90 & 0xffffffff00000000);
      local_190 = (long ********)&DAT_00000048;
      param_3 = &local_190;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
      if (((uVar11 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0x48,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar12 != (undefined8 *)0x0)) goto LAB_7101520e94;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_7101520e94:
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar17 = extraout_x1;
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_90 = (long ********)((ulong)local_90 & 0xffffffff00000000);
      local_190 = (long ********)&DAT_00000008;
      param_3 = &local_190;
      auVar51 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
      uVar17 = auVar51._8_8_;
      if (((auVar51._0_8_ & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8
                                  ), uVar17 = extraout_x1_00, puVar13 != (undefined8 *)0x0))
      goto LAB_7101520ef0;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101520ef0:
  FUN_7103773200(puVar13,uVar17,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined4 *)(puVar12 + 8) = 0;
  puVar12[6] = 0;
  puVar12[7] = 0;
  puVar19 = &DAT_710453f608;
  ppppbVar22 = (byte ****)0x1;
  puVar12[4] = 0;
  puVar12[5] = 0;
  puVar12[2] = 0;
  puVar12[3] = 0;
  *puVar12 = puVar13;
  puVar12[1] = 0;
  puVar10[0x10] = puVar12;
  FUN_71032cbf30(puVar12,*(long *)(lVar45 + 0x118),(ulong *)&DAT_710453f608,(byte ****)0x1,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_190,*(long *)*puVar12 + 8,(long ****)"textbox_param",puVar19,ppppbVar22,
                 param_5,param_6,param_7,param_8);
  plVar1 = local_188;
  if (((*local_188 == 0) ||
      (puVar14 = FUN_71000598d0(*local_188,"string_length_small"), puVar14 == (uint *)0x0)) ||
     (*(char *)((long)puVar14 + 10) != '\x01')) {
    uVar23 = 0;
  }
  else {
    uVar23 = (uint)(ushort)puVar14[2];
    if ((ushort)puVar14[2] != 0) {
      uVar23 = *(uint *)((long)puVar14 + (ulong)puVar14[1]);
    }
  }
  *(uint *)(puVar12 + 4) = uVar23;
  if (((*local_188 == 0) ||
      (puVar14 = FUN_71000598d0(*local_188,"string_line_small"), puVar14 == (uint *)0x0)) ||
     (*(char *)((long)puVar14 + 10) != '\x01')) {
    uVar23 = 0;
  }
  else {
    uVar23 = (uint)(ushort)puVar14[2];
    if ((ushort)puVar14[2] != 0) {
      uVar23 = *(uint *)((long)puVar14 + (ulong)puVar14[1]);
    }
  }
  *(uint *)((long)puVar12 + 0x24) = uVar23;
  if (((*local_188 == 0) ||
      (puVar14 = FUN_71000598d0(*local_188,"string_length_mid"), puVar14 == (uint *)0x0)) ||
     (*(char *)((long)puVar14 + 10) != '\x01')) {
    uVar23 = 0;
  }
  else {
    uVar23 = (uint)(ushort)puVar14[2];
    if ((ushort)puVar14[2] != 0) {
      uVar23 = *(uint *)((long)puVar14 + (ulong)puVar14[1]);
    }
  }
  *(uint *)(puVar12 + 5) = uVar23;
  if (((*local_188 == 0) ||
      (puVar14 = FUN_71000598d0(*local_188,"string_line_mid"), puVar14 == (uint *)0x0)) ||
     (*(char *)((long)puVar14 + 10) != '\x01')) {
    uVar23 = 0;
  }
  else {
    uVar23 = (uint)(ushort)puVar14[2];
    if ((ushort)puVar14[2] != 0) {
      uVar23 = *(uint *)((long)puVar14 + (ulong)puVar14[1]);
    }
  }
  *(uint *)((long)puVar12 + 0x2c) = uVar23;
  if (((*local_188 == 0) ||
      (puVar14 = FUN_71000598d0(*local_188,"string_length_one_line_long"), puVar14 == (uint *)0x0))
     || (*(char *)((long)puVar14 + 10) != '\x01')) {
    uVar23 = 0;
  }
  else {
    uVar23 = (uint)(ushort)puVar14[2];
    if ((ushort)puVar14[2] != 0) {
      uVar23 = *(uint *)((long)puVar14 + (ulong)puVar14[1]);
    }
  }
  *(uint *)(puVar12 + 6) = uVar23;
  if (((*local_188 == 0) ||
      (puVar14 = FUN_71000598d0(*local_188,"string_line_one_line_long"), puVar14 == (uint *)0x0)) ||
     (*(char *)((long)puVar14 + 10) != '\x01')) {
    uVar23 = 0;
  }
  else {
    uVar23 = (uint)(ushort)puVar14[2];
    if ((ushort)puVar14[2] != 0) {
      uVar23 = *(uint *)((long)puVar14 + (ulong)puVar14[1]);
    }
  }
  *(uint *)((long)puVar12 + 0x34) = uVar23;
  if (((*local_188 == 0) ||
      (puVar14 = FUN_71000598d0(*local_188,"string_length_long"), puVar14 == (uint *)0x0)) ||
     (*(char *)((long)puVar14 + 10) != '\x01')) {
    uVar23 = 0;
  }
  else {
    uVar23 = (uint)(ushort)puVar14[2];
    if ((ushort)puVar14[2] != 0) {
      uVar23 = *(uint *)((long)puVar14 + (ulong)puVar14[1]);
    }
  }
  *(uint *)(puVar12 + 7) = uVar23;
  if (((*local_188 == 0) ||
      (puVar14 = FUN_71000598d0(*local_188,"string_line_long"), puVar14 == (uint *)0x0)) ||
     (*(char *)((long)puVar14 + 10) != '\x01')) {
    uVar23 = 0;
  }
  else {
    uVar23 = (uint)(ushort)puVar14[2];
    if ((ushort)puVar14[2] != 0) {
      uVar23 = *(uint *)((long)puVar14 + (ulong)puVar14[1]);
    }
  }
  *(uint *)((long)puVar12 + 0x3c) = uVar23;
  FUN_710151dae0(puVar12,(long ****)"grp_small",(long ****)0x0,ppppbVar22,param_5,param_6,param_7,
                 param_8);
  FUN_710151dae0(puVar12,(long ****)"grp_mid",(long ****)0x1,ppppbVar22,param_5,param_6,param_7,
                 param_8);
  FUN_710151dae0(puVar12,(long ****)"grp_one_line_long",(long ****)0x2,ppppbVar22,param_5,param_6,
                 param_7,param_8);
  pppplVar20 = (long ****)0x3;
  FUN_710151dae0(puVar12,(long ****)"grp_long",(long ****)0x3,ppppbVar22,param_5,param_6,param_7,
                 param_8);
  local_190 = (long ********)&PTR_FUN_710523d9a8;
  local_188 = (long *)0x0;
  FUN_710392eb40((ulong)plVar1);
  puVar10[2] = &DAT_7105333600;
  uVar47 = DAT_7105333664;
  *(undefined4 *)(puVar10 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar10 + 0x6c) = uVar47;
  do {
    uVar23 = DAT_7105333650;
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar7) {
      DAT_7105333650 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0' || (uVar23 & 1) != 0);
  puVar10[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar10;
  FUN_71032caea0((long)puVar10,extraout_x1_01,pppplVar20,ppppbVar22,param_5,param_6,param_7,param_8)
  ;
  lVar15 = *(long *)(lVar45 + 0x120);
  *(undefined8 **)(lVar45 + 0x120) = puVar10;
  if (lVar15 != 0) {
    FUN_71032cad20(lVar15);
  }
  ppppppppplVar42 = *(long **********)(lVar45 + 0xf8);
  FUN_7103563a20(*lib::Singleton<lib::EffectManager>::instance_,0x680,ppppppppplVar42,ppppbVar22,
                 param_5,param_6,param_7,param_8);
  uVar11 = (ulong)DAT_71052c3810;
  local_190 = (long ********)(DAT_71052c3818 & 0xffffffffff);
  ppppppppplVar44 = ppppppppplVar42 + 1;
  lVar15 = *(long *)(*(long *)(DAT_7105332f20 + 0x78) + 8);
  puVar10 = bsearch(&local_190,*(void **)(lVar15 + 0x20),(ulong)*(uint *)(*(long *)(lVar15 + 8) + 8)
                    ,8,FUN_7103542240);
  uVar23 = 0xffffff;
  if (puVar10 != (undefined8 *)0x0) {
    uVar27 = (uint)((ulong)*puVar10 >> 0x20);
    uVar26 = uVar27 >> 8;
    if ((uVar26 != 0xffffff) &&
       (uVar3 = *(uint *)(*(long *)(lVar15 + 8) + 4), uVar23 = uVar27 >> 8,
       uVar3 < uVar26 || uVar3 == uVar23)) {
      uVar23 = 0xffffff;
    }
  }
  local_90._0_4_ = uVar23;
  FUN_71017dde90((long *)ppppppppplVar44,uVar11,(uint *)&local_90,(byte ****)0x1,(long ****)0x0,
                 param_6,(ulong)param_7,(ulong)param_8);
  uVar11 = (ulong)DAT_71052c3820;
  local_190 = (long ********)(DAT_71052c3828 & 0xffffffffff);
  lVar15 = *(long *)(*(long *)(DAT_7105332f20 + 0x78) + 8);
  puVar10 = bsearch(&local_190,*(void **)(lVar15 + 0x20),(ulong)*(uint *)(*(long *)(lVar15 + 8) + 8)
                    ,8,FUN_7103542240);
  local_90._0_4_ = 0xffffff;
  if (puVar10 != (undefined8 *)0x0) {
    uVar23 = (uint)((ulong)*puVar10 >> 0x20);
    uVar27 = uVar23 >> 8;
    if ((uVar27 != 0xffffff) &&
       (uVar26 = *(uint *)(*(long *)(lVar15 + 8) + 4), local_90._0_4_ = uVar23 >> 8,
       uVar26 < uVar27 || uVar26 == (uint)local_90)) {
      local_90._0_4_ = 0xffffff;
    }
  }
  FUN_71017dde90((long *)ppppppppplVar44,uVar11,(uint *)&local_90,(byte ****)0x1,(long ****)0x0,
                 param_6,(ulong)param_7,(ulong)param_8);
  uVar11 = (ulong)DAT_71052c3830;
  local_190 = (long ********)(DAT_71052c3838 & 0xffffffffff);
  lVar15 = *(long *)(*(long *)(DAT_7105332f20 + 0x78) + 8);
  puVar10 = bsearch(&local_190,*(void **)(lVar15 + 0x20),(ulong)*(uint *)(*(long *)(lVar15 + 8) + 8)
                    ,8,FUN_7103542240);
  uVar23 = 0xffffff;
  if (puVar10 != (undefined8 *)0x0) {
    uVar27 = (uint)((ulong)*puVar10 >> 0x20);
    uVar26 = uVar27 >> 8;
    if ((uVar26 != 0xffffff) &&
       (uVar3 = *(uint *)(*(long *)(lVar15 + 8) + 4), uVar23 = uVar27 >> 8,
       uVar3 < uVar26 || uVar3 == uVar23)) {
      uVar23 = 0xffffff;
    }
  }
  ppuVar21 = (undefined **)&local_90;
  ppppbVar22 = (byte ****)0x1;
  pppplVar20 = (long ****)0x0;
  local_90 = (long ********)CONCAT44(local_90._4_4_,uVar23);
  FUN_71017dde90((long *)ppppppppplVar44,uVar11,(uint *)ppuVar21,(byte ****)0x1,(long ****)0x0,
                 param_6,(ulong)param_7,(ulong)param_8);
  uVar11 = FUN_710363dfa0(DAT_7105338f68,(uint *)(ppppppppplVar42 + 4),(long *********)ppuVar21,
                          ppppbVar22,pppplVar20,param_6,(ulong)param_7,(ulong)param_8);
  *(int *)((long)ppppppppplVar42 + 0x2c) = (int)uVar11;
  uVar11 = FUN_710363dfa0(DAT_7105338f68,(uint *)((long)ppppppppplVar42 + 0x24),
                          (long *********)ppuVar21,ppppbVar22,pppplVar20,param_6,(ulong)param_7,
                          (ulong)param_8);
  *(int *)(ppppppppplVar42 + 6) = (int)uVar11;
  uVar11 = FUN_710363dfa0(DAT_7105338f68,(uint *)(ppppppppplVar42 + 5),(long *********)ppuVar21,
                          ppppbVar22,pppplVar20,param_6,(ulong)param_7,(ulong)param_8);
  *(int *)((long)ppppppppplVar42 + 0x34) = (int)uVar11;
  uVar11 = FUN_710363dfa0(DAT_7105338f68,(uint *)(ppppppppplVar42 + 7),(long *********)ppuVar21,
                          ppppbVar22,pppplVar20,param_6,(ulong)param_7,(ulong)param_8);
  *(int *)((long)ppppppppplVar42 + 0x3c) = (int)uVar11;
  plVar1 = (long *)(lVar45 + 0x100);
  FUN_7101529520(*(uint **)(lVar45 + 0x100),extraout_x1_02,(long *********)ppuVar21,ppppbVar22,
                 pppplVar20,param_6,(ulong)param_7,(long)param_8);
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0xb0,(long ****)ppuVar21,ppppbVar22,pppplVar20,param_6,param_7,
                           param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_90 = (long ********)((ulong)local_90 & 0xffffffff00000000);
      local_190 = (long ********)&DAT_000000b0;
      ppuVar21 = (undefined **)&local_190;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0xb0,(long ****)ppuVar21,ppppbVar22,pppplVar20,param_6,
                                   param_7,param_8), puVar10 != (undefined8 *)0x0))
      goto LAB_7101521480;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101521480:
  *puVar10 = &PTR____shared_weak_count_710506de18;
  puVar10[5] = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  piVar24 = (int *)(puVar10 + 4);
  piVar24[0] = 0;
  piVar24[1] = 0;
  puVar10[0x14] = 0;
  puVar10[0x15] = 0;
  puVar10[0x12] = 0;
  puVar10[0x13] = 0;
  puVar10[0x10] = 0;
  puVar10[0x11] = 0;
  puVar10[0xe] = 0;
  puVar10[0xf] = 0;
  puVar10[0xc] = 0;
  puVar10[0xd] = 0;
  puVar10[10] = 0;
  puVar10[0xb] = 0;
  puVar10[8] = 0;
  puVar10[9] = 0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10[0xe] = &DAT_3f8000003f800000;
  puVar10[0xf] = &DAT_3f8000003f800000;
  pcVar32 = *(char **)(*plVar1 + 0x10);
  if ((*pcVar32 == '\f') && (iVar8 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    lVar15 = *(long *)(*plVar1 + 8);
    iVar9 = 0;
    pcVar28 = "";
    do {
      iVar31 = iVar8 + iVar9;
      if (iVar31 < 0) {
        iVar31 = iVar31 + 1;
      }
      iVar31 = iVar31 >> 1;
      puVar14 = (uint *)(*(long *)(lVar15 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar31 * 8);
      uVar11 = *(ulong *)(*(long *)(lVar15 + 0x20) + (ulong)*puVar14 * 8);
      if (uVar11 == 0xfff50cc55) {
        uVar23 = puVar14[1];
        if ((int)uVar23 < 0) goto LAB_710152155c;
        pcVar28 = pcVar32 + (int)uVar23;
        break;
      }
      iVar6 = iVar31 + -1;
      if (uVar11 < 0xfff50cc56) {
        iVar9 = iVar31 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar9 <= iVar8);
  }
  else {
LAB_710152155c:
    pcVar28 = "";
  }
  switch(*pcVar28) {
  case '\x01':
  case '\x03':
    uVar23 = (uint)(byte)pcVar28[1];
    break;
  case '\x02':
    uVar23 = (uint)pcVar28[1];
    break;
  case '\x04':
    uVar23 = (uint)*(short *)(pcVar28 + 1);
    break;
  case '\x05':
    uVar23 = (uint)*(ushort *)(pcVar28 + 1);
    break;
  case '\x06':
  case '\a':
    uVar23 = *(uint *)(pcVar28 + 1);
    break;
  default:
    uVar23 = 0;
  }
  *piVar24 = uVar23 * 0x3c;
  pcVar32 = *(char **)(*plVar1 + 0x10);
  if ((*pcVar32 == '\f') && (iVar8 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    lVar15 = *(long *)(*plVar1 + 8);
    iVar9 = 0;
    pcVar28 = "";
    do {
      iVar31 = iVar8 + iVar9;
      if (iVar31 < 0) {
        iVar31 = iVar31 + 1;
      }
      iVar31 = iVar31 >> 1;
      puVar14 = (uint *)(*(long *)(lVar15 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar31 * 8);
      uVar11 = *(ulong *)(*(long *)(lVar15 + 0x20) + (ulong)*puVar14 * 8);
      if (uVar11 == 0x16bc59bfe1) {
        uVar23 = puVar14[1];
        if ((int)uVar23 < 0) goto LAB_7101521658;
        pcVar28 = pcVar32 + (int)uVar23;
        break;
      }
      iVar6 = iVar31 + -1;
      if (uVar11 < 0x16bc59bfe2) {
        iVar9 = iVar31 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar9 <= iVar8);
  }
  else {
LAB_7101521658:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar23 = *(uint *)(pcVar28 + 1);
  }
  else {
    uVar23 = 0;
  }
  puVar10[7] = 0;
  puVar10[6] = (ulong)uVar23;
  pcVar32 = *(char **)(*plVar1 + 0x10);
  if ((*pcVar32 == '\f') && (iVar8 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    lVar15 = *(long *)(*plVar1 + 8);
    iVar9 = 0;
    pcVar28 = "";
    do {
      iVar31 = iVar8 + iVar9;
      if (iVar31 < 0) {
        iVar31 = iVar31 + 1;
      }
      iVar31 = iVar31 >> 1;
      puVar14 = (uint *)(*(long *)(lVar15 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar31 * 8);
      uVar11 = *(ulong *)(*(long *)(lVar15 + 0x20) + (ulong)*puVar14 * 8);
      if (uVar11 == 0x16cb5e8f77) {
        uVar27 = puVar14[1];
        if ((int)uVar27 < 0) goto LAB_7101521720;
        pcVar28 = pcVar32 + (int)uVar27;
        break;
      }
      iVar6 = iVar31 + -1;
      if (uVar11 < 0x16cb5e8f78) {
        iVar9 = iVar31 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar9 <= iVar8);
  }
  else {
LAB_7101521720:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar47 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar47 = 0;
  }
  puVar10[7] = 0;
  puVar10[6] = CONCAT44(uVar47,uVar23);
  pcVar32 = *(char **)(*plVar1 + 0x10);
  if ((*pcVar32 == '\f') && (iVar8 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    lVar15 = *(long *)(*plVar1 + 8);
    iVar9 = 0;
    pcVar28 = "";
    do {
      iVar31 = iVar8 + iVar9;
      if (iVar31 < 0) {
        iVar31 = iVar31 + 1;
      }
      iVar31 = iVar31 >> 1;
      puVar14 = (uint *)(*(long *)(lVar15 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar31 * 8);
      uVar11 = *(ulong *)(*(long *)(lVar15 + 0x20) + (ulong)*puVar14 * 8);
      if (uVar11 == 0x19f09a47c4) {
        uVar23 = puVar14[1];
        if ((int)uVar23 < 0) goto LAB_71015217e0;
        pcVar28 = pcVar32 + (int)uVar23;
        break;
      }
      iVar6 = iVar31 + -1;
      if (uVar11 < 0x19f09a47c5) {
        iVar9 = iVar31 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar9 <= iVar8);
  }
  else {
LAB_71015217e0:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar23 = *(uint *)(pcVar28 + 1);
  }
  else {
    uVar23 = 0;
  }
  puVar10[9] = 0;
  puVar10[8] = (ulong)uVar23;
  pcVar32 = *(char **)(*plVar1 + 0x10);
  if ((*pcVar32 == '\f') && (iVar8 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    lVar15 = *(long *)(*plVar1 + 8);
    iVar9 = 0;
    pcVar28 = "";
    do {
      iVar31 = iVar8 + iVar9;
      if (iVar31 < 0) {
        iVar31 = iVar31 + 1;
      }
      iVar31 = iVar31 >> 1;
      puVar14 = (uint *)(*(long *)(lVar15 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar31 * 8);
      uVar11 = *(ulong *)(*(long *)(lVar15 + 0x20) + (ulong)*puVar14 * 8);
      if (uVar11 == 0x19879d7752) {
        uVar27 = puVar14[1];
        if ((int)uVar27 < 0) goto LAB_71015218a4;
        pcVar28 = pcVar32 + (int)uVar27;
        break;
      }
      iVar6 = iVar31 + -1;
      if (uVar11 < 0x19879d7753) {
        iVar9 = iVar31 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar9 <= iVar8);
  }
  else {
LAB_71015218a4:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar47 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar47 = 0;
  }
  puVar10[9] = 0;
  puVar10[8] = CONCAT44(uVar47,uVar23);
  pcVar32 = *(char **)(*plVar1 + 0x10);
  if ((*pcVar32 == '\f') && (iVar8 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    lVar15 = *(long *)(*plVar1 + 8);
    iVar9 = 0;
    pcVar28 = "";
    do {
      iVar31 = iVar8 + iVar9;
      if (iVar31 < 0) {
        iVar31 = iVar31 + 1;
      }
      iVar31 = iVar31 >> 1;
      puVar14 = (uint *)(*(long *)(lVar15 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar31 * 8);
      uVar11 = *(ulong *)(*(long *)(lVar15 + 0x20) + (ulong)*puVar14 * 8);
      if (uVar11 == 0x198cfb621f) {
        uVar23 = puVar14[1];
        if ((int)uVar23 < 0) goto LAB_7101521964;
        pcVar28 = pcVar32 + (int)uVar23;
        break;
      }
      iVar6 = iVar31 + -1;
      if (uVar11 < 0x198cfb6220) {
        iVar9 = iVar31 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar9 <= iVar8);
  }
  else {
LAB_7101521964:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar23 = *(uint *)(pcVar28 + 1);
  }
  else {
    uVar23 = 0;
  }
  puVar10[0xb] = 0;
  puVar10[10] = (ulong)uVar23;
  pcVar32 = *(char **)(*plVar1 + 0x10);
  if ((*pcVar32 == '\f') && (iVar8 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    lVar15 = *(long *)(*plVar1 + 8);
    iVar9 = 0;
    pcVar28 = "";
    do {
      iVar31 = iVar8 + iVar9;
      if (iVar31 < 0) {
        iVar31 = iVar31 + 1;
      }
      iVar31 = iVar31 >> 1;
      puVar14 = (uint *)(*(long *)(lVar15 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar31 * 8);
      uVar11 = *(ulong *)(*(long *)(lVar15 + 0x20) + (ulong)*puVar14 * 8);
      if (uVar11 == 0x19fbfc5289) {
        uVar27 = puVar14[1];
        if ((int)uVar27 < 0) goto LAB_7101521a24;
        pcVar28 = pcVar32 + (int)uVar27;
        break;
      }
      iVar6 = iVar31 + -1;
      if (uVar11 < 0x19fbfc528a) {
        iVar9 = iVar31 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar9 <= iVar8);
  }
  else {
LAB_7101521a24:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar47 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar47 = 0;
  }
  puVar10[0xb] = 0;
  puVar10[10] = CONCAT44(uVar47,uVar23);
  pcVar32 = *(char **)(*plVar1 + 0x10);
  if ((*pcVar32 == '\f') && (iVar8 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    lVar15 = *(long *)(*plVar1 + 8);
    iVar9 = 0;
    pcVar28 = "";
    do {
      iVar31 = iVar8 + iVar9;
      if (iVar31 < 0) {
        iVar31 = iVar31 + 1;
      }
      iVar31 = iVar31 >> 1;
      puVar14 = (uint *)(*(long *)(lVar15 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar31 * 8);
      uVar11 = *(ulong *)(*(long *)(lVar15 + 0x20) + (ulong)*puVar14 * 8);
      if (uVar11 == 0xcca8c5a28) {
        uVar23 = puVar14[1];
        if ((int)uVar23 < 0) goto LAB_7101521ae4;
        pcVar28 = pcVar32 + (int)uVar23;
        break;
      }
      iVar6 = iVar31 + -1;
      if (uVar11 < 0xcca8c5a29) {
        iVar9 = iVar31 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar9 <= iVar8);
  }
  else {
LAB_7101521ae4:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    fVar46 = *(float *)(pcVar28 + 1);
  }
  else {
    fVar46 = 0.0;
  }
  *(int *)(puVar10 + 0xc) = (int)(fVar46 * 60.0);
  pcVar32 = *(char **)(*plVar1 + 0x10);
  if ((*pcVar32 == '\f') && (iVar8 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    lVar15 = *(long *)(*plVar1 + 8);
    iVar9 = 0;
    pcVar28 = "";
    do {
      iVar31 = iVar8 + iVar9;
      if (iVar31 < 0) {
        iVar31 = iVar31 + 1;
      }
      iVar31 = iVar31 >> 1;
      puVar14 = (uint *)(*(long *)(lVar15 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar31 * 8);
      uVar11 = *(ulong *)(*(long *)(lVar15 + 0x20) + (ulong)*puVar14 * 8);
      if (uVar11 == 0x123970d1d2) {
        uVar23 = puVar14[1];
        if ((int)uVar23 < 0) goto LAB_7101521bb0;
        pcVar28 = pcVar32 + (int)uVar23;
        break;
      }
      iVar6 = iVar31 + -1;
      if (uVar11 < 0x123970d1d3) {
        iVar9 = iVar31 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar9 <= iVar8);
  }
  else {
LAB_7101521bb0:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    fVar46 = *(float *)(pcVar28 + 1);
  }
  else {
    fVar46 = 0.0;
  }
  *(int *)(puVar10 + 0x10) = (int)(fVar46 * 60.0);
  pcVar32 = *(char **)(*plVar1 + 0x10);
  if ((*pcVar32 == '\f') && (iVar8 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    lVar15 = *(long *)(*plVar1 + 8);
    iVar9 = 0;
    pcVar28 = "";
    do {
      iVar31 = iVar8 + iVar9;
      if (iVar31 < 0) {
        iVar31 = iVar31 + 1;
      }
      iVar31 = iVar31 >> 1;
      puVar14 = (uint *)(*(long *)(lVar15 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar31 * 8);
      uVar11 = *(ulong *)(*(long *)(lVar15 + 0x20) + (ulong)*puVar14 * 8);
      if (uVar11 == 0x2337b58e3a) {
        uVar23 = puVar14[1];
        if ((int)uVar23 < 0) goto LAB_7101521c74;
        pcVar28 = pcVar32 + (int)uVar23;
        break;
      }
      iVar6 = iVar31 + -1;
      if (uVar11 < 0x2337b58e3b) {
        iVar9 = iVar31 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar9 <= iVar8);
  }
  else {
LAB_7101521c74:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    fVar46 = *(float *)(pcVar28 + 1);
  }
  else {
    fVar46 = 0.0;
  }
  *(int *)((long)puVar10 + 100) = (int)(fVar46 * 60.0);
  lVar15 = *plVar1;
  pcVar32 = *(char **)(lVar15 + 0x10);
  cVar5 = *pcVar32;
  if ((cVar5 == '\f') && (iVar8 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar9 = 0;
    pcVar28 = "";
    do {
      iVar31 = iVar8 + iVar9;
      if (iVar31 < 0) {
        iVar31 = iVar31 + 1;
      }
      iVar31 = iVar31 >> 1;
      puVar14 = (uint *)(*(long *)(*(long *)(lVar15 + 8) + 0x28) + (long)*(int *)(pcVar32 + 5) +
                        (long)iVar31 * 8);
      ppuVar21 = *(undefined ***)(*(long *)(*(long *)(lVar15 + 8) + 0x20) + (ulong)*puVar14 * 8);
      if ((long *********)ppuVar21 == (long *********)0x1d40b7e5d7) {
        uVar23 = puVar14[1];
        if ((int)uVar23 < 0) goto LAB_7101521d38;
        pcVar28 = pcVar32 + (int)uVar23;
        break;
      }
      iVar6 = iVar31 + -1;
      if (ppuVar21 < (long *********)0x1d40b7e5d8) {
        iVar9 = iVar31 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar9 <= iVar8);
  }
  else {
LAB_7101521d38:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    fVar46 = *(float *)(pcVar28 + 1);
    if (cVar5 != '\f') goto LAB_7101521dec;
LAB_7101521d68:
    iVar8 = *(int *)(pcVar32 + 1) + -1;
    if (*(int *)(pcVar32 + 1) < 1) goto LAB_7101521dec;
    iVar9 = 0;
    pcVar28 = "";
    do {
      iVar31 = iVar8 + iVar9;
      if (iVar31 < 0) {
        iVar31 = iVar31 + 1;
      }
      iVar31 = iVar31 >> 1;
      puVar14 = (uint *)(*(long *)(*(long *)(lVar15 + 8) + 0x28) + (long)*(int *)(pcVar32 + 5) +
                        (long)iVar31 * 8);
      ppuVar21 = *(undefined ***)(*(long *)(*(long *)(lVar15 + 8) + 0x20) + (ulong)*puVar14 * 8);
      if ((long *********)ppuVar21 == (long *********)0x1d2d6a013c) {
        uVar23 = puVar14[1];
        if ((int)uVar23 < 0) goto LAB_7101521dec;
        pcVar28 = pcVar32 + (int)uVar23;
        break;
      }
      iVar6 = iVar31 + -1;
      if (ppuVar21 < (long *********)0x1d2d6a013d) {
        iVar9 = iVar31 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar9 <= iVar8);
  }
  else {
    fVar46 = 0.0;
    if (cVar5 == '\f') goto LAB_7101521d68;
LAB_7101521dec:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    fVar48 = *(float *)(pcVar28 + 1);
    if (cVar5 != '\f') goto LAB_7101521ea0;
LAB_7101521e1c:
    iVar8 = *(int *)(pcVar32 + 1) + -1;
    if (*(int *)(pcVar32 + 1) < 1) goto LAB_7101521ea0;
    iVar9 = 0;
    pcVar28 = "";
    do {
      iVar31 = iVar8 + iVar9;
      if (iVar31 < 0) {
        iVar31 = iVar31 + 1;
      }
      iVar31 = iVar31 >> 1;
      puVar14 = (uint *)(*(long *)(*(long *)(lVar15 + 8) + 0x28) + (long)*(int *)(pcVar32 + 5) +
                        (long)iVar31 * 8);
      ppuVar21 = *(undefined ***)(*(long *)(*(long *)(lVar15 + 8) + 0x20) + (ulong)*puVar14 * 8);
      if ((long *********)ppuVar21 == (long *********)0x1d5d00f5b3) {
        uVar23 = puVar14[1];
        if ((int)uVar23 < 0) goto LAB_7101521ea0;
        pcVar28 = pcVar32 + (int)uVar23;
        break;
      }
      iVar6 = iVar31 + -1;
      if (ppuVar21 < (long *********)0x1d5d00f5b4) {
        iVar9 = iVar31 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar9 <= iVar8);
  }
  else {
    fVar48 = 0.0;
    if (cVar5 == '\f') goto LAB_7101521e1c;
LAB_7101521ea0:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    fVar49 = *(float *)(pcVar28 + 1);
  }
  else {
    fVar49 = 0.0;
  }
  if ((cVar5 == '\f') && (iVar8 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar9 = 0;
    pcVar28 = "";
    do {
      iVar31 = iVar8 + iVar9;
      if (iVar31 < 0) {
        iVar31 = iVar31 + 1;
      }
      iVar31 = iVar31 >> 1;
      puVar14 = (uint *)(*(long *)(*(long *)(lVar15 + 8) + 0x28) + (long)*(int *)(pcVar32 + 5) +
                        (long)iVar31 * 8);
      uVar11 = *(ulong *)(*(long *)(*(long *)(lVar15 + 8) + 0x20) + (ulong)*puVar14 * 8);
      if (uVar11 == 0x1dc409a409) {
        uVar23 = puVar14[1];
        if ((int)uVar23 < 0) goto LAB_7101521f54;
        pcVar28 = pcVar32 + (int)uVar23;
        break;
      }
      iVar6 = iVar31 + -1;
      if (uVar11 < 0x1dc409a40a) {
        iVar9 = iVar31 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar9 <= iVar8);
  }
  else {
LAB_7101521f54:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    fVar50 = *(float *)(pcVar28 + 1);
  }
  else {
    fVar50 = 0.0;
  }
  *(float *)(puVar10 + 0xe) = fVar46 * 255.0;
  *(float *)((long)puVar10 + 0x74) = fVar48 * 255.0;
  *(float *)(puVar10 + 0xf) = fVar49 * 255.0;
  *(float *)((long)puVar10 + 0x7c) = fVar50 * 255.0;
  lVar15 = *plVar1;
  pcVar32 = *(char **)(lVar15 + 0x10);
  cVar5 = *pcVar32;
  if ((cVar5 == '\f') && (iVar8 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar9 = 0;
    pcVar28 = "";
    do {
      iVar31 = iVar8 + iVar9;
      if (iVar31 < 0) {
        iVar31 = iVar31 + 1;
      }
      iVar31 = iVar31 >> 1;
      puVar14 = (uint *)(*(long *)(*(long *)(lVar15 + 8) + 0x28) + (long)*(int *)(pcVar32 + 5) +
                        (long)iVar31 * 8);
      ppuVar21 = *(undefined ***)(*(long *)(*(long *)(lVar15 + 8) + 0x20) + (ulong)*puVar14 * 8);
      if ((long *********)ppuVar21 == (long *********)0x154bcad82b) {
        uVar23 = puVar14[1];
        if ((int)uVar23 < 0) goto LAB_7101522024;
        pcVar28 = pcVar32 + (int)uVar23;
        break;
      }
      iVar6 = iVar31 + -1;
      if (ppuVar21 < (long *********)0x154bcad82c) {
        iVar9 = iVar31 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar9 <= iVar8);
  }
  else {
LAB_7101522024:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    fVar46 = *(float *)(pcVar28 + 1);
    if (cVar5 != '\f') goto LAB_71015220d8;
LAB_7101522054:
    iVar8 = *(int *)(pcVar32 + 1) + -1;
    if (*(int *)(pcVar32 + 1) < 1) goto LAB_71015220d8;
    iVar9 = 0;
    pcVar28 = "";
    do {
      iVar31 = iVar8 + iVar9;
      if (iVar31 < 0) {
        iVar31 = iVar31 + 1;
      }
      iVar31 = iVar31 >> 1;
      puVar14 = (uint *)(*(long *)(*(long *)(lVar15 + 8) + 0x28) + (long)*(int *)(pcVar32 + 5) +
                        (long)iVar31 * 8);
      ppuVar21 = *(undefined ***)(*(long *)(*(long *)(lVar15 + 8) + 0x20) + (ulong)*puVar14 * 8);
      if ((long *********)ppuVar21 == (long *********)0x1526173cc0) {
        uVar23 = puVar14[1];
        if ((int)uVar23 < 0) goto LAB_71015220d8;
        pcVar28 = pcVar32 + (int)uVar23;
        break;
      }
      iVar6 = iVar31 + -1;
      if (ppuVar21 < (long *********)0x1526173cc1) {
        iVar9 = iVar31 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar9 <= iVar8);
  }
  else {
    fVar46 = 0.0;
    if (cVar5 == '\f') goto LAB_7101522054;
LAB_71015220d8:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    fVar48 = *(float *)(pcVar28 + 1);
    if (cVar5 != '\f') goto LAB_710152218c;
LAB_7101522108:
    iVar8 = *(int *)(pcVar32 + 1) + -1;
    if (*(int *)(pcVar32 + 1) < 1) goto LAB_710152218c;
    iVar9 = 0;
    pcVar28 = "";
    do {
      iVar31 = iVar8 + iVar9;
      if (iVar31 < 0) {
        iVar31 = iVar31 + 1;
      }
      iVar31 = iVar31 >> 1;
      puVar14 = (uint *)(*(long *)(*(long *)(lVar15 + 8) + 0x28) + (long)*(int *)(pcVar32 + 5) +
                        (long)iVar31 * 8);
      ppuVar21 = *(undefined ***)(*(long *)(*(long *)(lVar15 + 8) + 0x20) + (ulong)*puVar14 * 8);
      if ((long *********)ppuVar21 == (long *********)0x15567dc84f) {
        uVar23 = puVar14[1];
        if ((int)uVar23 < 0) goto LAB_710152218c;
        pcVar28 = pcVar32 + (int)uVar23;
        break;
      }
      iVar6 = iVar31 + -1;
      if (ppuVar21 < (long *********)0x15567dc850) {
        iVar9 = iVar31 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar9 <= iVar8);
  }
  else {
    fVar48 = 0.0;
    if (cVar5 == '\f') goto LAB_7101522108;
LAB_710152218c:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    fVar49 = *(float *)(pcVar28 + 1);
    if (cVar5 != '\f') goto LAB_7101522240;
LAB_71015221bc:
    iVar8 = *(int *)(pcVar32 + 1) + -1;
    if (*(int *)(pcVar32 + 1) < 1) goto LAB_7101522240;
    iVar9 = 0;
    pcVar28 = "";
    do {
      iVar31 = iVar8 + iVar9;
      if (iVar31 < 0) {
        iVar31 = iVar31 + 1;
      }
      iVar31 = iVar31 >> 1;
      puVar14 = (uint *)(*(long *)(*(long *)(lVar15 + 8) + 0x28) + (long)*(int *)(pcVar32 + 5) +
                        (long)iVar31 * 8);
      uVar11 = *(ulong *)(*(long *)(*(long *)(lVar15 + 8) + 0x20) + (ulong)*puVar14 * 8);
      if (uVar11 == 0x15cf7499f5) {
        uVar23 = puVar14[1];
        if ((int)uVar23 < 0) goto LAB_7101522240;
        pcVar28 = pcVar32 + (int)uVar23;
        break;
      }
      iVar6 = iVar31 + -1;
      if (uVar11 < 0x15cf7499f6) {
        iVar9 = iVar31 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar9 <= iVar8);
  }
  else {
    fVar49 = 0.0;
    if (cVar5 == '\f') goto LAB_71015221bc;
LAB_7101522240:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    fVar50 = *(float *)(pcVar28 + 1);
  }
  else {
    fVar50 = 0.0;
  }
  *(char *)((long)puVar10 + 0x84) = (char)(int)(fVar46 * 255.01);
  *(char *)((long)puVar10 + 0x87) = (char)(int)(fVar50 * 255.01);
  *(char *)((long)puVar10 + 0x85) = (char)(int)(fVar48 * 255.01);
  *(char *)((long)puVar10 + 0x86) = (char)(int)(fVar49 * 255.01);
  pcVar32 = *(char **)(*plVar1 + 0x10);
  if ((*pcVar32 == '\f') && (iVar8 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    lVar15 = *(long *)(*plVar1 + 8);
    iVar9 = 0;
    pcVar28 = "";
    do {
      iVar31 = iVar8 + iVar9;
      if (iVar31 < 0) {
        iVar31 = iVar31 + 1;
      }
      iVar31 = iVar31 >> 1;
      puVar14 = (uint *)(*(long *)(lVar15 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar31 * 8);
      uVar11 = *(ulong *)(*(long *)(lVar15 + 0x20) + (ulong)*puVar14 * 8);
      if (uVar11 == 0x12567d8531) {
        uVar23 = puVar14[1];
        if ((int)uVar23 < 0) goto LAB_7101522330;
        pcVar28 = pcVar32 + (int)uVar23;
        break;
      }
      iVar6 = iVar31 + -1;
      if (uVar11 < 0x12567d8532) {
        iVar9 = iVar31 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar9 <= iVar8);
  }
  else {
LAB_7101522330:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar47 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar47 = 0;
  }
  *(undefined4 *)(puVar10 + 0x11) = uVar47;
  pcVar32 = *(char **)(*plVar1 + 0x10);
  if ((*pcVar32 == '\f') && (iVar8 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    lVar15 = *(long *)(*plVar1 + 8);
    iVar9 = 0;
    pcVar28 = "";
    do {
      iVar31 = iVar8 + iVar9;
      if (iVar31 < 0) {
        iVar31 = iVar31 + 1;
      }
      iVar31 = iVar31 >> 1;
      puVar14 = (uint *)(*(long *)(lVar15 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar31 * 8);
      uVar11 = *(ulong *)(*(long *)(lVar15 + 0x20) + (ulong)*puVar14 * 8);
      if (uVar11 == 0x1d66fc9042) {
        uVar23 = puVar14[1];
        if ((int)uVar23 < 0) goto LAB_71015223ec;
        pcVar28 = pcVar32 + (int)uVar23;
        break;
      }
      iVar6 = iVar31 + -1;
      if (uVar11 < 0x1d66fc9043) {
        iVar9 = iVar31 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar9 <= iVar8);
  }
  else {
LAB_71015223ec:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    fVar46 = *(float *)(pcVar28 + 1);
  }
  else {
    fVar46 = 0.0;
  }
  *(int *)((long)puVar10 + 0x8c) = (int)(fVar46 * 60.0);
  lVar15 = *plVar1;
  pcVar32 = *(char **)(lVar15 + 0x10);
  cVar5 = *pcVar32;
  if ((cVar5 == '\f') && (iVar8 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar9 = 0;
    pcVar28 = "";
    do {
      iVar31 = iVar8 + iVar9;
      if (iVar31 < 0) {
        iVar31 = iVar31 + 1;
      }
      iVar31 = iVar31 >> 1;
      puVar14 = (uint *)(*(long *)(*(long *)(lVar15 + 8) + 0x28) + (long)*(int *)(pcVar32 + 5) +
                        (long)iVar31 * 8);
      ppuVar21 = *(undefined ***)(*(long *)(*(long *)(lVar15 + 8) + 0x20) + (ulong)*puVar14 * 8);
      if ((long *********)ppuVar21 == (long *********)0x20bbb5d1cb) {
        uVar23 = puVar14[1];
        if ((int)uVar23 < 0) goto LAB_71015224b0;
        pcVar28 = pcVar32 + (int)uVar23;
        break;
      }
      iVar6 = iVar31 + -1;
      if (ppuVar21 < (long *********)0x20bbb5d1cc) {
        iVar9 = iVar31 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar9 <= iVar8);
  }
  else {
LAB_71015224b0:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    fVar46 = *(float *)(pcVar28 + 1);
    if (cVar5 != '\f') goto LAB_7101522564;
LAB_71015224e0:
    iVar8 = *(int *)(pcVar32 + 1) + -1;
    if (*(int *)(pcVar32 + 1) < 1) goto LAB_7101522564;
    iVar9 = 0;
    pcVar28 = "";
    do {
      iVar31 = iVar8 + iVar9;
      if (iVar31 < 0) {
        iVar31 = iVar31 + 1;
      }
      iVar31 = iVar31 >> 1;
      puVar14 = (uint *)(*(long *)(*(long *)(lVar15 + 8) + 0x28) + (long)*(int *)(pcVar32 + 5) +
                        (long)iVar31 * 8);
      ppuVar21 = *(undefined ***)(*(long *)(*(long *)(lVar15 + 8) + 0x20) + (ulong)*puVar14 * 8);
      if ((long *********)ppuVar21 == (long *********)0x20d6683520) {
        uVar23 = puVar14[1];
        if ((int)uVar23 < 0) goto LAB_7101522564;
        pcVar28 = pcVar32 + (int)uVar23;
        break;
      }
      iVar6 = iVar31 + -1;
      if (ppuVar21 < (long *********)0x20d6683521) {
        iVar9 = iVar31 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar9 <= iVar8);
  }
  else {
    fVar46 = 0.0;
    if (cVar5 == '\f') goto LAB_71015224e0;
LAB_7101522564:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    fVar48 = *(float *)(pcVar28 + 1);
    if (cVar5 != '\f') goto LAB_7101522618;
LAB_7101522594:
    iVar8 = *(int *)(pcVar32 + 1) + -1;
    if (*(int *)(pcVar32 + 1) < 1) goto LAB_7101522618;
    iVar9 = 0;
    pcVar28 = "";
    do {
      iVar31 = iVar8 + iVar9;
      if (iVar31 < 0) {
        iVar31 = iVar31 + 1;
      }
      iVar31 = iVar31 >> 1;
      puVar14 = (uint *)(*(long *)(*(long *)(lVar15 + 8) + 0x28) + (long)*(int *)(pcVar32 + 5) +
                        (long)iVar31 * 8);
      ppuVar21 = *(undefined ***)(*(long *)(*(long *)(lVar15 + 8) + 0x20) + (ulong)*puVar14 * 8);
      if ((long *********)ppuVar21 == (long *********)0x20a602c1af) {
        uVar23 = puVar14[1];
        if ((int)uVar23 < 0) goto LAB_7101522618;
        pcVar28 = pcVar32 + (int)uVar23;
        break;
      }
      iVar6 = iVar31 + -1;
      if (ppuVar21 < (long *********)0x20a602c1b0) {
        iVar9 = iVar31 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar9 <= iVar8);
  }
  else {
    fVar48 = 0.0;
    if (cVar5 == '\f') goto LAB_7101522594;
LAB_7101522618:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    fVar49 = *(float *)(pcVar28 + 1);
    if (cVar5 != '\f') goto LAB_71015226cc;
LAB_7101522648:
    iVar8 = *(int *)(pcVar32 + 1) + -1;
    if (*(int *)(pcVar32 + 1) < 1) goto LAB_71015226cc;
    iVar9 = 0;
    pcVar28 = "";
    do {
      iVar31 = iVar8 + iVar9;
      if (iVar31 < 0) {
        iVar31 = iVar31 + 1;
      }
      iVar31 = iVar31 >> 1;
      puVar14 = (uint *)(*(long *)(*(long *)(lVar15 + 8) + 0x28) + (long)*(int *)(pcVar32 + 5) +
                        (long)iVar31 * 8);
      uVar11 = *(ulong *)(*(long *)(*(long *)(lVar15 + 8) + 0x20) + (ulong)*puVar14 * 8);
      if (uVar11 == 0x203f0b9015) {
        uVar23 = puVar14[1];
        if ((int)uVar23 < 0) goto LAB_71015226cc;
        pcVar28 = pcVar32 + (int)uVar23;
        break;
      }
      iVar6 = iVar31 + -1;
      if (uVar11 < 0x203f0b9016) {
        iVar9 = iVar31 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar9 <= iVar8);
  }
  else {
    fVar49 = 0.0;
    if (cVar5 == '\f') goto LAB_7101522648;
LAB_71015226cc:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    fVar50 = *(float *)(pcVar28 + 1);
  }
  else {
    fVar50 = 0.0;
  }
  *(char *)(puVar10 + 0x12) = (char)(int)(fVar46 * 255.01);
  *(char *)((long)puVar10 + 0x93) = (char)(int)(fVar50 * 255.01);
  *(char *)((long)puVar10 + 0x91) = (char)(int)(fVar48 * 255.01);
  *(char *)((long)puVar10 + 0x92) = (char)(int)(fVar49 * 255.01);
  pcVar32 = *(char **)(*plVar1 + 0x10);
  if ((*pcVar32 == '\f') && (iVar8 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    lVar15 = *(long *)(*plVar1 + 8);
    iVar9 = 0;
    pcVar28 = "";
    do {
      iVar31 = iVar8 + iVar9;
      if (iVar31 < 0) {
        iVar31 = iVar31 + 1;
      }
      iVar31 = iVar31 >> 1;
      puVar14 = (uint *)(*(long *)(lVar15 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar31 * 8);
      uVar11 = *(ulong *)(*(long *)(lVar15 + 0x20) + (ulong)*puVar14 * 8);
      if (uVar11 == 0xa37d291e6) {
        uVar23 = puVar14[1];
        if ((int)uVar23 < 0) goto LAB_71015227b4;
        pcVar28 = pcVar32 + (int)uVar23;
        break;
      }
      iVar6 = iVar31 + -1;
      if (uVar11 < 0xa37d291e7) {
        iVar9 = iVar31 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar9 <= iVar8);
  }
  else {
LAB_71015227b4:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar47 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar47 = 0;
  }
  *(undefined4 *)((long)puVar10 + 0x94) = uVar47;
  pcVar32 = *(char **)(*plVar1 + 0x10);
  if ((*pcVar32 == '\f') && (iVar8 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    lVar15 = *(long *)(*plVar1 + 8);
    iVar9 = 0;
    pcVar28 = "";
    do {
      iVar31 = iVar8 + iVar9;
      if (iVar31 < 0) {
        iVar31 = iVar31 + 1;
      }
      iVar31 = iVar31 >> 1;
      puVar14 = (uint *)(*(long *)(lVar15 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar31 * 8);
      uVar11 = *(ulong *)(*(long *)(lVar15 + 0x20) + (ulong)*puVar14 * 8);
      if (uVar11 == 0xc9ed2a97a) {
        uVar23 = puVar14[1];
        if ((int)uVar23 < 0) goto LAB_7101522870;
        pcVar28 = pcVar32 + (int)uVar23;
        break;
      }
      iVar6 = iVar31 + -1;
      if (uVar11 < 0xc9ed2a97b) {
        iVar9 = iVar31 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar9 <= iVar8);
  }
  else {
LAB_7101522870:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar47 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar47 = 0;
  }
  *(undefined4 *)(puVar10 + 0x13) = uVar47;
  pcVar32 = *(char **)(*plVar1 + 0x10);
  if ((*pcVar32 == '\f') && (iVar8 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    lVar15 = *(long *)(*plVar1 + 8);
    iVar9 = 0;
    pcVar28 = "";
    do {
      iVar31 = iVar8 + iVar9;
      if (iVar31 < 0) {
        iVar31 = iVar31 + 1;
      }
      iVar31 = iVar31 >> 1;
      puVar14 = (uint *)(*(long *)(lVar15 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar31 * 8);
      uVar11 = *(ulong *)(*(long *)(lVar15 + 0x20) + (ulong)*puVar14 * 8);
      if (uVar11 == 0x102d20f5e8) {
        uVar23 = puVar14[1];
        if ((int)uVar23 < 0) goto LAB_710152292c;
        pcVar28 = pcVar32 + (int)uVar23;
        break;
      }
      iVar6 = iVar31 + -1;
      if (uVar11 < 0x102d20f5e9) {
        iVar9 = iVar31 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar9 <= iVar8);
  }
  else {
LAB_710152292c:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    fVar46 = *(float *)(pcVar28 + 1);
  }
  else {
    fVar46 = 0.0;
  }
  *(int *)((long)puVar10 + 0x9c) = (int)(fVar46 * 60.0);
  pcVar32 = *(char **)(*plVar1 + 0x10);
  if ((*pcVar32 == '\f') && (iVar8 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    lVar15 = *(long *)(*plVar1 + 8);
    iVar9 = 0;
    pcVar28 = "";
    do {
      iVar31 = iVar8 + iVar9;
      if (iVar31 < 0) {
        iVar31 = iVar31 + 1;
      }
      iVar31 = iVar31 >> 1;
      puVar14 = (uint *)(*(long *)(lVar15 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar31 * 8);
      uVar11 = *(ulong *)(*(long *)(lVar15 + 0x20) + (ulong)*puVar14 * 8);
      if (uVar11 == 0x106b839ce9) {
        uVar23 = puVar14[1];
        if ((int)uVar23 < 0) goto LAB_71015229f0;
        pcVar28 = pcVar32 + (int)uVar23;
        break;
      }
      iVar6 = iVar31 + -1;
      if (uVar11 < 0x106b839cea) {
        iVar9 = iVar31 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar9 <= iVar8);
  }
  else {
LAB_71015229f0:
    pcVar28 = "";
  }
  switch(*pcVar28) {
  case '\x01':
  case '\x03':
    uVar23 = (uint)(byte)pcVar28[1];
    break;
  case '\x02':
    uVar23 = (uint)pcVar28[1];
    break;
  case '\x04':
    uVar23 = (uint)*(short *)(pcVar28 + 1);
    break;
  case '\x05':
    uVar23 = (uint)*(ushort *)(pcVar28 + 1);
    break;
  case '\x06':
  case '\a':
    uVar23 = *(uint *)(pcVar28 + 1);
    break;
  default:
    uVar23 = 0;
  }
  *(uint *)(puVar10 + 0x14) = uVar23;
  pcVar32 = *(char **)(*plVar1 + 0x10);
  if ((*pcVar32 == '\f') && (iVar8 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    lVar15 = *(long *)(*plVar1 + 8);
    iVar9 = 0;
    pcVar28 = "";
    do {
      iVar31 = iVar8 + iVar9;
      if (iVar31 < 0) {
        iVar31 = iVar31 + 1;
      }
      iVar31 = iVar31 >> 1;
      puVar14 = (uint *)(*(long *)(lVar15 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar31 * 8);
      uVar11 = *(ulong *)(*(long *)(lVar15 + 0x20) + (ulong)*puVar14 * 8);
      if (uVar11 == 0xb2d9fe537) {
        uVar23 = puVar14[1];
        if ((int)uVar23 < 0) goto LAB_7101522ae4;
        pcVar28 = pcVar32 + (int)uVar23;
        break;
      }
      iVar6 = iVar31 + -1;
      if (uVar11 < 0xb2d9fe538) {
        iVar9 = iVar31 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar9 <= iVar8);
  }
  else {
LAB_7101522ae4:
    pcVar28 = "";
  }
  switch(*pcVar28) {
  case '\x01':
  case '\x03':
    uVar23 = (uint)(byte)pcVar28[1];
    break;
  case '\x02':
    uVar23 = (uint)pcVar28[1];
    break;
  case '\x04':
    uVar23 = (uint)*(short *)(pcVar28 + 1);
    break;
  case '\x05':
    uVar23 = (uint)*(ushort *)(pcVar28 + 1);
    break;
  case '\x06':
  case '\a':
    uVar23 = *(uint *)(pcVar28 + 1);
    break;
  default:
    uVar23 = 0;
  }
  *(uint *)((long)puVar10 + 0xa4) = uVar23;
  pcVar32 = *(char **)(*plVar1 + 0x10);
  if ((*pcVar32 == '\f') && (iVar8 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    lVar15 = *(long *)(*plVar1 + 8);
    iVar9 = 0;
    pcVar28 = "";
    do {
      iVar31 = iVar8 + iVar9;
      if (iVar31 < 0) {
        iVar31 = iVar31 + 1;
      }
      iVar31 = iVar31 >> 1;
      puVar14 = (uint *)(*(long *)(lVar15 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar31 * 8);
      uVar11 = *(ulong *)(*(long *)(lVar15 + 0x20) + (ulong)*puVar14 * 8);
      if (uVar11 == 0x19d4dae26d) {
        uVar23 = puVar14[1];
        if ((int)uVar23 < 0) goto LAB_7101522bd8;
        pcVar28 = pcVar32 + (int)uVar23;
        break;
      }
      iVar6 = iVar31 + -1;
      if (uVar11 < 0x19d4dae26e) {
        iVar9 = iVar31 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar9 <= iVar8);
  }
  else {
LAB_7101522bd8:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar47 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar47 = 0;
  }
  *(undefined4 *)(puVar10 + 0x15) = uVar47;
  pcVar32 = *(char **)(*plVar1 + 0x10);
  if ((*pcVar32 == '\f') && (iVar8 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    lVar15 = *(long *)(*plVar1 + 8);
    iVar9 = 0;
    pcVar28 = "";
    do {
      iVar31 = iVar8 + iVar9;
      if (iVar31 < 0) {
        iVar31 = iVar31 + 1;
      }
      iVar31 = iVar31 >> 1;
      puVar14 = (uint *)(*(long *)(lVar15 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar31 * 8);
      uVar11 = *(ulong *)(*(long *)(lVar15 + 0x20) + (ulong)*puVar14 * 8);
      if (uVar11 == 0xe4a4356b0) {
        uVar23 = puVar14[1];
        if ((int)uVar23 < 0) goto LAB_7101522c94;
        pcVar28 = pcVar32 + (int)uVar23;
        break;
      }
      iVar6 = iVar31 + -1;
      if (uVar11 < 0xe4a4356b1) {
        iVar9 = iVar31 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar9 <= iVar8);
  }
  else {
LAB_7101522c94:
    pcVar28 = "";
  }
  switch(*pcVar28) {
  case '\x01':
  case '\x03':
    uVar23 = (uint)(byte)pcVar28[1];
    break;
  case '\x02':
    uVar23 = (uint)pcVar28[1];
    break;
  case '\x04':
    uVar23 = (uint)*(short *)(pcVar28 + 1);
    break;
  case '\x05':
    uVar23 = (uint)*(ushort *)(pcVar28 + 1);
    break;
  case '\x06':
  case '\a':
    uVar23 = *(uint *)(pcVar28 + 1);
    break;
  default:
    uVar23 = 0;
  }
  *(uint *)((long)puVar10 + 0xac) = uVar23;
  plVar43 = *(long **)(lVar45 + 0x110);
  *(int **)(lVar45 + 0x108) = piVar24;
  *(undefined8 **)(lVar45 + 0x110) = puVar10;
  if (plVar43 != (long *)0x0) {
    plVar38 = plVar43 + 1;
    do {
      lVar15 = *plVar38;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar38,0x10);
      if (bVar7) {
        *plVar38 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar43 + 0x10))(plVar43);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0)) {
    FUN_7101764000();
    ppuVar21 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  uVar11 = DAT_710530d578;
  lVar15 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
  puVar16 = FUN_71032631a0(lVar15,0x11b1ccb807);
  if ((((uVar11 & 0xff00000000000000) == 0xc100000000000000) && ((uVar11 & 0xffffffffff) != 0)) &&
     (((ulong)puVar16 & 0xff00000000000000) == 0xc100000000000000 &&
      ((ulong)puVar16 & 0xffffffffff) != 0)) {
    if ((((ulong)puVar16 ^ uVar11) & 0xffffffffff) == 0) {
LAB_7101522ddc:
      uVar11 = DAT_71053087b0;
    }
  }
  else if ((((ulong)puVar16 & 0xffffffffff) != 0 &&
           ((ulong)puVar16 & 0xff00000000000000) == 0xc100000000000000) ==
           ((uVar11 & 0xff00000000000000) == 0xc100000000000000 && (uVar11 & 0xffffffffff) != 0))
  goto LAB_7101522ddc;
  uVar17 = FUN_71032626e0(lVar15,uVar11);
  iVar8 = (int)uVar17;
  if (iVar8 != -1) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_71053144d8), iVar9 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    lVar15 = *plVar1;
    uVar11 = (ulong)iVar8;
    uVar33 = *(ulong *)(lVar15 + 0xf8);
    if (uVar33 == 0) {
LAB_7101522ed0:
      plVar43 = (long *)0x0;
    }
    else {
      uVar40 = uVar33 - 1;
      if ((uVar40 & uVar33) == 0) {
        uVar39 = uVar40 & uVar11;
      }
      else {
        uVar39 = uVar11;
        if (uVar33 <= uVar11) {
          uVar39 = 0;
          if (uVar33 != 0) {
            uVar39 = uVar11 / uVar33;
          }
          uVar39 = uVar11 - uVar39 * uVar33;
        }
      }
      plVar38 = *(long **)(*(long *)(lVar15 + 0xf0) + uVar39 * 8);
      plVar43 = (long *)0x0;
      if ((plVar38 != (long *)0x0) && (plVar43 = (long *)*plVar38, plVar43 != (long *)0x0)) {
        if ((uVar40 & uVar33) == 0) {
          while (uVar41 = plVar43[1], uVar41 == uVar11 || (uVar41 & uVar40) == uVar39) {
            if (((uVar41 == uVar11) && ((int)plVar43[2] == iVar8)) ||
               (plVar43 = (long *)*plVar43, plVar43 == (long *)0x0)) goto joined_r0x007101522ed8;
          }
          plVar43 = (long *)0x0;
        }
        else {
          do {
            uVar40 = plVar43[1];
            if (uVar40 == uVar11) {
              if ((int)plVar43[2] == iVar8) break;
            }
            else {
              if (uVar33 <= uVar40) {
                uVar41 = 0;
                if (uVar33 != 0) {
                  uVar41 = uVar40 / uVar33;
                }
                uVar40 = uVar40 - uVar41 * uVar33;
              }
              if (uVar40 != uVar39) goto LAB_7101522ed0;
            }
            plVar43 = (long *)*plVar43;
          } while (plVar43 != (long *)0x0);
        }
      }
    }
joined_r0x007101522ed8:
    if (7 < DAT_710530d580) {
LAB_7101523560:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar40 = plVar43[(long)(int)DAT_710530d580 + 4] & 0xffffffffff;
    if (uVar40 == 0) {
      if ((uVar33 - 1 & uVar33) == 0) {
        plVar43 = *(long **)(*(long *)(lVar15 + 0xf0) + (uVar33 - 1 & uVar11) * 8);
        do {
          do {
            plVar43 = (long *)*plVar43;
          } while (plVar43[1] != uVar11);
        } while (*(int *)(plVar43 + 2) != iVar8);
      }
      else {
        uVar40 = uVar11;
        if (uVar33 <= uVar11) {
          uVar40 = 0;
          if (uVar33 != 0) {
            uVar40 = uVar11 / uVar33;
          }
          uVar40 = uVar11 - uVar40 * uVar33;
        }
        plVar43 = *(long **)(*(long *)(lVar15 + 0xf0) + uVar40 * 8);
        do {
          do {
            plVar43 = (long *)*plVar43;
          } while (plVar43[1] != uVar11);
        } while (*(int *)(plVar43 + 2) != iVar8);
      }
      uVar40 = *(ulong *)((long)plVar43 + 0x20) & 0xffffffffff;
    }
    uVar11 = FUN_710325ce30(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x278),
                            uVar40 | 0xd9ffff0000000000);
    FUN_71023ed830(DAT_7105329f38,uVar11,0,ppppbVar22,pppplVar20,param_6,param_7,param_8);
    ppuVar21 = (undefined **)0x0;
    FUN_71023eea60((float)*(int *)(*(long *)(lVar45 + 0x108) + 0x8c) / 100.0,DAT_7105329f38,0,0);
  }
  local_88 = (long ********)
             FUN_710392e290(0x10,0x200,(long ****)ppuVar21,ppppbVar22,pppplVar20,param_6,param_7,
                            param_8);
  if (local_88 == (long ********)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_90 = (long ********)((ulong)local_90 & 0xffffffff00000000);
      local_190 = (long ********)&DAT_00000200;
      ppuVar21 = (undefined **)&local_190;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
      if (((uVar11 & 1) != 0) &&
         (local_88 = (long ********)
                     FUN_710392e290(0x10,0x200,(long ****)ppuVar21,ppppbVar22,pppplVar20,param_6,
                                    param_7,param_8), local_88 != (long ********)0x0))
      goto LAB_7101523020;
    }
    local_88 = (long ********)0x0;
  }
LAB_7101523020:
  local_80 = local_88 + 0x40;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = (long ********)0x0;
  local_188 = (long *)0x0;
  lVar45 = *plVar1;
  local_90 = local_88;
  if (0 < (int)((ulong)(*(long *)(lVar45 + 0x40) - *(long *)(lVar45 + 0x38)) >> 5) * -0x55555555) {
    lVar15 = 0;
    do {
      lVar29 = *(long *)(lVar45 + 0x38);
      lVar34 = lVar29 + lVar15 * 0x60;
      if (0 < (int)((ulong)(*(long *)(lVar34 + 0x18) - *(long *)(lVar34 + 0x10)) >> 6)) {
        lVar34 = 0;
        do {
          lVar45 = *(long *)(lVar29 + lVar15 * 0x60 + 0x10) + lVar34 * 0x40;
          if (*(int *)(lVar45 + 4) == 2) {
            puVar10 = (undefined8 *)(lVar45 + 0x10);
            bVar7 = FUN_71037a4570((long *)*DAT_710593bc60,(byte *)*puVar10);
            if (bVar7) {
              puVar18 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,(byte *)*puVar10);
              if ((puVar18 == (ushort *)0x0) || (uVar30 = *puVar18, uVar30 == 0)) {
                local_190 = (long ********)((ulong)local_190 & 0xffffffffffff0000);
              }
              else {
                iVar9 = 0;
                iVar8 = 0;
                puVar37 = puVar18;
                do {
                  if ((uVar30 | 1) == 0xf) {
                    if (uVar30 == 0xe) {
                      iVar31 = (puVar37[3] >> 1) + 4;
                      uVar30 = puVar37[1];
                    }
                    else {
                      iVar31 = 3;
                      if (uVar30 != 0xf) {
                        iVar31 = 0;
                      }
                      uVar30 = puVar37[1];
                    }
                    if ((((uVar30 == 0) && (puVar37[2] == 2)) && (puVar18[iVar31 + iVar9] == 0x5f))
                       && ((puVar18[(long)(iVar31 + iVar9) + 1] | 1) == 0xf)) {
                      iVar31 = iVar31 + 1;
                    }
                  }
                  else {
                    *(ushort *)((long)&local_190 + (long)iVar8 * 2) = uVar30;
                    iVar8 = iVar8 + 1;
                    iVar31 = 1;
                  }
                  if (0x7f < iVar8) break;
                  iVar9 = iVar31 + iVar9;
                  puVar37 = puVar18 + iVar9;
                  uVar30 = *puVar37;
                } while (uVar30 != 0);
                *(undefined2 *)((long)&local_190 + (long)iVar8 * 2) = 0;
                if (0 < iVar8) {
                  lVar45 = 0;
                  do {
                    __src = local_90;
                    if (local_90 == local_88) {
LAB_7101523220:
                      if (local_80 == local_88) {
                        ppppppppplVar44 = (long *********)((long)local_88 - (long)local_90);
                        if ((long)ppppppppplVar44 < -2) {
                    /* WARNING: Subroutine does not return */
                          std::__vector_base_common<true>::__throw_length_error();
                        }
                        uVar11 = ((long)ppppppppplVar44 >> 1) + 1;
                        uVar33 = (long)local_80 - (long)local_90;
                        if (uVar11 <= uVar33) {
                          uVar11 = uVar33;
                        }
                        if (0x3ffffffffffffffe < (ulong)((long)uVar33 >> 1)) {
                          uVar11 = 0x7fffffffffffffff;
                        }
                        if (uVar11 == 0) {
                          pppppppplVar35 = (long ********)0x0;
                        }
                        else {
                          if ((long)uVar11 < 0) goto LAB_7101523560;
                          pppppppplVar25 = (long ********)(uVar11 * 2);
                          if (pppppppplVar25 == (long ********)0x0) {
                            pppppppplVar25 = (long ********)0x1;
                          }
                          pppppppplVar35 =
                               (long ********)
                               FUN_710392e290(0x10,pppppppplVar25,(long ****)ppuVar21,ppppbVar22,
                                              pppplVar20,param_6,param_7,param_8);
                          if (pppppppplVar35 == (long ********)0x0) {
                            if (DAT_7105332f00 != (long *)0x0) {
                              local_70[0] = 0;
                              ppuVar21 = (undefined **)&local_78;
                              local_78 = pppppppplVar25;
                              uVar33 = (**(code **)(*DAT_7105332f00 + 0x30))
                                                 (DAT_7105332f00,local_70);
                              if (((uVar33 & 1) != 0) &&
                                 (pppppppplVar35 =
                                       (long ********)
                                       FUN_710392e290(0x10,pppppppplVar25,(long ****)ppuVar21,
                                                      ppppbVar22,pppplVar20,param_6,param_7,param_8)
                                 , pppppppplVar35 != (long ********)0x0)) goto LAB_71015232f0;
                            }
                            pppppppplVar35 = (long ********)0x0;
                          }
                        }
LAB_71015232f0:
                        psVar2 = (short *)((long)pppppppplVar35 + ((long)ppppppppplVar44 >> 1) * 2);
                        *psVar2 = *(short *)((long)&local_190 + lVar45 * 2);
                        if (0 < (long)ppppppppplVar44) {
                          memcpy(pppppppplVar35,__src,(size_t)ppppppppplVar44);
                          ppuVar21 = (undefined **)ppppppppplVar44;
                        }
                        local_90 = pppppppplVar35;
                        local_88 = (long ********)(psVar2 + 1);
                        local_80 = (long ********)((long)pppppppplVar35 + uVar11 * 2);
                        if (__src != (long ********)0x0) {
                          FUN_710392eb40((ulong)__src);
                        }
                      }
                      else {
                        *(short *)local_88 = *(short *)((long)&local_190 + lVar45 * 2);
                        local_88 = (long ********)((long)local_88 + 2);
                      }
                    }
                    else {
                      sVar4 = *(short *)local_90;
                      pppppppplVar35 = local_90;
                      while (sVar4 != *(short *)((long)&local_190 + lVar45 * 2)) {
                        pppppppplVar35 = (long ********)((long)pppppppplVar35 + 2);
                        if (local_88 == pppppppplVar35) goto LAB_7101523220;
                        sVar4 = *(short *)pppppppplVar35;
                      }
                      if (pppppppplVar35 == local_88) goto LAB_7101523220;
                    }
                    lVar45 = lVar45 + 1;
                  } while (lVar45 < iVar8);
                }
              }
            }
          }
          lVar45 = *plVar1;
          lVar29 = *(long *)(lVar45 + 0x38);
          lVar36 = lVar29 + lVar15 * 0x60;
          lVar34 = lVar34 + 1;
        } while (lVar34 < (int)((ulong)(*(long *)(lVar36 + 0x18) - *(long *)(lVar36 + 0x10)) >> 6));
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < (int)((ulong)(*(long *)(lVar45 + 0x40) - *(long *)(lVar45 + 0x38)) >> 5) *
                      -0x55555555);
  }
  FUN_71033794c0((long ***)"FOT-RodinNTLGPro-EB32",1,(long ****)&local_90,ppppbVar22,pppplVar20,
                 param_6,param_7,param_8);
  if (local_90 != (long ********)0x0) {
    local_88 = local_90;
    FUN_710392eb40((ulong)local_90);
  }
  puVar10 = (undefined8 *)*DAT_71052c3858;
  FUN_710353da30((uint *)&local_90,0x2e14a7dc42);
  FUN_710353da30((uint *)&local_78,0x2f30b34968);
  FUN_710353da30(local_70,0x2f2e22dcfd);
  uVar23 = (uint)local_78;
  if ((uint)local_78 == 0xffffff) {
    ppppppppplVar44 = &local_90;
    ppppppppplVar42 = (long *********)local_70;
    FUN_7103739eb0(&local_190,(long *)*DAT_710593b3d8,ppppppppplVar44,(byte ****)ppppppppplVar42,
                   pppplVar20,param_6,param_7,param_8);
  }
  else {
    ppppppppplVar44 = &local_90;
    ppppppppplVar42 = &local_78;
    pppplVar20 = (long ****)local_70;
    FUN_710373a140(&local_190,(long *)*DAT_710593b3d8,ppppppppplVar44,(byte ****)ppppppppplVar42,
                   pppplVar20,param_6,param_7,param_8);
  }
  FUN_7103738660(puVar10,&local_190,ppppppppplVar44,(byte ****)ppppppppplVar42,pppplVar20,param_6,
                 param_7,param_8);
  FUN_7103737e70(&local_190,extraout_x1_03,ppppppppplVar44,(byte ****)ppppppppplVar42,pppplVar20,
                 param_6,param_7,param_8);
  if (local_70[0] != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,local_70[0],ppppppppplVar44,(byte ****)ppppppppplVar42,pppplVar20,
                   param_6,param_7,param_8);
    local_70[0] = 0xffffff;
  }
  if (uVar23 != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,uVar23,ppppppppplVar44,(byte ****)ppppppppplVar42,pppplVar20,
                   param_6,param_7,param_8);
    local_78 = (long ********)CONCAT44(local_78._4_4_,0xffffff);
  }
  if ((uint)local_90 != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,(uint)local_90,ppppppppplVar44,(byte ****)ppppppppplVar42,
                   pppplVar20,param_6,param_7,param_8);
  }
  return;
}

