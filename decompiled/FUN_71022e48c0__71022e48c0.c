// addr:      71022e48c0
// offset:    0x22e48c0
// name:      FUN_71022e48c0
// mangled:   
// signature: undefined __cdecl FUN_71022e48c0(long param_1)


/* WARNING: Removing unreachable block (ram,0x0071022e59f4) */

void FUN_71022e48c0(long param_1)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  int iVar11;
  uint uVar10;
  long lVar12;
  int *piVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  byte *pbVar19;
  size_t sVar20;
  void *pvVar21;
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
  long *********ppppppppplVar22;
  undefined *puVar23;
  long ****pppplVar24;
  byte ****ppppbVar25;
  undefined8 uVar26;
  ulong *puVar27;
  long ****pppplVar28;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  char *pcVar29;
  ulong *puVar30;
  ulong *puVar31;
  ulong uVar32;
  long ***ppplVar33;
  ushort uVar34;
  ulong *puVar35;
  int iVar36;
  ulong uVar37;
  ulong uVar38;
  long lVar39;
  undefined1 *puVar40;
  void *pvVar41;
  long lVar42;
  long ****pppplVar43;
  long *plVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined **local_128;
  undefined8 *local_120;
  long ********local_118;
  ulong local_110 [8];
  ulong local_d0;
  undefined6 uStack_c8;
  undefined2 local_c2;
  undefined6 uStack_c0;
  ulong local_b8;
  undefined6 uStack_b0;
  undefined2 local_aa;
  undefined6 uStack_a8;
  undefined **local_a0;
  undefined8 *local_98;
  long ***local_90;
  ulong uStack_88;
  undefined4 local_64;
  
  if (*(long *)(param_1 + 0x180) != 0) {
    return;
  }
  lVar12 = *(long *)(param_1 + 0x178);
  ppppbVar25 = (byte ****)(ulong)*(uint *)(lVar12 + 0x68);
  pppplVar28 = (long ****)0x0;
  FUN_710323beb0(lVar12,(ulong *)&DAT_7104543978,(long)*(int *)(lVar12 + 0x70),(ulong)ppppbVar25,
                 (long ****)0x0,in_x5,in_x6,in_x7);
  if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  plVar44 = (long *)(param_1 + 0x178);
  piVar13 = FUN_71032df050(*(long *)(DAT_710532f7b0 + 8),DAT_7105307d50);
  puVar40 = *(undefined1 **)(piVar13 + 2);
  lVar12 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
  uVar9 = FUN_71032632a0(lVar12,(ulong)puVar40);
  puVar14 = puVar40;
  if ((uVar9 & 1) != 0) {
    puVar14 = FUN_71032631a0(lVar12,0x11b1ccb807);
  }
  uVar10 = FUN_71032633f0(lVar12,(ulong)puVar40);
  uVar9 = (uint)*(byte *)((long)piVar13 + 0x12);
  if (uVar10 <= *(byte *)((long)piVar13 + 0x12)) {
    uVar9 = 0;
  }
  ppppppppplVar22 = (long *********)0x1;
  local_118 = (long ********)FUN_7103238a70((ulong)puVar14,(ulong)uVar9,1);
  uVar26 = extraout_x1;
  if (((ulong)local_118 & 0xffffffffff) != 0) {
    lVar12 = *plVar44;
    ppppppppplVar22 = (long *********)(long)*(int *)(lVar12 + 0x70);
    ppppbVar25 = (byte ****)(ulong)*(uint *)(lVar12 + 0x68);
    FUN_710323c4e0(lVar12,(ulong *)&local_118,ppppppppplVar22,ppppbVar25,pppplVar28,in_x5,in_x6,
                   in_x7);
    uVar26 = extraout_x1_00;
  }
  lVar39 = *(long *)(DAT_710532f730 + 8);
  lVar12 = *(long *)(*(long *)(lVar39 + 0x188) + 8);
  pcVar29 = *(char **)(lVar12 + 0x20);
  if ((*pcVar29 == '\f') && (iVar11 = *(int *)(pcVar29 + 1) + -1, 0 < *(int *)(pcVar29 + 1))) {
    uVar37 = *(ulong *)(lVar12 + 0x48) & 0xffffffffff;
    iVar36 = 0;
    pbVar19 = &DAT_7104742dbb;
    do {
      iVar3 = iVar11 + iVar36;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar2 = (uint *)(*(long *)(*(long *)(lVar12 + 0x18) + 0x28) + (long)*(int *)(pcVar29 + 5) +
                       (long)iVar3 * 8);
      uVar38 = *(ulong *)(*(long *)(*(long *)(lVar12 + 0x18) + 0x20) + (ulong)*puVar2 * 8);
      if (uVar38 == uVar37) {
        uVar9 = puVar2[1];
        if ((int)uVar9 < 0) goto LAB_71022e4a6c;
        pbVar19 = (byte *)(pcVar29 + (int)uVar9);
        break;
      }
      iVar7 = iVar3 + -1;
      if (uVar38 <= uVar37) {
        iVar36 = iVar3 + 1;
        iVar7 = iVar11;
      }
      iVar11 = iVar7;
    } while (iVar36 <= iVar11);
  }
  else {
LAB_71022e4a6c:
    pbVar19 = &DAT_7104742dbb;
  }
  if ((*pbVar19 - 0xb < 2) && (0 < *(int *)(pbVar19 + 1))) {
    uVar9 = 0;
    do {
      uVar37 = FUN_710329a0f0(lVar12,uVar9);
      local_118 = (long ********)FUN_7103238d60(uVar37,0x11);
      uVar26 = extraout_x1_01;
      if (((ulong)local_118 & 0xffffffffff) != 0) {
        lVar12 = *plVar44;
        ppppppppplVar22 = (long *********)(long)*(int *)(lVar12 + 0x70);
        ppppbVar25 = (byte ****)(ulong)*(uint *)(lVar12 + 0x68);
        FUN_710323c4e0(lVar12,(ulong *)&local_118,ppppppppplVar22,ppppbVar25,pppplVar28,in_x5,in_x6,
                       in_x7);
        uVar26 = extraout_x1_02;
      }
      lVar12 = *(long *)(*(long *)(lVar39 + 0x188) + 8);
      pcVar29 = *(char **)(lVar12 + 0x20);
      pbVar19 = &DAT_7104742dbb;
      if ((*pcVar29 == '\f') && (iVar11 = *(int *)(pcVar29 + 1) + -1, 0 < *(int *)(pcVar29 + 1))) {
        iVar36 = 0;
        uVar37 = *(ulong *)(lVar12 + 0x48) & 0xffffffffff;
        do {
          iVar3 = iVar11 + iVar36;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar2 = (uint *)(*(long *)(*(long *)(lVar12 + 0x18) + 0x28) + (long)*(int *)(pcVar29 + 5)
                           + (long)iVar3 * 8);
          uVar38 = *(ulong *)(*(long *)(*(long *)(lVar12 + 0x18) + 0x20) + (ulong)*puVar2 * 8);
          if (uVar38 == uVar37) {
            uVar10 = puVar2[1];
            if (-1 < (int)uVar10) {
              pbVar19 = (byte *)(pcVar29 + (int)uVar10);
            }
            break;
          }
          iVar7 = iVar3 + -1;
          if (uVar38 <= uVar37) {
            iVar36 = iVar3 + 1;
            iVar7 = iVar11;
          }
          iVar11 = iVar7;
        } while (iVar36 <= iVar11);
      }
    } while ((*pbVar19 - 0xb < 2) && (uVar9 = uVar9 + 1, (int)uVar9 < *(int *)(pbVar19 + 1)));
  }
  lVar12 = *plVar44;
  uVar37 = FUN_710323cb80(lVar12,uVar26,ppppppppplVar22,ppppbVar25,pppplVar28,in_x5,in_x6,in_x7);
  while ((uVar37 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar37 = FUN_710323cb80(lVar12,extraout_x1_03,ppppppppplVar22,ppppbVar25,pppplVar28,in_x5,in_x6,
                            in_x7);
  }
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar22,ppppbVar25,pppplVar28,in_x5,in_x6,
                           in_x7);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = local_b8 & 0xffffffff00000000;
      local_118 = (long ********)&DAT_00000088;
      ppppppppplVar22 = &local_118;
      uVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar37 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar22,ppppbVar25,pppplVar28,in_x5,
                                   in_x6,in_x7), puVar15 != (undefined8 *)0x0)) goto LAB_71022e4c08;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_71022e4c08:
  *(undefined1 *)(puVar15 + 0xb) = 0;
  *puVar15 = &PTR_FUN_71050a7158;
  puVar15[1] = 0;
  puVar15[0xc] = 0;
  puVar15[0xd] = 0x1ffffffff;
  puVar15[0xf] = plVar44;
  *(undefined1 *)(puVar15 + 0xe) = 1;
  puVar15[2] = 0;
  puVar15[3] = 0;
  puVar15[9] = 0;
  puVar15[10] = 0;
  puVar16 = (undefined8 *)
            FUN_710392e290(0x10,0x1f0,(long ****)ppppppppplVar22,ppppbVar25,pppplVar28,in_x5,in_x6,
                           in_x7);
  if (puVar16 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = local_b8 & 0xffffffff00000000;
      local_118 = (long ********)&DAT_000001f0;
      ppppppppplVar22 = &local_118;
      uVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar37 & 1) != 0) &&
         (puVar16 = (undefined8 *)
                    FUN_710392e290(0x10,0x1f0,(long ****)ppppppppplVar22,ppppbVar25,pppplVar28,in_x5
                                   ,in_x6,in_x7), puVar16 != (undefined8 *)0x0))
      goto LAB_71022e4c94;
    }
    puVar16 = (undefined8 *)0x0;
  }
