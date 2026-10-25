// addr:      7101883db0
// offset:    0x1883db0
// name:      FUN_7101883db0
// mangled:   
// signature: undefined __cdecl FUN_7101883db0(long param_1, long param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101883db0(long param_1,long param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   ulong param_6,long ***param_7,long ***param_8)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 uVar12;
  undefined8 extraout_x1_07;
  long *********ppppppppplVar13;
  undefined **ppuVar14;
  long *********ppppppppplVar15;
  long ****pppplVar16;
  byte ****ppppbVar17;
  long ****pppplVar18;
  undefined1 uVar19;
  uint uVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  undefined8 *puVar25;
  long lVar26;
  long *plVar27;
  long lVar28;
  long *plVar29;
  undefined1 auVar30 [16];
  undefined8 uStack_468;
  undefined6 uStack_460;
  undefined4 local_458;
  undefined2 local_454;
  undefined4 local_3d0;
  undefined2 local_3cc;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined2 local_328;
  ulong local_320;
  ulong local_318;
  undefined8 local_310;
  ulong local_308;
  ulong local_300;
  undefined8 uStack_2f8;
  ulong local_2f0;
  ulong local_2e8;
  undefined8 local_2e0;
  ulong local_2d8;
  ulong local_2d0;
  undefined8 uStack_2c8;
  undefined2 local_2c0;
  undefined1 auStack_2b8 [552];
  long ********local_90;
  ulong local_88;
  undefined4 local_7c [3];
  
  local_2c0 = 0x3c;
  ppppppppplVar13 = (long *********)0x228;
  local_458 = 0;
  local_454 = 0;
  local_3d0 = 0;
  local_3cc = 0;
  uStack_460 = 0;
  uStack_468._0_6_ = 0;
  uStack_468._6_2_ = 0;
  local_328 = 0;
  local_338 = 0;
  uStack_330 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2f0 = 0;
  local_2e8 = 0;
  local_300 = 0;
  uStack_2f8 = 0;
  local_310 = 0;
  local_308 = 0;
  local_320 = 0;
  local_318 = 0;
  memset(auStack_2b8,0,0x228);
  puVar25 = *(undefined8 **)(param_2 + 0xa8);
  if (puVar25 != (undefined8 *)0x0) {
    if (((DAT_7105324918 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_7105324918), iVar5 != 0)) {
      if (((DAT_7105324748 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_7105324748), iVar5 != 0))
      {
        if (((DAT_7105324750 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(&DAT_7105324750), iVar5 != 0)) {
          DAT_7105324758 = 0;
          __cxa_guard_release(&DAT_7105324750);
        }
        DAT_7105324760 = &DAT_7105324758;
        __cxa_guard_release(&DAT_7105324748);
      }
      DAT_7105324920 = &DAT_7105324760;
      __cxa_guard_release(&DAT_7105324918);
    }
    for (puVar6 = (undefined8 *)(**(code **)*puVar25)(puVar25); puVar6 != (undefined8 *)0x0;
        puVar6 = (undefined8 *)*puVar6) {
      if ((undefined8 **)puVar6 == &DAT_7105324920) {
        FUN_7101683ad0(&uStack_468,puVar25 + 1,ppppppppplVar13,param_4,param_5,param_6,param_7,
                       param_8);
        break;
      }
    }
  }
  plVar7 = (long *)FUN_710392e290(0x10,0xe0,(long ****)ppppppppplVar13,param_4,param_5,param_6,
                                  param_7,param_8);
  if (plVar7 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_7c[0] = 0;
      local_90 = (long ********)&DAT_000000e0;
      ppppppppplVar13 = &local_90;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
      if (((uVar8 & 1) != 0) &&
         (plVar7 = (long *)FUN_710392e290(0x10,0xe0,(long ****)ppppppppplVar13,param_4,param_5,
                                          param_6,param_7,param_8), plVar7 != (long *)0x0))
      goto LAB_7101883ee4;
    }
    plVar7 = (long *)0x0;
  }
