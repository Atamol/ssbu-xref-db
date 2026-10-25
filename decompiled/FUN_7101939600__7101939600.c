// addr:      7101939600
// offset:    0x1939600
// name:      FUN_7101939600
// mangled:   
// signature: undefined __cdecl FUN_7101939600(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101939600(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  byte **ppbVar2;
  long *******ppppppplVar3;
  byte **ppbVar4;
  byte **ppbVar5;
  long *******ppppppplVar6;
  char cVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  byte ****ppppbVar18;
  long *********ppppppppplVar19;
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
  char *pcVar20;
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
  undefined8 uVar21;
  long *********ppppppppplVar22;
  long ****pppplVar23;
  byte ****ppppbVar24;
  long ****pppplVar25;
  undefined1 *puVar26;
  undefined8 *puVar27;
  long *******ppppppplVar28;
  code *pcVar29;
  long lVar30;
  long lVar31;
  void *__s;
  undefined8 *puVar32;
  long lVar33;
  long *plVar34;
  long *plVar35;
  long *plVar36;
  undefined1 auVar37 [16];
  undefined **local_350;
  undefined8 *local_348;
  undefined **local_340;
  undefined8 *local_338;
  undefined **local_330;
  undefined8 *local_328;
  long ********local_320;
  ulong local_318;
  byte ***local_310;
  undefined8 *local_308;
  long alStack_2e0 [4];
  long *local_2c0;
  long alStack_2b0 [4];
  long *local_290;
  long alStack_280 [4];
  long *local_260;
  long alStack_250 [4];
  long *local_230;
  long alStack_220 [4];
  long *local_200;
  long ********local_1e0;
  undefined2 local_1d8;
  undefined4 local_1d6;
  undefined2 local_1d2;
  undefined4 local_1d0;
  undefined2 local_1cc;
  undefined1 local_1ca;
  undefined1 *local_1c8;
  undefined4 local_1c0;
  long alStack_1b0 [4];
  long *local_190;
  long alStack_180 [4];
  long *local_160;
  long alStack_150 [4];
  long *local_130;
  long alStack_120 [4];
  long *local_100;
  long alStack_f0 [4];
  long *local_d0;
  undefined4 local_c0;
  long ********local_b0;
  undefined8 *local_a8;
  long *********local_90;
  undefined4 local_64;
  
  lVar11 = FUN_710392e290(0x10,0xd8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (lVar11 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_310 = (byte ***)((ulong)local_310 & 0xffffffff00000000);
      local_1e0 = (long ********)&DAT_000000d8;
      param_3 = &local_1e0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_310);
      if (((uVar12 & 1) != 0) &&
         (lVar11 = FUN_710392e290(0x10,0xd8,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), lVar11 != 0)) goto LAB_7101939688;
    }
    lVar11 = 0;
  }
