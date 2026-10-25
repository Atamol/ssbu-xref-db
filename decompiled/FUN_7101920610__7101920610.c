// addr:      7101920610
// offset:    0x1920610
// name:      FUN_7101920610
// mangled:   
// signature: undefined __cdecl FUN_7101920610(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101920610(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  ushort uVar14;
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
  undefined **ppuVar15;
  long *********ppppppppplVar16;
  long ****pppplVar17;
  char *pcVar18;
  long ****pppplVar19;
  byte ****ppppbVar20;
  undefined8 uVar21;
  char *pcVar22;
  long ****pppplVar23;
  long lVar24;
  char *pcVar25;
  int *piVar26;
  code *pcVar27;
  long lVar28;
  char **ppcVar29;
  uint uVar31;
  undefined8 *puVar32;
  byte bVar33;
  undefined1 auVar34 [16];
  undefined8 local_190;
  char *local_188;
  char *local_180;
  undefined8 local_178;
  long ***local_80 [2];
  undefined4 local_64;
  char **ppcVar30;
  
  puVar32 = *(undefined8 **)(param_2 + 0xa8);
  if (puVar32 != (undefined8 *)0x0) {
    if (((DAT_71053249f8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053249f8), iVar5 != 0)) {
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
      DAT_7105324a00 = &DAT_7105324760;
      __cxa_guard_release(&DAT_71053249f8);
    }
    for (puVar6 = (undefined8 *)(**(code **)*puVar32)(puVar32); puVar6 != (undefined8 *)0x0;
        puVar6 = (undefined8 *)*puVar6) {
      if ((undefined8 **)puVar6 == &DAT_7105324a00) {
        bVar3 = *(char *)(puVar32 + 1) != '\0';
        goto LAB_7101920680;
      }
    }
  }
  bVar3 = false;
LAB_7101920680:
  lVar7 = FUN_710392e290(0x10,0x1b0,param_3,param_4,param_5,param_6,param_7,param_8);
  if (lVar7 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
      local_190 = &DAT_000001b0;
      pppplVar23 = (long ****)&local_190;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
      if (((uVar8 & 1) != 0) &&
         (lVar7 = FUN_710392e290(0x10,0x1b0,pppplVar23,param_4,param_5,param_6,param_7,param_8),
         lVar7 != 0)) goto LAB_71019206dc;
    }
    lVar7 = 0;
  }
LAB_71019206dc:
  ppuVar15 = (undefined **)0x13c;
  *(undefined4 *)(lVar7 + 0x164) = 0;
  *(long *)lVar7 = lVar7;
  *(undefined8 *)(lVar7 + 0x18) = 0;
  *(undefined8 *)(lVar7 + 0x20) = 0;
  *(undefined8 *)(lVar7 + 0x168) = 0xffffffff;
  *(undefined4 *)(lVar7 + 0x170) = 0xffffffff;
  *(undefined1 *)(lVar7 + 0x174) = 0;
  *(undefined8 *)(lVar7 + 8) = 0;
  *(undefined8 *)(lVar7 + 0x10) = 0;
  memset((void *)(lVar7 + 0x28),0,0x13c);
  puVar32 = (undefined8 *)
            FUN_710392e290(0x10,0x80,(long ****)ppuVar15,param_4,param_5,param_6,param_7,param_8);
  if (puVar32 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
      local_190 = &DAT_00000080;
      ppuVar15 = (undefined **)&local_190;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
      if (((uVar8 & 1) != 0) &&
         (puVar32 = (undefined8 *)
                    FUN_710392e290(0x10,0x80,(long ****)ppuVar15,param_4,param_5,param_6,param_7,
                                   param_8), puVar32 != (undefined8 *)0x0)) goto LAB_7101920760;
    }
    puVar32 = (undefined8 *)0x0;
  }
LAB_7101920760:
  *puVar32 = &PTR_FUN_7105181b40;
  puVar32[2] = 0;
  puVar32[1] = puVar32 + 2;
  puVar32[5] = 0;
  puVar32[3] = 0;
  puVar32[4] = puVar32 + 5;
  puVar32[8] = 0;
  puVar32[6] = 0;
  puVar32[7] = puVar32 + 8;
  puVar32[0xb] = 0;
  puVar32[9] = 0;
  puVar32[10] = puVar32 + 0xb;
  puVar32[0xc] = 0;
  *(undefined4 *)(puVar32 + 0xd) = 2;
  *(undefined4 *)(puVar32 + 0xf) = 0;
  puVar32[0xe] = 0;
  *(undefined8 **)(lVar7 + 0x178) = puVar32;
  *(undefined8 *)(lVar7 + 400) = 0;
  *(undefined8 *)(lVar7 + 0x198) = 0;
  *(undefined8 *)(lVar7 + 0x180) = 0;
  *(undefined8 *)(lVar7 + 0x188) = 0;
  lVar24 = *DAT_7105329f98;
  plVar9 = (long *)FUN_710392e290(0x10,0x10,(long ****)ppuVar15,param_4,param_5,param_6,param_7,
                                  param_8);
  uVar21 = extraout_x1;
  if (plVar9 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
      local_190 = &DAT_00000010;
      ppuVar15 = (undefined **)&local_190;
      auVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
      uVar21 = auVar34._8_8_;
      if (((auVar34._0_8_ & 1) != 0) &&
         (plVar9 = (long *)FUN_710392e290(0x10,0x10,(long ****)ppuVar15,param_4,param_5,param_6,
                                          param_7,param_8), uVar21 = extraout_x1_00,
         plVar9 != (long *)0x0)) goto LAB_7101920820;
    }
    plVar9 = (long *)0x0;
  }
