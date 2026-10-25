// addr:      710230d4c0
// offset:    0x230d4c0
// name:      FUN_710230d4c0
// mangled:   
// signature: undefined __cdecl FUN_710230d4c0(long param_1, long param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, byte * * * * param_6, long * * * param_7, long * * * param_8)


/* WARNING: Removing unreachable block (ram,0x00710230e260) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710230d4c0(long param_1,long param_2,undefined **param_3,byte ****param_4,long ****param_5,
                   byte ****param_6,long ***param_7,long ***param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  byte bVar9;
  undefined4 uVar10;
  undefined2 uVar11;
  undefined4 uVar12;
  bool bVar13;
  bool bVar14;
  byte bVar15;
  int iVar16;
  long lVar19;
  ulong uVar20;
  uint uVar17;
  int iVar18;
  int *piVar21;
  ulong uVar22;
  undefined8 uVar23;
  int *piVar24;
  void *__dest;
  uint *puVar25;
  ulong extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  int *extraout_x1_07;
  int *extraout_x1_08;
  int *extraout_x1_09;
  int *extraout_x1_10;
  int *extraout_x1_11;
  int *extraout_x1_12;
  int *extraout_x1_13;
  int *extraout_x1_14;
  long *********ppppppppplVar26;
  undefined **ppuVar27;
  long ****pppplVar28;
  byte bVar29;
  short sVar30;
  long lVar31;
  long lVar32;
  undefined4 *puVar33;
  uint *puVar34;
  long *plVar35;
  long *plVar36;
  long **pplVar37;
  code *pcVar38;
  long ***ppplVar39;
  uint *puVar40;
  uint *puVar41;
  undefined8 uVar42;
  uint uVar43;
  uint uVar44;
  long lVar45;
  undefined8 uVar46;
  long *plVar47;
  uint uVar48;
  ulong uVar49;
  byte *pbVar50;
  undefined2 *puVar51;
  long *plVar52;
  uint *puVar53;
  ulong *puVar54;
  undefined8 *puVar55;
  Uid *pUVar56;
  long *plVar57;
  undefined8 *puVar58;
  void *__src;
  uint uVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined2 *local_920;
  undefined2 *local_918;
  uint local_8c8;
  uint local_8b0;
  byte bStack_8ac;
  undefined2 uStack_8ab;
  undefined1 uStack_8a9;
  uint local_8a8;
  byte bStack_8a4;
  undefined2 uStack_8a3;
  undefined1 uStack_8a1;
  undefined2 local_8a0;
  undefined3 uStack_89e;
  undefined3 uStack_89b;
  undefined2 local_898;
  undefined8 local_894;
  undefined2 local_88c;
  uint local_888 [2];
  ushort auStack_880 [18];
  undefined8 local_85c;
  undefined2 local_854;
  undefined5 uStack_850;
  undefined3 local_84b;
  undefined5 uStack_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined2 local_830;
  undefined8 auStack_828 [17];
  undefined8 local_7a0;
  byte local_798 [264];
  long lStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined1 local_678;
  long *local_670;
  long alStack_660 [4];
  long *local_640;
  long alStack_630 [4];
  long *local_610;
  long alStack_600 [4];
  long *local_5e0;
  long alStack_5d0 [4];
  long *local_5b0;
  undefined1 local_454;
  undefined8 local_450;
  undefined8 local_448;
  undefined2 local_440;
  undefined2 local_410;
  undefined1 uStack_40e;
  undefined1 uStack_40d;
  undefined2 uStack_40c;
  undefined2 uStack_40a;
  undefined6 uStack_408;
  undefined2 local_402;
  undefined6 uStack_400;
  undefined2 local_3fa;
  undefined1 local_3f8;
  undefined8 local_3f4;
  undefined8 local_3ec;
  undefined8 local_3e4;
  undefined4 local_3dc;
  undefined8 local_3d8;
  int local_3d0 [102];
  undefined8 local_238;
  int *local_230;
  int *local_228;
  long ***local_220;
  ulong *local_218;
  undefined8 local_210;
  long local_208;
  long ****local_200;
  undefined8 local_110;
  undefined2 local_108;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined1 *local_80;
  undefined4 local_6c [3];
  
  if (*(int *)(param_1 + 0x17c) == 0) {
    FUN_710240b440(2,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    lVar32 = DAT_710532f8b8;
    *(undefined8 *)(*(long *)(*(long *)(DAT_710532f8b8 + 8) + 0x68) + 0x70) = 1;
    lVar19 = *(long *)(*(long *)(lVar32 + 8) + 0x68);
    param_3 = (undefined **)(long)*(int *)(lVar19 + 0x70);
    param_4 = (byte ****)(ulong)*(uint *)(lVar19 + 0x68);
    FUN_710323c1c0(lVar19,(ulong *)&DAT_710455da98,(long *********)param_3,param_4,param_5,param_6,
                   param_7,param_8);
    *(undefined8 *)(*(long *)(*(long *)(lVar32 + 8) + 0x68) + 0x70) = 0;
  }
  bVar15 = FUN_710240bf50(2);
  if (((bVar15 & 1) == 0) ||
     (uVar20 = FUN_710323d010(*(long *)(*(long *)(DAT_710532f8b8 + 8) + 0x68),1,
                              (long *********)param_3,param_4,param_5,param_6,param_7,param_8),
     (uVar20 & 1) == 0)) {
    return;
  }
  FUN_710240c410(2,extraout_x1,(long *********)param_3,param_4,param_5,param_6,param_7,param_8);
  lVar32 = DAT_710532f8b8;
  lVar19 = *(long *)(*(long *)(DAT_710532f8b8 + 8) + 0x68);
  if (((DAT_710532f4d8 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_710532f4d8), iVar16 != 0)) {
    DAT_710532f4a4 = 0xffffff;
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_710532f4d8);
    lVar45 = *(long *)(lVar19 + 0x28);
    if (lVar45 == 0) goto LAB_710230d5d0;
LAB_710230d58c:
    lVar31 = lVar19 + 0x28;
    do {
      bVar13 = (*(ulong *)(lVar45 + 0x20) & 0xfffffffffe) < 0xea88dcf86;
      if (!bVar13) {
        lVar31 = lVar45;
      }
      lVar45 = *(long *)(lVar45 + (ulong)bVar13 * 8);
    } while (lVar45 != 0);
    if ((lVar31 == lVar19 + 0x28) || (0xea88dcf86 < (*(ulong *)(lVar31 + 0x20) & 0xffffffffff)))
    goto LAB_710230d5d0;
    ppppppppplVar26 = (long *********)(lVar31 + 0x28);
  }
  else {
    lVar45 = *(long *)(lVar19 + 0x28);
    if (lVar45 != 0) goto LAB_710230d58c;
LAB_710230d5d0:
    ppppppppplVar26 = (long *********)&DAT_710532f4a4;
  }
  if (*(int *)ppppppppplVar26 != 0xffffff) {
    param_3 = (undefined **)0x0;
    iVar16 = FUN_710330a8f0(*(long **)(lVar32 + 8),(ulong *)&DAT_710455da98,(long ****)0x0,param_4,
                            param_5,param_6,param_7,param_8);
    if (iVar16 != 0) {
      FUN_7103563a20(*lib::Singleton<lib::EffectManager>::instance_,iVar16,ppppppppplVar26,param_4,
                     param_5,(ulong)param_6,param_7,param_8);
      param_3 = (undefined **)ppppppppplVar26;
    }
  }
  *(undefined1 *)(DAT_71052c50f0 + 0x5c2) = 0;
  lVar19 = *(long *)(*(long *)(*(long *)(DAT_710532f7f0 + 8) + 8) + 0x80);
  FUN_7103776910((undefined8 *)&local_8b0,**(long **)(lVar19 + 0x130) + 8,(long ****)"set_txt_key",
                 param_3,param_4,param_5,param_6,param_7,param_8);
  plVar35 = (long *)CONCAT17(uStack_8a1,CONCAT25(uStack_8a3,CONCAT14(bStack_8a4,local_8a8)));
  lVar32 = *plVar35;
  if (lVar32 != 0) {
    *(byte *)(lVar32 + 0x58) = *(byte *)(lVar32 + 0x58) | 1;
  }
  local_8b0 = 0x523d9a8;
  bStack_8ac = 0x71;
  uStack_8ab = 0;
  uStack_8a9 = 0;
  local_8a8 = 0;
  bStack_8a4 = 0;
  uStack_8a3 = 0;
  uStack_8a1 = 0;
  if (plVar35 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar35);
  }
  *(undefined1 *)(lVar19 + 0x200) = 1;
  ppuVar27 = (undefined **)0x0;
  FUN_7101aff780(*(long *)(*(long *)(*(long *)(DAT_710532f7f0 + 8) + 8) + 0x80),0,(long ****)0x0,
                 param_4,param_5,param_6,param_7,param_8);
  puVar55 = *(undefined8 **)(DAT_710532f8c8 + 8);
  FUN_710066e470((long *)*DAT_71052b94d8);
  *(undefined8 *)((long)puVar55 + 0x16) = 0;
  puVar55[1] = 0;
  puVar55[2] = 0;
  *puVar55 = 0xffffffffffffffff;
  *(undefined2 *)((long)puVar55 + 0x1e) = 1;
  *(undefined8 *)((long)puVar55 + 0x36) = 0;
  puVar55[4] = 0xffffffffffffffff;
  *(undefined2 *)((long)puVar55 + 0x3e) = 1;
  *(undefined8 *)((long)puVar55 + 0x56) = 0;
  puVar55[8] = 0xffffffffffffffff;
  *(undefined2 *)((long)puVar55 + 0x5e) = 1;
  *(undefined8 *)((long)puVar55 + 0x76) = 0;
  puVar55[0xc] = 0xffffffffffffffff;
  *(undefined1 *)((long)puVar55 + 0x7e) = 1;
  *(undefined1 *)((long)puVar55 + 0x7f) = 0;
  *(undefined4 *)(puVar55 + 0x10) = 0xffffffff;
  *(undefined4 *)((long)puVar55 + 0x84) = 0xffffffff;
  *(undefined8 *)((long)puVar55 + 0x96) = 0;
  *(undefined1 *)((long)puVar55 + 0x9e) = 1;
  *(undefined1 *)((long)puVar55 + 0x9f) = 0;
  *(undefined4 *)(puVar55 + 0x14) = 0xffffffff;
  *(undefined4 *)((long)puVar55 + 0xa4) = 0xffffffff;
  *(undefined8 *)((long)puVar55 + 0xb6) = 0;
  *(undefined1 *)((long)puVar55 + 0xbe) = 1;
  *(undefined1 *)((long)puVar55 + 0xbf) = 0;
  *(undefined4 *)(puVar55 + 0x18) = 0xffffffff;
  *(undefined4 *)((long)puVar55 + 0xc4) = 0xffffffff;
  *(undefined8 *)((long)puVar55 + 0xd6) = 0;
  *(undefined1 *)((long)puVar55 + 0xde) = 1;
  *(undefined1 *)((long)puVar55 + 0xdf) = 0;
  *(undefined4 *)(puVar55 + 0x1c) = 0xffffffff;
  *(undefined4 *)((long)puVar55 + 0xe4) = 0xffffffff;
  *(undefined8 *)((long)puVar55 + 0xf6) = 0;
  *(undefined1 *)((long)puVar55 + 0xfe) = 1;
  *(undefined1 *)((long)puVar55 + 0xff) = 0;
  puVar55[5] = 0;
  puVar55[6] = 0;
  puVar55[9] = 0;
  puVar55[10] = 0;
  puVar55[0xd] = 0;
  puVar55[0xe] = 0;
  puVar55[0x11] = 0;
  puVar55[0x12] = 0;
  puVar55[0x15] = 0;
  puVar55[0x16] = 0;
  puVar55[0x19] = 0;
  puVar55[0x1a] = 0;
  puVar55[0x1d] = 0;
  puVar55[0x1e] = 0;
  FUN_71025f7e20(DAT_710532a9d0,extraout_x1_00,(long *********)ppuVar27,param_4,param_5,param_6,
                 param_7,param_8);
  auVar60 = FUN_71025f7b10(DAT_710532a9d0,7,(long *********)ppuVar27,param_4,param_5,param_6,param_7
                           ,param_8);
  if ((*(char *)(param_1 + 0x198) != '\0') && (*(char *)(param_1 + 0x199) == '\0')) {
    if (((DAT_71053144d8 & 1) == 0) &&
       (auVar60 = __cxa_guard_acquire(&DAT_71053144d8), auVar60._0_4_ != 0)) {
      FUN_7101764000();
      ppuVar27 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      auVar60 = __cxa_guard_release(&DAT_71053144d8);
    }
    piVar21 = FUN_7101765c90(auVar60._0_8_,auVar60._8_8_,(long ****)ppuVar27,param_4,param_5,param_6
                             ,param_7,param_8);
    FUN_7101765d60(piVar21,extraout_x1_01,ppuVar27,param_4,param_5,(long)param_6,param_7,
                   (ulong)param_8);
    DAT_71053050f0 = 0x7010600;
    FUN_710178c070(&DAT_71053050f0);
    FUN_71017912b0();
    plVar35 = *(long **)(*(long *)(DAT_710532f7d0 + 8) + 0x18);
    uVar23 = extraout_x1_02;
    if (plVar35 != (long *)0x0) {
      auVar60 = (**(code **)(*plVar35 + 0x48))(plVar35);
      uVar23 = auVar60._8_8_;
      if ((auVar60._0_8_ & 1) == 0) {
        (**(code **)(*plVar35 + 0x28))(plVar35,1);
        uVar23 = extraout_x1_03;
      }
    }
    FUN_7101765f30(piVar21,uVar23,ppuVar27,param_4,param_5,(long)param_6,(undefined1 *)param_7,
                   (ulong)param_8);
    if (piVar21 != (int *)0x0) {
      if (*piVar21 == 0x12345678) {
        FUN_710179d880((long)(piVar21 + 8));
      }
      FUN_710392eb40((ulong)piVar21);
    }
    goto LAB_710230fe14;
  }
  if (*(int *)(param_1 + 400) != 1) goto LAB_710230fe14;
  if (((DAT_71053144d8 & 1) == 0) &&
     (auVar60 = __cxa_guard_acquire(&DAT_71053144d8), auVar60._0_4_ != 0)) {
    FUN_7101764000();
    ppuVar27 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    auVar60 = __cxa_guard_release(&DAT_71053144d8);
  }
  uVar48 = DAT_71053050f0;
  if (((DAT_71053144d8 & 1) == 0) &&
     (auVar60 = __cxa_guard_acquire(&DAT_71053144d8), auVar60._0_4_ != 0)) {
    FUN_7101764000();
    ppuVar27 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    auVar60 = __cxa_guard_release(&DAT_71053144d8);
  }
  if (((DAT_71053144d8 & 1) == 0) &&
     (auVar60 = __cxa_guard_acquire(&DAT_71053144d8), auVar60._0_4_ != 0)) {
    FUN_7101764000();
    ppuVar27 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    auVar60 = __cxa_guard_release(&DAT_71053144d8);
  }
  uVar17 = DAT_71053050fc;
  if (DAT_710530a974 == '\x01') {
    puVar55 = (undefined8 *)(*DAT_7105314510 + 0x28);
  }
  else if (DAT_710530a974 == '\x02') {
    puVar55 = (undefined8 *)(*DAT_7105314510 + 0x38);
  }
  else {
    puVar55 = (undefined8 *)(*DAT_7105314510 + 0x18);
  }
  if (DAT_71053050fc != 0xffffffff) {
    puVar55 = (undefined8 *)*puVar55;
    uStack_40c = 0x3c;
    local_85c = 0;
    local_854 = 0;
    local_454 = 0;
    local_8a0 = 0;
    uStack_89e = 0;
    local_450 = 0xffffffffffffffff;
    local_448 = 0;
    local_440 = 0;
    local_410 = 0;
    uStack_40e = 0;
    local_8b0 = 0xffffffff;
    bStack_8ac = 0xff;
    uStack_8ab = 0xffff;
    uStack_8a9 = 0xff;
    local_8a8 = 0;
    bStack_8a4 = 0;
    uStack_8a3 = 0;
    uStack_8a1 = 0;
    uStack_40a = 0x503;
    uStack_408 = 0x20000;
    local_402 = 10;
    uStack_400 = 0x10300010100;
    local_3fa = 0x100;
    local_3f8 = 2;
    local_3f4 = 0xffffffffffffffff;
    local_3e4 = 0xffffffffffffffff;
    local_3ec = 0xffffffffffffffff;
    local_3dc = 0xffffffff;
    if (DAT_710532f730 != 0) {
      lVar32 = *(long *)(DAT_710532f730 + 8);
      lVar19 = *(long *)(lVar32 + 0x178);
      uVar20 = FUN_71032b23e0(*(long *)(lVar19 + 8),0xd56784f97);
      uVar22 = FUN_71032b1e40(lVar19,uVar20);
      if (-1 < (int)uVar22) {
        uVar20 = FUN_71032b1e40(*(long *)(lVar32 + 0x178),uVar20);
        lVar32 = (uVar20 >> 5 & 0x7ffffff) * 4;
        *(uint *)((long)&local_3ec + lVar32 + 4) =
             *(uint *)((long)&local_3ec + lVar32 + 4) &
             (1 << (ulong)((uint)uVar20 & 0x1f) ^ 0xffffffffU);
      }
    }
    ppuVar27 = (undefined **)&local_8b0;
    uVar20 = FUN_71017dcc40(puVar55,uVar17,(uint *)ppuVar27);
    auVar60._8_8_ = extraout_x1_04;
    auVar60._0_8_ = uVar20;
    if ((uVar20 & 1) != 0) {
      local_210 = CONCAT26(local_3fa,uStack_400);
      local_220 = (long ***)
                  CONCAT26(uStack_40a,
                           CONCAT24(uStack_40c,CONCAT13(uStack_40d,CONCAT12(uStack_40e,local_410))))
      ;
      local_218 = (ulong *)CONCAT26(local_402,uStack_408);
      bVar13 = FUN_71017abe20(&DAT_710530a974,(char *)&local_220);
      auVar60._1_7_ = 0;
      auVar60[0] = bVar13;
      auVar60._8_8_ = extraout_x1_05;
      if (bVar13) {
        uVar23 = FUN_71017dc8f0(puVar55,uVar17);
        auVar60._8_8_ = extraout_x1_06;
        auVar60._0_8_ = uVar23;
      }
    }
  }
  FUN_71017ad770(auVar60._0_8_,auVar60._8_8_,ppuVar27,param_4,param_5,param_6,param_7,param_8);
  if (((DAT_71053144d8 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_71053144d8), iVar16 != 0)) {
    FUN_7101764000();
    ppuVar27 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_71053144d8), iVar16 != 0)) {
    FUN_7101764000();
    ppuVar27 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if ((_DAT_710530a97c & 0xff) - 1 < 4) {
    if ((DAT_71053144d8 & 1) == 0) {
      iVar16 = __cxa_guard_acquire(&DAT_71053144d8);
      if (iVar16 == 0) {
        puVar51 = &DAT_71052e8b60;
      }
      else {
        FUN_7101764000();
        ppuVar27 = &PTR_LOOP_7104f17000;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
        lVar32 = 0x239e0;
LAB_710231024c:
        puVar51 = (undefined2 *)((long)&DAT_71052c5180 + lVar32);
      }
    }
    else {
      puVar51 = &DAT_71052e8b60;
    }
  }
  else if ((DAT_71053144d8 & 1) == 0) {
    iVar16 = __cxa_guard_acquire(&DAT_71053144d8);
    if (iVar16 != 0) {
      FUN_7101764000();
      ppuVar27 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
      lVar32 = 0x7458;
      goto LAB_710231024c;
    }
    puVar51 = (undefined2 *)&DAT_71052cc5d8;
  }
  else {
    puVar51 = (undefined2 *)&DAT_71052cc5d8;
  }
  uVar12 = _DAT_710530a988;
  uVar11 = _DAT_710530a985;
  uVar10 = _DAT_710530a981;
  uVar17 = _DAT_710530a97c;
  local_220 = _DAT_710530a974;
  bVar9 = DAT_710530a96c._4_1_;
  bVar15 = DAT_710530a96c._3_1_;
  lVar32 = DAT_71052c4c58;
  local_218 = (ulong *)CONCAT44(local_218._4_4_,_DAT_710530a97c);
  local_3d8 = CONCAT44(CONCAT22(local_3d8._6_2_,_DAT_710530a985),_DAT_710530a981);
  local_238 = (int *)CONCAT44(local_238._4_4_,_DAT_710530a988);
  bVar29 = DAT_710530a980;
  if (DAT_710530a96c._4_1_ < 8) {
    DAT_710530a980 = DAT_710530a96c._4_1_;
    lVar19 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
    bVar29 = bVar9;
    if ((*(char *)(lVar19 + 0x26a62) != '\0') ||
       (*(ulong *)(lVar19 + 0x26a90) = *(ulong *)(lVar19 + 0x26a90) | 1, DAT_710530a96c._4_1_ != 100
       )) {
      DAT_710530a96c._4_1_ = 100;
      lVar32 = *(long *)(*(long *)(lVar32 + 8) + 0x88);
      if (*(char *)(lVar32 + 0x26a62) == '\0') {
        *(ulong *)(lVar32 + 0x26a90) = *(ulong *)(lVar32 + 0x26a90) | 1;
      }
    }
  }
  lVar32 = DAT_71052c4c58;
  if (DAT_710530a96c._5_1_ < 0xb) {
    DAT_710530a987 = DAT_710530a96c._5_1_;
    lVar19 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
    _DAT_710530a974 = local_220;
    _DAT_710530a97c = uVar17;
    DAT_710530a980 = bVar29;
    _DAT_710530a981 = uVar10;
    _DAT_710530a985 = uVar11;
    _DAT_710530a988 = uVar12;
    if ((*(char *)(lVar19 + 0x26a62) != '\0') ||
       (*(ulong *)(lVar19 + 0x26a90) = *(ulong *)(lVar19 + 0x26a90) | 1, DAT_710530a96c._5_1_ != 100
       )) {
      DAT_710530a96c._5_1_ = 100;
      lVar32 = *(long *)(*(long *)(lVar32 + 8) + 0x88);
      if (*(char *)(lVar32 + 0x26a62) == '\0') {
        *(ulong *)(lVar32 + 0x26a90) = *(ulong *)(lVar32 + 0x26a90) | 1;
      }
    }
  }
  lVar32 = DAT_71052c4c58;
  if (DAT_710530a96c._6_1_ == '\0') {
LAB_710230de64:
    if (bVar29 == 2) goto LAB_710230dc7c;
LAB_710230de6c:
    if (bVar29 == 1) {
      uVar44 = (uint)DAT_710530a96c._2_1_;
      uVar17 = 0;
      if (DAT_710530a96c._3_1_ == 1) {
        uVar17 = uVar44;
      }
      if (DAT_710530a96c._3_1_ == 1) {
        if (7 < uVar17) goto LAB_710231033c;
        iVar16 = (&DAT_7105308798)[(ulong)uVar17 * 0x72] + -1;
      }
      else {
        iVar16 = -1;
      }
      uVar1 = uVar17 + 1 & 7;
      uVar2 = uVar17 + 2 & 7;
      uVar3 = uVar17 + 3 & 7;
      uVar4 = uVar17 + 4 & 7;
      uVar5 = uVar17 + 5 & 7;
      uVar6 = uVar17 + 6 & 7;
      uVar7 = uVar17 - 1 & 7;
      local_8c8 = uVar17 & 7;
      ppuVar27 = (undefined **)(&DAT_71053087a0 + (ulong)uVar2 * 0x72);
      param_4 = (byte ****)(&DAT_7105308798 + (ulong)uVar2 * 0x72);
      param_5 = (long ****)(&DAT_71053087a0 + (ulong)uVar3 * 0x72);
      param_6 = (byte ****)(&DAT_7105308798 + (ulong)uVar3 * 0x72);
      param_7 = (long ***)(&DAT_71053087a0 + (ulong)uVar4 * 0x72);
      param_8 = (long ***)(&DAT_7105308798 + (ulong)uVar4 * 0x72);
      uVar59 = 1;
      do {
        iVar18 = (int)(iVar16 + uVar59) % 8 + 1;
        if ((((((((&DAT_71053087a0)[(ulong)uVar1 * 0x72] == 0) &&
                (uVar43 = uVar1, (&DAT_7105308798)[(ulong)uVar1 * 0x72] == iVar18)) ||
               ((*(int *)ppuVar27 == 0 && (uVar43 = uVar2, *(int *)param_4 == iVar18)))) ||
              ((*(int *)param_5 == 0 && (uVar43 = uVar3, *(int *)param_6 == iVar18)))) ||
             ((*(int *)param_7 == 0 && (uVar43 = uVar4, *(int *)param_8 == iVar18)))) ||
            (((((&DAT_71053087a0)[(ulong)uVar5 * 0x72] == 0 &&
               (uVar43 = uVar5, (&DAT_7105308798)[(ulong)uVar5 * 0x72] == iVar18)) ||
              (((&DAT_71053087a0)[(ulong)uVar6 * 0x72] == 0 &&
               (uVar43 = uVar6, (&DAT_7105308798)[(ulong)uVar6 * 0x72] == iVar18)))) ||
             (((&DAT_71053087a0)[(ulong)uVar7 * 0x72] == 0 &&
              (uVar43 = uVar7, (&DAT_7105308798)[(ulong)uVar7 * 0x72] == iVar18)))))) ||
           (((&DAT_71053087a0)[((ulong)uVar17 & 7) * 0x72] == 0 &&
            (uVar43 = local_8c8, (&DAT_7105308798)[((ulong)uVar17 & 7) * 0x72] == iVar18)))) {
          if (uVar44 != uVar43) {
            DAT_710530a96c._2_1_ = (byte)uVar43;
            lVar32 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
            if (*(char *)(lVar32 + 0x26a62) == '\0') {
              *(ulong *)(lVar32 + 0x26a90) = *(ulong *)(lVar32 + 0x26a90) | 1;
            }
          }
          bVar13 = DAT_710530a96c._3_1_ == 1;
          DAT_710530a96c._3_1_ = 1;
          if (bVar13) goto joined_r0x00710230e4e8;
          DAT_710530a96c._3_1_ = 1;
          bVar29 = DAT_710530a96c._3_1_;
          goto LAB_710230e4b0;
        }
        uVar59 = uVar59 + 1;
      } while (uVar59 < 9);
      if (uVar44 != 0) {
        DAT_710530a96c._2_1_ = 0;
        lVar32 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
        if (*(char *)(lVar32 + 0x26a62) == '\0') {
          *(ulong *)(lVar32 + 0x26a90) = *(ulong *)(lVar32 + 0x26a90) | 1;
        }
      }
      goto joined_r0x00710230e4a4;
    }
    if (DAT_710530a96c._2_1_ != 0) {
      DAT_710530a96c._2_1_ = 0;
      lVar32 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
      if (*(char *)(lVar32 + 0x26a62) == '\0') {
        *(ulong *)(lVar32 + 0x26a90) = *(ulong *)(lVar32 + 0x26a90) | 1;
      }
    }
    if (DAT_710530a96c._3_1_ != bVar29) goto LAB_710230e4b0;
  }
  else {
    local_8a0 = _DAT_710530a99e;
    local_8b0 = (uint)(undefined7)DAT_710530a98e;
    bStack_8ac = (byte)((uint7)(undefined7)DAT_710530a98e >> 0x20);
    uStack_8ab = (undefined2)((uint7)(undefined7)DAT_710530a98e >> 0x28);
    uStack_8a9 = DAT_710530a98e._7_1_;
    local_8a8 = (uint)_DAT_710530a996;
    bStack_8a4 = (byte)((uint7)_DAT_710530a996 >> 0x20);
    uStack_8a3 = (undefined2)((uint7)_DAT_710530a996 >> 0x28);
    uStack_8a1 = uRam000000710530a99d;
    if (DAT_710530a98c._1_1_ != DAT_710530a96c._7_1_) {
      DAT_710530a98c._1_1_ = DAT_710530a96c._7_1_;
      _DAT_710530a996 =
           (undefined7)
           (CONCAT26(uStack_8a3,CONCAT15(bStack_8a4,CONCAT41(local_8a8,DAT_710530a98e._7_1_))) >> 8)
      ;
      lVar19 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
      if ((*(char *)(lVar19 + 0x26a62) != '\0') ||
         (*(ulong *)(lVar19 + 0x26a90) = *(ulong *)(lVar19 + 0x26a90) | 1,
         DAT_710530a96c._6_1_ != '\0')) {
        DAT_710530a96c._6_1_ = '\0';
        lVar32 = *(long *)(*(long *)(lVar32 + 8) + 0x88);
        if (*(char *)(lVar32 + 0x26a62) == '\0') {
          *(ulong *)(lVar32 + 0x26a90) = *(ulong *)(lVar32 + 0x26a90) | 1;
        }
      }
      goto LAB_710230de64;
    }
    DAT_710530a96c._6_1_ = '\0';
    if (bVar29 != 2) goto LAB_710230de6c;
LAB_710230dc7c:
    if (*(char *)((long)puVar51 + 5) == '\x01') {
      local_8b0 = 0;
      bStack_8ac = 0;
      uStack_8ab = 0;
      uStack_8a9 = 0;
      local_8a8 = 0;
      bStack_8a4 = 0;
      uStack_8a3 = 0;
      uStack_8a1 = 0;
      local_8a0 = 0;
      uStack_89e = 0;
      uStack_89b = 0;
      FUN_7100813660((undefined8 *)&local_8b0,8,(long ****)ppuVar27,param_4,param_5,param_6,param_7,
                     param_8);
      puVar33 = (undefined4 *)
                CONCAT17(uStack_8a9,CONCAT25(uStack_8ab,CONCAT14(bStack_8ac,local_8b0)));
      uVar20 = CONCAT17(uStack_8a1,CONCAT25(uStack_8a3,CONCAT14(bStack_8a4,local_8a8))) -
               (long)puVar33;
      if (0 < (long)uVar20) {
        lVar32 = (uVar20 >> 2) + 1;
        do {
          lVar32 = lVar32 + -1;
          *puVar33 = 0xffffffff;
          puVar33 = puVar33 + 1;
        } while (1 < lVar32);
      }
      if (*(char *)(puVar51 + 0xe1c3) != '\0') {
        lVar32 = CONCAT17(uStack_8a9,CONCAT25(uStack_8ab,CONCAT14(bStack_8ac,local_8b0)));
        if ((ulong)(CONCAT17(uStack_8a1,CONCAT25(uStack_8a3,CONCAT14(bStack_8a4,local_8a8))) -
                    lVar32 >> 2) <= (ulong)(long)*(char *)((long)puVar51 + 0x1c385))
        goto LAB_7102310350;
        *(undefined4 *)(lVar32 + (long)*(char *)((long)puVar51 + 0x1c385) * 4) = 0;
      }
      if (*(char *)(puVar51 + 0xe1db) != '\0') {
        lVar32 = CONCAT17(uStack_8a9,CONCAT25(uStack_8ab,CONCAT14(bStack_8ac,local_8b0)));
        if ((ulong)(CONCAT17(uStack_8a1,CONCAT25(uStack_8a3,CONCAT14(bStack_8a4,local_8a8))) -
                    lVar32 >> 2) <= (ulong)(long)*(char *)((long)puVar51 + 0x1c3b5))
        goto LAB_7102310350;
        *(undefined4 *)(lVar32 + (long)*(char *)((long)puVar51 + 0x1c3b5) * 4) = 1;
      }
      if (*(char *)(puVar51 + 0xe1f3) != '\0') {
        lVar32 = CONCAT17(uStack_8a9,CONCAT25(uStack_8ab,CONCAT14(bStack_8ac,local_8b0)));
        if ((ulong)(CONCAT17(uStack_8a1,CONCAT25(uStack_8a3,CONCAT14(bStack_8a4,local_8a8))) -
                    lVar32 >> 2) <= (ulong)(long)*(char *)((long)puVar51 + 0x1c3e5))
        goto LAB_7102310350;
        *(undefined4 *)(lVar32 + (long)*(char *)((long)puVar51 + 0x1c3e5) * 4) = 2;
      }
      if (*(char *)(puVar51 + 0xe20b) != '\0') {
        lVar32 = CONCAT17(uStack_8a9,CONCAT25(uStack_8ab,CONCAT14(bStack_8ac,local_8b0)));
        if ((ulong)(CONCAT17(uStack_8a1,CONCAT25(uStack_8a3,CONCAT14(bStack_8a4,local_8a8))) -
                    lVar32 >> 2) <= (ulong)(long)*(char *)((long)puVar51 + 0x1c415)) {
LAB_7102310350:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        *(undefined4 *)(lVar32 + (long)*(char *)((long)puVar51 + 0x1c415) * 4) = 3;
      }
      puVar34 = (uint *)CONCAT17(uStack_8a9,CONCAT25(uStack_8ab,CONCAT14(bStack_8ac,local_8b0)));
      puVar25 = (uint *)CONCAT17(uStack_8a1,CONCAT25(uStack_8a3,CONCAT14(bStack_8a4,local_8a8)));
      puVar41 = puVar34;
      if ((puVar34 == puVar25) || ((int)*puVar34 < 0)) {
        puVar53 = puVar34;
        if (puVar34 != puVar25) goto LAB_710230e190;
LAB_710230e244:
        if (puVar25 != puVar53) {
LAB_710230e24c:
          puVar25 = puVar53;
          ppuVar27 = (undefined **)0x0;
          local_8a8 = (uint)puVar25;
          bStack_8a4 = (byte)((ulong)puVar25 >> 0x20);
          uStack_8a3 = (undefined2)((ulong)puVar25 >> 0x28);
          uStack_8a1 = (undefined1)((ulong)puVar25 >> 0x38);
        }
      }
      else {
        do {
          puVar41 = puVar41 + 1;
          puVar53 = puVar25;
          if (puVar25 == puVar41) goto LAB_710230e244;
        } while (-1 < (int)*puVar41);
        puVar53 = puVar41;
        if (puVar41 == puVar25) goto LAB_710230e244;
LAB_710230e190:
        puVar40 = puVar41 + 1;
        puVar53 = puVar41;
        if (puVar40 == puVar25) goto LAB_710230e244;
        uVar20 = (long)puVar25 + (-8 - (long)puVar41);
        if (((uint)uVar20 >> 2 & 1) == 0) {
          if (-1 < (int)*puVar40) {
            puVar53 = puVar41 + 1;
            *puVar41 = *puVar40;
          }
          puVar40 = puVar41 + 2;
        }
        if (3 < uVar20) {
          do {
            puVar34 = puVar53;
            if (-1 < (int)*puVar40) {
              puVar34 = puVar53 + 1;
              *puVar53 = *puVar40;
            }
            puVar53 = puVar34;
            if (-1 < (int)puVar40[1]) {
              puVar53 = puVar34 + 1;
              *puVar34 = puVar40[1];
            }
            puVar40 = puVar40 + 2;
          } while (puVar40 != puVar25);
        }
        puVar34 = (uint *)CONCAT17(uStack_8a9,CONCAT25(uStack_8ab,CONCAT14(bStack_8ac,local_8b0)));
        puVar25 = (uint *)CONCAT17(uStack_8a1,CONCAT25(uStack_8a3,CONCAT14(bStack_8a4,local_8a8)));
        if (puVar25 != puVar53) goto LAB_710230e24c;
      }
      if (puVar34 == puVar25) {
LAB_710230e340:
        if (DAT_710530a96c._2_1_ != 0) {
          DAT_710530a96c._2_1_ = 0;
          lVar32 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
          if (*(char *)(lVar32 + 0x26a62) == '\0') {
            *(ulong *)(lVar32 + 0x26a90) = *(ulong *)(lVar32 + 0x26a90) | 1;
          }
        }
        if (DAT_710530a96c._3_1_ != 0) {
          DAT_710530a96c._3_1_ = 0;
LAB_710230e394:
          lVar32 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
          if (*(char *)(lVar32 + 0x26a62) == '\0') {
            *(ulong *)(lVar32 + 0x26a90) = *(ulong *)(lVar32 + 0x26a90) | 1;
          }
        }
      }
      else {
        puVar41 = puVar25 + -1;
        if (puVar34 < puVar41) {
          do {
            puVar25 = puVar34 + 1;
            uVar17 = *puVar34;
            *puVar34 = *puVar41;
            puVar53 = puVar41 + -1;
            *puVar41 = uVar17;
            puVar41 = puVar53;
            puVar34 = puVar25;
          } while (puVar25 < puVar53);
          puVar34 = (uint *)CONCAT17(uStack_8a9,CONCAT25(uStack_8ab,CONCAT14(bStack_8ac,local_8b0)))
          ;
          puVar25 = (uint *)CONCAT17(uStack_8a1,CONCAT25(uStack_8a3,CONCAT14(bStack_8a4,local_8a8)))
          ;
        }
        if (puVar34 == puVar25) goto LAB_710230e340;
        do {
          puVar41 = puVar34 + 1;
          uVar17 = FUN_71017ad1f0(1,*puVar34);
          bVar9 = (byte)uVar17;
          if (-1 < (char)bVar9) break;
          puVar34 = puVar41;
        } while (puVar25 != puVar41);
        if ((char)bVar9 < '\0') goto LAB_710230e340;
        if (((uint)DAT_710530a96c._2_1_ != (uVar17 & 0xff)) &&
           (lVar32 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88), DAT_710530a96c._2_1_ = bVar9,
           *(char *)(lVar32 + 0x26a62) == '\0')) {
          *(ulong *)(lVar32 + 0x26a90) = *(ulong *)(lVar32 + 0x26a90) | 1;
        }
        if (DAT_710530a96c._3_1_ != 2) {
          DAT_710530a96c._3_1_ = 2;
          goto LAB_710230e394;
        }
      }
      uVar20 = CONCAT17(uStack_8a9,CONCAT25(uStack_8ab,CONCAT14(bStack_8ac,local_8b0)));
      if (uVar20 != 0) {
        local_8a8 = local_8b0;
        bStack_8a4 = bStack_8ac;
        uStack_8a3 = uStack_8ab;
        uStack_8a1 = uStack_8a9;
        FUN_710392eb40(uVar20);
      }
    }
    else {
      uVar17 = FUN_71017ad1f0(0,0);
      bVar9 = (byte)uVar17;
      if ((char)bVar9 < '\0') {
        if (DAT_710530a96c._2_1_ != 0) {
          DAT_710530a96c._2_1_ = 0;
          lVar32 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
          if (*(char *)(lVar32 + 0x26a62) == '\0') {
            *(ulong *)(lVar32 + 0x26a90) = *(ulong *)(lVar32 + 0x26a90) | 1;
          }
        }
joined_r0x00710230e4a4:
        bVar13 = DAT_710530a96c._3_1_ == 0;
        DAT_710530a96c._3_1_ = 0;
        if (bVar13) goto joined_r0x00710230e4e8;
        DAT_710530a96c._3_1_ = 0;
        bVar29 = DAT_710530a96c._3_1_;
      }
      else {
        if (((uint)DAT_710530a96c._2_1_ != (uVar17 & 0xff)) &&
           (lVar32 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88), DAT_710530a96c._2_1_ = bVar9,
           *(char *)(lVar32 + 0x26a62) == '\0')) {
          *(ulong *)(lVar32 + 0x26a90) = *(ulong *)(lVar32 + 0x26a90) | 1;
        }
        if (DAT_710530a96c._3_1_ == 2) goto joined_r0x00710230e4e8;
        DAT_710530a96c._3_1_ = 2;
        bVar29 = DAT_710530a96c._3_1_;
      }
LAB_710230e4b0:
      DAT_710530a96c._3_1_ = bVar29;
      lVar32 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
      if (*(char *)(lVar32 + 0x26a62) == '\0') {
        *(ulong *)(lVar32 + 0x26a90) = *(ulong *)(lVar32 + 0x26a90) | 1;
      }
    }
  }
joined_r0x00710230e4e8:
  if (((DAT_71053144d8 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_71053144d8), iVar16 != 0)) {
    FUN_7101764000();
    ppuVar27 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  DAT_7105307b70 = bVar15 != DAT_710530a96c._3_1_;
  if (((DAT_71053144d8 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_71053144d8), iVar16 != 0)) {
    FUN_7101764000();
    ppuVar27 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (((DAT_71053087a0 < 2) && ((DAT_71053087b0 & 0xff00000000000000) == 0xc100000000000000)) &&
     ((DAT_71053087b0 & 0xffffffffff) != 0)) {
    FUN_71017aaf60(&DAT_710530e308,&DAT_71053087b0);
  }
  if (((DAT_7105308968 < 2) && ((DAT_7105308978 & 0xff00000000000000) == 0xc100000000000000)) &&
     ((DAT_7105308978 & 0xffffffffff) != 0)) {
    FUN_71017aaf60(&DAT_710530e308,&DAT_7105308978);
  }
  if (((DAT_7105308b30 < 2) && ((DAT_7105308b40 & 0xff00000000000000) == 0xc100000000000000)) &&
     ((DAT_7105308b40 & 0xffffffffff) != 0)) {
    FUN_71017aaf60(&DAT_710530e308,&DAT_7105308b40);
  }
  if (((DAT_7105308cf8 < 2) && ((DAT_7105308d08 & 0xff00000000000000) == 0xc100000000000000)) &&
     ((DAT_7105308d08 & 0xffffffffff) != 0)) {
    FUN_71017aaf60(&DAT_710530e308,&DAT_7105308d08);
  }
  if (((DAT_7105308ec0 < 2) && ((DAT_7105308ed0 & 0xff00000000000000) == 0xc100000000000000)) &&
     ((DAT_7105308ed0 & 0xffffffffff) != 0)) {
    FUN_71017aaf60(&DAT_710530e308,&DAT_7105308ed0);
  }
  if (((DAT_7105309088 < 2) && ((DAT_7105309098 & 0xff00000000000000) == 0xc100000000000000)) &&
     ((DAT_7105309098 & 0xffffffffff) != 0)) {
    FUN_71017aaf60(&DAT_710530e308,&DAT_7105309098);
  }
  if (((DAT_7105309250 < 2) && ((DAT_7105309260 & 0xff00000000000000) == 0xc100000000000000)) &&
     ((DAT_7105309260 & 0xffffffffff) != 0)) {
    FUN_71017aaf60(&DAT_710530e308,&DAT_7105309260);
  }
  if (((DAT_7105309418 < 2) && ((DAT_7105309428 & 0xff00000000000000) == 0xc100000000000000)) &&
     ((DAT_7105309428 & 0xffffffffff) != 0)) {
    FUN_71017aaf60(&DAT_710530e308,&DAT_7105309428);
  }
  if (uVar48 == 0x2020000) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_71053144d8), iVar16 != 0))
    {
      FUN_7101764000();
      ppuVar27 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if (((DAT_710530a9f8 < 2) && ((DAT_710530aa08 & 0xff00000000000000) == 0xc100000000000000)) &&
       ((DAT_710530aa08 & 0xffffffffff) != 0)) {
      FUN_71017aaf60(&DAT_710530e308,&DAT_710530aa08);
    }
    if (((DAT_710530abc0 < 2) && ((DAT_710530abd0 & 0xff00000000000000) == 0xc100000000000000)) &&
       ((DAT_710530abd0 & 0xffffffffff) != 0)) {
      FUN_71017aaf60(&DAT_710530e308,&DAT_710530abd0);
    }
    if (((DAT_710530ad88 < 2) && ((DAT_710530ad98 & 0xff00000000000000) == 0xc100000000000000)) &&
       ((DAT_710530ad98 & 0xffffffffff) != 0)) {
      FUN_71017aaf60(&DAT_710530e308,&DAT_710530ad98);
    }
    if (((DAT_710530af50 < 2) && ((DAT_710530af60 & 0xff00000000000000) == 0xc100000000000000)) &&
       ((DAT_710530af60 & 0xffffffffff) != 0)) {
      FUN_71017aaf60(&DAT_710530e308,&DAT_710530af60);
    }
    if (((DAT_710530b118 < 2) && ((DAT_710530b128 & 0xff00000000000000) == 0xc100000000000000)) &&
       ((DAT_710530b128 & 0xffffffffff) != 0)) {
      FUN_71017aaf60(&DAT_710530e308,&DAT_710530b128);
    }
    if (((DAT_710530be20 < 2) && ((DAT_710530be30 & 0xff00000000000000) == 0xc100000000000000)) &&
       ((DAT_710530be30 & 0xffffffffff) != 0)) {
      FUN_71017aaf60(&DAT_710530e308,&DAT_710530be30);
    }
    if (((DAT_710530bfe8 < 2) && ((DAT_710530bff8 & 0xff00000000000000) == 0xc100000000000000)) &&
       ((DAT_710530bff8 & 0xffffffffff) != 0)) {
      FUN_71017aaf60(&DAT_710530e308,&DAT_710530bff8);
    }
    if (((DAT_710530c1b0 < 2) && ((DAT_710530c1c0 & 0xff00000000000000) == 0xc100000000000000)) &&
       ((DAT_710530c1c0 & 0xffffffffff) != 0)) {
      FUN_71017aaf60(&DAT_710530e308,&DAT_710530c1c0);
    }
    if (((DAT_710530c378 < 2) && ((DAT_710530c388 & 0xff00000000000000) == 0xc100000000000000)) &&
       ((DAT_710530c388 & 0xffffffffff) != 0)) {
      FUN_71017aaf60(&DAT_710530e308,&DAT_710530c388);
    }
    if (((DAT_710530c540 < 2) && ((DAT_710530c550 & 0xff00000000000000) == 0xc100000000000000)) &&
       ((DAT_710530c550 & 0xffffffffff) != 0)) {
      FUN_71017aaf60(&DAT_710530e308,&DAT_710530c550);
    }
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_71053144d8), iVar16 != 0)) {
    FUN_7101764000();
    ppuVar27 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  bVar13 = false;
  if ((int)DAT_71053050f0 < 0x2030200) {
    if ((DAT_71053050f0 == 0x2010000) || (DAT_71053050f0 == 0x2030100)) goto LAB_710230ea14;
  }
  else if ((DAT_71053050f0 == 0x2030200) ||
          ((DAT_71053050f0 == 0x3040000 || (DAT_71053050f0 == 0x3010000)))) {
LAB_710230ea14:
    bVar13 = true;
  }
  plVar35 = *(long **)(*DAT_7105314510 + 0x88);
  if (((DAT_71053144d8 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_71053144d8), iVar16 != 0)) {
    FUN_7101764000();
    ppuVar27 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_71053144d8), iVar16 != 0)) {
    FUN_7101764000();
    ppuVar27 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  local_918 = &DAT_71052e8b60;
  uVar20 = 0;
  local_228 = (int *)0x0;
  local_230 = (int *)0x0;
  local_238 = (int *)0x0;
  local_920 = (undefined2 *)&DAT_71052cc5d8;
  do {
    iVar16 = (int)uVar20;
    lVar32 = (long)iVar16;
    lVar19 = lVar32 * 0x240;
    local_898 = (&DAT_71053095c8)[lVar32 * 0x120];
    uVar23 = (&DAT_71053095b8)[lVar32 * 0x48];
    uVar42 = (&DAT_71053095b0)[lVar32 * 0x48];
    uVar46 = (&DAT_71053095c0)[lVar32 * 0x48];
    local_8b0 = (uint)uVar42;
    bStack_8ac = (byte)((ulong)uVar42 >> 0x20);
    uStack_8ab = (undefined2)((ulong)uVar42 >> 0x28);
    uStack_8a9 = (undefined1)((ulong)uVar42 >> 0x38);
    local_8a8 = (uint)uVar23;
    bStack_8a4 = (byte)((ulong)uVar23 >> 0x20);
    uStack_8a3 = (undefined2)((ulong)uVar23 >> 0x28);
    uStack_8a1 = (undefined1)((ulong)uVar23 >> 0x38);
    local_8a0 = (undefined2)uVar46;
    uStack_89e = (undefined3)((ulong)uVar46 >> 0x10);
    uStack_89b = (undefined3)((ulong)uVar46 >> 0x28);
    local_894 = (&DAT_71053095cc)[lVar32 * 0x48];
    local_88c = (&DAT_71053095d4)[lVar32 * 0x120];
    local_888[0] = 0;
    FUN_7101696040(local_888,&DAT_71053095e0 + lVar32 * 0x120);
    uStack_848 = (undefined5)((ulong)*(undefined8 *)((long)&DAT_7105309610 + lVar19 + 5) >> 0x18);
    uStack_850 = (undefined5)(&DAT_7105309610)[lVar32 * 0x48];
    local_84b = (undefined3)((ulong)(&DAT_7105309610)[lVar32 * 0x48] >> 0x28);
    local_840 = (&DAT_7105309620)[lVar32 * 0x48];
    uStack_838 = (&DAT_7105309628)[lVar32 * 0x48];
    local_830 = (&DAT_7105309630)[lVar32 * 0x120];
    FUN_71015547e0(auStack_828,(undefined8 *)(&DAT_7105309638 + lVar19));
    local_688 = (&DAT_71053097d8)[lVar32 * 0x48];
    uStack_680 = (&DAT_71053097e0)[lVar32 * 0x48];
    local_678 = (&DAT_71053097e8)[lVar19];
    FUN_71015547e0(&local_3d8,(undefined8 *)(&DAT_7105308798 + (long)iVar16 * 0x72));
    if (bVar13) {
      if ((&DAT_71052c573a)[(long)iVar16 * 0x260] == '\0') {
        if (DAT_71053083d8 == '\0') {
          if (((DAT_71053144d8 & 1) == 0) &&
             (iVar18 = __cxa_guard_acquire(&DAT_71053144d8), iVar18 != 0)) {
            FUN_7101764000();
            ppuVar27 = &PTR_LOOP_7104f17000;
            FUN_71000001c0();
            __cxa_guard_release(&DAT_71053144d8);
          }
          if ((_DAT_710530a97c & 0xff) - 1 < 4) {
            puVar51 = &DAT_71052e8b60;
            if ((DAT_71053144d8 & 1) == 0) {
              iVar18 = __cxa_guard_acquire(&DAT_71053144d8);
              if (iVar18 == 0) {
                puVar51 = &DAT_71052e8b60;
              }
              else {
                FUN_7101764000();
                ppuVar27 = &PTR_LOOP_7104f17000;
                FUN_71000001c0();
                __cxa_guard_release(&DAT_71053144d8);
                puVar51 = local_918;
              }
            }
          }
          else {
            puVar51 = (undefined2 *)&DAT_71052cc5d8;
            if ((DAT_71053144d8 & 1) == 0) {
              iVar18 = __cxa_guard_acquire(&DAT_71053144d8);
              if (iVar18 == 0) {
                puVar51 = (undefined2 *)&DAT_71052cc5d8;
              }
              else {
                FUN_7101764000();
                ppuVar27 = &PTR_LOOP_7104f17000;
                FUN_71000001c0();
                __cxa_guard_release(&DAT_71053144d8);
                puVar51 = local_920;
              }
            }
          }
          sVar30 = (short)*(undefined4 *)(puVar51 + uVar20 * 0x1c30 + 0x1bbc);
        }
        else {
          sVar30 = (short)*(undefined4 *)((long)&DAT_71053083dc + uVar20 * 4);
        }
        iVar18 = (int)(short)((short)CONCAT21(uStack_8a3,bStack_8a4) + sVar30);
        if (0x3e6 < iVar18) {
          iVar18 = 999;
        }
      }
      else {
        iVar18 = 0;
      }
      bStack_8a4 = (byte)iVar18;
      uStack_8a3 = (undefined2)((uint)iVar18 >> 8);
      uStack_8a1 = (undefined1)((uint)iVar18 >> 0x18);
      (&DAT_71053095c8)[lVar32 * 0x120] = local_898;
      (&DAT_71053095b8)[lVar32 * 0x48] =
           CONCAT17(uStack_8a1,CONCAT25(uStack_8a3,CONCAT14(bStack_8a4,local_8a8)));
      (&DAT_71053095c0)[lVar32 * 0x48] = CONCAT35(uStack_89b,CONCAT32(uStack_89e,local_8a0));
      (&DAT_71053095b0)[lVar32 * 0x48] =
           CONCAT17(uStack_8a9,CONCAT25(uStack_8ab,CONCAT14(bStack_8ac,local_8b0)));
      (&DAT_71053095cc)[lVar32 * 0x48] = local_894;
      (&DAT_71053095d4)[lVar32 * 0x120] = local_88c;
      if ((uint *)(&DAT_71053095b0 + lVar32 * 0x48) != &local_8b0) {
        FUN_7101696040((uint *)(&DAT_71053095d8 + (long)iVar16 * 0x48),auStack_880);
      }
      *(ulong *)((long)&DAT_7105309610 + lVar19 + 5) = CONCAT53(uStack_848,local_84b);
      (&DAT_7105309610)[lVar32 * 0x48] = CONCAT35(local_84b,uStack_850);
      (&DAT_7105309620)[lVar32 * 0x48] = local_840;
      (&DAT_7105309628)[lVar32 * 0x48] = uStack_838;
      (&DAT_7105309630)[lVar32 * 0x120] = local_830;
      FUN_71016b6a10((undefined8 *)(&DAT_7105309638 + lVar19),auStack_828);
      (&DAT_71053097e8)[lVar19] = local_678;
      (&DAT_71053097d8)[lVar32 * 0x48] = local_688;
      (&DAT_71053097e0)[lVar32 * 0x48] = uStack_680;
      uVar48 = local_8a8;
    }
    else {
      bStack_8a4 = 0;
      uStack_8a3 = 0;
      uStack_8a1 = 0;
      uVar48 = local_8a8;
    }
    local_8a8 = uVar48;
    if (uVar48 != 0) {
      lVar32 = *plVar35;
      iVar16 = **(int **)**(undefined8 **)(*DAT_7105314510 + 0x1f8) + 1;
      **(int **)**(undefined8 **)(*DAT_7105314510 + 0x1f8) = iVar16;
      puVar34 = *(uint **)(lVar32 + 200);
      if (puVar34 == *(uint **)(lVar32 + 0xd0)) {
        __src = *(void **)(lVar32 + 0xc0);
        pUVar56 = (Uid *)((long)puVar34 - (long)__src);
        uVar22 = ((long)pUVar56 >> 2) + 1;
        if (uVar22 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar19 = (long)*(uint **)(lVar32 + 0xd0) - (long)__src;
        if ((ulong)(lVar19 >> 2) < 0x1fffffffffffffff) {
          uVar49 = lVar19 >> 1;
          if (uVar22 <= uVar49) {
            uVar22 = uVar49;
          }
          if (uVar22 != 0) {
            if (uVar22 >> 0x3e == 0) goto LAB_710230efb0;
            goto LAB_710231033c;
          }
LAB_710230f010:
          __dest = (void *)0x0;
        }
        else {
          uVar22 = 0x3fffffffffffffff;
LAB_710230efb0:
          ppplVar39 = (long ***)(uVar22 * 4);
          if (ppplVar39 == (long ***)0x0) {
            ppplVar39 = (long ***)0x1;
          }
          __dest = (void *)FUN_710392e290(0x10,ppplVar39,(long ****)ppuVar27,param_4,param_5,param_6
                                          ,param_7,param_8);
          if (__dest == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_6c[0] = 0;
              ppuVar27 = (undefined **)&local_220;
              local_220 = ppplVar39;
              uVar49 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
              if (((uVar49 & 1) != 0) &&
                 (__dest = (void *)FUN_710392e290(0x10,ppplVar39,(long ****)ppuVar27,param_4,param_5
                                                  ,param_6,param_7,param_8), __dest != (void *)0x0))
              goto LAB_710230f014;
            }
            goto LAB_710230f010;
          }
        }
LAB_710230f014:
        puVar34 = (uint *)((long)__dest + ((long)pUVar56 >> 2) * 4);
        *puVar34 = uVar48;
        if (0 < (long)pUVar56) {
          memcpy(__dest,__src,(size_t)pUVar56);
          ppuVar27 = (undefined **)pUVar56;
        }
        *(void **)(lVar32 + 0xc0) = __dest;
        *(uint **)(lVar32 + 200) = puVar34 + 1;
        *(void **)(lVar32 + 0xd0) = (void *)((long)__dest + uVar22 * 4);
        if (__src != (void *)0x0) {
          FUN_710392eb40((ulong)__src);
        }
      }
      else {
        *puVar34 = uVar48;
        *(long *)(lVar32 + 200) = *(long *)(lVar32 + 200) + 4;
      }
      plVar52 = (long *)(lVar32 + 0xe0);
      plVar57 = (long *)*plVar52;
      plVar36 = plVar52;
      if (plVar57 == (long *)0x0) {
LAB_710230f0a4:
        lVar19 = *plVar52;
      }
      else {
        plVar52 = (long *)(lVar32 + 0xe0);
        do {
          while (plVar36 = plVar57, *(uint *)((long)plVar36 + 0x1c) <= uVar48) {
            if (uVar48 <= *(uint *)((long)plVar36 + 0x1c)) goto LAB_710230f0a4;
            plVar52 = plVar36 + 1;
            plVar57 = (long *)*plVar52;
            if ((long *)*plVar52 == (long *)0x0) goto LAB_710230f0a4;
          }
          plVar52 = plVar36;
          plVar57 = (long *)*plVar36;
        } while ((long *)*plVar36 != (long *)0x0);
        lVar19 = *plVar36;
      }
      if (lVar19 == 0) {
        plVar57 = (long *)FUN_710392e290(0x10,0x28,(long ****)ppuVar27,param_4,param_5,param_6,
                                         param_7,param_8);
        if (plVar57 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_6c[0] = 0;
            local_220 = (long ***)&DAT_00000028;
            ppuVar27 = (undefined **)&local_220;
            uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
            if (((uVar22 & 1) != 0) &&
               (plVar57 = (long *)FUN_710392e290(0x10,0x28,(long ****)ppuVar27,param_4,param_5,
                                                 param_6,param_7,param_8), plVar57 != (long *)0x0))
            goto LAB_710230f108;
          }
          plVar57 = (long *)0x0;
        }
LAB_710230f108:
        *(uint *)((long)plVar57 + 0x1c) = uVar48;
        *(int *)(plVar57 + 4) = iVar16;
        *plVar57 = 0;
        plVar57[1] = 0;
        plVar57[2] = (long)plVar36;
        *plVar52 = (long)plVar57;
        if (**(long **)(lVar32 + 0xd8) != 0) {
          *(long *)(lVar32 + 0xd8) = **(long **)(lVar32 + 0xd8);
          plVar57 = (long *)*plVar52;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                  (*(long **)(lVar32 + 0xe0),plVar57);
        *(long *)(lVar32 + 0xe8) = *(long *)(lVar32 + 0xe8) + 1;
      }
      uVar17 = local_8a8;
      plVar52 = (long *)*plVar35;
      if (plVar52[0xb] != 0) {
        plVar57 = plVar52 + 10;
        plVar47 = (long *)*plVar57;
        plVar36 = plVar57;
        if (plVar47 != (long *)0x0) {
          do {
            bVar14 = *(uint *)((long)plVar47 + 0x1c) < uVar48;
            if (!bVar14) {
              plVar36 = plVar47;
            }
            plVar47 = (long *)plVar47[bVar14];
          } while (plVar47 != (long *)0x0);
          if (((plVar36 != plVar57) && (*(uint *)((long)plVar36 + 0x1c) <= uVar48)) &&
             (uVar22 = (ulong)(int)plVar36[4], (int)plVar36[4] != -1)) {
            lVar32 = plVar52[3];
            if (lVar32 == plVar52[4]) {
              lVar32 = *plVar52;
              if (lVar32 != plVar52[1]) {
                uVar49 = (plVar52[1] - lVar32 >> 6) * -0x349cf60f68a0a23b;
                if (uVar49 < uVar22 || uVar49 - uVar22 == 0) goto LAB_710231034c;
                *(int *)(lVar32 + uVar22 * 0x64340 + 0xc) = iVar16;
              }
            }
            else {
              uVar49 = (plVar52[4] - lVar32 >> 4) * -0x7b425ed097b425ed;
              if (uVar49 < uVar22 || uVar49 - uVar22 == 0) {
LAB_710231034c:
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_out_of_range();
              }
              *(int *)(lVar32 + uVar22 * 0x1b0 + 8) = iVar16;
            }
          }
        }
      }
      puVar58 = *(undefined8 **)(*DAT_7105314510 + 0x88);
      puVar55 = *(undefined8 **)(*DAT_7105314510 + 0x238);
      bVar14 = FUN_71017c84f0(puVar58,local_8a8);
      if (bVar14) {
        local_f0 = 0x13ffff0000000000;
        local_e8 = 0x5affff0000000000;
        local_220 = (long ***)((ulong)local_220 & 0xffffffff00000000);
        local_110 = 0;
        local_108 = 0;
        local_dc = 0;
        local_e0 = 0;
        local_80 = &DAT_c1ffff0000000000;
        FUN_71017bd310(&local_220);
        ppuVar27 = (undefined **)&local_220;
        uVar22 = FUN_71017c81d0(puVar58,uVar17,(undefined4 *)ppuVar27);
        if ((local_208 != 0) && ((uVar22 & 1) != 0)) {
          lVar32 = *(long *)*puVar55;
          uVar22 = 0;
          do {
            plVar52 = (long *)(lVar32 + 0xb40 + uVar22 * 8);
            uVar48 = (uint)uVar22;
            if (*plVar52 == local_208) {
              iVar16 = *(int *)(lVar32 + (uVar22 & 0xffffffff) * 4 + 0xe10) + 1;
              if (uVar48 == 0) goto LAB_710230f3ec;
              goto LAB_710230f3a8;
            }
            uVar49 = uVar22;
            if (plVar52[1] == local_208) {
LAB_710230f38c:
              uVar22 = (ulong)((int)uVar49 + 1);
LAB_710230f39c:
              iVar16 = *(int *)(lVar32 + uVar22 * 4 + 0xe10) + 1;
              goto LAB_710230f3a8;
            }
            uVar17 = uVar48;
            if (plVar52[2] == local_208) {
LAB_710230f398:
              uVar22 = (ulong)(uVar17 + 2);
              goto LAB_710230f39c;
            }
            if (plVar52[3] == local_208) {
              uVar22 = (ulong)(uVar48 + 3);
              goto LAB_710230f39c;
            }
            uVar17 = uVar48 + 3;
            uVar49 = (ulong)uVar17;
            if (plVar52[4] == local_208) goto LAB_710230f38c;
            if (plVar52[5] == local_208) goto LAB_710230f398;
            if (plVar52[6] == local_208) {
              uVar22 = (ulong)(uVar48 + 6);
              goto LAB_710230f39c;
            }
            if (plVar52[7] == local_208) {
              uVar49 = (ulong)(uVar48 + 6);
              goto LAB_710230f38c;
            }
            if (plVar52[8] == local_208) {
              uVar17 = uVar48 + 6;
              goto LAB_710230f398;
            }
            uVar22 = uVar22 + 9;
          } while (plVar52 + 9 != (long *)(lVar32 + 0xe10));
          uVar22 = 0x59;
          iVar16 = 1;
LAB_710230f3a8:
          lVar19 = (uVar22 & 0xffffffff) + 1;
          puVar55 = (undefined8 *)(lVar32 + (uVar22 & 0xffffffff) * 8 + 0xb40);
          puVar33 = (undefined4 *)(lVar32 + (uVar22 & 0xffffffff) * 4 + 0xe10);
          do {
            *puVar55 = puVar55[-1];
            lVar19 = lVar19 + -1;
            *puVar33 = puVar33[-1];
            puVar55 = puVar55 + -1;
            puVar33 = puVar33 + -1;
          } while (1 < lVar19);
LAB_710230f3ec:
          *(long *)(lVar32 + 0xb40) = local_208;
          *(int *)(lVar32 + 0xe10) = iVar16;
        }
      }
    }
    piVar21 = local_238;
    if ((local_3d0[0] == 0) &&
       (iVar16 = CONCAT13(uStack_8a9,CONCAT21(uStack_8ab,bStack_8ac)), iVar16 != -1)) {
      uVar48 = (uint)local_3d8;
      if (local_230 < local_228) {
        *(ulong *)local_230 = CONCAT44(iVar16,(uint)local_3d8);
        local_230 = local_230 + 2;
      }
      else {
        pUVar56 = (Uid *)((long)local_230 - (long)local_238);
        lVar32 = (long)pUVar56 >> 3;
        uVar22 = lVar32 + 1;
        if (uVar22 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        if ((ulong)((long)local_228 - (long)local_238 >> 3) < 0xfffffffffffffff) {
          uVar49 = (long)local_228 - (long)local_238 >> 2;
          if (uVar22 <= uVar49) {
            uVar22 = uVar49;
          }
          if (uVar22 != 0) {
            if (uVar22 >> 0x3d == 0) goto LAB_710230eb44;
            goto LAB_710231033c;
          }
LAB_710230eba4:
          piVar24 = (int *)0x0;
        }
        else {
          uVar22 = 0x1fffffffffffffff;
LAB_710230eb44:
          ppplVar39 = (long ***)(uVar22 * 8);
          if (ppplVar39 == (long ***)0x0) {
            ppplVar39 = (long ***)0x1;
          }
          piVar24 = (int *)FUN_710392e290(0x10,ppplVar39,(long ****)ppuVar27,param_4,param_5,param_6
                                          ,param_7,param_8);
          if (piVar24 == (int *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_6c[0] = 0;
              ppuVar27 = (undefined **)&local_220;
              local_220 = ppplVar39;
              uVar49 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
              if (((uVar49 & 1) != 0) &&
                 (piVar24 = (int *)FUN_710392e290(0x10,ppplVar39,(long ****)ppuVar27,param_4,param_5
                                                  ,param_6,param_7,param_8), piVar24 != (int *)0x0))
              goto LAB_710230eba8;
            }
            goto LAB_710230eba4;
          }
        }
LAB_710230eba8:
        *(ulong *)(piVar24 + lVar32 * 2) = CONCAT44(iVar16,uVar48);
        if (0 < (long)pUVar56) {
          memcpy(piVar24,piVar21,(size_t)pUVar56);
          ppuVar27 = (undefined **)pUVar56;
        }
        local_238 = piVar24;
        local_230 = piVar24 + lVar32 * 2 + 2;
        local_228 = piVar24 + uVar22 * 2;
        if (piVar21 != (int *)0x0) {
          FUN_710392eb40((ulong)piVar21);
        }
      }
    }
    uVar20 = uVar20 + 1;
  } while (uVar20 < 8);
  piVar21 = local_230;
  if (local_238 != local_230) {
    FUN_71017aefd0(local_238,local_230);
    for (piVar24 = local_238; piVar21 = extraout_x1_07, piVar24 != local_230; piVar24 = piVar24 + 2)
    {
      lVar32 = *DAT_7105314510;
      uVar48 = piVar24[1];
      if ((uVar48 != 0xffffffff && *(char *)(lVar32 + 1) == '\0') && (uVar48 < 0x3d)) {
        plVar52 = (long *)**(undefined8 **)(lVar32 + 0x58);
        iVar16 = **(int **)**(undefined8 **)(lVar32 + 0x1f8) + 1;
        **(int **)**(undefined8 **)(lVar32 + 0x1f8) = iVar16;
        *(int *)(*plVar52 + (ulong)uVar48 * 0xf7d8 + 0x54) = iVar16;
        lVar32 = *plVar52 + (ulong)uVar48 * 0xf7d8;
        *(undefined4 *)(lVar32 + 0x50) = *(undefined4 *)(lVar32 + 0x54);
      }
    }
  }
  lVar32 = *plVar35;
  puVar54 = (ulong *)(lVar32 + 0xa0);
  if (*puVar54 != 0) {
    FUN_71017c62a0(puVar54,piVar21,(long ****)ppuVar27,param_4,param_5,param_6,param_7,param_8);
    piVar21 = extraout_x1_08;
  }
  if (*(long *)(lVar32 + 0xc0) != *(long *)(lVar32 + 200)) {
    local_798[0] = 0;
    local_7a0 = 0;
    local_670 = (long *)0x0;
    local_640 = (long *)0x0;
    local_610 = (long *)0x0;
    local_5e0 = (long *)0x0;
    local_5b0 = (long *)0x0;
    bStack_8a4 = 0;
    local_8b0 = 5;
    uVar20 = 0;
    while( true ) {
      if ("save:/save_data/mii"[uVar20] == 0) break;
      cVar8 = "save:/save_data/mii"[uVar20 + 1];
      (&bStack_8a4)[uVar20] = "save:/save_data/mii"[uVar20];
      if (cVar8 == '\0') {
        uVar20 = uVar20 + 1;
        break;
      }
      *(char *)((long)&uStack_8a3 + uVar20) = cVar8;
      uVar20 = uVar20 + 2;
    }
    uVar17 = 0x811c9dc5;
    *(undefined1 *)(((ulong)&local_8b0 | 0xc) + (uVar20 & 0xffffffff)) = 0;
    local_8a8 = (uint)uVar20;
    uVar44 = (uint)bStack_8a4;
    uVar48 = uVar17;
    if (bStack_8a4 != 0) {
      pbVar50 = (byte *)((ulong)&local_8b0 | 0xd);
      do {
        uVar48 = uVar48 * 0x89 ^ uVar44;
        uVar44 = (uint)*pbVar50;
        pbVar50 = pbVar50 + 1;
      } while (uVar44 != 0);
    }
    bStack_8ac = (byte)uVar48;
    uStack_8ab = (undefined2)(uVar48 >> 8);
    uStack_8a9 = (undefined1)(uVar48 >> 0x18);
    for (uVar20 = 0; (&DAT_710425eb1f)[uVar20] != 0; uVar20 = uVar20 + 2) {
      bVar15 = (&DAT_710425eb20)[uVar20];
      local_798[uVar20] = (&DAT_710425eb1f)[uVar20];
      if (bVar15 == 0) {
        uVar20 = uVar20 + 1;
        break;
      }
      local_798[uVar20 + 1] = bVar15;
    }
    local_798[uVar20 & 0xffffffff] = 0;
    uVar48 = (uint)local_798[0];
    local_7a0 = CONCAT44((int)uVar20,(undefined4)local_7a0);
    if (local_798[0] != 0) {
      pbVar50 = local_798;
      do {
        pbVar50 = pbVar50 + 1;
        uVar17 = uVar17 * 0x89 ^ uVar48;
        uVar48 = (uint)*pbVar50;
      } while (uVar48 != 0);
    }
    local_7a0 = CONCAT44((int)uVar20,uVar17);
    local_220 = (long ***)&DAT_710509f658;
    local_218 = puVar54;
    local_200 = &local_220;
    FUN_71003cb050((long *)&local_220,&lStack_690);
    if (&local_220 == local_200) {
      pplVar37 = (*local_200)[4];
LAB_710230f644:
      (*(code *)pplVar37)();
    }
    else if (local_200 != (long ****)0x0) {
      pplVar37 = (*local_200)[5];
      goto LAB_710230f644;
    }
    local_220 = (long ***)&DAT_710509f6a0;
    local_218 = puVar54;
    local_200 = &local_220;
    FUN_71003cb050((long *)&local_220,alStack_630);
    if (&local_220 == local_200) {
      pplVar37 = (*local_200)[4];
LAB_710230f694:
      (*(code *)pplVar37)();
    }
    else if (local_200 != (long ****)0x0) {
      pplVar37 = (*local_200)[5];
      goto LAB_710230f694;
    }
    plVar35 = (long *)FUN_710392e290(0x10,0x4d0,(long ****)ppuVar27,param_4,param_5,param_6,param_7,
                                     param_8);
    if (plVar35 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_3d8 = local_3d8 & 0xffffffff00000000;
        local_220 = (long ***)0x4d0;
        pppplVar28 = &local_220;
        uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_3d8);
        if (((uVar20 & 1) != 0) &&
           (plVar35 = (long *)FUN_710392e290(0x10,0x4d0,pppplVar28,param_4,param_5,param_6,param_7,
                                             param_8), plVar35 != (long *)0x0)) goto LAB_710230f6f8;
      }
      plVar35 = (long *)0x0;
    }
LAB_710230f6f8:
    *plVar35 = lVar32 + 0xa8;
    FUN_71017c1e40((undefined4 *)(plVar35 + 2),&local_8b0);
    plVar35[0x94] = (long)FUN_71017c2130;
    plVar35[0x91] = (long)FUN_71017c2120;
    plVar35[0x69] = (long)FUN_71017c2150;
    plVar35[0x6b] = (long)FUN_71017c2160;
    plVar35[0x6d] = (long)FUN_71017c2220;
    plVar35[0x6f] = (long)FUN_71017c22e0;
    plVar35[0x71] = (long)FUN_71017c2530;
    plVar35[0x73] = (long)FUN_71017c2910;
    plVar35[0x75] = (long)FUN_71017c2d30;
    plVar35[0x77] = (long)FUN_71017c31d0;
    plVar35[0x79] = (long)FUN_71017c3fd0;
    plVar35[0x95] = (long)FUN_710143c880;
    plVar35[0x7b] = (long)FUN_71017c4290;
    plVar35[100] = (long)plVar35;
    plVar35[0x68] = 0;
    plVar35[0x67] = 0;
    plVar35[0x90] = 0;
    plVar35[0x8f] = 0;
    plVar35[0x8e] = 0;
    plVar35[0x8d] = 0;
    plVar35[0x8c] = 0;
    plVar35[0x8b] = 0;
    plVar35[0x93] = (long)plVar35;
    plVar35[0x92] = 0;
    *(undefined2 *)(plVar35 + 0x99) = 0;
    plVar35[0x98] = 0;
    plVar35[0x97] = 0;
    plVar35[0x96] = 0;
    plVar35[0x6a] = 0;
    plVar35[0x6c] = 0;
    plVar35[0x6e] = 0;
    plVar35[0x70] = 0;
    plVar35[0x72] = 0;
    plVar35[0x74] = 0;
    plVar35[0x76] = 0;
    plVar35[0x78] = 0;
    plVar35[0x7a] = 0;
    plVar35[0x7c] = 0;
    plVar35[0x7d] = (long)FUN_71017c47a0;
    plVar35[0x7e] = 0;
    plVar35[0x66] = 0;
    plVar35[0x65] = 0;
    *(undefined8 *)((long)plVar35 + 0x43c) = 0;
    *(undefined8 *)((long)plVar35 + 0x434) = 0;
    *(undefined8 *)((long)plVar35 + 0x42c) = 0;
    *(undefined8 *)((long)plVar35 + 0x424) = 0;
    *(undefined8 *)((long)plVar35 + 0x41c) = 0;
    *(undefined8 *)((long)plVar35 + 0x414) = 0;
    *(undefined8 *)((long)plVar35 + 0x40c) = 0;
    *(undefined4 *)((long)plVar35 + 0x444) = 0;
    *(undefined8 *)((long)plVar35 + 0x404) = 0;
    *(undefined8 *)((long)plVar35 + 0x3fc) = 0;
    *(undefined4 *)(plVar35 + 0x89) = 0xffffffff;
    *(undefined4 *)((long)plVar35 + 0x44c) = 0;
    *(undefined4 *)(plVar35 + 0x8a) = 0xffffffff;
    *(undefined1 *)((long)plVar35 + 0x454) = 0;
    *(undefined4 *)(plVar35 + 0x7f) = 0;
    FUN_71017c47e0(plVar35 + 100);
    local_220 = (long ***)0x0;
    local_3d8 = 0;
    ppuVar27 = (undefined **)*DAT_710593b580;
    iVar16 = *(int *)((long)ppuVar27 + 0x7300);
    if (iVar16 != -1) {
      if (*(ulong *)((long)ppuVar27 + 0x72c0) <= (ulong)(long)iVar16) goto LAB_710231033c;
      ppuVar27 = (undefined **)((long)ppuVar27 + (long)iVar16 * 0xcc0 + 0xcc0);
    }
    iVar16 = nn::fs::GetSaveDataSize((long *)&local_220,&local_3d8,(Uid *)ppuVar27);
    uVar20 = local_3d8;
    if (iVar16 != 0) {
      nn::err::ShowError(iVar16);
      uVar20 = 0;
    }
    plVar35[0x97] = uVar20 - 0x80000;
    uVar20 = *puVar54;
    *puVar54 = (ulong)plVar35;
    if (uVar20 != 0) {
      uVar22 = *(ulong *)(uVar20 + 0x470);
      if (uVar22 != 0) {
        *(ulong *)(uVar20 + 0x478) = uVar22;
        FUN_710392eb40(uVar22);
      }
      uVar22 = *(ulong *)(uVar20 + 0x458);
      if (uVar22 != 0) {
        *(ulong *)(uVar20 + 0x460) = uVar22;
        FUN_710392eb40(uVar22);
      }
      plVar35 = *(long **)(uVar20 + 0x310);
      if ((long *)(uVar20 + 0x2f0) == plVar35) {
        pcVar38 = *(code **)(*plVar35 + 0x20);
LAB_710230f944:
        (*pcVar38)();
      }
      else if (plVar35 != (long *)0x0) {
        pcVar38 = *(code **)(*plVar35 + 0x28);
        goto LAB_710230f944;
      }
      plVar35 = *(long **)(uVar20 + 0x2e0);
      if ((long *)(uVar20 + 0x2c0) == plVar35) {
        pcVar38 = *(code **)(*plVar35 + 0x20);
LAB_710230f970:
        (*pcVar38)();
      }
      else if (plVar35 != (long *)0x0) {
        pcVar38 = *(code **)(*plVar35 + 0x28);
        goto LAB_710230f970;
      }
      plVar35 = *(long **)(uVar20 + 0x2b0);
      if ((long *)(uVar20 + 0x290) == plVar35) {
        pcVar38 = *(code **)(*plVar35 + 0x20);
LAB_710230f99c:
        (*pcVar38)();
      }
      else if (plVar35 != (long *)0x0) {
        pcVar38 = *(code **)(*plVar35 + 0x28);
        goto LAB_710230f99c;
      }
      plVar35 = *(long **)(uVar20 + 0x280);
      if ((long *)(uVar20 + 0x260) == plVar35) {
        pcVar38 = *(code **)(*plVar35 + 0x20);
LAB_710230f9c8:
        (*pcVar38)();
      }
      else if (plVar35 != (long *)0x0) {
        pcVar38 = *(code **)(*plVar35 + 0x28);
        goto LAB_710230f9c8;
      }
      plVar35 = *(long **)(uVar20 + 0x250);
      if ((long *)(uVar20 + 0x230) == plVar35) {
        pcVar38 = *(code **)(*plVar35 + 0x20);
LAB_710230f9f4:
        (*pcVar38)();
      }
      else if (plVar35 != (long *)0x0) {
        pcVar38 = *(code **)(*plVar35 + 0x28);
        goto LAB_710230f9f4;
      }
      FUN_710392eb40(uVar20);
      plVar35 = (long *)*puVar54;
    }
    uVar22 = plVar35[0x8b];
    *(undefined1 *)((long)plVar35 + 0x4c9) = 1;
    plVar35[0x8c] = uVar22;
    uVar20 = *(long *)(lVar32 + 200) - *(long *)(lVar32 + 0xc0) >> 2;
    if ((ulong)(((long)(plVar35[0x8d] - uVar22) >> 3) * -0x3333333333333333) < uVar20) {
      if (0x666666666666666 < uVar20) goto LAB_710231033c;
      ppplVar39 = (long ***)(uVar20 * 0x28);
      if (ppplVar39 == (long ***)0x0) {
        ppplVar39 = (long ***)0x1;
      }
      lVar19 = FUN_710392e290(0x10,ppplVar39,(long ****)ppuVar27,param_4,param_5,param_6,param_7,
                              param_8);
      if (lVar19 == 0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_3d8 = local_3d8 & 0xffffffff00000000;
          ppuVar27 = (undefined **)&local_220;
          local_220 = ppplVar39;
          uVar49 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_3d8);
          if (((uVar49 & 1) != 0) &&
             (lVar19 = FUN_710392e290(0x10,ppplVar39,(long ****)ppuVar27,param_4,param_5,param_6,
                                      param_7,param_8), lVar19 != 0)) goto LAB_710230fab4;
        }
        lVar19 = 0;
      }
LAB_710230fab4:
      plVar35[0x8b] = lVar19;
      plVar35[0x8c] = lVar19;
      plVar35[0x8d] = lVar19 + uVar20 * 0x28;
      if (uVar22 != 0) {
        FUN_710392eb40(uVar22);
      }
    }
    puVar34 = *(uint **)(lVar32 + 0xc0);
    puVar41 = *(uint **)(lVar32 + 200);
    if (puVar34 != puVar41) {
      do {
        ppuVar27 = (undefined **)(ulong)*puVar34;
        FUN_71017c48b0((uint *)&local_220,"%s_%d.bin",plVar35 + 0x25,ppuVar27,param_4,param_5,
                       param_6,param_7,param_8);
        local_3d8 = 0;
        FUN_710143d230((uint *)&local_3d8,(byte *)&local_218);
        puVar25 = (uint *)plVar35[0x8c];
        if (puVar25 < (uint *)plVar35[0x8d]) {
          *puVar25 = 0;
          FUN_710143d230(puVar25,(byte *)local_3d0);
          plVar35[0x8c] = plVar35[0x8c] + 0x28;
        }
        else {
          FUN_71017c4d40((ulong *)(plVar35 + 0x8b),(long)&local_3d8,(long ****)ppuVar27,param_4,
                         param_5,param_6,param_7,param_8);
        }
        puVar34 = puVar34 + 1;
      } while (puVar41 != puVar34);
    }
    if (*(int *)((long)plVar35 + 0x444) < 0x12) {
      uVar48 = *(int *)((long)plVar35 + 0x444) + 1;
      *(uint *)((long)plVar35 + 0x444) = uVar48;
      if (0x12 < uVar48) {
LAB_710231033c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined4 *)((long)plVar35 + (long)(int)uVar48 * 4 + 0x3f8) = 10;
      if (*(int *)((long)plVar35 + 0x444) < 0x12) {
        uVar48 = *(int *)((long)plVar35 + 0x444) + 1;
        *(uint *)((long)plVar35 + 0x444) = uVar48;
        if (0x12 < uVar48) goto LAB_710231033c;
        *(undefined4 *)((long)plVar35 + (long)(int)uVar48 * 4 + 0x3f8) = 7;
        if (*(int *)((long)plVar35 + 0x444) < 0x12) {
          uVar48 = *(int *)((long)plVar35 + 0x444) + 1;
          *(uint *)((long)plVar35 + 0x444) = uVar48;
          if (0x12 < uVar48) goto LAB_710231033c;
          *(undefined4 *)((long)plVar35 + (long)(int)uVar48 * 4 + 0x3f8) = 6;
          if (*(int *)((long)plVar35 + 0x444) < 0x12) {
            uVar48 = *(int *)((long)plVar35 + 0x444) + 1;
            *(uint *)((long)plVar35 + 0x444) = uVar48;
            if (0x12 < uVar48) goto LAB_710231033c;
            *(undefined4 *)((long)plVar35 + (long)(int)uVar48 * 4 + 0x3f8) = 3;
          }
        }
      }
    }
    FUN_71017c47e0(plVar35 + 100);
    *(undefined2 *)(lVar32 + 0xf0) = 0x101;
    if (alStack_5d0 == local_5b0) {
      pcVar38 = *(code **)(*local_5b0 + 0x20);
LAB_710230fc4c:
      (*pcVar38)();
      piVar21 = extraout_x1_10;
    }
    else {
      piVar21 = extraout_x1_09;
      if (local_5b0 != (long *)0x0) {
        pcVar38 = *(code **)(*local_5b0 + 0x28);
        goto LAB_710230fc4c;
      }
    }
    if (alStack_600 == local_5e0) {
      pcVar38 = *(code **)(*local_5e0 + 0x20);
LAB_710230fc7c:
      (*pcVar38)();
      piVar21 = extraout_x1_11;
    }
    else if (local_5e0 != (long *)0x0) {
      pcVar38 = *(code **)(*local_5e0 + 0x28);
      goto LAB_710230fc7c;
    }
    if (alStack_630 == local_610) {
      pcVar38 = *(code **)(*local_610 + 0x20);
LAB_710230fcac:
      (*pcVar38)();
      piVar21 = extraout_x1_12;
    }
    else if (local_610 != (long *)0x0) {
      pcVar38 = *(code **)(*local_610 + 0x28);
      goto LAB_710230fcac;
    }
    if (alStack_660 == local_640) {
      pcVar38 = *(code **)(*local_640 + 0x20);
LAB_710230fcdc:
      (*pcVar38)();
      piVar21 = extraout_x1_13;
    }
    else if (local_640 != (long *)0x0) {
      pcVar38 = *(code **)(*local_640 + 0x28);
      goto LAB_710230fcdc;
    }
    if (&lStack_690 == local_670) {
      pcVar38 = *(code **)(*local_670 + 0x20);
    }
    else {
      if (local_670 == (long *)0x0) goto LAB_710230fd10;
      pcVar38 = *(code **)(*local_670 + 0x28);
    }
    (*pcVar38)();
    piVar21 = extraout_x1_14;
  }
LAB_710230fd10:
  auVar61._8_8_ = 0;
  auVar61._0_8_ = piVar21;
  auVar61 = auVar61 << 0x40;
  if (local_238 != (int *)0x0) {
    local_230 = local_238;
    auVar61 = FUN_710392eb40((ulong)local_238);
  }
  FUN_710366d8a0(auVar61._0_8_,auVar61._8_8_,(long ****)ppuVar27,param_4,param_5,param_6,param_7,
                 param_8);
  if ((DAT_71053050f0 & 0x7fff0000) != 0x4030000) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_71053144d8), iVar16 != 0))
    {
      FUN_7101764000();
      ppuVar27 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    uVar48 = DAT_71052391c0 ^ DAT_71052391c0 << 0xb;
    DAT_71052391c0 = DAT_71052391c4;
    DAT_710530e380 = uVar48 ^ uVar48 >> 8 ^ DAT_71052391cc ^ DAT_71052391cc >> 0x13;
    DAT_71052391c4 = DAT_71052391c8;
    DAT_71052391c8 = DAT_71052391cc;
    DAT_71052391cc = DAT_710530e380;
  }
  if (DAT_710532f8d0 != 0) {
    lVar32 = *(long *)(DAT_710532f8d0 + 8);
    *(undefined8 *)(lVar32 + 0x10) = 0xd9ffff0000000000;
    *(undefined2 *)(lVar32 + 0x88) = 0;
    *(undefined1 *)(lVar32 + 0x8a) = 0;
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_71053144d8), iVar16 != 0)) {
    FUN_7101764000();
    ppuVar27 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if ((DAT_71053050f4 != '\0') || (DAT_71053050f0 == 0x7010200)) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_71053144d8), iVar16 != 0))
    {
      FUN_7101764000();
      ppuVar27 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    lVar32 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
    if ((*(long *)(lVar32 + 0x9ff8) != 0) &&
       (uVar48 = FUN_71016f6340(lVar32 + 0xa010,*(long *)(lVar32 + 0x9ff8)), (~uVar48 & 0xff) != 0))
    {
      FUN_710169edd0(lVar32,1,ppuVar27,param_4,param_5,param_6,param_7,param_8);
    }
  }
LAB_710230fe14:
  plVar35 = FUN_710356a030((long *)(DAT_7105338018 + 0x18),&DAT_71053395f8);
  lVar32 = *(long *)(plVar35[5] + 0x10);
  *(undefined8 *)(lVar32 + 0x58) = 0x3f80000000000000;
  *(undefined8 *)(lVar32 + 0x50) = 0;
  FUN_7103726af0(*(long *)(param_2 + 8),*(undefined4 *)(param_1 + 400));
  return;
}