LAB_7101883ee4:
  *plVar7 = (long)plVar7;
  plVar7[1] = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  *(undefined4 *)(plVar7 + 0x16) = 0xffffffff;
  *(undefined1 *)((long)plVar7 + 0xb4) = 0;
  plVar7[0x14] = 0;
  plVar7[0x15] = 0xffffffff;
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
  lVar28 = DAT_710532f840;
  plVar7[0x17] = *(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
  plVar7[0x18] = *(long *)(*(long *)(lVar28 + 8) + 0xc0);
  puVar25 = (undefined8 *)
            FUN_710392e290(0x10,0x80,(long ****)ppppppppplVar13,param_4,param_5,param_6,param_7,
                           param_8);
  if (puVar25 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_7c[0] = 0;
      local_90 = (long ********)&DAT_00000080;
      ppppppppplVar13 = &local_90;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
      if (((uVar8 & 1) != 0) &&
         (puVar25 = (undefined8 *)
                    FUN_710392e290(0x10,0x80,(long ****)ppppppppplVar13,param_4,param_5,param_6,
                                   param_7,param_8), puVar25 != (undefined8 *)0x0))
      goto LAB_7101883f98;
    }
    puVar25 = (undefined8 *)0x0;
  }
LAB_7101883f98:
  *puVar25 = &PTR_FUN_7105181b40;
  uVar19 = 0;
  puVar25[2] = 0;
  puVar25[1] = puVar25 + 2;
  puVar25[5] = 0;
  puVar25[3] = 0;
  puVar25[4] = puVar25 + 5;
  puVar25[8] = 0;
  puVar25[6] = 0;
  puVar25[7] = puVar25 + 8;
  puVar25[0xb] = 0;
  puVar25[9] = 0;
  puVar25[10] = puVar25 + 0xb;
  *(undefined4 *)(puVar25 + 0xd) = 2;
  puVar25[0xc] = 0;
  *(undefined4 *)(puVar25 + 0xf) = 0;
  puVar25[0xe] = 0;
  *(undefined4 *)(plVar7 + 0x1b) = 0;
  plVar7[0x19] = (long)puVar25;
  plVar7[0x1a] = 0;
  iVar5 = *(int *)(param_2 + 0x18);
  if (0xf < iVar5) {
    lVar28 = 0x1c;
    do {
      if (*(char *)(param_2 + lVar28) == 'C') {
        ppppppppplVar13 = (long *********)&DAT_00000010;
        iVar4 = strncmp("CharaSelectScene",(char *)(param_2 + lVar28),0x10);
        if (iVar4 == 0) {
          uVar19 = 1;
          goto LAB_710188404c;
        }
      }
      lVar21 = lVar28 + -0x1c;
      lVar28 = lVar28 + 1;
    } while (lVar21 < (long)iVar5 + -0x10);
    uVar19 = 0;
  }
