// addr:      71019401b0
// offset:    0x19401b0
// name:      FUN_71019401b0
// mangled:   
// signature: undefined __cdecl FUN_71019401b0(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71019401b0(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  long ***ppplVar6;
  bool bVar7;
  bool bVar8;
  ushort uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined *puVar18;
  long ********pppppppplVar19;
  long **pplVar20;
  long *******ppppppplVar21;
  long *plVar22;
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
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
  undefined8 extraout_x1_28;
  undefined8 extraout_x1_29;
  undefined8 extraout_x1_30;
  undefined8 extraout_x1_31;
  undefined8 extraout_x1_32;
  undefined8 extraout_x1_33;
  undefined8 extraout_x1_34;
  undefined8 extraout_x1_35;
  undefined8 extraout_x1_36;
  long *********ppppppppplVar23;
  long ****pppplVar24;
  undefined *puVar25;
  long ****pppplVar26;
  undefined8 uVar27;
  char *pcVar28;
  byte ****ppppbVar29;
  undefined8 uVar30;
  char *pcVar31;
  long ****pppplVar32;
  undefined1 uVar33;
  int *piVar34;
  code *pcVar35;
  undefined8 *puVar36;
  long lVar37;
  uint uVar38;
  long lVar39;
  long *plVar40;
  long *********ppppppppplVar41;
  long lVar42;
  long *plVar43;
  long lVar44;
  uint uVar45;
  byte bVar46;
  long lVar47;
  long *plVar48;
  ulong uVar49;
  undefined1 auVar50 [16];
  long ***local_1d8;
  long ***local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  long ********local_1b8;
  char *local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  long alStack_190 [4];
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
  undefined **local_88;
  ulong local_80;
  
  bVar46 = *(byte *)(*(long *)(param_1 + 0x1e8) + 0x10);
  FUN_71032e5e60(*(long *)(DAT_710532f7c8 + 8),param_2,(long ****)param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7101af86a0(*(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8),1,param_3,param_4,param_5,param_6,
                 param_7,param_8);
  lVar47 = *(long *)(*(long *)(*DAT_7105329f98 + 0x20) + 8);
  uVar27 = extraout_x1;
  while( true ) {
    uVar10 = FUN_710323cb80(lVar47,uVar27,param_3,param_4,param_5,param_6,param_7,param_8);
    if ((uVar10 & 1) != 0) break;
    nn::os::SleepThread(1000000);
    uVar27 = extraout_x1_00;
  }
  lVar47 = *(long *)(DAT_710532f730 + 8);
  plVar22 = (long *)(param_1 + 0x1b8);
  uVar10 = FUN_71032a3bd0(*(long *)(lVar47 + 0x208),(uint)bVar46);
  if ((uVar10 & 0xff00000000000000) == 0x5200000000000000 && (uVar10 & 0xffffffffff) != 0) {
    uVar9 = FUN_71032a5750(*(long *)(lVar47 + 0x208),uVar10);
  }
  else {
    uVar9 = 0xffff;
  }
  uVar10 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar9);
  FUN_710323d580(plVar22,uVar10,(byte ****)&DAT_0000001a,param_4,param_5,param_6,param_7,param_8);
  lVar47 = *plVar22;
  FUN_710323beb0(lVar47,(ulong *)&DAT_7104545b70,(long)*(int *)(lVar47 + 0x70),
                 (ulong)*(uint *)(lVar47 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar47 = *plVar22;
  FUN_710323beb0(lVar47,(ulong *)&DAT_7104545b78,(long)*(int *)(lVar47 + 0x70),
                 (ulong)*(uint *)(lVar47 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar47 = *plVar22;
  pppplVar32 = (long ****)0x0;
  FUN_710323beb0(lVar47,(ulong *)&DAT_7104545c70,(long)*(int *)(lVar47 + 0x70),
                 (ulong)*(uint *)(lVar47 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  FUN_7103239920((uint *)&local_1c0,0x1b,0);
  FUN_7103239d20((uint *)&local_1c0,"%s_%02d.bntx");
  if (local_1c0._4_4_ == 0) {
    uVar10 = 0;
  }
  else {
    uVar38 = 0xffffffff;
    ppppppppplVar23 = &local_1b8;
    do {
      ppppppppplVar41 = (long *********)((long)ppppppppplVar23 + 1);
      bVar3 = *(byte *)ppppppppplVar23;
      uVar45 = bVar3 + 0x20;
      if (0x19 < bVar3 - 0x41) {
        uVar45 = (uint)bVar3;
      }
      uVar38 = (&DAT_7104754084)[(uVar45 ^ uVar38) & 0xff] ^ uVar38 >> 8;
      ppppppppplVar23 = ppppppppplVar41;
    } while (ppppppppplVar41 < (long *********)((long)&local_1b8 + (ulong)local_1c0._4_4_));
    uVar10 = (ulong)~uVar38;
  }
  local_1c0 = (undefined **)(uVar10 | ((long)(int)local_1c0._4_4_ & 0xffU) << 0x20);
  if ((long ********)local_1c0 != (long ********)0x0) {
    lVar47 = *plVar22;
    FUN_710323c4e0(lVar47,&local_1c0,(long *********)(long)*(int *)(lVar47 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar47 + 0x68),pppplVar32,param_6,param_7,param_8);
  }
  lVar47 = *plVar22;
  FUN_710323beb0(lVar47,(ulong *)&DAT_7104545850,(long)*(int *)(lVar47 + 0x70),
                 (ulong)*(uint *)(lVar47 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar47 = *plVar22;
  FUN_710323beb0(lVar47,(ulong *)&DAT_7104545858,(long)*(int *)(lVar47 + 0x70),
                 (ulong)*(uint *)(lVar47 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar47 = *plVar22;
  FUN_710323beb0(lVar47,(ulong *)&DAT_7104545868,(long)*(int *)(lVar47 + 0x70),
                 (ulong)*(uint *)(lVar47 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar47 = *plVar22;
  FUN_710323beb0(lVar47,(ulong *)&DAT_71045459a0,(long)*(int *)(lVar47 + 0x70),
                 (ulong)*(uint *)(lVar47 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  FUN_7101e04640(plVar22);
  FUN_7101df3910(plVar22);
  lVar47 = *plVar22;
  ppppppppplVar23 = (long *********)(long)*(int *)(lVar47 + 0x70);
  ppppbVar29 = (byte ****)(ulong)*(uint *)(lVar47 + 0x68);
  pppplVar32 = (long ****)0x0;
  FUN_710323beb0(lVar47,(ulong *)&DAT_71045459b0,(long)ppppppppplVar23,(ulong)ppppbVar29,
                 (long ****)0x0,param_6,param_7,param_8);
  FUN_7101dfb100(plVar22,extraout_x1_01,ppppppppplVar23,ppppbVar29,pppplVar32,param_6,param_7,
                 param_8);
  lVar47 = *plVar22;
  uVar27 = extraout_x1_02;
  while (uVar10 = FUN_710323cb80(lVar47,uVar27,ppppppppplVar23,ppppbVar29,pppplVar32,param_6,param_7
                                 ,param_8), (uVar10 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar27 = extraout_x1_03;
  }
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar23,ppppbVar29,pppplVar32,param_6,
                           param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1d8 = (long ***)((ulong)local_1d8 & 0xffffffff00000000);
      local_1c0 = (undefined **)&DAT_00000088;
      ppppppppplVar23 = (long *********)&local_1c0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d8);
      if (((uVar10 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar23,ppppbVar29,pppplVar32,
                                   param_6,param_7,param_8), puVar11 != (undefined8 *)0x0))
      goto LAB_71019404c4;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_71019404c4:
  uVar10 = *(ulong *)(param_1 + 0x1f0);
  *puVar11 = &PTR_FUN_71050b1db0;
  puVar11[1] = 0;
  puVar11[0xc] = 0;
  puVar11[0xd] = 0x1ffffffff;
  *(undefined1 *)(puVar11 + 0xb) = 0;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[0xf] = plVar22;
  *(undefined1 *)(puVar11 + 0xe) = 1;
  puVar11[9] = 0;
  puVar11[10] = 0;
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0x3c0,(long ****)ppppppppplVar23,ppppbVar29,pppplVar32,param_6,
                           param_7,param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1d8 = (long ***)((ulong)local_1d8 & 0xffffffff00000000);
      local_1c0 = (undefined **)&DAT_000003c0;
      pppplVar24 = (long ****)&local_1c0;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d8);
      if (((uVar13 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0x3c0,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,
                                   param_8), puVar12 != (undefined8 *)0x0)) goto LAB_7101940550;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_7101940550:
  pppplVar24 = (long ****)0x1ac;
  *puVar12 = plVar22;
  puVar12[1] = puVar12;
  *(undefined4 *)((long)puVar12 + 0x1dc) = 0;
  puVar12[4] = 0;
  puVar12[5] = 0;
  puVar12[0x3c] = 0xffffffff;
  *(undefined4 *)(puVar12 + 0x3d) = 0xffffffff;
  *(undefined1 *)((long)puVar12 + 0x1ec) = 0;
  puVar12[2] = 0;
  puVar12[3] = 0;
  memset(puVar12 + 6,0,0x1ac);
  puVar14 = (undefined8 *)
            FUN_710392e290(0x10,8,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  uVar27 = extraout_x1_04;
  if (puVar14 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1d8 = (long ***)((ulong)local_1d8 & 0xffffffff00000000);
      local_1c0 = (undefined **)&DAT_00000008;
      pppplVar24 = (long ****)&local_1c0;
      auVar50 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d8);
      uVar27 = auVar50._8_8_;
      if (((auVar50._0_8_ & 1) != 0) &&
         (puVar14 = (undefined8 *)
                    FUN_710392e290(0x10,8,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8),
         uVar27 = extraout_x1_05, puVar14 != (undefined8 *)0x0)) goto LAB_71019405dc;
    }
    puVar14 = (undefined8 *)0x0;
  }
LAB_71019405dc:
  FUN_7103773200(puVar14,uVar27,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  puVar12[0x3e] = puVar14;
  FUN_7103776290(puVar12 + 0x3f,extraout_x1_06,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,
                 param_8);
  puVar14 = puVar12 + 0x41;
  FUN_7101e9a580(puVar14,extraout_x1_07,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  puVar36 = puVar12 + 0x43;
  FUN_7103776290(puVar36,extraout_x1_08,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  puVar12[0x45] = &PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1d8 = (long ***)((ulong)local_1d8 & 0xffffffff00000000);
      local_1c0 = (undefined **)&SUB_00000018;
      pppplVar24 = (long ****)&local_1c0;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d8);
      if (((uVar13 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101940668;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101940668:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  puVar12[0x46] = puVar15;
  puVar12[0x47] = &PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  uVar27 = extraout_x1_09;
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1d8 = (long ***)((ulong)local_1d8 & 0xffffffff00000000);
      local_1c0 = (undefined **)&SUB_00000020;
      pppplVar24 = (long ****)&local_1c0;
      auVar50 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d8);
      uVar27 = auVar50._8_8_;
      if (((auVar50._0_8_ & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,
                                   param_8), uVar27 = extraout_x1_10, puVar15 != (undefined8 *)0x0))
      goto LAB_71019406d8;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_71019406d8:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  puVar12[0x48] = puVar15;
  FUN_7103776290(puVar12 + 0x49,uVar27,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  puVar12[0x4b] = &PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1d8 = (long ***)((ulong)local_1d8 & 0xffffffff00000000);
      local_1c0 = (undefined **)&SUB_00000018;
      pppplVar24 = (long ****)&local_1c0;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d8);
      if (((uVar13 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101940750;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101940750:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  puVar12[0x4c] = puVar15;
  puVar12[0x4d] = &PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  uVar27 = extraout_x1_11;
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1d8 = (long ***)((ulong)local_1d8 & 0xffffffff00000000);
      local_1c0 = (undefined **)&SUB_00000020;
      pppplVar24 = (long ****)&local_1c0;
      auVar50 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d8);
      uVar27 = auVar50._8_8_;
      if (((auVar50._0_8_ & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,
                                   param_8), uVar27 = extraout_x1_12, puVar15 != (undefined8 *)0x0))
      goto LAB_71019407c0;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_71019407c0:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  puVar12[0x4e] = puVar15;
  FUN_7103776290(puVar12 + 0x4f,uVar27,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  puVar12[0x51] = &PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1d8 = (long ***)((ulong)local_1d8 & 0xffffffff00000000);
      local_1c0 = (undefined **)&SUB_00000018;
      pppplVar24 = (long ****)&local_1c0;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d8);
      if (((uVar13 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101940838;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101940838:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  puVar12[0x52] = puVar15;
  puVar12[0x53] = &PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  uVar27 = extraout_x1_13;
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1d8 = (long ***)((ulong)local_1d8 & 0xffffffff00000000);
      local_1c0 = (undefined **)&SUB_00000020;
      pppplVar24 = (long ****)&local_1c0;
      auVar50 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d8);
      uVar27 = auVar50._8_8_;
      if (((auVar50._0_8_ & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,
                                   param_8), uVar27 = extraout_x1_14, puVar15 != (undefined8 *)0x0))
      goto LAB_71019408a8;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_71019408a8:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  puVar12[0x54] = puVar15;
  FUN_7103776290(puVar12 + 0x55,uVar27,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  puVar12[0x57] = &PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1d8 = (long ***)((ulong)local_1d8 & 0xffffffff00000000);
      local_1c0 = (undefined **)&SUB_00000018;
      pppplVar24 = (long ****)&local_1c0;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d8);
      if (((uVar13 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101940920;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101940920:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  puVar12[0x58] = puVar15;
  puVar12[0x59] = &PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  uVar27 = extraout_x1_15;
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1d8 = (long ***)((ulong)local_1d8 & 0xffffffff00000000);
      local_1c0 = (undefined **)&SUB_00000020;
      pppplVar24 = (long ****)&local_1c0;
      auVar50 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d8);
      uVar27 = auVar50._8_8_;
      if (((auVar50._0_8_ & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,
                                   param_8), uVar27 = extraout_x1_16, puVar15 != (undefined8 *)0x0))
      goto LAB_7101940990;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101940990:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  puVar12[0x5a] = puVar15;
  FUN_7101e96160(puVar12 + 0x5b,uVar27,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x60,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  uVar27 = extraout_x1_17;
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1d8 = (long ***)((ulong)local_1d8 & 0xffffffff00000000);
      local_1c0 = (undefined **)&DAT_00000060;
      pppplVar24 = (long ****)&local_1c0;
      auVar50 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d8);
      uVar27 = auVar50._8_8_;
      if (((auVar50._0_8_ & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x60,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,
                                   param_8), uVar27 = extraout_x1_18, puVar15 != (undefined8 *)0x0))
      goto LAB_7101940a04;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101940a04:
  puVar15[10] = 0;
  puVar15[0xb] = 0;
  puVar15[8] = 0;
  puVar15[9] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[4] = 0;
  puVar15[5] = 0;
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  FUN_7103776290(puVar15,uVar27,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  puVar15[2] = &PTR_FUN_710523d9a8;
  puVar16 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  if (puVar16 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1d8 = (long ***)((ulong)local_1d8 & 0xffffffff00000000);
      local_1c0 = (undefined **)&SUB_00000020;
      pppplVar24 = (long ****)&local_1c0;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d8);
      if (((uVar13 & 1) != 0) &&
         (puVar16 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,
                                   param_8), puVar16 != (undefined8 *)0x0)) goto LAB_7101940a84;
    }
    puVar16 = (undefined8 *)0x0;
  }
LAB_7101940a84:
  puVar16[2] = 0;
  puVar16[3] = 0;
  *puVar16 = 0;
  puVar16[1] = 0;
  puVar15[3] = puVar16;
  puVar15[4] = &PTR_FUN_710523d9a8;
  puVar16 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  if (puVar16 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1d8 = (long ***)((ulong)local_1d8 & 0xffffffff00000000);
      local_1c0 = (undefined **)&SUB_00000020;
      pppplVar24 = (long ****)&local_1c0;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d8);
      if (((uVar13 & 1) != 0) &&
         (puVar16 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,
                                   param_8), puVar16 != (undefined8 *)0x0)) goto LAB_7101940aec;
    }
    puVar16 = (undefined8 *)0x0;
  }
LAB_7101940aec:
  puVar16[2] = 0;
  puVar16[3] = 0;
  *puVar16 = 0;
  puVar16[1] = 0;
  puVar15[5] = puVar16;
  puVar15[6] = &PTR_FUN_710523d9a8;
  puVar16 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  if (puVar16 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1d8 = (long ***)((ulong)local_1d8 & 0xffffffff00000000);
      local_1c0 = (undefined **)&SUB_00000020;
      pppplVar24 = (long ****)&local_1c0;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d8);
      if (((uVar13 & 1) != 0) &&
         (puVar16 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,
                                   param_8), puVar16 != (undefined8 *)0x0)) goto LAB_7101940b54;
    }
    puVar16 = (undefined8 *)0x0;
  }
LAB_7101940b54:
  puVar16[2] = 0;
  puVar16[3] = 0;
  *puVar16 = 0;
  puVar16[1] = 0;
  puVar15[7] = puVar16;
  puVar15[8] = 0;
  puVar15[9] = 0;
  puVar15[10] = &PTR_FUN_710523d9e8;
  puVar16 = (undefined8 *)
            FUN_710392e290(0x10,0x18,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  uVar27 = extraout_x1_19;
  if (puVar16 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1d8 = (long ***)((ulong)local_1d8 & 0xffffffff00000000);
      local_1c0 = (undefined **)&SUB_00000018;
      pppplVar24 = (long ****)&local_1c0;
      auVar50 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d8);
      uVar27 = auVar50._8_8_;
      if (((auVar50._0_8_ & 1) != 0) &&
         (puVar16 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,
                                   param_8), uVar27 = extraout_x1_20, puVar16 != (undefined8 *)0x0))
      goto LAB_7101940bc0;
    }
    puVar16 = (undefined8 *)0x0;
  }
LAB_7101940bc0:
  *(undefined1 *)(puVar16 + 2) = 1;
  *puVar16 = 0;
  puVar16[1] = 0;
  puVar15[0xb] = puVar16;
  puVar12[0x5d] = puVar15;
  *(undefined2 *)(puVar12 + 0x5e) = 0;
  *(undefined1 *)((long)puVar12 + 0x2f2) = 0;
  *(undefined8 *)((long)puVar12 + 0x2f4) = 0;
  *(undefined8 *)((long)puVar12 + 0x2fc) = 0x3f80000000000000;
  FUN_7101e94040(puVar12 + 0x61,uVar27,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  uVar27 = extraout_x1_21;
  if (puVar15 == (undefined8 *)0x0) {
    local_1d8 = (long ***)((ulong)local_1d8 & 0xffffffff00000000);
    local_1c0 = (undefined **)&SUB_00000018;
    pppplVar24 = (long ****)&local_1c0;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d8);
    puVar15 = (undefined8 *)
              FUN_710392e290(0x10,0x18,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
    uVar27 = extraout_x1_22;
  }
  *puVar15 = 0;
  FUN_7103776290(puVar15 + 1,uVar27,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  puVar12[99] = puVar15;
  *(undefined4 *)(puVar12 + 100) = 0;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,8,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  uVar27 = extraout_x1_23;
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1d8 = (long ***)((ulong)local_1d8 & 0xffffffff00000000);
      local_1c0 = (undefined **)&DAT_00000008;
      pppplVar24 = (long ****)&local_1c0;
      auVar50 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d8);
      uVar27 = auVar50._8_8_;
      if (((auVar50._0_8_ & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,8,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8),
         uVar27 = extraout_x1_24, puVar15 != (undefined8 *)0x0)) goto LAB_7101940cb4;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101940cb4:
  FUN_7103773200(puVar15,uVar27,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  puVar12[0x65] = puVar15;
  FUN_7103776290(puVar12 + 0x66,extraout_x1_25,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,
                 param_8);
  puVar12[0x68] = 0;
  *(undefined4 *)(puVar12 + 0x69) = 0;
  *(undefined2 *)(puVar12 + 0x6a) = 0xffff;
  *(undefined1 *)((long)puVar12 + 0x352) = 0;
  *(undefined8 *)((long)puVar12 + 0x354) = 0;
  *(undefined8 *)((long)puVar12 + 0x35c) = 0;
  *(undefined2 *)((long)puVar12 + 0x354) = 0xffff;
  *(undefined2 *)(puVar12 + 0x6b) = 0xffff;
  *(undefined2 *)((long)puVar12 + 0x35c) = 0xffff;
  *(undefined2 *)(puVar12 + 0x6c) = 0xffff;
  *(undefined1 *)((long)puVar12 + 0x356) = 0;
  *(undefined1 *)((long)puVar12 + 0x35a) = 0;
  *(undefined1 *)((long)puVar12 + 0x35e) = 0;
  *(undefined1 *)((long)puVar12 + 0x362) = 0;
  *(undefined2 *)(puVar12 + 0x70) = 0;
  puVar12[0x6f] = 0;
  puVar12[0x6e] = 0;
  puVar12[0x6d] = 0;
  puVar12[0x71] = puVar12 + 0x71;
  puVar12[0x72] = puVar12 + 0x71;
  puVar12[0x73] = 0;
  *(undefined1 *)(puVar12 + 0x74) = 0;
  puVar12[0x75] = 0x52ffff0000000000;
  puVar12[0x76] = 0;
  puVar12[0x77] = uVar10;
  lVar47 = *DAT_7105329f98;
  uVar10 = FUN_71032a44b0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x208),uVar10);
  plVar17 = (long *)FUN_710392e290(0x10,0x10,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,
                                   param_8);
  if (plVar17 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1d8 = (long ***)((ulong)local_1d8 & 0xffffffff00000000);
      local_1c0 = (undefined **)&DAT_00000010;
      pppplVar24 = (long ****)&local_1c0;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d8);
      if (((uVar13 & 1) != 0) &&
         (plVar17 = (long *)FUN_710392e290(0x10,0x10,pppplVar24,ppppbVar29,pppplVar32,param_6,
                                           param_7,param_8), plVar17 != (long *)0x0))
      goto LAB_7101940dc0;
    }
    plVar17 = (long *)0x0;
  }
LAB_7101940dc0:
  *plVar17 = lVar47 + 0x38;
  *(char *)(plVar17 + 1) = (char)uVar10;
  uVar10 = puVar12[0x76];
  puVar12[0x76] = plVar17;
  if (uVar10 != 0) {
    FUN_710392eb40(uVar10);
    plVar17 = (long *)puVar12[0x76];
  }
  if (((*(char *)(*(long *)(*plVar17 + 8) + 0x388) == '\0') || (0xd < (ulong)*(byte *)(plVar17 + 1))
      ) || (lVar47 = *(long *)(*(long *)(*plVar17 + 8) + (ulong)*(byte *)(plVar17 + 1) * 8 + 8),
           lVar47 == 0)) {
    puVar15 = (undefined8 *)
              FUN_710392e290(0x10,0x100,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
    uVar27 = extraout_x1_28;
    if (puVar15 == (undefined8 *)0x0) {
      local_1d8 = (long ***)((ulong)local_1d8 & 0xffffffff00000000);
      local_1c0 = (undefined **)&DAT_00000100;
      pppplVar24 = (long ****)&local_1c0;
      (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d8);
      puVar15 = (undefined8 *)
                FUN_710392e290(0x10,0x100,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
      uVar27 = extraout_x1_29;
    }
    *puVar15 = puVar14;
    puVar15[1] = puVar36;
    puVar15[2] = 0;
    *(undefined1 *)(puVar15 + 3) = 0;
    puVar15[8] = 0;
    puVar15[0xe] = 0;
    *(undefined1 *)(puVar15 + 0x10) = 0;
    *(undefined1 *)((long)puVar15 + 0x84) = 0;
    *(undefined1 *)((long)puVar15 + 0x8c) = 0;
    *(undefined1 *)((long)puVar15 + 0x94) = 0;
    *(undefined1 *)((long)puVar15 + 0x9c) = 0;
    *(undefined8 *)((long)puVar15 + 0xdc) = 0;
    *(undefined8 *)((long)puVar15 + 0xd4) = 0;
    *(undefined8 *)((long)puVar15 + 0xcc) = 0;
    *(undefined8 *)((long)puVar15 + 0xc4) = 0;
    *(undefined8 *)((long)puVar15 + 0xbc) = 0;
    *(undefined8 *)((long)puVar15 + 0xb4) = 0;
    *(undefined8 *)((long)puVar15 + 0xac) = 0;
    *(undefined8 *)((long)puVar15 + 0xa4) = 0;
    puVar15[0x1d] = 0;
    puVar15[0x1e] = 0;
    uVar10 = puVar12[0x6f];
    puVar12[0x6f] = puVar15;
    if (uVar10 != 0) {
      uVar13 = *(ulong *)(uVar10 + 0xf0);
      *(undefined8 *)(uVar10 + 0xf0) = 0;
      if (uVar13 != 0) {
        *(undefined ***)(uVar13 + 8) = &PTR_FUN_7104f73d50;
        if (((*(long *)(uVar13 + 0x10) != 0) && (DAT_7106dd53a8 == '\x01')) &&
           (*(int *)(uVar13 + 0x18) == DAT_7106dd53ac)) {
          piVar34 = (int *)(*(long *)(uVar13 + 0x10) + 0x38);
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar34,0x10);
            if (bVar7) {
              *piVar34 = *piVar34 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        goto LAB_7101940ff8;
      }
      goto LAB_7101941004;
    }
  }
  else {
    puVar15 = (undefined8 *)
              FUN_710392e290(0x10,0x100,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
    uVar27 = extraout_x1_26;
    if (puVar15 == (undefined8 *)0x0) {
      local_1d8 = (long ***)((ulong)local_1d8 & 0xffffffff00000000);
      local_1c0 = (undefined **)&DAT_00000100;
      pppplVar24 = (long ****)&local_1c0;
      (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d8);
      puVar15 = (undefined8 *)
                FUN_710392e290(0x10,0x100,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
      uVar27 = extraout_x1_27;
    }
    *puVar15 = puVar14;
    puVar15[1] = puVar36;
    puVar15[2] = lVar47 + 8;
    *(undefined1 *)(puVar15 + 3) = 0;
    puVar15[8] = 0;
    puVar15[0xe] = 0;
    *(undefined1 *)(puVar15 + 0x10) = 0;
    *(undefined1 *)((long)puVar15 + 0x84) = 0;
    *(undefined1 *)((long)puVar15 + 0x8c) = 0;
    *(undefined1 *)((long)puVar15 + 0x94) = 0;
    *(undefined1 *)((long)puVar15 + 0x9c) = 0;
    *(undefined8 *)((long)puVar15 + 0xdc) = 0;
    *(undefined8 *)((long)puVar15 + 0xd4) = 0;
    *(undefined8 *)((long)puVar15 + 0xcc) = 0;
    *(undefined8 *)((long)puVar15 + 0xc4) = 0;
    *(undefined8 *)((long)puVar15 + 0xbc) = 0;
    *(undefined8 *)((long)puVar15 + 0xb4) = 0;
    *(undefined8 *)((long)puVar15 + 0xac) = 0;
    *(undefined8 *)((long)puVar15 + 0xa4) = 0;
    puVar15[0x1d] = 0;
    puVar15[0x1e] = 0;
    uVar10 = puVar12[0x6f];
    puVar12[0x6f] = puVar15;
    if (uVar10 != 0) {
      uVar13 = *(ulong *)(uVar10 + 0xf0);
      *(undefined8 *)(uVar10 + 0xf0) = 0;
      if (uVar13 != 0) {
        *(undefined ***)(uVar13 + 8) = &PTR_FUN_7104f73d50;
        if (((*(long *)(uVar13 + 0x10) != 0) && (DAT_7106dd53a8 == '\x01')) &&
           (*(int *)(uVar13 + 0x18) == DAT_7106dd53ac)) {
          piVar34 = (int *)(*(long *)(uVar13 + 0x10) + 0x38);
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar34,0x10);
            if (bVar7) {
              *piVar34 = *piVar34 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
LAB_7101940ff8:
        *(undefined8 *)(uVar13 + 0x10) = 0;
        *(undefined1 *)(uVar13 + 0x20) = 0;
        FUN_710392eb40(uVar13);
      }
LAB_7101941004:
      plVar17 = *(long **)(uVar10 + 0x70);
      if ((long *)(uVar10 + 0x50) == plVar17) {
        pcVar35 = *(code **)(*plVar17 + 0x20);
LAB_710194102c:
        (*pcVar35)();
      }
      else if (plVar17 != (long *)0x0) {
        pcVar35 = *(code **)(*plVar17 + 0x28);
        goto LAB_710194102c;
      }
      plVar17 = *(long **)(uVar10 + 0x40);
      if ((long *)(uVar10 + 0x20) == plVar17) {
        pcVar35 = *(code **)(*plVar17 + 0x20);
LAB_7101941058:
        (*pcVar35)();
      }
      else if (plVar17 != (long *)0x0) {
        pcVar35 = *(code **)(*plVar17 + 0x28);
        goto LAB_7101941058;
      }
      FUN_710392eb40(uVar10);
      uVar27 = extraout_x1_30;
    }
  }
  puVar12[8] = FUN_7101e5a080;
  puVar12[9] = 0;
  puVar12[10] = FUN_7101e5a100;
  puVar12[0xb] = 0;
  puVar12[0xe] = FUN_7101e5a560;
  puVar12[0xf] = 0;
  puVar12[0x10] = FUN_7101e5abc0;
  puVar12[0x11] = 0;
  puVar12[0x14] = FUN_7101e5b030;
  puVar12[0x15] = 0;
  puVar12[0x16] = FUN_7101e5b250;
  puVar12[0x17] = 0;
  puVar12[0x1a] = FUN_7101e5b7d0;
  puVar12[0x1b] = 0;
  puVar12[0x1c] = FUN_7101e5b9e0;
  puVar12[0x1d] = 0;
  puVar12[0x20] = FUN_7101e5c3d0;
  puVar12[0x21] = 0;
  puVar12[0x22] = FUN_7101e5c8a0;
  puVar12[0x23] = 0;
  puVar12[0x26] = FUN_7101e5cee0;
  puVar12[0x27] = 0;
  puVar12[0x28] = FUN_7101e5cfe0;
  puVar12[0x29] = 0;
  puVar12[0x2c] = FUN_7101e5d730;
  puVar12[0x2d] = 0;
  puVar12[0xc] = FUN_7101e5a240;
  puVar12[0xd] = 0;
  puVar12[0x2e] = FUN_7101e5d800;
  puVar12[0x2f] = 0;
  puVar12[0x12] = FUN_7101e5aee0;
  puVar12[0x13] = 0;
  puVar12[0x18] = FUN_7101e5b620;
  puVar12[0x19] = 0;
  puVar12[0x1e] = FUN_7101e5bec0;
  puVar12[0x1f] = 0;
  puVar12[0x24] = FUN_7101e5cdb0;
  puVar12[0x25] = 0;
  puVar12[6] = FUN_7101e5a070;
  puVar12[7] = 0;
  puVar12[0x2a] = FUN_7101e5d2d0;
  puVar12[0x2b] = 0;
  puVar12[0x30] = FUN_7101e5a070;
  puVar12[0x31] = 0;
  if (0x12 < *(uint *)((long)puVar12 + 0x1dc)) goto LAB_71019428fc;
  *(undefined4 *)((long)puVar12 + (long)(int)*(uint *)((long)puVar12 + 0x1dc) * 4 + 400) = 0;
  puVar11[0x10] = puVar12;
  puVar11[2] = &DAT_7105333600;
  *(undefined4 *)(puVar11 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar11 + 0x6c) = DAT_7105333664;
  do {
    uVar38 = DAT_7105333650;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar7) {
      DAT_7105333650 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0' || (uVar38 & 1) != 0);
  puVar11[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar11;
  FUN_71032caea0((long)puVar11,uVar27,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  lVar47 = *(long *)(param_1 + 0x1c0);
  *(undefined8 **)(param_1 + 0x1c0) = puVar11;
  if (lVar47 != 0) {
    FUN_71032cad20(lVar47);
    puVar11 = *(undefined8 **)(param_1 + 0x1c0);
  }
  puVar12 = (undefined8 *)puVar11[0x10];
  FUN_71032cbf30(puVar12 + 0x3e,*(long *)*puVar12,(ulong *)&DAT_7104545b70,(byte ****)0x1,pppplVar32
                 ,param_6,param_7,param_8);
  lVar47 = *(long *)puVar12[0x3e];
  puVar11 = puVar12 + 0x3f;
  if (puVar11 != (undefined8 *)(lVar47 + 8)) {
    *(undefined8 *)puVar12[0x40] = **(undefined8 **)(lVar47 + 0x10);
    *(undefined8 *)(puVar12[0x40] + 8) = *(undefined8 *)(*(long *)(lVar47 + 0x10) + 8);
    lVar39 = *(long *)(lVar47 + 0x10);
    lVar47 = puVar12[0x40];
    if (lVar47 != lVar39) {
      **(undefined8 **)(lVar47 + 0x18) = **(undefined8 **)(lVar39 + 0x18);
      *(undefined8 *)(*(long *)(lVar47 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar39 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar47 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar39 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar47 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar39 + 0x18) + 0x18);
    }
  }
  lVar47 = **(long **)puVar12[0x3e];
  *(undefined4 *)(*(long *)(lVar47 + 0x600) + 0x18) = 0x10;
  *(undefined4 *)(*(long *)(lVar47 + 0x600) + 0x1c) = 0xff0000f;
  *(undefined4 *)(*(long *)(lVar47 + 0x600) + 0x10) = 0x20;
  *(undefined4 *)(*(long *)(lVar47 + 0x600) + 0x14) = 0x40;
  pppplVar24 = (long ****)puVar12[0x77];
  puVar14 = puVar12 + 0x65;
  puVar25 = &DAT_7104545b78;
  ppppbVar29 = (byte ****)0x1;
  FUN_71032cbf30(puVar14,*(long *)*puVar12,(ulong *)&DAT_7104545b78,(byte ****)0x1,pppplVar32,
                 param_6,param_7,param_8);
  puVar36 = *(undefined8 **)puVar12[0x65];
  if (puVar14 != puVar36) {
    *(undefined8 *)puVar12[0x67] = *(undefined8 *)puVar36[2];
    *(undefined8 *)(puVar12[0x67] + 8) = *(undefined8 *)(puVar36[2] + 8);
    lVar39 = puVar36[2];
    lVar47 = puVar12[0x67];
    if (lVar47 != lVar39) {
      **(undefined8 **)(lVar47 + 0x18) = **(undefined8 **)(lVar39 + 0x18);
      *(undefined8 *)(*(long *)(lVar47 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar39 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar47 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar39 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar47 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar39 + 0x18) + 0x18);
    }
  }
  lVar39 = *(long *)(DAT_710532f730 + 8);
  FUN_7103776910(&local_1d8,(long)(puVar12 + 0x66),(long ****)"set_txt_schoolstyle",puVar25,
                 ppppbVar29,pppplVar32,param_6,param_7,param_8);
  uVar10 = FUN_71032a44b0(*(long *)(lVar39 + 0x208),(ulong)pppplVar24);
  lVar47 = *(long *)(DAT_710532f730 + 8);
  puVar18 = (undefined *)FUN_71032a3bd0(*(long *)(lVar47 + 0x208),(uint)uVar10 & 0xff);
  if ((((ulong)puVar18 & 0xff00000000000000) == 0x5200000000000000) &&
     (puVar25 = puVar18, ((ulong)puVar18 & 0xffffffffff) != 0)) {
    FUN_71032a4e40((uint *)&local_1c0,*(long *)(lVar47 + 0x208),(ulong)puVar18);
  }
  else {
    puVar18 = puVar25;
    local_1b8 = (long ********)((ulong)local_1b8 & 0xffffffffffffff00);
    local_1c0 = (undefined **)0x0;
  }
  FUN_710377a120((long)&local_1d8,(char *)&local_1b8,puVar18,ppppbVar29,pppplVar32,param_6,param_7,
                 param_8);
  ppplVar6 = local_1d0;
  local_1d8 = (long ***)&PTR_FUN_710523d9a8;
  local_1d0 = (long ***)0x0;
  if (ppplVar6 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar6);
  }
  uVar10 = FUN_71032a3d90(*(long *)(*(long *)(lVar39 + 0x208) + 8),0x1530ff0e86);
  if (((uVar10 & 0xff00000000000000) == 0x5200000000000000) && ((uVar10 & 0xffffffffff) != 0)) {
    if (((((ulong)pppplVar24 & 0xff00000000000000) == 0x5200000000000000) &&
        (((ulong)pppplVar24 & 0xffffffffff) != 0)) &&
       ((((ulong)pppplVar24 ^ uVar10) & 0xffffffffff) == 0)) goto LAB_71019415f0;
LAB_7101941488:
    local_1b8 = (long ********)0x0;
    local_1b0 = (char *)0x0;
    local_1c0 = (undefined **)0x0;
    pppplVar26 = pppplVar24;
    FUN_71032a3e90((long *)&local_1d8,*(long *)(lVar39 + 0x208),(ulong)pppplVar24);
    FUN_71032a5330((long *)&local_1d8,&local_1c0,pppplVar26,ppppbVar29,pppplVar32,param_6,param_7,
                   param_8);
    local_1d0 = (long ***)0x0;
    uStack_1c8 = 0;
    local_1d8 = (long ***)0x0;
    pppplVar26 = pppplVar24;
    FUN_71032a40d0((long *)&local_88,*(long *)(lVar39 + 0x208),(ulong)pppplVar24);
    FUN_71032a5330((long *)&local_88,(ulong *)&local_1d8,pppplVar26,ppppbVar29,pppplVar32,param_6,
                   param_7,param_8);
    uVar13 = ((long)local_1b8 - (long)local_1c0 >> 3) * -0x71c71c71c71c71c7;
    uVar10 = ((long)local_1d0 - (long)local_1d8 >> 3) * -0x71c71c71c71c71c7;
    if (uVar10 <= uVar13) {
      uVar10 = uVar13;
    }
    pcVar28 = "subwindow_wide";
    if (uVar10 < 4) {
      pcVar28 = "subwindow_narrow";
    }
    FUN_7103778300(0x3f800000,puVar12[0x67],(long)pcVar28);
    FUN_7101e5e730((long)puVar14,&local_1c0,"item_up_%d",(long ****)"set_txt_up_item_%02d",
                   pppplVar32,param_6,param_7,param_8);
    FUN_7101e5e730((long)puVar14,(long *)&local_1d8,"item_down_%d",
                   (long ****)"set_txt_down_item_%02d",pppplVar32,param_6,param_7,param_8);
    bVar7 = FUN_71032a50f0(*(long *)(lVar39 + 0x208),(ulong)pppplVar24);
    bVar8 = FUN_71032a5210(*(long *)(lVar39 + 0x208),(ulong)pppplVar24);
    pcVar28 = "caption_largeup";
    if (!bVar7) {
      pcVar28 = "caption_up";
    }
    FUN_7103778300(0x3f800000,puVar12[0x67],(long)pcVar28);
    pcVar28 = "caption_largedown";
    if (!bVar8) {
      pcVar28 = "caption_down";
    }
    FUN_7103778300(0x3f800000,puVar12[0x67],(long)pcVar28);
    if (local_1d8 != (long ***)0x0) {
      local_1d0 = local_1d8;
      FUN_710392eb40((ulong)local_1d8);
    }
    if ((long ********)local_1c0 != (long ********)0x0) {
      local_1b8 = (long ********)local_1c0;
      pppppppplVar19 = (long ********)local_1c0;
      goto LAB_710194163c;
    }
  }
  else {
    if ((((ulong)pppplVar24 & 0xff00000000000000) == 0x5200000000000000) &&
       (((ulong)pppplVar24 & 0xffffffffff) != 0)) goto LAB_7101941488;
LAB_71019415f0:
    FUN_7103778300(0x3f800000,puVar12[0x67],0x710438d109);
    FUN_7103776910(&local_1c0,(long)(puVar12 + 0x66),(long ****)"set_txt_unlearn",puVar18,ppppbVar29
                   ,pppplVar32,param_6,param_7,param_8);
    FUN_710377a120((long)&local_1c0,"cam_school_unlearn",puVar18,ppppbVar29,pppplVar32,param_6,
                   param_7,param_8);
    pppppppplVar19 = local_1b8;
    local_1c0 = &PTR_FUN_710523d9a8;
    local_1b8 = (long ********)0x0;
    if (pppppppplVar19 != (long ********)0x0) {
LAB_710194163c:
      FUN_710392eb40((ulong)pppppppplVar19);
    }
  }
  *(undefined4 *)(puVar12 + 0x69) = 3;
  plVar17 = puVar12 + 0x68;
  ppppbVar29 = (byte ****)&local_1c0;
  local_1c0 = (undefined **)0x0;
  local_1b0 = (char *)CONCAT17(local_1b0._7_1_,0x1000100000001);
  local_1a8 = &DAT_41f0000000000000;
  local_1a0 = 0;
  local_170 = (long *)0x0;
  local_140 = (long *)0x0;
  local_110 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_b0 = (long *)0x0;
  local_a0 = 0;
  local_1b8 = (long ********)&DAT_00010101;
  FUN_7103770b30(plVar17,puVar11,(long ****)"selector_keyhelp",ppppbVar29,pppplVar32,param_6,param_7
                 ,param_8);
  FUN_71037717d0(plVar17,3,"btn_keyhelp_skill",ppppbVar29,pppplVar32,param_6,param_7,param_8);
  local_1d8 = (long ***)0x19b197f89a;
  FUN_7103772070(puVar12[0x68],3,&local_1d8,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  lVar47 = puVar12[0x68];
  lVar39 = *(long *)(lVar47 + 0x1b8);
  if (lVar39 != 0) {
    lVar37 = lVar47 + 0x1b8;
    lVar42 = lVar37;
    lVar44 = lVar39;
    do {
      if (2 < *(int *)(lVar44 + 0x20)) {
        lVar42 = lVar44;
      }
      lVar44 = *(long *)(lVar44 + (ulong)(*(int *)(lVar44 + 0x20) < 3) * 8);
    } while (lVar44 != 0);
    if (((lVar42 != lVar37) && (*(int *)(lVar42 + 0x20) < 4)) &&
       (plVar48 = *(long **)(lVar42 + 0x28), plVar48 != (long *)0x0)) {
      (**(code **)(*plVar48 + 0x208))(plVar48,1);
      (**(code **)(*plVar48 + 0x388))(plVar48,0,0);
      lVar47 = *plVar17;
      lVar39 = *(long *)(lVar47 + 0x1b8);
      lVar37 = lVar47 + 0x1b8;
    }
    lVar42 = lVar37;
    if (lVar39 != 0) {
      do {
        if (2 < *(int *)(lVar39 + 0x20)) {
          lVar42 = lVar39;
        }
        lVar39 = *(long *)(lVar39 + (ulong)(*(int *)(lVar39 + 0x20) < 3) * 8);
      } while (lVar39 != 0);
      if (((lVar42 != lVar37) && (*(int *)(lVar42 + 0x20) < 4)) &&
         (plVar48 = *(long **)(lVar42 + 0x28), plVar48 != (long *)0x0)) {
        (**(code **)(*plVar48 + 0x1f8))(plVar48,1);
        (**(code **)(*plVar48 + 0x388))(plVar48,0,0);
        lVar47 = *plVar17;
      }
    }
  }
  uVar27 = 6;
  uVar30 = 0;
  FUN_7103771930(lVar47,3,(long ****)0x6,(byte ****)0x0,pppplVar32,param_6,param_7,param_8);
  FUN_7103776640(&local_1d8,(long)puVar11,(byte ****)"btn_keyhelp_skill",uVar27,uVar30,pppplVar32,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_88,(long)&local_1d8,(long ****)"set_txt_icon",uVar27,uVar30,pppplVar32,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_88,"cam_school_detail_guide",uVar27,uVar30,pppplVar32,param_6,param_7,
                 param_8);
  uVar10 = local_80;
  local_88 = &PTR_FUN_710523d9a8;
  local_80 = 0;
  if (uVar10 != 0) {
    FUN_710392eb40(uVar10);
  }
  FUN_7103776910(&local_88,(long)&local_1d8,(long ****)"set_txt_help",uVar27,uVar30,pppplVar32,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_88,"cam_school_detail",uVar27,uVar30,pppplVar32,param_6,param_7,
                 param_8);
  uVar10 = local_80;
  local_88 = &PTR_FUN_710523d9a8;
  local_80 = 0;
  if (uVar10 != 0) {
    FUN_710392eb40(uVar10);
  }
  plVar48 = (long *)puVar12[0x68];
  plVar43 = (long *)plVar48[0x37];
  if (plVar43 != (long *)0x0) {
    iVar2 = *(int *)(puVar12 + 0x69);
    plVar40 = plVar48 + 0x37;
    do {
      if (iVar2 <= (int)plVar43[4]) {
        plVar40 = plVar43;
      }
      plVar43 = (long *)plVar43[(int)plVar43[4] < iVar2];
    } while (plVar43 != (long *)0x0);
    if (((plVar40 != plVar48 + 0x37) && ((int)plVar40[4] <= iVar2)) &&
       (plVar43 = (long *)plVar40[5], plVar43 != (long *)0x0)) {
      (**(code **)(*plVar43 + 0x208))(plVar43,0);
      uVar27 = 0;
      (**(code **)(*plVar43 + 0x388))(plVar43,1);
      plVar48 = (long *)*plVar17;
    }
  }
  (**(code **)(*plVar48 + 0x60))(plVar48,0);
  ppplVar6 = local_1d0;
  local_1d8 = (long ***)&PTR_FUN_710523d988;
  local_1d0 = (long ***)0x0;
  if (ppplVar6 != (long ***)0x0) {
    pplVar20 = ppplVar6[3];
    ppplVar6[2] = (long **)&PTR_FUN_710523d9a8;
    ppplVar6[3] = (long **)0x0;
    if (pplVar20 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar20);
    }
    FUN_710392eb40((ulong)ppplVar6);
  }
  if (alStack_d0 == local_b0) {
    pcVar35 = *(code **)(*local_b0 + 0x20);
LAB_710194195c:
    (*pcVar35)();
  }
  else if (local_b0 != (long *)0x0) {
    pcVar35 = *(code **)(*local_b0 + 0x28);
    goto LAB_710194195c;
  }
  if (alStack_100 == local_e0) {
    pcVar35 = *(code **)(*local_e0 + 0x20);
LAB_710194198c:
    (*pcVar35)();
  }
  else if (local_e0 != (long *)0x0) {
    pcVar35 = *(code **)(*local_e0 + 0x28);
    goto LAB_710194198c;
  }
  if (alStack_130 == local_110) {
    pcVar35 = *(code **)(*local_110 + 0x20);
LAB_71019419bc:
    (*pcVar35)();
  }
  else if (local_110 != (long *)0x0) {
    pcVar35 = *(code **)(*local_110 + 0x28);
    goto LAB_71019419bc;
  }
  if (alStack_160 == local_140) {
    pcVar35 = *(code **)(*local_140 + 0x20);
LAB_71019419ec:
    (*pcVar35)();
  }
  else if (local_140 != (long *)0x0) {
    pcVar35 = *(code **)(*local_140 + 0x28);
    goto LAB_71019419ec;
  }
  if (alStack_190 == local_170) {
    pcVar35 = *(code **)(*local_170 + 0x20);
LAB_7101941a1c:
    (*pcVar35)();
  }
  else if (local_170 != (long *)0x0) {
    pcVar35 = *(code **)(*local_170 + 0x28);
    goto LAB_7101941a1c;
  }
  FUN_7103776640(&local_1c0,(long)puVar11,(byte ****)"header_band",uVar27,uVar30,pppplVar32,param_6,
                 param_7,param_8);
  FUN_7101e95f40((long)&local_1c0,'\x01',(ulong)*(byte *)(puVar12[0x76] + 8),uVar30,pppplVar32,
                 param_6,param_7,param_8);
  pppppppplVar19 = local_1b8;
  local_1c0 = &PTR_FUN_710523d988;
  local_1b8 = (long ********)0x0;
  if (pppppppplVar19 != (long ********)0x0) {
    ppppppplVar21 = pppppppplVar19[3];
    pppppppplVar19[2] = (long *******)&PTR_FUN_710523d9a8;
    pppppppplVar19[3] = (long *******)0x0;
    if (ppppppplVar21 != (long *******)0x0) {
      FUN_710392eb40((ulong)ppppppplVar21);
    }
    FUN_710392eb40((ulong)pppppppplVar19);
  }
  local_1c0 = (undefined **)0x7104401b7d;
  local_1b8 = (long ********)0x71043f0eea;
  local_1b0 = "set_parts_slot_%02d";
  local_1a8 = (undefined1 *)CONCAT44(local_1a8._4_4_,0x1000104);
  lVar47 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x208) + 8);
  uVar10 = FUN_71032a3d90(lVar47,0x1530ff0e86);
  uVar49 = puVar12[0x77];
  uVar13 = uVar49 & 0xffffffffff;
  if ((((uVar10 & 0xff00000000000000) == 0x5200000000000000) && ((uVar10 & 0xffffffffff) != 0)) &&
     (((uVar49 & 0xff00000000000000) == 0x5200000000000000 && (uVar13 != 0)))) {
    bVar7 = ((uVar49 ^ uVar10) & 0xffffffffff) == 0;
  }
  else {
    bVar7 = (uVar13 != 0 && (uVar49 & 0xff00000000000000) == 0x5200000000000000) ==
            ((uVar10 & 0xff00000000000000) == 0x5200000000000000 && (uVar10 & 0xffffffffff) != 0);
  }
  uVar33 = 4;
  if (bVar7) {
    uVar33 = 1;
  }
  local_1a8 = (undefined1 *)CONCAT71(local_1a8._1_7_,uVar33);
  uVar10 = FUN_71032a3d90(lVar47,0x1530ff0e86);
  if ((((uVar10 & 0xff00000000000000) == 0x5200000000000000) && ((uVar10 & 0xffffffffff) != 0)) &&
     (((uVar49 & 0xff00000000000000) == 0x5200000000000000 && (uVar13 != 0)))) {
    bVar7 = ((uVar49 ^ uVar10) & 0xffffffffff) == 0;
  }
  else {
    bVar7 = (uVar13 != 0 && (uVar49 & 0xff00000000000000) == 0x5200000000000000) ==
            ((uVar10 & 0xff00000000000000) == 0x5200000000000000 && (uVar10 & 0xffffffffff) != 0);
  }
  puVar14 = &local_1c0;
  local_1a8 = (undefined1 *)
              (CONCAT44(local_1a8._4_4_,CONCAT13(bVar7,(undefined3)local_1a8)) ^ 0x1000000);
  FUN_7101e9aa40(puVar12 + 0x41,puVar11,puVar14,uVar30,pppplVar32,param_6,param_7,param_8);
  FUN_71003a4ca0((uint *)&local_1c0,"set_parts_mastery_%02d",0,puVar14,uVar30,pppplVar32,param_6,
                 param_7,param_8);
  FUN_7103776640(&local_1d8,(long)puVar11,(byte ****)&local_1b8,puVar14,uVar30,pppplVar32,param_6,
                 param_7,param_8);
  ppplVar6 = local_1d0;
  pppplVar24 = (long ****)(puVar12 + 0x43);
  if (pppplVar24 != &local_1d8) {
    local_1d0 = (long ***)0x0;
    uVar10 = puVar12[0x44];
    puVar12[0x44] = ppplVar6;
    if (uVar10 != 0) {
      uVar13 = *(ulong *)(uVar10 + 0x18);
      *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar10 + 0x18) = 0;
      if (uVar13 != 0) {
        FUN_710392eb40(uVar13);
      }
      FUN_710392eb40(uVar10);
    }
  }
  ppplVar6 = local_1d0;
  local_1d8 = (long ***)&PTR_FUN_710523d988;
  local_1d0 = (long ***)0x0;
  if (ppplVar6 != (long ***)0x0) {
    uVar10 = *(ulong *)((long)ppplVar6 + 0x18);
    *(undefined ***)((long)ppplVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)ppplVar6 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40((ulong)ppplVar6);
  }
  FUN_7103776910(&local_1d8,(long)pppplVar24,(long ****)"set_fxui_confetti",puVar14,uVar30,
                 pppplVar32,param_6,param_7,param_8);
  ppplVar6 = local_1d0;
  if ((long ****)(puVar12 + 0x47) != &local_1d8) {
    local_1d0 = (long ***)0x0;
    uVar10 = puVar12[0x48];
    puVar12[0x48] = ppplVar6;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  ppplVar6 = local_1d0;
  local_1d8 = (long ***)&PTR_FUN_710523d9a8;
  local_1d0 = (long ***)0x0;
  if (ppplVar6 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar6);
  }
  FUN_71037780e0(&local_1d8,(long)pppplVar24,(long ****)&DAT_7104421055,puVar14,uVar30,pppplVar32,
                 param_6,param_7,param_8);
  ppplVar6 = local_1d0;
  if ((long ****)(puVar12 + 0x45) != &local_1d8) {
    local_1d0 = (long ***)0x0;
    uVar10 = puVar12[0x46];
    puVar12[0x46] = ppplVar6;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  ppplVar6 = local_1d0;
  local_1d8 = (long ***)&PTR_FUN_710523d9e8;
  local_1d0 = (long ***)0x0;
  if (ppplVar6 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar6);
  }
  FUN_71003a4ca0((uint *)&local_1c0,"set_parts_mastery_%02d",1,puVar14,uVar30,pppplVar32,param_6,
                 param_7,param_8);
  FUN_7103776640(&local_1d8,(long)puVar11,(byte ****)&local_1b8,puVar14,uVar30,pppplVar32,param_6,
                 param_7,param_8);
  ppplVar6 = local_1d0;
  pppplVar24 = (long ****)(puVar12 + 0x49);
  if (pppplVar24 != &local_1d8) {
    local_1d0 = (long ***)0x0;
    uVar10 = puVar12[0x4a];
    puVar12[0x4a] = ppplVar6;
    if (uVar10 != 0) {
      uVar13 = *(ulong *)(uVar10 + 0x18);
      *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar10 + 0x18) = 0;
      if (uVar13 != 0) {
        FUN_710392eb40(uVar13);
      }
      FUN_710392eb40(uVar10);
    }
  }
  ppplVar6 = local_1d0;
  local_1d8 = (long ***)&PTR_FUN_710523d988;
  local_1d0 = (long ***)0x0;
  if (ppplVar6 != (long ***)0x0) {
    uVar10 = *(ulong *)((long)ppplVar6 + 0x18);
    *(undefined ***)((long)ppplVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)ppplVar6 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40((ulong)ppplVar6);
  }
  FUN_7103776910(&local_1d8,(long)pppplVar24,(long ****)"set_fxui_confetti",puVar14,uVar30,
                 pppplVar32,param_6,param_7,param_8);
  ppplVar6 = local_1d0;
  if ((long ****)(puVar12 + 0x4d) != &local_1d8) {
    local_1d0 = (long ***)0x0;
    uVar10 = puVar12[0x4e];
    puVar12[0x4e] = ppplVar6;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  ppplVar6 = local_1d0;
  local_1d8 = (long ***)&PTR_FUN_710523d9a8;
  local_1d0 = (long ***)0x0;
  if (ppplVar6 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar6);
  }
  FUN_71037780e0(&local_1d8,(long)pppplVar24,(long ****)&DAT_7104421055,puVar14,uVar30,pppplVar32,
                 param_6,param_7,param_8);
  ppplVar6 = local_1d0;
  if ((long ****)(puVar12 + 0x4b) != &local_1d8) {
    local_1d0 = (long ***)0x0;
    uVar10 = puVar12[0x4c];
    puVar12[0x4c] = ppplVar6;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  ppplVar6 = local_1d0;
  local_1d8 = (long ***)&PTR_FUN_710523d9e8;
  local_1d0 = (long ***)0x0;
  if (ppplVar6 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar6);
  }
  FUN_71003a4ca0((uint *)&local_1c0,"set_parts_mastery_%02d",2,puVar14,uVar30,pppplVar32,param_6,
                 param_7,param_8);
  FUN_7103776640(&local_1d8,(long)puVar11,(byte ****)&local_1b8,puVar14,uVar30,pppplVar32,param_6,
                 param_7,param_8);
  ppplVar6 = local_1d0;
  pppplVar24 = (long ****)(puVar12 + 0x4f);
  if (pppplVar24 != &local_1d8) {
    local_1d0 = (long ***)0x0;
    uVar10 = puVar12[0x50];
    puVar12[0x50] = ppplVar6;
    if (uVar10 != 0) {
      uVar13 = *(ulong *)(uVar10 + 0x18);
      *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar10 + 0x18) = 0;
      if (uVar13 != 0) {
        FUN_710392eb40(uVar13);
      }
      FUN_710392eb40(uVar10);
    }
  }
  ppplVar6 = local_1d0;
  local_1d8 = (long ***)&PTR_FUN_710523d988;
  local_1d0 = (long ***)0x0;
  if (ppplVar6 != (long ***)0x0) {
    uVar10 = *(ulong *)((long)ppplVar6 + 0x18);
    *(undefined ***)((long)ppplVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)ppplVar6 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40((ulong)ppplVar6);
  }
  FUN_7103776910(&local_1d8,(long)pppplVar24,(long ****)"set_fxui_confetti",puVar14,uVar30,
                 pppplVar32,param_6,param_7,param_8);
  ppplVar6 = local_1d0;
  if ((long ****)(puVar12 + 0x53) != &local_1d8) {
    local_1d0 = (long ***)0x0;
    uVar10 = puVar12[0x54];
    puVar12[0x54] = ppplVar6;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  ppplVar6 = local_1d0;
  local_1d8 = (long ***)&PTR_FUN_710523d9a8;
  local_1d0 = (long ***)0x0;
  if (ppplVar6 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar6);
  }
  FUN_71037780e0(&local_1d8,(long)pppplVar24,(long ****)&DAT_7104421055,puVar14,uVar30,pppplVar32,
                 param_6,param_7,param_8);
  ppplVar6 = local_1d0;
  if ((long ****)(puVar12 + 0x51) != &local_1d8) {
    local_1d0 = (long ***)0x0;
    uVar10 = puVar12[0x52];
    puVar12[0x52] = ppplVar6;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  ppplVar6 = local_1d0;
  local_1d8 = (long ***)&PTR_FUN_710523d9e8;
  local_1d0 = (long ***)0x0;
  if (ppplVar6 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar6);
  }
  FUN_71003a4ca0((uint *)&local_1c0,"set_parts_mastery_%02d",3,puVar14,uVar30,pppplVar32,param_6,
                 param_7,param_8);
  FUN_7103776640(&local_1d8,(long)puVar11,(byte ****)&local_1b8,puVar14,uVar30,pppplVar32,param_6,
                 param_7,param_8);
  ppplVar6 = local_1d0;
  pppplVar24 = (long ****)(puVar12 + 0x55);
  if (pppplVar24 != &local_1d8) {
    local_1d0 = (long ***)0x0;
    uVar10 = puVar12[0x56];
    puVar12[0x56] = ppplVar6;
    if (uVar10 != 0) {
      uVar13 = *(ulong *)(uVar10 + 0x18);
      *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar10 + 0x18) = 0;
      if (uVar13 != 0) {
        FUN_710392eb40(uVar13);
      }
      FUN_710392eb40(uVar10);
    }
  }
  ppplVar6 = local_1d0;
  local_1d8 = (long ***)&PTR_FUN_710523d988;
  local_1d0 = (long ***)0x0;
  if (ppplVar6 != (long ***)0x0) {
    uVar10 = *(ulong *)((long)ppplVar6 + 0x18);
    *(undefined ***)((long)ppplVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)ppplVar6 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40((ulong)ppplVar6);
  }
  FUN_7103776910(&local_1d8,(long)pppplVar24,(long ****)"set_fxui_confetti",puVar14,uVar30,
                 pppplVar32,param_6,param_7,param_8);
  ppplVar6 = local_1d0;
  if ((long ****)(puVar12 + 0x59) != &local_1d8) {
    local_1d0 = (long ***)0x0;
    uVar10 = puVar12[0x5a];
    puVar12[0x5a] = ppplVar6;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  ppplVar6 = local_1d0;
  local_1d8 = (long ***)&PTR_FUN_710523d9a8;
  local_1d0 = (long ***)0x0;
  if (ppplVar6 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar6);
  }
  FUN_71037780e0(&local_1d8,(long)pppplVar24,(long ****)&DAT_7104421055,puVar14,uVar30,pppplVar32,
                 param_6,param_7,param_8);
  ppplVar6 = local_1d0;
  if ((long ****)(puVar12 + 0x57) != &local_1d8) {
    local_1d0 = (long ***)0x0;
    uVar10 = puVar12[0x58];
    puVar12[0x58] = ppplVar6;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  ppplVar6 = local_1d0;
  local_1d8 = (long ***)&PTR_FUN_710523d9e8;
  local_1d0 = (long ***)0x0;
  if (ppplVar6 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar6);
  }
  FUN_7101e965f0((long)(puVar12 + 0x5b),puVar11,(long ****)"selector_menu","set_parts_menu_%02d",
                 pppplVar32,param_6,param_7,param_8);
  pppplVar32 = (long ****)(ulong)*(byte *)(puVar12[0x76] + 8);
  ppppbVar29 = (byte ****)0x1;
  FUN_7101e945c0(puVar12 + 0x5d,(long)puVar11,(byte ****)"set_parts_talk",1,pppplVar32,param_6,
                 param_7,param_8);
  lVar47 = *(long *)(DAT_710532f730 + 8);
  uVar10 = FUN_71032a3bd0(*(long *)(lVar47 + 0x208),(uint)*(byte *)(puVar12[0x76] + 8));
  uVar9 = 0xffff;
  if (((uVar10 & 0xff00000000000000) == 0x5200000000000000) && ((uVar10 & 0xffffffffff) != 0)) {
    uVar9 = FUN_71032a5750(*(long *)(lVar47 + 0x208),uVar10);
  }
  FUN_7101e95dd0(puVar12 + 0x5d,uVar9,(long *)*puVar12,ppppbVar29,pppplVar32,param_6,param_7,param_8
                );
  FUN_7101e941f0(puVar12 + 0x61,(long)puVar11,(byte ****)"set_parts_sp",ppppbVar29,pppplVar32,
                 param_6,param_7,param_8);
  iVar2 = *(int *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + 0x24);
  lVar47 = *(long *)(puVar12[0x61] + 0x10);
  if (*(int *)(lVar47 + 0x94) != iVar2) {
    *(int *)(lVar47 + 0x94) = iVar2;
    FUN_710377a280(lVar47,(byte *)(lVar47 + 0x18),1);
  }
  pcVar28 = "selector_return";
  pcVar31 = "set_btn_return";
  FUN_7101e95110(puVar12 + 99,puVar11,(long ****)"selector_return",(byte ****)"set_btn_return",
                 pppplVar32,param_6,param_7,param_8);
  FUN_7103778300(0x3f800000,*(long *)(puVar12[99] + 0x10),0x710437cc0a);
  (**(code **)(**(long **)puVar12[99] + 0x60))(*(long **)puVar12[99],0);
  uVar10 = FUN_71032a3d90(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x208) + 8),
                          0x1530ff0e86);
  uVar13 = puVar12[0x77];
  if (((((uVar10 & 0xff00000000000000) == 0x5200000000000000) && ((uVar10 & 0xffffffffff) != 0)) &&
      ((uVar13 & 0xff00000000000000) == 0x5200000000000000)) && ((uVar13 & 0xffffffffff) != 0)) {
    bVar7 = ((uVar13 ^ uVar10) & 0xffffffffff) == 0;
  }
  else {
    bVar7 = ((uVar13 & 0xffffffffff) != 0 && (uVar13 & 0xff00000000000000) == 0x5200000000000000) ==
            ((uVar10 & 0xff00000000000000) == 0x5200000000000000 && (uVar10 & 0xffffffffff) != 0);
  }
  pcVar1 = "yadon_on";
  if (!bVar7) {
    pcVar1 = "yadon_off";
  }
  FUN_7103778300(0x3f800000,puVar12[0x40],(long)pcVar1);
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)pcVar28,(byte ****)pcVar31,pppplVar32,param_6,
                           param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1d8 = (long ***)((ulong)local_1d8 & 0xffffffff00000000);
      local_1c0 = (undefined **)&DAT_00000088;
      pppplVar24 = (long ****)&local_1c0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d8);
      if (((uVar10 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,pppplVar24,(byte ****)pcVar31,pppplVar32,param_6,
                                   param_7,param_8), puVar11 != (undefined8 *)0x0))
      goto LAB_710194232c;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_710194232c:
  pppplVar24 = (long ****)0x1;
  ppppbVar29 = (byte ****)(ulong)(uint)bVar46;
  FUN_7101e99cb0(puVar11,plVar22,(long ****)0x1,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  puVar11[2] = &DAT_7105333600;
  *(undefined4 *)(puVar11 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar11 + 0x6c) = DAT_7105333664;
  do {
    uVar38 = DAT_7105333650;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar7) {
      DAT_7105333650 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0' || (uVar38 & 1) != 0);
  puVar11[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar11;
  FUN_71032caea0((long)puVar11,extraout_x1_31,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,
                 param_8);
  lVar47 = *(long *)(param_1 + 0x1c8);
  *(undefined8 **)(param_1 + 0x1c8) = puVar11;
  if (lVar47 != 0) {
    FUN_71032cad20(lVar47);
    puVar11 = *(undefined8 **)(param_1 + 0x1c8);
  }
  FUN_7101e9a160((undefined8 *)puVar11[0x10]);
  local_1b0 = (char *)CONCAT44(local_1b0._4_4_,0xff000000);
  local_1a8 = (undefined1 *)0x0;
  local_1c0 = (undefined **)CONCAT44(local_1c0._4_4_,8);
  local_1b8 = *(long *********)(param_1 + 0x1f0);
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x88,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_88 = (undefined **)((ulong)local_88 & 0xffffffff00000000);
      local_1d8 = (long ***)&DAT_00000088;
      pppplVar24 = &local_1d8;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
      if (((uVar10 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,
                                   param_8), puVar11 != (undefined8 *)0x0)) goto LAB_710194242c;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_710194242c:
  *puVar11 = &PTR_FUN_71050b0e08;
  puVar11[1] = 0;
  puVar11[0xc] = 0;
  puVar11[0xd] = 0x1ffffffff;
  puVar11[2] = 0;
  puVar11[3] = 0;
  *(undefined1 *)(puVar11 + 0xb) = 0;
  puVar11[0xf] = plVar22;
  *(undefined1 *)(puVar11 + 0xe) = 1;
  puVar11[9] = 0;
  puVar11[10] = 0;
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0x148,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  if (puVar12 == (undefined8 *)0x0) {
    local_88 = (undefined **)((ulong)local_88 & 0xffffffff00000000);
    local_1d8 = (long ***)&DAT_00000148;
    pppplVar24 = &local_1d8;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
    puVar12 = (undefined8 *)
              FUN_710392e290(0x10,0x148,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  }
  pppplVar26 = (long ****)(puVar12 + 1);
  *puVar12 = plVar22;
  puVar14 = (undefined8 *)
            FUN_710392e290(0x10,8,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  uVar27 = extraout_x1_32;
  if (puVar14 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_88 = (undefined **)((ulong)local_88 & 0xffffffff00000000);
      local_1d8 = (long ***)&DAT_00000008;
      pppplVar24 = &local_1d8;
      auVar50 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
      uVar27 = auVar50._8_8_;
      if (((auVar50._0_8_ & 1) != 0) &&
         (puVar14 = (undefined8 *)
                    FUN_710392e290(0x10,8,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8),
         uVar27 = extraout_x1_33, puVar14 != (undefined8 *)0x0)) goto LAB_7101942508;
    }
    puVar14 = (undefined8 *)0x0;
  }
LAB_7101942508:
  FUN_7103773200(puVar14,uVar27,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  puVar12[1] = puVar14;
  FUN_7103776290(puVar12 + 2,extraout_x1_34,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8
                );
  FUN_7101df74b0(puVar12 + 4,plVar22,pppplVar26,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  puVar12[0xf] = 0;
  puVar12[0x10] = 0;
  puVar12[0xd] = 0;
  puVar12[0xe] = 0;
  puVar12[0xe] = FUN_7101debca0;
  puVar12[0xf] = 0;
  *(undefined4 *)(puVar12 + 0x27) = 0xffffffff;
  *(undefined1 *)((long)puVar12 + 0x13c) = 0;
  *(undefined2 *)(puVar12 + 0x28) = 0;
  *(undefined4 *)((long)puVar12 + 0x144) = 0;
  puVar12[0x11] = 0;
  puVar12[0x12] = 0;
  puVar12[0x10] = FUN_7101debd50;
  puVar12[0x11] = 0;
  puVar12[0x13] = 0;
  puVar12[0x14] = 0;
  puVar12[0x12] = FUN_7101dec1e0;
  puVar12[0x13] = 0;
  puVar12[0x15] = 0;
  puVar12[0x16] = 0;
  puVar12[0x14] = FUN_7101ded970;
  puVar12[0x15] = 0;
  puVar12[0x17] = 0;
  puVar12[0x18] = 0;
  puVar12[0x16] = FUN_7101dedc10;
  puVar12[0x17] = 0;
  puVar12[5] = 0;
  puVar12[6] = 0;
  puVar12[9] = 0;
  puVar12[10] = 0;
  puVar12[7] = puVar12;
  puVar12[8] = 0;
  puVar12[0x25] = 0;
  puVar12[0x26] = 0xffffffff;
  puVar12[0x23] = 0;
  puVar12[0x24] = 0;
  puVar12[0x21] = 0;
  puVar12[0x22] = 0;
  puVar12[0x1f] = 0;
  puVar12[0x20] = 0;
  puVar12[0x1d] = 0;
  puVar12[0x1e] = 0;
  puVar12[0x1b] = 0;
  puVar12[0x1c] = 0;
  *(undefined4 *)(puVar12 + 0x1c) = 0;
  puVar12[0x19] = 0;
  puVar12[0x1a] = 0;
  puVar12[0xb] = 0;
  puVar12[0xc] = 0;
  puVar12[0xc] = FUN_7101debc90;
  puVar12[0xd] = 0;
  puVar12[0x18] = FUN_7101dedd60;
  puVar12[0x19] = 0;
  puVar12[0x1a] = FUN_7101debc90;
  puVar12[0x1b] = 0;
  puVar11[0x10] = puVar12;
  puVar11[2] = &DAT_7105333600;
  uVar5 = DAT_7105333664;
  *(undefined4 *)(puVar11 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar11 + 0x6c) = uVar5;
  do {
    uVar38 = DAT_7105333650;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar7) {
      DAT_7105333650 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0' || (uVar38 & 1) != 0);
  puVar11[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar11;
  FUN_71032caea0((long)puVar11,extraout_x1_35,pppplVar26,ppppbVar29,pppplVar32,param_6,param_7,
                 param_8);
  lVar47 = *(long *)(param_1 + 0x1d8);
  *(undefined8 **)(param_1 + 0x1d8) = puVar11;
  if (lVar47 != 0) {
    FUN_71032cad20(lVar47);
    puVar11 = *(undefined8 **)(param_1 + 0x1d8);
  }
  pppplVar24 = (long ****)0x1;
  FUN_7101deddf0((undefined8 *)puVar11[0x10],(int *)&local_1c0,(long *********)0x1,ppppbVar29,
                 pppplVar32,param_6,param_7,param_8);
  *(undefined1 *)(*(long *)(param_1 + 0x1d8) + 0x70) = 1;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x88,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1d8 = (long ***)((ulong)local_1d8 & 0xffffffff00000000);
      local_1c0 = (undefined **)&DAT_00000088;
      pppplVar24 = (long ****)&local_1c0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d8);
      if (((uVar10 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,
                                   param_8), puVar11 != (undefined8 *)0x0)) goto LAB_71019426b8;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_71019426b8:
  FUN_7101d8f690(puVar11,plVar22,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,param_8);
  puVar11[2] = &DAT_7105333600;
  *(undefined4 *)(puVar11 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar11 + 0x6c) = DAT_7105333664;
  do {
    uVar38 = DAT_7105333650;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar7) {
      DAT_7105333650 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0' || (uVar38 & 1) != 0);
  puVar11[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar11;
  FUN_71032caea0((long)puVar11,extraout_x1_36,pppplVar24,ppppbVar29,pppplVar32,param_6,param_7,
                 param_8);
  lVar47 = *(long *)(param_1 + 0x1d0);
  *(undefined8 **)(param_1 + 0x1d0) = puVar11;
  if (lVar47 != 0) {
    FUN_71032cad20(lVar47);
    puVar11 = *(undefined8 **)(param_1 + 0x1d0);
  }
  ppppbVar29 = (byte ****)0x0;
  pppplVar32 = (long ****)0x0;
  uVar27 = 0;
  FUN_7101d88b10((undefined8 *)puVar11[0x10],3,0xffff,0,(long ****)0x0,0,param_7,param_8);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1d0) + 0x80) + 0x348) =
       *(undefined8 *)(param_1 + 0x1f0);
  *(undefined1 *)(*(long *)(param_1 + 0x1d0) + 0x70) = 1;
  lVar47 = DAT_710532f8d0;
  lVar39 = *(long *)(DAT_710532f730 + 8);
  uVar10 = FUN_71032a3bd0(*(long *)(lVar39 + 0x208),(uint)bVar46);
  uVar10 = FUN_71032a5bd0(*(long *)(lVar39 + 0x208),uVar10);
  uVar10 = FUN_71032575c0(*(long *)(lVar39 + 0x278),uVar10);
  ppppppppplVar23 = (long *********)0x1;
  FUN_71033145d0(lVar47,uVar10,1,ppppbVar29,pppplVar32,uVar27,param_7,param_8);
  lVar47 = *(long *)(*(long *)(param_1 + 0x1c0) + 0x80);
  if (*(char *)(lVar47 + 0x210) != '\0') {
    bVar46 = 0;
    do {
      uVar10 = FUN_7101e5e830(lVar47,bVar46,ppppppppplVar23,ppppbVar29,pppplVar32,uVar27,param_7,
                              param_8);
      if ((uVar10 & 1) != 0) {
        plVar22 = (long *)FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar23,ppppbVar29,pppplVar32,
                                         uVar27,param_7,param_8);
        if (plVar22 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1d8 = (long ***)((ulong)local_1d8 & 0xffffffff00000000);
            local_1c0 = (undefined **)&SUB_00000018;
            ppppppppplVar23 = (long *********)&local_1c0;
            uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d8);
            if (((uVar10 & 1) != 0) &&
               (plVar22 = (long *)FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar23,ppppbVar29,
                                                 pppplVar32,uVar27,param_7,param_8),
               plVar22 != (long *)0x0)) goto LAB_7101942828;
          }
          plVar22 = (long *)0x0;
        }
LAB_7101942828:
        *(byte *)(plVar22 + 2) = bVar46;
        plVar22[1] = lVar47 + 0x388;
        lVar39 = *(long *)(lVar47 + 0x388);
        *plVar22 = lVar39;
        *(long **)(lVar39 + 8) = plVar22;
        *(long **)(lVar47 + 0x388) = plVar22;
        *(long *)(lVar47 + 0x398) = *(long *)(lVar47 + 0x398) + 1;
      }
      bVar46 = bVar46 + 1;
    } while (bVar46 < *(byte *)(lVar47 + 0x210));
  }
  if (*(uint *)(lVar47 + 0x1dc) < 0x13) {
    *(undefined4 *)(lVar47 + (long)(int)*(uint *)(lVar47 + 0x1dc) * 4 + 400) = 1;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x19c) = 0;
    *(undefined8 *)(param_1 + 0x194) = 0;
    *(undefined8 *)(param_1 + 0x18c) = 0;
    *(undefined8 *)(param_1 + 0x184) = 0;
    *(undefined8 *)(param_1 + 0x17c) = 0;
    *(undefined8 *)(param_1 + 0x174) = 0;
    *(undefined8 *)(param_1 + 0x16c) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = 0;
    *(undefined8 *)(param_1 + 0x164) = 0;
    *(undefined8 *)(param_1 + 0x15c) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1b0) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x1b4) = 0;
    *(undefined4 *)(param_1 + 0x158) = 1;
    return;
  }
LAB_71019428fc:
                    /* WARNING: Subroutine does not return */
  abort();
}

