// addr:      71018e91a0
// offset:    0x18e91a0
// name:      FUN_71018e91a0
// mangled:   
// signature: undefined __cdecl FUN_71018e91a0(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined1 * param_7, undefined8 * param_8)


void FUN_71018e91a0(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined1 *param_7,undefined8 *param_8)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  long *plVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  ulong *puVar15;
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
  ulong extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  ulong extraout_x1_22;
  ulong extraout_x1_23;
  ulong extraout_x1_24;
  ulong extraout_x1_25;
  ulong extraout_x1_26;
  ulong extraout_x1_27;
  undefined8 extraout_x1_28;
  undefined8 extraout_x1_29;
  undefined **ppuVar16;
  long lVar17;
  long *********ppppppppplVar18;
  char *pcVar19;
  byte ****ppppbVar20;
  long ****pppplVar21;
  code *pcVar22;
  long ********pppppppplVar23;
  long *plVar24;
  undefined8 *puVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 *puVar28;
  ulong uVar29;
  long lVar30;
  undefined8 uVar31;
  undefined ***pppuVar32;
  long *plVar33;
  long *plVar34;
  undefined8 *puVar35;
  long *plVar36;
  uint uVar37;
  undefined ***pppuVar38;
  undefined ***pppuVar39;
  undefined8 *puVar40;
  long *plVar41;
  long ****pppplVar42;
  undefined1 auVar43 [16];
  undefined **local_228;
  ulong local_220;
  undefined **local_218;
  ulong local_210;
  uint local_208 [2];
  byte ***apppbStack_200 [8];
  long ********local_1c0;
  undefined2 local_1b8;
  undefined4 local_1b6;
  undefined2 local_1b2;
  undefined4 local_1b0;
  undefined2 local_1ac;
  undefined1 local_1aa;
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
  
  plVar6 = (long *)FUN_710392e290(0x10,0x408,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar6 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_208[0] = 0;
      local_1c0 = (long ********)0x408;
      ppppppppplVar18 = &local_1c0;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_208);
      if (((uVar7 & 1) != 0) &&
         (plVar6 = (long *)FUN_710392e290(0x10,0x408,(long ****)ppppppppplVar18,param_4,param_5,
                                          param_6,param_7,param_8), plVar6 != (long *)0x0))
      goto LAB_71018e9224;
    }
    plVar6 = (long *)0x0;
  }
