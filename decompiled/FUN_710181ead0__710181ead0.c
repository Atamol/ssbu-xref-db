// addr:      710181ead0
// offset:    0x181ead0
// name:      FUN_710181ead0
// mangled:   
// signature: undefined __cdecl FUN_710181ead0(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710181ead0(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long **pplVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined *puVar15;
  ulong uVar16;
  long **pplVar17;
  long ***ppplVar18;
  undefined **ppuVar19;
  void *__dest;
  long *plVar20;
  undefined8 *puVar21;
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
  undefined8 uVar22;
  undefined8 extraout_x1_23;
  long *********ppppppppplVar23;
  long ****pppplVar24;
  byte ****ppppbVar25;
  long ****pppplVar26;
  long ****pppplVar27;
  undefined8 uVar28;
  long *plVar29;
  ulong *puVar30;
  uint uVar32;
  long lVar33;
  ulong uVar34;
  long *********ppppppppplVar35;
  void *__src;
  size_t __n;
  long *plVar36;
  undefined1 auVar37 [16];
  void *local_138;
  void *local_130;
  long ***local_120;
  long ***local_118;
  long ***local_110;
  undefined **local_108;
  undefined **local_100;
  undefined **local_f8;
  long ***local_f0;
  ulong local_e8;
  undefined **local_e0;
  ulong local_d8;
  undefined8 local_d0;
  ulong local_c8 [8];
  undefined4 local_88;
  undefined1 local_84;
  undefined **local_80;
  ulong local_78;
  undefined4 local_6c [3];
  ulong *puVar31;
  
  lVar10 = FUN_710392e290(0x10,0x150,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar22 = extraout_x1;
  if (lVar10 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_108 = (undefined **)((ulong)local_108 & 0xffffffff00000000);
      local_d0 = (undefined **)&DAT_00000150;
      param_3 = (long *********)&local_d0;
      auVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_108);
      uVar22 = auVar37._8_8_;
      if (((auVar37._0_8_ & 1) != 0) &&
         (lVar10 = FUN_710392e290(0x10,0x150,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), uVar22 = extraout_x1_00, lVar10 != 0))
      goto LAB_710181eb54;
    }
    lVar10 = 0;
  }