LAB_710188404c:
  *(undefined1 *)((long)plVar7 + 0xdc) = uVar19;
  plVar7[7] = (long)FUN_7101883690;
  plVar7[8] = 0;
  plVar7[9] = (long)FUN_7101883880;
  plVar7[10] = 0;
  plVar7[5] = (long)FUN_7101883050;
  plVar7[6] = 0;
  plVar7[1] = 0;
  plVar7[2] = 0;
  *(undefined8 *)((long)plVar7 + 0x9c) = 0;
  *(undefined8 *)((long)plVar7 + 0x94) = 0;
  *(undefined8 *)((long)plVar7 + 0x8c) = 0;
  *(undefined8 *)((long)plVar7 + 0x84) = 0;
  *(undefined8 *)((long)plVar7 + 0x7c) = 0;
  *(undefined8 *)((long)plVar7 + 0x74) = 0;
  *(undefined8 *)((long)plVar7 + 0x6c) = 0;
  *(undefined8 *)((long)plVar7 + 100) = 0;
  *(undefined8 *)((long)plVar7 + 0x5c) = 0;
  *(undefined8 *)((long)plVar7 + 0xa4) = 0xffffffff00000000;
  *(undefined8 *)((long)plVar7 + 0xac) = 0xffffffff00000000;
  *(undefined1 *)((long)plVar7 + 0xb4) = 0;
  *(undefined4 *)(plVar7 + 0xb) = 0;
  FUN_7101883970(plVar7);
  uVar8 = *(ulong *)(param_1 + 0x58);
  *(long **)(param_1 + 0x58) = plVar7;
  if (uVar8 != 0) {
    lVar28 = *(long *)(uVar8 + 0xd0);
    *(undefined8 *)(uVar8 + 0xd0) = 0;
    uVar12 = extraout_x1;
    if (lVar28 != 0) {
      FUN_71032cad20(lVar28);
      uVar12 = extraout_x1_00;
    }
    FUN_710323b9e0(*(long *)(uVar8 + 200),uVar12,ppppppppplVar13,param_4,param_5,param_6,param_7,
                   param_8);
    plVar7 = *(long **)(uVar8 + 200);
    *(undefined8 *)(uVar8 + 200) = 0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    FUN_710392eb40(uVar8);
    plVar7 = *(long **)(param_1 + 0x58);
  }
  plVar29 = plVar7 + 0x19;
  lVar28 = *plVar29;
  pppplVar18 = (long ****)0x0;
  FUN_710323beb0(lVar28,(ulong *)&DAT_7104545200,(long)*(int *)(lVar28 + 0x70),
                 (ulong)*(uint *)(lVar28 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar28 = *plVar29;
  ppppppppplVar13 = (long *********)(long)*(int *)(lVar28 + 0x70);
  ppppbVar17 = (byte ****)(ulong)*(uint *)(lVar28 + 0x68);
  FUN_710323c1c0(lVar28,(ulong *)&DAT_71045451f8,ppppppppplVar13,ppppbVar17,pppplVar18,param_6,
                 param_7,param_8);
  lVar28 = *plVar29;
  uVar8 = FUN_710323cb80(lVar28,extraout_x1_01,ppppppppplVar13,ppppbVar17,pppplVar18,param_6,param_7
                         ,param_8);
  while ((uVar8 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar8 = FUN_710323cb80(lVar28,extraout_x1_02,ppppppppplVar13,ppppbVar17,pppplVar18,param_6,
                           param_7,param_8);
  }
  puVar25 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar13,ppppbVar17,pppplVar18,param_6,
                           param_7,param_8);
  if (puVar25 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_7c[0] = 0;
      local_90 = (long ********)&DAT_00000088;
      ppppppppplVar13 = &local_90;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
      if (((uVar8 & 1) != 0) &&
         (puVar25 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar13,ppppbVar17,pppplVar18,
                                   param_6,param_7,param_8), puVar25 != (undefined8 *)0x0))
      goto LAB_71018841c0;
    }
    puVar25 = (undefined8 *)0x0;
  }
LAB_71018841c0:
  *puVar25 = &PTR_FUN_71050ad5c0;
  puVar25[1] = 0;
  puVar25[0xc] = 0;
  puVar25[0xd] = 0x1ffffffff;
  puVar25[2] = 0;
  puVar25[3] = 0;
  *(undefined1 *)(puVar25 + 0xb) = 0;
  puVar25[0xf] = plVar29;
  *(undefined1 *)(puVar25 + 0xe) = 1;
  puVar25[9] = 0;
  puVar25[10] = 0;
  lVar28 = FUN_710392e290(0x10,0x658,(long ****)ppppppppplVar13,ppppbVar17,pppplVar18,param_6,
                          param_7,param_8);
  if (lVar28 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_7c[0] = 0;
      local_90 = (long ********)0x658;
      ppppppppplVar13 = &local_90;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
      if (((uVar8 & 1) != 0) &&
         (lVar28 = FUN_710392e290(0x10,0x658,(long ****)ppppppppplVar13,ppppbVar17,pppplVar18,
                                  param_6,param_7,param_8), lVar28 != 0)) goto LAB_7101884248;
    }
    lVar28 = 0;
  }