LAB_71018e9224:
  ppuVar16 = (undefined **)0x13c;
  *(undefined4 *)((long)plVar6 + 0x164) = 0;
  *plVar6 = (long)plVar6;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[0x2d] = 0xffffffff;
  *(undefined4 *)(plVar6 + 0x2e) = 0xffffffff;
  *(undefined1 *)((long)plVar6 + 0x174) = 0;
  plVar6[1] = 0;
  plVar6[2] = 0;
  memset(plVar6 + 5,0,0x13c);
  plVar6[0x46] = 0xffffffff;
  plVar6[0x31] = 0;
  plVar6[0x32] = 0;
  *(undefined4 *)(plVar6 + 0x47) = 0xffffffff;
  *(undefined1 *)((long)plVar6 + 0x23c) = 0;
  plVar6[0x45] = 0;
  plVar6[0x44] = 0;
  plVar6[0x43] = 0;
  plVar6[0x42] = 0;
  plVar6[0x41] = 0;
  plVar6[0x2f] = (long)plVar6;
  plVar6[0x30] = 0;
  plVar6[0x3f] = 0;
  plVar6[0x40] = 0;
  plVar6[0x3d] = 0;
  plVar6[0x3e] = 0;
  plVar6[0x3b] = 0;
  plVar6[0x3c] = 0;
  plVar6[0x39] = 0;
  plVar6[0x3a] = 0;
  plVar6[0x37] = 0;
  plVar6[0x38] = 0;
  plVar6[0x35] = 0;
  plVar6[0x36] = 0;
  plVar6[0x33] = 0;
  plVar6[0x34] = 0;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x80,(long ****)ppuVar16,param_4,param_5,param_6,param_7,param_8);
  uVar31 = extraout_x1;
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_208[0] = 0;
      local_1c0 = (long ********)&DAT_00000080;
      ppuVar16 = (undefined **)&local_1c0;
      auVar43 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_208);
      uVar31 = auVar43._8_8_;
      if (((auVar43._0_8_ & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x80,(long ****)ppuVar16,param_4,param_5,param_6,param_7,
                                  param_8), uVar31 = extraout_x1_00, puVar8 != (undefined8 *)0x0))
      goto LAB_71018e92ec;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71018e92ec:
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
  *(undefined4 *)(puVar8 + 0xd) = 2;
  puVar8[0xc] = 0;
  *(undefined4 *)(puVar8 + 0xf) = 0;
  puVar8[0xe] = 0;
  plVar6[0x48] = (long)puVar8;
  FUN_7103763c70(plVar6 + 0x49,uVar31,(long ****)ppuVar16,param_4,param_5,param_6,param_7,param_8);
  plVar6[0x4e] = 0;
  plVar6[0x4d] = 0;
  plVar6[0x4c] = 0;
  plVar6[0x4b] = 0;
  FUN_7103391a80(plVar6 + 0x4f,extraout_x1_01,(long ****)ppuVar16,param_4,param_5,param_6,param_7,
                 param_8);
  *(undefined1 *)(plVar6 + 0x50) = 0;
  *(undefined4 *)((long)plVar6 + 0x284) = 0xffffffff;
  plVar6[0x68] = 0;
  plVar6[0x67] = 0;
  plVar6[0x66] = 0;
  plVar6[0x65] = 0;
  plVar6[100] = 0;
  plVar6[99] = 0;
  plVar6[0x62] = 0;
  plVar6[0x61] = 0;
  plVar6[0x60] = 0;
  plVar6[0x5f] = 0;
  plVar6[0x5e] = 0;
  plVar6[0x5d] = 0;
  plVar6[0x5c] = 0;
  plVar6[0x5b] = 0;
  plVar6[0x5a] = 0;
  plVar6[0x59] = 0;
  plVar6[0x58] = 0;
  plVar6[0x57] = 0;
  plVar6[0x56] = 0;
  plVar6[0x55] = 0;
  plVar6[0x54] = 0;
  plVar6[0x53] = 0;
  plVar6[0x52] = 0;
  plVar6[0x51] = 0;
  plVar6[0x51] = -1;
  *(undefined4 *)(plVar6 + 0x52) = 0xffffffff;
  *(undefined8 *)((long)plVar6 + 0x2a1) = 0;
  *(undefined8 *)((long)plVar6 + 0x29c) = 0;
  *(undefined8 *)((long)plVar6 + 0x294) = 0;
  *(undefined4 *)((long)plVar6 + 0x2ac) = 0xffffffff;
  *(undefined1 *)(plVar6 + 0x56) = 0;
  plVar6[99] = 0;
  plVar6[0x62] = 0;
  plVar6[0x61] = 0;
  plVar6[0x60] = 0;
  plVar6[0x5f] = 0;
  plVar6[0x5e] = 0;
  plVar6[0x5d] = 0;
  plVar6[0x5c] = 0;
  plVar6[0x5b] = 0;
  plVar6[0x5a] = 0;
  plVar6[0x59] = 0;
  plVar6[0x58] = 0;
  plVar6[0x57] = 0;
  *(undefined4 *)(plVar6 + 0x59) = 0xffffffff;
  plVar6[0x58] = -1;
  plVar6[0x57] = -1;
  *(undefined2 *)(plVar6 + 0x5e) = 0;
  plVar6[0x5d] = 0;
  plVar6[0x5c] = 0;
  plVar6[0x5b] = 0;
  plVar6[0x5a] = 0;
  plVar6[100] = -0x2600010000000000;
  *(undefined1 *)(plVar6 + 0x68) = 0;
  plVar6[0x67] = 0;
  plVar6[0x66] = 0;
  plVar6[0x65] = 0;
  *(undefined4 *)(plVar6 + 0x69) = 0xffffffff;
  *(undefined4 *)((long)plVar6 + 0x404) = 0;
  *(undefined1 *)(plVar6 + 0x80) = 0;
  plVar6[0x7f] = 0;
  plVar6[0x7e] = 0;
  plVar6[0x7d] = 0;
  plVar6[0x7c] = 0;
  plVar6[0x7b] = 0;
  plVar6[0x7a] = 0;
  plVar6[0x79] = 0;
  plVar6[0x78] = 0;
  plVar6[0x77] = 0;
  plVar6[0x76] = 0;
  plVar6[0x75] = 0;
  plVar6[0x74] = 0;
  plVar6[0x73] = 0;
  plVar6[0x72] = 0;
  plVar6[0x71] = 0;
  plVar6[0x70] = 0;
  plVar6[0x6f] = 0;
  plVar6[0x6e] = 0;
  plVar6[0x6d] = 0;
  plVar6[0x6c] = 0;
  plVar6[0x6b] = 0;
  plVar6[0x6a] = 0;
  puVar8 = *(undefined8 **)(param_2 + 0xa8);
  uVar31 = extraout_x1_02;
  if (puVar8 != (undefined8 *)0x0) {
    if (((DAT_71053249e8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053249e8), iVar5 != 0)) {
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
      DAT_71053249f0 = &DAT_7105324760;
      __cxa_guard_release(&DAT_71053249e8);
    }
    auVar43 = (**(code **)*puVar8)(puVar8);
    uVar31 = auVar43._8_8_;
    for (puVar9 = auVar43._0_8_; puVar9 != (undefined8 *)0x0; puVar9 = (undefined8 *)*puVar9) {
      if ((undefined8 **)puVar9 == &DAT_71053249f0) {
        iVar5 = *(int *)(puVar8 + 1);
        if (iVar5 == 3) {
          *(undefined4 *)((long)plVar6 + 0x284) = 4;
          bVar4 = true;
        }
        else {
          if (iVar5 != 2) {
            if (iVar5 == 1) {
              *(undefined4 *)((long)plVar6 + 0x284) = 3;
            }
            break;
          }
          if (((DAT_71053144d8 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), uVar31 = extraout_x1_28, iVar5 != 0)) {
            FUN_7101764000();
            ppuVar16 = &PTR_LOOP_7104f17000;
            FUN_71000001c0();
            __cxa_guard_release(&DAT_71053144d8);
            uVar31 = extraout_x1_29;
          }
          bVar4 = DAT_7105308330 != -1;
          *(int *)((long)plVar6 + 0x284) = DAT_7105308330;
        }
        *(bool *)(plVar6 + 0x50) = bVar4;
        break;
      }
    }
  }
  plVar6[5] = (long)FUN_71018dc860;
  plVar6[6] = 0;
  plVar6[9] = (long)FUN_71018dc980;
  plVar6[10] = 0;
  plVar6[0xb] = (long)FUN_71018dcce0;
  plVar6[0xc] = 0;
  plVar6[0xf] = (long)FUN_71018dd020;
  plVar6[0x10] = 0;
  plVar6[0x11] = (long)FUN_71018dd620;
  plVar6[0x12] = 0;
  plVar6[0x15] = (long)FUN_71018dd8a0;
  plVar6[0x16] = 0;
  plVar6[0x17] = (long)FUN_71018dddd0;
  plVar6[0x18] = 0;
  plVar6[0x1b] = (long)FUN_71018de400;
  plVar6[0x1c] = 0;
  plVar6[7] = (long)FUN_71018dc870;
  plVar6[8] = 0;
  plVar6[0x1d] = (long)FUN_71018de4d0;
  plVar6[0x1e] = 0;
  plVar6[0xd] = (long)FUN_71018dcf90;
  plVar6[0xe] = 0;
  plVar6[0x13] = (long)FUN_71018dd740;
  plVar6[0x14] = 0;
  plVar6[0x19] = (long)FUN_71018de390;
  plVar6[0x1a] = 0;
  plVar6[0x1f] = (long)FUN_71018de5c0;
  plVar6[0x20] = 0;
  plVar6[0x21] = (long)FUN_71018de6f0;
  plVar6[0x22] = 0;
  if (0x12 < *(uint *)((long)plVar6 + 0x164)) goto LAB_71018eaab8;
  *(undefined4 *)((long)plVar6 + (long)(int)*(uint *)((long)plVar6 + 0x164) * 4 + 0x118) = 0;
  plVar6[0x34] = (long)FUN_71018de980;
  plVar6[0x35] = 0;
  plVar6[0x38] = (long)FUN_71018deb70;
  plVar6[0x39] = 0;
  plVar6[0x36] = (long)FUN_71018de990;
  plVar6[0x37] = 0;
  plVar6[0x3a] = (long)FUN_71018ded40;
  plVar6[0x3b] = 0;
  if (0x12 < *(uint *)((long)plVar6 + 0x22c)) goto LAB_71018eaab8;
  *(undefined4 *)((long)plVar6 + (long)(int)*(uint *)((long)plVar6 + 0x22c) * 4 + 0x1e0) = 0;
  if (DAT_710532f8d8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)
             FUN_710392e290(0x10,0x10,(long ****)ppuVar16,param_4,param_5,param_6,param_7,param_8);
    if (puVar8 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_208[0] = 0;
        local_1c0 = (long ********)&DAT_00000010;
        ppuVar16 = (undefined **)&local_1c0;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_208);
        if (((uVar7 & 1) != 0) &&
           (puVar8 = (undefined8 *)
                     FUN_710392e290(0x10,0x10,(long ****)ppuVar16,param_4,param_5,param_6,param_7,
                                    param_8), puVar8 != (undefined8 *)0x0)) goto LAB_71018e96e8;
      }
      puVar8 = (undefined8 *)0x0;
    }
LAB_71018e96e8:
    *puVar8 = &PTR_FUN_71051838f0;
    puVar9 = (undefined8 *)
             FUN_710392e290(0x10,0x88,(long ****)ppuVar16,param_4,param_5,param_6,param_7,param_8);
    uVar31 = extraout_x1_03;
    if (puVar9 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_208[0] = 0;
        local_1c0 = (long ********)&DAT_00000088;
        ppuVar16 = (undefined **)&local_1c0;
        auVar43 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_208);
        uVar31 = auVar43._8_8_;
        if (((auVar43._0_8_ & 1) != 0) &&
           (puVar9 = (undefined8 *)
                     FUN_710392e290(0x10,0x88,(long ****)ppuVar16,param_4,param_5,param_6,param_7,
                                    param_8), uVar31 = extraout_x1_04, puVar9 != (undefined8 *)0x0))
        goto LAB_71018e9748;
      }
      puVar9 = (undefined8 *)0x0;
    }