LAB_7101920820:
  *plVar9 = lVar24 + 0x38;
  plVar9[1] = lVar24 + 0x38;
  *(long **)(lVar7 + 0x1a0) = plVar9;
  *(undefined1 *)(lVar7 + 0x1a8) = 0;
  if (((DAT_71053144d8 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), uVar21 = extraout_x1_24, iVar5 != 0)) {
    FUN_7101764000();
    ppuVar15 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
    uVar21 = extraout_x1_25;
  }
  *(bool *)(lVar7 + 0x1a9) = (DAT_71053050f0 & 0x7fff0000) == 0x3020000;
  *(code **)(lVar7 + 0x28) = FUN_710191e130;
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(code **)(lVar7 + 0x48) = FUN_710191e2c0;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  *(code **)(lVar7 + 0x68) = FUN_710191e950;
  *(undefined8 *)(lVar7 + 0x70) = 0;
  *(code **)(lVar7 + 0x78) = FUN_710191eb50;
  *(undefined8 *)(lVar7 + 0x80) = 0;
  *(bool *)(lVar7 + 0x1aa) = bVar3;
  *(code **)(lVar7 + 0x98) = FUN_710191f7f0;
  *(undefined8 *)(lVar7 + 0xa0) = 0;
  *(code **)(lVar7 + 0x88) = FUN_710191f510;
  *(undefined8 *)(lVar7 + 0x90) = 0;
  *(code **)(lVar7 + 0xa8) = FUN_710191fa60;
  *(undefined8 *)(lVar7 + 0xb0) = 0;
  *(code **)(lVar7 + 0xb8) = FUN_710191fc80;
  *(undefined8 *)(lVar7 + 0xc0) = 0;
  *(code **)(lVar7 + 0xd8) = FUN_710191ff90;
  *(undefined8 *)(lVar7 + 0xe0) = 0;
  *(code **)(lVar7 + 0xe8) = FUN_71019202a0;
  *(undefined8 *)(lVar7 + 0xf0) = 0;
  *(code **)(lVar7 + 200) = FUN_710191fda0;
  *(undefined8 *)(lVar7 + 0xd0) = 0;
  *(code **)(lVar7 + 0x38) = FUN_710191e140;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(code **)(lVar7 + 0xf8) = FUN_7101920470;
  *(undefined8 *)(lVar7 + 0x100) = 0;
  *(code **)(lVar7 + 0x58) = FUN_710191e4d0;
  *(undefined8 *)(lVar7 + 0x60) = 0;
  *(code **)(lVar7 + 0x108) = FUN_71019204a0;
  *(undefined8 *)(lVar7 + 0x110) = 0;
  if (0x12 < *(uint *)(lVar7 + 0x164)) goto LAB_7101921d34;
  *(undefined4 *)(lVar7 + (long)(int)*(uint *)(lVar7 + 0x164) * 4 + 0x118) = 0;
  uVar8 = *(ulong *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar7;
  if (uVar8 != 0) {
    FUN_71019204d0(uVar8,uVar21,(long *********)ppuVar15,param_4,param_5,param_6,param_7,param_8);
    FUN_710392eb40(uVar8);
    lVar7 = *(long *)(param_1 + 0x58);
    uVar21 = extraout_x1_01;
  }
  FUN_71032e5e60(*(long *)(DAT_710532f7c8 + 8),uVar21,(long ****)ppuVar15,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7101af86a0(*(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8),1,ppuVar15,param_4,param_5,param_6,
                 param_7,param_8);
  lVar24 = *(long *)(*(long *)(*DAT_7105329f98 + 0x20) + 8);
  uVar8 = FUN_710323cb80(lVar24,extraout_x1_02,(long *********)ppuVar15,param_4,param_5,param_6,
                         param_7,param_8);
  while ((uVar8 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar8 = FUN_710323cb80(lVar24,extraout_x1_03,(long *********)ppuVar15,param_4,param_5,param_6,
                           param_7,param_8);
  }
  lVar24 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
  plVar9 = (long *)(lVar7 + 0x178);
  uVar4 = FUN_71032a7800(lVar24,*(ulong *)(*DAT_7105329fa0 + 0x7e8));
  if (uVar4 < (uint)((int)((ulong)(*(long *)(lVar24 + 0x28) - *(long *)(lVar24 + 0x20)) >> 6) *
                    -0x33333333)) {
    uVar14 = *(ushort *)(*(long *)(lVar24 + 0x20) + (ulong)uVar4 * 0x140);
  }
  else {
    uVar14 = 0xffff;
  }
  uVar8 = FUN_71032a9470(lVar24,uVar14);
  FUN_710323d580(plVar9,uVar8,(byte ****)&DAT_0000001a,param_4,param_5,param_6,param_7,param_8);
  lVar24 = *plVar9;
  FUN_710323beb0(lVar24,(ulong *)&DAT_7104545a40,(long)*(int *)(lVar24 + 0x70),
                 (ulong)*(uint *)(lVar24 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar24 = *plVar9;
  pppplVar23 = (long ****)0x0;
  FUN_710323beb0(lVar24,(ulong *)&DAT_7104545c70,(long)*(int *)(lVar24 + 0x70),
                 (ulong)*(uint *)(lVar24 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  FUN_7103239920((uint *)&local_190,0x1b,0);
  FUN_7103239d20((uint *)&local_190,"%s_%02d.bntx");
  if (local_190._4_4_ == 0) {
    uVar8 = 0;
  }
  else {
    uVar4 = 0xffffffff;
    ppcVar30 = &local_188;
    do {
      ppcVar29 = (char **)((long)ppcVar30 + 1);
      bVar33 = *(byte *)ppcVar30;
      uVar31 = bVar33 + 0x20;
      if (0x19 < bVar33 - 0x41) {
        uVar31 = (uint)bVar33;
      }
      uVar4 = (&DAT_7104754084)[(uVar31 ^ uVar4) & 0xff] ^ uVar4 >> 8;
      ppcVar30 = ppcVar29;
    } while (ppcVar29 < (char **)((long)&local_188 + (ulong)local_190._4_4_));
    uVar8 = (ulong)~uVar4;
  }
  local_190 = (char *)(uVar8 | ((long)(int)local_190._4_4_ & 0xffU) << 0x20);
  if ((long ********)local_190 != (long ********)0x0) {
    lVar24 = *plVar9;
    FUN_710323c4e0(lVar24,&local_190,(long *********)(long)*(int *)(lVar24 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar24 + 0x68),pppplVar23,param_6,param_7,param_8);
  }
  lVar24 = *plVar9;
  FUN_710323beb0(lVar24,(ulong *)&DAT_7104545850,(long)*(int *)(lVar24 + 0x70),
                 (ulong)*(uint *)(lVar24 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar24 = *plVar9;
  FUN_710323beb0(lVar24,(ulong *)&DAT_7104545858,(long)*(int *)(lVar24 + 0x70),
                 (ulong)*(uint *)(lVar24 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar24 = *plVar9;
  FUN_710323beb0(lVar24,(ulong *)&DAT_7104545868,(long)*(int *)(lVar24 + 0x70),
                 (ulong)*(uint *)(lVar24 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar24 = *plVar9;
  FUN_710323beb0(lVar24,(ulong *)&DAT_71045459a0,(long)*(int *)(lVar24 + 0x70),
                 (ulong)*(uint *)(lVar24 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  FUN_7101e04640(plVar9);
  FUN_7101df3910(plVar9);
  lVar24 = *plVar9;
  ppppppppplVar16 = (long *********)(long)*(int *)(lVar24 + 0x70);
  ppppbVar20 = (byte ****)(ulong)*(uint *)(lVar24 + 0x68);
  pppplVar23 = (long ****)0x0;
  FUN_710323beb0(lVar24,(ulong *)&DAT_71045459b0,(long)ppppppppplVar16,(ulong)ppppbVar20,
                 (long ****)0x0,param_6,param_7,param_8);
  FUN_7101dfb100(plVar9,extraout_x1_04,ppppppppplVar16,ppppbVar20,pppplVar23,param_6,param_7,param_8
                );
  lVar24 = *plVar9;
  uVar8 = FUN_710323cb80(lVar24,extraout_x1_05,ppppppppplVar16,ppppbVar20,pppplVar23,param_6,param_7
                         ,param_8);
  while ((uVar8 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar8 = FUN_710323cb80(lVar24,extraout_x1_06,ppppppppplVar16,ppppbVar20,pppplVar23,param_6,
                           param_7,param_8);
  }
  puVar32 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar16,ppppbVar20,pppplVar23,param_6,
                           param_7,param_8);
  if (puVar32 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
      local_190 = &DAT_00000088;
      ppppppppplVar16 = (long *********)&local_190;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
      if (((uVar8 & 1) != 0) &&
         (puVar32 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar16,ppppbVar20,pppplVar23,
                                   param_6,param_7,param_8), puVar32 != (undefined8 *)0x0))
      goto LAB_7101920c30;
    }
    puVar32 = (undefined8 *)0x0;
  }
LAB_7101920c30:
  *puVar32 = &PTR_FUN_71050b1af8;
  puVar32[1] = 0;
  puVar32[0xc] = 0;
  puVar32[0xd] = 0x1ffffffff;
  puVar32[2] = 0;
  puVar32[3] = 0;
  *(undefined1 *)(puVar32 + 0xb) = 0;
  puVar32[0xf] = plVar9;
  *(undefined1 *)(puVar32 + 0xe) = 1;
  puVar32[9] = 0;
  puVar32[10] = 0;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,600,(long ****)ppppppppplVar16,ppppbVar20,pppplVar23,param_6,param_7,
                          param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
      local_190 = (char *)0x258;
      pppplVar17 = (long ****)&local_190;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
      if (((uVar8 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,600,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,param_8)
         , puVar6 != (undefined8 *)0x0)) goto LAB_7101920cb8;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101920cb8:
  pppplVar17 = (long ****)0x14c;
  *puVar6 = plVar9;
  puVar6[1] = puVar6;
  *(undefined4 *)((long)puVar6 + 0x17c) = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[0x30] = 0xffffffff;
  *(undefined4 *)(puVar6 + 0x31) = 0xffffffff;
  *(undefined1 *)((long)puVar6 + 0x18c) = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  memset(puVar6 + 6,0,0x14c);
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,8,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,param_8);
  uVar21 = extraout_x1_07;
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
      local_190 = &DAT_00000008;
      pppplVar17 = (long ****)&local_190;
      auVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
      uVar21 = auVar34._8_8_;
      if (((auVar34._0_8_ & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,8,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,param_8),
         uVar21 = extraout_x1_08, puVar10 != (undefined8 *)0x0)) goto LAB_7101920d40;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101920d40:
  FUN_7103773200(puVar10,uVar21,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,param_8);
  puVar6[0x32] = puVar10;
  FUN_7103776290(puVar6 + 0x33,extraout_x1_09,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,
                 param_8);
  FUN_7101e9a580(puVar6 + 0x35,extraout_x1_10,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,
                 param_8);
  FUN_7101e96160(puVar6 + 0x37,extraout_x1_11,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,
                 param_8);
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x60,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,param_8);
  uVar21 = extraout_x1_12;
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
      local_190 = &DAT_00000060;
      pppplVar17 = (long ****)&local_190;
      auVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
      uVar21 = auVar34._8_8_;
      if (((auVar34._0_8_ & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x60,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,
                                   param_8), uVar21 = extraout_x1_13, puVar10 != (undefined8 *)0x0))
      goto LAB_7101920dc0;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101920dc0:
  puVar10[10] = 0;
  puVar10[0xb] = 0;
  puVar10[8] = 0;
  puVar10[9] = 0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  FUN_7103776290(puVar10,uVar21,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,param_8);
  puVar10[2] = &PTR_FUN_710523d9a8;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
      local_190 = &SUB_00000020;
      pppplVar17 = (long ****)&local_190;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
      if (((uVar8 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,
                                   param_8), puVar11 != (undefined8 *)0x0)) goto LAB_7101920e40;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101920e40:
  puVar11[2] = 0;
  puVar11[3] = 0;
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar10[3] = puVar11;
  puVar10[4] = &PTR_FUN_710523d9a8;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
      local_190 = &SUB_00000020;
      pppplVar17 = (long ****)&local_190;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
      if (((uVar8 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,
                                   param_8), puVar11 != (undefined8 *)0x0)) goto LAB_7101920ea0;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101920ea0:
  puVar11[2] = 0;
  puVar11[3] = 0;
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar10[5] = puVar11;
  puVar10[6] = &PTR_FUN_710523d9a8;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
      local_190 = &SUB_00000020;
      pppplVar17 = (long ****)&local_190;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
      if (((uVar8 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,
                                   param_8), puVar11 != (undefined8 *)0x0)) goto LAB_7101920f00;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101920f00:
  puVar11[2] = 0;
  puVar11[3] = 0;
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar10[7] = puVar11;
  puVar10[8] = 0;
  puVar10[9] = 0;
  puVar10[10] = &PTR_FUN_710523d9e8;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x18,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
      local_190 = &SUB_00000018;
      pppplVar17 = (long ****)&local_190;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
      if (((uVar8 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,
                                   param_8), puVar11 != (undefined8 *)0x0)) goto LAB_7101920f6c;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101920f6c:
  *(undefined1 *)(puVar11 + 2) = 1;
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar10[0xb] = puVar11;
  puVar6[0x39] = puVar10;
  *(undefined2 *)(puVar6 + 0x3a) = 0;
  *(undefined1 *)((long)puVar6 + 0x1d2) = 0;
  *(undefined8 *)((long)puVar6 + 0x1d4) = 0;
  *(undefined8 *)((long)puVar6 + 0x1dc) = 0x3f80000000000000;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x18,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,param_8);
  uVar21 = extraout_x1_14;
  if (puVar10 == (undefined8 *)0x0) {
    local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
    local_190 = &SUB_00000018;
    pppplVar17 = (long ****)&local_190;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,0x18,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,param_8);
    uVar21 = extraout_x1_15;
  }
  *puVar10 = 0;
  FUN_7103776290(puVar10 + 1,uVar21,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,param_8);
  puVar6[0x3d] = puVar10;
  *(undefined4 *)(puVar6 + 0x3e) = 0;
  *(undefined2 *)(puVar6 + 0x3f) = 0xffff;
  *(undefined1 *)((long)puVar6 + 0x1fa) = 0;
  *(undefined8 *)((long)puVar6 + 0x1fc) = 0;
  *(undefined8 *)((long)puVar6 + 0x204) = 0;
  *(undefined2 *)((long)puVar6 + 0x1fc) = 0xffff;
  *(undefined2 *)(puVar6 + 0x40) = 0xffff;
  *(undefined2 *)((long)puVar6 + 0x204) = 0xffff;
  *(undefined2 *)(puVar6 + 0x41) = 0xffff;
  *(undefined1 *)((long)puVar6 + 0x1fe) = 0;
  *(undefined1 *)((long)puVar6 + 0x202) = 0;
  *(undefined1 *)((long)puVar6 + 0x206) = 0;
  *(undefined1 *)((long)puVar6 + 0x20a) = 0;
  *(undefined8 *)((long)puVar6 + 0x225) = 0;
  puVar6[0x44] = 0;
  puVar6[0x43] = 0;
  puVar6[0x42] = 0;
  puVar6[0x46] = puVar6 + 0x46;
  puVar6[0x47] = puVar6 + 0x46;
  puVar6[0x48] = 0;
  *(undefined1 *)(puVar6 + 0x49) = 0;
  lVar24 = *DAT_7105329f98;
  plVar12 = (long *)FUN_710392e290(0x10,8,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,param_8);
  uVar21 = extraout_x1_16;
  if (plVar12 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
      local_190 = &DAT_00000008;
      pppplVar17 = (long ****)&local_190;
      auVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
      uVar21 = auVar34._8_8_;
      if (((auVar34._0_8_ & 1) != 0) &&
         (plVar12 = (long *)FUN_710392e290(0x10,8,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,
                                           param_8), uVar21 = extraout_x1_17, plVar12 != (long *)0x0
         )) goto LAB_71019210c0;
    }
    plVar12 = (long *)0x0;
  }
LAB_71019210c0:
  *plVar12 = lVar24 + 0x38;
  puVar6[8] = FUN_7101e48df0;
  puVar6[9] = 0;
  puVar6[10] = FUN_7101e48e70;
  puVar6[0xb] = 0;
  puVar6[0xe] = FUN_7101e49130;
  puVar6[0xf] = 0;
  puVar6[0x10] = FUN_7101e498e0;
  puVar6[0x11] = 0;
  puVar6[0x4a] = plVar12;
  puVar6[0x14] = FUN_7101e49d80;
  puVar6[0x15] = 0;
  puVar6[0x16] = FUN_7101e49fa0;
  puVar6[0x17] = 0;
  puVar6[0x1a] = FUN_7101e4a470;
  puVar6[0x1b] = 0;
  puVar6[0x1c] = FUN_7101e4a640;
  puVar6[0x1d] = 0;
  puVar6[0x20] = FUN_7101e4ae50;
  puVar6[0x21] = 0;
  puVar6[0x22] = FUN_7101e4af10;
  puVar6[0x23] = 0;
  puVar6[0xc] = FUN_7101e48fb0;
  puVar6[0xd] = 0;
  puVar6[0x12] = FUN_7101e49c40;
  puVar6[0x13] = 0;
  puVar6[0x18] = FUN_7101e4a370;
  puVar6[0x19] = 0;
  puVar6[6] = FUN_7101e48de0;
  puVar6[7] = 0;
  puVar6[0x1e] = FUN_7101e4a9d0;
  puVar6[0x1f] = 0;
  puVar6[0x24] = FUN_7101e48de0;
  puVar6[0x25] = 0;
  if (0x12 < *(uint *)((long)puVar6 + 0x17c)) goto LAB_7101921d34;
  *(undefined4 *)((long)puVar6 + (long)(int)*(uint *)((long)puVar6 + 0x17c) * 4 + 0x130) = 0;
  puVar32[0x10] = puVar6;
  puVar32[2] = &DAT_7105333600;
  *(undefined4 *)(puVar32 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar32 + 0x6c) = DAT_7105333664;
  do {
    uVar4 = DAT_7105333650;
    cVar1 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar3) {
      DAT_7105333650 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0' || (uVar4 & 1) != 0);
  puVar32[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar32;
  FUN_71032caea0((long)puVar32,uVar21,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,param_8);
  lVar24 = *(long *)(lVar7 + 0x180);
  *(undefined8 **)(lVar7 + 0x180) = puVar32;
  if (lVar24 != 0) {
    FUN_71032cad20(lVar24);
    puVar32 = *(undefined8 **)(lVar7 + 0x180);
  }
  puVar6 = (undefined8 *)puVar32[0x10];
  uVar21 = 1;
  FUN_71032cbf30(puVar6 + 0x32,*(long *)*puVar6,(ulong *)&DAT_7104545a40,(byte ****)0x1,pppplVar23,
                 param_6,param_7,param_8);
  lVar24 = *(long *)puVar6[0x32];
  puVar32 = puVar6 + 0x33;
  if (puVar32 != (undefined8 *)(lVar24 + 8)) {
    *(undefined8 *)puVar6[0x34] = **(undefined8 **)(lVar24 + 0x10);
    *(undefined8 *)(puVar6[0x34] + 8) = *(undefined8 *)(*(long *)(lVar24 + 0x10) + 8);
    lVar28 = *(long *)(lVar24 + 0x10);
    lVar24 = puVar6[0x34];
    if (lVar24 != lVar28) {
      **(undefined8 **)(lVar24 + 0x18) = **(undefined8 **)(lVar28 + 0x18);
      *(undefined8 *)(*(long *)(lVar24 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar28 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar24 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar28 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar24 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar28 + 0x18) + 0x18);
    }
  }
  lVar24 = **(long **)puVar6[0x32];
  *(undefined4 *)(*(long *)(lVar24 + 0x600) + 0x18) = 0xff0000f;
  *(undefined4 *)(*(long *)(lVar24 + 0x600) + 0x10) = 0x20;
  *(undefined4 *)(*(long *)(lVar24 + 0x600) + 0x14) = 0x40;
  local_190 = "selector_slot";
  local_188 = "set_parts_cursor";
  local_180 = "set_parts_slot_%02d";
  local_178 = CONCAT44(local_178._4_4_,0x1010004);
  FUN_7101e9aa40(puVar6 + 0x35,puVar32,&local_190,uVar21,pppplVar23,param_6,param_7,param_8);
  puVar10 = puVar6 + 0x37;
  pcVar18 = "selector_menu";
  pcVar22 = "set_parts_menu_%02d";
  FUN_7101e965f0((long)puVar10,puVar32,(long ****)"selector_menu","set_parts_menu_%02d",pppplVar23,
                 param_6,param_7,param_8);
  pcVar25 = (char *)(puVar6[0x38] + 8);
  bVar3 = *pcVar25 != '\0';
  FUN_710377a120((long)(pcVar25 + (ulong)bVar3 * 0x48 + 0x18),"cam_gym_continue",pcVar18,pcVar22,
                 pppplVar23,param_6,param_7,param_8);
  FUN_710377a120((long)(pcVar25 + (ulong)bVar3 * 0x48 + 0x28),"cam_gym_continue",pcVar18,pcVar22,
                 pppplVar23,param_6,param_7,param_8);
  FUN_710377a120((long)(pcVar25 + (ulong)bVar3 * 0x48 + 0x38),"cam_gym_continue",pcVar18,pcVar22,
                 pppplVar23,param_6,param_7,param_8);
  pcVar25 = (char *)(puVar6[0x38] + 8);
  cVar1 = *pcVar25;
  FUN_7103778300(0x3f800000,*(long *)(pcVar25 + (ulong)(cVar1 != '\0') * 0x48 + 0x10),0x710433a880);
  FUN_7103778300(0x3f800000,*(long *)(pcVar25 + (ulong)(cVar1 != '\0') * 0x48 + 0x10),0x710425fba5);
  FUN_7101e96fc0((long)puVar10,'\0',pcVar18,pcVar22,pppplVar23,param_6,param_7,param_8);
  pcVar25 = (char *)(puVar6[0x38] + 8);
  bVar3 = *pcVar25 != '\x01';
  FUN_710377a120((long)(pcVar25 + (ulong)bVar3 * 0x48 + 0x18),"cam_gym_receive",pcVar18,pcVar22,
                 pppplVar23,param_6,param_7,param_8);
  FUN_710377a120((long)(pcVar25 + (ulong)bVar3 * 0x48 + 0x28),"cam_gym_receive",pcVar18,pcVar22,
                 pppplVar23,param_6,param_7,param_8);
  FUN_710377a120((long)(pcVar25 + (ulong)bVar3 * 0x48 + 0x38),"cam_gym_receive",pcVar18,pcVar22,
                 pppplVar23,param_6,param_7,param_8);
  pcVar25 = (char *)(puVar6[0x38] + 8);
  cVar1 = *pcVar25;
  FUN_7103778300(0x3f800000,*(long *)(pcVar25 + (ulong)(cVar1 != '\x01') * 0x48 + 0x10),0x710433a880
                );
  FUN_7103778300(0x3f800000,*(long *)(pcVar25 + (ulong)(cVar1 != '\x01') * 0x48 + 0x10),0x710425fba5
                );
  FUN_7101e96fc0((long)puVar10,'\x01',pcVar18,pcVar22,pppplVar23,param_6,param_7,param_8);
  ppppbVar20 = (byte ****)0x0;
  pppplVar23 = (long ****)0x0;
  FUN_7101e945c0(puVar6 + 0x39,(long)puVar32,(byte ****)"set_parts_talk",0,(long ****)0x0,param_6,
                 param_7,param_8);
  lVar24 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
  uVar4 = FUN_71032a7800(lVar24,*(ulong *)(*DAT_7105329fa0 + 0x7e8));
  if (uVar4 < (uint)((int)((ulong)(*(long *)(lVar24 + 0x28) - *(long *)(lVar24 + 0x20)) >> 6) *
                    -0x33333333)) {
    uVar14 = *(ushort *)(*(long *)(lVar24 + 0x20) + (ulong)uVar4 * 0x140);
  }
  else {
    uVar14 = 0xffff;
  }
  FUN_7101e95dd0(puVar6 + 0x39,uVar14,(long *)*puVar6,ppppbVar20,pppplVar23,param_6,param_7,param_8)
  ;
  pcVar18 = "selector_return";
  pcVar22 = "set_btn_return";
  FUN_7101e95110(puVar6 + 0x3d,puVar32,(long ****)"selector_return",(byte ****)"set_btn_return",
                 pppplVar23,param_6,param_7,param_8);
  FUN_7103778300(0x3f800000,*(long *)(puVar6[0x3d] + 0x10),0x710443376c);
  (**(code **)(**(long **)puVar6[0x3d] + 0x60))(*(long **)puVar6[0x3d],0);
  if (*(char *)(*(undefined8 **)(*(long *)puVar6[0x4a] + 8) + 0x71) == '\0') {
    uVar21 = 0;
  }
  else {
    uVar21 = **(undefined8 **)(*(long *)puVar6[0x4a] + 8);
  }
  puVar32 = (undefined8 *)
            FUN_710392e290(0x10,0xc0,(long ****)pcVar18,(byte ****)pcVar22,pppplVar23,param_6,
                           param_7,param_8);
  if (puVar32 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
      local_190 = &DAT_000000c0;
      pcVar18 = (char *)&local_190;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
      if (((uVar8 & 1) != 0) &&
         (puVar32 = (undefined8 *)
                    FUN_710392e290(0x10,0xc0,(long ****)pcVar18,(byte ****)pcVar22,pppplVar23,
                                   param_6,param_7,param_8), puVar32 != (undefined8 *)0x0))
      goto LAB_71019215bc;
    }
    puVar32 = (undefined8 *)0x0;
  }
LAB_71019215bc:
  *puVar32 = puVar6 + 0x35;
  puVar32[1] = uVar21;
  puVar32[6] = 0;
  *(undefined1 *)(puVar32 + 10) = 0;
  *(undefined1 *)(puVar32 + 0xb) = 0;
  *(undefined1 *)(puVar32 + 0xc) = 0;
  *(undefined1 *)(puVar32 + 9) = 0;
  puVar32[8] = 0;
  puVar32[0x15] = 0;
  puVar32[0x16] = 0;
  puVar32[0x13] = 0;
  puVar32[0x14] = 0;
  puVar32[0x11] = 0;
  puVar32[0x12] = 0;
  puVar32[0xf] = 0;
  puVar32[0x10] = 0;
  puVar32[0xd] = 0;
  puVar32[0xe] = 0;
  uVar8 = puVar6[0x44];
  puVar6[0x44] = puVar32;
  if (uVar8 != 0) {
    uVar13 = *(ulong *)(uVar8 + 0xb0);
    *(undefined8 *)(uVar8 + 0xb0) = 0;
    if (uVar13 != 0) {
      *(undefined ***)(uVar13 + 8) = &PTR_FUN_7104f73d50;
      if (((*(long *)(uVar13 + 0x10) != 0) && (DAT_7106dd53a8 == '\x01')) &&
         (*(int *)(uVar13 + 0x18) == DAT_7106dd53ac)) {
        piVar26 = (int *)(*(long *)(uVar13 + 0x10) + 0x38);
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar26,0x10);
          if (bVar3) {
            *piVar26 = *piVar26 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *(undefined8 *)(uVar13 + 0x10) = 0;
      *(undefined1 *)(uVar13 + 0x20) = 0;
      FUN_710392eb40(uVar13);
    }
    plVar12 = *(long **)(uVar8 + 0x30);
    if ((long *)(uVar8 + 0x10) == plVar12) {
      pcVar27 = *(code **)(*plVar12 + 0x20);
LAB_710192168c:
      (*pcVar27)();
    }
    else if (plVar12 != (long *)0x0) {
      pcVar27 = *(code **)(*plVar12 + 0x28);
      goto LAB_710192168c;
    }
    FUN_710392eb40(uVar8);
  }
  puVar32 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)pcVar18,(byte ****)pcVar22,pppplVar23,param_6,
                           param_7,param_8);
  if (puVar32 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
      local_190 = &DAT_00000088;
      pppplVar17 = (long ****)&local_190;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
      if (((uVar8 & 1) != 0) &&
         (puVar32 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,pppplVar17,(byte ****)pcVar22,pppplVar23,param_6,
                                   param_7,param_8), puVar32 != (undefined8 *)0x0))
      goto LAB_71019216f4;
    }
    puVar32 = (undefined8 *)0x0;
  }
LAB_71019216f4:
  pppplVar17 = (long ****)0x0;
  ppppbVar20 = (byte ****)0x0;
  FUN_7101e99cb0(puVar32,plVar9,(long ****)0x0,(byte ****)0x0,pppplVar23,param_6,param_7,param_8);
  puVar32[2] = &DAT_7105333600;
  *(undefined4 *)(puVar32 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar32 + 0x6c) = DAT_7105333664;
  do {
    uVar4 = DAT_7105333650;
    cVar1 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar3) {
      DAT_7105333650 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0' || (uVar4 & 1) != 0);
  puVar32[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar32;
  FUN_71032caea0((long)puVar32,extraout_x1_18,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,
                 param_8);
  lVar24 = *(long *)(lVar7 + 0x188);
  *(undefined8 **)(lVar7 + 0x188) = puVar32;
  if (lVar24 != 0) {
    FUN_71032cad20(lVar24);
    puVar32 = *(undefined8 **)(lVar7 + 0x188);
  }
  FUN_7101e9a160((undefined8 *)puVar32[0x10]);
  local_188 = (char *)0x52ffff0000000000;
  local_180 = (char *)CONCAT44(local_180._4_4_,0xff000000);
  local_178 = 0;
  local_190 = (char *)CONCAT44(local_190._4_4_,9);
  puVar32 = (undefined8 *)
            FUN_710392e290(0x10,0x88,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,param_8);
  if (puVar32 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80[0] = (long ***)&DAT_00000088;
      pppplVar17 = local_80;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar8 & 1) != 0) &&
         (puVar32 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,
                                   param_8), puVar32 != (undefined8 *)0x0)) goto LAB_71019217ec;
    }
    puVar32 = (undefined8 *)0x0;
  }
LAB_71019217ec:
  *puVar32 = &PTR_FUN_71050b0e08;
  puVar32[1] = 0;
  puVar32[0xc] = 0;
  puVar32[0xd] = 0x1ffffffff;
  puVar32[2] = 0;
  puVar32[3] = 0;
  *(undefined1 *)(puVar32 + 0xb) = 0;
  puVar32[0xf] = plVar9;
  *(undefined1 *)(puVar32 + 0xe) = 1;
  puVar32[9] = 0;
  puVar32[10] = 0;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x148,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80[0] = (long ***)&DAT_00000148;
      pppplVar17 = local_80;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar8 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x148,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,
                                  param_8), puVar6 != (undefined8 *)0x0)) goto LAB_7101921874;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101921874:
  pppplVar19 = (long ****)(puVar6 + 1);
  *puVar6 = plVar9;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,8,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,param_8);
  uVar21 = extraout_x1_19;
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80[0] = (long ***)&DAT_00000008;
      pppplVar17 = local_80;
      auVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      uVar21 = auVar34._8_8_;
      if (((auVar34._0_8_ & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,8,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,param_8),
         uVar21 = extraout_x1_20, puVar10 != (undefined8 *)0x0)) goto LAB_71019218d8;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_71019218d8:
  FUN_7103773200(puVar10,uVar21,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,param_8);
  puVar6[1] = puVar10;
  FUN_7103776290(puVar6 + 2,extraout_x1_21,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,param_8)
  ;
  FUN_7101df74b0(puVar6 + 4,plVar9,pppplVar19,ppppbVar20,pppplVar23,param_6,param_7,param_8);
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0xd] = 0;
  puVar6[0xe] = 0;
  *(undefined4 *)(puVar6 + 0x27) = 0xffffffff;
  *(undefined1 *)((long)puVar6 + 0x13c) = 0;
  *(undefined2 *)(puVar6 + 0x28) = 0;
  *(undefined4 *)((long)puVar6 + 0x144) = 0;
  puVar6[0xe] = FUN_7101debca0;
  puVar6[0xf] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  puVar6[0x10] = FUN_7101debd50;
  puVar6[0x11] = 0;
  puVar6[0x13] = 0;
  puVar6[0x14] = 0;
  puVar6[0x12] = FUN_7101dec1e0;
  puVar6[0x13] = 0;
  puVar6[0x15] = 0;
  puVar6[0x16] = 0;
  puVar6[0x14] = FUN_7101ded970;
  puVar6[0x15] = 0;
  puVar6[0x17] = 0;
  puVar6[0x18] = 0;
  puVar6[0x16] = FUN_7101dedc10;
  puVar6[0x17] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[7] = puVar6;
  puVar6[8] = 0;
  puVar6[0x25] = 0;
  puVar6[0x26] = 0xffffffff;
  puVar6[0x23] = 0;
  puVar6[0x24] = 0;
  puVar6[0x21] = 0;
  puVar6[0x22] = 0;
  puVar6[0x1f] = 0;
  puVar6[0x20] = 0;
  puVar6[0x1d] = 0;
  puVar6[0x1e] = 0;
  puVar6[0x1b] = 0;
  puVar6[0x1c] = 0;
  *(undefined4 *)(puVar6 + 0x1c) = 0;
  puVar6[0x19] = 0;
  puVar6[0x1a] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = 0;
  puVar6[0xc] = FUN_7101debc90;
  puVar6[0xd] = 0;
  puVar6[0x18] = FUN_7101dedd60;
  puVar6[0x19] = 0;
  puVar6[0x1a] = FUN_7101debc90;
  puVar6[0x1b] = 0;
  puVar32[0x10] = puVar6;
  puVar32[2] = &DAT_7105333600;
  uVar2 = DAT_7105333664;
  *(undefined4 *)(puVar32 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar32 + 0x6c) = uVar2;
  do {
    uVar4 = DAT_7105333650;
    cVar1 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar3) {
      DAT_7105333650 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0' || (uVar4 & 1) != 0);
  puVar32[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar32;
  FUN_71032caea0((long)puVar32,extraout_x1_22,pppplVar19,ppppbVar20,pppplVar23,param_6,param_7,
                 param_8);
  lVar24 = *(long *)(lVar7 + 0x198);
  *(undefined8 **)(lVar7 + 0x198) = puVar32;
  if (lVar24 != 0) {
    FUN_71032cad20(lVar24);
    puVar32 = *(undefined8 **)(lVar7 + 0x198);
  }
  pppplVar17 = (long ****)0x1;
  FUN_7101deddf0((undefined8 *)puVar32[0x10],(int *)&local_190,(long *********)0x1,ppppbVar20,
                 pppplVar23,param_6,param_7,param_8);
  *(undefined1 *)(*(long *)(lVar7 + 0x198) + 0x70) = 1;
  puVar32 = (undefined8 *)
            FUN_710392e290(0x10,0x88,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,param_8);
  if (puVar32 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
      local_190 = &DAT_00000088;
      pppplVar17 = (long ****)&local_190;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
      if (((uVar8 & 1) != 0) &&
         (puVar32 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,
                                   param_8), puVar32 != (undefined8 *)0x0)) goto LAB_7101921a90;
    }
    puVar32 = (undefined8 *)0x0;
  }
