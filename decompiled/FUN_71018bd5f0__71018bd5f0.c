// addr:      71018bd5f0
// offset:    0x18bd5f0
// name:      FUN_71018bd5f0
// mangled:   
// signature: undefined __cdecl FUN_71018bd5f0(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71018bd5f0(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined ***pppuVar16;
  long *plVar17;
  ulong uVar18;
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
  long *********ppppppppplVar19;
  long *********ppppppppplVar20;
  long *********ppppppppplVar21;
  long *********ppppppppplVar22;
  long *********ppppppppplVar23;
  long *********ppppppppplVar24;
  long *********ppppppppplVar25;
  long ****pppplVar26;
  long *********ppppppppplVar27;
  long *********ppppppppplVar28;
  long *********ppppppppplVar29;
  undefined8 uVar30;
  char *pcVar31;
  byte ****ppppbVar32;
  long *********ppppppppplVar33;
  undefined8 uVar34;
  long ****pppplVar35;
  int *piVar36;
  long *plVar37;
  long lVar38;
  long *plVar39;
  code *pcVar40;
  byte *pbVar41;
  uint uVar42;
  uint uVar43;
  undefined1 auVar44 [16];
  long ********local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined2 local_1bc;
  undefined1 local_1ba;
  undefined1 *local_1b8;
  undefined4 local_1b0;
  long alStack_1a0 [4];
  long *local_180;
  long alStack_170 [4];
  long *local_150;
  long alStack_140 [4];
  long *local_120;
  long alStack_110 [4];
  long *local_f0;
  long alStack_e0 [4];
  long *local_c0;
  undefined4 local_b0;
  undefined **local_a0;
  undefined8 *local_98;
  undefined ***local_80;
  
  ppppppppplVar20 = &local_1d0;
  ppppppppplVar19 = &local_1d0;
  ppppppppplVar21 = &local_1d0;
  ppppppppplVar22 = &local_1d0;
  ppppppppplVar23 = &local_1d0;
  ppppppppplVar24 = &local_1d0;
  ppppppppplVar25 = &local_1d0;
  ppppppppplVar27 = &local_1d0;
  ppppppppplVar28 = &local_1d0;
  ppppppppplVar29 = &local_1d0;
  ppppppppplVar33 = &local_1d0;
  plVar7 = (long *)FUN_710392e290(0x10,0x148,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8);
  if (plVar7 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (long ********)&DAT_00000148;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      param_3 = ppppppppplVar20;
      if (((uVar8 & 1) != 0) &&
         (plVar7 = (long *)FUN_710392e290(0x10,0x148,(long ****)ppppppppplVar20,param_4,param_5,
                                          param_6,param_7,param_8), param_3 = ppppppppplVar20,
         plVar7 != (long *)0x0)) goto LAB_71018bd674;
    }
    plVar7 = (long *)0x0;
  }