LAB_71018e9748:
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    puVar9[4] = 0;
    puVar9[3] = puVar9 + 4;
    puVar9[8] = 0;
    puVar9[7] = 0;
    *(undefined1 *)(puVar9 + 0xd) = 0;
    *(undefined4 *)(puVar9 + 9) = 0;
    puVar9[0xe] = 0xffffffffffffffff;
    puVar9[5] = 0;
    puVar9[6] = puVar9 + 7;
    puVar9[10] = &PTR_FUN_7104f73d30;
    puVar9[0xb] = 0;
    puVar9[0xc] = 0x87650000000000;
    puVar9[0xf] = 0;
    puVar9[0x10] = 0;
    puVar8[1] = puVar9;
    DAT_710532f8d8 = puVar8;
  }
  uVar7 = *(ulong *)(param_1 + 0x58);
  *(long **)(param_1 + 0x58) = plVar6;
  if (uVar7 != 0) {
    FUN_71018e2d40(uVar7,uVar31,(long *********)ppuVar16,param_4,param_5,param_6,param_7,param_8);
    FUN_710392eb40(uVar7);
    plVar6 = *(long **)(param_1 + 0x58);
  }
  plVar34 = plVar6 + 0x48;
  if (*(int *)((long)plVar6 + 0x284) == 4) {
    *(undefined8 *)(plVar6[0x48] + 0x70) = 1;
    lVar10 = plVar6[0x48];
    FUN_710323beb0(lVar10,(ulong *)&DAT_7104545818,(long)*(int *)(lVar10 + 0x70),
                   (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x0,param_6,param_7,param_8);
    lVar10 = plVar6[0x48];
    lVar17 = (long)*(int *)(lVar10 + 0x70);
    uVar7 = (ulong)*(uint *)(lVar10 + 0x68);
    if (*(int *)((long)plVar6 + 0x284) == 4) {
      puVar15 = (ulong *)&DAT_7104545820;
    }
    else {
      FUN_710323beb0(lVar10,(ulong *)&DAT_7104545828,lVar17,uVar7,(long ****)0x0,param_6,param_7,
                     param_8);
      lVar10 = *plVar34;
      FUN_710323beb0(lVar10,(ulong *)&DAT_7104545830,(long)*(int *)(lVar10 + 0x70),
                     (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x0,param_6,param_7,param_8);
      lVar10 = *plVar34;
      lVar17 = (long)*(int *)(lVar10 + 0x70);
      uVar7 = (ulong)*(uint *)(lVar10 + 0x68);
      puVar15 = (ulong *)&DAT_7104545838;
    }
    FUN_710323beb0(lVar10,puVar15,lVar17,uVar7,(long ****)0x0,param_6,param_7,param_8);
    lVar10 = plVar6[0x48];
    ppppppppplVar18 = (long *********)(long)*(int *)(lVar10 + 0x70);
    ppppbVar20 = (byte ****)(ulong)*(uint *)(lVar10 + 0x68);
    pppplVar21 = (long ****)0x0;
    FUN_710323beb0(lVar10,(ulong *)&DAT_7104545840,(long)ppppppppplVar18,(ulong)ppppbVar20,
                   (long ****)0x0,param_6,param_7,param_8);
    FUN_71018e2f90((long)plVar6,extraout_x1_08,(long ****)ppppppppplVar18,ppppbVar20,pppplVar21,
                   param_6,param_7,param_8);
    FUN_71018e6a80((long)plVar6);
    lVar10 = plVar6[0x48];
    uVar7 = FUN_710323cb80(lVar10,extraout_x1_09,ppppppppplVar18,ppppbVar20,pppplVar21,param_6,
                           param_7,param_8);
    uVar31 = extraout_x1_10;
    while ((uVar7 & 1) == 0) {
      nn::os::SleepThread(1000000);
      uVar7 = FUN_710323cb80(lVar10,extraout_x1_11,ppppppppplVar18,ppppbVar20,pppplVar21,param_6,
                             param_7,param_8);
      uVar31 = extraout_x1_12;
    }
    FUN_71018e2a50((long)plVar6,uVar31,(long ****)ppppppppplVar18,ppppbVar20,pppplVar21,param_6,
                   param_7,param_8);
    if (((DAT_71053144d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    DAT_7105308338 = 0xd9ffff0000000000;
    goto LAB_71018ea964;
  }
  *(undefined8 *)(plVar6[0x48] + 0x70) = 0;
  lVar10 = plVar6[0x48];
  ppppppppplVar18 = (long *********)(long)*(int *)(lVar10 + 0x70);
  ppppbVar20 = (byte ****)(ulong)*(uint *)(lVar10 + 0x68);
  pppplVar21 = (long ****)0x0;
  FUN_710323beb0(lVar10,(ulong *)&DAT_7104545848,(long)ppppppppplVar18,(ulong)ppppbVar20,
                 (long ****)0x0,param_6,param_7,param_8);
  FUN_71018e2f90((long)plVar6,extraout_x1_05,(long ****)ppppppppplVar18,ppppbVar20,pppplVar21,
                 param_6,param_7,param_8);
  lVar10 = plVar6[0x48];
  uVar7 = FUN_710323d010(lVar10,0,ppppppppplVar18,ppppbVar20,pppplVar21,param_6,param_7,param_8);
  while ((uVar7 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar7 = FUN_710323d010(lVar10,0,ppppppppplVar18,ppppbVar20,pppplVar21,param_6,param_7,param_8);
  }
  if (plVar6[0x4b] == 0) {
    puVar8 = (undefined8 *)
             FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar18,ppppbVar20,pppplVar21,param_6,
                            param_7,param_8);
    if (puVar8 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_208[0] = 0;
        local_1c0 = (long ********)&DAT_00000088;
        ppppppppplVar18 = &local_1c0;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_208);
        if (((uVar7 & 1) != 0) &&
           (puVar8 = (undefined8 *)
                     FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar18,ppppbVar20,pppplVar21,
                                    param_6,param_7,param_8), puVar8 != (undefined8 *)0x0))
        goto LAB_71018e98dc;
      }
      puVar8 = (undefined8 *)0x0;
    }
LAB_71018e98dc:
    *puVar8 = &PTR_FUN_71050b0260;
    puVar8[1] = 0;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0x1ffffffff;
    puVar8[2] = 0;
    puVar8[3] = 0;
    *(undefined1 *)(puVar8 + 0xb) = 0;
    puVar8[0xf] = plVar34;
    *(undefined1 *)(puVar8 + 0xe) = 1;
    puVar8[9] = 0;
    puVar8[10] = 0;
    lVar10 = FUN_710392e290(0x10,0x120,(long ****)ppppppppplVar18,ppppbVar20,pppplVar21,param_6,
                            param_7,param_8);
    if (lVar10 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_208[0] = 0;
        local_1c0 = (long ********)&DAT_00000120;
        ppppppppplVar18 = &local_1c0;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_208);
        if (((uVar7 & 1) != 0) &&
           (lVar10 = FUN_710392e290(0x10,0x120,(long ****)ppppppppplVar18,ppppbVar20,pppplVar21,
                                    param_6,param_7,param_8), lVar10 != 0)) goto LAB_71018e9964;
      }
      lVar10 = 0;
    }
LAB_71018e9964:
    *(undefined8 *)(lVar10 + 0xb0) = 0;
    *(undefined8 *)(lVar10 + 0xb8) = 0xffffffff;
    *(undefined4 *)(lVar10 + 0xc0) = 0xffffffff;
    *(undefined8 *)(lVar10 + 0x10) = 0;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    *(undefined1 *)(lVar10 + 0xc4) = 0;
    *(long *)lVar10 = lVar10;
    *(undefined8 *)(lVar10 + 8) = 0;
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
    pppuVar39 = (undefined ***)(lVar10 + 200);
    *pppuVar39 = &PTR_FUN_710523d9e8;
    *(undefined8 *)(lVar10 + 0xd0) = 0;
    *(undefined8 *)(lVar10 + 0xe8) = 0;
    *(undefined8 *)(lVar10 + 0xf0) = 0;
    *(undefined8 *)(lVar10 + 0xd8) = 0;
    *(undefined8 *)(lVar10 + 0xe0) = 0;
    puVar9 = (undefined8 *)
             FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar18,ppppbVar20,pppplVar21,param_6,
                            param_7,param_8);
    if (puVar9 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_208[0] = 0;
        local_1c0 = (long ********)&SUB_00000018;
        ppppppppplVar18 = &local_1c0;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_208);
        if (((uVar7 & 1) != 0) &&
           (puVar9 = (undefined8 *)
                     FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar18,ppppbVar20,pppplVar21,
                                    param_6,param_7,param_8), puVar9 != (undefined8 *)0x0))
        goto LAB_71018e9a0c;
      }
      puVar9 = (undefined8 *)0x0;
    }
