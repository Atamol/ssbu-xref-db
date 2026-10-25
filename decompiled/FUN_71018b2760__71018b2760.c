// addr:      71018b2760
// offset:    0x18b2760
// name:      FUN_71018b2760
// mangled:   
// signature: undefined __cdecl FUN_71018b2760(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71018b2760(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
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
  undefined8 uVar15;
  long *********ppppppppplVar16;
  long *********ppppppppplVar17;
  long *********ppppppppplVar18;
  long *********ppppppppplVar19;
  long *********ppppppppplVar20;
  long *********ppppppppplVar21;
  long *********ppppppppplVar22;
  long ****pppplVar23;
  byte ****ppppbVar24;
  long ****pppplVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  undefined1 auVar29 [16];
  long ********local_60;
  ulong local_58;
  undefined2 local_48;
  undefined4 local_44;
  
  ppppppppplVar18 = &local_60;
  ppppppppplVar16 = &local_60;
  ppppppppplVar17 = &local_60;
  ppppppppplVar19 = &local_60;
  ppppppppplVar20 = &local_60;
  ppppppppplVar21 = &local_60;
  ppppppppplVar22 = &local_60;
  lVar6 = FUN_710392e290(0x10,0xe8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (lVar6 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_60 = (long ********)&DAT_000000e8;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      param_3 = ppppppppplVar18;
      if (((uVar7 & 1) != 0) &&
         (lVar6 = FUN_710392e290(0x10,0xe8,(long ****)ppppppppplVar18,param_4,param_5,param_6,
                                 param_7,param_8), param_3 = ppppppppplVar18, lVar6 != 0))
      goto LAB_71018b27e0;
    }
    lVar6 = 0;
  }
LAB_71018b27e0:
  *(undefined8 *)(lVar6 + 0x10) = 0;
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined4 *)(lVar6 + 0xc0) = 0xffffffff;
  *(long *)lVar6 = lVar6;
  *(undefined8 *)(lVar6 + 8) = 0;
  *(undefined1 *)(lVar6 + 0xc4) = 0;
  *(undefined4 *)(lVar6 + 200) = 0;
  *(undefined8 *)(lVar6 + 0xb0) = 0;
  *(undefined8 *)(lVar6 + 0xb8) = 0xffffffff;
  *(undefined8 *)(lVar6 + 0xa0) = 0;
  *(undefined8 *)(lVar6 + 0xa8) = 0;
  *(undefined8 *)(lVar6 + 0x90) = 0;
  *(undefined8 *)(lVar6 + 0x98) = 0;
  *(undefined8 *)(lVar6 + 0x80) = 0;
  *(undefined8 *)(lVar6 + 0x88) = 0;
  *(undefined8 *)(lVar6 + 0x70) = 0;
  *(undefined8 *)(lVar6 + 0x78) = 0;
  *(undefined8 *)(lVar6 + 0x60) = 0;
  *(undefined8 *)(lVar6 + 0x68) = 0;
  *(undefined8 *)(lVar6 + 0x50) = 0;
  *(undefined8 *)(lVar6 + 0x58) = 0;
  *(undefined8 *)(lVar6 + 0x40) = 0;
  *(undefined8 *)(lVar6 + 0x48) = 0;
  *(undefined8 *)(lVar6 + 0x30) = 0;
  *(undefined8 *)(lVar6 + 0x38) = 0;
  *(undefined8 *)(lVar6 + 0x20) = 0;
  *(undefined8 *)(lVar6 + 0x28) = 0;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar15 = extraout_x1;
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_60 = (long ********)&DAT_00000080;
      auVar29 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      uVar15 = auVar29._8_8_;
      param_3 = ppppppppplVar16;
      if (((auVar29._0_8_ & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x80,(long ****)ppppppppplVar16,param_4,param_5,param_6,
                                  param_7,param_8), uVar15 = extraout_x1_00,
         param_3 = ppppppppplVar16, puVar8 != (undefined8 *)0x0)) goto LAB_71018b2874;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71018b2874:
  *puVar8 = &PTR_FUN_7105181b40;
  puVar8[2] = 0;
  puVar8[1] = puVar8 + 2;
  puVar8[5] = 0;
  puVar8[3] = 0;
  puVar8[4] = puVar8 + 5;
  puVar8[8] = 0;
  puVar8[6] = 0;
  puVar8[7] = puVar8 + 8;
  puVar8[0xb] = 0;
  puVar8[9] = 0;
  puVar8[10] = puVar8 + 0xb;
  puVar8[0xc] = 0;
  *(undefined4 *)(puVar8 + 0xd) = 2;
  *(undefined4 *)(puVar8 + 0xf) = 0;
  puVar8[0xe] = 0;
  *(undefined1 *)(lVar6 + 0xe0) = 0;
  *(undefined8 **)(lVar6 + 0xd0) = puVar8;
  *(undefined8 *)(lVar6 + 0xd8) = 0;
  puVar8 = *(undefined8 **)(param_2 + 0xa8);
  if (puVar8 != (undefined8 *)0x0) {
    if (((DAT_7105324998 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_7105324998), iVar5 != 0)) {
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
      DAT_71053249a0 = &DAT_7105324760;
      __cxa_guard_release(&DAT_7105324998);
    }
    auVar29 = (**(code **)*puVar8)(puVar8);
    uVar15 = auVar29._8_8_;
    for (puVar9 = auVar29._0_8_; puVar9 != (undefined8 *)0x0; puVar9 = (undefined8 *)*puVar9) {
      if ((undefined8 **)puVar9 == &DAT_71053249a0) {
        *(undefined1 *)(lVar6 + 0xe0) = *(undefined1 *)(puVar8 + 1);
        break;
      }
    }
  }
  *(code **)(lVar6 + 0x28) = FUN_71018b16b0;
  *(undefined8 *)(lVar6 + 0x30) = 0;
  *(code **)(lVar6 + 0x38) = FUN_71018b1ab0;
  *(undefined8 *)(lVar6 + 0x40) = 0;
  *(code **)(lVar6 + 0x48) = FUN_71018b1db0;
  *(undefined8 *)(lVar6 + 0x50) = 0;
  *(code **)(lVar6 + 0x58) = FUN_71018b2480;
  *(undefined8 *)(lVar6 + 0x60) = 0;
  if (DAT_710532f498 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)
              FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    uVar15 = extraout_x1_01;
    if (puVar10 == (undefined4 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_44 = 0;
        local_60 = (long ********)&DAT_00000008;
        auVar29 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
        uVar15 = auVar29._8_8_;
        param_3 = ppppppppplVar17;
        if (((auVar29._0_8_ & 1) != 0) &&
           (puVar10 = (undefined4 *)
                      FUN_710392e290(0x10,8,(long ****)ppppppppplVar17,param_4,param_5,param_6,
                                     param_7,param_8), uVar15 = extraout_x1_02,
           param_3 = ppppppppplVar17, puVar10 != (undefined4 *)0x0)) goto LAB_71018b29ac;
      }
      puVar10 = (undefined4 *)0x0;
    }