LAB_71018bd674:
  *plVar7 = (long)plVar7;
  plVar7[4] = 0;
  plVar7[1] = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  *(undefined4 *)(plVar7 + 0x1a) = 0xffffffff;
  *(undefined1 *)((long)plVar7 + 0xd4) = 0;
  plVar7[5] = 0;
  plVar7[0x18] = 0;
  plVar7[0x19] = 0xffffffff;
  plVar7[0x16] = 0;
  plVar7[0x17] = 0;
  plVar7[0x14] = 0;
  plVar7[0x15] = 0;
  plVar7[0x12] = 0;
  plVar7[0x13] = 0;
  plVar7[0x10] = 0;
  plVar7[0x11] = 0;
  plVar7[0xe] = 0;
  plVar7[0xf] = 0;
  plVar7[0xc] = 0;
  plVar7[0xd] = 0;
  plVar7[10] = 0;
  plVar7[0xb] = 0;
  plVar7[8] = 0;
  plVar7[9] = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (long ********)&DAT_00000080;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      param_3 = ppppppppplVar19;
      if (((uVar8 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x80,(long ****)ppppppppplVar19,param_4,param_5,param_6,
                                  param_7,param_8), param_3 = ppppppppplVar19,
         puVar9 != (undefined8 *)0x0)) goto LAB_71018bd714;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71018bd714:
  *puVar9 = &PTR_FUN_7105181b40;
  puVar9[2] = 0;
  puVar9[1] = puVar9 + 2;
  puVar9[5] = 0;
  puVar9[3] = 0;
  puVar9[4] = puVar9 + 5;
  puVar9[8] = 0;
  puVar9[6] = 0;
  puVar9[7] = puVar9 + 8;
  puVar9[0xb] = 0;
  puVar9[9] = 0;
  puVar9[10] = puVar9 + 0xb;
  puVar9[0xc] = 0;
  *(undefined4 *)(puVar9 + 0xd) = 2;
  *(undefined4 *)(puVar9 + 0xf) = 0;
  puVar9[0xe] = 0;
  plVar7[0x1b] = (long)puVar9;
  *(undefined4 *)(plVar7 + 0x1c) = 0;
  lVar11 = DAT_710532f840;
  plVar7[0x1d] = *(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
  plVar7[0x1e] = *(long *)(*(long *)(lVar11 + 8) + 0xc0);
  plVar7[0x20] = (long)&PTR_FUN_7104f73d30;
  plVar7[0x21] = 0;
  plVar7[0x22] = 0x87650000000000;
  *(undefined1 *)(plVar7 + 0x23) = 0;
  *(undefined4 *)(plVar7 + 0x1f) = 0;
  plVar7[0x26] = 0;
  plVar7[0x27] = 0;
  plVar7[0x24] = -1;
  plVar7[0x25] = 0;
  puVar9 = *(undefined8 **)(param_2 + 0xa8);
  if (((DAT_71053249a8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053249a8), iVar6 != 0)) {
    if (((DAT_7105324748 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_7105324748), iVar6 != 0)) {
      if (((DAT_7105324750 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_7105324750), iVar6 != 0))
      {
        DAT_7105324758 = 0;
        __cxa_guard_release(&DAT_7105324750);
      }
      DAT_7105324760 = &DAT_7105324758;
      __cxa_guard_release(&DAT_7105324748);
    }
    DAT_71053249b0 = &DAT_7105324760;
    __cxa_guard_release(&DAT_71053249a8);
  }
  for (puVar10 = (undefined8 *)(**(code **)*puVar9)(puVar9);
      (undefined8 **)puVar10 != &DAT_71053249b0; puVar10 = (undefined8 *)*puVar10) {
  }
  *(undefined1 *)(plVar7 + 0x28) = *(undefined1 *)(puVar9 + 1);
  puVar9 = *(undefined8 **)(param_2 + 0xa8);
  if (((DAT_71053249a8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053249a8), iVar6 != 0)) {
    if (((DAT_7105324748 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_7105324748), iVar6 != 0)) {
      if (((DAT_7105324750 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_7105324750), iVar6 != 0))
      {
        DAT_7105324758 = 0;
        __cxa_guard_release(&DAT_7105324750);
      }
      DAT_7105324760 = &DAT_7105324758;
      __cxa_guard_release(&DAT_7105324748);
    }
    DAT_71053249b0 = &DAT_7105324760;
    __cxa_guard_release(&DAT_71053249a8);
  }
  for (puVar10 = (undefined8 *)(**(code **)*puVar9)(puVar9);
      (undefined8 **)puVar10 != &DAT_71053249b0; puVar10 = (undefined8 *)*puVar10) {
  }
  uVar2 = *(undefined1 *)((long)puVar9 + 9);
  plVar7[5] = (long)FUN_71018bc800;
  plVar7[6] = 0;
  plVar7[7] = (long)FUN_71018bc810;
  plVar7[8] = 0;
  *(undefined1 *)((long)plVar7 + 0x141) = uVar2;
  plVar7[0xb] = (long)FUN_71018bcd30;
  plVar7[0xc] = 0;
  plVar7[0xd] = (long)FUN_71018bd160;
  plVar7[0xe] = 0;
  plVar7[9] = (long)FUN_71018bcb70;
  plVar7[10] = 0;
  plVar7[1] = 0;
  plVar7[2] = 0;
  *(undefined8 *)((long)plVar7 + 0xbc) = 0;
  *(undefined8 *)((long)plVar7 + 0xb4) = 0;
  *(undefined8 *)((long)plVar7 + 0xac) = 0;
  *(undefined8 *)((long)plVar7 + 0xa4) = 0;
  *(undefined8 *)((long)plVar7 + 0x9c) = 0;
  *(undefined8 *)((long)plVar7 + 0x94) = 0;
  *(undefined8 *)((long)plVar7 + 0x8c) = 0;
  *(undefined8 *)((long)plVar7 + 0x84) = 0;
  *(undefined8 *)((long)plVar7 + 0x7c) = 0;
  *(undefined8 *)((long)plVar7 + 0xc4) = 0xffffffff00000000;
  *(undefined8 *)((long)plVar7 + 0xcc) = 0xffffffff00000000;
  *(undefined1 *)((long)plVar7 + 0xd4) = 0;
  *(undefined4 *)(plVar7 + 0xf) = 0;
  FUN_71018bd2a0(plVar7);
  uVar8 = *(ulong *)(param_1 + 0x58);
  *(long **)(param_1 + 0x58) = plVar7;
  if (uVar8 != 0) {
    lVar11 = *(long *)(uVar8 + 0x138);
    *(undefined8 *)(uVar8 + 0x138) = 0;
    uVar30 = extraout_x1;
    if (lVar11 != 0) {
      FUN_71032cad20(lVar11);
      uVar30 = extraout_x1_00;
    }
    *(undefined ***)(uVar8 + 0x100) = &PTR_FUN_7104f73d50;
    if (((*(long *)(uVar8 + 0x108) != 0) && (DAT_7106dd53a8 == '\x01')) &&
       (*(int *)(uVar8 + 0x110) == DAT_7106dd53ac)) {
      piVar36 = (int *)(*(long *)(uVar8 + 0x108) + 0x38);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar36,0x10);
        if (bVar4) {
          *piVar36 = *piVar36 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *(undefined8 *)(uVar8 + 0x108) = 0;
    *(undefined1 *)(uVar8 + 0x118) = 0;
    FUN_710323b9e0(*(long *)(uVar8 + 0xd8),uVar30,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar7 = *(long **)(uVar8 + 0xd8);
    *(undefined8 *)(uVar8 + 0xd8) = 0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    FUN_710392eb40(uVar8);
    plVar7 = *(long **)(param_1 + 0x58);
  }
  plVar17 = plVar7 + 0x1b;
  lVar11 = *plVar17;
  ppppppppplVar20 = (long *********)(long)*(int *)(lVar11 + 0x70);
  ppppbVar32 = (byte ****)(ulong)*(uint *)(lVar11 + 0x68);
  pppplVar35 = (long ****)0x0;
  FUN_710323beb0(lVar11,(ulong *)&DAT_71045455a0,(long)ppppppppplVar20,(ulong)ppppbVar32,
                 (long ****)0x0,param_6,param_7,param_8);
  lVar11 = *plVar17;
  uVar8 = FUN_710323cb80(lVar11,extraout_x1_01,ppppppppplVar20,ppppbVar32,pppplVar35,param_6,param_7
                         ,param_8);
  while ((uVar8 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar8 = FUN_710323cb80(lVar11,extraout_x1_02,ppppppppplVar20,ppppbVar32,pppplVar35,param_6,
                           param_7,param_8);
  }
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar20,ppppbVar32,pppplVar35,param_6,param_7
                          ,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (long ********)&DAT_00000088;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      ppppppppplVar20 = ppppppppplVar21;
      if (((uVar8 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar21,ppppbVar32,pppplVar35,param_6
                                  ,param_7,param_8), ppppppppplVar20 = ppppppppplVar21,
         puVar9 != (undefined8 *)0x0)) goto LAB_71018bd9fc;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71018bd9fc:
  *puVar9 = &PTR_FUN_71050aeb20;
  puVar9[1] = 0;
  puVar9[0xc] = 0;
  puVar9[0xd] = 0x1ffffffff;
  puVar9[2] = 0;
  puVar9[3] = 0;
  *(undefined1 *)(puVar9 + 0xb) = 0;
  puVar9[0xf] = plVar17;
  *(undefined1 *)(puVar9 + 0xe) = 1;
  puVar9[9] = 0;
  puVar9[10] = 0;
  lVar11 = FUN_710392e290(0x10,0x158,(long ****)ppppppppplVar20,ppppbVar32,pppplVar35,param_6,
                          param_7,param_8);
  uVar30 = extraout_x1_03;
  if (lVar11 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (long ********)&DAT_00000158;
      auVar44 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      uVar30 = auVar44._8_8_;
      ppppppppplVar20 = ppppppppplVar22;
      if (((auVar44._0_8_ & 1) != 0) &&
         (lVar11 = FUN_710392e290(0x10,0x158,(long ****)ppppppppplVar22,ppppbVar32,pppplVar35,
                                  param_6,param_7,param_8), uVar30 = extraout_x1_04,
         ppppppppplVar20 = ppppppppplVar22, lVar11 != 0)) goto LAB_71018bda84;
    }
    lVar11 = 0;
  }
LAB_71018bda84:
  puVar10 = (undefined8 *)(lVar11 + 0x110);
  *(undefined4 *)(lVar11 + 0x100) = 0xffffffff;
  *(undefined8 *)(lVar11 + 0x10) = 0;
  *(undefined8 *)(lVar11 + 0x18) = 0;
  *(undefined1 *)(lVar11 + 0x104) = 0;
  *(long **)(lVar11 + 0x108) = plVar17;
  *(long *)lVar11 = lVar11;
  *(undefined8 *)(lVar11 + 8) = 0;
  *(undefined8 *)(lVar11 + 0xf0) = 0;
  *(undefined8 *)(lVar11 + 0xf8) = 0xffffffff;
  *(undefined8 *)(lVar11 + 0xe0) = 0;
  *(undefined8 *)(lVar11 + 0xe8) = 0;
  *(undefined8 *)(lVar11 + 0xd0) = 0;
  *(undefined8 *)(lVar11 + 0xd8) = 0;
  *(undefined8 *)(lVar11 + 0xc0) = 0;
  *(undefined8 *)(lVar11 + 200) = 0;
  *(undefined8 *)(lVar11 + 0xb0) = 0;
  *(undefined8 *)(lVar11 + 0xb8) = 0;
  *(undefined8 *)(lVar11 + 0xa0) = 0;
  *(undefined8 *)(lVar11 + 0xa8) = 0;
  *(undefined8 *)(lVar11 + 0x90) = 0;
  *(undefined8 *)(lVar11 + 0x98) = 0;
  *(undefined8 *)(lVar11 + 0x80) = 0;
  *(undefined8 *)(lVar11 + 0x88) = 0;
  *(undefined8 *)(lVar11 + 0x70) = 0;
  *(undefined8 *)(lVar11 + 0x78) = 0;
  *(undefined8 *)(lVar11 + 0x60) = 0;
  *(undefined8 *)(lVar11 + 0x68) = 0;
  *(undefined8 *)(lVar11 + 0x50) = 0;
  *(undefined8 *)(lVar11 + 0x58) = 0;
  *(undefined8 *)(lVar11 + 0x40) = 0;
  *(undefined8 *)(lVar11 + 0x48) = 0;
  *(undefined8 *)(lVar11 + 0x30) = 0;
  *(undefined8 *)(lVar11 + 0x38) = 0;
  *(undefined8 *)(lVar11 + 0x20) = 0;
  *(undefined8 *)(lVar11 + 0x28) = 0;
  FUN_7103776290(puVar10,uVar30,(long ****)ppppppppplVar20,ppppbVar32,pppplVar35,param_6,param_7,
                 param_8);
  puVar1 = (undefined8 *)(lVar11 + 0x120);
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)ppppppppplVar20,ppppbVar32,pppplVar35,param_6,param_7,
                           param_8);
  uVar30 = extraout_x1_05;
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (long ********)&DAT_00000008;
      auVar44 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      uVar30 = auVar44._8_8_;
      ppppppppplVar20 = ppppppppplVar23;
      if (((auVar44._0_8_ & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)ppppppppplVar23,ppppbVar32,pppplVar35,param_6,
                                   param_7,param_8), uVar30 = extraout_x1_06,
         ppppppppplVar20 = ppppppppplVar23, puVar12 != (undefined8 *)0x0)) goto LAB_71018bdb3c;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_71018bdb3c:
  FUN_7103773200(puVar12,uVar30,(long ****)ppppppppplVar20,ppppbVar32,pppplVar35,param_6,param_7,
                 param_8);
  *(undefined8 **)(lVar11 + 0x120) = puVar12;
  *(undefined4 *)(lVar11 + 0x128) = 0;
  *(undefined ***)(lVar11 + 0x130) = &PTR_FUN_71050aeb58;
  lVar13 = FUN_710392e290(0x10,0x4e0,(long ****)ppppppppplVar20,ppppbVar32,pppplVar35,param_6,
                          param_7,param_8);
  if (lVar13 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (long ********)0x4e0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      ppppppppplVar20 = ppppppppplVar24;
      if (((uVar8 & 1) != 0) &&
         (lVar13 = FUN_710392e290(0x10,0x4e0,(long ****)ppppppppplVar24,ppppbVar32,pppplVar35,
                                  param_6,param_7,param_8), ppppppppplVar20 = ppppppppplVar24,
         lVar13 != 0)) goto LAB_71018bdbb4;
    }
    lVar13 = 0;
  }