LAB_7101884248:
  ppuVar14 = (undefined **)0x10c;
  *(undefined4 *)(lVar28 + 0x134) = 0;
  *(undefined8 *)(lVar28 + 0x18) = 0;
  *(undefined8 *)(lVar28 + 0x20) = 0;
  *(undefined8 *)(lVar28 + 8) = 0;
  *(undefined8 *)(lVar28 + 0x10) = 0;
  *(long *)lVar28 = lVar28;
  *(undefined8 *)(lVar28 + 0x138) = 0xffffffff;
  *(undefined4 *)(lVar28 + 0x140) = 0xffffffff;
  *(undefined1 *)(lVar28 + 0x144) = 0;
  memset((void *)(lVar28 + 0x28),0,0x10c);
  FUN_71016c86d0((undefined8 *)(lVar28 + 0x148),&uStack_468,(long ****)ppuVar14,ppppbVar17,
                 pppplVar18,param_6,param_7,param_8);
  *(undefined4 *)(lVar28 + 0x520) = 4;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,8,(long ****)ppuVar14,ppppbVar17,pppplVar18,param_6,param_7,param_8);
  uVar12 = extraout_x1_03;
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_7c[0] = 0;
      local_90 = (long ********)&DAT_00000008;
      ppuVar14 = (undefined **)&local_90;
      auVar30 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
      uVar12 = auVar30._8_8_;
      if (((auVar30._0_8_ & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,8,(long ****)ppuVar14,ppppbVar17,pppplVar18,param_6,param_7,
                                  param_8), uVar12 = extraout_x1_04, puVar6 != (undefined8 *)0x0))
      goto LAB_71018842e8;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_71018842e8:
  FUN_7103773200(puVar6,uVar12,(long ****)ppuVar14,ppppbVar17,pppplVar18,param_6,param_7,param_8);
  *(undefined8 **)(lVar28 + 0x528) = puVar6;
  *(undefined8 *)(lVar28 + 0x530) = 0;
  *(undefined4 *)(lVar28 + 0x538) = 0xffffffff;
  *(undefined8 *)(lVar28 + 0x541) = 0;
  *(undefined8 *)(lVar28 + 0x53c) = 0;
  *(undefined1 *)(lVar28 + 0x652) = 0;
  *(undefined2 *)(lVar28 + 0x650) = 0;
  *(undefined8 *)(lVar28 + 0x648) = 0;
  if ((*(int *)(lVar28 + 0x40c) != 0) &&
     ((*(int *)(lVar28 + 0x300) != *(int *)(lVar28 + 0x408) ||
      (iVar5 = strcmp((char *)(lVar28 + 0x308),(char *)(lVar28 + 0x410)), iVar5 != 0)))) {
    *(undefined1 *)(lVar28 + 0x651) = 1;
  }
  *(code **)(lVar28 + 0x38) = FUN_7101c43c70;
  *(undefined8 *)(lVar28 + 0x40) = 0;
  *(code **)(lVar28 + 0x58) = FUN_7101c43e70;
  *(undefined8 *)(lVar28 + 0x60) = 0;
  *(code **)(lVar28 + 0x68) = FUN_7101c441d0;
  *(undefined8 *)(lVar28 + 0x70) = 0;
  *(code **)(lVar28 + 0x88) = FUN_7101c446d0;
  *(undefined8 *)(lVar28 + 0x90) = 0;
  *(code **)(lVar28 + 0x98) = FUN_7101c44740;
  *(undefined8 *)(lVar28 + 0xa0) = 0;
  *(code **)(lVar28 + 0xb8) = FUN_7101c44c20;
  *(undefined8 *)(lVar28 + 0xc0) = 0;
  *(code **)(lVar28 + 200) = FUN_7101c44cf0;
  *(undefined8 *)(lVar28 + 0xd0) = 0;
  *(code **)(lVar28 + 0x48) = FUN_7101c43d00;
  *(undefined8 *)(lVar28 + 0x50) = 0;
  *(code **)(lVar28 + 0x78) = FUN_7101c44380;
  *(undefined8 *)(lVar28 + 0x80) = 0;
  *(code **)(lVar28 + 0x28) = FUN_7101c43c60;
  *(undefined8 *)(lVar28 + 0x30) = 0;
  *(code **)(lVar28 + 0xa8) = FUN_7101c44850;
  *(undefined8 *)(lVar28 + 0xb0) = 0;
  *(code **)(lVar28 + 0xd8) = FUN_7101c43c60;
  *(undefined8 *)(lVar28 + 0xe0) = 0;
  if (0x12 < *(uint *)(lVar28 + 0x134)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(lVar28 + (long)(int)*(uint *)(lVar28 + 0x134) * 4 + 0xe8) = 0;
  puVar25[0x10] = lVar28;
  if (*(int *)(lVar28 + 0x148) == 0) {
    iVar5 = 0;
    uVar20 = 4;
  }
  else {
    iVar5 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_90);
    if (((iVar5 == 0) && ((long)local_90 <= *(long *)(lVar28 + 0x280))) &&
       (*(long *)(lVar28 + 0x268) <= (long)local_90)) {
      if (*(long *)(lVar28 + 0x278) < (long)local_90) {
        uVar20 = 2;
        if (*(long *)(lVar28 + 0x2f8) <= (long)local_90 || *(long *)(lVar28 + 0x2f8) == 0) {
          uVar20 = 3;
        }
      }
      else {
        uVar20 = (uint)(*(long *)(lVar28 + 0x270) <= (long)local_90);
      }
    }
    else {
      uVar20 = 4;
    }
    iVar5 = *(int *)(lVar28 + 0x148);
  }
  *(uint *)(lVar28 + 0x520) = uVar20;
  if (*(int *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x268) + 0x6594) == iVar5) {
    bVar3 = *(char *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x268) + 0x6593) != '\0';
  }
  else {
    bVar3 = false;
  }
  *(bool *)(lVar28 + 0x650) = bVar3;
  lVar21 = DAT_710532f8b8;
  lVar26 = *plVar29;
  if (((DAT_710532f4d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_710532f4d8), iVar5 != 0)) {
    DAT_710532f4a4 = 0xffffff;
    ppuVar14 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_710532f4d8);
  }
  plVar27 = (long *)(lVar26 + 0x28);
  plVar23 = (long *)*plVar27;
  plVar22 = plVar27;
  if (plVar23 == (long *)0x0) {
LAB_71018844dc:
    ppppppppplVar13 = (long *********)&DAT_710532f4a4;
  }
  else {
    do {
      bVar3 = (plVar23[4] & 0xfffffffffcU) < 0x10e908f41c;
      if (!bVar3) {
        plVar22 = plVar23;
      }
      plVar23 = (long *)plVar23[bVar3];
    } while (plVar23 != (long *)0x0);
    if ((plVar22 == plVar27) || (0x10e908f41c < (plVar22[4] & 0xffffffffffU))) goto LAB_71018844dc;
    ppppppppplVar13 = (long *********)(plVar22 + 5);
  }
  puVar6 = (undefined8 *)(lVar28 + 0x528);
  if (*(int *)ppppppppplVar13 == 0xffffff) goto LAB_71018847b0;
  plVar27 = *(long **)(lVar21 + 8);
  std::mutex::lock();
  plVar22 = plVar27 + 4;
  plVar23 = (long *)*plVar22;
  if (plVar23 != (long *)0x0) {
    uVar20 = 0xe;
    do {
      iVar5 = uVar20 + 0x900;
      plVar9 = plVar22;
      plVar24 = plVar23;
      do {
        if (iVar5 <= *(int *)((long)plVar24 + 0x1c)) {
          plVar9 = plVar24;
        }
        plVar24 = (long *)plVar24[*(int *)((long)plVar24 + 0x1c) < iVar5];
      } while (plVar24 != (long *)0x0);
      if ((plVar9 == plVar22) || (iVar5 < *(int *)((long)plVar9 + 0x1c))) {
        plVar9 = plVar27 + 4;
        goto LAB_710188457c;
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < 0x100);
    std::mutex::unlock();
    goto LAB_71018847b0;
  }
  iVar5 = 0x90e;
  lVar21 = *plVar22;
  plVar9 = plVar22;
  goto joined_r0x0071018845ec;
  while( true ) {
    if (iVar5 <= *(int *)((long)plVar22 + 0x1c)) break;
    plVar9 = plVar22 + 1;
    plVar23 = (long *)*plVar9;
    if ((long *)*plVar9 == (long *)0x0) break;
LAB_710188457c:
    plVar22 = plVar23;
    if (iVar5 < *(int *)((long)plVar22 + 0x1c)) {
      plVar23 = (long *)*plVar22;
      plVar9 = plVar22;
      if ((long *)*plVar22 == (long *)0x0) {
        lVar21 = *plVar22;
        goto joined_r0x0071018845ec;
      }
      goto LAB_710188457c;
    }
  }
  lVar21 = *plVar9;
joined_r0x0071018845ec:
  if (lVar21 == 0) {
    plVar23 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppuVar14,ppppbVar17,pppplVar18,param_6,
                                     param_7,param_8);
    if (plVar23 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_7c[0] = 0;
        local_90 = (long ********)&SUB_00000020;
        ppuVar14 = (undefined **)&local_90;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
        if (((uVar8 & 1) != 0) &&
           (plVar23 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppuVar14,ppppbVar17,pppplVar18,
                                             param_6,param_7,param_8), plVar23 != (long *)0x0))
        goto LAB_7101884650;
      }
      plVar23 = (long *)0x0;
    }