LAB_7101939688:
  *(undefined8 *)(lVar11 + 0x10) = 0;
  *(undefined8 *)(lVar11 + 0x18) = 0;
  *(long *)lVar11 = lVar11;
  *(undefined8 *)(lVar11 + 8) = 0;
  *(undefined4 *)(lVar11 + 0xb0) = 0xffffffff;
  *(undefined1 *)(lVar11 + 0xb4) = 0;
  *(undefined4 *)(lVar11 + 0xb8) = 2;
  *(undefined8 *)(lVar11 + 0xa0) = 0;
  *(undefined8 *)(lVar11 + 0xa8) = 0xffffffff;
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
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar21 = extraout_x1;
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_310 = (byte ***)((ulong)local_310 & 0xffffffff00000000);
      local_1e0 = (long ********)&DAT_00000080;
      param_3 = &local_1e0;
      auVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_310);
      uVar21 = auVar37._8_8_;
      if (((auVar37._0_8_ & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), uVar21 = extraout_x1_00, puVar13 != (undefined8 *)0x0))
      goto LAB_710193971c;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_710193971c:
  *puVar13 = &PTR_FUN_7105181b40;
  puVar13[2] = 0;
  puVar13[1] = puVar13 + 2;
  puVar13[5] = 0;
  puVar13[3] = 0;
  puVar13[4] = puVar13 + 5;
  puVar13[8] = 0;
  puVar13[6] = 0;
  puVar13[7] = puVar13 + 8;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  *(undefined4 *)(puVar13 + 0xd) = 2;
  *(undefined4 *)(puVar13 + 0xf) = 0;
  puVar13[0xe] = 0;
  puVar13[9] = 0;
  puVar13[10] = puVar13 + 0xb;
  *(undefined4 *)(lVar11 + 0xd0) = 0;
  *(undefined1 *)(lVar11 + 0xd4) = 0;
  *(undefined8 **)(lVar11 + 0xc0) = puVar13;
  *(undefined8 *)(lVar11 + 200) = 0;
  puVar13 = *(undefined8 **)(param_2 + 0xa8);
  if (puVar13 != (undefined8 *)0x0) {
    if (((DAT_7105324a18 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_7105324a18), iVar10 != 0))
    {
      if (((DAT_7105324748 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(&DAT_7105324748), iVar10 != 0)) {
        if (((DAT_7105324750 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(&DAT_7105324750), iVar10 != 0)) {
          DAT_7105324758 = 0;
          __cxa_guard_release(&DAT_7105324750);
        }
        DAT_7105324760 = &DAT_7105324758;
        __cxa_guard_release(&DAT_7105324748);
      }
      DAT_7105324a20 = &DAT_7105324760;
      __cxa_guard_release(&DAT_7105324a18);
    }
    auVar37 = (**(code **)*puVar13)(puVar13);
    uVar21 = auVar37._8_8_;
    for (puVar14 = auVar37._0_8_; puVar14 != (undefined8 *)0x0; puVar14 = (undefined8 *)*puVar14) {
      if ((undefined8 **)puVar14 == &DAT_7105324a20) {
        *(undefined4 *)(lVar11 + 0xd0) = *(undefined4 *)(puVar13 + 1);
        *(undefined1 *)(lVar11 + 0xd4) = *(undefined1 *)((long)puVar13 + 0xc);
        break;
      }
    }
  }
  *(code **)(lVar11 + 0x28) = FUN_71019365f0;
  *(undefined8 *)(lVar11 + 0x30) = 0;
  *(code **)(lVar11 + 0x38) = FUN_71019366f0;
  *(undefined8 *)(lVar11 + 0x40) = 0;
  *(code **)(lVar11 + 0x48) = FUN_71019394b0;
  *(undefined8 *)(lVar11 + 0x50) = 0;
  if (0x12 < *(uint *)(lVar11 + 0xa4)) goto LAB_710193b530;
  *(undefined4 *)(lVar11 + (long)(int)*(uint *)(lVar11 + 0xa4) * 4 + 0x58) = 0;
  uVar12 = *(ulong *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar11;
  if (uVar12 != 0) {
    lVar11 = *(long *)(uVar12 + 200);
    *(undefined8 *)(uVar12 + 200) = 0;
    if (lVar11 != 0) {
      FUN_71032cad20(lVar11);
      uVar21 = extraout_x1_01;
    }
    FUN_710323b9e0(*(long *)(uVar12 + 0xc0),uVar21,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar15 = *(long **)(uVar12 + 0xc0);
    *(undefined8 *)(uVar12 + 0xc0) = 0;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 8))();
    }
    FUN_710392eb40(uVar12);
    lVar11 = *(long *)(param_1 + 0x58);
  }
  plVar15 = (long *)(lVar11 + 0xc0);
  local_1e0 = (long ********)FUN_710323af70(0x7104545c50,0);
  if (((ulong)local_1e0 & 0xffffffffff) != 0) {
    lVar16 = *plVar15;
    FUN_710323c4e0(lVar16,(ulong *)&local_1e0,(long *********)(long)*(int *)(lVar16 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar16 + 0x68),param_5,param_6,param_7,param_8);
  }
  local_1e0 = (long ********)FUN_710323af70(0x71043cfb76,0);
  if (((ulong)local_1e0 & 0xffffffffff) != 0) {
    lVar16 = *plVar15;
    FUN_710323c4e0(lVar16,(ulong *)&local_1e0,(long *********)(long)*(int *)(lVar16 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar16 + 0x68),param_5,param_6,param_7,param_8);
  }
  lVar16 = *plVar15;
  FUN_710323beb0(lVar16,(ulong *)&DAT_7104545c48,(long)*(int *)(lVar16 + 0x70),
                 (ulong)*(uint *)(lVar16 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar16 = *plVar15;
  FUN_710323beb0(lVar16,(ulong *)&DAT_7104545c40,(long)*(int *)(lVar16 + 0x70),
                 (ulong)*(uint *)(lVar16 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  local_1e0 = (long ********)0x3bcbaced6c;
  lVar16 = *plVar15;
  FUN_710323beb0(lVar16,(ulong *)&local_1e0,(long)*(int *)(lVar16 + 0x70),
                 (ulong)*(uint *)(lVar16 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  local_1e0 = (long ********)0x3aac9182d3;
  lVar16 = *plVar15;
  FUN_710323beb0(lVar16,(ulong *)&local_1e0,(long)*(int *)(lVar16 + 0x70),
                 (ulong)*(uint *)(lVar16 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  local_1e0 = (long ********)0x44a86d5ece;
  lVar16 = *plVar15;
  FUN_710323beb0(lVar16,(ulong *)&local_1e0,(long)*(int *)(lVar16 + 0x70),
                 (ulong)*(uint *)(lVar16 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  local_1e0 = (long ********)0x425eaf3bd7;
  lVar16 = *plVar15;
  FUN_710323beb0(lVar16,(ulong *)&local_1e0,(long)*(int *)(lVar16 + 0x70),
                 (ulong)*(uint *)(lVar16 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  local_1e0 = (long ********)0x43c47a8e7b;
  lVar16 = *plVar15;
  FUN_710323beb0(lVar16,(ulong *)&local_1e0,(long)*(int *)(lVar16 + 0x70),
                 (ulong)*(uint *)(lVar16 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  local_1e0 = (long ********)0x43cd6764b1;
  lVar16 = *plVar15;
  FUN_710323beb0(lVar16,(ulong *)&local_1e0,(long)*(int *)(lVar16 + 0x70),
                 (ulong)*(uint *)(lVar16 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  local_1e0 = (long ********)0x46ec0fea91;
  lVar16 = *plVar15;
  FUN_710323beb0(lVar16,(ulong *)&local_1e0,(long)*(int *)(lVar16 + 0x70),
                 (ulong)*(uint *)(lVar16 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  local_1e0 = (long ********)0x4636a07137;
  lVar16 = *plVar15;
  FUN_710323beb0(lVar16,(ulong *)&local_1e0,(long)*(int *)(lVar16 + 0x70),
                 (ulong)*(uint *)(lVar16 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  local_1e0 = (long ********)0x4237962a31;
  lVar16 = *plVar15;
  FUN_710323beb0(lVar16,(ulong *)&local_1e0,(long)*(int *)(lVar16 + 0x70),
                 (ulong)*(uint *)(lVar16 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  local_1e0 = (long ********)0x49937246c0;
  lVar16 = *plVar15;
  FUN_710323beb0(lVar16,(ulong *)&local_1e0,(long)*(int *)(lVar16 + 0x70),
                 (ulong)*(uint *)(lVar16 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  local_1e0 = (long ********)0x472131298d;
  lVar16 = *plVar15;
  FUN_710323beb0(lVar16,(ulong *)&local_1e0,(long)*(int *)(lVar16 + 0x70),
                 (ulong)*(uint *)(lVar16 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  local_1e0 = (long ********)0x483d0b13b1;
  lVar16 = *plVar15;
  FUN_710323beb0(lVar16,(ulong *)&local_1e0,(long)*(int *)(lVar16 + 0x70),
                 (ulong)*(uint *)(lVar16 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  local_1e0 = (long ********)0x42e22fef68;
  lVar16 = *plVar15;
  FUN_710323beb0(lVar16,(ulong *)&local_1e0,(long)*(int *)(lVar16 + 0x70),
                 (ulong)*(uint *)(lVar16 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  local_1e0 = (long ********)0x480d9b92a1;
  lVar16 = *plVar15;
  FUN_710323beb0(lVar16,(ulong *)&local_1e0,(long)*(int *)(lVar16 + 0x70),
                 (ulong)*(uint *)(lVar16 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  local_1e0 = (long ********)0x48375ea902;
  lVar16 = *plVar15;
  FUN_710323beb0(lVar16,(ulong *)&local_1e0,(long)*(int *)(lVar16 + 0x70),
                 (ulong)*(uint *)(lVar16 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  local_1e0 = (long ********)0x4794eec677;
  lVar16 = *plVar15;
  FUN_710323beb0(lVar16,(ulong *)&local_1e0,(long)*(int *)(lVar16 + 0x70),
                 (ulong)*(uint *)(lVar16 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  local_1e0 = (long ********)0x483d4ab4e2;
  lVar16 = *plVar15;
  FUN_710323beb0(lVar16,(ulong *)&local_1e0,(long)*(int *)(lVar16 + 0x70),
                 (ulong)*(uint *)(lVar16 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  local_1e0 = (long ********)0x4aff62a21f;
  lVar16 = *plVar15;
  ppppppppplVar22 = (long *********)(long)*(int *)(lVar16 + 0x70);
  ppppbVar24 = (byte ****)(ulong)*(uint *)(lVar16 + 0x68);
  pppplVar25 = (long ****)0x1;
  FUN_710323beb0(lVar16,(ulong *)&local_1e0,(long)ppppppppplVar22,(ulong)ppppbVar24,(long ****)0x1,
                 param_6,param_7,param_8);
  puVar13 = *(undefined8 **)(*DAT_7105314510 + 0x158);
  local_350 = &PTR_FUN_710523da28;
  local_348 = (undefined8 *)
              FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar22,ppppbVar24,pppplVar25,param_6,
                             param_7,param_8);
  if (local_348 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_310 = (byte ***)((ulong)local_310 & 0xffffffff00000000);
      local_1e0 = (long ********)&DAT_00000010;
      ppppppppplVar22 = &local_1e0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_310);
      if (((uVar12 & 1) != 0) &&
         (local_348 = (undefined8 *)
                      FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar22,ppppbVar24,pppplVar25,
                                     param_6,param_7,param_8), local_348 != (undefined8 *)0x0))
      goto LAB_7101939c28;
    }
    local_348 = (undefined8 *)0x0;
  }
LAB_7101939c28:
  *local_348 = 0;
  local_348[1] = 0;
  local_340 = &PTR_FUN_710523da28;
  local_338 = (undefined8 *)
              FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar22,ppppbVar24,pppplVar25,param_6,
                             param_7,param_8);
  if (local_338 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_310 = (byte ***)((ulong)local_310 & 0xffffffff00000000);
      local_1e0 = (long ********)&DAT_00000010;
      ppppppppplVar22 = &local_1e0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_310);
      if (((uVar12 & 1) != 0) &&
         (local_338 = (undefined8 *)
                      FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar22,ppppbVar24,pppplVar25,
                                     param_6,param_7,param_8), local_338 != (undefined8 *)0x0))
      goto LAB_7101939c84;
    }
    local_338 = (undefined8 *)0x0;
  }
LAB_7101939c84:
  *local_338 = 0;
  local_338[1] = 0;
  local_330 = &PTR_FUN_710523da28;
  local_328 = (undefined8 *)
              FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar22,ppppbVar24,pppplVar25,param_6,
                             param_7,param_8);
  uVar21 = extraout_x1_02;
  if (local_328 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_310 = (byte ***)((ulong)local_310 & 0xffffffff00000000);
      local_1e0 = (long ********)&DAT_00000010;
      ppppppppplVar22 = &local_1e0;
      auVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_310);
      uVar21 = auVar37._8_8_;
      if (((auVar37._0_8_ & 1) != 0) &&
         (local_328 = (undefined8 *)
                      FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar22,ppppbVar24,pppplVar25,
                                     param_6,param_7,param_8), uVar21 = extraout_x1_03,
         local_328 != (undefined8 *)0x0)) goto LAB_7101939ce0;
    }
    local_328 = (undefined8 *)0x0;
  }
LAB_7101939ce0:
  *local_328 = 0;
  local_328[1] = 0;
  lVar33 = *(long *)*puVar13;
  __s = (void *)0x0;
  lVar16 = -0x51000;
  if (((*(ulong *)(lVar33 + 0x3d6d0) & 0xffffffffff) != 0) &&
     ((*(ulong *)(lVar33 + 0x3d6d0) & 0xff00000000000000) == 0xc100000000000000)) {
    __s = (void *)FUN_710392e290(0x10,0x51000,(long ****)ppppppppplVar22,ppppbVar24,pppplVar25,
                                 param_6,param_7,param_8);
    if (__s == (void *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_310 = (byte ***)((ulong)local_310 & 0xffffffff00000000);
        local_1e0 = (long ********)0x51000;
        ppppppppplVar22 = &local_1e0;
        uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_310);
        if (((uVar12 & 1) != 0) &&
           (__s = (void *)FUN_710392e290(0x10,0x51000,(long ****)ppppppppplVar22,ppppbVar24,
                                         pppplVar25,param_6,param_7,param_8), __s != (void *)0x0))
        goto LAB_7101939d80;
      }
      __s = (void *)0x0;
    }
LAB_7101939d80:
    memset(__s,0,0x51000);
    puVar26 = (undefined1 *)(lVar33 + 2);
    lVar33 = lVar16;
    do {
      lVar30 = lVar33 + 4;
      *(undefined1 *)((long)__s + lVar33 + 0x51000) = puVar26[-2];
      *(undefined1 *)((long)__s + lVar33 + 0x51001) = puVar26[-1];
      *(undefined1 *)((long)__s + lVar33 + 0x51002) = *puVar26;
      *(undefined1 *)((long)__s + lVar33 + 0x51003) = 0xff;
      puVar26 = puVar26 + 3;
      lVar33 = lVar30;
    } while (lVar30 != 0);
    ppppbVar24 = (byte ****)&DAT_000000d8;
    ppppppppplVar22 = (long *********)&DAT_00000180;
    pppplVar25 = (long ****)0x1;
    FUN_710377bc70(local_348,__s,(long ****)&DAT_00000180,(byte ****)&DAT_000000d8,(long ****)0x1,
                   param_6,param_7,param_8);
    lVar33 = *(long *)*puVar13;
    uVar21 = extraout_x1_04;
  }
  if ((*(ulong *)(lVar33 + 0x7add0) & 0xffffffffff) != 0 &&
      (*(ulong *)(lVar33 + 0x7add0) & 0xff00000000000000) == 0xc100000000000000) {
    if (__s == (void *)0x0) {
      __s = (void *)FUN_710392e290(0x10,0x51000,(long ****)ppppppppplVar22,ppppbVar24,pppplVar25,
                                   param_6,param_7,param_8);
      if (__s == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_310 = (byte ***)((ulong)local_310 & 0xffffffff00000000);
          local_1e0 = (long ********)0x51000;
          ppppppppplVar22 = &local_1e0;
          uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_310);
          if (((uVar12 & 1) != 0) &&
             (__s = (void *)FUN_710392e290(0x10,0x51000,(long ****)ppppppppplVar22,ppppbVar24,
                                           pppplVar25,param_6,param_7,param_8), __s != (void *)0x0))
          goto LAB_7101939e88;
        }
        __s = (void *)0x0;
      }
LAB_7101939e88:
      memset(__s,0,0x51000);
    }
    puVar26 = (undefined1 *)(lVar33 + 0x3d702);
    lVar33 = lVar16;
    do {
      lVar30 = lVar33 + 4;
      *(undefined1 *)((long)__s + lVar33 + 0x51000) = puVar26[-2];
      *(undefined1 *)((long)__s + lVar33 + 0x51001) = puVar26[-1];
      *(undefined1 *)((long)__s + lVar33 + 0x51002) = *puVar26;
      *(undefined1 *)((long)__s + lVar33 + 0x51003) = 0xff;
      puVar26 = puVar26 + 3;
      lVar33 = lVar30;
    } while (lVar30 != 0);
    ppppbVar24 = (byte ****)&DAT_000000d8;
    ppppppppplVar22 = (long *********)&DAT_00000180;
    pppplVar25 = (long ****)0x1;
    FUN_710377bc70(local_338,__s,(long ****)&DAT_00000180,(byte ****)&DAT_000000d8,(long ****)0x1,
                   param_6,param_7,param_8);
    lVar33 = *(long *)*puVar13;
    uVar21 = extraout_x1_05;
  }
  if ((*(ulong *)(lVar33 + 0xb84d0) & 0xffffffffff) != 0 &&
      (*(ulong *)(lVar33 + 0xb84d0) & 0xff00000000000000) == 0xc100000000000000) {
    if (__s == (void *)0x0) {
      __s = (void *)FUN_710392e290(0x10,0x51000,(long ****)ppppppppplVar22,ppppbVar24,pppplVar25,
                                   param_6,param_7,param_8);
      if (__s == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_310 = (byte ***)((ulong)local_310 & 0xffffffff00000000);
          local_1e0 = (long ********)0x51000;
          ppppppppplVar22 = &local_1e0;
          uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_310);
          if (((uVar12 & 1) != 0) &&
             (__s = (void *)FUN_710392e290(0x10,0x51000,(long ****)ppppppppplVar22,ppppbVar24,
                                           pppplVar25,param_6,param_7,param_8), __s != (void *)0x0))
          goto LAB_7101939f98;
        }
        __s = (void *)0x0;
      }
LAB_7101939f98:
      memset(__s,0,0x51000);
    }
    puVar26 = (undefined1 *)(lVar33 + 0x7ae02);
    do {
      lVar33 = lVar16 + 4;
      *(undefined1 *)((long)__s + lVar16 + 0x51000) = puVar26[-2];
      *(undefined1 *)((long)__s + lVar16 + 0x51001) = puVar26[-1];
      *(undefined1 *)((long)__s + lVar16 + 0x51002) = *puVar26;
      *(undefined1 *)((long)__s + lVar16 + 0x51003) = 0xff;
      puVar26 = puVar26 + 3;
      lVar16 = lVar33;
    } while (lVar33 != 0);
    ppppbVar24 = (byte ****)&DAT_000000d8;
    ppppppppplVar22 = (long *********)&DAT_00000180;
    pppplVar25 = (long ****)0x1;
    FUN_710377bc70(local_328,__s,(long ****)&DAT_00000180,(byte ****)&DAT_000000d8,(long ****)0x1,
                   param_6,param_7,param_8);
    uVar21 = extraout_x1_06;
  }
  lVar16 = *plVar15;
  uVar12 = FUN_710323cb80(lVar16,uVar21,ppppppppplVar22,ppppbVar24,pppplVar25,param_6,param_7,
                          param_8);
  while ((uVar12 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar12 = FUN_710323cb80(lVar16,extraout_x1_07,ppppppppplVar22,ppppbVar24,pppplVar25,param_6,
                            param_7,param_8);
  }
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar22,ppppbVar24,pppplVar25,param_6,
                           param_7,param_8);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_310 = (byte ***)((ulong)local_310 & 0xffffffff00000000);
      local_1e0 = (long ********)&DAT_00000088;
      ppppppppplVar22 = &local_1e0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_310);
      if (((uVar12 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar22,ppppbVar24,pppplVar25,
                                   param_6,param_7,param_8), puVar13 != (undefined8 *)0x0))
      goto LAB_710193a0a8;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_710193a0a8:
  *puVar13 = &PTR_FUN_71050b2228;
  puVar13[1] = 0;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0x1ffffffff;
  puVar13[2] = 0;
  puVar13[3] = 0;
  *(undefined1 *)(puVar13 + 0xb) = 0;
  puVar13[0xf] = plVar15;
  *(undefined1 *)(puVar13 + 0xe) = 1;
  puVar13[9] = 0;
  puVar13[10] = 0;
  puVar14 = (undefined8 *)
            FUN_710392e290(0x10,0x1e0,(long ****)ppppppppplVar22,ppppbVar24,pppplVar25,param_6,
                           param_7,param_8);
  if (puVar14 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_310 = (byte ***)((ulong)local_310 & 0xffffffff00000000);
      local_1e0 = (long ********)&DAT_000001e0;
      ppppppppplVar22 = &local_1e0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_310);
      if (((uVar12 & 1) != 0) &&
         (puVar14 = (undefined8 *)
                    FUN_710392e290(0x10,0x1e0,(long ****)ppppppppplVar22,ppppbVar24,pppplVar25,
                                   param_6,param_7,param_8), puVar14 != (undefined8 *)0x0))
      goto LAB_710193a130;
    }
    puVar14 = (undefined8 *)0x0;
  }
LAB_710193a130:
  puVar27 = puVar14 + 1;
  *puVar14 = plVar15;
  puVar17 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)ppppppppplVar22,ppppbVar24,pppplVar25,param_6,param_7,
                           param_8);
  uVar21 = extraout_x1_08;
  if (puVar17 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_310 = (byte ***)((ulong)local_310 & 0xffffffff00000000);
      local_1e0 = (long ********)&DAT_00000008;
      ppppppppplVar22 = &local_1e0;
      auVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_310);
      uVar21 = auVar37._8_8_;
      if (((auVar37._0_8_ & 1) != 0) &&
         (puVar17 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)ppppppppplVar22,ppppbVar24,pppplVar25,param_6,
                                   param_7,param_8), uVar21 = extraout_x1_09,
         puVar17 != (undefined8 *)0x0)) goto LAB_710193a198;
    }
    puVar17 = (undefined8 *)0x0;
  }
LAB_710193a198:
  FUN_7103773200(puVar17,uVar21,(long ****)ppppppppplVar22,ppppbVar24,pppplVar25,param_6,param_7,
                 param_8);
  puVar1 = puVar14 + 2;
  puVar14[1] = puVar17;
  FUN_7103776290(puVar1,extraout_x1_10,(long ****)ppppppppplVar22,ppppbVar24,pppplVar25,param_6,
                 param_7,param_8);
  plVar35 = puVar14 + 4;
  *plVar35 = 0;
  plVar34 = puVar14 + 5;
  *plVar34 = 0;
  puVar14[6] = &PTR_FUN_710523da28;
  puVar17 = (undefined8 *)
            FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar22,ppppbVar24,pppplVar25,param_6,
                           param_7,param_8);
  if (puVar17 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_310 = (byte ***)((ulong)local_310 & 0xffffffff00000000);
      local_1e0 = (long ********)&DAT_00000010;
      ppppppppplVar22 = &local_1e0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_310);
      if (((uVar12 & 1) != 0) &&
         (puVar17 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar22,ppppbVar24,pppplVar25,
                                   param_6,param_7,param_8), puVar17 != (undefined8 *)0x0))
      goto LAB_710193a218;
    }
    puVar17 = (undefined8 *)0x0;
  }
LAB_710193a218:
  *puVar17 = 0;
  puVar17[1] = 0;
  puVar14[7] = puVar17;
  puVar14[8] = &PTR_FUN_710523da28;
  puVar17 = (undefined8 *)
            FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar22,ppppbVar24,pppplVar25,param_6,
                           param_7,param_8);
  if (puVar17 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_310 = (byte ***)((ulong)local_310 & 0xffffffff00000000);
      local_1e0 = (long ********)&DAT_00000010;
      ppppppppplVar22 = &local_1e0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_310);
      if (((uVar12 & 1) != 0) &&
         (puVar17 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar22,ppppbVar24,pppplVar25,
                                   param_6,param_7,param_8), puVar17 != (undefined8 *)0x0))
      goto LAB_710193a278;
    }
    puVar17 = (undefined8 *)0x0;
  }
LAB_710193a278:
  *puVar17 = 0;
  puVar17[1] = 0;
  puVar14[9] = puVar17;
  puVar14[10] = &PTR_FUN_710523da28;
  puVar17 = (undefined8 *)
            FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar22,ppppbVar24,pppplVar25,param_6,
                           param_7,param_8);
  if (puVar17 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_310 = (byte ***)((ulong)local_310 & 0xffffffff00000000);
      local_1e0 = (long ********)&DAT_00000010;
      ppppppppplVar22 = &local_1e0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_310);
      if (((uVar12 & 1) != 0) &&
         (puVar17 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar22,ppppbVar24,pppplVar25,
                                   param_6,param_7,param_8), puVar17 != (undefined8 *)0x0))
      goto LAB_710193a2d4;
    }
    puVar17 = (undefined8 *)0x0;
  }
LAB_710193a2d4:
  *puVar17 = 0;
  puVar17[1] = 0;
  puVar14[0xb] = puVar17;
  puVar14[0xc] = 0;
  *(undefined4 *)((long)puVar14 + 0x19c) = 0;
  puVar14[0xd] = puVar14;
  puVar14[0x34] = 0xffffffff;
  *(undefined4 *)(puVar14 + 0x35) = 0xffffffff;
  *(undefined1 *)((long)puVar14 + 0x1ac) = 0;
  puVar14[0x10] = 0;
  puVar14[0x11] = 0;
  puVar14[0xe] = 0;
  puVar14[0xf] = 0;
  memset(puVar14 + 0x12,0,0x10c);
  *(undefined1 *)(puVar14 + 0x36) = 0;
  *(undefined4 *)(puVar14 + 0x3b) = 0;
  puVar14[0x39] = 0;
  puVar14[0x3a] = 0;
  puVar14[0x37] = 0;
  puVar14[0x38] = 0;
  FUN_71032cbf30(puVar27,*(long *)*puVar14,(ulong *)&DAT_7104545c48,(byte ****)0x1,pppplVar25,
                 param_6,param_7,param_8);
  lVar16 = *(long *)puVar14[1];
  if ((undefined8 *)(lVar16 + 8) != puVar1) {
    *(undefined8 *)puVar14[3] = **(undefined8 **)(lVar16 + 0x10);
    *(undefined8 *)(puVar14[3] + 8) = *(undefined8 *)(*(long *)(lVar16 + 0x10) + 8);
    lVar33 = *(long *)(lVar16 + 0x10);
    lVar16 = puVar14[3];
    if (lVar16 != lVar33) {
      **(undefined8 **)(lVar16 + 0x18) = **(undefined8 **)(lVar33 + 0x18);
      *(undefined8 *)(*(long *)(lVar16 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar33 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar16 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar33 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar16 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar33 + 0x18) + 0x18);
    }
  }
  lVar16 = **(long **)*puVar27;
  *(undefined4 *)(*(long *)(lVar16 + 0x600) + 0x18) = 0xbfffffff;
  *(undefined4 *)(*(long *)(lVar16 + 0x600) + 0xe4) = 0x40;
  local_1d6 = 0;
  local_1c8 = &DAT_41f0000000000000;
  local_1d2 = 0;
  local_1d0 = 1;
  local_1cc = 1;
  local_1ca = 1;
  local_1c0 = 0;
  local_190 = (long *)0x0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_c0 = 0;
  local_1e0 = (long ********)0x0;
  local_1d8 = 0x101;
  FUN_7101989b70(&local_310,&local_1e0);
  FUN_710337df20((long)&local_310);
  local_b0 = (long ********)&PTR_FUN_71050b2198;
  local_90 = &local_b0;
  FUN_7101989a30((long *)&local_b0,alStack_2b0);
  if (&local_b0 == local_90) {
    ppppppplVar28 = (*local_90)[4];
LAB_710193a488:
    (*(code *)ppppppplVar28)();
  }
  else if (local_90 != (long *********)0x0) {
    ppppppplVar28 = (*local_90)[5];
    goto LAB_710193a488;
  }
  ppppbVar24 = &local_310;
  FUN_7103770b30(plVar35,puVar1,(long ****)"selector_00",ppppbVar24,pppplVar25,param_6,param_7,
                 param_8);
  FUN_71037717d0(plVar35,0,"set_parts_btn_00",ppppbVar24,pppplVar25,param_6,param_7,param_8);
  lVar16 = *(long *)(*plVar35 + 0x1b8);
  if (lVar16 != 0) {
    lVar33 = *plVar35 + 0x1b8;
    lVar30 = lVar33;
    lVar31 = lVar16;
    do {
      bVar9 = *(int *)(lVar31 + 0x20) < 0;
      if (!bVar9) {
        lVar30 = lVar31;
      }
      lVar31 = *(long *)(lVar31 + (ulong)bVar9 * 8);
    } while (lVar31 != 0);
    if (((lVar30 != lVar33) && (*(int *)(lVar30 + 0x20) < 1)) &&
       (plVar36 = *(long **)(lVar30 + 0x28), plVar36 != (long *)0x0)) {
      (**(code **)(*plVar36 + 0x1f8))(plVar36,1);
      (**(code **)(*plVar36 + 0x388))(plVar36,0,0);
      lVar33 = *plVar35 + 0x1b8;
      lVar16 = *(long *)(*plVar35 + 0x1b8);
    }
    lVar30 = lVar33;
    if (lVar16 != 0) {
      do {
        bVar9 = *(int *)(lVar16 + 0x20) < 0;
        if (!bVar9) {
          lVar30 = lVar16;
        }
        lVar16 = *(long *)(lVar16 + (ulong)bVar9 * 8);
      } while (lVar16 != 0);
      if (((lVar30 != lVar33) && (*(int *)(lVar30 + 0x20) < 1)) &&
         (plVar36 = *(long **)(lVar30 + 0x28), plVar36 != (long *)0x0)) {
        (**(code **)(*plVar36 + 0x208))(plVar36,1);
        (**(code **)(*plVar36 + 0x388))(plVar36,0,0);
      }
    }
  }
  FUN_71037717d0(plVar35,1,"set_parts_btn_01",ppppbVar24,pppplVar25,param_6,param_7,param_8);
  lVar16 = *(long *)(*plVar35 + 0x1b8);
  if (lVar16 != 0) {
    lVar33 = *plVar35 + 0x1b8;
    lVar30 = lVar33;
    lVar31 = lVar16;
    do {
      if (0 < *(int *)(lVar31 + 0x20)) {
        lVar30 = lVar31;
      }
      lVar31 = *(long *)(lVar31 + (ulong)(*(int *)(lVar31 + 0x20) < 1) * 8);
    } while (lVar31 != 0);
    if (((lVar30 != lVar33) && (*(int *)(lVar30 + 0x20) < 2)) &&
       (plVar36 = *(long **)(lVar30 + 0x28), plVar36 != (long *)0x0)) {
      (**(code **)(*plVar36 + 0x1f8))(plVar36,1);
      (**(code **)(*plVar36 + 0x388))(plVar36,0,0);
      lVar33 = *plVar35 + 0x1b8;
      lVar16 = *(long *)(*plVar35 + 0x1b8);
    }
    lVar30 = lVar33;
    if (lVar16 != 0) {
      do {
        if (0 < *(int *)(lVar16 + 0x20)) {
          lVar30 = lVar16;
        }
        lVar16 = *(long *)(lVar16 + (ulong)(*(int *)(lVar16 + 0x20) < 1) * 8);
      } while (lVar16 != 0);
      if (((lVar30 != lVar33) && (*(int *)(lVar30 + 0x20) < 2)) &&
         (plVar36 = *(long **)(lVar30 + 0x28), plVar36 != (long *)0x0)) {
        (**(code **)(*plVar36 + 0x208))(plVar36,1);
        (**(code **)(*plVar36 + 0x388))(plVar36,0,0);
      }
    }
  }
  FUN_71037717d0(plVar35,2,"set_parts_btn_02",ppppbVar24,pppplVar25,param_6,param_7,param_8);
  lVar16 = *(long *)(*plVar35 + 0x1b8);
  if (lVar16 != 0) {
    lVar33 = *plVar35 + 0x1b8;
    lVar30 = lVar33;
    lVar31 = lVar16;
    do {
      if (1 < *(int *)(lVar31 + 0x20)) {
        lVar30 = lVar31;
      }
      lVar31 = *(long *)(lVar31 + (ulong)(*(int *)(lVar31 + 0x20) < 2) * 8);
    } while (lVar31 != 0);
    if (((lVar30 != lVar33) && (*(int *)(lVar30 + 0x20) < 3)) &&
       (plVar36 = *(long **)(lVar30 + 0x28), plVar36 != (long *)0x0)) {
      (**(code **)(*plVar36 + 0x1f8))(plVar36,1);
      (**(code **)(*plVar36 + 0x388))(plVar36,0,0);
      lVar33 = *plVar35 + 0x1b8;
      lVar16 = *(long *)(*plVar35 + 0x1b8);
    }
    lVar30 = lVar33;
    if (lVar16 != 0) {
      do {
        if (1 < *(int *)(lVar16 + 0x20)) {
          lVar30 = lVar16;
        }
        lVar16 = *(long *)(lVar16 + (ulong)(*(int *)(lVar16 + 0x20) < 2) * 8);
      } while (lVar16 != 0);
      if (((lVar30 != lVar33) && (*(int *)(lVar30 + 0x20) < 3)) &&
         (plVar36 = *(long **)(lVar30 + 0x28), plVar36 != (long *)0x0)) {
        (**(code **)(*plVar36 + 0x208))(plVar36,1);
        (**(code **)(*plVar36 + 0x388))(plVar36,0,0);
      }
    }
  }
  FUN_7103771a80(plVar35,0,0);
  (**(code **)(*(long *)*plVar35 + 0x60))((long *)*plVar35,0);
  (**(code **)(*(long *)*plVar35 + 0x70))((long *)*plVar35,1);
  if (alStack_220 == local_200) {
    pcVar29 = *(code **)(*local_200 + 0x20);
LAB_710193a808:
    (*pcVar29)();
  }
  else if (local_200 != (long *)0x0) {
    pcVar29 = *(code **)(*local_200 + 0x28);
    goto LAB_710193a808;
  }
  if (alStack_250 == local_230) {
    pcVar29 = *(code **)(*local_230 + 0x20);
LAB_710193a838:
    (*pcVar29)();
  }
  else if (local_230 != (long *)0x0) {
    pcVar29 = *(code **)(*local_230 + 0x28);
    goto LAB_710193a838;
  }
  if (alStack_280 == local_260) {
    pcVar29 = *(code **)(*local_260 + 0x20);
LAB_710193a868:
    (*pcVar29)();
  }
  else if (local_260 != (long *)0x0) {
    pcVar29 = *(code **)(*local_260 + 0x28);
    goto LAB_710193a868;
  }
  if (alStack_2b0 == local_290) {
    pcVar29 = *(code **)(*local_290 + 0x20);
LAB_710193a898:
    (*pcVar29)();
  }
  else if (local_290 != (long *)0x0) {
    pcVar29 = *(code **)(*local_290 + 0x28);
    goto LAB_710193a898;
  }
  if (alStack_2e0 == local_2c0) {
    pcVar29 = *(code **)(*local_2c0 + 0x20);
LAB_710193a8c8:
    (*pcVar29)();
  }
  else if (local_2c0 != (long *)0x0) {
    pcVar29 = *(code **)(*local_2c0 + 0x28);
    goto LAB_710193a8c8;
  }
  FUN_7101989b70(&local_310,&local_1e0);
  FUN_710337df20((long)&local_310);
  local_b0 = (long ********)&PTR_FUN_71050b21e0;
  local_90 = &local_b0;
  FUN_7101989a30((long *)&local_b0,alStack_250);
  if (&local_b0 == local_90) {
    (*(code *)(*local_90)[4])();
  }
  else if (local_90 != (long *********)0x0) {
    (*(code *)(*local_90)[5])();
  }
  ppppbVar24 = &local_310;
  FUN_7103770b30(plVar34,puVar1,(long ****)"selector_01",ppppbVar24,pppplVar25,param_6,param_7,
                 param_8);
  FUN_71037717d0(plVar34,0,"btn_press_any",ppppbVar24,pppplVar25,param_6,param_7,param_8);
  lVar16 = *(long *)(*plVar34 + 0x1b8);
  if (lVar16 != 0) {
    lVar33 = *plVar34 + 0x1b8;
    lVar30 = lVar33;
    lVar31 = lVar16;
    do {
      bVar9 = *(int *)(lVar31 + 0x20) < 0;
      if (!bVar9) {
        lVar30 = lVar31;
      }
      lVar31 = *(long *)(lVar31 + (ulong)bVar9 * 8);
    } while (lVar31 != 0);
    if (((lVar30 != lVar33) && (*(int *)(lVar30 + 0x20) < 1)) &&
       (plVar35 = *(long **)(lVar30 + 0x28), plVar35 != (long *)0x0)) {
      (**(code **)(*plVar35 + 0x1f8))(plVar35,1);
      (**(code **)(*plVar35 + 0x388))(plVar35,0,0);
      lVar33 = *plVar34 + 0x1b8;
      lVar16 = *(long *)(*plVar34 + 0x1b8);
    }
    lVar30 = lVar33;
    if (lVar16 != 0) {
      do {
        bVar9 = *(int *)(lVar16 + 0x20) < 0;
        if (!bVar9) {
          lVar30 = lVar16;
        }
        lVar16 = *(long *)(lVar16 + (ulong)bVar9 * 8);
      } while (lVar16 != 0);
      if (((lVar30 != lVar33) && (*(int *)(lVar30 + 0x20) < 1)) &&
         (plVar35 = *(long **)(lVar30 + 0x28), plVar35 != (long *)0x0)) {
        (**(code **)(*plVar35 + 0x208))(plVar35,1);
        (**(code **)(*plVar35 + 0x388))(plVar35,0,0);
      }
    }
  }
  FUN_7103771a80(plVar34,0,0);
  ppppbVar24 = (byte ****)0x0;
  FUN_7103771930(*plVar34,0,(long ****)0x6,(byte ****)0x0,pppplVar25,param_6,param_7,param_8);
  local_b0 = (long ********)0x11f3524d38;
  ppppppppplVar22 = &local_b0;
  FUN_7103772070(*plVar34,0,(long ****)ppppppppplVar22,ppppbVar24,pppplVar25,param_6,param_7,param_8
                );
  (**(code **)(*(long *)*plVar34 + 0x60))((long *)*plVar34,0);
  (**(code **)(*(long *)*plVar34 + 0x70))((long *)*plVar34,1);
  if (alStack_220 == local_200) {
    pcVar29 = *(code **)(*local_200 + 0x20);
LAB_710193aae8:
    (*pcVar29)();
  }
  else if (local_200 != (long *)0x0) {
    pcVar29 = *(code **)(*local_200 + 0x28);
    goto LAB_710193aae8;
  }
  if (alStack_250 == local_230) {
    pcVar29 = *(code **)(*local_230 + 0x20);
LAB_710193ab18:
    (*pcVar29)();
  }
  else if (local_230 != (long *)0x0) {
    pcVar29 = *(code **)(*local_230 + 0x28);
    goto LAB_710193ab18;
  }
  if (alStack_280 == local_260) {
    pcVar29 = *(code **)(*local_260 + 0x20);
LAB_710193ab48:
    (*pcVar29)();
  }
  else if (local_260 != (long *)0x0) {
    pcVar29 = *(code **)(*local_260 + 0x28);
    goto LAB_710193ab48;
  }
  if (alStack_2b0 == local_290) {
    pcVar29 = *(code **)(*local_290 + 0x20);
LAB_710193ab78:
    (*pcVar29)();
  }
  else if (local_290 != (long *)0x0) {
    pcVar29 = *(code **)(*local_290 + 0x28);
    goto LAB_710193ab78;
  }
  if (alStack_2e0 == local_2c0) {
    pcVar29 = *(code **)(*local_2c0 + 0x20);
LAB_710193aba8:
    (*pcVar29)();
  }
  else if (local_2c0 != (long *)0x0) {
    pcVar29 = *(code **)(*local_2c0 + 0x28);
    goto LAB_710193aba8;
  }
  FUN_7103778300(0x3f800000,puVar14[3],0x71043adebc);
  if (*(char *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x158) + 0xb8500) == '\0') {
    pcVar20 = "chr_l_off";
  }
  else {
    pcVar20 = "chr_l_on";
  }
  FUN_7103778300(0x3f800000,puVar14[3],(long)pcVar20);
  lVar16 = *(long *)puVar14[3];
  if (lVar16 != 0) {
    (**(code **)(**(long **)(lVar16 + 0x458) + 0x58))(*(float *)(lVar16 + 0x640) * 0.0);
    puVar32 = *(undefined8 **)(lVar16 + 0x468);
    for (puVar17 = *(undefined8 **)(lVar16 + 0x460); puVar17 != puVar32; puVar17 = puVar17 + 1) {
      plVar34 = (long *)*puVar17;
      uVar12 = (**(code **)(*plVar34 + 0x40))(plVar34);
      if ((uVar12 & 1) != 0) {
        (**(code **)(*plVar34 + 0x20))(plVar34);
      }
    }
  }
  FUN_7103778300(0x3f800000,puVar14[3],0x71043f0fa9);
  FUN_7103778300(0x3f800000,puVar14[3],0x710432a70e);
  puVar14[0x12] = FUN_7101e92380;
  puVar14[0x13] = 0;
  puVar14[0x16] = FUN_7101e92550;
  puVar14[0x17] = 0;
  puVar14[0x18] = FUN_7101e925d0;
  puVar14[0x19] = 0;
  puVar14[0x1c] = FUN_7101e92750;
  puVar14[0x1d] = 0;
  puVar14[0x1e] = FUN_7101e928e0;
  puVar14[0x1f] = 0;
  puVar14[0x22] = FUN_7101e930d0;
  puVar14[0x23] = 0;
  puVar14[0x24] = FUN_7101e93180;
  puVar14[0x25] = 0;
  puVar14[0x14] = FUN_7101e92390;
  puVar14[0x15] = 0;
  puVar14[0x1a] = FUN_7101e92700;
  puVar14[0x1b] = 0;
  puVar14[0x20] = FUN_7101e92b80;
  puVar14[0x21] = 0;
  puVar14[0x26] = FUN_7101e931f0;
  puVar14[0x27] = 0;
  puVar14[0x28] = FUN_7101e932f0;
  puVar14[0x29] = 0;
  if (0x12 < *(uint *)((long)puVar14 + 0x19c)) {
LAB_710193b530:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)((long)puVar14 + (long)(int)*(uint *)((long)puVar14 + 0x19c) * 4 + 0x150) = 0;
  puVar17 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar22,ppppbVar24,pppplVar25,param_6,
                           param_7,param_8);
  if (puVar17 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (long ********)((ulong)local_b0 & 0xffffffff00000000);
      local_310 = (byte ***)&DAT_00000088;
      ppppbVar18 = &local_310;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar12 & 1) != 0) &&
         (puVar17 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,(long ****)ppppbVar18,ppppbVar24,pppplVar25,param_6,
                                   param_7,param_8), puVar17 != (undefined8 *)0x0))
      goto LAB_710193ad9c;
    }
    puVar17 = (undefined8 *)0x0;
  }