LAB_71018bdbb4:
  *(undefined8 *)(lVar13 + 0x10) = 0;
  *(undefined8 *)(lVar13 + 0x18) = 0;
  *(long *)lVar13 = lVar13;
  *(undefined8 *)(lVar13 + 8) = 0;
  *(undefined4 *)(lVar13 + 0x110) = 0xffffffff;
  *(undefined1 *)(lVar13 + 0x114) = 0;
  *(undefined8 *)(lVar13 + 0x100) = 0;
  *(undefined8 *)(lVar13 + 0x108) = 0xffffffff;
  *(undefined8 *)(lVar13 + 0xf0) = 0;
  *(undefined8 *)(lVar13 + 0xf8) = 0;
  *(undefined8 *)(lVar13 + 0xe0) = 0;
  *(undefined8 *)(lVar13 + 0xe8) = 0;
  *(undefined8 *)(lVar13 + 0xd0) = 0;
  *(undefined8 *)(lVar13 + 0xd8) = 0;
  *(undefined8 *)(lVar13 + 0xc0) = 0;
  *(undefined8 *)(lVar13 + 200) = 0;
  *(undefined8 *)(lVar13 + 0xb0) = 0;
  *(undefined8 *)(lVar13 + 0xb8) = 0;
  *(undefined8 *)(lVar13 + 0xa0) = 0;
  *(undefined8 *)(lVar13 + 0xa8) = 0;
  *(undefined8 *)(lVar13 + 0x90) = 0;
  *(undefined8 *)(lVar13 + 0x98) = 0;
  *(undefined8 *)(lVar13 + 0x80) = 0;
  *(undefined8 *)(lVar13 + 0x88) = 0;
  *(undefined8 *)(lVar13 + 0x70) = 0;
  *(undefined8 *)(lVar13 + 0x78) = 0;
  *(undefined8 *)(lVar13 + 0x60) = 0;
  *(undefined8 *)(lVar13 + 0x68) = 0;
  *(undefined8 *)(lVar13 + 0x50) = 0;
  *(undefined8 *)(lVar13 + 0x58) = 0;
  *(undefined8 *)(lVar13 + 0x40) = 0;
  *(undefined8 *)(lVar13 + 0x48) = 0;
  *(undefined8 *)(lVar13 + 0x30) = 0;
  *(undefined8 *)(lVar13 + 0x38) = 0;
  *(undefined8 *)(lVar13 + 0x20) = 0;
  *(undefined8 *)(lVar13 + 0x28) = 0;
  *(long **)(lVar13 + 0x118) = plVar17;
  *(undefined8 **)(lVar13 + 0x120) = puVar1;
  plVar37 = (long *)*puVar1;
  *(long *)(lVar13 + 0x128) = *plVar37 + 8;
  lVar38 = *plVar37;
  lVar14 = FUN_710392e290(0x10,0x100,(long ****)ppppppppplVar20,ppppbVar32,pppplVar35,param_6,
                          param_7,param_8);
  if (lVar14 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (long ********)&DAT_00000100;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      ppppppppplVar20 = ppppppppplVar25;
      if (((uVar8 & 1) != 0) &&
         (lVar14 = FUN_710392e290(0x10,0x100,(long ****)ppppppppplVar25,ppppbVar32,pppplVar35,
                                  param_6,param_7,param_8), ppppppppplVar20 = ppppppppplVar25,
         lVar14 != 0)) goto LAB_71018bdc70;
    }
    lVar14 = 0;
  }