LAB_7101884650:
    *(int *)((long)plVar23 + 0x1c) = iVar5;
    *plVar23 = 0;
    plVar23[1] = 0;
    plVar23[2] = (long)plVar22;
    *plVar9 = (long)plVar23;
    if (*(long *)plVar27[3] != 0) {
      plVar27[3] = *(long *)plVar27[3];
      plVar23 = (long *)*plVar9;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>((long *)plVar27[4],plVar23);
    plVar27[5] = plVar27[5] + 1;
  }
  plVar22 = plVar27 + 1;
  plVar23 = plVar22;
  if ((long *)*plVar22 == (long *)0x0) {
LAB_71018846e0:
    lVar21 = *plVar23;
  }
  else {
    plVar9 = (long *)*plVar22;
    plVar23 = plVar27 + 1;
    do {
      while (plVar22 = plVar9, (plVar22[4] & 0xffffffffffU) < 0x10e908f41d) {
        if ((plVar22[4] & 0xffffffffffU) == 0x10e908f41c) goto LAB_71018846e0;
        plVar23 = plVar22 + 1;
        plVar9 = (long *)*plVar23;
        if ((long *)*plVar23 == (long *)0x0) goto LAB_71018846e0;
      }
      plVar9 = (long *)*plVar22;
      plVar23 = plVar22;
    } while ((long *)*plVar22 != (long *)0x0);
    lVar21 = *plVar22;
  }
  if (lVar21 == 0) {
    plVar9 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppuVar14,ppppbVar17,pppplVar18,param_6,
                                    param_7,param_8);
    if (plVar9 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_7c[0] = 0;
        local_90 = (long ********)&DAT_00000030;
        ppppppppplVar15 = &local_90;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
        if (((uVar8 & 1) != 0) &&
           (plVar9 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar15,ppppbVar17,
                                            pppplVar18,param_6,param_7,param_8),
           plVar9 != (long *)0x0)) goto LAB_7101884744;
      }
      plVar9 = (long *)0x0;
    }