LAB_71018e9a0c:
    *puVar9 = 0;
    puVar9[1] = 0;
    *(undefined1 *)(puVar9 + 2) = 1;
    pppuVar38 = (undefined ***)(lVar10 + 0xd8);
    *pppuVar38 = &PTR_FUN_710523d9e8;
    *(undefined8 **)(lVar10 + 0xd0) = puVar9;
    puVar9 = (undefined8 *)
             FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar18,ppppbVar20,pppplVar21,param_6,
                            param_7,param_8);
    if (puVar9 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_208[0] = 0;
        local_1c0 = (long ********)&SUB_00000018;
        ppppppppplVar18 = &local_1c0;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_208);
        if (((uVar7 & 1) != 0) &&
           (puVar9 = (undefined8 *)
                     FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar18,ppppbVar20,pppplVar21,
                                    param_6,param_7,param_8), puVar9 != (undefined8 *)0x0))
        goto LAB_71018e9a78;
      }
      puVar9 = (undefined8 *)0x0;
    }
LAB_71018e9a78:
    *(undefined1 *)(puVar9 + 2) = 1;
    *puVar9 = 0;
    puVar9[1] = 0;
    pppuVar32 = (undefined ***)(lVar10 + 0xe8);
    *pppuVar32 = &PTR_FUN_710523d9e8;
    *(undefined8 **)(lVar10 + 0xe0) = puVar9;
    puVar9 = (undefined8 *)
             FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar18,ppppbVar20,pppplVar21,param_6,
                            param_7,param_8);
    if (puVar9 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_208[0] = 0;
        local_1c0 = (long ********)&SUB_00000018;
        ppppppppplVar18 = &local_1c0;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_208);
        if (((uVar7 & 1) != 0) &&
           (puVar9 = (undefined8 *)
                     FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar18,ppppbVar20,pppplVar21,
                                    param_6,param_7,param_8), puVar9 != (undefined8 *)0x0))
        goto LAB_71018e9ae0;
      }
      puVar9 = (undefined8 *)0x0;
    }
LAB_71018e9ae0:
    *puVar9 = 0;
    puVar9[1] = 0;
    *(undefined1 *)(puVar9 + 2) = 1;
    *(undefined8 **)(lVar10 + 0xf0) = puVar9;
    puVar9 = (undefined8 *)
             FUN_710392e290(0x10,8,(long ****)ppppppppplVar18,ppppbVar20,pppplVar21,param_6,param_7,
                            param_8);
    uVar31 = extraout_x1_06;
    if (puVar9 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_208[0] = 0;
        local_1c0 = (long ********)&DAT_00000008;
        ppppppppplVar18 = &local_1c0;
        auVar43 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_208);
        uVar31 = auVar43._8_8_;
        if (((auVar43._0_8_ & 1) != 0) &&
           (puVar9 = (undefined8 *)
                     FUN_710392e290(0x10,8,(long ****)ppppppppplVar18,ppppbVar20,pppplVar21,param_6,
                                    param_7,param_8), uVar31 = extraout_x1_07,
           puVar9 != (undefined8 *)0x0)) goto LAB_71018e9b4c;
      }
      puVar9 = (undefined8 *)0x0;
    }