LAB_71018bdc70:
  *(undefined8 *)(lVar14 + 0x40) = 0;
  *(undefined8 *)(lVar14 + 0x48) = 0;
  *(undefined8 *)(lVar14 + 0x30) = 0;
  *(undefined8 *)(lVar14 + 0x38) = 0;
  *(code **)(lVar14 + 0x38) = FUN_7101d19ad0;
  *(undefined8 *)(lVar14 + 0x40) = 0;
  *(undefined4 *)(lVar14 + 0xd0) = 0xffffffff;
  *(undefined1 *)(lVar14 + 0xd4) = 0;
  *(undefined4 *)(lVar14 + 0xf8) = 0;
  *(undefined8 *)(lVar14 + 0x70) = 0;
  *(undefined8 *)(lVar14 + 0x78) = 0;
  *(undefined4 *)(lVar14 + 0x78) = 0;
  *(undefined8 *)(lVar14 + 0x60) = 0;
  *(undefined8 *)(lVar14 + 0x68) = 0;
  *(undefined8 *)(lVar14 + 0x50) = 0;
  *(undefined8 *)(lVar14 + 0x58) = 0;
  *(undefined8 *)(lVar14 + 0x20) = 0;
  *(undefined8 *)(lVar14 + 0x28) = 0;
  *(code **)(lVar14 + 0x28) = FUN_7101d19ac0;
  *(undefined8 *)(lVar14 + 0x30) = 0;
  *(code **)(lVar14 + 0x48) = FUN_7101d19b50;
  *(undefined8 *)(lVar14 + 0x50) = 0;
  *(code **)(lVar14 + 0x68) = FUN_7101d19ac0;
  *(undefined8 *)(lVar14 + 0x70) = 0;
  *(undefined8 *)(lVar14 + 0x10) = 0;
  *(undefined8 *)(lVar14 + 0x18) = 0;
  *(long *)lVar14 = lVar14;
  *(undefined8 *)(lVar14 + 8) = 0;
  *(undefined8 *)(lVar14 + 0xc0) = 0;
  *(undefined8 *)(lVar14 + 200) = 0xffffffff;
  *(undefined8 *)(lVar14 + 0xb0) = 0;
  *(undefined8 *)(lVar14 + 0xb8) = 0;
  *(undefined8 *)(lVar14 + 0xa0) = 0;
  *(undefined8 *)(lVar14 + 0xa8) = 0;
  *(undefined8 *)(lVar14 + 0x90) = 0;
  *(undefined8 *)(lVar14 + 0x98) = 0;
  *(undefined8 *)(lVar14 + 0x80) = 0;
  *(undefined8 *)(lVar14 + 0x88) = 0;
  *(undefined8 *)(lVar14 + 0xe8) = 0;
  *(undefined8 *)(lVar14 + 0xf0) = 0;
  *(long *)(lVar14 + 0xd8) = lVar38 + 8;
  *(undefined8 *)(lVar14 + 0xe0) = 0;
  *(code **)(lVar14 + 0x58) = FUN_7101d19bb0;
  *(undefined8 *)(lVar14 + 0x60) = 0;
  *(long *)(lVar13 + 0x130) = lVar14;
  FUN_7101d17560((long *)(lVar13 + 0x138),puVar1,(long ****)ppppppppplVar20,ppppbVar32,pppplVar35,
                 param_6,param_7,param_8);
  pppplVar26 = (long ****)(*(long *)*puVar1 + 8);
  FUN_7101d1fbb0((long *)(lVar13 + 0x140),*(undefined8 *)(lVar13 + 0x118),pppplVar26,ppppbVar32,
                 pppplVar35,param_6,param_7,param_8);
  FUN_710172a900((undefined2 *)(lVar13 + 0x148));
  *(code **)(lVar13 + 0x28) = FUN_7101d177e0;
  *(undefined8 *)(lVar13 + 0x30) = 0;
  *(undefined8 *)(lVar13 + 0x4d8) = 0;
  *(code **)(lVar13 + 0x48) = FUN_7101d17850;
  *(undefined8 *)(lVar13 + 0x50) = 0;
  *(code **)(lVar13 + 0x68) = FUN_7101d18940;
  *(undefined8 *)(lVar13 + 0x70) = 0;
  *(code **)(lVar13 + 0x78) = FUN_7101d18be0;
  *(undefined8 *)(lVar13 + 0x80) = 0;
  *(code **)(lVar13 + 0x38) = FUN_7101d177f0;
  *(undefined8 *)(lVar13 + 0x40) = 0;
  *(code **)(lVar13 + 0x58) = FUN_7101d17b30;
  *(undefined8 *)(lVar13 + 0x60) = 0;
  *(code **)(lVar13 + 0x98) = FUN_7101d19870;
  *(undefined8 *)(lVar13 + 0xa0) = 0;
  *(code **)(lVar13 + 0x88) = FUN_7101d19870;
  *(undefined8 *)(lVar13 + 0x90) = 0;
  *(code **)(lVar13 + 0xa8) = FUN_7101d19870;
  *(undefined8 *)(lVar13 + 0xb0) = 0;
  if (0x12 < *(uint *)(lVar13 + 0x104)) goto LAB_71018be63c;
  *(undefined4 *)(lVar13 + (long)(int)*(uint *)(lVar13 + 0x104) * 4 + 0xb8) = 0;
  plVar37 = (long *)(lVar11 + 0x150);
  *(long *)(lVar11 + 0x138) = lVar13;
  *(undefined ***)(lVar11 + 0x140) = &PTR_FUN_71050aeb78;
  lVar13 = FUN_710392e290(0x10,0x110,pppplVar26,ppppbVar32,pppplVar35,param_6,param_7,param_8);
  if (lVar13 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (long ********)&DAT_00000110;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar8 & 1) != 0) &&
         (lVar13 = FUN_710392e290(0x10,0x110,(long ****)ppppppppplVar27,ppppbVar32,pppplVar35,
                                  param_6,param_7,param_8), lVar13 != 0)) goto LAB_71018bde04;
    }
    lVar13 = 0;
  }