LAB_71022e4c94:
  puVar17 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)ppppppppplVar22,ppppbVar25,pppplVar28,in_x5,in_x6,in_x7
                          );
  uVar26 = extraout_x1_04;
  if (puVar17 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = local_b8 & 0xffffffff00000000;
      local_118 = (long ********)&DAT_00000008;
      ppppppppplVar22 = &local_118;
      auVar47 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      uVar26 = auVar47._8_8_;
      if (((auVar47._0_8_ & 1) != 0) &&
         (puVar17 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)ppppppppplVar22,ppppbVar25,pppplVar28,in_x5,
                                   in_x6,in_x7), uVar26 = extraout_x1_05,
         puVar17 != (undefined8 *)0x0)) goto LAB_71022e4cf0;
    }
    puVar17 = (undefined8 *)0x0;
  }
LAB_71022e4cf0:
  FUN_7103773200(puVar17,uVar26,(long ****)ppppppppplVar22,ppppbVar25,pppplVar28,in_x5,in_x6,in_x7);
  *puVar16 = puVar17;
  puVar17 = puVar16 + 1;
  FUN_7103776290(puVar17,extraout_x1_06,(long ****)ppppppppplVar22,ppppbVar25,pppplVar28,in_x5,in_x6
                 ,in_x7);
  puVar16[3] = puVar16;
  puVar16[4] = 0;
  puVar16[0x25] = 0;
  puVar16[0x26] = 0xffffffff;
  *(undefined4 *)(puVar16 + 0x27) = 0xffffffff;
  *(undefined4 *)(puVar16 + 0x30) = 0xffffffff;
  puVar16[6] = 0;
  puVar16[7] = 0;
  puVar16[5] = 0;
  *(undefined1 *)((long)puVar16 + 0x13c) = 0;
  puVar16[8] = 0;
  puVar16[0x28] = plVar44;
  *(undefined4 *)(puVar16 + 0x29) = 0;
  *(undefined1 *)((long)puVar16 + 0x14c) = 0;
  *(undefined1 *)((long)puVar16 + 0x184) = 1;
  puVar16[0x31] = &PTR_FUN_710523d9e8;
  puVar16[0x23] = 0;
  puVar16[0x24] = 0;
  puVar16[0x21] = 0;
  puVar16[0x22] = 0;
  puVar16[0x1f] = 0;
  puVar16[0x20] = 0;
  puVar16[0x1d] = 0;
  puVar16[0x1e] = 0;
  puVar16[0x1b] = 0;
  puVar16[0x1c] = 0;
  puVar16[0x19] = 0;
  puVar16[0x1a] = 0;
  puVar16[0x17] = 0;
  puVar16[0x18] = 0;
  puVar16[0x15] = 0;
  puVar16[0x16] = 0;
  puVar16[0x13] = 0;
  puVar16[0x14] = 0;
  puVar16[0x11] = 0;
  puVar16[0x12] = 0;
  puVar16[0xf] = 0;
  puVar16[0x10] = 0;
  puVar16[0xd] = 0;
  puVar16[0xe] = 0;
  puVar16[0xb] = 0;
  puVar16[0xc] = 0;
  puVar16[9] = 0;
  puVar16[10] = 0;
  puVar16[0x2e] = 0;
  puVar16[0x2f] = 0;
  puVar16[0x2c] = 0;
  puVar16[0x2d] = 0;
  puVar16[0x2a] = 0;
  puVar16[0x2b] = 0;
  puVar18 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar22,ppppbVar25,pppplVar28,in_x5,in_x6,
                           in_x7);
  if (puVar18 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = local_b8 & 0xffffffff00000000;
      local_118 = (long ********)&SUB_00000018;
      ppppppppplVar22 = &local_118;
      uVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar37 & 1) != 0) &&
         (puVar18 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar22,ppppbVar25,pppplVar28,in_x5,
                                   in_x6,in_x7), puVar18 != (undefined8 *)0x0)) goto LAB_71022e4df0;
    }
    puVar18 = (undefined8 *)0x0;
  }