LAB_7101921a90:
  FUN_7101d8f690(puVar32,plVar9,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,param_8);
  puVar32[2] = &DAT_7105333600;
  *(undefined4 *)(puVar32 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar32 + 0x6c) = DAT_7105333664;
  do {
    uVar4 = DAT_7105333650;
    cVar1 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar3) {
      DAT_7105333650 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0' || (uVar4 & 1) != 0);
  puVar32[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar32;
  FUN_71032caea0((long)puVar32,extraout_x1_23,pppplVar17,ppppbVar20,pppplVar23,param_6,param_7,
                 param_8);
  lVar24 = *(long *)(lVar7 + 400);
  *(undefined8 **)(lVar7 + 400) = puVar32;
  if (lVar24 != 0) {
    FUN_71032cad20(lVar24);
    puVar32 = *(undefined8 **)(lVar7 + 400);
  }
  ppppbVar20 = (byte ****)0x0;
  pppplVar23 = (long ****)0x0;
  uVar21 = 0;
  FUN_7101d88b10((undefined8 *)puVar32[0x10],3,0xffff,0,(long ****)0x0,0,param_7,param_8);
  *(undefined1 *)(*(long *)(lVar7 + 400) + 0x70) = 1;
  lVar24 = DAT_710532f8d0;
  uVar8 = FUN_71032575c0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x278),
                         *(ulong *)(*DAT_7105329fa0 + 0x7f0));
  ppppppppplVar16 = (long *********)0x1;
  FUN_71033145d0(lVar24,uVar8,1,ppppbVar20,pppplVar23,uVar21,param_7,param_8);
  lVar24 = *(long *)(*(long *)(lVar7 + 0x180) + 0x80);
  if (*(char *)(lVar24 + 0x1b0) != '\0') {
    bVar33 = 0;
    do {
      uVar8 = FUN_7101e4c0a0(lVar24,bVar33,ppppppppplVar16,ppppbVar20,pppplVar23,uVar21,param_7,
                             param_8);
      if ((uVar8 & 1) != 0) {
        plVar9 = (long *)FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar16,ppppbVar20,pppplVar23,
                                        uVar21,param_7,param_8);
        if (plVar9 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
            local_190 = &SUB_00000018;
            ppppppppplVar16 = (long *********)&local_190;
            uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
            if (((uVar8 & 1) != 0) &&
               (plVar9 = (long *)FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar16,ppppbVar20,
                                                pppplVar23,uVar21,param_7,param_8),
               plVar9 != (long *)0x0)) goto LAB_7101921bd0;
          }
          plVar9 = (long *)0x0;
        }