LAB_71018bde04:
  *(undefined8 *)(lVar13 + 0x10) = 0;
  *(undefined8 *)(lVar13 + 0x18) = 0;
  *(long *)lVar13 = lVar13;
  *(undefined8 *)(lVar13 + 8) = 0;
  *(undefined4 *)(lVar13 + 0xc0) = 0xffffffff;
  *(undefined1 *)(lVar13 + 0xc4) = 0;
  *(undefined8 *)(lVar13 + 0xb0) = 0;
  *(undefined8 *)(lVar13 + 0xb8) = 0xffffffff;
  *(undefined8 *)(lVar13 + 0xa0) = 0;
  *(undefined8 *)(lVar13 + 0xa8) = 0;
  *(undefined8 *)(lVar13 + 0x90) = 0;
  *(undefined8 *)(lVar13 + 0x98) = 0;
  *(undefined8 *)(lVar13 + 0x80) = 0;
  *(undefined8 *)(lVar13 + 0x88) = 0;
  *(undefined8 *)(lVar13 + 0x70) = 0;
  *(undefined8 *)(lVar13 + 0x78) = 0;
  *(undefined8 *)(lVar13 + 0x60) = 0;
  *(undefined8 *)(lVar13 + 0x68) = 0;
  *(undefined8 *)(lVar13 + 0x50) = 0;
  *(undefined8 *)(lVar13 + 0x58) = 0;
  *(undefined8 *)(lVar13 + 0x40) = 0;
  *(undefined8 *)(lVar13 + 0x48) = 0;
  *(undefined8 *)(lVar13 + 0x30) = 0;
  *(undefined8 *)(lVar13 + 0x38) = 0;
  *(undefined8 *)(lVar13 + 0x20) = 0;
  *(undefined8 *)(lVar13 + 0x28) = 0;
  plVar39 = (long *)*puVar1;
  *(long *)(lVar13 + 200) = *plVar39 + 8;
  *(long **)(lVar13 + 0xd0) = plVar37;
  pppplVar26 = (long ****)(*plVar39 + 8);
  FUN_7101d1fbb0((long *)(lVar13 + 0xd8),plVar17,pppplVar26,ppppbVar32,pppplVar35,param_6,param_7,
                 param_8);
  FUN_7101d17560((long *)(lVar13 + 0xe0),puVar1,pppplVar26,ppppbVar32,pppplVar35,param_6,param_7,
                 param_8);
  *(code **)(lVar13 + 0x28) = FUN_7101d22a80;
  *(undefined8 *)(lVar13 + 0x30) = 0;
  *(undefined1 *)(lVar13 + 0x108) = 0;
  *(code **)(lVar13 + 0x38) = FUN_7101d22a90;
  *(undefined8 *)(lVar13 + 0x40) = 0;
  *(code **)(lVar13 + 0x48) = FUN_7101d230f0;
  *(undefined8 *)(lVar13 + 0x50) = 0;
  *(undefined1 *)(lVar13 + 0x100) = 0;
  *(undefined8 *)(lVar13 + 0xe8) = 0;
  *(undefined8 *)(lVar13 + 0xf0) = 0;
  *(undefined8 *)(lVar13 + 0xf8) = 0;
  *(code **)(lVar13 + 0x58) = FUN_7101d23590;
  *(undefined8 *)(lVar13 + 0x60) = 0;
  if (0x12 < *(uint *)(lVar13 + 0xb4)) goto LAB_71018be63c;
  *(undefined4 *)(lVar13 + (long)(int)*(uint *)(lVar13 + 0xb4) * 4 + 0x68) = 0;
  *(long *)(lVar11 + 0x148) = lVar13;
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0xb8,pppplVar26,ppppbVar32,pppplVar35,param_6,param_7,param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (long ********)&DAT_000000b8;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      pppplVar26 = (long ****)ppppppppplVar28;
      if (((uVar8 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0xb8,(long ****)ppppppppplVar28,ppppbVar32,pppplVar35,
                                   param_6,param_7,param_8), pppplVar26 = (long ****)ppppppppplVar28
         , puVar12 != (undefined8 *)0x0)) goto LAB_71018bdf20;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_71018bdf20:
  *puVar12 = &PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar26,ppppbVar32,pppplVar35,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (long ********)&SUB_00000020;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar8 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar29,ppppbVar32,pppplVar35,
                                   param_6,param_7,param_8), puVar15 != (undefined8 *)0x0))
      goto LAB_71018bdf80;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_71018bdf80:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined2 *)(puVar12 + 0x16) = 0x100;
  *(undefined1 *)(puVar12 + 3) = 0;
  *(undefined2 *)(puVar12 + 0x12) = 0;
  puVar12[0xb] = 0;
  *(undefined8 *)((long)puVar12 + 0x9c) = 0;
  *(undefined8 *)((long)puVar12 + 0x94) = 0;
  *(undefined4 *)((long)puVar12 + 0xa4) = 1;
  puVar12[0x15] = 0;
  *(undefined4 *)((long)puVar12 + 0xb4) = 0x3f800000;
  puVar12[1] = puVar15;
  puVar12[2] = 0;
  puVar12[0x10] = 0;
  puVar12[0x11] = 0;
  puVar12[0xe] = 0;
  puVar12[0xf] = 0;
  puVar12[0xc] = 0;
  puVar12[0xd] = 0;
  *(undefined8 **)(lVar11 + 0x150) = puVar12;
  FUN_71032cbf30(puVar1,**(long **)(lVar11 + 0x108),(ulong *)&DAT_71045455a0,(byte ****)0x1,
                 pppplVar35,param_6,param_7,param_8);
  lVar13 = **(long **)(lVar11 + 0x120);
  if ((undefined8 *)(lVar13 + 8) != puVar10) {
    **(undefined8 **)(lVar11 + 0x118) = **(undefined8 **)(lVar13 + 0x10);
    *(undefined8 *)(*(long *)(lVar11 + 0x118) + 8) = *(undefined8 *)(*(long *)(lVar13 + 0x10) + 8);
    lVar14 = *(long *)(lVar13 + 0x10);
    lVar13 = *(long *)(lVar11 + 0x118);
    if (lVar13 != lVar14) {
      **(undefined8 **)(lVar13 + 0x18) = **(undefined8 **)(lVar14 + 0x18);
      *(undefined8 *)(*(long *)(lVar13 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar14 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar13 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar14 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar13 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar14 + 0x18) + 0x18);
    }
  }
  *(undefined4 *)(*(long *)(*(long *)**(undefined8 **)(lVar11 + 0x120) + 0x600) + 0x18) = 0x40;
  *(undefined4 *)(*(long *)(*(long *)**(undefined8 **)(lVar11 + 0x120) + 0x600) + 0x1c) = 0x10;
  lVar13 = *(long *)(lVar11 + 0x138);
  local_1b8 = &DAT_41f0000000000000;
  local_1d0 = (long ********)0x0;
  local_1c8 = 0x101;
  local_1c0 = 1;
  local_1bc = 1;
  local_1ba = 1;
  local_1b0 = 0;
  local_180 = (long *)0x0;
  local_150 = (long *)0x0;
  local_120 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_b0 = 0;
  local_a0 = (undefined **)&DAT_7105186040;
  local_80 = &local_a0;
  FUN_7101989a30((long *)&local_a0,alStack_170);
  if (&local_a0 == local_80) {
    pcVar40 = (code *)(*local_80)[4];
LAB_71018be12c:
    (*pcVar40)();
  }
  else if (local_80 != (undefined ***)0x0) {
    pcVar40 = (code *)(*local_80)[5];
    goto LAB_71018be12c;
  }
  local_1c8._0_3_ = CONCAT12(1,(undefined2)local_1c8);
  plVar17 = (long *)(lVar13 + 0x4d8);
  FUN_7103770b30(plVar17,*(undefined8 **)(lVar13 + 0x128),(long ****)"selector_01",
                 (byte ****)&local_1d0,pppplVar35,param_6,param_7,param_8);
  FUN_71037717d0(plVar17,0,"set_btn_keyhelp",ppppppppplVar33,pppplVar35,param_6,param_7,param_8);
  uVar34 = 0;
  FUN_7103771930(*(long *)(lVar13 + 0x4d8),0,(long ****)&DAT_00000007,(byte ****)0x0,pppplVar35,
                 param_6,param_7,param_8);
  uVar30 = 1;
  FUN_7103771a80(plVar17,0,1);
  (**(code **)(**(long **)(lVar13 + 0x4d8) + 0x70))(*(long **)(lVar13 + 0x4d8),1);
  if (alStack_e0 == local_c0) {
    pcVar40 = *(code **)(*local_c0 + 0x20);
LAB_71018be1cc:
    (*pcVar40)();
  }
  else if (local_c0 != (long *)0x0) {
    pcVar40 = *(code **)(*local_c0 + 0x28);
    goto LAB_71018be1cc;
  }
  if (alStack_110 == local_f0) {
    pcVar40 = *(code **)(*local_f0 + 0x20);
LAB_71018be1fc:
    (*pcVar40)();
  }
  else if (local_f0 != (long *)0x0) {
    pcVar40 = *(code **)(*local_f0 + 0x28);
    goto LAB_71018be1fc;
  }
  if (alStack_140 == local_120) {
    pcVar40 = *(code **)(*local_120 + 0x20);
LAB_71018be22c:
    (*pcVar40)();
  }
  else if (local_120 != (long *)0x0) {
    pcVar40 = *(code **)(*local_120 + 0x28);
    goto LAB_71018be22c;
  }
  if (alStack_170 == local_150) {
    pcVar40 = *(code **)(*local_150 + 0x20);
LAB_71018be25c:
    (*pcVar40)();
  }
  else if (local_150 != (long *)0x0) {
    pcVar40 = *(code **)(*local_150 + 0x28);
    goto LAB_71018be25c;
  }
  if (alStack_1a0 == local_180) {
    pcVar40 = *(code **)(*local_180 + 0x20);
LAB_71018be28c:
    (*pcVar40)();
  }
  else if (local_180 != (long *)0x0) {
    pcVar40 = *(code **)(*local_180 + 0x28);
    goto LAB_71018be28c;
  }
  FUN_7103776640(&local_a0,(long)puVar10,(byte ****)"set_parts_gold_count",uVar30,uVar34,pppplVar35,
                 param_6,param_7,param_8);
  FUN_7103776640(&local_1d0,(long)&local_a0,(byte ****)"set_parts_gold",uVar30,uVar34,pppplVar35,
                 param_6,param_7,param_8);
  puVar10 = local_98;
  local_a0 = &PTR_FUN_710523d988;
  local_98 = (undefined8 *)0x0;
  if (puVar10 != (undefined8 *)0x0) {
    uVar8 = puVar10[3];
    puVar10[2] = &PTR_FUN_710523d9a8;
    puVar10[3] = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40((ulong)puVar10);
  }
  FUN_7103776910(&local_a0,(long)&local_1d0,(long ****)"set_txt_num",uVar30,uVar34,pppplVar35,
                 param_6,param_7,param_8);
  pppuVar16 = (undefined ***)*plVar37;
  if (pppuVar16 != &local_a0) {
    *pppuVar16[1] = (undefined *)*local_98;
    pppuVar16[1][1] = (undefined *)local_98[1];
    pppuVar16[1][2] = (undefined *)local_98[2];
    pppuVar16[1][3] = (undefined *)local_98[3];
  }
  for (uVar8 = 0; "mnu_spectate_point_n"[uVar8] != '\0'; uVar8 = uVar8 + 2) {
    *(char *)((long)pppuVar16 + uVar8 + 0x18) = "mnu_spectate_point_n"[uVar8];
    if ("mnu_spectate_point_n"[uVar8 + 1] == '\0') {
      uVar8 = uVar8 + 1;
      break;
    }
    *(char *)((long)pppuVar16 + uVar8 + 0x19) = "mnu_spectate_point_n"[uVar8 + 1];
  }
  *(byte *)((long)(pppuVar16 + 3) + (uVar8 & 0xffffffff)) = 0;
  uVar43 = (uint)*(byte *)(pppuVar16 + 3);
  uVar42 = 0x811c9dc5;
  *(int *)((long)pppuVar16 + 0x14) = (int)uVar8;
  if (*(byte *)(pppuVar16 + 3) != 0) {
    pbVar41 = (byte *)((long)pppuVar16 + 0x19);
    do {
      uVar42 = uVar42 * 0x89 ^ uVar43;
      uVar43 = (uint)*pbVar41;
      pbVar41 = pbVar41 + 1;
    } while (uVar43 != 0);
  }
  *(uint *)(pppuVar16 + 2) = uVar42;
  FUN_710377a280((long)pppuVar16,(byte *)(pppuVar16 + 3),1);
  pcVar31 = "anim_count";
  FUN_7103399a70(*(long *)(lVar11 + 0x150),(long)&local_1d0,(long ****)"anim_count",
                 (byte ****)"anim_stop",pppplVar35,param_6,param_7,param_8);
  lVar13 = *(long *)(lVar11 + 0x150);
  *(undefined8 *)(lVar13 + 0x58) = 0x19cbbc0370;
  *(undefined8 *)(lVar13 + 0x60) = 0x19d3b50828;
  lVar13 = *(long *)(lVar11 + 0x118);
  *(code **)(lVar11 + 0x28) = FUN_7101d11f40;
  *(undefined8 *)(lVar11 + 0x30) = 0;
  *(code **)(lVar11 + 0x48) = FUN_7101d11f40;
  *(undefined8 *)(lVar11 + 0x50) = 0;
  *(code **)(lVar11 + 0x58) = FUN_7101d11f50;
  *(undefined8 *)(lVar11 + 0x60) = 0;
  *(code **)(lVar11 + 0x78) = FUN_7101d12f30;
  *(undefined8 *)(lVar11 + 0x80) = 0;
  *(code **)(lVar11 + 0x68) = FUN_7101d124b0;
  *(undefined8 *)(lVar11 + 0x70) = 0;
  *(code **)(lVar11 + 0x98) = FUN_7101d12f40;
  *(undefined8 *)(lVar11 + 0xa0) = 0;
  *(code **)(lVar11 + 0x88) = FUN_7101d12f40;
  *(undefined8 *)(lVar11 + 0x90) = 0;
  if ((*(long *)(lVar13 + 8) == 0) ||
     (plVar17 = (long *)FUN_71037964b0(*(long *)(lVar13 + 8),0x7104270166), plVar17 == (long *)0x0))
  {
LAB_71018be474:
    FUN_7103778300(0x3f800000,lVar13,0x7104270166);
    uVar30 = extraout_x1_07;
  }
  else {
    auVar44 = (**(code **)(*plVar17 + 0x130))();
    uVar30 = auVar44._8_8_;
    if ((auVar44._0_8_ & 1) == 0) {
      lVar13 = *(long *)(lVar11 + 0x118);
      goto LAB_71018be474;
    }
  }
  lVar13 = *plVar37;
  uVar42 = *(uint *)(*(long *)(**(long **)(*DAT_7105314510 + 0x68) + 8) + 0x10dc8);
  ppppbVar32 = (byte ****)(ulong)uVar42;
  if (*(uint *)(lVar13 + 0x94) != uVar42) {
    pcVar31 = (char *)0x1;
    *(uint *)(lVar13 + 0x94) = uVar42;
    FUN_710377a280(lVar13,(byte *)(lVar13 + 0x18),1);
    uVar30 = extraout_x1_08;
  }
  puVar10 = local_98;
  if (*(uint *)(lVar11 + 0xf4) < 0x13) {
    *(undefined4 *)(lVar11 + (long)(int)*(uint *)(lVar11 + 0xf4) * 4 + 0xa8) = 2;
    local_a0 = &PTR_FUN_710523d9a8;
    local_98 = (undefined8 *)0x0;
    if (puVar10 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar10);
      uVar30 = extraout_x1_09;
    }
    uVar8 = local_1c8;
    local_1d0 = (long ********)&PTR_FUN_710523d988;
    local_1c8 = 0;
    if (uVar8 != 0) {
      uVar18 = *(ulong *)(uVar8 + 0x18);
      *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar8 + 0x18) = 0;
      if (uVar18 != 0) {
        FUN_710392eb40(uVar18);
      }
      FUN_710392eb40(uVar8);
      uVar30 = extraout_x1_10;
    }
    puVar9[0x10] = lVar11;
    puVar9[2] = &DAT_7105333600;
    uVar5 = DAT_7105333664;
    *(undefined4 *)(puVar9 + 0xd) = DAT_7105333660;
    *(undefined4 *)((long)puVar9 + 0x6c) = uVar5;
    do {
      uVar42 = DAT_7105333650;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
      if (bVar4) {
        DAT_7105333650 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0' || (uVar42 & 1) != 0);
    puVar9[9] = DAT_7105333648;
    DAT_7105333650 = 0;
    DAT_7105333648 = puVar9;
    FUN_71032caea0((long)puVar9,uVar30,(long ****)pcVar31,ppppbVar32,pppplVar35,param_6,param_7,
                   param_8);
    lVar11 = plVar7[0x27];
    plVar7[0x27] = (long)puVar9;
    if (lVar11 != 0) {
      FUN_71032cad20(lVar11);
    }
    if (*(uint *)((long)plVar7 + 0xc4) < 0x13) {
      *(undefined4 *)((long)plVar7 + (long)(int)*(uint *)((long)plVar7 + 0xc4) * 4 + 0x78) = 1;
      return;
    }
  }
LAB_71018be63c:
                    /* WARNING: Subroutine does not return */
  abort();
}