LAB_71022e4df0:
  *puVar18 = 0;
  puVar18[1] = 0;
  *(undefined1 *)(puVar18 + 2) = 1;
  puVar16[0x32] = puVar18;
  puVar16[0x33] = 0;
  *(undefined8 *)((long)puVar16 + 0x1a6) = 0;
  puVar16[0x34] = 0;
  puVar16[0x36] = &PTR_FUN_710523d9a8;
  puVar18 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar22,ppppbVar25,pppplVar28,in_x5,in_x6,
                           in_x7);
  if (puVar18 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = local_b8 & 0xffffffff00000000;
      local_118 = (long ********)&SUB_00000020;
      ppppppppplVar22 = &local_118;
      uVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar37 & 1) != 0) &&
         (puVar18 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar22,ppppbVar25,pppplVar28,in_x5,
                                   in_x6,in_x7), puVar18 != (undefined8 *)0x0)) goto LAB_71022e4e68;
    }
    puVar18 = (undefined8 *)0x0;
  }
LAB_71022e4e68:
  puVar18[2] = 0;
  puVar18[3] = 0;
  *puVar18 = 0;
  puVar18[1] = 0;
  puVar16[0x37] = puVar18;
  puVar16[0x38] = 0;
  *(undefined8 *)((long)puVar16 + 0x1ce) = 0;
  *(undefined1 *)(puVar16 + 0x3d) = 1;
  puVar16[0x39] = 0;
  puVar16[8] = FUN_7101990780;
  puVar16[9] = 0;
  puVar16[10] = FUN_7101990790;
  puVar16[0xb] = 0;
  puVar16[0x10] = FUN_7101990d80;
  puVar16[0x11] = 0;
  puVar16[0xc] = FUN_7101990ad0;
  puVar16[0xd] = 0;
  puVar16[0x14] = FUN_7101990f10;
  puVar16[0x15] = 0;
  puVar16[0xe] = FUN_7101990d70;
  puVar16[0xf] = 0;
  puVar16[0x16] = FUN_7101991010;
  puVar16[0x17] = 0;
  puVar16[0x12] = FUN_7101990e10;
  puVar16[0x13] = 0;
  puVar16[0x1a] = FUN_71019911e0;
  puVar16[0x1b] = 0;
  puVar16[0x3b] = 0;
  puVar16[0x3c] = 0;
  puVar16[0x18] = FUN_7101991110;
  puVar16[0x19] = 0;
  puVar16[4] = 0;
  puVar16[5] = 0;
  *(undefined8 *)((long)puVar16 + 0x124) = 0;
  *(undefined8 *)((long)puVar16 + 0x11c) = 0;
  *(undefined8 *)((long)puVar16 + 0x114) = 0;
  *(undefined8 *)((long)puVar16 + 0x10c) = 0;
  *(undefined8 *)((long)puVar16 + 0x104) = 0;
  *(undefined8 *)((long)puVar16 + 300) = 0xffffffff00000000;
  *(undefined8 *)((long)puVar16 + 0xfc) = 0;
  *(undefined8 *)((long)puVar16 + 0xf4) = 0;
  *(undefined8 *)((long)puVar16 + 0xec) = 0;
  *(undefined8 *)((long)puVar16 + 0xe4) = 0;
  *(undefined8 *)((long)puVar16 + 0x134) = 0xffffffff00000000;
  *(undefined1 *)((long)puVar16 + 0x13c) = 0;
  *(undefined4 *)(puVar16 + 0x1c) = 0;
  FUN_7101991ee0(puVar16 + 3);
  puVar15[0x10] = puVar16;
  puVar23 = &DAT_7104543978;
  uVar26 = 1;
  FUN_71032cbf30(puVar16,*(long *)puVar16[0x28],(ulong *)&DAT_7104543978,(byte ****)0x1,pppplVar28,
                 in_x5,in_x6,in_x7);
  lVar12 = **(long **)*puVar16;
  lVar39 = *(long *)(lVar12 + 0x600);
  *(undefined4 *)(lVar39 + 0x18) = 0x40000300;
  *(undefined4 *)(lVar39 + 0xe4) = 0xf00ffcff;
  *(undefined4 *)(*(long *)(lVar12 + 0x600) + 0x1c) = 0x80;
  lVar12 = *(long *)*puVar16;
  if ((undefined8 *)(lVar12 + 8) != puVar17) {
    *(undefined8 *)puVar16[2] = **(undefined8 **)(lVar12 + 0x10);
    *(undefined8 *)(puVar16[2] + 8) = *(undefined8 *)(*(long *)(lVar12 + 0x10) + 8);
    lVar39 = *(long *)(lVar12 + 0x10);
    lVar12 = puVar16[2];
    if (lVar12 != lVar39) {
      **(undefined8 **)(lVar12 + 0x18) = **(undefined8 **)(lVar39 + 0x18);
      *(undefined8 *)(*(long *)(lVar12 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar39 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar12 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar39 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar12 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar39 + 0x18) + 0x18);
    }
  }
  puVar27 = puVar16 + 0x33;
  pbVar19 = (byte *)FUN_71032dc2a0(*(long *)(DAT_710532f7b0 + 8),
                                   *(int *)(*(long *)(DAT_710532f7b0 + 8) + 0x214));
  sVar20 = strlen((char *)pbVar19);
  uVar9 = (uint)*pbVar19;
  if ((int)sVar20 < 0) {
    if (uVar9 != 0) {
      sVar20 = 0;
      do {
        lVar12 = sVar20 + 1;
        sVar20 = sVar20 + 1;
      } while (pbVar19[lVar12] != 0);
      goto LAB_71022e5080;
    }
    uVar37 = 0;
  }
  else {
LAB_71022e5080:
    uVar37 = 0;
    if ((0 < (int)sVar20) && (uVar9 != 0)) {
      uVar37 = 0;
      do {
        if (uVar9 >> 7 == 0) {
          pbVar19 = pbVar19 + 1;
          uVar34 = (ushort)uVar9 & 0x7f;
        }
        else {
          pbVar1 = pbVar19 + 1;
          if ((uVar9 & 0xe0) == 0xc0) {
            pbVar19 = pbVar19 + 2;
            uVar34 = *pbVar1 & 0x3f | (ushort)((uVar9 & 0x3f) << 6);
          }
          else {
            uVar34 = (ushort)(uVar9 << 0xc) | (*pbVar1 & 0x3f) << 6 | pbVar19[2] & 0x3f;
            pbVar19 = pbVar19 + 3;
          }
        }
        *(ushort *)((long)puVar27 + uVar37 * 2) = uVar34;
        uVar37 = uVar37 + 1;
      } while ((((int)uVar37 < (int)sVar20) && (uVar37 < 10)) &&
              (uVar9 = (uint)*pbVar19, uVar9 != 0));
    }
  }
  *(undefined2 *)((long)puVar27 + (uVar37 & 0xffffffff) * 2) = 0;
  *(undefined2 *)((long)puVar16 + 0x1ac) = 0;
  FUN_7103776910(&local_a0,(long)puVar17,(long ****)"set_txt_msg",puVar23,uVar26,pppplVar28,in_x5,
                 in_x6,in_x7);
  puVar18 = local_98;
  local_b8 = *puVar27;
  uVar4 = puVar16[0x34];
  uStack_a8 = (undefined6)((ulong)*(undefined8 *)((long)puVar16 + 0x1a6) >> 0x10);
  uStack_b0 = (undefined6)uVar4;
  local_aa = (undefined2)((ulong)uVar4 >> 0x30);
  if (&local_a0 != (undefined ***)(puVar16 + 0x36)) {
    *(undefined8 *)puVar16[0x37] = *local_98;
    *(undefined8 *)(puVar16[0x37] + 8) = local_98[1];
    *(undefined8 *)(puVar16[0x37] + 0x10) = local_98[2];
    *(undefined8 *)(puVar16[0x37] + 0x18) = local_98[3];
  }
  *(ulong *)((long)puVar16 + 0x1ce) = CONCAT62(uStack_a8,local_aa);
  puVar16[0x38] = local_b8;
  puVar16[0x39] = uVar4;
  local_a0 = &PTR_FUN_710523d9a8;
  local_98 = (undefined8 *)0x0;
  if (puVar18 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar18);
  }
  FUN_7103776910(&local_118,(long)puVar17,(long ****)"set_txt_message",puVar23,uVar26,pppplVar28,
                 in_x5,in_x6,in_x7);
  local_d0 = *puVar27;
  uVar26 = 1;
  puVar27 = &local_d0;
  uStack_c0 = (undefined6)((ulong)*(undefined8 *)((long)puVar16 + 0x1a6) >> 0x10);
  uStack_c8 = (undefined6)puVar16[0x34];
  local_c2 = (undefined2)((ulong)puVar16[0x34] >> 0x30);
  FUN_710377a280((long)&local_118,(byte *)"mnu_amiibo_journey_halfway_start",1);
  uVar37 = local_110[0];
  local_118 = (long ********)&PTR_FUN_710523d9a8;
  local_110[0] = 0;
  if (uVar37 != 0) {
    FUN_710392eb40(uVar37);
  }
  FUN_7101991290((long)(puVar16 + 0x36),1,uVar26,puVar27,pppplVar28,in_x5,in_x6,in_x7);
  local_110[0] = local_110[0] & 0xffffffffffffff00;
  local_118 = (long ********)0x0;
  uVar37 = (ulong)*(uint *)(*DAT_7105328160 + 0x204388);
  FUN_710062dc20((uint *)&local_118,"battle_count_%d");
  FUN_7103778300(0x3f800000,puVar16[2],(long)local_110);
  iVar11 = *(int *)(*DAT_7105328160 + 0x204388);
  FUN_7103776910(&local_90,(long)puVar17,(long ****)"set_txt_battle",uVar37,puVar27,pppplVar28,in_x5
                 ,in_x6,in_x7);
  uVar38 = (ulong)(3 - iVar11);
  FUN_710377a310((long)&local_90,1);
  uVar37 = uStack_88;
  local_90 = (long ***)&PTR_FUN_710523d9a8;
  uStack_88 = 0;
  if (uVar37 != 0) {
    FUN_710392eb40(uVar37);
  }
  FUN_7103776640(&local_128,(long)puVar17,(byte ****)"set_btn_helptxt_00",uVar38,puVar27,pppplVar28,
                 in_x5,in_x6,in_x7);
  FUN_7103776910(&local_90,(long)&local_128,(long ****)"set_txt_help",uVar38,puVar27,pppplVar28,
                 in_x5,in_x6,in_x7);
  FUN_710377a120((long)&local_90,"mnu_amiibo_journey_finish",uVar38,puVar27,pppplVar28,in_x5,in_x6,
                 in_x7);
  uVar37 = uStack_88;
  local_90 = (long ***)&PTR_FUN_710523d9a8;
  uStack_88 = 0;
  if (uVar37 != 0) {
    FUN_710392eb40(uVar37);
  }
  puVar18 = local_120;
  local_128 = &PTR_FUN_710523d988;
  local_120 = (undefined8 *)0x0;
  if (puVar18 != (undefined8 *)0x0) {
    uVar37 = *(ulong *)((long)puVar18 + 0x18);
    *(undefined ***)((long)puVar18 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)puVar18 + 0x18) = 0;
    if (uVar37 != 0) {
      FUN_710392eb40(uVar37);
    }
    FUN_710392eb40((ulong)puVar18);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  piVar13 = FUN_71032df050(*(long *)(DAT_710532f7b0 + 8),DAT_7105307d50);
  puVar40 = *(undefined1 **)(piVar13 + 2);
  lVar12 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
  plVar44 = (long *)puVar16[0x28];
  uVar9 = FUN_71032632a0(lVar12,(ulong)puVar40);
  puVar14 = puVar40;
  if ((uVar9 & 1) != 0) {
    puVar14 = FUN_71032631a0(lVar12,0x11b1ccb807);
  }
  uVar10 = FUN_71032633f0(lVar12,(ulong)puVar40);
  uVar9 = (uint)*(byte *)((long)piVar13 + 0x12);
  if (uVar10 <= *(byte *)((long)piVar13 + 0x12)) {
    uVar9 = 0;
  }
  ppppppppplVar22 = (long *********)(ulong)uVar9;
  ppppbVar25 = (byte ****)0x1;
  plVar44 = FUN_710323f330(plVar44,(ulong)puVar14,(ulong)ppppppppplVar22,1,pppplVar28,in_x5,in_x6,
                           in_x7);
  FUN_7103776910(&local_128,(long)puVar17,(long ****)"set_rep_chara",ppppppppplVar22,ppppbVar25,
                 pppplVar28,in_x5,in_x6,in_x7);
  puVar17 = local_120;
  FUN_7103778b80((long)local_120,(long)plVar44,ppppppppplVar22,ppppbVar25,pppplVar28,in_x5,in_x6,
                 in_x7);
  lVar12 = *(long *)(DAT_710532f730 + 8);
  puVar40 = *(undefined1 **)(piVar13 + 2);
  lVar39 = *(long *)(lVar12 + 0x168);
  uVar9 = FUN_71032632a0(lVar39,(ulong)puVar40);
  puVar14 = puVar40;
  if ((uVar9 & 1) != 0) {
    puVar14 = FUN_71032631a0(lVar39,0x11b1ccb807);
  }
  uVar10 = FUN_71032633f0(lVar39,(ulong)puVar40);
  uVar9 = (uint)*(byte *)((long)piVar13 + 0x12);
  if (uVar10 <= *(byte *)((long)piVar13 + 0x12)) {
    uVar9 = 0;
  }
  uVar9 = FUN_7103280ec0(*(long *)(lVar12 + 0x2a8),(ulong)puVar14,(ulong)uVar9,ppppbVar25,pppplVar28
                         ,in_x5,in_x6,in_x7);
  uVar37 = 0;
  lVar12 = *(long *)(*(long *)(lVar12 + 0x2a8) + 8);
  auVar45 = FUN_710326ad60(ZEXT816(0),lVar12,uVar9,0x10751bf048);
  auVar47._8_8_ = 0;
  auVar47._0_8_ = uVar37;
  auVar47 = FUN_710326ad60(auVar47 << 0x40,lVar12,uVar9,0x10021cc0de);
  pppplVar24 = (long ****)0xdef434469;
  auVar46 = FUN_710326ad60(ZEXT816(0x3f800000),lVar12,uVar9,0xdef434469);
  puVar18 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar24,ppppbVar25,pppplVar28,in_x5,in_x6,in_x7);
  if (puVar18 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_90 = (long ***)&SUB_00000020;
      pppplVar24 = &local_90;
      uVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar37 & 1) != 0) &&
         (puVar18 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar24,ppppbVar25,pppplVar28,in_x5,in_x6,in_x7),
         puVar18 != (undefined8 *)0x0)) goto LAB_71022e5504;
    }
    puVar18 = (undefined8 *)0x0;
  }