LAB_71018e9b4c:
    FUN_7103773200(puVar9,uVar31,(long ****)ppppppppplVar18,ppppbVar20,pppplVar21,param_6,param_7,
                   param_8);
    *(code **)(lVar10 + 0x28) = FUN_7101d84910;
    *(undefined8 *)(lVar10 + 0x30) = 0;
    *(undefined1 *)(lVar10 + 0x118) = 0;
    *(code **)(lVar10 + 0x38) = FUN_7101d84920;
    *(undefined8 *)(lVar10 + 0x40) = 0;
    *(code **)(lVar10 + 0x48) = FUN_7101d84a50;
    *(undefined8 *)(lVar10 + 0x50) = 0;
    *(undefined8 **)(lVar10 + 0xf8) = puVar9;
    *(undefined8 *)(lVar10 + 0x100) = 0;
    *(undefined8 *)(lVar10 + 0x108) = 0;
    *(undefined8 *)(lVar10 + 0x110) = 0xffffffffffffffff;
    *(code **)(lVar10 + 0x58) = FUN_7101d84ae0;
    *(undefined8 *)(lVar10 + 0x60) = 0;
    if (0x12 < *(uint *)(lVar10 + 0xb4)) {
LAB_71018eaab8:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(lVar10 + (long)(int)*(uint *)(lVar10 + 0xb4) * 4 + 0x68) = 0;
    puVar8[0x10] = lVar10;
    plVar33 = (long *)(lVar10 + 0x100);
    FUN_71032cbf30((undefined8 *)(lVar10 + 0xf8),*plVar34,(ulong *)&DAT_7104545848,(byte ****)0x1,
                   pppplVar21,param_6,param_7,param_8);
    FUN_71037760f0(*(long *)**(undefined8 **)(lVar10 + 0xf8),0);
    local_1b8 = 0x101;
    local_1b2 = 0;
    local_1b6 = 0;
    local_1b0 = 1;
    local_1ac = 1;
    local_1aa = 1;
    puVar9 = (undefined8 *)(**(long **)(lVar10 + 0xf8) + 8);
    local_1c0 = (long ********)0x0;
    local_1a8 = 0x4234000000000000;
    local_1a0 = 0;
    local_170 = (long *)0x0;
    local_140 = (long *)0x0;
    local_110 = (long *)0x0;
    local_e0 = (long *)0x0;
    local_b0 = (long *)0x0;
    local_a0 = 0;
    FUN_710337df20((long)&local_1c0);
    plVar41 = local_110;
    local_110 = (long *)0x0;
    if (alStack_130 == plVar41) {
      pcVar22 = *(code **)(*plVar41 + 0x20);
LAB_71018e9d2c:
      (*pcVar22)();
    }
    else if (plVar41 != (long *)0x0) {
      pcVar22 = *(code **)(*plVar41 + 0x28);
      goto LAB_71018e9d2c;
    }
    pcVar19 = "selector_00";
    ppppppppplVar18 = &local_1c0;
    FUN_7103770b30(plVar33,puVar9,(long ****)"selector_00",(byte ****)ppppppppplVar18,pppplVar21,
                   param_6,param_7,param_8);
    FUN_71003a4ca0(local_208,"set_part_0%d",1,pcVar19,ppppppppplVar18,pppplVar21,param_6,param_7,
                   param_8);
    ppppbVar20 = apppbStack_200;
    FUN_71037717d0(plVar33,0,(char *)apppbStack_200,ppppppppplVar18,pppplVar21,param_6,param_7,
                   param_8);
    FUN_7103776640(&local_228,(long)puVar9,apppbStack_200,ppppbVar20,ppppppppplVar18,pppplVar21,
                   param_6,param_7,param_8);
    FUN_71037780e0(&local_218,(long)&local_228,(long ****)&DAT_71043ef19a,ppppbVar20,ppppppppplVar18
                   ,pppplVar21,param_6,param_7,param_8);
    uVar7 = local_210;
    if (&local_218 != pppuVar39) {
      local_210 = 0;
      uVar11 = *(ulong *)(lVar10 + 0xd0);
      *(ulong *)(lVar10 + 0xd0) = uVar7;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
    }
    uVar7 = local_210;
    local_218 = &PTR_FUN_710523d9e8;
    local_210 = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    uVar7 = local_220;
    local_228 = &PTR_FUN_710523d988;
    local_220 = 0;
    if (uVar7 != 0) {
      uVar11 = *(ulong *)(uVar7 + 0x18);
      *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar7 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar7);
    }
    FUN_710377aee0(0x3f800000,(long)pppuVar39);
    FUN_71003a4ca0(local_208,"set_part_0%d",2,ppppbVar20,ppppppppplVar18,pppplVar21,param_6,param_7,
                   param_8);
    ppppbVar20 = apppbStack_200;
    FUN_71037717d0(plVar33,1,(char *)apppbStack_200,ppppppppplVar18,pppplVar21,param_6,param_7,
                   param_8);
    FUN_7103776640(&local_228,(long)puVar9,apppbStack_200,ppppbVar20,ppppppppplVar18,pppplVar21,
                   param_6,param_7,param_8);
    FUN_71037780e0(&local_218,(long)&local_228,(long ****)&DAT_71043ef19a,ppppbVar20,ppppppppplVar18
                   ,pppplVar21,param_6,param_7,param_8);
    uVar7 = local_210;
    if (&local_218 != pppuVar38) {
      local_210 = 0;
      uVar11 = *(ulong *)(lVar10 + 0xe0);
      *(ulong *)(lVar10 + 0xe0) = uVar7;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
    }
    uVar7 = local_210;
    local_218 = &PTR_FUN_710523d9e8;
    local_210 = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    uVar7 = local_220;
    local_228 = &PTR_FUN_710523d988;
    local_220 = 0;
    if (uVar7 != 0) {
      uVar11 = *(ulong *)(uVar7 + 0x18);
      *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar7 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar7);
    }
    FUN_710377aee0(0x3f800000,(long)pppuVar38);
    FUN_71003a4ca0(local_208,"set_part_0%d",3,ppppbVar20,ppppppppplVar18,pppplVar21,param_6,param_7,
                   param_8);
    ppppbVar20 = apppbStack_200;
    FUN_71037717d0(plVar33,2,(char *)apppbStack_200,ppppppppplVar18,pppplVar21,param_6,param_7,
                   param_8);
    FUN_7103776640(&local_228,(long)puVar9,apppbStack_200,ppppbVar20,ppppppppplVar18,pppplVar21,
                   param_6,param_7,param_8);
    FUN_71037780e0(&local_218,(long)&local_228,(long ****)&DAT_71043ef19a,ppppbVar20,ppppppppplVar18
                   ,pppplVar21,param_6,param_7,param_8);
    uVar7 = local_210;
    if (&local_218 != pppuVar32) {
      local_210 = 0;
      uVar11 = *(ulong *)(lVar10 + 0xf0);
      *(ulong *)(lVar10 + 0xf0) = uVar7;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
    }
    uVar7 = local_210;
    local_218 = &PTR_FUN_710523d9e8;
    local_210 = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    uVar7 = local_220;
    local_228 = &PTR_FUN_710523d988;
    local_220 = 0;
    if (uVar7 != 0) {
      uVar11 = *(ulong *)(uVar7 + 0x18);
      *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar7 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar7);
    }
    FUN_710377aee0(0x3f800000,(long)pppuVar32);
    FUN_71037717d0(plVar33,3,"set_tab_bottom_area",ppppppppplVar18,pppplVar21,param_6,param_7,
                   param_8);
    ppppppppplVar18 = &local_1c0;
    local_1ac = 0x101;
    FUN_7103770b30((long *)(lVar10 + 0x108),puVar9,(long ****)"selector_01",
                   (byte ****)ppppppppplVar18,pppplVar21,param_6,param_7,param_8);
    pcVar19 = "set_parts_tab_bottom";
    FUN_71037717d0((long *)(lVar10 + 0x108),3,"set_parts_tab_bottom",ppppppppplVar18,pppplVar21,
                   param_6,param_7,param_8);
    if (alStack_d0 == local_b0) {
      pcVar22 = *(code **)(*local_b0 + 0x20);
LAB_71018ea010:
      (*pcVar22)();
      uVar31 = extraout_x1_14;
    }
    else {
      uVar31 = extraout_x1_13;
      if (local_b0 != (long *)0x0) {
        pcVar22 = *(code **)(*local_b0 + 0x28);
        goto LAB_71018ea010;
      }
    }
    if (alStack_100 == local_e0) {
      pcVar22 = *(code **)(*local_e0 + 0x20);
LAB_71018ea040:
      (*pcVar22)();
      uVar31 = extraout_x1_15;
    }
    else if (local_e0 != (long *)0x0) {
      pcVar22 = *(code **)(*local_e0 + 0x28);
      goto LAB_71018ea040;
    }
    if (alStack_130 == local_110) {
      pcVar22 = *(code **)(*local_110 + 0x20);
LAB_71018ea06c:
      (*pcVar22)();
      uVar31 = extraout_x1_16;
    }
    else if (local_110 != (long *)0x0) {
      pcVar22 = *(code **)(*local_110 + 0x28);
      goto LAB_71018ea06c;
    }
    if (alStack_160 == local_140) {
      pcVar22 = *(code **)(*local_140 + 0x20);
LAB_71018ea09c:
      (*pcVar22)();
      uVar31 = extraout_x1_17;
    }
    else if (local_140 != (long *)0x0) {
      pcVar22 = *(code **)(*local_140 + 0x28);
      goto LAB_71018ea09c;
    }
    if (alStack_190 == local_170) {
      pcVar22 = *(code **)(*local_170 + 0x20);
LAB_71018ea0cc:
      (*pcVar22)();
      uVar31 = extraout_x1_18;
    }
    else if (local_170 != (long *)0x0) {
      pcVar22 = *(code **)(*local_170 + 0x28);
      goto LAB_71018ea0cc;
    }
    puVar8[2] = &DAT_7105333600;
    uVar3 = DAT_7105333664;
    *(undefined4 *)(puVar8 + 0xd) = DAT_7105333660;
    *(undefined4 *)((long)puVar8 + 0x6c) = uVar3;
    do {
      uVar1 = DAT_7105333650;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
      if (bVar4) {
        DAT_7105333650 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0' || (uVar1 & 1) != 0);
    puVar8[9] = DAT_7105333648;
    DAT_7105333650 = 0;
    DAT_7105333648 = puVar8;
    FUN_71032caea0((long)puVar8,uVar31,(long ****)pcVar19,(byte ****)ppppppppplVar18,pppplVar21,
                   param_6,param_7,param_8);
    lVar10 = plVar6[0x4b];
    plVar6[0x4b] = (long)puVar8;
    if (lVar10 != 0) {
      FUN_71032cad20(lVar10);
    }
  }
  *(undefined8 *)(plVar6[0x48] + 0x70) = 1;
  lVar10 = plVar6[0x48];
  FUN_710323beb0(lVar10,(ulong *)&DAT_7104545818,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar10 = plVar6[0x48];
  FUN_710323beb0(lVar10,(ulong *)&DAT_7104545828,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar10 = plVar6[0x48];
  FUN_710323beb0(lVar10,(ulong *)&DAT_7104545830,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar10 = plVar6[0x48];
  FUN_710323beb0(lVar10,(ulong *)&DAT_7104545838,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar10 = plVar6[0x48];
  ppppppppplVar18 = (long *********)(long)*(int *)(lVar10 + 0x70);
  ppppbVar20 = (byte ****)(ulong)*(uint *)(lVar10 + 0x68);
  pppplVar21 = (long ****)0x0;
  FUN_710323beb0(lVar10,(ulong *)&DAT_7104545840,(long)ppppppppplVar18,(ulong)ppppbVar20,
                 (long ****)0x0,param_6,param_7,param_8);
  FUN_71018e6a80((long)plVar6);
  uVar7 = extraout_x1_19;
  if ((char)plVar6[0x50] != '\0') {
    lVar10 = *plVar34;
    uVar7 = FUN_710323d010(lVar10,1,ppppppppplVar18,ppppbVar20,pppplVar21,param_6,param_7,param_8);
    uVar31 = extraout_x1_20;
    while ((uVar7 & 1) == 0) {
      nn::os::SleepThread(1000000);
      uVar7 = FUN_710323d010(lVar10,1,ppppppppplVar18,ppppbVar20,pppplVar21,param_6,param_7,param_8)
      ;
      uVar31 = extraout_x1_21;
    }
    FUN_71018e2a50((long)plVar6,uVar31,(long ****)ppppppppplVar18,ppppbVar20,pppplVar21,param_6,
                   param_7,param_8);
    uVar7 = extraout_x1_22;
  }
  plVar34 = (long *)DAT_710532f8d8[1];
  puVar8 = (undefined8 *)*plVar34;
  puVar9 = (undefined8 *)plVar34[1];
  while (puVar9 != puVar8) {
    puVar9 = puVar9 + -1;
    puVar35 = (undefined8 *)*puVar9;
    *puVar9 = 0;
    if (puVar35 != (undefined8 *)0x0) {
      FUN_7102402440(puVar35,uVar7,ppppppppplVar18,ppppbVar20,pppplVar21,param_6,param_7,param_8);
      FUN_710392eb40((ulong)puVar35);
      uVar7 = extraout_x1_23;
    }
  }
  plVar34[1] = (long)puVar8;
  plVar33 = plVar34 + 4;
  FUN_7103317bc0((undefined8 *)*plVar33);
  plVar41 = plVar34 + 7;
  plVar34[5] = 0;
  plVar34[3] = (long)plVar33;
  *plVar33 = 0;
  FUN_7103317bc0((undefined8 *)*plVar41);
  *plVar41 = 0;
  plVar34[8] = 0;
  plVar34[6] = (long)plVar41;
  puVar8 = (undefined8 *)plVar6[0x76];
  puVar9 = (undefined8 *)plVar6[0x77];
  if (puVar8 != puVar9) {
    iVar5 = 0;
    do {
      pppplVar42 = (long ****)*puVar8;
      puVar35 = (undefined8 *)
                FUN_710392e290(0x10,8,(long ****)ppppppppplVar18,ppppbVar20,pppplVar21,param_6,
                               param_7,param_8);
      if (puVar35 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_208[0] = 0;
          local_1c0 = (long ********)&DAT_00000008;
          ppppppppplVar18 = &local_1c0;
          uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_208);
          if (((uVar7 & 1) != 0) &&
             (puVar35 = (undefined8 *)
                        FUN_710392e290(0x10,8,(long ****)ppppppppplVar18,ppppbVar20,pppplVar21,
                                       param_6,param_7,param_8), puVar35 != (undefined8 *)0x0))
          goto LAB_71018ea308;
        }
        puVar35 = (undefined8 *)0x0;
      }
LAB_71018ea308:
      puVar12 = (undefined8 *)
                FUN_710392e290(0x10,0xa0,(long ****)ppppppppplVar18,ppppbVar20,pppplVar21,param_6,
                               param_7,param_8);
      if (puVar12 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_208[0] = 0;
          local_1c0 = (long ********)&DAT_000000a0;
          ppppppppplVar18 = &local_1c0;
          uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_208);
          if (((uVar7 & 1) != 0) &&
             (puVar12 = (undefined8 *)
                        FUN_710392e290(0x10,0xa0,(long ****)ppppppppplVar18,ppppbVar20,pppplVar21,
                                       param_6,param_7,param_8), puVar12 != (undefined8 *)0x0))
          goto LAB_71018ea364;
        }
        puVar12 = (undefined8 *)0x0;
      }
LAB_71018ea364:
      puVar12[1] = 0;
      puVar12[2] = 0;
      *puVar12 = 0;
      puVar12[4] = 0;
      puVar12[3] = puVar12 + 4;
      puVar12[7] = 0;
      puVar12[5] = 0;
      puVar12[6] = puVar12 + 7;
      puVar12[10] = 0;
      puVar12[8] = 0;
      puVar12[9] = puVar12 + 10;
      puVar12[0xd] = 0;
      *(undefined4 *)(puVar12 + 0x13) = 0;
      puVar12[0xb] = 0;
      puVar12[0xc] = puVar12 + 0xd;
      puVar12[0xe] = 0;
      puVar12[0xf] = 0xffffff00000000;
      *(undefined4 *)(puVar12 + 0x10) = 0xffffff;
      *(undefined4 *)((long)puVar12 + 0x84) = 0xffffff;
      puVar12[0x11] = &DAT_c1ffff0000000000;
      puVar12[0x12] = &DAT_c1ffff0000000000;
      puVar13 = FUN_71032631a0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),0x14c50faf14);
      puVar12[0x11] = puVar13;
      *puVar35 = puVar12;
      puVar12 = (undefined8 *)plVar34[1];
      if (puVar12 < (undefined8 *)plVar34[2]) {
        *puVar12 = puVar35;
        plVar34[1] = plVar34[1] + 8;
      }
      else {
        lVar10 = (long)puVar12 - *plVar34 >> 3;
        uVar7 = lVar10 + 1;
        if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar17 = plVar34[2] - *plVar34;
        if ((ulong)(lVar17 >> 3) < 0xfffffffffffffff) {
          uVar11 = lVar17 >> 2;
          if (uVar7 <= uVar11) {
            uVar7 = uVar11;
          }
          uVar11 = extraout_x1_24;
          if (uVar7 != 0) {
            if (uVar7 >> 0x3d == 0) goto LAB_71018ea458;
            goto LAB_71018eaab8;
          }
LAB_71018ea4b0:
          lVar17 = 0;
        }
        else {
          uVar7 = 0x1fffffffffffffff;
LAB_71018ea458:
          pppppppplVar23 = (long ********)(uVar7 * 8);
          if (pppppppplVar23 == (long ********)0x0) {
            pppppppplVar23 = (long ********)0x1;
          }
          lVar17 = FUN_710392e290(0x10,pppppppplVar23,(long ****)ppppppppplVar18,ppppbVar20,
                                  pppplVar21,param_6,param_7,param_8);
          uVar11 = extraout_x1_25;
          if (lVar17 == 0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_208[0] = 0;
              ppppppppplVar18 = &local_1c0;
              local_1c0 = pppppppplVar23;
              auVar43 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_208);
              uVar11 = auVar43._8_8_;
              if (((auVar43._0_8_ & 1) != 0) &&
                 (lVar17 = FUN_710392e290(0x10,pppppppplVar23,(long ****)ppppppppplVar18,ppppbVar20,
                                          pppplVar21,param_6,param_7,param_8),
                 uVar11 = extraout_x1_26, lVar17 != 0)) goto LAB_71018ea4b4;
            }
            goto LAB_71018ea4b0;
          }
        }
