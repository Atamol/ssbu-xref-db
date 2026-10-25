// addr:      7101b0c270
// offset:    0x1b0c270
// name:      FUN_7101b0c270
// mangled:   
// signature: undefined __cdecl FUN_7101b0c270(undefined8 * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101b0c270(undefined8 *param_1,long *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long **pplVar1;
  long **pplVar2;
  long ***ppplVar3;
  long **pplVar4;
  long ***ppplVar5;
  byte bVar6;
  byte ***pppbVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  void *__dest;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  long ***extraout_x1;
  long ***extraout_x1_00;
  long ***extraout_x1_01;
  long ***extraout_x1_02;
  long ***ppplVar20;
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
  byte ****ppppbVar21;
  undefined **ppuVar22;
  long ****pppplVar23;
  char *pcVar24;
  undefined8 uVar25;
  long ****pppplVar26;
  long ****pppplVar27;
  uint uVar28;
  long lVar29;
  long *plVar30;
  long lVar31;
  code *pcVar32;
  uint uVar33;
  long lVar34;
  long lVar35;
  long *plVar36;
  byte *pbVar37;
  uint uVar38;
  uint uVar39;
  undefined4 uVar40;
  long ***ppplVar41;
  uint uVar42;
  char cVar43;
  long *plVar44;
  long *plVar45;
  long *plVar46;
  long *plVar47;
  byte ****__n;
  long *plVar48;
  long lVar49;
  long *plVar50;
  undefined8 *puVar51;
  undefined8 *puVar52;
  undefined8 *puVar53;
  float fVar54;
  undefined1 auVar55 [16];
  undefined8 *local_3f8;
  undefined8 *local_3f0;
  undefined8 *puStack_3e8;
  byte ***local_3e0;
  long *local_3d8;
  undefined8 uStack_3d0;
  undefined1 local_3c8;
  undefined2 local_3c7;
  undefined1 local_3c5;
  undefined4 local_3c4;
  undefined2 local_3c0;
  long alStack_3b0 [4];
  long *local_390;
  long alStack_380 [4];
  long *local_360;
  long alStack_350 [4];
  long *local_330;
  long alStack_320 [4];
  long *local_300;
  long alStack_2f0 [4];
  long *local_2d0;
  undefined **local_2c0;
  long *local_2b8;
  undefined **local_2b0;
  long *local_2a8;
  byte ***local_2a0;
  undefined1 *local_298;
  undefined4 local_290;
  undefined2 local_28c;
  undefined1 local_28a;
  undefined1 *local_288;
  undefined4 local_280;
  long alStack_270 [4];
  long *local_250;
  long alStack_240 [4];
  long *local_220;
  long alStack_210 [4];
  long *local_1f0;
  long alStack_1e0 [4];
  long *local_1c0;
  long alStack_1b0 [4];
  long *local_190;
  undefined4 local_180;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined1 local_154;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined2 local_110;
  undefined4 local_10e;
  undefined2 local_10a;
  undefined1 local_108;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  
  *param_1 = &PTR_FUN_71050aa370;
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
  puVar13 = (undefined8 *)FUN_710392e290(0x10,0x538,param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_3e0 = (byte ***)((ulong)local_3e0 & 0xffffffff00000000);
      local_2a0 = (byte ***)0x538;
      ppppbVar21 = &local_2a0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_3e0);
      if (((uVar14 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x538,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,
                                   param_8), puVar13 != (undefined8 *)0x0)) goto LAB_7101b0c32c;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101b0c32c:
  *(undefined4 *)(puVar13 + 1) = 0x1000;
  puVar13[3] = 0;
  puVar13[4] = 0;
  puVar13[2] = 0;
  puVar13[6] = 0;
  puVar13[5] = puVar13 + 6;
  ppppbVar21 = (byte ****)0x1ec;
  *puVar13 = &DAT_71050aa2e8;
  puVar13[7] = 0;
  puVar13[8] = 0;
  puVar13[9] = puVar13;
  puVar13[10] = 0;
  *(undefined8 *)((long)puVar13 + 0x25c) = 0xffffffff00000000;
  puVar13[0xd] = 0;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  *(undefined8 *)((long)puVar13 + 0x264) = 0xffffffff00000000;
  *(undefined1 *)((long)puVar13 + 0x26c) = 0;
  memset(puVar13 + 0xe,0,0x1ec);
  puVar13[0x4e] = param_2;
  ppplVar20 = param_3[1];
  uVar40 = *(undefined4 *)(param_3 + 2);
  puVar13[0x4f] = *param_3;
  *(undefined4 *)(puVar13 + 0x51) = uVar40;
  puVar13[0x50] = ppplVar20;
  puVar13[0x52] = &PTR_FUN_710523da48;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x10,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,param_8);
  ppplVar20 = extraout_x1;
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_3e0 = (byte ***)((ulong)local_3e0 & 0xffffffff00000000);
      local_2a0 = (byte ***)&DAT_00000010;
      ppppbVar21 = &local_2a0;
      auVar55 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_3e0);
      ppplVar20 = auVar55._8_8_;
      if (((auVar55._0_8_ & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,
                                   param_8), ppplVar20 = extraout_x1_00,
         puVar15 != (undefined8 *)0x0)) goto LAB_7101b0c40c;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b0c40c:
  *puVar15 = 0;
  puVar15[1] = 0;
  puVar13[0x53] = puVar15;
  if (param_3 + 3 != (long ****)(puVar13 + 0x52)) {
    pplVar2 = *param_3[4];
    pplVar4 = param_3[4][1];
    if (pplVar4 == (long **)0x0) {
      *puVar15 = pplVar2;
      puVar15[1] = 0;
    }
    else {
      pplVar1 = pplVar4 + 1;
      do {
        cVar43 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
        if (bVar10) {
          *pplVar1 = (long *)((long)*pplVar1 + 1);
          cVar43 = ExclusiveMonitorsStatus();
        }
      } while (cVar43 != '\0');
      plVar47 = (long *)puVar15[1];
      *puVar15 = pplVar2;
      puVar15[1] = pplVar4;
      if (plVar47 != (long *)0x0) {
        plVar44 = plVar47 + 1;
        do {
          lVar34 = *plVar44;
          cVar43 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar44,0x10);
          if (bVar10) {
            *plVar44 = lVar34 + -1;
            cVar43 = ExclusiveMonitorsStatus();
          }
        } while (cVar43 != '\0');
        if (lVar34 == 0) {
          (**(code **)(*plVar47 + 0x10))(plVar47);
          std::__shared_weak_count::__release_weak();
          ppplVar20 = extraout_x1_01;
        }
      }
    }
  }
  ppplVar3 = param_3[5];
  ppplVar5 = param_3[6];
  puVar13[0x56] = param_3[7];
  puVar13[0x55] = ppplVar5;
  puVar13[0x54] = ppplVar3;
  ppplVar3 = param_3[8];
  ppplVar41 = param_3[9];
  ppplVar5 = param_3[10];
  puVar13[0x5a] = param_3[0xb];
  puVar13[0x59] = ppplVar5;
  puVar13[0x58] = ppplVar41;
  puVar13[0x57] = ppplVar3;
  ppplVar3 = param_3[0xc];
  ppplVar5 = param_3[0xd];
  ppplVar41 = param_3[0xf];
  puVar13[0x5d] = param_3[0xe];
  puVar13[0x5b] = ppplVar3;
  puVar13[0x5e] = ppplVar41;
  puVar13[0x5c] = ppplVar5;
  *(undefined4 *)(puVar13 + 0x5f) = 0;
  uVar14 = 0;
  while( true ) {
    pcVar24 = (char *)((long)param_3 + uVar14 + 0x88);
    cVar43 = *pcVar24;
    if (cVar43 == '\0') break;
    *(char *)((long)puVar13 + uVar14 + 0x300) = cVar43;
    if (0x3e < (int)uVar14 + 1U) {
      uVar14 = (ulong)((int)uVar14 + 1);
      break;
    }
    cVar43 = pcVar24[1];
    if (cVar43 == '\0') {
      uVar14 = uVar14 + 1;
      break;
    }
    *(char *)((long)puVar13 + uVar14 + 0x301) = cVar43;
    uVar14 = uVar14 + 2;
  }
  *(undefined1 *)((long)puVar13 + (uVar14 & 0xffffffff) + 0x300) = 0;
  *(int *)((long)puVar13 + 0x2fc) = (int)uVar14;
  uVar33 = (uint)*(byte *)(puVar13 + 0x60);
  uVar38 = 0x811c9dc5;
  uVar28 = uVar38;
  if (*(byte *)(puVar13 + 0x60) != 0) {
    pbVar37 = (byte *)((long)puVar13 + 0x301);
    do {
      uVar28 = uVar28 * 0x89 ^ uVar33;
      uVar33 = (uint)*pbVar37;
      pbVar37 = pbVar37 + 1;
    } while (uVar33 != 0);
  }
  *(uint *)(puVar13 + 0x5f) = uVar28;
  *(undefined4 *)(puVar13 + 0x68) = 0;
  uVar14 = 0;
  while( true ) {
    pcVar24 = (char *)((long)param_3 + uVar14 + 0xd0);
    cVar43 = *pcVar24;
    if (cVar43 == '\0') break;
    *(char *)((long)puVar13 + uVar14 + 0x348) = cVar43;
    if (0x3e < (int)uVar14 + 1U) {
      uVar14 = (ulong)((int)uVar14 + 1);
      break;
    }
    cVar43 = pcVar24[1];
    if (cVar43 == '\0') {
      uVar14 = uVar14 + 1;
      break;
    }
    *(char *)((long)puVar13 + uVar14 + 0x349) = cVar43;
    uVar14 = uVar14 + 2;
  }
  *(undefined1 *)((long)puVar13 + (uVar14 & 0xffffffff) + 0x348) = 0;
  uVar28 = (uint)*(byte *)(puVar13 + 0x69);
  *(int *)((long)puVar13 + 0x344) = (int)uVar14;
  if (*(byte *)(puVar13 + 0x69) != 0) {
    pbVar37 = (byte *)((long)puVar13 + 0x349);
    do {
      uVar38 = uVar38 * 0x89 ^ uVar28;
      uVar28 = (uint)*pbVar37;
      pbVar37 = pbVar37 + 1;
    } while (uVar28 != 0);
  }
  *(uint *)(puVar13 + 0x68) = uVar38;
  puVar13[0x71] = param_3[0x22];
  ppplVar3 = param_3[0x23];
  ppplVar5 = param_3[0x24];
  ppplVar41 = param_3[0x25];
  *(undefined4 *)(puVar13 + 0x75) = *(undefined4 *)(param_3 + 0x26);
  puVar13[0x74] = ppplVar41;
  puVar13[0x73] = ppplVar5;
  puVar13[0x72] = ppplVar3;
  puVar13[0x78] = 0;
  puVar13[0x77] = 0;
  puVar13[0x76] = 0;
  pppbVar7 = (byte ***)((long)param_3[0x28] - (long)param_3[0x27]);
  if (pppbVar7 != (byte ***)0x0) {
    if ((ulong)((long)pppbVar7 >> 5) >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    __dest = (void *)FUN_710392e290(0x10,pppbVar7,(long ****)ppppbVar21,param_4,param_5,param_6,
                                    param_7,param_8);
    if (__dest == (void *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_3e0 = (byte ***)((ulong)local_3e0 & 0xffffffff00000000);
        ppppbVar21 = &local_2a0;
        local_2a0 = pppbVar7;
        uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_3e0);
        if (((uVar14 & 1) != 0) &&
           (__dest = (void *)FUN_710392e290(0x10,pppbVar7,(long ****)ppppbVar21,param_4,param_5,
                                            param_6,param_7,param_8), __dest != (void *)0x0))
        goto LAB_7101b0c680;
      }
      __dest = (void *)0x0;
    }
LAB_7101b0c680:
    puVar13[0x77] = __dest;
    puVar13[0x76] = __dest;
    puVar13[0x78] = (void *)((long)__dest + ((long)pppbVar7 >> 5) * 0x20);
    ppplVar20 = param_3[0x27];
    __n = (byte ****)((long)param_3[0x28] - (long)ppplVar20);
    if (0 < (long)__n) {
      ppppbVar21 = __n;
      memcpy(__dest,ppplVar20,(size_t)__n);
      puVar13[0x77] = (long)__dest + (long)__n;
      ppplVar20 = extraout_x1_02;
    }
  }
  puVar13[0x79] = param_3[0x2a];
  FUN_7103776290(puVar13 + 0x7a,ppplVar20,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,
                 param_8);
  puVar13[0x7c] = &PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,param_8);
  uVar25 = extraout_x1_03;
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_3e0 = (byte ***)((ulong)local_3e0 & 0xffffffff00000000);
      local_2a0 = (byte ***)&SUB_00000018;
      ppppbVar21 = &local_2a0;
      auVar55 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_3e0);
      uVar25 = auVar55._8_8_;
      if (((auVar55._0_8_ & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,
                                   param_8), uVar25 = extraout_x1_04, puVar15 != (undefined8 *)0x0))
      goto LAB_7101b0c724;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b0c724:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  puVar13[0x7d] = puVar15;
  puVar13[0x80] = 0;
  puVar13[0x7f] = 0;
  puVar13[0x7e] = 0;
  puVar13[0x81] = &PTR_FUN_71050aa330;
  puVar13[0x82] = param_2;
  puVar13[0x91] = 0;
  puVar13[0x90] = 0;
  puVar13[0x8f] = 0;
  puVar13[0x8e] = 0;
  *(undefined2 *)(puVar13 + 0x86) = 0;
  puVar13[0x85] = 0;
  puVar13[0x84] = 0;
  puVar13[0x83] = 0;
  *(undefined8 *)((long)puVar13 + 0x461) = 0;
  *(undefined8 *)((long)puVar13 + 0x45c) = 0;
  *(undefined8 *)((long)puVar13 + 0x454) = 0;
  *(undefined8 *)((long)puVar13 + 0x44c) = 0;
  *(undefined8 *)((long)puVar13 + 0x444) = 0;
  *(undefined8 *)((long)puVar13 + 0x43c) = 0;
  *(undefined8 *)((long)puVar13 + 0x434) = 0;
  FUN_710339b260(puVar13 + 0x8e,uVar25,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,param_8
                );
  FUN_710339b260(puVar13 + 0x8f,extraout_x1_05,(long ****)ppppbVar21,param_4,param_5,param_6,param_7
                 ,param_8);
  FUN_710339b260(puVar13 + 0x90,extraout_x1_06,(long ****)ppppbVar21,param_4,param_5,param_6,param_7
                 ,param_8);
  FUN_710339b260(puVar13 + 0x91,extraout_x1_07,(long ****)ppppbVar21,param_4,param_5,param_6,param_7
                 ,param_8);
  *(undefined2 *)(puVar13 + 0x92) = 0xffff;
  *(undefined8 *)((long)puVar13 + 0x494) = 0x5a00000001;
  *(undefined8 *)((long)puVar13 + 0x49c) = 0;
  puVar13[0x97] = 0x87650000000000;
  puVar13[0x95] = &PTR_FUN_7104f73d30;
  puVar13[0x99] = 0xffffffffffffffff;
  *(undefined4 *)(puVar13 + 0x9c) = 0xffffffff;
  puVar13[0x96] = 0;
  *(undefined1 *)(puVar13 + 0x98) = 0;
  puVar13[0x9b] = 0;
  puVar13[0x9a] = 0;
  puVar13[0x9f] = 0;
  puVar13[0x9e] = 0;
  puVar13[0x9d] = 0;
  puVar13[0xa0] = 0x12c00000000;
  puVar13[0xa1] = 0;
  FUN_7103763c70(puVar13 + 0xa2,extraout_x1_08,(long ****)ppppbVar21,param_4,param_5,param_6,param_7
                 ,param_8);
  *(undefined1 *)(puVar13 + 0xa4) = 0;
  *(undefined4 *)((long)puVar13 + 0x524) = 0;
  *(undefined1 *)(puVar13 + 0xa5) = 1;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0xb8,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_3e0 = (byte ***)((ulong)local_3e0 & 0xffffffff00000000);
      local_2a0 = (byte ***)&DAT_000000b8;
      ppppbVar21 = &local_2a0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_3e0);
      if (((uVar14 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0xb8,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b0c8a8;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b0c8a8:
  *puVar15 = &PTR_FUN_710523d9a8;
  puVar16 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,param_8);
  if (puVar16 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_3e0 = (byte ***)((ulong)local_3e0 & 0xffffffff00000000);
      local_2a0 = (byte ***)&SUB_00000020;
      ppppbVar21 = &local_2a0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_3e0);
      if (((uVar14 & 1) != 0) &&
         (puVar16 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,
                                   param_8), puVar16 != (undefined8 *)0x0)) goto LAB_7101b0c908;
    }
    puVar16 = (undefined8 *)0x0;
  }