LAB_710193ad9c:
  pppplVar23 = (long ****)0x1;
  FUN_7101e8ebe0(puVar17,plVar15,(byte ****)0x1,ppppbVar24,pppplVar25,param_6,param_7,param_8);
  puVar17[2] = &DAT_7105333600;
  *(undefined4 *)(puVar17 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar17 + 0x6c) = DAT_7105333664;
  do {
    uVar8 = DAT_7105333650;
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar9) {
      DAT_7105333650 = 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0' || (uVar8 & 1) != 0);
  puVar17[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar17;
  FUN_71032caea0((long)puVar17,extraout_x1_11,pppplVar23,ppppbVar24,pppplVar25,param_6,param_7,
                 param_8);
  lVar16 = puVar14[0xc];
  puVar14[0xc] = puVar17;
  if (lVar16 != 0) {
    FUN_71032cad20(lVar16);
    puVar17 = (undefined8 *)puVar14[0xc];
  }
  ppppppppplVar22 = (long *********)0x0;
  *(undefined1 *)(puVar17 + 0xe) = 1;
  ppppbVar18 = (byte ****)
               FUN_7103240d30(plVar15,0x7104545c50,(long ****)0x0,ppppbVar24,pppplVar25,param_6,
                              param_7,param_8);
  local_310 = (byte ***)&PTR_FUN_710523da08;
  local_308 = (undefined8 *)
              FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar22,ppppbVar24,pppplVar25,param_6,
                             param_7,param_8);
  if (local_308 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_320 = (long ********)((ulong)local_320 & 0xffffffff00000000);
      local_b0 = (long ********)&DAT_00000010;
      ppppppppplVar22 = &local_b0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_320);
      if (((uVar12 & 1) != 0) &&
         (local_308 = (undefined8 *)
                      FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar22,ppppbVar24,pppplVar25,
                                     param_6,param_7,param_8), local_308 != (undefined8 *)0x0))
      goto LAB_710193aea4;
    }
    local_308 = (undefined8 *)0x0;
  }