LAB_71022e5504:
  puVar18[2] = 0;
  puVar18[3] = 0;
  *puVar18 = 0;
  puVar18[1] = 0;
  *puVar18 = *puVar17;
  puVar18[1] = puVar17[1];
  local_90 = (long ***)CONCAT44(auVar47._0_4_,auVar45._0_4_);
  puVar18[2] = local_120[2];
  puVar18[3] = local_120[3];
  uStack_88 = 0;
  FUN_7103779770(auVar46._0_4_,(long)puVar18,&local_90);
  if (puVar18 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar18);
  }
  lVar39 = *(long *)(DAT_710532f730 + 8);
  lVar42 = *(long *)(lVar39 + 0x188);
  lVar12 = *(long *)(lVar42 + 8);
  pcVar29 = *(char **)(lVar12 + 0x20);
  if ((*pcVar29 == '\f') && (iVar11 = *(int *)(pcVar29 + 1) + -1, 0 < *(int *)(pcVar29 + 1))) {
    uVar37 = *(ulong *)(lVar12 + 0x48) & 0xffffffffff;
    iVar36 = 0;
    pbVar19 = &DAT_7104742dbb;
    do {
      iVar3 = iVar11 + iVar36;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar2 = (uint *)(*(long *)(*(long *)(lVar12 + 0x18) + 0x28) + (long)*(int *)(pcVar29 + 5) +
                       (long)iVar3 * 8);
      uVar38 = *(ulong *)(*(long *)(*(long *)(lVar12 + 0x18) + 0x20) + (ulong)*puVar2 * 8);
      if (uVar38 == uVar37) {
        uVar9 = puVar2[1];
        if ((int)uVar9 < 0) goto LAB_71022e5604;
        pbVar19 = (byte *)(pcVar29 + (int)uVar9);
        break;
      }
      iVar7 = iVar3 + -1;
      if (uVar38 <= uVar37) {
        iVar36 = iVar3 + 1;
        iVar7 = iVar11;
      }
      iVar11 = iVar7;
    } while (iVar36 <= iVar11);
  }
  else {
LAB_71022e5604:
    pbVar19 = &DAT_7104742dbb;
  }
  if ((*pbVar19 - 0xb < 2) && (0 < *(int *)(pbVar19 + 1))) {
    uVar9 = 0;
    do {
      uVar37 = FUN_710329a0f0(lVar12,uVar9);
      uVar10 = FUN_710329af90(lVar42,uVar37);
      if ((uVar10 & 1) != 0) {
        puVar27 = (ulong *)puVar16[0x2b];
        if (puVar27 == (ulong *)puVar16[0x2c]) {
          pvVar41 = (void *)puVar16[0x2a];
          pppplVar43 = (long ****)((long)puVar27 - (long)pvVar41);
          uVar38 = ((long)pppplVar43 >> 3) + 1;
          if (uVar38 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar12 = (long)puVar16[0x2c] - (long)pvVar41;
          if ((ulong)(lVar12 >> 3) < 0xfffffffffffffff) {
            uVar32 = lVar12 >> 2;
            if (uVar38 <= uVar32) {
              uVar38 = uVar32;
            }
            if (uVar38 != 0) {
              if (uVar38 >> 0x3d == 0) goto LAB_71022e56cc;
              goto LAB_71022e5cd0;
            }
            pvVar21 = (void *)0x0;
          }
          else {
            uVar38 = 0x1fffffffffffffff;
LAB_71022e56cc:
            ppplVar33 = (long ***)(uVar38 * 8);
            if (ppplVar33 == (long ***)0x0) {
              ppplVar33 = (long ***)0x1;
            }
            pvVar21 = (void *)FUN_710392e290(0x10,ppplVar33,pppplVar24,ppppbVar25,pppplVar28,in_x5,
                                             in_x6,in_x7);
            if (pvVar21 == (void *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_64 = 0;
                pppplVar24 = &local_90;
                local_90 = ppplVar33;
                uVar32 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
                if (((uVar32 & 1) != 0) &&
                   (pvVar21 = (void *)FUN_710392e290(0x10,ppplVar33,pppplVar24,ppppbVar25,pppplVar28
                                                     ,in_x5,in_x6,in_x7), pvVar21 != (void *)0x0))
                goto LAB_71022e5738;
              }
              pvVar21 = (void *)0x0;
            }
          }
LAB_71022e5738:
          puVar27 = (ulong *)((long)pvVar21 + ((long)pppplVar43 >> 3) * 8);
          *puVar27 = uVar37;
          if (0 < (long)pppplVar43) {
            memcpy(pvVar21,pvVar41,(size_t)pppplVar43);
            pppplVar24 = pppplVar43;
          }
          puVar16[0x2c] = (void *)((long)pvVar21 + uVar38 * 8);
          puVar16[0x2a] = pvVar21;
          puVar16[0x2b] = puVar27 + 1;
          if (pvVar41 != (void *)0x0) {
            FUN_710392eb40((ulong)pvVar41);
          }
        }
        else {
          *puVar27 = uVar37;
          puVar16[0x2b] = puVar16[0x2b] + 8;
        }
      }
      pbVar19 = &DAT_7104742dbb;
      lVar42 = *(long *)(lVar39 + 0x188);
      lVar12 = *(long *)(lVar42 + 8);
      pcVar29 = *(char **)(lVar12 + 0x20);
      if ((*pcVar29 == '\f') && (iVar11 = *(int *)(pcVar29 + 1) + -1, 0 < *(int *)(pcVar29 + 1))) {
        iVar36 = 0;
        uVar37 = *(ulong *)(lVar12 + 0x48) & 0xffffffffff;
        do {
          iVar3 = iVar11 + iVar36;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar2 = (uint *)(*(long *)(*(long *)(lVar12 + 0x18) + 0x28) + (long)*(int *)(pcVar29 + 5)
                           + (long)iVar3 * 8);
          uVar38 = *(ulong *)(*(long *)(*(long *)(lVar12 + 0x18) + 0x20) + (ulong)*puVar2 * 8);
          if (uVar38 == uVar37) {
            uVar10 = puVar2[1];
            if (-1 < (int)uVar10) {
              pbVar19 = (byte *)(pcVar29 + (int)uVar10);
            }
            break;
          }
          iVar7 = iVar3 + -1;
          if (uVar38 <= uVar37) {
            iVar36 = iVar3 + 1;
            iVar7 = iVar11;
          }
          iVar11 = iVar7;
        } while (iVar36 <= iVar11);
      }
    } while ((*pbVar19 - 0xb < 2) && (uVar9 = uVar9 + 1, (int)uVar9 < *(int *)(pbVar19 + 1)));
  }
  FUN_7101991410((ulong *)puVar16[0x2a],(ulong *)puVar16[0x2b]);
  puVar27 = (ulong *)puVar16[0x2a];
  puVar31 = (ulong *)puVar16[0x2b];
  puVar30 = puVar27;
  if (puVar27 != puVar31) {
    do {
      while( true ) {
        puVar30 = puVar30 + 1;
        puVar35 = puVar31;
        if (puVar30 == puVar31) goto LAB_71022e58c4;
        uVar37 = puVar30[-1];
        uVar38 = *puVar30;
        if ((uVar37 & 0xff00000000000000) == 0x2d00000000000000 && (uVar37 & 0xffffffffff) != 0)
        break;
        if ((uVar38 & 0xff00000000000000) != 0x2d00000000000000 || (uVar38 & 0xffffffffff) == 0)
        goto LAB_71022e594c;
      }
    } while (((uVar38 & 0xff00000000000000) != 0x2d00000000000000 || (uVar38 & 0xffffffffff) == 0)
             || ((uVar38 ^ uVar37) & 0xffffffffff) != 0);
LAB_71022e594c:
    puVar30 = puVar30 + -1;
  }
  if (puVar30 != puVar31) {
    puVar35 = puVar30 + 2;
    if (puVar35 != puVar31) {
      do {
        uVar38 = *puVar30;
        uVar37 = *puVar35;
        if ((uVar38 & 0xff00000000000000) == 0x2d00000000000000 && (uVar38 & 0xffffffffff) != 0) {
          if (((uVar37 & 0xff00000000000000) != 0x2d00000000000000 || (uVar37 & 0xffffffffff) == 0)
              || ((uVar37 ^ uVar38) & 0xffffffffff) != 0) goto LAB_71022e59b8;
        }
        else if ((uVar37 & 0xff00000000000000) == 0x2d00000000000000 && (uVar37 & 0xffffffffff) != 0
                ) {
LAB_71022e59b8:
          puVar30 = puVar30 + 1;
          *puVar30 = uVar37;
        }
        puVar35 = puVar35 + 1;
      } while (puVar31 != puVar35);
      puVar27 = (ulong *)puVar16[0x2a];
      puVar31 = (ulong *)puVar16[0x2b];
    }
    puVar30 = puVar30 + 1;
  }
  bVar8 = puVar31 == puVar30;
  puVar35 = puVar31;
  puVar31 = puVar30;
  if (bVar8) {
LAB_71022e58c4:
    puVar30 = puVar35;
    pppplVar43 = pppplVar24;
    if (puVar27 == puVar31) goto LAB_71022e5a14;
LAB_71022e58cc:
    if ((8 < (long)puVar30 - (long)puVar27) && (puVar27 < puVar30 + -1)) {
      uVar37 = (ulong)((long)puVar30 - (long)puVar27) >> 3;
      do {
        uVar37 = uVar37 - 1;
        local_90 = (long ***)0x0;
        uStack_88 = uVar37;
        lVar12 = FUN_710137bc30(&DAT_71052391c0,(long *)&local_90);
        if (lVar12 != 0) {
          uVar38 = *puVar27;
          *puVar27 = puVar27[lVar12];
          puVar27[lVar12] = uVar38;
        }
        puVar27 = puVar27 + 1;
      } while (puVar27 < puVar30 + -1);
      puVar27 = (ulong *)puVar16[0x2a];
      puVar30 = (ulong *)puVar16[0x2b];
    }
    if (puVar27 == puVar30) goto LAB_71022e5b40;
  }
  else {
    pppplVar24 = (long ****)0x0;
    puVar16[0x2b] = puVar30;
    pppplVar43 = (long ****)0x0;
    if (puVar27 != puVar30) goto LAB_71022e58cc;
LAB_71022e5a14:
    pppplVar24 = pppplVar43;
    if (puVar31 == puVar30) goto LAB_71022e5b40;
  }
  do {
    uVar37 = puVar30[-1];
    puVar16[0x2b] = puVar30 + -1;
    puVar27 = (ulong *)puVar16[0x2e];
    if (puVar27 == (ulong *)puVar16[0x2f]) {
      pvVar41 = (void *)puVar16[0x2d];
      pppplVar43 = (long ****)((long)puVar27 - (long)pvVar41);
      uVar38 = ((long)pppplVar43 >> 3) + 1;
      if (uVar38 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar12 = (long)puVar16[0x2f] - (long)pvVar41;
      if ((ulong)(lVar12 >> 3) < 0xfffffffffffffff) {
        uVar32 = lVar12 >> 2;
        if (uVar38 <= uVar32) {
          uVar38 = uVar32;
        }
        if (uVar38 != 0) {
          if (uVar38 >> 0x3d != 0) {
LAB_71022e5cd0:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          goto LAB_71022e5a98;
        }
LAB_71022e5af8:
        pvVar21 = (void *)0x0;
      }
      else {
        uVar38 = 0x1fffffffffffffff;
LAB_71022e5a98:
        ppplVar33 = (long ***)(uVar38 * 8);
        if (ppplVar33 == (long ***)0x0) {
          ppplVar33 = (long ***)0x1;
        }
        pvVar21 = (void *)FUN_710392e290(0x10,ppplVar33,pppplVar24,ppppbVar25,pppplVar28,in_x5,in_x6
                                         ,in_x7);
        if (pvVar21 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_64 = 0;
            pppplVar24 = &local_90;
            local_90 = ppplVar33;
            uVar32 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
            if (((uVar32 & 1) != 0) &&
               (pvVar21 = (void *)FUN_710392e290(0x10,ppplVar33,pppplVar24,ppppbVar25,pppplVar28,
                                                 in_x5,in_x6,in_x7), pvVar21 != (void *)0x0))
            goto LAB_71022e5afc;
          }
          goto LAB_71022e5af8;
        }
      }
LAB_71022e5afc:
      puVar27 = (ulong *)((long)pvVar21 + ((long)pppplVar43 >> 3) * 8);
      *puVar27 = uVar37;
      if (0 < (long)pppplVar43) {
        memcpy(pvVar21,pvVar41,(size_t)pppplVar43);
        pppplVar24 = pppplVar43;
      }
      puVar16[0x2d] = pvVar21;
      puVar16[0x2e] = puVar27 + 1;
      puVar16[0x2f] = (void *)((long)pvVar21 + uVar38 * 8);
      if (pvVar41 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar41);
      }
    }
    else {
      *puVar27 = uVar37;
      puVar16[0x2e] = puVar16[0x2e] + 8;
    }
    puVar30 = (ulong *)puVar16[0x2b];
  } while ((ulong *)puVar16[0x2a] != puVar30);
LAB_71022e5b40:
  *(undefined4 *)(puVar16 + 0x30) = 0xffffffff;
  *(undefined1 *)(*(long *)(**(long **)*puVar16 + 0x600) + 0x4aa) = 0;
  if ((*(long *)(puVar16[2] + 8) != 0) &&
     (lVar12 = *(long *)(*(long *)(puVar16[2] + 8) + 0x18), lVar12 != 0)) {
    *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
  }
  pppplVar24 = (long ****)0x25000;
  FUN_7103775dc0(*(long **)*puVar16,1,(long ****)0x25000,ppppbVar25,pppplVar28,in_x5,in_x6,in_x7);
  puVar16 = local_120;
  local_128 = &PTR_FUN_710523d9a8;
  local_120 = (undefined8 *)0x0;
  uVar26 = extraout_x1_07;
  if (puVar16 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar16);
    uVar26 = extraout_x1_08;
  }
  puVar15[2] = &DAT_7105333600;
  uVar6 = DAT_7105333664;
  *(undefined4 *)(puVar15 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar15 + 0x6c) = uVar6;
  do {
    uVar9 = DAT_7105333650;
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar8) {
      DAT_7105333650 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0' || (uVar9 & 1) != 0);
  puVar15[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar15;
  FUN_71032caea0((long)puVar15,uVar26,pppplVar24,ppppbVar25,pppplVar28,in_x5,in_x6,in_x7);
  lVar12 = *(long *)(param_1 + 0x180);
  *(undefined8 **)(param_1 + 0x180) = puVar15;
  if (lVar12 != 0) {
    FUN_71032cad20(lVar12);
  }
  *(undefined4 *)(param_1 + 400) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x188) = 0xffffffff;
  return;
}