LAB_71018ea4b4:
        puVar12 = (undefined8 *)(lVar17 + lVar10 * 8);
        puVar25 = puVar12 + 1;
        *puVar12 = puVar35;
        puVar40 = (undefined8 *)*plVar34;
        puVar35 = (undefined8 *)plVar34[1];
        puVar28 = puVar40;
        if (puVar35 != puVar40) {
          uVar26 = (long)(puVar35 + -1) - (long)puVar40;
          uVar29 = uVar26 >> 3;
          uVar1 = (int)uVar29 + 1;
          uVar27 = (ulong)uVar1 & 3;
          if ((uVar1 & 3) != 0) {
            lVar30 = -uVar27;
            puVar28 = puVar35 + -1;
            do {
              puVar12 = puVar12 + -1;
              uVar31 = *puVar28;
              lVar30 = lVar30 + 1;
              *puVar28 = 0;
              *puVar12 = uVar31;
              puVar28 = puVar28 + -1;
            } while (lVar30 != 0);
            puVar12 = (undefined8 *)(lVar17 + (lVar10 - uVar27) * 8);
            puVar35 = puVar35 + -uVar27;
          }
          if (0x17 < uVar26) {
            uVar27 = (long)puVar35 + (-0x20 - (long)puVar40);
            if (((uint)uVar27 >> 5 & 1) == 0) {
              uVar31 = puVar35[-1];
              puVar35[-1] = 0;
              puVar12[-1] = uVar31;
              uVar31 = puVar35[-2];
              puVar35[-2] = 0;
              puVar12[-2] = uVar31;
              uVar31 = puVar35[-3];
              puVar35[-3] = 0;
              puVar12[-3] = uVar31;
              puVar35 = puVar35 + -4;
              uVar31 = *puVar35;
              *puVar35 = 0;
              puVar12[-4] = uVar31;
              puVar12 = puVar12 + -4;
            }
            if (0x1f < uVar27) {
              puVar12 = puVar12 + -4;
              do {
                uVar31 = puVar35[-1];
                puVar35[-1] = 0;
                puVar12[3] = uVar31;
                uVar31 = puVar35[-2];
                puVar35[-2] = 0;
                puVar12[2] = uVar31;
                uVar31 = puVar35[-3];
                puVar35[-3] = 0;
                puVar12[1] = uVar31;
                uVar31 = puVar35[-4];
                puVar35[-4] = 0;
                *puVar12 = uVar31;
                uVar31 = puVar35[-5];
                puVar35[-5] = 0;
                puVar12[-1] = uVar31;
                uVar31 = puVar35[-6];
                puVar35[-6] = 0;
                puVar12[-2] = uVar31;
                uVar31 = puVar35[-7];
                puVar35[-7] = 0;
                puVar12[-3] = uVar31;
                puVar35 = puVar35 + -8;
                uVar31 = *puVar35;
                *puVar35 = 0;
                puVar12[-4] = uVar31;
                puVar12 = puVar12 + -8;
              } while (puVar40 != puVar35);
            }
          }
          puVar40 = (undefined8 *)*plVar34;
          puVar12 = (undefined8 *)(lVar17 + (lVar10 + ~uVar29) * 8);
          puVar28 = (undefined8 *)plVar34[1];
        }
        *plVar34 = (long)puVar12;
        plVar34[1] = (long)puVar25;
        plVar34[2] = lVar17 + uVar7 * 8;
        while (puVar28 != puVar40) {
          puVar28 = puVar28 + -1;
          puVar35 = (undefined8 *)*puVar28;
          *puVar28 = 0;
          if (puVar35 != (undefined8 *)0x0) {
            FUN_7102402440(puVar35,uVar11,ppppppppplVar18,ppppbVar20,pppplVar21,param_6,param_7,
                           param_8);
            FUN_710392eb40((ulong)puVar35);
            uVar11 = extraout_x1_27;
          }
        }
        if (puVar40 != (undefined8 *)0x0) {
          FUN_710392eb40((ulong)puVar40);
        }
      }
      lVar10 = plVar34[1];
      FUN_71023fee20((ulong *)**(undefined8 **)(lVar10 + -8),pppplVar42,ppppppppplVar18,ppppbVar20,
                     pppplVar21,param_6,param_7,param_8);
      plVar24 = (long *)**(undefined8 **)(lVar10 + -8);
      ppppppppplVar18 = (long *********)plVar24[1];
      uVar1 = (int)((ulong)((long)ppppppppplVar18 - *plVar24) >> 4) * 0x3cf3cf3d;
      if (0 < (int)uVar1) {
        uVar37 = 0;
        do {
          ppppbVar20 = (byte ****)(ulong)uVar37;
          FUN_71024022d0(&local_1c0,*plVar24,(long)ppppppppplVar18,uVar37);
          pppppppplVar23 = local_1c0;
          plVar24 = plVar33;
          plVar36 = plVar33;
          if ((long *)*plVar33 == (long *)0x0) {
LAB_71018ea6f0:
            lVar17 = *plVar36;
          }
          else {
            plVar14 = (long *)*plVar33;
            plVar36 = plVar34 + 4;
            do {
              while (plVar24 = plVar14,
                    (plVar24[4] & 0xff0000ffffffffffU) <= ((ulong)local_1c0 & 0xff0000ffffffffff)) {
                if (((ulong)local_1c0 & 0xff0000ffffffffff) <= (plVar24[4] & 0xff0000ffffffffffU))
                goto LAB_71018ea6f0;
                plVar36 = plVar24 + 1;
                plVar14 = (long *)*plVar36;
                if ((long *)*plVar36 == (long *)0x0) goto LAB_71018ea6f0;
              }
              plVar14 = (long *)*plVar24;
              plVar36 = plVar24;
            } while ((long *)*plVar24 != (long *)0x0);
            lVar17 = *plVar24;
          }
          if (lVar17 == 0) {
            plVar14 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar18,ppppbVar20,
                                             pppplVar21,param_6,param_7,param_8);
            if (plVar14 == (long *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_208[0] = 0;
                local_1c0 = (long ********)&DAT_00000030;
                ppppppppplVar18 = &local_1c0;
                uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_208);
                if (((uVar7 & 1) != 0) &&
                   (plVar14 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar18,ppppbVar20
                                                     ,pppplVar21,param_6,param_7,param_8),
                   plVar14 != (long *)0x0)) goto LAB_71018ea7b4;
              }
              plVar14 = (long *)0x0;
            }