LAB_71018b29ac:
    *puVar10 = 2;
    *(undefined1 *)(puVar10 + 1) = 0;
    DAT_710532f498 = puVar10;
  }
  puVar10 = DAT_710532f498;
  uVar7 = *(ulong *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar6;
  if (uVar7 != 0) {
    if (puVar10 != (undefined4 *)0x0) {
      FUN_710392eb40((ulong)puVar10);
      DAT_710532f498 = (undefined4 *)0x0;
      uVar15 = extraout_x1_03;
    }
    lVar6 = *(long *)(uVar7 + 0xd8);
    *(undefined8 *)(uVar7 + 0xd8) = 0;
    if (lVar6 != 0) {
      FUN_71032cad20(lVar6);
      uVar15 = extraout_x1_04;
    }
    FUN_710323b9e0(*(long *)(uVar7 + 0xd0),uVar15,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar11 = *(long **)(uVar7 + 0xd0);
    *(undefined8 *)(uVar7 + 0xd0) = 0;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 8))();
    }
    FUN_710392eb40(uVar7);
    lVar6 = *(long *)(param_1 + 0x58);
  }
  plVar11 = (long *)(lVar6 + 0xd0);
  lVar12 = *plVar11;
  ppppppppplVar18 = (long *********)(long)*(int *)(lVar12 + 0x70);
  ppppbVar24 = (byte ****)(ulong)*(uint *)(lVar12 + 0x68);
  pppplVar25 = (long ****)0x0;
  FUN_710323beb0(lVar12,(ulong *)&DAT_7104545400,(long)ppppppppplVar18,(ulong)ppppbVar24,
                 (long ****)0x0,param_6,param_7,param_8);
  lVar12 = *plVar11;
  uVar7 = FUN_710323cb80(lVar12,extraout_x1_05,ppppppppplVar18,ppppbVar24,pppplVar25,param_6,param_7
                         ,param_8);
  while ((uVar7 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar7 = FUN_710323cb80(lVar12,extraout_x1_06,ppppppppplVar18,ppppbVar24,pppplVar25,param_6,
                           param_7,param_8);
  }
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar18,ppppbVar24,pppplVar25,param_6,param_7
                          ,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_60 = (long ********)&DAT_00000088;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      ppppppppplVar18 = ppppppppplVar19;
      if (((uVar7 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar19,ppppbVar24,pppplVar25,param_6
                                  ,param_7,param_8), ppppppppplVar18 = ppppppppplVar19,
         puVar8 != (undefined8 *)0x0)) goto LAB_71018b2ab8;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71018b2ab8:
  *puVar8 = &PTR_FUN_71050ae6d8;
  puVar8[1] = 0;
  *(undefined1 *)(puVar8 + 0xb) = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[0xf] = plVar11;
  *(undefined1 *)(puVar8 + 0xe) = 1;
  puVar8[9] = 0;
  puVar8[10] = 0;
  puVar8[0xc] = 0;
  puVar8[0xd] = 0x1ffffffff;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x2b8,(long ****)ppppppppplVar18,ppppbVar24,pppplVar25,param_6,
                          param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_60 = (long ********)0x2b8;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      ppppppppplVar18 = ppppppppplVar20;
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x2b8,(long ****)ppppppppplVar20,ppppbVar24,pppplVar25,
                                  param_6,param_7,param_8), ppppppppplVar18 = ppppppppplVar20,
         puVar9 != (undefined8 *)0x0)) goto LAB_71018b2b40;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71018b2b40:
  *(undefined2 *)(puVar9 + 1) = 0x100;
  *(undefined4 *)((long)puVar9 + 0xc) = 0x4001;
  *(undefined1 *)(puVar9 + 2) = 1;
  *(undefined4 *)((long)puVar9 + 0x14) = 1;
  *(undefined1 *)(puVar9 + 3) = 0;
  *puVar9 = &PTR_FUN_71050ae698;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)ppppppppplVar18,ppppbVar24,pppplVar25,param_6,param_7,
                           param_8);
  uVar15 = extraout_x1_07;
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_60 = (long ********)&DAT_00000008;
      auVar29 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      uVar15 = auVar29._8_8_;
      ppppppppplVar18 = ppppppppplVar21;
      if (((auVar29._0_8_ & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)ppppppppplVar21,ppppbVar24,pppplVar25,param_6,
                                   param_7,param_8), uVar15 = extraout_x1_08,
         ppppppppplVar18 = ppppppppplVar21, puVar13 != (undefined8 *)0x0)) goto LAB_71018b2bc4;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_71018b2bc4:
  FUN_7103773200(puVar13,uVar15,(long ****)ppppppppplVar18,ppppbVar24,pppplVar25,param_6,param_7,
                 param_8);
  puVar9[4] = puVar13;
  puVar13 = puVar9 + 5;
  FUN_7103776290(puVar13,extraout_x1_09,(long ****)ppppppppplVar18,ppppbVar24,pppplVar25,param_6,
                 param_7,param_8);
  FUN_7103776290(puVar9 + 7,extraout_x1_10,(long ****)ppppppppplVar18,ppppbVar24,pppplVar25,param_6,
                 param_7,param_8);
  *(undefined4 *)(puVar9 + 0x2d) = 0xffffffff;
  puVar9[0xb] = 0;
  puVar9[0xc] = 0;
  *(undefined1 *)((long)puVar9 + 0x16c) = 0;
  *(undefined4 *)(puVar9 + 0x2e) = 0xffffffff;
  puVar9[0x2f] = 0;
  *(undefined2 *)(puVar9 + 0x30) = 0;
  puVar9[9] = puVar9;
  puVar9[10] = 0;
  puVar9[0x2b] = 0;
  puVar9[0x2c] = 0xffffffff;
  puVar9[0x29] = 0;
  puVar9[0x2a] = 0;
  puVar9[0x27] = 0;
  puVar9[0x28] = 0;
  puVar9[0x25] = 0;
  puVar9[0x26] = 0;
  puVar9[0x23] = 0;
  puVar9[0x24] = 0;
  puVar9[0x21] = 0;
  puVar9[0x22] = 0;
  puVar9[0x1f] = 0;
  puVar9[0x20] = 0;
  puVar9[0x1d] = 0;
  puVar9[0x1e] = 0;
  puVar9[0x1b] = 0;
  puVar9[0x1c] = 0;
  puVar9[0x19] = 0;
  puVar9[0x1a] = 0;
  puVar9[0x17] = 0;
  puVar9[0x18] = 0;
  puVar9[0x15] = 0;
  puVar9[0x16] = 0;
  puVar9[0x13] = 0;
  puVar9[0x14] = 0;
  puVar9[0x11] = 0;
  puVar9[0x12] = 0;
  puVar9[0xf] = 0;
  puVar9[0x10] = 0;
  puVar9[0xd] = 0;
  puVar9[0xe] = 0;
  puVar14 = (undefined8 *)
            FUN_710392e290(0x10,0xb8,(long ****)ppppppppplVar18,ppppbVar24,pppplVar25,param_6,
                           param_7,param_8);
  uVar15 = extraout_x1_11;
  if (puVar14 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_60 = (long ********)&DAT_000000b8;
      auVar29 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      uVar15 = auVar29._8_8_;
      ppppppppplVar18 = ppppppppplVar22;
      if (((auVar29._0_8_ & 1) != 0) &&
         (puVar14 = (undefined8 *)
                    FUN_710392e290(0x10,0xb8,(long ****)ppppppppplVar22,ppppbVar24,pppplVar25,
                                   param_6,param_7,param_8), uVar15 = extraout_x1_12,
         ppppppppplVar18 = ppppppppplVar22, puVar14 != (undefined8 *)0x0)) goto LAB_71018b2c98;
    }
    puVar14 = (undefined8 *)0x0;
  }