LAB_7101b0c908:
  puVar16[2] = 0;
  puVar16[3] = 0;
  *puVar16 = 0;
  puVar16[1] = 0;
  *(undefined4 *)((long)puVar15 + 0xa4) = 1;
  *(undefined2 *)(puVar15 + 0x16) = 0x100;
  *(undefined1 *)(puVar15 + 3) = 0;
  *(undefined2 *)(puVar15 + 0x12) = 0;
  puVar15[0xb] = 0;
  *(undefined8 *)((long)puVar15 + 0x9c) = 0;
  *(undefined8 *)((long)puVar15 + 0x94) = 0;
  puVar15[0x15] = 0;
  *(undefined4 *)((long)puVar15 + 0xb4) = 0x3f800000;
  puVar15[1] = puVar16;
  puVar15[2] = 0;
  puVar15[0x10] = 0;
  puVar15[0x11] = 0;
  puVar15[0xe] = 0;
  puVar15[0xf] = 0;
  puVar15[0xc] = 0;
  puVar15[0xd] = 0;
  lVar34 = puVar13[0xa3];
  puVar13[0xa6] = puVar15;
  *(undefined4 *)(lVar34 + 0x490) = 0x3ed851ea;
  *(undefined2 *)(lVar34 + 0x4a8) = 0;
  *(undefined8 *)(lVar34 + 0x3fc) = 0x600000011;
  *(undefined8 *)(lVar34 + 0x404) = 0x6400000002;
  *(undefined8 *)(lVar34 + 0x40c) = 0;
  *(undefined8 *)(lVar34 + 0x414) = 0x600000011;
  *(undefined8 *)(lVar34 + 0x41c) = 0x6400000002;
  *(undefined8 *)(lVar34 + 0x424) = 0;
  *(undefined4 *)(puVar13[0xa3] + 0x18) = 0x60;
  puVar13[0x41] = 0;
  puVar13[0x12] = FUN_7101b025a0;
  puVar13[0x13] = 0;
  puVar13[0x14] = FUN_7101b03b50;
  puVar13[0x15] = 0;
  puVar13[0x10] = FUN_7101b048e0;
  puVar13[0x11] = 0;
  puVar13[0x20] = FUN_7101b04970;
  puVar13[0x21] = 0;
  puVar13[0x24] = FUN_7101b053b0;
  puVar13[0x25] = 0;
  puVar13[0x26] = FUN_7101b05440;
  puVar13[0x27] = 0;
  puVar13[0x2a] = FUN_7101b06400;
  puVar13[0x2b] = 0;
  puVar13[0x2c] = FUN_7101b06640;
  puVar13[0x2d] = 0;
  puVar13[0x30] = FUN_7101b07190;
  puVar13[0x31] = 0;
  puVar13[0x32] = FUN_7101b073d0;
  puVar13[0x33] = 0;
  puVar13[0x36] = FUN_7101b080c0;
  puVar13[0x37] = 0;
  puVar13[0x38] = FUN_7101b08490;
  puVar13[0x39] = 0;
  puVar13[0x16] = FUN_7101b04270;
  puVar13[0x17] = 0;
  puVar13[0x3c] = FUN_7101b08680;
  puVar13[0x3d] = 0;
  puVar13[0x22] = FUN_7101b051b0;
  puVar13[0x23] = 0;
  puVar13[0x3e] = FUN_7101b08a60;
  puVar13[0x3f] = 0;
  puVar13[0x28] = FUN_7101b05fb0;
  puVar13[0x29] = 0;
  puVar13[0x18] = FUN_7101b08d70;
  puVar13[0x19] = 0;
  puVar13[0x2e] = FUN_7101b06f40;
  puVar13[0x2f] = 0;
  puVar13[0x1a] = FUN_7101b094f0;
  puVar13[0x1b] = 0;
  puVar13[0x34] = FUN_7101b07490;
  puVar13[0x35] = 0;
  puVar13[0x3a] = FUN_7101b08610;
  puVar13[0x3b] = 0;
  puVar13[0x40] = FUN_7101b08cd0;
  puVar13[0x1c] = FUN_7101b09900;
  puVar13[0x1d] = 0;
  puVar13[0xe] = FUN_7101b02590;
  puVar13[0xf] = 0;
  puVar13[0x1e] = FUN_7101b09e10;
  puVar13[0x1f] = 0;
  if (0x12 < *(uint *)((long)puVar13 + 0x25c)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)((long)puVar13 + (long)(int)*(uint *)((long)puVar13 + 0x25c) * 4 + 0x210) = 0;
  param_1[0x10] = puVar13;
  lVar29 = DAT_710532f7e8;
  lVar34 = *(long *)(DAT_710532f7e8 + 8);
  if (*(char *)(lVar34 + 0x162) == '\0') {
    *(undefined1 *)(lVar34 + 0x162) = 1;
    lVar34 = *(long *)(lVar29 + 8);
    cVar43 = *(char *)(lVar34 + 0x161);
  }
  else {
    cVar43 = *(char *)(lVar34 + 0x161);
  }
  if (cVar43 == '\0') {
    *(undefined4 *)(lVar34 + 0xe0) = 0;
    *(undefined8 *)(lVar34 + 8) = 0;
    *(undefined8 *)(lVar34 + 0x10) = 0;
    *(undefined1 *)(lVar34 + 0xf4) = 0;
    *(undefined8 *)(lVar34 + 0x98) = 0x600000001;
    *(undefined8 *)(lVar34 + 0xec) = 0xffffffff00000000;
    *(undefined8 *)(lVar34 + 0xe4) = 0xffffffff00000001;
    *(undefined8 *)(lVar34 + 0xd0) = 0;
    *(undefined8 *)(lVar34 + 0xd8) = 0;
    *(undefined8 *)(lVar34 + 0xc0) = 0;
    *(undefined8 *)(lVar34 + 200) = 0;
    *(undefined8 *)(lVar34 + 0xb0) = 0;
    *(undefined8 *)(lVar34 + 0xb8) = 0;
    *(undefined8 *)(lVar34 + 0xa0) = 0;
    *(undefined8 *)(lVar34 + 0xa8) = 0;
  }
  *(undefined1 *)(lVar34 + 0x160) = 1;
  ppuVar22 = &PTR_DAT_71050aa398;
  uVar25 = 0x23356101e2;
  pppplVar26 = (long ****)0x1;
  FUN_71032cb040(param_1[0x10],param_2,(long ****)&PTR_DAT_71050aa398,(byte ****)0x23356101e2,
                 (long ****)0x1,param_6,param_7,param_8);
  lVar34 = param_1[0x10];
  if (*(undefined8 **)(lVar34 + 0x18) == *(undefined8 **)(lVar34 + 0x10)) goto LAB_7101b0e934;
  *(undefined4 *)
   (*(long *)(*(long *)**(undefined8 **)**(undefined8 **)(lVar34 + 0x10) + 0x600) + 0x10) = 0x20;
  if (*(undefined8 **)(lVar34 + 0x18) == *(undefined8 **)(lVar34 + 0x10)) goto LAB_7101b0e934;
  lVar29 = **(long **)**(undefined8 **)(lVar34 + 0x10);
  puVar13 = (undefined8 *)(lVar34 + 0x3d0);
  if (puVar13 != (undefined8 *)(lVar29 + 8)) {
    **(undefined8 **)(lVar34 + 0x3d8) = **(undefined8 **)(lVar29 + 0x10);
    *(undefined8 *)(*(long *)(lVar34 + 0x3d8) + 8) = *(undefined8 *)(*(long *)(lVar29 + 0x10) + 8);
    lVar35 = *(long *)(lVar29 + 0x10);
    lVar29 = *(long *)(lVar34 + 0x3d8);
    if (lVar29 != lVar35) {
      **(undefined8 **)(lVar29 + 0x18) = **(undefined8 **)(lVar35 + 0x18);
      *(undefined8 *)(*(long *)(lVar29 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar35 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar29 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar35 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar29 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar35 + 0x18) + 0x18);
    }
  }
  FUN_71037780e0(&local_2a0,(long)puVar13,(long ****)"in_00",ppuVar22,uVar25,pppplVar26,param_6,
                 param_7,param_8);
  puVar8 = local_298;
  if ((byte ****)(lVar34 + 0x3e0) != &local_2a0) {
    local_298 = (undefined1 *)0x0;
    uVar14 = *(ulong *)(lVar34 + 1000);
    *(undefined1 **)(lVar34 + 1000) = puVar8;
    if (uVar14 != 0) {
      FUN_710392eb40(uVar14);
    }
  }
  puVar8 = local_298;
  local_2a0 = (byte ***)&PTR_FUN_710523d9e8;
  local_298 = (undefined1 *)0x0;
  if (puVar8 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar8);
  }
  plVar47 = *(long **)(lVar34 + 1000);
  plVar44 = (long *)plVar47[1];
  if (plVar44 != (long *)0x0) {
    if ((char)plVar47[2] != '\0') {
      plVar45 = *(long **)(*plVar47 + 0x80);
      plVar47 = (long *)(*plVar47 + 0x88);
      if (plVar45 != plVar47) {
        do {
          while( true ) {
            uVar14 = (**(code **)(*(long *)plVar45[0xd] + 0x148))();
            if (((uVar14 & 1) != 0) &&
               (uVar14 = (**(code **)(*plVar44 + 0x120))(plVar44,plVar45[0xd]), (uVar14 & 1) != 0))
            {
              (**(code **)(*(long *)plVar45[0xd] + 0x178))();
              (**(code **)(*(long *)plVar45[0xd] + 0x140))((long *)plVar45[0xd],0);
            }
            plVar48 = (long *)plVar45[1];
            if ((long *)plVar45[1] == (long *)0x0) break;
            do {
              plVar45 = plVar48;
              plVar48 = (long *)*plVar45;
            } while ((long *)*plVar45 != (long *)0x0);
LAB_7101b0cd30:
            if (plVar45 == plVar47) goto LAB_7101b0cd48;
          }
          plVar48 = plVar45 + 2;
          plVar46 = (long *)*plVar48;
          if ((long *)*plVar46 != plVar45) {
            do {
              lVar29 = *plVar48;
              plVar48 = (long *)(lVar29 + 0x10);
              plVar45 = (long *)*plVar48;
            } while (*plVar45 != lVar29);
            goto LAB_7101b0cd30;
          }
          plVar45 = plVar46;
        } while (plVar46 != plVar47);
LAB_7101b0cd48:
        plVar44 = *(long **)(*(long *)(lVar34 + 1000) + 8);
      }
    }
    (**(code **)(*plVar44 + 0x188))(plVar44);
  }
  lVar29 = *(long *)(*(long *)(lVar34 + 0x3d8) + 8);
  if ((lVar29 != 0) && (lVar29 = *(long *)(lVar29 + 0x18), lVar29 != 0)) {
    *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) & 0xfe;
  }
  *(undefined1 *)(lVar34 + 0x528) = 1;
  iVar12 = *(int *)(lVar34 + 0x278);
  if (iVar12 == 2) {
    lVar29 = *(long *)(lVar34 + 0x3d8);
    pcVar24 = "view_campaign_search";
LAB_7101b0ce3c:
    FUN_7103778300(0x3f800000,lVar29,(long)pcVar24);
    uVar40 = 2;
  }
  else {
    if (iVar12 == 3) {
      lVar29 = *(long *)(lVar34 + 0x3d8);
      pcVar24 = "view_standard";
    }
    else {
      if (iVar12 != 4) {
        lVar29 = *(long *)(lVar34 + 0x3d8);
        pcVar24 = "view_spirits_board";
        goto LAB_7101b0ce3c;
      }
      lVar29 = *(long *)(lVar34 + 0x3d8);
      pcVar24 = "view_amiibo";
    }
    FUN_7103778300(0x3f800000,lVar29,(long)pcVar24);
    uVar40 = 3;
  }
  *(undefined4 *)(lVar34 + 0x494) = uVar40;
  if (*(int *)(lVar34 + 0x2fc) != 0) {
    FUN_7103776910(&local_2a0,(long)puVar13,(long ****)"set_txt_title",ppuVar22,uVar25,pppplVar26,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_2a0,(char *)(lVar34 + 0x300),ppuVar22,uVar25,pppplVar26,param_6,
                   param_7,param_8);
    puVar8 = local_298;
    local_2a0 = (byte ***)&PTR_FUN_710523d9a8;
    local_298 = (undefined1 *)0x0;
    if (puVar8 != (undefined1 *)0x0) {
      FUN_710392eb40((ulong)puVar8);
    }
    FUN_7103776910(&local_2a0,(long)puVar13,(long ****)"set_txt_title_sdw",ppuVar22,uVar25,
                   pppplVar26,param_6,param_7,param_8);
    FUN_710377a120((long)&local_2a0,(char *)(lVar34 + 0x300),ppuVar22,uVar25,pppplVar26,param_6,
                   param_7,param_8);
    puVar8 = local_298;
    local_2a0 = (byte ***)&PTR_FUN_710523d9a8;
    local_298 = (undefined1 *)0x0;
    if (puVar8 != (undefined1 *)0x0) {
      FUN_710392eb40((ulong)puVar8);
    }
  }
  if (*(int *)(lVar34 + 0x344) != 0) {
    FUN_7103776910(&local_2a0,(long)puVar13,(long ****)"set_txt_01",ppuVar22,uVar25,pppplVar26,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_2a0,(char *)(lVar34 + 0x348),ppuVar22,uVar25,pppplVar26,param_6,
                   param_7,param_8);
    puVar8 = local_298;
    local_2a0 = (byte ***)&PTR_FUN_710523d9a8;
    local_298 = (undefined1 *)0x0;
    if (puVar8 != (undefined1 *)0x0) {
      FUN_710392eb40((ulong)puVar8);
    }
  }
  *(undefined4 *)(lVar34 + 0x500) = 0;
  if (*(int *)(lVar34 + 0x278) == 4) {
    FUN_7103776910(&local_2a0,(long)puVar13,(long ****)"set_txt_num_prize",ppuVar22,uVar25,
                   pppplVar26,param_6,param_7,param_8);
    pcVar24 = "mnu_reward_souvenir_num";
  }
  else {
    FUN_7103776910(&local_2a0,(long)puVar13,(long ****)"set_txt_num_prize",ppuVar22,uVar25,
                   pppplVar26,param_6,param_7,param_8);
    pcVar24 = "mnu_reward_num";
  }
  FUN_710377a120((long)&local_2a0,pcVar24,ppuVar22,uVar25,pppplVar26,param_6,param_7,param_8);
  puVar8 = local_298;
  local_2a0 = (byte ***)&PTR_FUN_710523d9a8;
  local_298 = (undefined1 *)0x0;
  if (puVar8 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar8);
  }
  FUN_7103776910(&local_2a0,(long)puVar13,(long ****)"set_txt_num",ppuVar22,uVar25,pppplVar26,
                 param_6,param_7,param_8);
  ppppbVar21 = (byte ****)(ulong)*(uint *)(lVar34 + 0x500);
  pppplVar23 = (long ****)0x1;
  FUN_710377a280((long)&local_2a0,(byte *)"mnu_reward_n",1);
  puVar8 = local_298;
  local_2a0 = (byte ***)&PTR_FUN_710523d9a8;
  local_298 = (undefined1 *)0x0;
  if (puVar8 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar8);
  }
  pppplVar27 = (long ****)(lVar34 + 0x408);
  FUN_7101aff8b0((long)pppplVar27,(long *)(lVar34 + 0x3b0),pppplVar23,ppppbVar21,pppplVar26,param_6,
                 param_7,param_8);
  if (*(undefined8 **)(lVar34 + 0x18) == *(undefined8 **)(lVar34 + 0x10)) {
LAB_7101b0e934:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  *(undefined4 *)
   (*(long *)(*(long *)**(undefined8 **)**(undefined8 **)(lVar34 + 0x10) + 0x600) + 0x18) = 0x40020;
  if (*(undefined8 **)(lVar34 + 0x18) == *(undefined8 **)(lVar34 + 0x10)) goto LAB_7101b0e934;
  *(undefined4 *)
   (*(long *)(*(long *)**(undefined8 **)**(undefined8 **)(lVar34 + 0x10) + 0x600) + 0x1c) = 0x10;
  if (*(undefined8 **)(lVar34 + 0x18) == *(undefined8 **)(lVar34 + 0x10)) goto LAB_7101b0e934;
  *(undefined4 *)
   (*(long *)(*(long *)**(undefined8 **)**(undefined8 **)(lVar34 + 0x10) + 0x600) + 0x20) = 0x80;
  local_2a0 = (byte ***)0x0;
  ppppbVar21 = &local_2a0;
  local_280 = 0;
  local_220 = (long *)0x0;
  local_1f0 = (long *)0x0;
  local_1c0 = (long *)0x0;
  local_190 = (long *)0x0;
  local_180 = 0;
  local_290 = 1;
  local_28c = 1;
  local_28a = 1;
  local_288 = &DAT_41f0000000000000;
  local_250 = (long *)0x0;
  local_298 = &DAT_00010101;
  FUN_7103770b30((long *)(lVar34 + 0x3f0),puVar13,(long ****)"selector_01",ppppbVar21,pppplVar26,
                 param_6,param_7,param_8);
  FUN_71037717d0((long *)(lVar34 + 0x3f0),0,"set_parts_btn_next",ppppbVar21,pppplVar26,param_6,
                 param_7,param_8);
  FUN_7103771930(*(long *)(lVar34 + 0x3f0),0,(long ****)0x6,(byte ****)0x0,pppplVar26,param_6,
                 param_7,param_8);
  (**(code **)(**(long **)(lVar34 + 0x3f0) + 0x70))(*(long **)(lVar34 + 0x3f0),0);
  plVar47 = (long *)(lVar34 + 0x3f8);
  ppppbVar21 = &local_2a0;
  FUN_7103770b30(plVar47,puVar13,(long ****)"selector_02",ppppbVar21,pppplVar26,param_6,param_7,
                 param_8);
  FUN_71037717d0(plVar47,0,"set_parts_det_key_detail",ppppbVar21,pppplVar26,param_6,param_7,param_8)
  ;
  uVar25 = 0;
  FUN_7103771930(*(long *)(lVar34 + 0x3f8),0,(long ****)&DAT_00000007,(byte ****)0x0,pppplVar26,
                 param_6,param_7,param_8);
  FUN_71037717d0(plVar47,1,"set_parts_det_key_replay",uVar25,pppplVar26,param_6,param_7,param_8);
  ppppbVar21 = (byte ****)0x0;
  FUN_7103771930(*(long *)(lVar34 + 0x3f8),1,(long ****)&DAT_00000008,(byte ****)0x0,pppplVar26,
                 param_6,param_7,param_8);
  (**(code **)(**(long **)(lVar34 + 0x3f8) + 0x70))(*(long **)(lVar34 + 0x3f8),0);
  pppplVar23 = (long ****)0x0;
  FUN_7103771d60(&local_2b0,*(long *)(lVar34 + 0x3f8),(long ****)0x0,ppppbVar21,pppplVar26,param_6,
                 param_7,param_8);
  plVar44 = local_2a8;
  plVar45 = (long *)*local_2a8;
  if (plVar45 == (long *)0x0) {
    lVar29 = 0;
  }
  else {
    (**(code **)(*plVar45 + 0x208))(plVar45,*(undefined1 *)(lVar34 + 0x430));
    uVar14 = (**(code **)(*plVar45 + 0x200))(plVar45);
    if ((uVar14 & 1) == 0) {
      uVar28 = 1;
    }
    else {
      uVar28 = (**(code **)(*plVar45 + 0x210))(plVar45);
      uVar28 = uVar28 ^ 1;
    }
    pppplVar23 = (long ****)0x0;
    (**(code **)(*plVar45 + 0x388))(plVar45,uVar28 & 1);
    lVar29 = *plVar44;
  }
  FUN_710377ad90(&local_3e0,lVar29,pppplVar23,ppppbVar21,pppplVar26,param_6,param_7,param_8);
  plVar44 = local_3d8;
  lVar29 = *local_3d8;
  if (lVar29 != 0) {
    *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) & 0xfe | *(byte *)(lVar34 + 0x430);
  }
  local_3e0 = (byte ***)&PTR_FUN_710523d9a8;
  local_3d8 = (long *)0x0;
  if (plVar44 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar44);
  }
  uVar28 = FUN_710175bf90(0);
  bVar10 = false;
  if ((uVar28 & 1) != 0) {
    bVar10 = *(char *)(lVar34 + 0x388) != '\0';
  }
  pppplVar23 = (long ****)0x1;
  FUN_7103771d60(&local_2c0,*plVar47,(long ****)0x1,ppppbVar21,pppplVar26,param_6,param_7,param_8);
  plVar47 = local_2b8;
  plVar44 = (long *)*local_2b8;
  if (plVar44 == (long *)0x0) {
    lVar29 = 0;
  }
  else {
    (**(code **)(*plVar44 + 0x208))(plVar44,bVar10);
    uVar14 = (**(code **)(*plVar44 + 0x200))(plVar44);
    if ((uVar14 & 1) == 0) {
      uVar28 = 1;
    }
    else {
      uVar28 = (**(code **)(*plVar44 + 0x210))(plVar44);
      uVar28 = uVar28 ^ 1;
    }
    pppplVar23 = (long ****)0x0;
    (**(code **)(*plVar44 + 0x388))(plVar44,uVar28 & 1);
    lVar29 = *plVar47;
  }
  FUN_710377ad90(&local_3e0,lVar29,pppplVar23,ppppbVar21,pppplVar26,param_6,param_7,param_8);
  plVar47 = local_3d8;
  lVar29 = *local_3d8;
  if (lVar29 != 0) {
    *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) & 0xfe | bVar10;
  }
  local_3e0 = (byte ***)&PTR_FUN_710523d9a8;
  local_3d8 = (long *)0x0;
  if (plVar47 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar47);
  }
  local_3c8 = 0;
  local_3d8 = (long *)0x4248000041800000;
  uStack_3d0 = 0x101013f800000;
  local_390 = (long *)0x0;
  local_360 = (long *)0x0;
  local_330 = (long *)0x0;
  pcVar24 = "scroll";
  local_300 = (long *)0x0;
  ppppbVar21 = &local_3e0;
  local_2d0 = (long *)0x0;
  local_3c4 = 0;
  local_3e0 = (byte ***)
              (((ulong)(*(long *)(lVar34 + 0x420) - *(long *)(lVar34 + 0x418)) >> 3) << 0x20);
  local_3c7 = 1;
  local_3c5 = 1;
  local_3c0 = 1;
  FUN_7103781a20((long *)(lVar34 + 0x400),puVar13,(byte ****)"scroll",ppppbVar21,pppplVar27,param_6,
                 param_7,param_8);
  (**(code **)(**(long **)(lVar34 + 0x400) + 0x70))(*(long **)(lVar34 + 0x400),1);
  lVar29 = *(long *)(lVar34 + 0x400);
  local_3f0 = (undefined8 *)0x0;
  puStack_3e8 = (undefined8 *)0x0;
  local_3f8 = (undefined8 *)0x0;
  FUN_71019bb740((ulong *)&local_3f8,*(long *)(lVar29 + 0x170) - *(long *)(lVar29 + 0x168) >> 3,
                 (long ****)pcVar24,ppppbVar21,pppplVar27,param_6,param_7,param_8);
  plVar44 = *(long **)(lVar29 + 0x170);
  puVar15 = local_3f0;
  for (plVar47 = *(long **)(lVar29 + 0x168); local_3f0 = puVar15, plVar47 != plVar44;
      plVar47 = plVar47 + 1) {
    if (puVar15 == puStack_3e8) {
      FUN_71019bb8f0((long *)&local_3f8,(undefined8 *)(*plVar47 + 8),(long ****)pcVar24,ppppbVar21,
                     pppplVar27,param_6,param_7,param_8);
    }
    else {
      FUN_7103776390(puVar15,(undefined8 *)(*plVar47 + 8),(long ****)pcVar24,ppppbVar21,pppplVar27,
                     param_6,param_7,param_8);
      local_3f0 = local_3f0 + 2;
    }
    puVar15 = local_3f0;
  }
  for (puVar16 = local_3f8; puVar16 != puVar15; puVar16 = puVar16 + 2) {
    FUN_7103778300(0x3f800000,puVar16[1],0x710426fbad);
    FUN_7101b11920((long)puVar16,0,(long *********)pcVar24,ppppbVar21,pppplVar27,param_6,param_7,
                   param_8);
    lVar29 = *(long *)(lVar34 + 0x400);
    local_e0._0_4_ = 0;
    local_e0._4_4_ = 0;
    local_d8._0_4_ = 0;
    local_d8._4_4_ = 0;
    local_d0 = (undefined8 *)0x0;
    FUN_71019bb740(&local_e0,*(long *)(lVar29 + 0x170) - *(long *)(lVar29 + 0x168) >> 3,
                   (long ****)pcVar24,ppppbVar21,pppplVar27,param_6,param_7,param_8);
    plVar44 = *(long **)(lVar29 + 0x170);
    puVar52 = (undefined8 *)CONCAT44(local_d8._4_4_,(uint)local_d8);
    for (plVar47 = *(long **)(lVar29 + 0x168); local_d8 = puVar52, plVar47 != plVar44;
        plVar47 = plVar47 + 1) {
      if (puVar52 == local_d0) {
        FUN_71019bb8f0(&local_e0,(undefined8 *)(*plVar47 + 8),(long ****)pcVar24,ppppbVar21,
                       pppplVar27,param_6,param_7,param_8);
      }
      else {
        FUN_7103776390(puVar52,(undefined8 *)(*plVar47 + 8),(long ****)pcVar24,ppppbVar21,pppplVar27
                       ,param_6,param_7,param_8);
        local_d8 = local_d8 + 2;
      }
      puVar52 = local_d8;
    }
    puVar53 = (undefined8 *)CONCAT44(local_e0._4_4_,(uint)local_e0);
    if (puVar53 != puVar52) {
      do {
        FUN_7103776640(&local_128,(long)puVar53,(byte ****)"set_parts_text_scroll",pcVar24,
                       ppppbVar21,pppplVar27,param_6,param_7,param_8);
        if (local_120[1] != 0) {
          puVar51 = *(undefined8 **)(local_120[1] + 0x78);
          if ((DAT_710593ba40 & 1) == 0) {
            iVar12 = __cxa_guard_acquire(&DAT_710593ba40);
            if (iVar12 != 0) {
              if ((DAT_710593ba48 & 1) == 0) {
                iVar12 = __cxa_guard_acquire(&DAT_710593ba48);
                if (iVar12 != 0) {
                  DAT_710593ba50 = 0;
                  __cxa_guard_release(&DAT_710593ba48);
                }
              }
              DAT_710593ba58 = &DAT_710593ba50;
              __cxa_guard_release(&DAT_710593ba40);
            }
          }
          if (puVar51 != (undefined8 *)0x0) {
            puVar17 = (undefined8 *)(**(code **)*puVar51)(puVar51);
            for (; puVar17 != (undefined8 *)0x0; puVar17 = (undefined8 *)*puVar17) {
              if ((undefined8 **)puVar17 == &DAT_710593ba58) {
                lVar29 = puVar51[3];
                *(undefined4 *)(puVar51 + 0xb) = *(undefined4 *)((long)puVar51 + 0x54);
                if (lVar29 != 0) {
                  *(undefined4 *)(lVar29 + 0x30) = *(undefined4 *)((long)puVar51 + 0x54);
                  *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) | 0x10;
                }
                lVar29 = puVar51[4];
                if (lVar29 != 0) {
                  *(undefined4 *)(lVar29 + 0x30) = *(undefined4 *)(puVar51 + 0xb);
                  *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) | 0x10;
                }
                if ((long *)puVar51[5] != (long *)0x0) {
                  (**(code **)(*(long *)puVar51[5] + 0x180))(0);
                }
                plVar47 = (long *)puVar51[6];
                if (plVar47 != (long *)0x0) {
                  if (*(char *)((long)puVar51 + 99) == '\0') {
                    (**(code **)(*plVar47 + 0x180))(0);
                  }
                  else {
                    (**(code **)(*plVar47 + 400))();
                  }
                }
                *(undefined2 *)((long)puVar51 + 100) = 0;
                break;
              }
            }
          }
        }
        plVar47 = local_120;
        FUN_7103778950(local_120[1]);
        local_128 = &PTR_FUN_710523d988;
        local_120 = (long *)0x0;
        if (plVar47 != (long *)0x0) {
          uVar14 = plVar47[3];
          plVar47[2] = (long)&PTR_FUN_710523d9a8;
          plVar47[3] = 0;
          if (uVar14 != 0) {
            FUN_710392eb40(uVar14);
          }
          FUN_710392eb40((ulong)plVar47);
        }
        puVar53 = puVar53 + 2;
      } while (puVar53 != puVar52);
      puVar53 = (undefined8 *)CONCAT44(local_e0._4_4_,(uint)local_e0);
      puVar52 = local_d8;
    }
    if (puVar53 != (undefined8 *)0x0) {
      local_d8._4_4_ = (undefined4)((ulong)puVar53 >> 0x20);
      uVar40 = local_d8._4_4_;
      local_d8 = puVar52;
      puVar51 = puVar53;
      if (puVar52 != puVar53) {
        do {
          puVar52 = puVar52 + -2;
          (**(code **)*puVar52)(puVar52);
        } while (puVar53 != puVar52);
        puVar51 = (undefined8 *)CONCAT44(local_e0._4_4_,(uint)local_e0);
      }
      puVar52 = puVar53;
      if (puVar51 != (undefined8 *)0x0) {
        local_d8._0_4_ = (uint)puVar53;
        local_d8._4_4_ = uVar40;
        FUN_710392eb40((ulong)puVar51);
        puVar52 = (undefined8 *)CONCAT44(local_d8._4_4_,(uint)local_d8);
      }
    }
    local_d8 = puVar52;
    FUN_7103778760(puVar16[1],0x71042c49ba);
  }
  lVar29 = *(long *)(lVar34 + 0x400);
  local_d8._0_4_ = 0;
  local_d8._4_4_ = 0;
  local_d0 = (long *)0x0;
  local_e0._0_4_ = 0;
  local_e0._4_4_ = 0;
  FUN_71019bb740(&local_e0,*(long *)(lVar29 + 0x170) - *(long *)(lVar29 + 0x168) >> 3,
                 (long ****)pcVar24,ppppbVar21,pppplVar27,param_6,param_7,param_8);
  plVar44 = *(long **)(lVar29 + 0x170);
  plVar45 = (long *)CONCAT44(local_d8._4_4_,(uint)local_d8);
  for (plVar47 = *(long **)(lVar29 + 0x168); local_d8 = plVar45, plVar47 != plVar44;
      plVar47 = plVar47 + 1) {
    if (plVar45 == local_d0) {
      FUN_71019bb8f0(&local_e0,(undefined8 *)(*plVar47 + 8),(long ****)pcVar24,ppppbVar21,pppplVar27
                     ,param_6,param_7,param_8);
    }
    else {
      FUN_7103776390(plVar45,(undefined8 *)(*plVar47 + 8),(long ****)pcVar24,ppppbVar21,pppplVar27,
                     param_6,param_7,param_8);
      plVar45 = local_d8 + 2;
      local_d8._0_4_ = (uint)plVar45;
      local_d8._4_4_ = (undefined4)((ulong)plVar45 >> 0x20);
      local_d8 = plVar45;
    }
    plVar45 = local_d8;
  }
  plVar47 = (long *)CONCAT44(local_e0._4_4_,(uint)local_e0);
  if (plVar47 != plVar45) {
    do {
      FUN_7103776640(&local_170,(long)plVar47,(byte ****)"set_part_bonus",pcVar24,ppppbVar21,
                     pppplVar27,param_6,param_7,param_8);
      FUN_71037780e0(&local_128,(long)&local_170,(long ****)&DAT_7104328277,pcVar24,ppppbVar21,
                     pppplVar27,param_6,param_7,param_8);
      puVar8 = (undefined1 *)local_168;
      local_170 = &PTR_FUN_710523d988;
      local_168 = (long *)0x0;
      if (puVar8 != (undefined1 *)0x0) {
        uVar14 = *(ulong *)(puVar8 + 0x18);
        *(undefined ***)(puVar8 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(puVar8 + 0x18) = 0;
        if (uVar14 != 0) {
          FUN_710392eb40(uVar14);
        }
        FUN_710392eb40((ulong)puVar8);
      }
      plVar44 = local_120;
      fVar54 = 0.0;
      if ((long *)local_120[1] != (long *)0x0) {
        fVar54 = (float)(**(code **)(*(long *)local_120[1] + 0x1a8))();
      }
      uVar28 = DAT_71052391c0 ^ DAT_71052391c0 << 0xb;
      DAT_71052391c0 = DAT_71052391c4;
      DAT_71052391c4 = DAT_71052391c8;
      DAT_71052391c8 = DAT_71052391cc;
      uVar28 = uVar28 ^ uVar28 >> 8 ^ DAT_71052391cc ^ DAT_71052391cc >> 0x13;
      DAT_71052391cc = uVar28;
      FUN_710377aee0(0x3f800000,(long)&local_128);
      if ((long *)plVar44[1] != (long *)0x0) {
        uVar14 = (**(code **)(*(long *)plVar44[1] + 0x148))();
        if ((uVar14 & 1) == 0) {
          if ((char)plVar44[2] != '\0') {
            plVar46 = *(long **)(*plVar44 + 0x80);
            plVar48 = (long *)(*plVar44 + 0x88);
            if (plVar46 != plVar48) {
              plVar50 = (long *)plVar44[1];
              do {
                while( true ) {
                  uVar14 = (**(code **)(*(long *)plVar46[0xd] + 0x148))();
                  if ((uVar14 & 1) != 0) {
                    uVar14 = (**(code **)(*plVar50 + 0x120))(plVar50,plVar46[0xd]);
                    if ((uVar14 & 1) != 0) {
                      (**(code **)(*(long *)plVar46[0xd] + 0x178))();
                      (**(code **)(*(long *)plVar46[0xd] + 0x140))((long *)plVar46[0xd],0);
                    }
                  }
                  plVar30 = (long *)plVar46[1];
                  if ((long *)plVar46[1] == (long *)0x0) break;
                  do {
                    plVar46 = plVar30;
                    plVar30 = (long *)*plVar46;
                  } while ((long *)*plVar46 != (long *)0x0);
LAB_7101b0d8f8:
                  if (plVar46 == plVar48) goto LAB_7101b0d910;
                }
                plVar30 = plVar46 + 2;
                plVar36 = (long *)*plVar30;
                if ((long *)*plVar36 != plVar46) {
                  do {
                    lVar29 = *plVar30;
                    plVar30 = (long *)(lVar29 + 0x10);
                    plVar46 = (long *)*plVar30;
                  } while (*plVar46 != lVar29);
                  goto LAB_7101b0d8f8;
                }
                plVar46 = plVar36;
              } while (plVar36 != plVar48);
            }
          }
LAB_7101b0d910:
          (**(code **)(*(long *)plVar44[1] + 0x178))();
        }
        (**(code **)(*(long *)plVar44[1] + 0x1a0))(fVar54 * (float)uVar28 * 2.3283064e-10);
      }
      local_128 = &PTR_FUN_710523d9e8;
      local_120 = (long *)0x0;
      FUN_710392eb40((ulong)plVar44);
      plVar47 = plVar47 + 2;
    } while (plVar47 != plVar45);
    plVar47 = (long *)CONCAT44(local_e0._4_4_,(uint)local_e0);
    plVar45 = local_d8;
  }
  local_d8 = plVar45;
  if (plVar47 != (long *)0x0) {
    local_d8._0_4_ = (uint)plVar47;
    uVar40 = (uint)local_d8;
    local_d8._4_4_ = (undefined4)((ulong)plVar47 >> 0x20);
    uVar9 = local_d8._4_4_;
    plVar44 = plVar47;
    if (plVar45 != plVar47) {
      do {
        plVar45 = plVar45 + -2;
        (**(code **)*plVar45)(plVar45);
      } while (plVar47 != plVar45);
      plVar44 = (long *)CONCAT44(local_e0._4_4_,(uint)local_e0);
    }
    local_d8 = plVar47;
    if (plVar44 != (long *)0x0) {
      local_d8._0_4_ = uVar40;
      local_d8._4_4_ = uVar9;
      FUN_710392eb40((ulong)plVar44);
    }
  }
  uVar28 = *(uint *)(lVar34 + 0x3a8);
  puVar15 = *(undefined8 **)(lVar34 + 0x4e8);
  bVar10 = *(int *)(lVar34 + 0x278) == 3;
  *(undefined8 **)(lVar34 + 0x4f0) = puVar15;
  if (bVar10) {
    uVar28 = 0x811c9dc5;
    if (*(char *)(lVar34 + 0x38d) != '\0') {
      local_128 = (undefined **)0x1800000000;
      local_120 = (long *)&DAT_617765725f756e6d;
      local_118 = 0x73756e6f625f6472;
      local_110 = 0x675f;
      local_10e = 0x65646172;
      local_10a = 0x7075;
      uVar33 = 0x6d;
      local_108 = 0;
      pbVar37 = (byte *)((long)&local_120 + 1);
      uVar38 = uVar28;
      do {
        uVar38 = uVar38 * 0x89 ^ uVar33;
        uVar33 = (uint)*pbVar37;
        pbVar37 = pbVar37 + 1;
      } while (uVar33 != 0);
      local_128 = (undefined **)CONCAT44(0x18,uVar38);
      uVar14 = 0;
      local_e0._0_4_ = (uint)bVar10;
      cVar43 = 'm';
      local_e0._4_4_ = 0x7800;
      local_d8._0_4_ = 0;
      do {
        *(char *)((long)&local_d0 + uVar14) = cVar43;
        if (0x3e < (int)uVar14 + 1U) {
          uVar14 = (ulong)((int)uVar14 + 1);
          break;
        }
        cVar43 = *(char *)((long)&local_120 + uVar14 + 1);
        uVar14 = uVar14 + 1;
      } while (cVar43 != '\0');
      *(undefined1 *)((long)&local_d0 + (uVar14 & 0xffffffff)) = 0;
      uVar38 = (uint)(byte)local_d0;
      local_d8._4_4_ = (int)uVar14;
      local_d8._0_4_ = uVar28;
      if ((byte)local_d0 != 0) {
        pbVar37 = (byte *)((long)&local_d0 + 1);
        do {
          local_d8._0_4_ = (uint)local_d8 * 0x89 ^ uVar38;
          uVar38 = (uint)*pbVar37;
          pbVar37 = pbVar37 + 1;
        } while (uVar38 != 0);
      }
      if (*(undefined8 **)(lVar34 + 0x4f8) <= puVar15) goto LAB_7101b0de48;
      *puVar15 = CONCAT44(0x7800,(uint)bVar10);
      *(undefined4 *)(puVar15 + 1) = 0;
      for (uVar14 = 0; *(char *)((long)&local_d0 + uVar14) != '\0'; uVar14 = uVar14 + 2) {
        *(char *)((long)puVar15 + uVar14 + 0x10) = *(char *)((long)&local_d0 + uVar14);
        if (0x3e < (int)uVar14 + 1U) {
          uVar14 = (ulong)((int)uVar14 + 1);
          break;
        }
        cVar43 = *(char *)((long)&local_d0 + uVar14 + 1);
        if (cVar43 == '\0') {
          uVar14 = uVar14 + 1;
          break;
        }
        *(char *)((long)puVar15 + uVar14 + 0x11) = cVar43;
      }
      *(undefined1 *)((long)puVar15 + (uVar14 & 0xffffffff) + 0x10) = 0;
      uVar38 = (uint)*(byte *)(puVar15 + 2);
      *(int *)((long)puVar15 + 0xc) = (int)uVar14;
      if (*(byte *)(puVar15 + 2) != 0) {
        pbVar37 = (byte *)((long)puVar15 + 0x11);
        do {
          uVar28 = uVar28 * 0x89 ^ uVar38;
          uVar38 = (uint)*pbVar37;
          pbVar37 = pbVar37 + 1;
        } while (uVar38 != 0);
      }
      *(uint *)(puVar15 + 1) = uVar28;
LAB_7101b0dec4:
      local_e0._4_4_ = 0x7800;
      *(long *)(lVar34 + 0x4f0) = *(long *)(lVar34 + 0x4f0) + 0x50;
    }
  }
  else {
    uVar38 = 0x811c9dc5;
    uVar33 = (uint)bVar10;
    if ((uVar28 >> 10 & 1) != 0) {
      local_128 = (undefined **)0x1800000000;
      local_120 = (long *)&DAT_617765725f756e6d;
      local_118 = 0x70735f70755f6472;
      local_110 = 0x7269;
      local_10e = 0x655f7469;
      local_10a = 0x7078;
      uVar42 = 0x6d;
      local_108 = 0;
      pbVar37 = (byte *)((long)&local_120 + 1);
      uVar39 = uVar38;
      do {
        uVar39 = uVar39 * 0x89 ^ uVar42;
        uVar42 = (uint)*pbVar37;
        pbVar37 = pbVar37 + 1;
      } while (uVar42 != 0);
      local_128 = (undefined **)CONCAT44(0x18,uVar39);
      uVar14 = 0;
      local_e0._0_4_ = uVar33;
      cVar43 = 'm';
      local_e0._4_4_ = 0x400;
      local_d8._0_4_ = 0;
      do {
        *(char *)((long)&local_d0 + uVar14) = cVar43;
        if (0x3e < (int)uVar14 + 1U) {
          uVar14 = (ulong)((int)uVar14 + 1);
          break;
        }
        cVar43 = *(char *)((long)&local_120 + uVar14 + 1);
        uVar14 = uVar14 + 1;
      } while (cVar43 != '\0');
      *(undefined1 *)((long)&local_d0 + (uVar14 & 0xffffffff)) = 0;
      uVar39 = (uint)(byte)local_d0;
      local_d8._4_4_ = (int)uVar14;
      local_d8._0_4_ = uVar38;
      if ((byte)local_d0 != 0) {
        pbVar37 = (byte *)((long)&local_d0 + 1);
        do {
          local_d8._0_4_ = (uint)local_d8 * 0x89 ^ uVar39;
          uVar39 = (uint)*pbVar37;
          pbVar37 = pbVar37 + 1;
        } while (uVar39 != 0);
      }
      if (puVar15 < *(undefined8 **)(lVar34 + 0x4f8)) {
        *puVar15 = CONCAT44(0x400,uVar33);
        *(undefined4 *)(puVar15 + 1) = 0;
        for (uVar18 = 0; *(char *)((long)&local_d0 + uVar18) != '\0'; uVar18 = uVar18 + 2) {
          *(char *)((long)puVar15 + uVar18 + 0x10) = *(char *)((long)&local_d0 + uVar18);
          if (0x3e < (int)uVar18 + 1U) {
            uVar18 = (ulong)((int)uVar18 + 1);
            break;
          }
          cVar43 = *(char *)((long)&local_d0 + uVar18 + 1);
          if (cVar43 == '\0') {
            uVar18 = uVar18 + 1;
            break;
          }
          *(char *)((long)puVar15 + uVar18 + 0x11) = cVar43;
        }
        *(undefined1 *)((long)puVar15 + (uVar18 & 0xffffffff) + 0x10) = 0;
        *(int *)((long)puVar15 + 0xc) = (int)uVar18;
        uVar39 = (uint)*(byte *)(puVar15 + 2);
        if (*(byte *)(puVar15 + 2) != 0) {
          pbVar37 = (byte *)((long)puVar15 + 0x11);
          do {
            uVar38 = uVar38 * 0x89 ^ uVar39;
            uVar39 = (uint)*pbVar37;
            pbVar37 = pbVar37 + 1;
          } while (uVar39 != 0);
        }
        *(uint *)(puVar15 + 1) = uVar38;
        *(long *)(lVar34 + 0x4f0) = *(long *)(lVar34 + 0x4f0) + 0x50;
        local_d8 = (long *)CONCAT44((int)uVar14,(uint)local_d8);
      }
      else {
        FUN_7101b0bfc0((long *)(lVar34 + 0x4e8),&local_e0,(long ****)pcVar24,ppppbVar21,pppplVar27,
                       param_6,param_7,param_8);
      }
    }
    if ((uVar28 & 0x7800) != 0) {
      uVar38 = 0x811c9dc5;
      local_160 = 0x65725f70755f6472;
      local_168 = (long *)&DAT_617765725f756e6d;
      local_158 = 0x64726177;
      local_154 = 0;
      uVar39 = 0x6d;
      pbVar37 = (byte *)((long)&local_168 + 1);
      uVar28 = uVar38;
      do {
        uVar28 = uVar28 * 0x89 ^ uVar39;
        uVar39 = (uint)*pbVar37;
        pbVar37 = pbVar37 + 1;
      } while (uVar39 != 0);
      local_170 = (undefined **)CONCAT44(0x14,uVar28);
      uVar14 = 0;
      local_e0._0_4_ = uVar33;
      cVar43 = 'm';
      local_e0._4_4_ = 0x7800;
      local_d8._0_4_ = 0;
      do {
        *(char *)((long)&local_d0 + uVar14) = cVar43;
        if (0x3e < (int)uVar14 + 1U) {
          uVar14 = (ulong)((int)uVar14 + 1);
          break;
        }
        cVar43 = *(char *)((long)&local_168 + uVar14 + 1);
        uVar14 = uVar14 + 1;
      } while (cVar43 != '\0');
      *(undefined1 *)((long)&local_d0 + (uVar14 & 0xffffffff)) = 0;
      local_d8._4_4_ = (int)uVar14;
      uVar28 = (uint)(byte)local_d0;
      local_d8._0_4_ = uVar38;
      if (uVar28 != 0) {
        pbVar37 = (byte *)((long)&local_d0 + 1);
        do {
          local_d8._0_4_ = (uint)local_d8 * 0x89 ^ uVar28;
          uVar28 = (uint)*pbVar37;
          pbVar37 = pbVar37 + 1;
        } while (uVar28 != 0);
      }
      puVar15 = *(undefined8 **)(lVar34 + 0x4f0);
      if (puVar15 < *(undefined8 **)(lVar34 + 0x4f8)) {
        *(undefined4 *)(puVar15 + 1) = 0;
        *puVar15 = CONCAT44(0x7800,uVar33);
        uVar14 = 0;
        bVar6 = (byte)local_d0;
        while (bVar6 != 0) {
          *(byte *)((long)puVar15 + uVar14 + 0x10) = bVar6;
          if (0x3e < (int)uVar14 + 1U) {
            uVar14 = (ulong)((int)uVar14 + 1);
            break;
          }
          cVar43 = *(char *)((long)&local_d0 + uVar14 + 1);
          if (cVar43 == '\0') {
            uVar14 = uVar14 + 1;
            break;
          }
          *(char *)((long)puVar15 + uVar14 + 0x11) = cVar43;
          lVar29 = uVar14 + 2;
          uVar14 = uVar14 + 2;
          bVar6 = *(byte *)((long)&local_d0 + lVar29);
        }
        *(undefined1 *)((long)puVar15 + (uVar14 & 0xffffffff) + 0x10) = 0;
        *(int *)((long)puVar15 + 0xc) = (int)uVar14;
        uVar28 = (uint)*(byte *)(puVar15 + 2);
        if (*(byte *)(puVar15 + 2) != 0) {
          pbVar37 = (byte *)((long)puVar15 + 0x11);
          do {
            uVar38 = uVar38 * 0x89 ^ uVar28;
            uVar28 = (uint)*pbVar37;
            pbVar37 = pbVar37 + 1;
          } while (uVar28 != 0);
        }
        *(uint *)(puVar15 + 1) = uVar38;
        goto LAB_7101b0dec4;
      }
LAB_7101b0de48:
      local_e0._4_4_ = 0x7800;
      FUN_7101b0bfc0((long *)(lVar34 + 0x4e8),&local_e0,(long ****)pcVar24,ppppbVar21,pppplVar27,
                     param_6,param_7,param_8);
    }
  }
  if (*(int *)(lVar34 + 0x278) == 3) {
    uVar28 = *(int *)(lVar34 + 0x3a0) - *(int *)(lVar34 + 0x39c);
    *(int *)(lVar34 + 0x49c) = *(int *)(lVar34 + 0x39c);
    if (0x59 < uVar28) {
      uVar28 = 0x5a;
    }
    *(uint *)(lVar34 + 0x498) = uVar28;
    FUN_7103776910(&local_e0,(long)puVar13,(long ****)"set_txt_score",pcVar24,ppppbVar21,pppplVar27,
                   param_6,param_7,param_8);
    uVar14 = (ulong)*(uint *)(lVar34 + 0x49c);
    FUN_710377a310((long)&local_e0,1);
    plVar47 = local_d8;
    local_e0._0_4_ = 0x523d9a8;
    local_e0._4_4_ = 0x71;
    local_d8._0_4_ = 0;
    local_d8._4_4_ = 0;
    if (plVar47 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar47);
    }
    FUN_71037780e0(&local_e0,(long)puVar13,(long ****)"in_standard_score",uVar14,ppppbVar21,
                   pppplVar27,param_6,param_7,param_8);
    plVar47 = (long *)CONCAT44(local_d8._4_4_,(uint)local_d8);
    plVar44 = (long *)plVar47[1];
    if (plVar44 == (long *)0x0) {
      local_e0._0_4_ = 0x523d9e8;
      local_e0._4_4_ = 0x71;
      local_d8._0_4_ = 0;
      local_d8._4_4_ = 0;
      if (plVar47 != (long *)0x0) goto LAB_7101b0e434;
    }
    else {
      if ((char)plVar47[2] != '\0') {
        plVar48 = *(long **)(*plVar47 + 0x80);
        plVar45 = (long *)(*plVar47 + 0x88);
        if (plVar48 != plVar45) {
          do {
            while( true ) {
              uVar18 = (**(code **)(*(long *)plVar48[0xd] + 0x148))();
              if (((uVar18 & 1) != 0) &&
                 (uVar18 = (**(code **)(*plVar44 + 0x120))(plVar44,plVar48[0xd]), (uVar18 & 1) != 0)
                 ) {
                (**(code **)(*(long *)plVar48[0xd] + 0x178))();
                (**(code **)(*(long *)plVar48[0xd] + 0x140))((long *)plVar48[0xd],0);
              }
              plVar46 = (long *)plVar48[1];
              if ((long *)plVar48[1] == (long *)0x0) break;
              do {
                plVar48 = plVar46;
                plVar46 = (long *)*plVar48;
              } while ((long *)*plVar48 != (long *)0x0);
LAB_7101b0e008:
              if (plVar48 == plVar45) goto LAB_7101b0e020;
            }
            plVar46 = plVar48 + 2;
            plVar50 = (long *)*plVar46;
            if ((long *)*plVar50 != plVar48) {
              do {
                lVar29 = *plVar46;
                plVar46 = (long *)(lVar29 + 0x10);
                plVar48 = (long *)*plVar46;
              } while (*plVar48 != lVar29);
              goto LAB_7101b0e008;
            }
            plVar48 = plVar50;
          } while (plVar50 != plVar45);
LAB_7101b0e020:
          plVar44 = (long *)plVar47[1];
        }
      }
      (**(code **)(*plVar44 + 0x188))(plVar44);
LAB_7101b0e434:
      local_d8._4_4_ = 0;
      local_d8._0_4_ = 0;
      local_e0._4_4_ = 0x71;
      local_e0._0_4_ = 0x523d9e8;
      FUN_710392eb40((ulong)plVar47);
    }
    FUN_7103776640(&local_128,(long)puVar13,(byte ****)"set_parts_num_value",uVar14,ppppbVar21,
                   pppplVar27,param_6,param_7,param_8);
    FUN_7103776910(&local_e0,(long)&local_128,(long ****)"set_txt_num",uVar14,ppppbVar21,pppplVar27,
                   param_6,param_7,param_8);
    uVar18 = (ulong)*(uint *)(lVar34 + 0x390);
    uVar25 = 1;
    FUN_710377a280((long)&local_e0,(byte *)"mnu_reward_value_n",1);
    uVar14 = CONCAT44(local_d8._4_4_,(uint)local_d8);
    local_e0._0_4_ = 0x523d9a8;
    local_e0._4_4_ = 0x71;
    local_d8._0_4_ = 0;
    local_d8._4_4_ = 0;
    if (uVar14 != 0) {
      FUN_710392eb40(uVar14);
    }
    plVar47 = local_120;
    local_128 = &PTR_FUN_710523d988;
    local_120 = (long *)0x0;
    if (plVar47 != (long *)0x0) {
      uVar14 = plVar47[3];
      plVar47[2] = (long)&PTR_FUN_710523d9a8;
      plVar47[3] = 0;
      if (uVar14 != 0) {
        FUN_710392eb40(uVar14);
      }
      FUN_710392eb40((ulong)plVar47);
    }
    FUN_7103776640(&local_128,(long)puVar13,(byte ****)"set_parts_num_bonus_game",uVar25,uVar18,
                   pppplVar27,param_6,param_7,param_8);
    FUN_7103776910(&local_e0,(long)&local_128,(long ****)"set_txt_num",uVar25,uVar18,pppplVar27,
                   param_6,param_7,param_8);
    uVar18 = (ulong)*(uint *)(lVar34 + 0x394);
    uVar25 = 1;
    FUN_710377a280((long)&local_e0,(byte *)"mnu_reward_bonusgame_n",1);
    uVar14 = CONCAT44(local_d8._4_4_,(uint)local_d8);
    local_e0._0_4_ = 0x523d9a8;
    local_e0._4_4_ = 0x71;
    local_d8._0_4_ = 0;
    local_d8._4_4_ = 0;
    if (uVar14 != 0) {
      FUN_710392eb40(uVar14);
    }
    uVar14 = (ulong)local_120;
    local_128 = &PTR_FUN_710523d988;
    local_120 = (long *)0x0;
    if (uVar14 != 0) {
      uVar19 = *(ulong *)(uVar14 + 0x18);
      *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar14 + 0x18) = 0;
      if (uVar19 != 0) {
        FUN_710392eb40(uVar19);
      }
      FUN_710392eb40(uVar14);
    }
    FUN_7103776640(&local_128,(long)puVar13,(byte ****)"set_parts_num_ending",uVar25,uVar18,
                   pppplVar27,param_6,param_7,param_8);
    FUN_7103776910(&local_e0,(long)&local_128,(long ****)"set_txt_num",uVar25,uVar18,pppplVar27,
                   param_6,param_7,param_8);
    FUN_710377a280((long)&local_e0,(byte *)"mnu_reward_ending_n",1);
    uVar14 = CONCAT44(local_d8._4_4_,(uint)local_d8);
    local_e0._0_4_ = 0x523d9a8;
    local_e0._4_4_ = 0x71;
    local_d8._0_4_ = 0;
    local_d8._4_4_ = 0;
    if (uVar14 != 0) {
      FUN_710392eb40(uVar14);
    }
    uVar14 = (ulong)local_120;
    local_128 = &PTR_FUN_710523d988;
    local_120 = (long *)0x0;
    if (uVar14 != 0) {
      uVar18 = *(ulong *)(uVar14 + 0x18);
      *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar14 + 0x18) = 0;
      if (uVar18 != 0) {
        FUN_710392eb40(uVar18);
      }
      FUN_710392eb40(uVar14);
    }
    if (*(char *)(lVar34 + 0x38c) == '\0') {
      pcVar24 = "view_standard_ending_off";
    }
    else {
      pcVar24 = "view_standard_ending_on";
    }
    FUN_7103778300(0x3f800000,*(long *)(lVar34 + 0x3d8),(long)pcVar24);
  }
  else {
    FUN_7103776640(&local_128,(long)puVar13,(byte ****)"set_parts_lvup",pcVar24,ppppbVar21,
                   pppplVar27,param_6,param_7,param_8);
    plVar47 = local_120;
    if (*(uint *)(lVar34 + 0x2f4) < 4) {
      if ((local_120[1] != 0) && (lVar29 = *(long *)(local_120[1] + 0x18), lVar29 != 0)) {
        *(byte *)(lVar29 + 0x58) =
             *(byte *)(lVar29 + 0x58) & 0xfe |
             *(short *)(lVar34 + (long)(int)*(uint *)(lVar34 + 0x2f4) * 0x14 + 0x2a8) != -1;
      }
      FUN_7103778760((long)local_120,0x71042e6c4e);
      uVar25 = extraout_x1_10;
    }
    else {
      uVar25 = extraout_x1_09;
      if ((local_120[1] != 0) && (lVar29 = *(long *)(local_120[1] + 0x18), lVar29 != 0)) {
        *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) & 0xfe;
      }
    }
    lVar29 = 0;
    bVar10 = false;
    lVar35 = -4;
    lVar49 = 0x470;
    do {
      uVar14 = lVar35 + 4;
      FUN_7103776290(&local_170,uVar25,(long ****)pcVar24,ppppbVar21,pppplVar27,param_6,param_7,
                     param_8);
      if (*(int *)(lVar34 + 0x278) == 2) {
        pcVar24 = "set_parts_spirit_s%d";
      }
      else {
        pcVar24 = "set_parts_spirit_p%d";
      }
      FUN_7103776640(&local_e0,(long)puVar13,(byte ****)pcVar24,(ulong)((int)lVar35 + 5),ppppbVar21,
                     pppplVar27,param_6,param_7,param_8);
      puVar8 = (undefined1 *)local_168;
      plVar44 = local_d8;
      local_d8._0_4_ = 0;
      local_d8._4_4_ = 0;
      if (local_168 != (long *)0x0) {
        uVar18 = *(ulong *)((long)local_168 + 0x18);
        *(undefined ***)((long)local_168 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)local_168 + 0x18) = 0;
        local_168 = plVar44;
        if (uVar18 != 0) {
          FUN_710392eb40(uVar18);
        }
        FUN_710392eb40((ulong)puVar8);
        plVar44 = local_168;
      }
      local_168 = plVar44;
      local_e0._0_4_ = 0x523d988;
      local_e0._4_4_ = 0x71;
      local_d8._0_4_ = 0;
      local_d8._4_4_ = 0;
      plVar44 = local_168;
      if ((uVar14 == *(uint *)(lVar34 + 0x2f4)) && (*(int *)(lVar34 + 0x278) != 2)) {
        if ((local_168[1] != 0) && (lVar31 = *(long *)(local_168[1] + 0x18), lVar31 != 0)) {
          *(byte *)(lVar31 + 0x58) = *(byte *)(lVar31 + 0x58) & 0xfe;
        }
        *local_168 = *plVar47;
        local_168[1] = plVar47[1];
        plVar44 = plVar47;
        if (local_168 != plVar47) {
          *(undefined8 *)local_168[3] = *(undefined8 *)plVar47[3];
          *(undefined8 *)(local_168[3] + 8) = *(undefined8 *)(plVar47[3] + 8);
          *(undefined8 *)(local_168[3] + 0x10) = *(undefined8 *)(plVar47[3] + 0x10);
          *(undefined8 *)(local_168[3] + 0x18) = *(undefined8 *)(plVar47[3] + 0x18);
          plVar44 = local_168;
        }
      }
      else if ((local_168[1] != 0) && (lVar31 = *(long *)(local_168[1] + 0x18), lVar31 != 0)) {
        *(byte *)(lVar31 + 0x58) = *(byte *)(lVar31 + 0x58) | 1;
      }
      FUN_7103778760((long)plVar44,0x710428ff7d);
      plVar44 = (long *)(lVar34 + lVar49);
      uVar25 = 1;
      FUN_710339b5e0(plVar44,(long)&local_170,1,ppppbVar21,pppplVar27,param_6,param_7,param_8);
      lVar31 = lVar34 + lVar29;
      if (*(char *)(lVar31 + 0x2b4) == '\0') {
        **(undefined2 **)(lVar34 + lVar49) = 0xffff;
        FUN_710339ae90(*(short **)(lVar34 + lVar49),extraout_x1_11,uVar25,ppppbVar21,pppplVar27,
                       param_6,param_7,param_8);
        pcVar24 = (char *)0x0;
        FUN_710339b6b0(plVar44,0,0);
        if (uVar14 != *(uint *)(lVar34 + 0x2f4)) goto LAB_7101b0e2f4;
LAB_7101b0e2bc:
        bVar11 = true;
      }
      else {
        uVar40 = 0x2f;
        if (*(int *)(lVar34 + 0x278) != 2) {
          uVar40 = 0x18;
        }
        *(undefined4 *)(*(long *)(lVar34 + lVar49) + 4) = uVar40;
        *(int *)(*(long *)(lVar34 + lVar49) + 8) = (int)lVar35 + 5;
        FUN_710339ae90(*(short **)(lVar34 + lVar49),extraout_x1_11,uVar25,ppppbVar21,pppplVar27,
                       param_6,param_7,param_8);
        **(undefined2 **)(lVar34 + lVar49) = *(undefined2 *)(lVar31 + 0x2a8);
        FUN_710339ae90(*(short **)(lVar34 + lVar49),extraout_x1_12,uVar25,ppppbVar21,pppplVar27,
                       param_6,param_7,param_8);
        pcVar24 = (char *)(ulong)*(uint *)(lVar31 + 0x2b0);
        FUN_710339b6b0(plVar44,*(uint *)(lVar31 + 0x2ac),*(uint *)(lVar31 + 0x2b0));
        bVar10 = (bool)(bVar10 | uVar14 != *(uint *)(lVar34 + 0x2f4));
        if (uVar14 == *(uint *)(lVar34 + 0x2f4)) goto LAB_7101b0e2bc;
LAB_7101b0e2f4:
        bVar11 = *(int *)(lVar34 + 0x278) == 2;
      }
      *(bool *)(*(long *)(lVar34 + lVar49) + 0xa8) = bVar11;
      FUN_710339bba0(plVar44,*(long **)(lVar34 + 0x270),pcVar24,ppppbVar21,pppplVar27,param_6,
                     param_7,param_8);
      FUN_710339ba00(plVar44,extraout_x1_13,pcVar24,ppppbVar21,pppplVar27,param_6,param_7,param_8);
      lVar31 = *(long *)(lVar34 + lVar49);
      uVar25 = extraout_x1_14;
      if (*(long *)(*(long *)(lVar31 + 0x18) + 8) != 0) {
        FUN_7103776910(&local_e0,lVar31 + 0x10,(long ****)"set_txt_sp_level",pcVar24,ppppbVar21,
                       pppplVar27,param_6,param_7,param_8);
        ppppbVar21 = (byte ****)(ulong)*(uint *)(lVar31 + 0x50);
        pcVar24 = (char *)0x1;
        FUN_710377a280((long)&local_e0,(byte *)"mel_result_item_unit_35_00",1);
        uVar14 = CONCAT44(local_d8._4_4_,(uint)local_d8);
        local_e0._0_4_ = 0x523d9a8;
        local_e0._4_4_ = 0x71;
        local_d8._0_4_ = 0;
        local_d8._4_4_ = 0;
        uVar25 = extraout_x1_15;
        if (uVar14 != 0) {
          FUN_710392eb40(uVar14);
          uVar25 = extraout_x1_16;
        }
        lVar31 = *(long *)(*(long *)(lVar34 + lVar49) + 0x18);
        if (*(long *)(lVar31 + 8) != 0) {
          uVar28 = NEON_ucvtf(*(undefined4 *)(*(long *)(lVar34 + lVar49) + 0x58));
          FUN_7103778630((ulong)uVar28,lVar31,0x7104464398);
          uVar25 = extraout_x1_17;
        }
      }
      plVar44 = local_168;
      local_170 = &PTR_FUN_710523d988;
      local_168 = (long *)0x0;
      if (plVar44 != (long *)0x0) {
        uVar14 = plVar44[3];
        plVar44[2] = (long)&PTR_FUN_710523d9a8;
        plVar44[3] = 0;
        if (uVar14 != 0) {
          FUN_710392eb40(uVar14);
        }
        FUN_710392eb40((ulong)plVar44);
        uVar25 = extraout_x1_18;
      }
      lVar29 = lVar29 + 0x14;
      lVar35 = lVar35 + 1;
      lVar49 = lVar49 + 8;
    } while (lVar29 != 0x50);
    if (bVar10) {
      pcVar24 = "spirit_gauge_multi";
    }
    else {
      pcVar24 = "spirit_gauge_single";
    }
    FUN_7103778300(0x3f800000,*(long *)(lVar34 + 0x3d8),(long)pcVar24);
    local_128 = &PTR_FUN_710523d988;
    local_120 = (long *)0x0;
    if (plVar47 != (long *)0x0) {
      uVar14 = plVar47[3];
      plVar47[2] = (long)&PTR_FUN_710523d9a8;
      plVar47[3] = 0;
      if (uVar14 != 0) {
        FUN_710392eb40(uVar14);
      }
      FUN_710392eb40((ulong)plVar47);
    }
  }
  if (*(undefined8 **)(lVar34 + 0x18) == *(undefined8 **)(lVar34 + 0x10)) {
LAB_7101b0e93c:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  FUN_71037760f0(*(long *)**(undefined8 **)**(undefined8 **)(lVar34 + 0x10),0);
  if (*(undefined8 **)(lVar34 + 0x40) != (undefined8 *)0x0) {
    plVar47 = (long *)**(undefined8 **)(lVar34 + 0x40);
    if (plVar47 == (long *)0x0) {
      lVar29 = 0;
    }
    else {
      lVar29 = *plVar47;
    }
    if (*(undefined8 **)(lVar34 + 0x18) == *(undefined8 **)(lVar34 + 0x10)) goto LAB_7101b0e93c;
    FUN_71033743c0(lVar29,"layout_root",*(undefined8 *)**(undefined8 **)(lVar34 + 0x10));
  }
  puVar15 = local_3f8;
  puVar13 = local_3f0;
  if (local_3f8 != (undefined8 *)0x0) {
    while (puVar13 != puVar15) {
      puVar13 = (undefined8 *)((long)puVar13 + 0xfffffffffffffff0);
      (**(code **)*puVar13)(puVar13);
    }
    local_3f0 = puVar15;
    if (local_3f8 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)local_3f8);
    }
  }
  if (alStack_2f0 == local_2d0) {
    pcVar32 = *(code **)(*local_2d0 + 0x20);
LAB_7101b0e6cc:
    (*pcVar32)();
  }
  else if (local_2d0 != (long *)0x0) {
    pcVar32 = *(code **)(*local_2d0 + 0x28);
    goto LAB_7101b0e6cc;
  }
  if (alStack_320 == local_300) {
    pcVar32 = *(code **)(*local_300 + 0x20);
LAB_7101b0e6fc:
    (*pcVar32)();
  }
  else if (local_300 != (long *)0x0) {
    pcVar32 = *(code **)(*local_300 + 0x28);
    goto LAB_7101b0e6fc;
  }
  if (alStack_350 == local_330) {
    pcVar32 = *(code **)(*local_330 + 0x20);
LAB_7101b0e72c:
    (*pcVar32)();
  }
  else if (local_330 != (long *)0x0) {
    pcVar32 = *(code **)(*local_330 + 0x28);
    goto LAB_7101b0e72c;
  }
  if (alStack_380 == local_360) {
    pcVar32 = *(code **)(*local_360 + 0x20);
LAB_7101b0e75c:
    (*pcVar32)();
  }
  else if (local_360 != (long *)0x0) {
    pcVar32 = *(code **)(*local_360 + 0x28);
    goto LAB_7101b0e75c;
  }
  if (alStack_3b0 == local_390) {
    pcVar32 = *(code **)(*local_390 + 0x20);
LAB_7101b0e78c:
    (*pcVar32)();
  }
  else if (local_390 != (long *)0x0) {
    pcVar32 = *(code **)(*local_390 + 0x28);
    goto LAB_7101b0e78c;
  }
  plVar47 = local_2b8;
  local_2c0 = &PTR_FUN_710523d9c8;
  local_2b8 = (long *)0x0;
  if (plVar47 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar47);
  }
  plVar47 = local_2a8;
  local_2b0 = &PTR_FUN_710523d9c8;
  local_2a8 = (long *)0x0;
  if (plVar47 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar47);
  }
  if (alStack_1b0 == local_190) {
    pcVar32 = *(code **)(*local_190 + 0x20);
LAB_7101b0e7e4:
    (*pcVar32)();
  }
  else if (local_190 != (long *)0x0) {
    pcVar32 = *(code **)(*local_190 + 0x28);
    goto LAB_7101b0e7e4;
  }
  if (alStack_1e0 == local_1c0) {
    pcVar32 = *(code **)(*local_1c0 + 0x20);
LAB_7101b0e814:
    (*pcVar32)();
  }
  else if (local_1c0 != (long *)0x0) {
    pcVar32 = *(code **)(*local_1c0 + 0x28);
    goto LAB_7101b0e814;
  }
  if (alStack_210 == local_1f0) {
    pcVar32 = *(code **)(*local_1f0 + 0x20);
LAB_7101b0e844:
    (*pcVar32)();
  }
  else if (local_1f0 != (long *)0x0) {
    pcVar32 = *(code **)(*local_1f0 + 0x28);
    goto LAB_7101b0e844;
  }
  if (alStack_240 == local_220) {
    pcVar32 = *(code **)(*local_220 + 0x20);
  }
  else {
    if (local_220 == (long *)0x0) goto LAB_7101b0e878;
    pcVar32 = *(code **)(*local_220 + 0x28);
  }
  (*pcVar32)();
LAB_7101b0e878:
  if (alStack_270 == local_250) {
    pcVar32 = *(code **)(*local_250 + 0x20);
  }
  else {
    if (local_250 == (long *)0x0) {
      return;
    }
    pcVar32 = *(code **)(*local_250 + 0x28);
  }
  (*pcVar32)();
  return;
}