LAB_71018ea7b4:
            plVar14[4] = (long)pppppppplVar23;
            *(int *)(plVar14 + 5) = iVar5;
            plVar14[2] = (long)plVar24;
            *plVar14 = 0;
            plVar14[1] = 0;
            *plVar36 = (long)plVar14;
            if (*(long *)plVar34[3] != 0) {
              plVar34[3] = *(long *)plVar34[3];
              plVar14 = (long *)*plVar36;
            }
            std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                      ((long *)plVar34[4],plVar14);
            plVar34[5] = plVar34[5] + 1;
            plVar24 = (long *)*plVar41;
          }
          else {
            plVar24 = (long *)*plVar41;
          }
          plVar36 = plVar41;
          plVar14 = plVar41;
          if (plVar24 == (long *)0x0) {
LAB_71018ea800:
            lVar17 = *plVar36;
          }
          else {
            plVar36 = plVar34 + 7;
            do {
              while (plVar14 = plVar24,
                    (plVar14[4] & 0xff0000ffffffffffU) <=
                    ((ulong)pppppppplVar23 & 0xff0000ffffffffff)) {
                if (((ulong)pppppppplVar23 & 0xff0000ffffffffff) <=
                    (plVar14[4] & 0xff0000ffffffffffU)) goto LAB_71018ea800;
                plVar36 = plVar14 + 1;
                plVar24 = (long *)*plVar36;
                if ((long *)*plVar36 == (long *)0x0) goto LAB_71018ea800;
              }
              plVar36 = plVar14;
              plVar24 = (long *)*plVar14;
            } while ((long *)*plVar14 != (long *)0x0);
            lVar17 = *plVar14;
          }
          if (lVar17 == 0) {
            plVar24 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar18,ppppbVar20,
                                             pppplVar21,param_6,param_7,param_8);
            if (plVar24 == (long *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_208[0] = 0;
                local_1c0 = (long ********)&DAT_00000030;
                ppppppppplVar18 = &local_1c0;
                uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_208);
                if (((uVar7 & 1) != 0) &&
                   (plVar24 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar18,ppppbVar20
                                                     ,pppplVar21,param_6,param_7,param_8),
                   plVar24 != (long *)0x0)) goto LAB_71018ea864;
              }
              plVar24 = (long *)0x0;
            }