LAB_71018b2c98:
  *(undefined4 *)(puVar14 + 0x15) = 0xffffffff;
  *puVar14 = &PTR_FUN_71050a7138;
  puVar14[1] = puVar14;
  puVar14[7] = 0;
  puVar14[8] = 0;
  *(undefined1 *)((long)puVar14 + 0xac) = 0;
  *(undefined4 *)(puVar14 + 0x16) = 0xffffffff;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[6] = FUN_71019904d0;
  puVar14[9] = 0;
  puVar14[10] = 0;
  *(undefined4 *)(puVar14 + 10) = 0;
  puVar14[8] = FUN_71019904e0;
  puVar14[9] = 0;
  puVar14[2] = 0;
  puVar14[3] = 0;
  puVar14[4] = 0;
  puVar14[5] = 0;
  puVar14[0x13] = 0;
  puVar14[0x14] = 0xffffffff;
  puVar14[0x11] = 0;
  puVar14[0x12] = 0;
  puVar14[0xf] = 0;
  puVar14[0x10] = 0;
  puVar14[0xd] = 0;
  puVar14[0xe] = 0;
  puVar14[0xb] = 0;
  puVar14[0xc] = 0;
  puVar9[0x49] = 0xffffffff;
  *(undefined4 *)(puVar9 + 0x4a) = 0xffffffff;
  *(undefined1 *)((long)puVar9 + 0x254) = 0;
  puVar9[0x48] = 0;
  puVar9[0x47] = 0;
  puVar9[0x46] = 0;
  puVar9[0x45] = 0;
  puVar9[0x44] = 0;
  puVar9[0x43] = 0;
  puVar9[0x42] = 0;
  puVar9[0x41] = 0;
  *(undefined4 *)(puVar9 + 0x4c) = 0;
  puVar9[0x31] = puVar14;
  puVar9[0x32] = puVar9 + 0x32;
  puVar9[0x4b] = &DAT_300000002;
  *(undefined1 *)((long)puVar9 + 0x264) = 1;
  puVar9[0x37] = 0;
  puVar9[0x38] = 0;
  puVar9[0x37] = FUN_7103345430;
  puVar9[0x38] = 0;
  puVar9[0x39] = 0;
  puVar9[0x3a] = 0;
  puVar9[0x39] = FUN_7103345440;
  puVar9[0x3a] = 0;
  puVar9[0x3b] = 0;
  puVar9[0x3c] = 0;
  puVar9[0x3b] = FUN_7103345520;
  puVar9[0x3c] = 0;
  puVar9[0x33] = 0;
  puVar9[0x34] = 0;
  puVar9[0x35] = 0;
  puVar9[0x36] = 0;
  puVar9[0x3f] = 0;
  puVar9[0x40] = 0;
  *(undefined4 *)(puVar9 + 0x3f) = 0;
  puVar9[0x3d] = 0;
  puVar9[0x3e] = 0;
  puVar9[0x3d] = FUN_71033457a0;
  puVar9[0x3e] = 0;
  FUN_7103382c30(puVar9 + 0x4d,uVar15,(long ****)ppppppppplVar18,ppppbVar24,pppplVar25,param_6,
                 param_7,param_8);
  puVar9[0x51] = 0x87650000000000;
  puVar9[0x4f] = &PTR_FUN_7104f73d30;
  puVar9[0x53] = 0xffffffffffffffff;
  puVar9[0xe] = FUN_7101cf4d30;
  puVar9[0xf] = 0;
  puVar9[0x12] = FUN_7101cf50c0;
  puVar9[0x13] = 0;
  puVar9[0x10] = FUN_7101cf4d40;
  puVar9[0x11] = 0;
  puVar9[0x14] = FUN_7101cf5160;
  puVar9[0x15] = 0;
  puVar9[0x50] = 0;
  *(undefined1 *)(puVar9 + 0x52) = 0;
  *(undefined4 *)(puVar9 + 0x4e) = 0;
  *(undefined4 *)((long)puVar9 + 0x2b4) = 0;
  *(undefined1 *)((long)puVar9 + 0x2b2) = 0;
  *(undefined2 *)(puVar9 + 0x56) = 0;
  puVar9[0x55] = 0;
  puVar9[0x54] = 0;
  puVar9[0x16] = FUN_7101cf57b0;
  puVar9[0x17] = 0;
  puVar9[0x1e] = FUN_7101cf5ea0;
  puVar9[0x1f] = 0;
  puVar9[0x1c] = FUN_7101cf5f90;
  puVar9[0x1d] = 0;
  puVar9[0x18] = FUN_7101cf5e30;
  puVar9[0x19] = 0;
  puVar9[0x1a] = FUN_7101cf5fd0;
  puVar9[0x1b] = 0;
  puVar9[0x20] = FUN_7101cf6030;
  puVar9[0x21] = 0;
  if (*(uint *)((long)puVar9 + 0x15c) < 0x13) {
    *(undefined4 *)((long)puVar9 + (long)(int)*(uint *)((long)puVar9 + 0x15c) * 4 + 0x110) = 0;
    pppplVar23 = (long ****)&DAT_7104545400;
    ppppbVar24 = (byte ****)0x1;
    FUN_71032cbf30(puVar9 + 4,*plVar11,(ulong *)&DAT_7104545400,(byte ****)0x1,pppplVar25,param_6,
                   param_7,param_8);
    lVar12 = *(long *)puVar9[4];
    if ((undefined8 *)(lVar12 + 8) != puVar13) {
      *(undefined8 *)puVar9[6] = **(undefined8 **)(lVar12 + 0x10);
      *(undefined8 *)(puVar9[6] + 8) = *(undefined8 *)(*(long *)(lVar12 + 0x10) + 8);
      lVar26 = *(long *)(lVar12 + 0x10);
      lVar12 = puVar9[6];
      if (lVar12 != lVar26) {
        **(undefined8 **)(lVar12 + 0x18) = **(undefined8 **)(lVar26 + 0x18);
        *(undefined8 *)(*(long *)(lVar12 + 0x18) + 8) =
             *(undefined8 *)(*(long *)(lVar26 + 0x18) + 8);
        *(undefined8 *)(*(long *)(lVar12 + 0x18) + 0x10) =
             *(undefined8 *)(*(long *)(lVar26 + 0x18) + 0x10);
        *(undefined8 *)(*(long *)(lVar12 + 0x18) + 0x18) =
             *(undefined8 *)(*(long *)(lVar26 + 0x18) + 0x18);
      }
    }
    FUN_7103776640(&local_60,(long)puVar13,(byte ****)"controller_amiibo",pppplVar23,ppppbVar24,
                   pppplVar25,param_6,param_7,param_8);
    uVar7 = local_58;
    if (&local_60 != (long *********)(puVar9 + 7)) {
      local_58 = 0;
      uVar28 = puVar9[8];
      puVar9[8] = uVar7;
      if (uVar28 != 0) {
        uVar7 = *(ulong *)(uVar28 + 0x18);
        *(undefined ***)(uVar28 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar28 + 0x18) = 0;
        if (uVar7 != 0) {
          FUN_710392eb40(uVar7);
        }
        FUN_710392eb40(uVar28);
      }
    }
    uVar7 = local_58;
    local_60 = (long ********)&PTR_FUN_710523d988;
    local_58 = 0;
    if (uVar7 != 0) {
      uVar28 = *(ulong *)(uVar7 + 0x18);
      *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar7 + 0x18) = 0;
      if (uVar28 != 0) {
        FUN_710392eb40(uVar28);
      }
      FUN_710392eb40(uVar7);
    }
    FUN_7103776640(&local_60,(long)puVar13,(byte ****)"set_parts_keyhelp",pppplVar23,ppppbVar24,
                   pppplVar25,param_6,param_7,param_8);
    uVar7 = local_58;
    if ((*(long *)(local_58 + 8) != 0) &&
       (lVar12 = *(long *)(*(long *)(local_58 + 8) + 0x18), lVar12 != 0)) {
      *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
    }
    *(undefined1 *)(*(long *)(**(long **)puVar9[4] + 0x600) + 0x4aa) = 0;
    *(undefined2 *)(puVar9 + 1) = 0x101;
    *(undefined2 *)((long)puVar9 + 10) = local_48;
    *(undefined1 *)(puVar9 + 2) = 1;
    *(undefined4 *)((long)puVar9 + 0xc) = 0x11000;
    *(undefined4 *)((long)puVar9 + 0xc) = 0x11000;
    *(undefined2 *)((long)puVar9 + 0x11) = (undefined2)local_44;
    *(undefined1 *)((long)puVar9 + 0x13) = local_44._2_1_;
    *(undefined4 *)((long)puVar9 + 0x14) = 1;
    *(undefined1 *)(puVar9 + 3) = 0;
    lVar26 = **(long **)puVar9[4];
    *(undefined4 *)(*(long *)(lVar26 + 0x600) + 0x494) = 1;
    lVar12 = *(long *)(lVar26 + 0x608);
    lVar26 = *(long *)(lVar26 + 0x610);
    if (lVar12 != lVar26) {
      uVar28 = (lVar26 + -0x10) - lVar12;
      uVar1 = ((uint)(uVar28 >> 4) & 0xfffffff) + 1;
      if ((uVar1 & 3) != 0) {
        lVar27 = -((ulong)uVar1 & 3);
        do {
          plVar11 = (long *)(lVar12 + 8);
          lVar12 = lVar12 + 0x10;
          lVar27 = lVar27 + 1;
          *(undefined4 *)(*plVar11 + 0x494) = 1;
        } while (lVar27 != 0);
      }
      if (0x2f < uVar28) {
        do {
          *(undefined4 *)(*(long *)(lVar12 + 8) + 0x494) = 1;
          *(undefined4 *)(*(long *)(lVar12 + 0x18) + 0x494) = 1;
          *(undefined4 *)(*(long *)(lVar12 + 0x28) + 0x494) = 1;
          plVar11 = (long *)(lVar12 + 0x38);
          lVar12 = lVar12 + 0x40;
          *(undefined4 *)(*plVar11 + 0x494) = 1;
        } while (lVar26 != lVar12);
      }
    }
    local_60 = (long ********)&PTR_FUN_710523d988;
    local_58 = 0;
    uVar15 = extraout_x1_13;
    if (uVar7 != 0) {
      uVar28 = *(ulong *)(uVar7 + 0x18);
      *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar7 + 0x18) = 0;
      if (uVar28 != 0) {
        FUN_710392eb40(uVar28);
      }
      FUN_710392eb40(uVar7);
      uVar15 = extraout_x1_14;
    }
    puVar8[0x10] = puVar9;
    puVar8[2] = &DAT_7105333600;
    uVar4 = DAT_7105333664;
    *(undefined4 *)(puVar8 + 0xd) = DAT_7105333660;
    *(undefined4 *)((long)puVar8 + 0x6c) = uVar4;
    do {
      uVar1 = DAT_7105333650;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
      if (bVar3) {
        DAT_7105333650 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0' || (uVar1 & 1) != 0);
    puVar8[9] = DAT_7105333648;
    DAT_7105333650 = 0;
    DAT_7105333648 = puVar8;
    FUN_71032caea0((long)puVar8,uVar15,pppplVar23,ppppbVar24,pppplVar25,param_6,param_7,param_8);
    lVar12 = *(long *)(lVar6 + 0xd8);
    *(undefined8 **)(lVar6 + 0xd8) = puVar8;
    if (lVar12 != 0) {
      FUN_71032cad20(lVar12);
    }
    if (*(uint *)(lVar6 + 0xb4) < 0x13) {
      *(undefined4 *)(lVar6 + (long)(int)*(uint *)(lVar6 + 0xb4) * 4 + 0x68) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