LAB_710181eb54:
  *(undefined1 *)(lVar10 + 0xe4) = 0;
  *(undefined8 *)(lVar10 + 0x10) = 0;
  *(undefined8 *)(lVar10 + 0x18) = 0;
  *(undefined4 *)(lVar10 + 0xe0) = 0xffffffff;
  *(long *)lVar10 = lVar10;
  *(undefined8 *)(lVar10 + 8) = 0;
  *(undefined8 *)(lVar10 + 0xd0) = 0;
  *(undefined8 *)(lVar10 + 0xd8) = 0xffffffff;
  *(undefined8 *)(lVar10 + 0xc0) = 0;
  *(undefined8 *)(lVar10 + 200) = 0;
  *(undefined8 *)(lVar10 + 0xb0) = 0;
  *(undefined8 *)(lVar10 + 0xb8) = 0;
  *(undefined8 *)(lVar10 + 0xa0) = 0;
  *(undefined8 *)(lVar10 + 0xa8) = 0;
  *(undefined8 *)(lVar10 + 0x90) = 0;
  *(undefined8 *)(lVar10 + 0x98) = 0;
  *(undefined8 *)(lVar10 + 0x80) = 0;
  *(undefined8 *)(lVar10 + 0x88) = 0;
  *(undefined8 *)(lVar10 + 0x70) = 0;
  *(undefined8 *)(lVar10 + 0x78) = 0;
  *(undefined8 *)(lVar10 + 0x60) = 0;
  *(undefined8 *)(lVar10 + 0x68) = 0;
  *(undefined8 *)(lVar10 + 0x50) = 0;
  *(undefined8 *)(lVar10 + 0x58) = 0;
  *(undefined8 *)(lVar10 + 0x40) = 0;
  *(undefined8 *)(lVar10 + 0x48) = 0;
  *(undefined8 *)(lVar10 + 0x30) = 0;
  *(undefined8 *)(lVar10 + 0x38) = 0;
  *(undefined8 *)(lVar10 + 0x20) = 0;
  *(undefined8 *)(lVar10 + 0x28) = 0;
  FUN_7103763c70((undefined8 *)(lVar10 + 0xe8),uVar22,(long ****)param_3,param_4,param_5,param_6,
                 param_7,param_8);
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar22 = extraout_x1_01;
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_108 = (undefined **)((ulong)local_108 & 0xffffffff00000000);
      local_d0 = (undefined **)&DAT_00000080;
      param_3 = (long *********)&local_d0;
      auVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_108);
      uVar22 = auVar37._8_8_;
      if (((auVar37._0_8_ & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), uVar22 = extraout_x1_02, puVar11 != (undefined8 *)0x0))
      goto LAB_710181ebf4;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_710181ebf4:
  *puVar11 = &PTR_FUN_7105181b40;
  puVar11[2] = 0;
  puVar11[1] = puVar11 + 2;
  puVar11[5] = 0;
  puVar11[3] = 0;
  puVar11[4] = puVar11 + 5;
  puVar11[8] = 0;
  puVar11[6] = 0;
  puVar11[7] = puVar11 + 8;
  puVar11[0xb] = 0;
  *(undefined4 *)(puVar11 + 0xd) = 2;
  puVar11[0xc] = 0;
  *(undefined4 *)(puVar11 + 0xf) = 0;
  puVar11[0xe] = 0;
  puVar11[9] = 0;
  puVar11[10] = puVar11 + 0xb;
  *(undefined8 *)(lVar10 + 0x118) = 0;
  *(undefined8 *)(lVar10 + 0x120) = 0;
  *(undefined8 *)(lVar10 + 0x108) = 0;
  *(undefined8 *)(lVar10 + 0x110) = 0;
  *(undefined8 **)(lVar10 + 0xf8) = puVar11;
  *(undefined8 *)(lVar10 + 0x100) = 0;
  lVar12 = DAT_710532f840;
  *(undefined8 *)(lVar10 + 0x128) = *(undefined8 *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
  uVar28 = *(undefined8 *)(*(long *)(lVar12 + 8) + 0xc0);
  *(undefined1 *)(lVar10 + 0x138) = 0;
  *(undefined8 *)(lVar10 + 0x130) = uVar28;
  *(undefined8 *)(lVar10 + 0x13c) = 9;
  *(code **)(lVar10 + 0x28) = FUN_710181d710;
  *(undefined8 *)(lVar10 + 0x30) = 0;
  *(undefined1 *)(lVar10 + 0x144) = 0;
  *(code **)(lVar10 + 0x38) = FUN_710181dbb0;
  *(undefined8 *)(lVar10 + 0x40) = 0;
  *(undefined8 *)(lVar10 + 0x148) = 0;
  *(code **)(lVar10 + 0x48) = FUN_710181dd50;
  *(undefined8 *)(lVar10 + 0x50) = 0;
  *(code **)(lVar10 + 0x58) = FUN_710181e580;
  *(undefined8 *)(lVar10 + 0x60) = 0;
  *(code **)(lVar10 + 0x68) = FUN_710181e6b0;
  *(undefined8 *)(lVar10 + 0x70) = 0;
  *(code **)(lVar10 + 0x78) = FUN_710181e7f0;
  *(undefined8 *)(lVar10 + 0x80) = 0;
  if (0x12 < *(uint *)(lVar10 + 0xd4)) goto LAB_71018208a4;
  *(undefined4 *)(lVar10 + (long)(int)*(uint *)(lVar10 + 0xd4) * 4 + 0x88) = 0;
  uVar34 = *(ulong *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar10;
  if (uVar34 != 0) {
    FUN_710181e860(uVar34,uVar22,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_710392eb40(uVar34);
    lVar10 = *(long *)(param_1 + 0x58);
  }
  plVar36 = (long *)(lVar10 + 0xf8);
  lVar12 = *plVar36;
  FUN_710323beb0(lVar12,(ulong *)&DAT_71045444f0,(long)*(int *)(lVar12 + 0x70),
                 (ulong)*(uint *)(lVar12 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar12 = *plVar36;
  FUN_710323beb0(lVar12,(ulong *)&DAT_71045444f8,(long)*(int *)(lVar12 + 0x70),
                 (ulong)*(uint *)(lVar12 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar12 = *plVar36;
  FUN_710323beb0(lVar12,(ulong *)&DAT_7104544e78,(long)*(int *)(lVar12 + 0x70),
                 (ulong)*(uint *)(lVar12 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar12 = *plVar36;
  FUN_710323beb0(lVar12,(ulong *)&DAT_7104544e80,(long)*(int *)(lVar12 + 0x70),
                 (ulong)*(uint *)(lVar12 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar12 = *plVar36;
  FUN_710323beb0(lVar12,(ulong *)&DAT_7104545000,(long)*(int *)(lVar12 + 0x70),
                 (ulong)*(uint *)(lVar12 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar12 = *plVar36;
  FUN_710323beb0(lVar12,(ulong *)&DAT_7104545008,(long)*(int *)(lVar12 + 0x70),
                 (ulong)*(uint *)(lVar12 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar12 = *plVar36;
  FUN_710323beb0(lVar12,(ulong *)&DAT_7104545010,(long)*(int *)(lVar12 + 0x70),
                 (ulong)*(uint *)(lVar12 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar12 = *plVar36;
  FUN_710323beb0(lVar12,(ulong *)&DAT_7104545018,(long)*(int *)(lVar12 + 0x70),
                 (ulong)*(uint *)(lVar12 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar12 = *plVar36;
  FUN_710323beb0(lVar12,(ulong *)&DAT_7104545020,(long)*(int *)(lVar12 + 0x70),
                 (ulong)*(uint *)(lVar12 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar12 = *plVar36;
  pppplVar26 = (long ****)0x1;
  FUN_710323beb0(lVar12,(ulong *)&DAT_7104545028,(long)*(int *)(lVar12 + 0x70),
                 (ulong)*(uint *)(lVar12 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  local_d0 = (undefined **)FUN_710323af70(0x7104545c50,0);
  if (((ulong)local_d0 & 0xffffffffff) != 0) {
    lVar12 = *plVar36;
    FUN_710323c4e0(lVar12,&local_d0,(long *********)(long)*(int *)(lVar12 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar12 + 0x68),pppplVar26,param_6,param_7,param_8);
  }
  local_d0 = (undefined **)FUN_710323af70(0x71043cfb76,0);
  if (((ulong)local_d0 & 0xffffffffff) != 0) {
    lVar12 = *plVar36;
    FUN_710323c4e0(lVar12,&local_d0,(long *********)(long)*(int *)(lVar12 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar12 + 0x68),pppplVar26,param_6,param_7,param_8);
  }
  lVar12 = *plVar36;
  ppppppppplVar23 = (long *********)(long)*(int *)(lVar12 + 0x70);
  ppppbVar25 = (byte ****)(ulong)*(uint *)(lVar12 + 0x68);
  pppplVar26 = (long ****)0x0;
  FUN_710323beb0(lVar12,(ulong *)&DAT_7104545c78,(long)ppppppppplVar23,(ulong)ppppbVar25,
                 (long ****)0x0,param_6,param_7,param_8);
  lVar12 = *plVar36;
  uVar34 = FUN_710323cb80(lVar12,extraout_x1_03,ppppppppplVar23,ppppbVar25,pppplVar26,param_6,
                          param_7,param_8);
  while ((uVar34 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar34 = FUN_710323cb80(lVar12,extraout_x1_04,ppppppppplVar23,ppppbVar25,pppplVar26,param_6,
                            param_7,param_8);
  }
  puVar11 = *(undefined8 **)(param_2 + 0xa8);
  if (((DAT_7105324838 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_7105324838), iVar9 != 0)) {
    if (((DAT_7105324748 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_7105324748), iVar9 != 0)) {
      if (((DAT_7105324750 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_7105324750), iVar9 != 0))
      {
        DAT_7105324758 = 0;
        __cxa_guard_release(&DAT_7105324750);
      }
      DAT_7105324760 = &DAT_7105324758;
      __cxa_guard_release(&DAT_7105324748);
    }
    DAT_7105324840 = &DAT_7105324760;
    __cxa_guard_release(&DAT_7105324838);
  }
  for (puVar13 = (undefined8 *)(**(code **)*puVar11)(puVar11);
      (undefined8 **)puVar13 != &DAT_7105324840; puVar13 = (undefined8 *)*puVar13) {
  }
  *(undefined1 *)(lVar10 + 0x138) = *(undefined1 *)puVar11[1];
  puVar11 = *(undefined8 **)(param_2 + 0xa8);
  if (((DAT_7105324838 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_7105324838), iVar9 != 0)) {
    if (((DAT_7105324748 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_7105324748), iVar9 != 0)) {
      if (((DAT_7105324750 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_7105324750), iVar9 != 0))
      {
        DAT_7105324758 = 0;
        __cxa_guard_release(&DAT_7105324750);
      }
      DAT_7105324760 = &DAT_7105324758;
      __cxa_guard_release(&DAT_7105324748);
    }
    DAT_7105324840 = &DAT_7105324760;
    __cxa_guard_release(&DAT_7105324838);
  }
  for (puVar13 = (undefined8 *)(**(code **)*puVar11)(puVar11);
      (undefined8 **)puVar13 != &DAT_7105324840; puVar13 = (undefined8 *)*puVar13) {
  }
  lVar12 = puVar11[1];
  local_130 = (void *)0x0;
  local_138 = (void *)0x0;
  ppppppppplVar35 = (long *********)(*(long *)(lVar12 + 0x10) - *(long *)(lVar12 + 8));
  if (ppppppppplVar35 != (long *********)0x0) {
    if ((ulong)((long)ppppppppplVar35 >> 3) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    local_138 = (void *)FUN_710392e290(0x10,ppppppppplVar35,(long ****)ppppppppplVar23,ppppbVar25,
                                       pppplVar26,param_6,param_7,param_8);
    if (local_138 == (void *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_108 = (undefined **)((ulong)local_108 & 0xffffffff00000000);
        ppppppppplVar23 = (long *********)&local_d0;
        local_d0 = (undefined **)ppppppppplVar35;
        uVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_108);
        if (((uVar34 & 1) != 0) &&
           (local_138 = (void *)FUN_710392e290(0x10,ppppppppplVar35,(long ****)ppppppppplVar23,
                                               ppppbVar25,pppplVar26,param_6,param_7,param_8),
           local_138 != (void *)0x0)) goto LAB_710181efc4;
      }
      local_138 = (void *)0x0;
    }
LAB_710181efc4:
    ppppppppplVar35 = (long *********)(*(long *)(lVar12 + 0x10) - (long)*(void **)(lVar12 + 8));
    local_130 = local_138;
    if (0 < (long)ppppppppplVar35) {
      ppppppppplVar23 = ppppppppplVar35;
      memcpy(local_138,*(void **)(lVar12 + 8),(size_t)ppppppppplVar35);
      local_130 = (void *)((long)local_138 + (long)ppppppppplVar35);
    }
  }
  puVar11 = *(undefined8 **)(param_2 + 0xa8);
  if (((DAT_7105324838 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_7105324838), iVar9 != 0)) {
    if (((DAT_7105324748 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_7105324748), iVar9 != 0)) {
      if (((DAT_7105324750 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_7105324750), iVar9 != 0))
      {
        DAT_7105324758 = 0;
        __cxa_guard_release(&DAT_7105324750);
      }
      DAT_7105324760 = &DAT_7105324758;
      __cxa_guard_release(&DAT_7105324748);
    }
    DAT_7105324840 = &DAT_7105324760;
    __cxa_guard_release(&DAT_7105324838);
  }
  for (puVar13 = (undefined8 *)(**(code **)*puVar11)(puVar11);
      (undefined8 **)puVar13 != &DAT_7105324840; puVar13 = (undefined8 *)*puVar13) {
  }
  puVar13 = *(undefined8 **)(param_2 + 0xa8);
  lVar12 = puVar11[1];
  if (((DAT_7105324838 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_7105324838), iVar9 != 0)) {
    if (((DAT_7105324748 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_7105324748), iVar9 != 0)) {
      if (((DAT_7105324750 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_7105324750), iVar9 != 0))
      {
        DAT_7105324758 = 0;
        __cxa_guard_release(&DAT_7105324750);
      }
      DAT_7105324760 = &DAT_7105324758;
      __cxa_guard_release(&DAT_7105324748);
    }
    DAT_7105324840 = &DAT_7105324760;
    __cxa_guard_release(&DAT_7105324838);
  }
  for (puVar11 = (undefined8 *)(**(code **)*puVar13)(puVar13);
      (undefined8 **)puVar11 != &DAT_7105324840; puVar11 = (undefined8 *)*puVar11) {
  }
  puVar11 = *(undefined8 **)(param_2 + 0xa8);
  cVar6 = *(char *)(puVar13[1] + 0xfa24);
  if (((DAT_7105324838 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_7105324838), iVar9 != 0)) {
    if (((DAT_7105324748 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_7105324748), iVar9 != 0)) {
      if (((DAT_7105324750 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_7105324750), iVar9 != 0))
      {
        DAT_7105324758 = 0;
        __cxa_guard_release(&DAT_7105324750);
      }
      DAT_7105324760 = &DAT_7105324758;
      __cxa_guard_release(&DAT_7105324748);
    }
    DAT_7105324840 = &DAT_7105324760;
    __cxa_guard_release(&DAT_7105324838);
  }
  for (puVar13 = (undefined8 *)(**(code **)*puVar11)(puVar11);
      (undefined8 **)puVar13 != &DAT_7105324840; puVar13 = (undefined8 *)*puVar13) {
  }
  puVar13 = *(undefined8 **)(param_2 + 0xa8);
  pppplVar27 = (long ****)(puVar11[1] + 0xfa28);
  if (((DAT_7105324838 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_7105324838), iVar9 != 0)) {
    if (((DAT_7105324748 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_7105324748), iVar9 != 0)) {
      if (((DAT_7105324750 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_7105324750), iVar9 != 0))
      {
        DAT_7105324758 = 0;
        __cxa_guard_release(&DAT_7105324750);
      }
      DAT_7105324760 = &DAT_7105324758;
      __cxa_guard_release(&DAT_7105324748);
    }
    DAT_7105324840 = &DAT_7105324760;
    __cxa_guard_release(&DAT_7105324838);
  }
  for (puVar11 = (undefined8 *)(**(code **)*puVar13)(puVar13);
      (undefined8 **)puVar11 != &DAT_7105324840; puVar11 = (undefined8 *)*puVar11) {
  }
  puVar11 = *(undefined8 **)(param_2 + 0xa8);
  uVar4 = *(undefined4 *)(puVar13[1] + 0xfa20);
  if (((DAT_7105324838 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_7105324838), iVar9 != 0)) {
    if (((DAT_7105324748 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_7105324748), iVar9 != 0)) {
      if (((DAT_7105324750 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_7105324750), iVar9 != 0))
      {
        DAT_7105324758 = 0;
        __cxa_guard_release(&DAT_7105324750);
      }
      DAT_7105324760 = &DAT_7105324758;
      __cxa_guard_release(&DAT_7105324748);
    }
    DAT_7105324840 = &DAT_7105324760;
    __cxa_guard_release(&DAT_7105324838);
  }
  for (puVar13 = (undefined8 *)(**(code **)*puVar11)(puVar11);
      (undefined8 **)puVar13 != &DAT_7105324840; puVar13 = (undefined8 *)*puVar13) {
  }
  *(undefined1 *)(lVar10 + 0x144) = *(undefined1 *)(puVar11[1] + 0xfa2c);
  puVar11 = *(undefined8 **)(param_2 + 0xa8);
  if (((DAT_7105324838 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_7105324838), iVar9 != 0)) {
    if (((DAT_7105324748 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_7105324748), iVar9 != 0)) {
      if (((DAT_7105324750 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_7105324750), iVar9 != 0))
      {
        DAT_7105324758 = 0;
        __cxa_guard_release(&DAT_7105324750);
      }
      DAT_7105324760 = &DAT_7105324758;
      __cxa_guard_release(&DAT_7105324748);
    }
    DAT_7105324840 = &DAT_7105324760;
    __cxa_guard_release(&DAT_7105324838);
  }
  for (puVar13 = (undefined8 *)(**(code **)*puVar11)(puVar11);
      (undefined8 **)puVar13 != &DAT_7105324840; puVar13 = (undefined8 *)*puVar13) {
  }
  *(undefined4 *)(lVar10 + 0x148) = *(undefined4 *)(puVar11[1] + 0xfa30);
  if (*(char *)(lVar10 + 0x138) == '\0') {
    puVar11 = (undefined8 *)
              FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar23,ppppbVar25,pppplVar26,param_6,
                             param_7,param_8);
    if (puVar11 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_108 = (undefined **)((ulong)local_108 & 0xffffffff00000000);
        local_d0 = (undefined **)&DAT_00000088;
        ppppppppplVar23 = (long *********)&local_d0;
        uVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_108);
        if (((uVar34 & 1) != 0) &&
           (puVar11 = (undefined8 *)
                      FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar23,ppppbVar25,pppplVar26,
                                     param_6,param_7,param_8), puVar11 != (undefined8 *)0x0))
        goto LAB_710181f464;
      }
      puVar11 = (undefined8 *)0x0;
    }
LAB_710181f464:
    local_120 = (long ***)0x0;
    local_118 = (long ***)0x0;
    local_110 = (long ***)0x0;
    ppppppppplVar35 = (long *********)((long)local_130 - (long)local_138);
    if (ppppppppplVar35 != (long *********)0x0) {
      if ((ulong)((long)ppppppppplVar35 >> 3) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      ppplVar18 = (long ***)
                  FUN_710392e290(0x10,ppppppppplVar35,(long ****)ppppppppplVar23,ppppbVar25,
                                 pppplVar26,param_6,param_7,param_8);
      if (ppplVar18 == (long ***)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_108 = (undefined **)((ulong)local_108 & 0xffffffff00000000);
          ppppppppplVar23 = (long *********)&local_d0;
          local_d0 = (undefined **)ppppppppplVar35;
          uVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_108);
          if (((uVar34 & 1) != 0) &&
             (ppplVar18 = (long ***)
                          FUN_710392e290(0x10,ppppppppplVar35,(long ****)ppppppppplVar23,ppppbVar25,
                                         pppplVar26,param_6,param_7,param_8),
             ppplVar18 != (long ***)0x0)) goto LAB_710181f4e0;
        }
        ppplVar18 = (long ***)0x0;
      }
LAB_710181f4e0:
      local_110 = ppplVar18 + ((long)ppppppppplVar35 >> 3);
      local_120 = ppplVar18;
      local_118 = ppplVar18;
      if (0 < (long)ppppppppplVar35) {
        ppppppppplVar23 = ppppppppplVar35;
        memcpy(ppplVar18,local_138,(size_t)ppppppppplVar35);
        local_118 = (long ***)((long)ppplVar18 + (long)ppppppppplVar35);
      }
    }
    *puVar11 = &PTR_FUN_71050a94a8;
    puVar11[1] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11[9] = 0;
    puVar11[10] = 0;
    *(undefined1 *)(puVar11 + 0xb) = 0;
    puVar11[0xf] = plVar36;
    puVar11[0xc] = 0;
    puVar11[0xd] = 0x1ffffffff;
    *(undefined1 *)(puVar11 + 0xe) = 1;
    lVar12 = FUN_710392e290(0x10,0x3d0,(long ****)ppppppppplVar23,ppppbVar25,pppplVar26,param_6,
                            param_7,param_8);
    if (lVar12 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_108 = (undefined **)((ulong)local_108 & 0xffffffff00000000);
        local_d0 = (undefined **)0x3d0;
        pppplVar24 = (long ****)&local_d0;
        uVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_108);
        if (((uVar34 & 1) != 0) &&
           (lVar12 = FUN_710392e290(0x10,0x3d0,pppplVar24,ppppbVar25,pppplVar26,param_6,param_7,
                                    param_8), lVar12 != 0)) goto LAB_710181f598;
      }
      lVar12 = 0;
    }
LAB_710181f598:
    ppppbVar25 = (byte ****)(ulong)(cVar6 != '\0');
    pppplVar26 = (long ****)0x0;
    FUN_7101a999a0(lVar12,plVar36,(long ****)0x0,ppppbVar25,pppplVar27,param_6,param_7,param_8);
    ppplVar18 = local_120;
    puVar11[0x10] = lVar12;
    ppppppppplVar23 = (long *********)((long)local_118 - (long)local_120);
    local_100 = (undefined **)0x0;
    local_f8 = (undefined **)0x0;
    local_108 = (undefined **)0x0;
    if (ppppppppplVar23 != (long *********)0x0) {
      if ((ulong)((long)ppppppppplVar23 >> 3) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      ppuVar19 = (undefined **)
                 FUN_710392e290(0x10,ppppppppplVar23,pppplVar26,ppppbVar25,pppplVar27,param_6,
                                param_7,param_8);
      if (ppuVar19 == (undefined **)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
          pppplVar26 = (long ****)&local_d0;
          local_d0 = (undefined **)ppppppppplVar23;
          uVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
          if (((uVar34 & 1) != 0) &&
             (ppuVar19 = (undefined **)
                         FUN_710392e290(0x10,ppppppppplVar23,pppplVar26,ppppbVar25,pppplVar27,
                                        param_6,param_7,param_8), ppuVar19 != (undefined **)0x0))
          goto LAB_710181f630;
        }
        ppuVar19 = (undefined **)0x0;
      }
LAB_710181f630:
      local_f8 = ppuVar19 + ((long)ppppppppplVar23 >> 3);
      local_108 = ppuVar19;
      local_100 = ppuVar19;
      if (0 < (long)ppppppppplVar23) {
        memcpy(ppuVar19,ppplVar18,(size_t)ppppppppplVar23);
        local_100 = (undefined **)((long)ppuVar19 + (long)ppppppppplVar23);
      }
    }
    puVar13 = (undefined8 *)(lVar12 + 0x110);
    FUN_71032cbf30(puVar13,**(long **)(lVar12 + 0x108),(ulong *)&DAT_71045444f0,(byte ****)0x1,
                   pppplVar27,param_6,param_7,param_8);
    pppplVar26 = (long ****)&DAT_71045444f8;
    ppppbVar25 = (byte ****)0x1;
    FUN_71032cbf30((undefined8 *)(lVar12 + 0x118),**(long **)(lVar12 + 0x108),
                   (ulong *)&DAT_71045444f8,(byte ****)0x1,pppplVar27,param_6,param_7,param_8);
    FUN_7103776640(&local_80,**(long **)(lVar12 + 0x118) + 8,(byte ****)"set_moive_player",
                   pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,param_8);
    local_88 = FUN_7101a9ba20(lVar12,extraout_x1_07,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7
                              ,param_8);
    local_84 = 1;
    if (local_108 != local_100) {
      do {
        ppuVar19 = local_108;
        puVar21 = *(undefined8 **)(lVar12 + 0x140);
        if (puVar21 == *(undefined8 **)(lVar12 + 0x148)) {
          __src = *(void **)(lVar12 + 0x138);
          __n = (long)puVar21 - (long)__src;
          uVar34 = ((long)__n >> 3) + 1;
          if (uVar34 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar14 = (long)*(undefined8 **)(lVar12 + 0x148) - (long)__src;
          if ((ulong)(lVar14 >> 3) < 0xfffffffffffffff) {
            uVar16 = lVar14 >> 2;
            if (uVar34 <= uVar16) {
              uVar34 = uVar16;
            }
            if (uVar34 != 0) {
              if (uVar34 >> 0x3d == 0) goto LAB_710181f82c;
              goto LAB_71018208a4;
            }
LAB_710181f88c:
            __dest = (void *)0x0;
          }
          else {
            uVar34 = 0x1fffffffffffffff;
LAB_710181f82c:
            ppppppppplVar23 = (long *********)(uVar34 * 8);
            if (ppppppppplVar23 == (long *********)0x0) {
              ppppppppplVar23 = (long *********)0x1;
            }
            __dest = (void *)FUN_710392e290(0x10,ppppppppplVar23,pppplVar26,ppppbVar25,pppplVar27,
                                            param_6,param_7,param_8);
            if (__dest == (void *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_e0 = (undefined **)((ulong)local_e0 & 0xffffffff00000000);
                pppplVar26 = (long ****)&local_d0;
                local_d0 = (undefined **)ppppppppplVar23;
                uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
                if (((uVar16 & 1) != 0) &&
                   (__dest = (void *)FUN_710392e290(0x10,ppppppppplVar23,pppplVar26,ppppbVar25,
                                                    pppplVar27,param_6,param_7,param_8),
                   __dest != (void *)0x0)) goto LAB_710181f890;
              }
              goto LAB_710181f88c;
            }
          }
LAB_710181f890:
          puVar21 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
          *puVar21 = *ppuVar19;
          if (0 < (long)__n) {
            memcpy(__dest,__src,__n);
          }
          *(void **)(lVar12 + 0x138) = __dest;
          *(undefined8 **)(lVar12 + 0x140) = puVar21 + 1;
          *(void **)(lVar12 + 0x148) = (void *)((long)__dest + uVar34 * 8);
          if (__src != (void *)0x0) {
            FUN_710392eb40((ulong)__src);
          }
        }
        else {
          *puVar21 = *local_108;
          *(long *)(lVar12 + 0x140) = *(long *)(lVar12 + 0x140) + 8;
        }
        ppuVar19 = local_108;
        pppplVar26 = (long ****)((long)local_100 - (long)(local_108 + 1));
        lVar14 = (long)pppplVar26 >> 3;
        if (pppplVar26 != (long ****)0x0) {
          memmove(local_108,local_108 + 1,(size_t)pppplVar26);
        }
        local_100 = ppuVar19 + lVar14;
      } while (local_108 != local_100);
    }
    pppplVar26 = (long ****)**(ulong **)(lVar12 + 0x138);
    FUN_710328de50((uint *)&local_d0,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x378),
                   (ulong)pppplVar26);
    lVar14 = *(long *)(lVar12 + 0x130);
    FUN_7103776390(&local_e0,&local_80,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,param_8);
    if (local_d0._4_4_ == 0) {
      uVar34 = 0;
    }
    else {
      uVar8 = 0xffffffff;
      puVar31 = local_c8;
      do {
        puVar30 = (ulong *)((long)puVar31 + 1);
        bVar5 = (byte)*puVar31;
        uVar32 = bVar5 + 0x20;
        if (0x19 < bVar5 - 0x41) {
          uVar32 = (uint)bVar5;
        }
        uVar8 = (&DAT_7104754084)[(uVar32 ^ uVar8) & 0xff] ^ uVar8 >> 8;
        puVar31 = puVar30;
      } while (puVar30 < (ulong *)((long)local_c8 + (ulong)local_d0._4_4_));
      uVar34 = (ulong)~uVar8;
    }
    pppplVar26 = (long ****)(uVar34 | ((long)(int)local_d0._4_4_ & 0xffU) << 0x20);
    ppppbVar25 = (byte ****)&local_88;
    FUN_71033994b0(*(long *)(lVar14 + 8),&local_e0,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,
                   param_8);
    uVar34 = local_d8;
    local_e0 = &PTR_FUN_710523d988;
    local_d8 = 0;
    if (uVar34 != 0) {
      uVar16 = *(ulong *)(uVar34 + 0x18);
      *(undefined ***)(uVar34 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar34 + 0x18) = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      FUN_710392eb40(uVar34);
    }
    FUN_7103776640(&local_f0,**(long **)(lVar12 + 0x110) + 8,(byte ****)"set_parts_lct_playbtn",
                   pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,param_8);
    uVar34 = local_e8;
    if (&local_f0 != (long ****)(lVar12 + 0x158)) {
      local_e8 = 0;
      uVar16 = *(ulong *)(lVar12 + 0x160);
      *(ulong *)(lVar12 + 0x160) = uVar34;
      if (uVar16 != 0) {
        uVar34 = *(ulong *)(uVar16 + 0x18);
        *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar16 + 0x18) = 0;
        if (uVar34 != 0) {
          FUN_710392eb40(uVar34);
        }
        FUN_710392eb40(uVar16);
      }
    }
    uVar34 = local_e8;
    local_f0 = (long ***)&PTR_FUN_710523d988;
    local_e8 = 0;
    if (uVar34 != 0) {
      uVar16 = *(ulong *)(uVar34 + 0x18);
      *(undefined ***)(uVar34 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar34 + 0x18) = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      FUN_710392eb40(uVar34);
    }
    if (*(char *)(lVar12 + 0x128) == '\0') {
      FUN_7103776910(&local_f0,*(long *)*puVar13 + 8,(long ****)"set_txt_05",pppplVar26,ppppbVar25,
                     pppplVar27,param_6,param_7,param_8);
      FUN_710377a120((long)&local_f0,"mnu_movie_change",pppplVar26,ppppbVar25,pppplVar27,param_6,
                     param_7,param_8);
      uVar34 = local_e8;
      local_f0 = (long ***)&PTR_FUN_710523d9a8;
      local_e8 = 0;
      uVar22 = extraout_x1_08;
      if (uVar34 != 0) {
        FUN_710392eb40(uVar34);
        uVar22 = extraout_x1_09;
      }
      puVar21 = *(undefined8 **)(*DAT_7105314510 + 0x278);
      uVar8 = FUN_7101a9bcf0(lVar12,uVar22,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,param_8)
      ;
      if (uVar8 < 0x20) {
        **(uint **)*puVar21 = **(uint **)*puVar21 | 1 << (ulong)(uVar8 & 0x1f);
      }
      plVar29 = (long *)(*DAT_7105314508 + 0x5b4dd8);
      plVar2 = (long *)(*DAT_7105314508 + 0x5b4de8);
      if (*plVar2 == 0) {
        plVar20 = (long *)FUN_710392e290(0x10,0x18,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,
                                         param_8);
        if (plVar20 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_6c[0] = 0;
            local_f0 = (long ***)&SUB_00000018;
            pppplVar26 = &local_f0;
            uVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
            if (((uVar34 & 1) != 0) &&
               (plVar20 = (long *)FUN_710392e290(0x10,0x18,pppplVar26,ppppbVar25,pppplVar27,param_6,
                                                 param_7,param_8), plVar20 != (long *)0x0))
            goto LAB_710181fe50;
          }
          plVar20 = (long *)0x0;
        }
LAB_710181fe50:
        *(undefined1 *)(plVar20 + 2) = 0;
        plVar20[1] = (long)plVar29;
        lVar14 = *plVar29;
        *plVar20 = lVar14;
        *(long **)(lVar14 + 8) = plVar20;
        *plVar29 = (long)plVar20;
        *plVar2 = *plVar2 + 1;
      }
      else {
        *(byte *)(*plVar29 + 0x10) = *(byte *)(*plVar29 + 0x10) & 1;
      }
    }
    else {
      FUN_7103776910(&local_f0,*(long *)*puVar13 + 8,(long ****)"set_txt_05",pppplVar26,ppppbVar25,
                     pppplVar27,param_6,param_7,param_8);
      FUN_710377a120((long)&local_f0,"mnu_replay_movie_play_previous_next",pppplVar26,ppppbVar25,
                     pppplVar27,param_6,param_7,param_8);
      uVar34 = local_e8;
      local_f0 = (long ***)&PTR_FUN_710523d9a8;
      local_e8 = 0;
      if (uVar34 != 0) {
        FUN_710392eb40(uVar34);
      }
    }
    FUN_7103776910(&local_f0,*(long *)*puVar13 + 8,(long ****)"set_txt_movie_title",pppplVar26,
                   ppppbVar25,pppplVar27,param_6,param_7,param_8);
    FUN_710377a120((long)&local_f0,"",pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,param_8);
    uVar34 = local_e8;
    local_f0 = (long ***)&PTR_FUN_710523d9a8;
    local_e8 = 0;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
    lVar14 = **(long **)*puVar13;
    *(undefined4 *)(*(long *)(lVar14 + 0x600) + 0x10) = 0x20;
    *(undefined4 *)(*(long *)(lVar14 + 0x600) + 0x14) = 0x40;
    *(undefined4 *)(*(long *)(lVar14 + 0x600) + 0x18) = 0x200;
    *(undefined4 *)(*(long *)(lVar14 + 0x600) + 0x1c) = 0x100;
    *(undefined4 *)(*(long *)(lVar14 + 0x600) + 0x20) = 0x800;
    *(undefined4 *)(*(long *)(lVar14 + 0x600) + 0x24) = 0x400;
    FUN_7103775dc0(*(long **)*puVar13,0,(long ****)0x1002,ppppbVar25,pppplVar27,param_6,param_7,
                   param_8);
    pppplVar26 = (long ****)&DAT_00001000;
    FUN_7103775dc0((long *)**(undefined8 **)(lVar12 + 0x118),0,(long ****)&DAT_00001000,ppppbVar25,
                   pppplVar27,param_6,param_7,param_8);
    uVar34 = local_78;
    local_80 = &PTR_FUN_710523d988;
    local_78 = 0;
    uVar22 = extraout_x1_12;
    if (uVar34 != 0) {
      uVar16 = *(ulong *)(uVar34 + 0x18);
      *(undefined ***)(uVar34 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar34 + 0x18) = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      FUN_710392eb40(uVar34);
      uVar22 = extraout_x1_13;
    }
    if (local_108 != (undefined **)0x0) {
      local_100 = local_108;
      FUN_710392eb40((ulong)local_108);
      uVar22 = extraout_x1_14;
    }
    if (local_120 != (long ***)0x0) {
      local_118 = local_120;
      FUN_710392eb40((ulong)local_120);
      uVar22 = extraout_x1_15;
    }
    puVar11[2] = &DAT_7105333600;
    uVar4 = DAT_7105333664;
    *(undefined4 *)(puVar11 + 0xd) = DAT_7105333660;
    *(undefined4 *)((long)puVar11 + 0x6c) = uVar4;
    do {
      uVar8 = DAT_7105333650;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
      if (bVar7) {
        DAT_7105333650 = 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0' || (uVar8 & 1) != 0);
  }
  else {
    puVar11 = (undefined8 *)
              FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar23,ppppbVar25,pppplVar26,param_6,
                             param_7,param_8);
    if (puVar11 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_108 = (undefined **)((ulong)local_108 & 0xffffffff00000000);
        local_d0 = (undefined **)&DAT_00000088;
        ppppppppplVar23 = (long *********)&local_d0;
        uVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_108);
        if (((uVar34 & 1) != 0) &&
           (puVar11 = (undefined8 *)
                      FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar23,ppppbVar25,pppplVar26,
                                     param_6,param_7,param_8), puVar11 != (undefined8 *)0x0))
        goto LAB_710181f1c4;
      }
      puVar11 = (undefined8 *)0x0;
    }
LAB_710181f1c4:
    *puVar11 = &PTR_FUN_71050a94a8;
    puVar11[1] = 0;
    puVar11[0xc] = 0;
    puVar11[0xd] = 0x1ffffffff;
    puVar11[2] = 0;
    puVar11[3] = 0;
    *(undefined1 *)(puVar11 + 0xb) = 0;
    puVar11[0xf] = plVar36;
    *(undefined1 *)(puVar11 + 0xe) = 1;
    puVar11[9] = 0;
    puVar11[10] = 0;
    lVar14 = FUN_710392e290(0x10,0x3d0,(long ****)ppppppppplVar23,ppppbVar25,pppplVar26,param_6,
                            param_7,param_8);
    if (lVar14 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_108 = (undefined **)((ulong)local_108 & 0xffffffff00000000);
        local_d0 = (undefined **)0x3d0;
        pppplVar24 = (long ****)&local_d0;
        uVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_108);
        if (((uVar34 & 1) != 0) &&
           (lVar14 = FUN_710392e290(0x10,0x3d0,pppplVar24,ppppbVar25,pppplVar26,param_6,param_7,
                                    param_8), lVar14 != 0)) goto LAB_710181f24c;
      }
      lVar14 = 0;
    }
LAB_710181f24c:
    FUN_7101a999a0(lVar14,plVar36,(long ****)0x1,(byte ****)0x1,pppplVar27,param_6,param_7,param_8);
    puVar11[0x10] = lVar14;
    *(long *)(lVar14 + 0x150) = lVar12 + 0x20;
    *(undefined4 *)(lVar14 + 0x3c8) = uVar4;
    puVar13 = (undefined8 *)(lVar14 + 0x110);
    FUN_71032cbf30(puVar13,**(long **)(lVar14 + 0x108),(ulong *)&DAT_71045444f0,(byte ****)0x1,
                   pppplVar27,param_6,param_7,param_8);
    pppplVar26 = (long ****)&DAT_71045444f8;
    ppppbVar25 = (byte ****)0x1;
    FUN_71032cbf30((undefined8 *)(lVar14 + 0x118),**(long **)(lVar14 + 0x108),
                   (ulong *)&DAT_71045444f8,(byte ****)0x1,pppplVar27,param_6,param_7,param_8);
    FUN_7103776640(&local_d0,**(long **)(lVar14 + 0x118) + 8,(byte ****)"set_moive_player",
                   pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,param_8);
    lVar33 = *(long *)(lVar14 + 0x130);
    FUN_7103776390(&local_108,&local_d0,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,param_8);
    if (1999 < **(uint **)(lVar14 + 0x120)) goto LAB_71018208a4;
    pppplVar26 = (long ****)(lVar12 + (long)(int)**(uint **)(lVar14 + 0x120) * 0x20 + 0x20);
    FUN_7103399660(*(long *)(lVar33 + 8),&local_108,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7
                   ,param_8);
    ppuVar19 = local_100;
    local_108 = &PTR_FUN_710523d988;
    local_100 = (undefined **)0x0;
    if (ppuVar19 != (undefined **)0x0) {
      puVar15 = ppuVar19[3];
      ppuVar19[2] = (undefined *)&PTR_FUN_710523d9a8;
      ppuVar19[3] = (undefined *)0x0;
      if (puVar15 != (undefined *)0x0) {
        FUN_710392eb40((ulong)puVar15);
      }
      FUN_710392eb40((ulong)ppuVar19);
    }
    FUN_7103776640(&local_120,**(long **)(lVar14 + 0x110) + 8,(byte ****)"set_parts_lct_playbtn",
                   pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,param_8);
    ppplVar18 = local_118;
    if (&local_120 != (long ****)(lVar14 + 0x158)) {
      local_118 = (long ***)0x0;
      uVar34 = *(ulong *)(lVar14 + 0x160);
      *(long ****)(lVar14 + 0x160) = ppplVar18;
      if (uVar34 != 0) {
        uVar16 = *(ulong *)(uVar34 + 0x18);
        *(undefined ***)(uVar34 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar34 + 0x18) = 0;
        if (uVar16 != 0) {
          FUN_710392eb40(uVar16);
        }
        FUN_710392eb40(uVar34);
      }
    }
    ppplVar18 = local_118;
    local_120 = (long ***)&PTR_FUN_710523d988;
    local_118 = (long ***)0x0;
    if (ppplVar18 != (long ***)0x0) {
      pplVar17 = ppplVar18[3];
      ppplVar18[2] = (long **)&PTR_FUN_710523d9a8;
      ppplVar18[3] = (long **)0x0;
      if (pplVar17 != (long **)0x0) {
        FUN_710392eb40((ulong)pplVar17);
      }
      FUN_710392eb40((ulong)ppplVar18);
    }
    if (*(char *)(lVar14 + 0x128) == '\0') {
      FUN_7103776910(&local_120,*(long *)*puVar13 + 8,(long ****)"set_txt_05",pppplVar26,ppppbVar25,
                     pppplVar27,param_6,param_7,param_8);
      FUN_710377a120((long)&local_120,"mnu_movie_change",pppplVar26,ppppbVar25,pppplVar27,param_6,
                     param_7,param_8);
      ppplVar18 = local_118;
      local_120 = (long ***)&PTR_FUN_710523d9a8;
      local_118 = (long ***)0x0;
      uVar22 = extraout_x1_05;
      if (ppplVar18 != (long ***)0x0) {
        FUN_710392eb40((ulong)ppplVar18);
        uVar22 = extraout_x1_06;
      }
      puVar21 = *(undefined8 **)(*DAT_7105314510 + 0x278);
      uVar8 = FUN_7101a9bcf0(lVar14,uVar22,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,param_8)
      ;
      if (uVar8 < 0x20) {
        **(uint **)*puVar21 = **(uint **)*puVar21 | 1 << (ulong)(uVar8 & 0x1f);
      }
      plVar29 = (long *)(*DAT_7105314508 + 0x5b4dd8);
      plVar2 = (long *)(*DAT_7105314508 + 0x5b4de8);
      if (*plVar2 == 0) {
        plVar20 = (long *)FUN_710392e290(0x10,0x18,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,
                                         param_8);
        if (plVar20 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
            local_120 = (long ***)&SUB_00000018;
            pppplVar26 = &local_120;
            uVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
            if (((uVar34 & 1) != 0) &&
               (plVar20 = (long *)FUN_710392e290(0x10,0x18,pppplVar26,ppppbVar25,pppplVar27,param_6,
                                                 param_7,param_8), plVar20 != (long *)0x0))
            goto LAB_710181fbe4;
          }
          plVar20 = (long *)0x0;
        }
LAB_710181fbe4:
        *(undefined1 *)(plVar20 + 2) = 0;
        plVar20[1] = (long)plVar29;
        lVar33 = *plVar29;
        *plVar20 = lVar33;
        *(long **)(lVar33 + 8) = plVar20;
        *plVar29 = (long)plVar20;
        *plVar2 = *plVar2 + 1;
      }
      else {
        *(byte *)(*plVar29 + 0x10) = *(byte *)(*plVar29 + 0x10) & 1;
      }
    }
    else {
      FUN_7103776910(&local_120,*(long *)*puVar13 + 8,(long ****)"set_txt_05",pppplVar26,ppppbVar25,
                     pppplVar27,param_6,param_7,param_8);
      FUN_710377a120((long)&local_120,"mnu_replay_movie_play_previous_next",pppplVar26,ppppbVar25,
                     pppplVar27,param_6,param_7,param_8);
      ppplVar18 = local_118;
      local_120 = (long ***)&PTR_FUN_710523d9a8;
      local_118 = (long ***)0x0;
      if (ppplVar18 != (long ***)0x0) {
        FUN_710392eb40((ulong)ppplVar18);
      }
    }
    if (1999 < **(uint **)(lVar14 + 0x120)) goto LAB_71018208a4;
    lVar12 = lVar12 + (long)(int)**(uint **)(lVar14 + 0x120) * 0x20;
    uVar22 = *(undefined8 *)(lVar12 + 0x20);
    uVar28 = *(undefined8 *)(lVar12 + 0x28);
    uVar3 = *(undefined8 *)(lVar12 + 0x38);
    *(undefined8 *)(lVar14 + 400) = *(undefined8 *)(lVar12 + 0x30);
    *(undefined8 *)(lVar14 + 0x198) = uVar3;
    *(undefined8 *)(lVar14 + 0x180) = uVar22;
    *(undefined8 *)(lVar14 + 0x188) = uVar28;
    *(undefined1 *)(lVar14 + 0x3c0) = 0;
    FUN_7101adeaa0(&local_120,(undefined8 *)(lVar14 + 0x180),pppplVar26,ppppbVar25,pppplVar27,
                   param_6,param_7,param_8);
    ppplVar18 = local_118;
    local_120 = (long ***)&PTR_FUN_710523da28;
    local_118 = (long ***)0x0;
    if (ppplVar18 != (long ***)0x0) {
      pplVar17 = ppplVar18[1];
      *ppplVar18 = (long **)0x0;
      ppplVar18[1] = (long **)0x0;
      if (pplVar17 != (long **)0x0) {
        pplVar1 = pplVar17 + 1;
        do {
          plVar29 = *pplVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
          if (bVar7) {
            *pplVar1 = (long *)((long)plVar29 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (plVar29 == (long *)0x0) {
          (*(code *)(*pplVar17)[2])(pplVar17);
          std::__shared_weak_count::__release_weak();
        }
        pplVar17 = ppplVar18[1];
        if (pplVar17 != (long **)0x0) {
          pplVar1 = pplVar17 + 1;
          do {
            plVar29 = *pplVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
            if (bVar7) {
              *pplVar1 = (long *)((long)plVar29 + -1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (plVar29 == (long *)0x0) {
            (*(code *)(*pplVar17)[2])(pplVar17);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
      FUN_710392eb40((ulong)ppplVar18);
    }
    FUN_7103776910(&local_80,*(long *)*puVar13 + 8,(long ****)"set_txt_movie_title",pppplVar26,
                   ppppbVar25,pppplVar27,param_6,param_7,param_8);
    uVar34 = local_78;
    if (*(long **)(local_78 + 0x10) != (long *)0x0) {
      ppppbVar25 = (byte ****)0x1;
      FUN_71037a2270(*(long **)(local_78 + 0x10),(ushort *)(lVar14 + 0x1ac),0xffffffff,1);
    }
    local_80 = &PTR_FUN_710523d9a8;
    local_78 = 0;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
    lVar12 = **(long **)*puVar13;
    *(undefined4 *)(*(long *)(lVar12 + 0x600) + 0x10) = 0x20;
    *(undefined4 *)(*(long *)(lVar12 + 0x600) + 0x14) = 0x40;
    *(undefined4 *)(*(long *)(lVar12 + 0x600) + 0x18) = 0x200;
    *(undefined4 *)(*(long *)(lVar12 + 0x600) + 0x1c) = 0x100;
    *(undefined4 *)(*(long *)(lVar12 + 0x600) + 0x20) = 0x800;
    *(undefined4 *)(*(long *)(lVar12 + 0x600) + 0x24) = 0x400;
    FUN_7103775dc0(*(long **)*puVar13,0,(long ****)0x1002,ppppbVar25,pppplVar27,param_6,param_7,
                   param_8);
    pppplVar26 = (long ****)&DAT_00001000;
    FUN_7103775dc0((long *)**(undefined8 **)(lVar14 + 0x118),0,(long ****)&DAT_00001000,ppppbVar25,
                   pppplVar27,param_6,param_7,param_8);
    uVar34 = local_c8[0];
    local_d0 = &PTR_FUN_710523d988;
    local_c8[0] = 0;
    uVar22 = extraout_x1_10;
    if (uVar34 != 0) {
      uVar16 = *(ulong *)(uVar34 + 0x18);
      *(undefined ***)(uVar34 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar34 + 0x18) = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      FUN_710392eb40(uVar34);
      uVar22 = extraout_x1_11;
    }
    puVar11[2] = &DAT_7105333600;
    uVar4 = DAT_7105333664;
    *(undefined4 *)(puVar11 + 0xd) = DAT_7105333660;
    *(undefined4 *)((long)puVar11 + 0x6c) = uVar4;
    do {
      uVar8 = DAT_7105333650;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
      if (bVar7) {
        DAT_7105333650 = 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0' || (uVar8 & 1) != 0);
  }
  puVar11[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar11;
  FUN_71032caea0((long)puVar11,uVar22,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,param_8);
  lVar12 = *(long *)(lVar10 + 0x100);
  *(undefined8 **)(lVar10 + 0x100) = puVar11;
  if (lVar12 != 0) {
    FUN_71032cad20(lVar12);
  }
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x88,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_108 = (undefined **)((ulong)local_108 & 0xffffffff00000000);
      local_d0 = (undefined **)&DAT_00000088;
      pppplVar26 = (long ****)&local_d0;
      uVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_108);
      if (((uVar34 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,
                                   param_8), puVar11 != (undefined8 *)0x0)) goto LAB_7101820044;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101820044:
  FUN_7101bdf8d0(puVar11,plVar36,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,param_8);
  puVar11[2] = &DAT_7105333600;
  *(undefined4 *)(puVar11 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar11 + 0x6c) = DAT_7105333664;
  do {
    uVar8 = DAT_7105333650;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar7) {
      DAT_7105333650 = 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0' || (uVar8 & 1) != 0);
  puVar11[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar11;
  FUN_71032caea0((long)puVar11,extraout_x1_16,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,
                 param_8);
  lVar12 = *(long *)(lVar10 + 0x108);
  *(undefined8 **)(lVar10 + 0x108) = puVar11;
  if (lVar12 != 0) {
    FUN_71032cad20(lVar12);
  }
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x88,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_108 = (undefined **)((ulong)local_108 & 0xffffffff00000000);
      local_d0 = (undefined **)&DAT_00000088;
      pppplVar26 = (long ****)&local_d0;
      uVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_108);
      if (((uVar34 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,
                                   param_8), puVar11 != (undefined8 *)0x0)) goto LAB_7101820120;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101820120:
  FUN_7101bf3a10(puVar11,plVar36,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,param_8);
  puVar11[2] = &DAT_7105333600;
  *(undefined4 *)(puVar11 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar11 + 0x6c) = DAT_7105333664;
  do {
    uVar8 = DAT_7105333650;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar7) {
      DAT_7105333650 = 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0' || (uVar8 & 1) != 0);
  puVar11[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar11;
  FUN_71032caea0((long)puVar11,extraout_x1_17,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,
                 param_8);
  lVar12 = *(long *)(lVar10 + 0x110);
  *(undefined8 **)(lVar10 + 0x110) = puVar11;
  if (lVar12 != 0) {
    FUN_71032cad20(lVar12);
  }
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x88,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_108 = (undefined **)((ulong)local_108 & 0xffffffff00000000);
      local_d0 = (undefined **)&DAT_00000088;
      pppplVar26 = (long ****)&local_d0;
      uVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_108);
      if (((uVar34 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,
                                   param_8), puVar11 != (undefined8 *)0x0)) goto LAB_71018201e4;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_71018201e4:
  FUN_7101bf4570(puVar11,plVar36,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,param_8);
  puVar11[2] = &DAT_7105333600;
  *(undefined4 *)(puVar11 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar11 + 0x6c) = DAT_7105333664;
  do {
    uVar8 = DAT_7105333650;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar7) {
      DAT_7105333650 = 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0' || (uVar8 & 1) != 0);
  puVar11[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar11;
  FUN_71032caea0((long)puVar11,extraout_x1_18,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,
                 param_8);
  lVar12 = *(long *)(lVar10 + 0x118);
  *(undefined8 **)(lVar10 + 0x118) = puVar11;
  if (lVar12 != 0) {
    FUN_71032cad20(lVar12);
  }
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x88,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_108 = (undefined **)((ulong)local_108 & 0xffffffff00000000);
      local_d0 = (undefined **)&DAT_00000088;
      pppplVar26 = (long ****)&local_d0;
      uVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_108);
      if (((uVar34 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,
                                   param_8), puVar11 != (undefined8 *)0x0)) goto LAB_71018202a8;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_71018202a8:
  *puVar11 = &PTR_FUN_71050ac9b8;
  puVar11[1] = 0;
  puVar11[0xc] = 0;
  puVar11[0xd] = 0x1ffffffff;
  puVar11[2] = 0;
  puVar11[3] = 0;
  *(undefined1 *)(puVar11 + 0xb) = 0;
  puVar11[0xf] = plVar36;
  *(undefined1 *)(puVar11 + 0xe) = 1;
  puVar11[9] = 0;
  puVar11[10] = 0;
  lVar12 = FUN_710392e290(0x10,0x110,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,param_8);
  if (lVar12 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_108 = (undefined **)((ulong)local_108 & 0xffffffff00000000);
      local_d0 = (undefined **)&DAT_00000110;
      pppplVar26 = (long ****)&local_d0;
      uVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_108);
      if (((uVar34 & 1) != 0) &&
         (lVar12 = FUN_710392e290(0x10,0x110,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,
                                  param_8), lVar12 != 0)) goto LAB_7101820330;
    }
    lVar12 = 0;
  }
LAB_7101820330:
  *(undefined4 *)(lVar12 + 0xf0) = 0xffffffff;
  *(undefined8 *)(lVar12 + 0x10) = 0;
  *(undefined8 *)(lVar12 + 0x18) = 0;
  *(undefined1 *)(lVar12 + 0xf4) = 0;
  *(long *)lVar12 = lVar12;
  *(undefined8 *)(lVar12 + 8) = 0;
  *(undefined8 *)(lVar12 + 0xe0) = 0;
  *(undefined8 *)(lVar12 + 0xe8) = 0xffffffff;
  *(undefined8 *)(lVar12 + 0xd0) = 0;
  *(undefined8 *)(lVar12 + 0xd8) = 0;
  *(undefined8 *)(lVar12 + 0xc0) = 0;
  *(undefined8 *)(lVar12 + 200) = 0;
  *(undefined8 *)(lVar12 + 0xb0) = 0;
  *(undefined8 *)(lVar12 + 0xb8) = 0;
  *(undefined8 *)(lVar12 + 0xa0) = 0;
  *(undefined8 *)(lVar12 + 0xa8) = 0;
  *(undefined8 *)(lVar12 + 0x90) = 0;
  *(undefined8 *)(lVar12 + 0x98) = 0;
  *(undefined8 *)(lVar12 + 0x80) = 0;
  *(undefined8 *)(lVar12 + 0x88) = 0;
  *(undefined8 *)(lVar12 + 0x70) = 0;
  *(undefined8 *)(lVar12 + 0x78) = 0;
  *(undefined8 *)(lVar12 + 0x60) = 0;
  *(undefined8 *)(lVar12 + 0x68) = 0;
  *(undefined8 *)(lVar12 + 0x50) = 0;
  *(undefined8 *)(lVar12 + 0x58) = 0;
  *(undefined8 *)(lVar12 + 0x40) = 0;
  *(undefined8 *)(lVar12 + 0x48) = 0;
  *(undefined8 *)(lVar12 + 0x30) = 0;
  *(undefined8 *)(lVar12 + 0x38) = 0;
  *(undefined8 *)(lVar12 + 0x20) = 0;
  *(undefined8 *)(lVar12 + 0x28) = 0;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,8,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,param_8);
  uVar22 = extraout_x1_19;
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_108 = (undefined **)((ulong)local_108 & 0xffffffff00000000);
      local_d0 = (undefined **)&DAT_00000008;
      pppplVar26 = (long ****)&local_d0;
      auVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_108);
      uVar22 = auVar37._8_8_;
      if (((auVar37._0_8_ & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,8,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,param_8),
         uVar22 = extraout_x1_20, puVar13 != (undefined8 *)0x0)) goto LAB_71018203d0;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_71018203d0:
  FUN_7103773200(puVar13,uVar22,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,param_8);
  *(undefined8 **)(lVar12 + 0xf8) = puVar13;
  *(undefined4 *)(lVar12 + 0x104) = 0;
  *(undefined1 *)(lVar12 + 0x100) = 1;
  *(undefined1 *)(lVar12 + 0x108) = 0;
  if (DAT_71053263a8 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)
              FUN_710392e290(0x10,0x10,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,param_8);
    uVar22 = extraout_x1_21;
    if (puVar13 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_108 = (undefined **)((ulong)local_108 & 0xffffffff00000000);
        local_d0 = (undefined **)&DAT_00000010;
        pppplVar26 = (long ****)&local_d0;
        auVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_108);
        uVar22 = auVar37._8_8_;
        if (((auVar37._0_8_ & 1) != 0) &&
           (puVar13 = (undefined8 *)
                      FUN_710392e290(0x10,0x10,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,
                                     param_8), uVar22 = extraout_x1_22, puVar13 != (undefined8 *)0x0
           )) goto LAB_7101820454;
      }
      puVar13 = (undefined8 *)0x0;
    }
LAB_7101820454:
    FUN_7101e9f890(puVar13,uVar22,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,param_8);
    DAT_71053263a8 = puVar13;
  }
  if (DAT_71053263b0 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)
              FUN_710392e290(0x10,0x10,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,param_8);
    if (puVar13 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_108 = (undefined **)((ulong)local_108 & 0xffffffff00000000);
        local_d0 = (undefined **)&DAT_00000010;
        pppplVar26 = (long ****)&local_d0;
        uVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_108);
        if (((uVar34 & 1) != 0) &&
           (puVar13 = (undefined8 *)
                      FUN_710392e290(0x10,0x10,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,
                                     param_8), puVar13 != (undefined8 *)0x0)) goto LAB_71018204c8;
      }
      puVar13 = (undefined8 *)0x0;
    }
LAB_71018204c8:
    *puVar13 = &PTR_FUN_71050b2508;
    puVar21 = (undefined8 *)
              FUN_710392e290(0x10,0x48,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,param_8);
    if (puVar21 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_108 = (undefined **)((ulong)local_108 & 0xffffffff00000000);
        local_d0 = (undefined **)&DAT_00000048;
        pppplVar26 = (long ****)&local_d0;
        uVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_108);
        if (((uVar34 & 1) != 0) &&
           (puVar21 = (undefined8 *)
                      FUN_710392e290(0x10,0x48,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,
                                     param_8), puVar21 != (undefined8 *)0x0)) goto LAB_7101820528;
      }
      puVar21 = (undefined8 *)0x0;
    }
LAB_7101820528:
    puVar21[2] = 0;
    puVar21[3] = 0;
    *puVar21 = 0;
    puVar21[1] = 0;
    *(undefined4 *)(puVar21 + 4) = 0x3f800000;
    *(undefined4 *)(puVar21 + 8) = 0;
    puVar21[5] = 0;
    puVar21[6] = 0;
    puVar21[7] = 0;
    puVar13[1] = puVar21;
    DAT_71053263b0 = puVar13;
  }
  *(code **)(lVar12 + 0x48) = FUN_7101bf5380;
  *(undefined8 *)(lVar12 + 0x50) = 0;
  *(code **)(lVar12 + 0x68) = FUN_7101bf55c0;
  *(undefined8 *)(lVar12 + 0x70) = 0;
  *(code **)(lVar12 + 0x78) = FUN_7101bf5640;
  *(undefined8 *)(lVar12 + 0x80) = 0;
  *(code **)(lVar12 + 0x28) = FUN_7101bf5370;
  *(undefined8 *)(lVar12 + 0x30) = 0;
  *(code **)(lVar12 + 0x58) = FUN_7101bf54c0;
  *(undefined8 *)(lVar12 + 0x60) = 0;
  *(code **)(lVar12 + 0x88) = FUN_7101bf5370;
  *(undefined8 *)(lVar12 + 0x90) = 0;
  if (*(uint *)(lVar12 + 0xe4) < 0x13) {
    *(undefined4 *)(lVar12 + (long)(int)*(uint *)(lVar12 + 0xe4) * 4 + 0x98) = 0;
    puVar11[0x10] = lVar12;
    FUN_7101e9fb20(DAT_71053263a8[1],plVar36,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,
                   param_8);
    pppplVar26 = (long ****)&DAT_00000198;
    memset(*(void **)(*(long *)**(undefined8 **)(lVar12 + 0xf8) + 0x600),0,0x198);
    *(undefined4 *)(*(long *)(*(long *)**(undefined8 **)(lVar12 + 0xf8) + 0x600) + 0x10) =
         0xb00fffff;
    FUN_71037760f0(*(long *)**(undefined8 **)(lVar12 + 0xf8),0);
    puVar11[2] = &DAT_7105333600;
    *(undefined4 *)(puVar11 + 0xd) = DAT_7105333660;
    *(undefined4 *)((long)puVar11 + 0x6c) = DAT_7105333664;
    do {
      uVar8 = DAT_7105333650;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
      if (bVar7) {
        DAT_7105333650 = 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0' || (uVar8 & 1) != 0);
    puVar11[9] = DAT_7105333648;
    DAT_7105333650 = 0;
    DAT_7105333648 = puVar11;
    FUN_71032caea0((long)puVar11,extraout_x1_23,pppplVar26,ppppbVar25,pppplVar27,param_6,param_7,
                   param_8);
    lVar12 = *(long *)(lVar10 + 0x120);
    *(undefined8 **)(lVar10 + 0x120) = puVar11;
    if (lVar12 != 0) {
      FUN_71032cad20(lVar12);
    }
    if (local_138 != (void *)0x0) {
      FUN_710392eb40((ulong)local_138);
    }
    return;
  }
LAB_71018208a4:
                    /* WARNING: Subroutine does not return */
  abort();
}