LAB_710193aea4:
  *local_308 = 0;
  local_308[1] = 0;
  if (&local_310 != ppppbVar18) {
    ppbVar4 = *ppppbVar18[1];
    ppbVar5 = ppppbVar18[1][1];
    if (ppbVar5 == (byte **)0x0) {
      *local_308 = ppbVar4;
      local_308[1] = 0;
    }
    else {
      ppbVar2 = ppbVar5 + 1;
      do {
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ppbVar2,0x10);
        if (bVar9) {
          *ppbVar2 = *ppbVar2 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      plVar34 = (long *)local_308[1];
      *local_308 = ppbVar4;
      local_308[1] = ppbVar5;
      if (plVar34 != (long *)0x0) {
        plVar35 = plVar34 + 1;
        do {
          lVar16 = *plVar35;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar35,0x10);
          if (bVar9) {
            *plVar35 = lVar16 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar34 + 0x10))(plVar34);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  FUN_7103776910(&local_b0,(long)puVar1,(long ****)"set_rep_maintitle",ppppppppplVar22,ppppbVar24,
                 pppplVar25,param_6,param_7,param_8);
  puVar17 = local_a8;
  FUN_7103778b80((long)local_a8,(long)&local_310,ppppppppplVar22,ppppbVar24,pppplVar25,param_6,
                 param_7,param_8);
  local_b0 = (long ********)&PTR_FUN_710523d9a8;
  local_a8 = (undefined8 *)0x0;
  if (puVar17 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar17);
  }
  ppppppppplVar22 = (long *********)0x0;
  ppppppppplVar19 =
       (long *********)
       FUN_7103240d30(plVar15,0x71043cfb76,(long ****)0x0,ppppbVar24,pppplVar25,param_6,param_7,
                      param_8);
  local_b0 = (long ********)&PTR_FUN_710523da08;
  puVar17 = (undefined8 *)
            FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar22,ppppbVar24,pppplVar25,param_6,
                           param_7,param_8);
  if (puVar17 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_320 = (long ********)&DAT_00000010;
      ppppppppplVar22 = &local_320;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar12 & 1) != 0) &&
         (puVar17 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar22,ppppbVar24,pppplVar25,
                                   param_6,param_7,param_8), puVar17 != (undefined8 *)0x0))
      goto LAB_710193afc8;
    }
    puVar17 = (undefined8 *)0x0;
  }