LAB_7101884744:
    plVar9[4] = 0x10e908f41c;
    *(int *)(plVar9 + 5) = iVar5;
    plVar9[2] = (long)plVar22;
    *plVar9 = 0;
    plVar9[1] = 0;
    *plVar23 = (long)plVar9;
    if (*(long *)*plVar27 != 0) {
      *plVar27 = *(long *)*plVar27;
      plVar9 = (long *)*plVar23;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>((long *)plVar27[1],plVar9);
    plVar27[2] = plVar27[2] + 1;
  }
  std::mutex::unlock();
  FUN_7103563a20(*lib::Singleton<lib::EffectManager>::instance_,iVar5,ppppppppplVar13,ppppbVar17,
                 pppplVar18,param_6,param_7,param_8);
LAB_71018847b0:
  pppplVar16 = (long ****)&DAT_7104545200;
  ppppbVar17 = (byte ****)0x1;
  FUN_71032cbf30(puVar6,*plVar29,(ulong *)&DAT_7104545200,(byte ****)0x1,pppplVar18,param_6,param_7,
                 param_8);
  FUN_71037760f0(**(long **)*puVar6,0);
  lVar21 = *(long *)*puVar6;
  FUN_7103778300(0x3f800000,*(long *)(lVar21 + 0x10),0x7104401534);
  FUN_7103778760(*(long *)(lVar21 + 0x10),0x710434a2f6);
  FUN_7103778760(*(long *)(lVar21 + 0x10),0x710443367f);
  FUN_7103778630(0,*(long *)(lVar21 + 0x10),0x7104421055);
  FUN_7103778630(0,*(long *)(lVar21 + 0x10),0x71043de934);
  FUN_7103776640(&local_90,lVar21 + 8,(byte ****)"set_parts_btn_00",pppplVar16,ppppbVar17,pppplVar18
                 ,param_6,param_7,param_8);
  uVar8 = local_88;
  FUN_7103778300(0x3f800000,local_88,0x7104318e56);
  local_90 = (long ********)&PTR_FUN_710523d988;
  local_88 = 0;
  if (uVar8 != 0) {
    uVar10 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar8);
  }
  FUN_7103776640(&local_90,lVar21 + 8,(byte ****)"set_parts_btn_01",pppplVar16,ppppbVar17,pppplVar18
                 ,param_6,param_7,param_8);
  uVar8 = local_88;
  FUN_7103778300(0x3f800000,local_88,0x7104318e56);
  local_90 = (long ********)&PTR_FUN_710523d988;
  local_88 = 0;
  uVar12 = extraout_x1_05;
  if (uVar8 != 0) {
    uVar10 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar8);
    uVar12 = extraout_x1_06;
  }
  FUN_7101c44ff0(lVar28,uVar12,pppplVar16,ppppbVar17,pppplVar18,param_6,param_7,param_8);
  puVar25[2] = &DAT_7105333600;
  uVar2 = DAT_7105333664;
  *(undefined4 *)(puVar25 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar25 + 0x6c) = uVar2;
  do {
    uVar20 = DAT_7105333650;
    cVar1 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar3) {
      DAT_7105333650 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0' || (uVar20 & 1) != 0);
  puVar25[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar25;
  FUN_71032caea0((long)puVar25,extraout_x1_07,pppplVar16,ppppbVar17,pppplVar18,param_6,param_7,
                 param_8);
  lVar28 = plVar7[0x1a];
  plVar7[0x1a] = (long)puVar25;
  if (lVar28 != 0) {
    FUN_71032cad20(lVar28);
  }
  uVar8 = local_2d8;
  uVar10 = local_2d0;
  if (local_2d8 != 0) {
    while (uVar12 = uVar10, uVar12 != uVar8) {
      uVar11 = *(ulong *)(uVar12 - 0x228);
      uVar10 = uVar12 - 0x290;
      if (uVar11 != 0) {
        *(ulong *)(uVar12 - 0x220) = uVar11;
        FUN_710392eb40(uVar11);
      }
    }
    local_2d0 = uVar8;
    if (local_2d8 != 0) {
      FUN_710392eb40(local_2d8);
    }
  }
  if (local_2f0 != 0) {
    local_2e8 = local_2f0;
    FUN_710392eb40(local_2f0);
  }
  if (local_308 != 0) {
    local_300 = local_308;
    FUN_710392eb40(local_308);
  }
  if (local_320 != 0) {
    local_318 = local_320;
    FUN_710392eb40(local_320);
  }
  return;
}