LAB_7101921bd0:
        *(byte *)(plVar9 + 2) = bVar33;
        plVar9[1] = lVar24 + 0x230;
        lVar28 = *(long *)(lVar24 + 0x230);
        *plVar9 = lVar28;
        *(long **)(lVar28 + 8) = plVar9;
        *(long **)(lVar24 + 0x230) = plVar9;
        *(long *)(lVar24 + 0x240) = *(long *)(lVar24 + 0x240) + 1;
      }
      bVar33 = bVar33 + 1;
    } while (bVar33 < *(byte *)(lVar24 + 0x1b0));
  }
  if (*(uint *)(lVar24 + 0x17c) < 0x13) {
    *(undefined4 *)(lVar24 + (long)(int)*(uint *)(lVar24 + 0x17c) * 4 + 0x130) = 1;
    *(undefined8 *)(lVar7 + 8) = 0;
    *(undefined8 *)(lVar7 + 0x10) = 0;
    *(undefined8 *)(lVar7 + 0x15c) = 0;
    *(undefined8 *)(lVar7 + 0x154) = 0;
    *(undefined8 *)(lVar7 + 0x14c) = 0;
    *(undefined8 *)(lVar7 + 0x144) = 0;
    *(undefined8 *)(lVar7 + 0x13c) = 0;
    *(undefined8 *)(lVar7 + 0x134) = 0;
    *(undefined8 *)(lVar7 + 300) = 0;
    *(undefined4 *)(lVar7 + 0x164) = 0;
    *(undefined8 *)(lVar7 + 0x124) = 0;
    *(undefined8 *)(lVar7 + 0x11c) = 0;
    *(undefined8 *)(lVar7 + 0x168) = 0xffffffff;
    *(undefined4 *)(lVar7 + 0x170) = 0xffffffff;
    *(undefined1 *)(lVar7 + 0x174) = 0;
    *(undefined4 *)(lVar7 + 0x118) = 1;
    return;
  }
LAB_7101921d34:
                    /* WARNING: Subroutine does not return */
  abort();
}