LAB_71018ea864:
            plVar24[4] = (long)pppppppplVar23;
            *(uint *)(plVar24 + 5) = uVar37;
            plVar24[2] = (long)plVar14;
            *plVar24 = 0;
            plVar24[1] = 0;
            *plVar36 = (long)plVar24;
            if (*(long *)plVar34[6] != 0) {
              plVar34[6] = *(long *)plVar34[6];
              plVar24 = (long *)*plVar36;
            }
            std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                      ((long *)plVar34[7],plVar24);
            plVar34[8] = plVar34[8] + 1;
          }
          uVar37 = uVar37 + 1;
          if (uVar37 == uVar1) break;
          plVar24 = (long *)**(undefined8 **)(lVar10 + -8);
          ppppppppplVar18 = (long *********)plVar24[1];
        } while( true );
      }
      puVar8 = puVar8 + 1;
      iVar5 = iVar5 + 1;
    } while (puVar8 != puVar9);
  }
  lVar10 = plVar6[0x4a];
  *(undefined4 *)(lVar10 + 0x490) = 0x3ed851ea;
  *(undefined2 *)(lVar10 + 0x4a8) = 0;
  *(undefined8 *)(lVar10 + 0x3fc) = 0x600000011;
  *(undefined8 *)(lVar10 + 0x404) = 0x6400000002;
  *(undefined8 *)(lVar10 + 0x40c) = 0;
  *(undefined8 *)(lVar10 + 0x414) = 0x600000011;
  *(undefined8 *)(lVar10 + 0x41c) = 0x6400000002;
  *(undefined8 *)(lVar10 + 0x424) = 0;
  *(undefined4 *)(plVar6[0x4a] + 0x18) = 0x20;
  *(undefined4 *)(plVar6[0x4a] + 0x1c) = 0x40;
  *(undefined4 *)(plVar6[0x4a] + 0x20) = 0x10;
  *(undefined4 *)(plVar6[0x4a] + 0x24) = 0x80;
  *(undefined1 *)(plVar6[0x4a] + 0x4aa) = 0;
LAB_71018ea964:
  plVar6[1] = 0;
  plVar6[2] = 0;
  *(undefined8 *)((long)plVar6 + 0x15c) = 0;
  *(undefined8 *)((long)plVar6 + 0x154) = 0;
  *(undefined8 *)((long)plVar6 + 0x14c) = 0;
  *(undefined8 *)((long)plVar6 + 0x144) = 0;
  *(undefined8 *)((long)plVar6 + 0x13c) = 0;
  *(undefined8 *)((long)plVar6 + 0x134) = 0;
  *(undefined8 *)((long)plVar6 + 300) = 0;
  *(undefined8 *)((long)plVar6 + 0x11c) = 0;
  *(undefined4 *)((long)plVar6 + 0x164) = 0;
  *(undefined8 *)((long)plVar6 + 0x124) = 0;
  plVar6[0x2d] = 0xffffffff;
  *(undefined4 *)(plVar6 + 0x2e) = 0xffffffff;
  *(undefined1 *)((long)plVar6 + 0x174) = 0;
  *(undefined4 *)(plVar6 + 0x23) = 1;
  FUN_71018e6c60(plVar6);
  return;
}