LAB_710193afc8:
  *puVar17 = 0;
  puVar17[1] = 0;
  local_a8 = puVar17;
  if (&local_b0 != ppppppppplVar19) {
    ppppppplVar28 = *ppppppppplVar19[1];
    ppppppplVar6 = ppppppppplVar19[1][1];
    if (ppppppplVar6 == (long *******)0x0) {
      *puVar17 = ppppppplVar28;
      puVar17[1] = 0;
    }
    else {
      ppppppplVar3 = ppppppplVar6 + 1;
      do {
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ppppppplVar3,0x10);
        if (bVar9) {
          *ppppppplVar3 = (long ******)((long)*ppppppplVar3 + 1);
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      plVar15 = (long *)puVar17[1];
      *puVar17 = ppppppplVar28;
      puVar17[1] = ppppppplVar6;
      if (plVar15 != (long *)0x0) {
        plVar34 = plVar15 + 1;
        do {
          lVar16 = *plVar34;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar34,0x10);
          if (bVar9) {
            *plVar34 = lVar16 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  FUN_7103776910(&local_320,(long)puVar1,(long ****)"set_rep_subtitle",ppppppppplVar22,ppppbVar24,
                 pppplVar25,param_6,param_7,param_8);
  uVar12 = local_318;
  FUN_7103778b80(local_318,(long)&local_b0,ppppppppplVar22,ppppbVar24,pppplVar25,param_6,param_7,
                 param_8);
  local_320 = (long ********)&PTR_FUN_710523d9a8;
  local_318 = 0;
  if (uVar12 != 0) {
    FUN_710392eb40(uVar12);
  }
  pppplVar23 = (long ****)&DAT_00001000;
  FUN_7103775dc0(*(long **)*puVar27,0,(long ****)&DAT_00001000,ppppbVar24,pppplVar25,param_6,param_7
                 ,param_8);
  puVar17 = local_a8;
  local_b0 = (long ********)&PTR_FUN_710523da08;
  local_a8 = (undefined8 *)0x0;
  uVar21 = extraout_x1_12;
  if (puVar17 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar17[1];
    *puVar17 = 0;
    puVar17[1] = 0;
    if (plVar15 != (long *)0x0) {
      plVar34 = plVar15 + 1;
      do {
        lVar16 = *plVar34;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar34,0x10);
        if (bVar9) {
          *plVar34 = lVar16 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        std::__shared_weak_count::__release_weak();
      }
      plVar15 = (long *)puVar17[1];
      if (plVar15 != (long *)0x0) {
        plVar34 = plVar15 + 1;
        do {
          lVar16 = *plVar34;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar34,0x10);
          if (bVar9) {
            *plVar34 = lVar16 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    FUN_710392eb40((ulong)puVar17);
    uVar21 = extraout_x1_13;
  }
  puVar17 = local_308;
  local_310 = (byte ***)&PTR_FUN_710523da08;
  local_308 = (undefined8 *)0x0;
  if (puVar17 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar17[1];
    *puVar17 = 0;
    puVar17[1] = 0;
    if (plVar15 != (long *)0x0) {
      plVar34 = plVar15 + 1;
      do {
        lVar16 = *plVar34;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar34,0x10);
        if (bVar9) {
          *plVar34 = lVar16 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        std::__shared_weak_count::__release_weak();
      }
      plVar15 = (long *)puVar17[1];
      if (plVar15 != (long *)0x0) {
        plVar34 = plVar15 + 1;
        do {
          lVar16 = *plVar34;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar34,0x10);
          if (bVar9) {
            *plVar34 = lVar16 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    FUN_710392eb40((ulong)puVar17);
    uVar21 = extraout_x1_14;
  }
  if (alStack_f0 == local_d0) {
    (**(code **)(*local_d0 + 0x20))();
    uVar21 = extraout_x1_16;
  }
  else if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x28))();
    uVar21 = extraout_x1_15;
  }
  if (alStack_120 == local_100) {
    pcVar29 = *(code **)(*local_100 + 0x20);
LAB_710193b21c:
    (*pcVar29)();
    uVar21 = extraout_x1_17;
  }
  else if (local_100 != (long *)0x0) {
    pcVar29 = *(code **)(*local_100 + 0x28);
    goto LAB_710193b21c;
  }
  if (alStack_150 == local_130) {
    pcVar29 = *(code **)(*local_130 + 0x20);
LAB_710193b24c:
    (*pcVar29)();
    uVar21 = extraout_x1_18;
  }
  else if (local_130 != (long *)0x0) {
    pcVar29 = *(code **)(*local_130 + 0x28);
    goto LAB_710193b24c;
  }
  if (alStack_180 == local_160) {
    pcVar29 = *(code **)(*local_160 + 0x20);
LAB_710193b27c:
    (*pcVar29)();
    uVar21 = extraout_x1_19;
  }
  else if (local_160 != (long *)0x0) {
    pcVar29 = *(code **)(*local_160 + 0x28);
    goto LAB_710193b27c;
  }
  if (alStack_1b0 == local_190) {
    pcVar29 = *(code **)(*local_190 + 0x20);
  }
  else {
    if (local_190 == (long *)0x0) goto LAB_710193b2b0;
    pcVar29 = *(code **)(*local_190 + 0x28);
  }
  (*pcVar29)();
  uVar21 = extraout_x1_20;
LAB_710193b2b0:
  puVar13[0x10] = puVar14;
  puVar13[2] = &DAT_7105333600;
  *(undefined4 *)(puVar13 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar13 + 0x6c) = DAT_7105333664;
  do {
    uVar8 = DAT_7105333650;
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar9) {
      DAT_7105333650 = 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0' || (uVar8 & 1) != 0);
  puVar13[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar13;
  FUN_71032caea0((long)puVar13,uVar21,pppplVar23,ppppbVar24,pppplVar25,param_6,param_7,param_8);
  lVar16 = *(long *)(lVar11 + 200);
  *(undefined8 **)(lVar11 + 200) = puVar13;
  if (lVar16 != 0) {
    FUN_71032cad20(lVar16);
    puVar13 = *(undefined8 **)(lVar11 + 200);
  }
  *(undefined1 *)(puVar13 + 0xe) = 1;
  FUN_7101e93d00(*(long *)(*(long *)(lVar11 + 200) + 0x80),(long)&local_350,pppplVar23,ppppbVar24,
                 pppplVar25,param_6,param_7,param_8);
  if (__s != (void *)0x0) {
    FUN_710392eb40((ulong)__s);
  }
  puVar13 = local_328;
  local_330 = &PTR_FUN_710523da28;
  local_328 = (undefined8 *)0x0;
  if (puVar13 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar13[1];
    *puVar13 = 0;
    puVar13[1] = 0;
    if (plVar15 != (long *)0x0) {
      plVar34 = plVar15 + 1;
      do {
        lVar11 = *plVar34;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar34,0x10);
        if (bVar9) {
          *plVar34 = lVar11 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        std::__shared_weak_count::__release_weak();
      }
      plVar15 = (long *)puVar13[1];
      if (plVar15 != (long *)0x0) {
        plVar34 = plVar15 + 1;
        do {
          lVar11 = *plVar34;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar34,0x10);
          if (bVar9) {
            *plVar34 = lVar11 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    FUN_710392eb40((ulong)puVar13);
  }
  puVar13 = local_338;
  local_340 = &PTR_FUN_710523da28;
  local_338 = (undefined8 *)0x0;
  if (puVar13 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar13[1];
    *puVar13 = 0;
    puVar13[1] = 0;
    if (plVar15 != (long *)0x0) {
      plVar34 = plVar15 + 1;
      do {
        lVar11 = *plVar34;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar34,0x10);
        if (bVar9) {
          *plVar34 = lVar11 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        std::__shared_weak_count::__release_weak();
      }
      plVar15 = (long *)puVar13[1];
      if (plVar15 != (long *)0x0) {
        plVar34 = plVar15 + 1;
        do {
          lVar11 = *plVar34;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar34,0x10);
          if (bVar9) {
            *plVar34 = lVar11 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    FUN_710392eb40((ulong)puVar13);
  }
  puVar13 = local_348;
  local_350 = &PTR_FUN_710523da28;
  local_348 = (undefined8 *)0x0;
  if (puVar13 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar13[1];
    *puVar13 = 0;
    puVar13[1] = 0;
    if (plVar15 != (long *)0x0) {
      plVar34 = plVar15 + 1;
      do {
        lVar11 = *plVar34;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar34,0x10);
        if (bVar9) {
          *plVar34 = lVar11 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        std::__shared_weak_count::__release_weak();
      }
      plVar15 = (long *)puVar13[1];
      if (plVar15 != (long *)0x0) {
        plVar34 = plVar15 + 1;
        do {
          lVar11 = *plVar34;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar34,0x10);
          if (bVar9) {
            *plVar34 = lVar11 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    FUN_710392eb40((ulong)puVar13);
  }
  return;
}

