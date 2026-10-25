// addr:      71018596d0
// offset:    0x18596d0
// name:      FUN_71018596d0
// mangled:   
// signature: undefined __cdecl FUN_71018596d0(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined1 * param_8)


void FUN_71018596d0(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined1 *param_8)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  uint *puVar18;
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
  long *********ppppppppplVar19;
  undefined **ppuVar20;
  long ****pppplVar21;
  byte ****ppppbVar22;
  long ****pppplVar23;
  byte *pbVar24;
  char *pcVar25;
  long ********pppppppplVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  long lVar29;
  uint uVar30;
  char *pcVar31;
  byte *pbVar32;
  ulong uVar33;
  long ********pppppppplVar34;
  long lVar35;
  long ******pppppplVar36;
  int iVar37;
  byte *pbVar38;
  undefined8 uVar39;
  byte *pbVar40;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  undefined4 uVar44;
  long *plVar45;
  ulong uVar46;
  undefined8 *puVar47;
  undefined8 uVar48;
  undefined4 uVar49;
  float fVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined1 auVar55 [16];
  long ********local_e0;
  long ********local_d8;
  undefined8 *local_c8;
  long lStack_c0;
  undefined **local_b8;
  ulong local_b0;
  long ********local_a8;
  long *local_a0;
  uint local_88;
  undefined4 local_84;
  
  lVar7 = FUN_710392e290(0x10,0xe0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (lVar7 == 0) {
    local_a8 = (long ********)((ulong)local_a8 & 0xffffffff00000000);
    local_e0 = (long ********)&DAT_000000e0;
    param_3 = &local_e0;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a8);
    lVar7 = FUN_710392e290(0x10,0xe0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  }
  *(undefined8 *)(lVar7 + 0x10) = 0;
  *(undefined8 *)(lVar7 + 0x18) = 0;
  *(undefined4 *)(lVar7 + 0xc0) = 0xffffffff;
  *(long *)lVar7 = lVar7;
  *(undefined8 *)(lVar7 + 8) = 0;
  *(undefined1 *)(lVar7 + 0xc4) = 0;
  *(undefined8 *)(lVar7 + 0xb0) = 0;
  *(undefined8 *)(lVar7 + 0xb8) = 0xffffffff;
  *(undefined8 *)(lVar7 + 0xa0) = 0;
  *(undefined8 *)(lVar7 + 0xa8) = 0;
  *(undefined8 *)(lVar7 + 0x90) = 0;
  *(undefined8 *)(lVar7 + 0x98) = 0;
  *(undefined8 *)(lVar7 + 0x80) = 0;
  *(undefined8 *)(lVar7 + 0x88) = 0;
  *(undefined8 *)(lVar7 + 0x70) = 0;
  *(undefined8 *)(lVar7 + 0x78) = 0;
  *(undefined8 *)(lVar7 + 0x60) = 0;
  *(undefined8 *)(lVar7 + 0x68) = 0;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  *(undefined8 *)(lVar7 + 0x58) = 0;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(undefined8 *)(lVar7 + 0x48) = 0;
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(undefined8 *)(lVar7 + 0x38) = 0;
  *(undefined8 *)(lVar7 + 0x20) = 0;
  *(undefined8 *)(lVar7 + 0x28) = 0;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar39 = extraout_x1;
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a8 = (long ********)((ulong)local_a8 & 0xffffffff00000000);
      local_e0 = (long ********)&DAT_00000080;
      param_3 = &local_e0;
      auVar55 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a8);
      uVar39 = auVar55._8_8_;
      if (((auVar55._0_8_ & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), uVar39 = extraout_x1_00, puVar8 != (undefined8 *)0x0))
      goto LAB_71018597dc;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71018597dc:
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
  *(undefined4 *)(lVar7 + 0xd8) = 0;
  *(code **)(lVar7 + 0x28) = FUN_71018593a0;
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(code **)(lVar7 + 0x38) = FUN_7101859470;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(code **)(lVar7 + 0x48) = FUN_71018594d0;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  *(undefined8 **)(lVar7 + 200) = puVar8;
  *(undefined8 *)(lVar7 + 0xd0) = 0;
  *(code **)(lVar7 + 0x58) = FUN_7101859510;
  *(undefined8 *)(lVar7 + 0x60) = 0;
  if (0x12 < *(uint *)(lVar7 + 0xb4)) goto LAB_710185b548;
  *(undefined4 *)(lVar7 + (long)(int)*(uint *)(lVar7 + 0xb4) * 4 + 0x68) = 0;
  uVar43 = *(ulong *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar7;
  if (uVar43 != 0) {
    lVar7 = *(long *)(uVar43 + 0xd0);
    *(undefined8 *)(uVar43 + 0xd0) = 0;
    if (lVar7 != 0) {
      FUN_71032cad20(lVar7);
      uVar39 = extraout_x1_01;
    }
    FUN_710323b9e0(*(long *)(uVar43 + 200),uVar39,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar9 = *(long **)(uVar43 + 200);
    *(undefined8 *)(uVar43 + 200) = 0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    FUN_710392eb40(uVar43);
    lVar7 = *(long *)(param_1 + 0x58);
  }
  plVar9 = (long *)(lVar7 + 200);
  lVar10 = *plVar9;
  FUN_710323beb0(lVar10,(ulong *)&DAT_7104545048,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar10 = *plVar9;
  pppplVar23 = (long ****)0x1;
  FUN_710323beb0(lVar10,(ulong *)&DAT_7104545050,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  local_e0 = (long ********)FUN_710323b820('\0');
  lVar10 = *plVar9;
  FUN_710323c4e0(lVar10,(ulong *)&local_e0,(long *********)(long)*(int *)(lVar10 + 0x70),
                 (byte ****)(ulong)*(uint *)(lVar10 + 0x68),pppplVar23,param_6,param_7,param_8);
  local_e0 = (long ********)FUN_710323b820('\x01');
  lVar10 = *plVar9;
  FUN_710323c4e0(lVar10,(ulong *)&local_e0,(long *********)(long)*(int *)(lVar10 + 0x70),
                 (byte ****)(ulong)*(uint *)(lVar10 + 0x68),pppplVar23,param_6,param_7,param_8);
  local_e0 = (long ********)FUN_710323b820('\x02');
  lVar10 = *plVar9;
  ppppppppplVar19 = (long *********)(long)*(int *)(lVar10 + 0x70);
  ppppbVar22 = (byte ****)(ulong)*(uint *)(lVar10 + 0x68);
  FUN_710323c4e0(lVar10,(ulong *)&local_e0,ppppppppplVar19,ppppbVar22,pppplVar23,param_6,param_7,
                 param_8);
  lVar10 = *plVar9;
  uVar43 = FUN_710323cb80(lVar10,extraout_x1_02,ppppppppplVar19,ppppbVar22,pppplVar23,param_6,
                          param_7,param_8);
  while ((uVar43 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar43 = FUN_710323cb80(lVar10,extraout_x1_03,ppppppppplVar19,ppppbVar22,pppplVar23,param_6,
                            param_7,param_8);
  }
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar19,ppppbVar22,pppplVar23,param_6,param_7
                          ,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a8 = (long ********)((ulong)local_a8 & 0xffffffff00000000);
      local_e0 = (long ********)&DAT_00000088;
      ppppppppplVar19 = &local_e0;
      uVar43 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a8);
      if (((uVar43 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar19,ppppbVar22,pppplVar23,param_6
                                  ,param_7,param_8), puVar8 != (undefined8 *)0x0))
      goto LAB_71018599e8;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71018599e8:
  *puVar8 = &PTR_FUN_71050acc80;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[9] = 0;
  puVar8[10] = 0;
  *(undefined1 *)(puVar8 + 0xb) = 0;
  puVar8[0xc] = 0;
  puVar8[0xd] = 0x1ffffffff;
  puVar8[0xf] = plVar9;
  *(undefined1 *)(puVar8 + 0xe) = 1;
  lVar10 = FUN_710392e290(0x10,0x1a0,(long ****)ppppppppplVar19,ppppbVar22,pppplVar23,param_6,
                          param_7,param_8);
  if (lVar10 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a8 = (long ********)((ulong)local_a8 & 0xffffffff00000000);
      local_e0 = (long ********)&DAT_000001a0;
      ppppppppplVar19 = &local_e0;
      uVar43 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a8);
      if (((uVar43 & 1) != 0) &&
         (lVar10 = FUN_710392e290(0x10,0x1a0,(long ****)ppppppppplVar19,ppppbVar22,pppplVar23,
                                  param_6,param_7,param_8), lVar10 != 0)) goto LAB_7101859a74;
    }
    lVar10 = 0;
  }
LAB_7101859a74:
  *(undefined8 *)(lVar10 + 0x10) = 0;
  *(undefined8 *)(lVar10 + 0x18) = 0;
  *(undefined4 *)(lVar10 + 0xc0) = 0xffffffff;
  *(long *)lVar10 = lVar10;
  *(undefined8 *)(lVar10 + 8) = 0;
  *(undefined1 *)(lVar10 + 0xc4) = 0;
  *(undefined8 *)(lVar10 + 0xb0) = 0;
  *(undefined8 *)(lVar10 + 0xb8) = 0xffffffff;
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
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)ppppppppplVar19,ppppbVar22,pppplVar23,param_6,param_7,
                           param_8);
  uVar39 = extraout_x1_04;
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a8 = (long ********)((ulong)local_a8 & 0xffffffff00000000);
      local_e0 = (long ********)&DAT_00000008;
      ppppppppplVar19 = &local_e0;
      auVar55 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a8);
      uVar39 = auVar55._8_8_;
      if (((auVar55._0_8_ & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)ppppppppplVar19,ppppbVar22,pppplVar23,param_6,
                                   param_7,param_8), uVar39 = extraout_x1_05,
         puVar11 != (undefined8 *)0x0)) goto LAB_7101859b0c;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101859b0c:
  FUN_7103773200(puVar11,uVar39,(long ****)ppppppppplVar19,ppppbVar22,pppplVar23,param_6,param_7,
                 param_8);
  *(undefined4 *)(lVar10 + 0xe0) = 0xffffff;
  plVar13 = (long *)(lVar10 + 0xd0);
  *(long **)(lVar10 + 0xd0) = plVar13;
  *(undefined1 **)(lVar10 + 0xd8) = &DAT_7104742dbb;
  *(undefined8 **)(lVar10 + 200) = puVar11;
  *(undefined4 *)(lVar10 + 0x140) = 0;
  *(undefined4 *)(lVar10 + 0x180) = 0;
  *(undefined8 *)(lVar10 + 0x148) = 0;
  *(undefined4 *)(lVar10 + 0x118) = 0;
  *(undefined8 *)(lVar10 + 0x130) = 0;
  *(undefined8 *)(lVar10 + 0x138) = 0;
  *(undefined8 *)(lVar10 + 0x120) = 0;
  *(undefined8 *)(lVar10 + 0x128) = 0;
  *(undefined8 *)(lVar10 + 0x170) = 0;
  *(undefined8 *)(lVar10 + 0x178) = 0;
  *(undefined8 *)(lVar10 + 0x160) = 0;
  *(undefined8 *)(lVar10 + 0x168) = 0;
  *(undefined8 *)(lVar10 + 0x150) = 0;
  *(undefined8 *)(lVar10 + 0x158) = 0;
  *(undefined8 *)(lVar10 + 0x108) = 0;
  *(undefined8 *)(lVar10 + 0x110) = 0;
  *(undefined8 *)(lVar10 + 0xf8) = 0;
  *(undefined8 *)(lVar10 + 0x100) = 0;
  *(undefined8 *)(lVar10 + 0xe8) = 0;
  *(undefined8 *)(lVar10 + 0xf0) = 0;
  *(undefined8 *)(lVar10 + 0x184) = 0xffffffff;
  *(undefined4 *)(lVar10 + 0x18c) = 0xffffffff;
  *(undefined4 *)(lVar10 + 0x194) = 0xffffffff;
  *(undefined1 *)(lVar10 + 400) = 0;
  *(undefined1 *)(lVar10 + 0x198) = 0;
  *(undefined4 *)(lVar10 + 0x19c) = 0;
  *(code **)(lVar10 + 0x28) = FUN_7101bfb700;
  *(undefined8 *)(lVar10 + 0x30) = 0;
  *(code **)(lVar10 + 0x38) = FUN_7101bfb710;
  *(undefined8 *)(lVar10 + 0x40) = 0;
  *(code **)(lVar10 + 0x48) = FUN_7101bfb750;
  *(undefined8 *)(lVar10 + 0x50) = 0;
  *(code **)(lVar10 + 0x58) = FUN_7101bfcad0;
  *(undefined8 *)(lVar10 + 0x60) = 0;
  if (0x12 < *(uint *)(lVar10 + 0xb4)) goto LAB_710185b548;
  *(undefined4 *)(lVar10 + (long)(int)*(uint *)(lVar10 + 0xb4) * 4 + 0x68) = 0;
  puVar8[0x10] = lVar10;
  ppuVar20 = (undefined **)&DAT_7104545048;
  ppppbVar22 = (byte ****)0x1;
  FUN_71032cbf30((undefined8 *)(lVar10 + 200),*plVar9,(ulong *)&DAT_7104545048,(byte ****)0x1,
                 pppplVar23,param_6,param_7,param_8);
  FUN_71037760f0(*(long *)**(undefined8 **)(lVar10 + 200),0);
  lVar41 = *plVar9;
  if (((DAT_710532f4d0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_710532f4d0), iVar6 != 0)) {
    DAT_710532f4a0 = 0xffffff;
    ppuVar20 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_710532f4d0);
    lVar35 = *(long *)(lVar41 + 0x10);
    if (lVar35 == 0) goto LAB_7101859c5c;
LAB_7101859c18:
    lVar29 = lVar41 + 0x10;
    do {
      bVar5 = (*(ulong *)(lVar35 + 0x20) & 0xffffffffff) < 0x3647af2953;
      if (!bVar5) {
        lVar29 = lVar35;
      }
      lVar35 = *(long *)(lVar35 + (ulong)bVar5 * 8);
    } while (lVar35 != 0);
    if ((lVar29 == lVar41 + 0x10) || (0x3647af2953 < (*(ulong *)(lVar29 + 0x20) & 0xfffffffffc)))
    goto LAB_7101859c5c;
    puVar18 = (uint *)(lVar29 + 0x28);
  }
  else {
    lVar35 = *(long *)(lVar41 + 0x10);
    if (lVar35 != 0) goto LAB_7101859c18;
LAB_7101859c5c:
    puVar18 = &DAT_710532f4a0;
  }
  local_88 = *puVar18;
  if (local_88 != 0xffffff) {
    FUN_7103540a00(DAT_7105332f20,local_88);
  }
  FUN_7103720c30((long)plVar13,&local_88,(long *********)ppuVar20,ppppbVar22,pppplVar23,param_6,
                 param_7,param_8);
  if (local_88 != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,local_88,(long *********)ppuVar20,ppppbVar22,pppplVar23,param_6,
                   param_7,param_8);
    local_88 = 0xffffff;
  }
  pcVar25 = *(char **)(lVar10 + 0xd8);
  if ((*pcVar25 == '\f') && (iVar6 = *(int *)(pcVar25 + 1) + -1, 0 < *(int *)(pcVar25 + 1))) {
    iVar37 = 0;
    pcVar31 = "";
    do {
      iVar1 = iVar6 + iVar37;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      iVar1 = iVar1 >> 1;
      puVar18 = (uint *)(*(long *)(*plVar13 + 0x28) + (long)*(int *)(pcVar25 + 5) + (long)iVar1 * 8)
      ;
      uVar43 = *(ulong *)(*(long *)(*plVar13 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar43 == 0xc6fdf5e2e) {
        uVar30 = puVar18[1];
        if ((int)uVar30 < 0) goto LAB_7101859d4c;
        pcVar31 = pcVar25 + (int)uVar30;
        break;
      }
      iVar4 = iVar1 + -1;
      if (uVar43 < 0xc6fdf5e2f) {
        iVar37 = iVar1 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
    } while (iVar37 <= iVar6);
  }
  else {
LAB_7101859d4c:
    pcVar31 = "";
  }
  if (*pcVar31 == '\b') {
    uVar49 = *(undefined4 *)(pcVar31 + 1);
  }
  else {
    uVar49 = 0;
  }
  *(undefined4 *)(lVar10 + 0x100) = uVar49;
  if ((*pcVar25 == '\f') && (iVar6 = *(int *)(pcVar25 + 1) + -1, 0 < *(int *)(pcVar25 + 1))) {
    iVar37 = 0;
    pcVar31 = "";
    do {
      iVar1 = iVar6 + iVar37;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      iVar1 = iVar1 >> 1;
      puVar18 = (uint *)(*(long *)(*plVar13 + 0x28) + (long)*(int *)(pcVar25 + 5) + (long)iVar1 * 8)
      ;
      uVar43 = *(ulong *)(*(long *)(*plVar13 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar43 == 0x1577afeadb) {
        uVar30 = puVar18[1];
        if ((int)uVar30 < 0) goto LAB_7101859e00;
        pcVar31 = pcVar25 + (int)uVar30;
        break;
      }
      iVar4 = iVar1 + -1;
      if (uVar43 < 0x1577afeadc) {
        iVar37 = iVar1 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
    } while (iVar37 <= iVar6);
  }
  else {
LAB_7101859e00:
    pcVar31 = "";
  }
  if (*pcVar31 == '\b') {
    uVar49 = *(undefined4 *)(pcVar31 + 1);
  }
  else {
    uVar49 = 0;
  }
  *(undefined4 *)(lVar10 + 0x104) = uVar49;
  if ((*pcVar25 == '\f') && (iVar6 = *(int *)(pcVar25 + 1) + -1, 0 < *(int *)(pcVar25 + 1))) {
    iVar37 = 0;
    pcVar31 = "";
    do {
      iVar1 = iVar6 + iVar37;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      iVar1 = iVar1 >> 1;
      puVar18 = (uint *)(*(long *)(*plVar13 + 0x28) + (long)*(int *)(pcVar25 + 5) + (long)iVar1 * 8)
      ;
      uVar43 = *(ulong *)(*(long *)(*plVar13 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar43 == 0x1385442c98) {
        uVar30 = puVar18[1];
        if ((int)uVar30 < 0) goto LAB_7101859eb4;
        pcVar31 = pcVar25 + (int)uVar30;
        break;
      }
      iVar4 = iVar1 + -1;
      if (uVar43 < 0x1385442c99) {
        iVar37 = iVar1 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
    } while (iVar37 <= iVar6);
  }
  else {
LAB_7101859eb4:
    pcVar31 = "";
  }
  if (*pcVar31 == '\b') {
    uVar49 = *(undefined4 *)(pcVar31 + 1);
  }
  else {
    uVar49 = 0;
  }
  *(undefined4 *)(lVar10 + 0x108) = uVar49;
  if ((*pcVar25 == '\f') && (iVar6 = *(int *)(pcVar25 + 1) + -1, 0 < *(int *)(pcVar25 + 1))) {
    iVar37 = 0;
    pcVar31 = "";
    do {
      iVar1 = iVar6 + iVar37;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      iVar1 = iVar1 >> 1;
      puVar18 = (uint *)(*(long *)(*plVar13 + 0x28) + (long)*(int *)(pcVar25 + 5) + (long)iVar1 * 8)
      ;
      uVar43 = *(ulong *)(*(long *)(*plVar13 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar43 == 0x13450b6938) {
        uVar30 = puVar18[1];
        if ((int)uVar30 < 0) goto LAB_7101859f68;
        pcVar31 = pcVar25 + (int)uVar30;
        break;
      }
      iVar4 = iVar1 + -1;
      if (uVar43 < 0x13450b6939) {
        iVar37 = iVar1 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
    } while (iVar37 <= iVar6);
  }
  else {
LAB_7101859f68:
    pcVar31 = "";
  }
  if (*pcVar31 == '\b') {
    uVar49 = *(undefined4 *)(pcVar31 + 1);
  }
  else {
    uVar49 = 0;
  }
  *(undefined4 *)(lVar10 + 0x10c) = uVar49;
  if ((*pcVar25 == '\f') && (iVar6 = *(int *)(pcVar25 + 1) + -1, 0 < *(int *)(pcVar25 + 1))) {
    iVar37 = 0;
    pcVar31 = "";
    do {
      iVar1 = iVar6 + iVar37;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      iVar1 = iVar1 >> 1;
      puVar18 = (uint *)(*(long *)(*plVar13 + 0x28) + (long)*(int *)(pcVar25 + 5) + (long)iVar1 * 8)
      ;
      uVar43 = *(ulong *)(*(long *)(*plVar13 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar43 == 0xb91525981) {
        uVar30 = puVar18[1];
        if ((int)uVar30 < 0) goto LAB_710185a01c;
        pcVar31 = pcVar25 + (int)uVar30;
        break;
      }
      iVar4 = iVar1 + -1;
      if (uVar43 < 0xb91525982) {
        iVar37 = iVar1 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
    } while (iVar37 <= iVar6);
  }
  else {
LAB_710185a01c:
    pcVar31 = "";
  }
  if (*pcVar31 == '\b') {
    fVar50 = *(float *)(pcVar31 + 1);
  }
  else {
    fVar50 = 0.0;
  }
  *(float *)(lVar10 + 0x110) = fVar50 * 60.0;
  if ((*pcVar25 == '\f') && (iVar6 = *(int *)(pcVar25 + 1) + -1, 0 < *(int *)(pcVar25 + 1))) {
    iVar37 = 0;
    pcVar31 = "";
    do {
      iVar1 = iVar6 + iVar37;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      iVar1 = iVar1 >> 1;
      puVar18 = (uint *)(*(long *)(*plVar13 + 0x28) + (long)*(int *)(pcVar25 + 5) + (long)iVar1 * 8)
      ;
      uVar43 = *(ulong *)(*(long *)(*plVar13 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar43 == 0x1352cf5a31) {
        uVar30 = puVar18[1];
        if ((int)uVar30 < 0) goto LAB_710185a0dc;
        pcVar31 = pcVar25 + (int)uVar30;
        break;
      }
      iVar4 = iVar1 + -1;
      if (uVar43 < 0x1352cf5a32) {
        iVar37 = iVar1 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
    } while (iVar37 <= iVar6);
  }
  else {
LAB_710185a0dc:
    pcVar31 = "";
  }
  if (*pcVar31 == '\b') {
    fVar50 = *(float *)(pcVar31 + 1);
  }
  else {
    fVar50 = 0.0;
  }
  *(int *)(lVar10 + 0x114) = (int)(fVar50 * 60.0);
  if ((*pcVar25 == '\f') && (iVar6 = *(int *)(pcVar25 + 1) + -1, 0 < *(int *)(pcVar25 + 1))) {
    iVar37 = 0;
    pcVar31 = "";
    do {
      iVar1 = iVar6 + iVar37;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      iVar1 = iVar1 >> 1;
      puVar18 = (uint *)(*(long *)(*plVar13 + 0x28) + (long)*(int *)(pcVar25 + 5) + (long)iVar1 * 8)
      ;
      uVar43 = *(ulong *)(*(long *)(*plVar13 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar43 == 0x13c583abd1) {
        uVar30 = puVar18[1];
        if ((int)uVar30 < 0) goto LAB_710185a198;
        pcVar31 = pcVar25 + (int)uVar30;
        break;
      }
      iVar4 = iVar1 + -1;
      if (uVar43 < 0x13c583abd2) {
        iVar37 = iVar1 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
    } while (iVar37 <= iVar6);
  }
  else {
LAB_710185a198:
    pcVar31 = "";
  }
  if (*pcVar31 == '\b') {
    fVar50 = *(float *)(pcVar31 + 1);
  }
  else {
    fVar50 = 0.0;
  }
  *(int *)(lVar10 + 0x118) = (int)(fVar50 * 60.0);
  if ((*pcVar25 == '\f') && (iVar6 = *(int *)(pcVar25 + 1) + -1, 0 < *(int *)(pcVar25 + 1))) {
    lVar41 = *plVar13;
    pbVar40 = &DAT_7104742dbb;
    iVar37 = 0;
    do {
      iVar1 = iVar6 + iVar37;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      iVar1 = iVar1 >> 1;
      puVar18 = (uint *)(*(long *)(lVar41 + 0x28) + (long)*(int *)(pcVar25 + 5) + (long)iVar1 * 8);
      uVar43 = *(ulong *)(*(long *)(lVar41 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar43 == 0x1270acc883) {
        uVar30 = puVar18[1];
        if ((int)uVar30 < 0) goto LAB_710185a264;
        pbVar40 = (byte *)(pcVar25 + (int)uVar30);
        goto LAB_710185a270;
      }
      iVar4 = iVar1 + -1;
      if (uVar43 < 0x1270acc884) {
        iVar37 = iVar1 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
    } while (iVar37 <= iVar6);
    lVar41 = 0;
  }
  else {
LAB_710185a264:
    lVar41 = 0;
    pbVar40 = &DAT_7104742dbb;
  }
LAB_710185a270:
  uVar30 = (uint)*pbVar40;
  if ((*pbVar40 - 0xb < 2) &&
     (uVar43 = (ulong)*(uint *)(pbVar40 + 1), 0 < (int)*(uint *)(pbVar40 + 1))) {
    uVar49 = 0;
    uVar46 = 0;
    do {
      uVar42 = 0x555555555555555;
      pbVar24 = &DAT_7104742dbb;
      uVar39 = 0xaaaaaaaaaaaaaaab;
      pppplVar23 = (long ****)0x5ec462584;
      ppppbVar22 = (byte ****)0x82ca8e58e;
      lVar35 = 0;
      if (uVar30 == 0xb) {
        pbVar32 = pbVar24;
        if ((long)uVar46 < (long)(int)uVar43) {
          pbVar32 = pbVar40 + *(int *)(pbVar40 + (uVar46 & 0x3fffffff) * 4 + 5);
          lVar35 = lVar41;
        }
      }
      else {
        pbVar32 = &DAT_7104742dbb;
      }
      bVar2 = *pbVar32;
      pbVar38 = pbVar24;
      if ((bVar2 == 0xc) && (iVar6 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar37 = 0;
        do {
          iVar1 = iVar6 + iVar37;
          if (iVar1 < 0) {
            iVar1 = iVar1 + 1;
          }
          iVar1 = iVar1 >> 1;
          puVar18 = (uint *)(*(long *)(lVar35 + 0x28) + (long)*(int *)(pbVar32 + 5) +
                            (long)iVar1 * 8);
          uVar43 = *(ulong *)(*(long *)(lVar35 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar43 == 0xbdf2b31b7) {
            uVar43 = (ulong)(int)puVar18[1];
            lVar29 = 0;
            if ((uVar43 & 0x80000000) == 0) {
              lVar29 = lVar35;
              pbVar38 = pbVar32 + uVar43;
            }
            goto LAB_710185a3b0;
          }
          iVar4 = iVar1 + -1;
          if (uVar43 < 0xbdf2b31b8) {
            iVar37 = iVar1 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
        } while (iVar37 <= iVar6);
      }
      lVar29 = 0;
LAB_710185a3b0:
      if (*pbVar38 == 9) {
        uVar48 = *(undefined8 *)(*(long *)(lVar29 + 0x20) + (long)*(int *)(pbVar38 + 1) * 8);
      }
      else {
        uVar48 = 0;
      }
      pbVar38 = pbVar24;
      if ((bVar2 == 0xc) && (iVar6 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar37 = 0;
        do {
          iVar1 = iVar6 + iVar37;
          if (iVar1 < 0) {
            iVar1 = iVar1 + 1;
          }
          iVar1 = iVar1 >> 1;
          puVar18 = (uint *)(*(long *)(lVar35 + 0x28) + (long)*(int *)(pbVar32 + 5) +
                            (long)iVar1 * 8);
          uVar43 = *(ulong *)(*(long *)(lVar35 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar43 == 0x5ec462584) {
            uVar30 = puVar18[1];
            if (-1 < (int)uVar30) {
              pbVar38 = pbVar32 + (int)uVar30;
            }
            break;
          }
          iVar4 = iVar1 + -1;
          if (uVar43 < 0x5ec462585) {
            iVar37 = iVar1 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
        } while (iVar37 <= iVar6);
      }
      uVar51 = uVar49;
      if (*pbVar38 == 8) {
        uVar51 = *(undefined4 *)(pbVar38 + 1);
      }
      pbVar38 = pbVar24;
      if ((bVar2 == 0xc) && (iVar6 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar37 = 0;
        do {
          iVar1 = iVar6 + iVar37;
          if (iVar1 < 0) {
            iVar1 = iVar1 + 1;
          }
          iVar1 = iVar1 >> 1;
          puVar18 = (uint *)(*(long *)(lVar35 + 0x28) + (long)*(int *)(pbVar32 + 5) +
                            (long)iVar1 * 8);
          uVar43 = *(ulong *)(*(long *)(lVar35 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar43 == 0x82ca8e58e) {
            uVar30 = puVar18[1];
            if (-1 < (int)uVar30) {
              pbVar38 = pbVar32 + (int)uVar30;
            }
            break;
          }
          iVar4 = iVar1 + -1;
          if (uVar43 < 0x82ca8e58f) {
            iVar37 = iVar1 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
        } while (iVar37 <= iVar6);
      }
      uVar52 = uVar49;
      if (*pbVar38 == 8) {
        uVar52 = *(undefined4 *)(pbVar38 + 1);
      }
      pbVar38 = pbVar24;
      if ((bVar2 == 0xc) && (iVar6 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar37 = 0;
        do {
          iVar1 = iVar6 + iVar37;
          if (iVar1 < 0) {
            iVar1 = iVar1 + 1;
          }
          iVar1 = iVar1 >> 1;
          puVar18 = (uint *)(*(long *)(lVar35 + 0x28) + (long)*(int *)(pbVar32 + 5) +
                            (long)iVar1 * 8);
          uVar43 = *(ulong *)(*(long *)(lVar35 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar43 == 0x841750165) {
            uVar30 = puVar18[1];
            if (-1 < (int)uVar30) {
              pbVar38 = pbVar32 + (int)uVar30;
            }
            break;
          }
          iVar4 = iVar1 + -1;
          if (uVar43 < 0x841750166) {
            iVar37 = iVar1 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
        } while (iVar37 <= iVar6);
      }
      uVar53 = uVar49;
      if (*pbVar38 == 8) {
        uVar53 = *(undefined4 *)(pbVar38 + 1);
      }
      pbVar38 = pbVar24;
      if ((bVar2 == 0xc) && (iVar6 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar37 = 0;
        do {
          iVar1 = iVar6 + iVar37;
          if (iVar1 < 0) {
            iVar1 = iVar1 + 1;
          }
          iVar1 = iVar1 >> 1;
          puVar18 = (uint *)(*(long *)(lVar35 + 0x28) + (long)*(int *)(pbVar32 + 5) +
                            (long)iVar1 * 8);
          uVar43 = *(ulong *)(*(long *)(lVar35 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar43 == 0x8311ff5ea) {
            uVar30 = puVar18[1];
            if (-1 < (int)uVar30) {
              pbVar38 = pbVar32 + (int)uVar30;
            }
            break;
          }
          iVar4 = iVar1 + -1;
          if (uVar43 < 0x8311ff5eb) {
            iVar37 = iVar1 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
        } while (iVar37 <= iVar6);
      }
      uVar54 = uVar49;
      if (*pbVar38 == 8) {
        uVar54 = *(undefined4 *)(pbVar38 + 1);
      }
      if ((bVar2 == 0xc) && (iVar6 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar37 = 0;
        do {
          iVar1 = iVar6 + iVar37;
          if (iVar1 < 0) {
            iVar1 = iVar1 + 1;
          }
          iVar1 = iVar1 >> 1;
          puVar18 = (uint *)(*(long *)(lVar35 + 0x28) + (long)*(int *)(pbVar32 + 5) +
                            (long)iVar1 * 8);
          uVar43 = *(ulong *)(*(long *)(lVar35 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar43 == 0xb11cb6b3a) {
            uVar30 = puVar18[1];
            if (-1 < (int)uVar30) {
              pbVar32 = pbVar32 + (int)uVar30;
              goto LAB_710185a6a4;
            }
            break;
          }
          iVar4 = iVar1 + -1;
          if (uVar43 < 0xb11cb6b3b) {
            iVar37 = iVar1 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
        } while (iVar37 <= iVar6);
      }
      lVar35 = 0;
      pbVar32 = pbVar24;
LAB_710185a6a4:
      if (*pbVar32 == 9) {
        uVar43 = *(ulong *)(*(long *)(lVar35 + 0x20) + (long)*(int *)(pbVar32 + 1) * 8) &
                 0xffffffffff;
        if (uVar43 < 0x140c22d60c) {
          if (uVar43 == 0xf52a1ab7a) {
            uVar44 = 4;
          }
          else {
            if (uVar43 != 0x10a849ec46) goto LAB_710185a748;
            uVar44 = 3;
          }
        }
        else if (uVar43 == 0x1561131db9) {
          uVar44 = 1;
        }
        else if (uVar43 == 0x15329f757d) {
          uVar44 = 5;
        }
        else {
          if (uVar43 != 0x140c22d60c) goto LAB_710185a748;
          uVar44 = 2;
        }
      }
      else {
LAB_710185a748:
        uVar44 = 0;
      }
      puVar11 = *(undefined8 **)(lVar10 + 0x128);
      if (puVar11 == *(undefined8 **)(lVar10 + 0x130)) {
        puVar14 = *(undefined8 **)(lVar10 + 0x120);
        lVar35 = (long)puVar11 - (long)puVar14 >> 4;
        uVar43 = lVar35 * -0x5555555555555555 + 1;
        if (0x555555555555555 < uVar43) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar29 = (long)*(undefined8 **)(lVar10 + 0x130) - (long)puVar14 >> 4;
        if ((ulong)(lVar29 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
          uVar33 = lVar29 * 0x5555555555555556;
          uVar42 = uVar43;
          if (uVar43 <= uVar33) {
            uVar42 = uVar33;
          }
          if (uVar42 != 0) goto LAB_710185a7e8;
          lVar12 = 0;
        }
        else {
LAB_710185a7e8:
          pppppppplVar26 = (long ********)(uVar42 * 0x30);
          if (pppppppplVar26 == (long ********)0x0) {
            pppppppplVar26 = (long ********)0x1;
          }
          lVar29 = lVar41;
          lVar12 = FUN_710392e290(0x10,pppppppplVar26,(long ****)0x8311ff5ea,(byte ****)0x82ca8e58e,
                                  (long ****)0x5ec462584,lVar41,0xaaaaaaaaaaaaaaab,&DAT_7104742dbb);
          if (lVar12 == 0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_a8 = (long ********)((ulong)local_a8 & 0xffffffff00000000);
              ppppppppplVar19 = &local_e0;
              local_e0 = pppppppplVar26;
              uVar43 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a8);
              if (((uVar43 & 1) != 0) &&
                 (lVar12 = FUN_710392e290(0x10,pppppppplVar26,(long ****)ppppppppplVar19,ppppbVar22,
                                          pppplVar23,lVar29,uVar39,pbVar24), lVar12 != 0))
              goto LAB_710185a898;
            }
            lVar12 = 0;
          }
        }
LAB_710185a898:
        puVar27 = (undefined8 *)(lVar12 + lVar35 * 0x10);
        *(undefined4 *)((long)puVar27 + 0x1c) = 0x3f800000;
        *(undefined4 *)(puVar27 + 4) = uVar44;
        *puVar27 = uVar48;
        *(undefined4 *)(puVar27 + 1) = uVar51;
        *(undefined4 *)(puVar27 + 2) = uVar52;
        *(undefined4 *)((long)puVar27 + 0x14) = uVar53;
        *(undefined4 *)(puVar27 + 3) = uVar54;
        *(long *********)((long)puVar27 + 0x24) = local_e0;
        puVar15 = puVar27 + 6;
        *(undefined4 *)((long)puVar27 + 0x2c) = local_d8._0_4_;
        puVar28 = puVar27;
        if (puVar11 != puVar14) {
          do {
            puVar47 = puVar11 + -6;
            uVar39 = puVar11[-5];
            puVar27 = puVar28 + -6;
            *puVar27 = *puVar47;
            puVar28[-5] = uVar39;
            uVar39 = puVar11[-3];
            puVar28[-1] = puVar11[-1];
            puVar28[-3] = uVar39;
            uVar39 = puVar11[-4];
            puVar28[-2] = puVar11[-2];
            puVar28[-4] = uVar39;
            puVar28 = puVar27;
            puVar11 = puVar47;
          } while (puVar14 != puVar47);
          puVar14 = *(undefined8 **)(lVar10 + 0x120);
        }
        *(undefined8 **)(lVar10 + 0x120) = puVar27;
        *(undefined8 **)(lVar10 + 0x128) = puVar15;
        *(ulong *)(lVar10 + 0x130) = lVar12 + uVar42 * 0x30;
        if (puVar14 != (undefined8 *)0x0) {
          FUN_710392eb40((ulong)puVar14);
        }
      }
      else {
        *puVar11 = uVar48;
        *(undefined4 *)(puVar11 + 1) = uVar51;
        *(undefined4 *)(puVar11 + 2) = uVar52;
        *(undefined4 *)((long)puVar11 + 0x14) = uVar53;
        *(undefined4 *)(puVar11 + 3) = uVar54;
        *(undefined4 *)((long)puVar11 + 0x1c) = 0x3f800000;
        *(undefined4 *)(puVar11 + 4) = uVar44;
        *(undefined4 *)((long)puVar11 + 0x2c) = local_d8._0_4_;
        *(long *********)((long)puVar11 + 0x24) = local_e0;
        *(long *)(lVar10 + 0x128) = *(long *)(lVar10 + 0x128) + 0x30;
      }
      param_8 = &DAT_7104742dbb;
      param_7 = 0xaaaaaaaaaaaaaaab;
      pppplVar23 = (long ****)0x5ec462584;
      ppppbVar22 = (byte ****)0x82ca8e58e;
      uVar30 = (uint)*pbVar40;
      if (1 < uVar30 - 0xb) break;
      uVar43 = (ulong)*(int *)(pbVar40 + 1);
      uVar46 = uVar46 + 1;
    } while ((long)uVar46 < (long)uVar43);
  }
  puVar11 = (undefined8 *)(**(long **)(lVar10 + 200) + 8);
  *(undefined4 *)(lVar10 + 0x160) = 0;
  local_c8 = puVar11;
  lStack_c0 = lVar10;
  FUN_7101bfcbe0((long *)&local_c8,(long ****)"grp_small",(long ****)0x0,ppppbVar22,pppplVar23,
                 lVar41,param_7,param_8);
  FUN_7101bfcbe0((long *)&local_c8,(long ****)"grp_mid",(long ****)0x1,ppppbVar22,pppplVar23,lVar41,
                 param_7,param_8);
  ppppppppplVar19 = (long *********)0x2;
  FUN_7101bfcbe0((long *)&local_c8,(long ****)"grp_big",(long ****)0x2,ppppbVar22,pppplVar23,lVar41,
                 param_7,param_8);
  *(int *)(lVar10 + 0x174) =
       (int)((ulong)(*(long *)(lVar10 + 0x150) - *(long *)(lVar10 + 0x148)) >> 4);
  FUN_7103777850(&local_e0,(long)puVar11,(long ****)"grp_pic",ppppppppplVar19,ppppbVar22,pppplVar23,
                 lVar41,param_7,param_8);
  if (local_d8 != local_e0) {
    uVar43 = 0;
    pppppppplVar26 = local_d8;
    pppppppplVar34 = local_e0;
    do {
      if (uVar43 < 3) {
        local_b8 = (undefined **)FUN_710323b820((char)uVar43);
        plVar13 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar19,ppppbVar22,pppplVar23,
                                         lVar41,param_7,param_8);
        if (plVar13 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            local_a8 = (long ********)&DAT_00000030;
            ppppppppplVar19 = &local_a8;
            uVar46 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar46 & 1) != 0) &&
               (plVar13 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar19,ppppbVar22,
                                                 pppplVar23,lVar41,param_7,param_8),
               plVar13 != (long *)0x0)) goto LAB_710185aae0;
          }
          plVar13 = (long *)0x0;
        }
LAB_710185aae0:
        plVar45 = plVar13 + 1;
        *plVar45 = 0;
        *plVar13 = (long)&PTR_FUN_71050acc10;
        plVar13[2] = 0;
        pppppppplVar26 = (long ********)(plVar13 + 3);
        *pppppppplVar26 = (long *******)&PTR_FUN_71050acd58;
        puVar14 = (undefined8 *)
                  FUN_710392e290(0x10,0x130,(long ****)ppppppppplVar19,ppppbVar22,pppplVar23,lVar41,
                                 param_7,param_8);
        if (puVar14 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            local_a8 = (long ********)&DAT_00000130;
            ppppppppplVar19 = &local_a8;
            uVar46 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar46 & 1) != 0) &&
               (puVar14 = (undefined8 *)
                          FUN_710392e290(0x10,0x130,(long ****)ppppppppplVar19,ppppbVar22,pppplVar23
                                         ,lVar41,param_7,param_8), puVar14 != (undefined8 *)0x0))
            goto LAB_710185ab64;
          }
          puVar14 = (undefined8 *)0x0;
        }
LAB_710185ab64:
        plVar17 = puVar14 + 4;
        *puVar14 = &PTR_FUN_71050acdc0;
        puVar14[4] = plVar17;
        puVar14[1] = 0;
        puVar14[2] = 0;
        puVar14[8] = 0;
        puVar14[5] = 0;
        puVar14[6] = 0;
        puVar14[7] = 0;
        *(undefined4 *)(puVar14 + 0x1c) = 0xffffffff;
        *(undefined1 *)((long)puVar14 + 0xe4) = 0;
        puVar14[9] = 0;
        puVar14[0x1d] = &PTR_FUN_710523d9a8;
        puVar14[0x1a] = 0;
        puVar14[0x1b] = 0xffffffff;
        puVar14[0x18] = 0;
        puVar14[0x19] = 0;
        puVar14[0x16] = 0;
        puVar14[0x17] = 0;
        puVar14[0x14] = 0;
        puVar14[0x15] = 0;
        puVar14[0x12] = 0;
        puVar14[0x13] = 0;
        puVar14[0x10] = 0;
        puVar14[0x11] = 0;
        puVar14[0xe] = 0;
        puVar14[0xf] = 0;
        puVar14[0xc] = 0;
        puVar14[0xd] = 0;
        puVar14[10] = 0;
        puVar14[0xb] = 0;
        puVar15 = (undefined8 *)
                  FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar19,ppppbVar22,pppplVar23,lVar41,
                                 param_7,param_8);
        if (puVar15 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            local_a8 = (long ********)&SUB_00000020;
            ppppppppplVar19 = &local_a8;
            uVar46 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar46 & 1) != 0) &&
               (puVar15 = (undefined8 *)
                          FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar19,ppppbVar22,pppplVar23,
                                         lVar41,param_7,param_8), puVar15 != (undefined8 *)0x0))
            goto LAB_710185ac18;
          }
          puVar15 = (undefined8 *)0x0;
        }
LAB_710185ac18:
        puVar15[2] = 0;
        puVar15[3] = 0;
        *puVar15 = 0;
        puVar15[1] = 0;
        puVar14[0x1e] = puVar15;
        *(undefined1 *)(puVar14 + 0x24) = 0;
        puVar14[9] = FUN_7101bfe040;
        puVar14[10] = 0;
        puVar14[0xb] = FUN_7101bfe050;
        puVar14[0xc] = 0;
        puVar14[0xd] = FUN_7101bfe060;
        puVar14[0xe] = 0;
        puVar14[0x22] = 0;
        puVar14[0x23] = 0;
        puVar14[0x20] = 0;
        puVar14[0x21] = 0;
        puVar14[0xf] = FUN_7101bfe110;
        puVar14[0x10] = 0;
        puVar14[5] = 0;
        puVar14[6] = 0;
        *(undefined8 *)((long)puVar14 + 0xcc) = 0;
        *(undefined8 *)((long)puVar14 + 0xc4) = 0;
        *(undefined8 *)((long)puVar14 + 0xbc) = 0;
        *(undefined8 *)((long)puVar14 + 0xb4) = 0;
        *(undefined8 *)((long)puVar14 + 0xac) = 0;
        *(undefined8 *)((long)puVar14 + 0xa4) = 0;
        *(undefined8 *)((long)puVar14 + 0x9c) = 0;
        *(undefined8 *)((long)puVar14 + 0x94) = 0;
        *(undefined8 *)((long)puVar14 + 0x8c) = 0;
        *(undefined8 *)((long)puVar14 + 0xd4) = 0xffffffff00000000;
        *(undefined8 *)((long)puVar14 + 0xdc) = 0xffffffff00000000;
        *(undefined1 *)((long)puVar14 + 0xe4) = 0;
        *(undefined4 *)(puVar14 + 0x11) = 0;
        FUN_7101bfe140(plVar17);
        plVar13[4] = (long)plVar17;
        plVar13[5] = (long)puVar14;
        if ((ulong)((long)local_d8 - (long)local_e0 >> 4) <= uVar43) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        pppppplVar36 = (long ******)&DAT_7104867c2e;
        if (*local_e0[uVar43 * 2 + 1] != (long ******)0x0) {
          pppppplVar36 = *local_e0[uVar43 * 2 + 1] + 0x16;
        }
        plVar16 = FUN_710323f1f0(*plVar9,(ulong *)&local_b8,(long ****)ppppppppplVar19,ppppbVar22,
                                 pppplVar23,lVar41,param_7,param_8);
        lVar35 = plVar13[4];
        FUN_7103776910(&local_a8,(long)puVar11,(long ****)pppppplVar36,ppppppppplVar19,ppppbVar22,
                       pppplVar23,lVar41,param_7,param_8);
        plVar17 = local_a0;
        if ((long *********)(lVar35 + 200) != &local_a8) {
          local_a0 = (long *)0x0;
          uVar46 = *(ulong *)(lVar35 + 0xd0);
          *(long **)(lVar35 + 0xd0) = plVar17;
          if (uVar46 != 0) {
            FUN_710392eb40(uVar46);
          }
        }
        plVar17 = local_a0;
        local_a8 = (long ********)&PTR_FUN_710523d9a8;
        local_a0 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar17);
        }
        uVar49 = 0;
        uVar51 = 0;
        if (*(long *)plVar16[1] != 0) {
          lVar29 = *(long *)(*(long *)plVar16[1] + 8);
          uVar51 = NEON_ucvtf((uint)*(ushort *)(lVar29 + 0x48));
          uVar49 = NEON_ucvtf((uint)*(ushort *)(lVar29 + 0x4a));
        }
        plVar17 = *(long **)(lVar35 + 0xd0);
        lVar29 = *plVar17;
        if (lVar29 != 0) {
          *(undefined4 *)(lVar29 + 0x50) = uVar51;
          *(undefined4 *)(lVar29 + 0x54) = uVar49;
          *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) | 0x10;
          plVar17 = *(long **)(lVar35 + 0xd0);
        }
        FUN_7103778b80((long)plVar17,(long)plVar16,ppppppppplVar19,ppppbVar22,pppplVar23,lVar41,
                       param_7,param_8);
        lVar29 = **(long **)(lVar35 + 0xd0);
        if (lVar29 != 0) {
          *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) & 0xfe;
        }
        if (0x12 < *(uint *)(lVar35 + 0xb4)) goto LAB_710185b548;
        *(undefined4 *)(lVar35 + (long)(int)*(uint *)(lVar35 + 0xb4) * 4 + 0x68) = 0;
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar45,0x10);
          if (bVar5) {
            *plVar45 = *plVar45 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar14 = *(undefined8 **)(lVar10 + 0x150);
        if (puVar14 < *(undefined8 **)(lVar10 + 0x158)) {
          *puVar14 = pppppppplVar26;
          puVar14[1] = plVar13;
          local_a8 = (long ********)0x0;
          local_a0 = (long *)0x0;
          *(long *)(lVar10 + 0x150) = *(long *)(lVar10 + 0x150) + 0x10;
        }
        else {
          local_a8 = pppppppplVar26;
          local_a0 = plVar13;
          FUN_7101bfd0b0((long *)(lVar10 + 0x148),&local_a8,(long ****)ppppppppplVar19,ppppbVar22,
                         pppplVar23,lVar41,param_7,param_8);
          if (local_a0 != (long *)0x0) {
            plVar17 = local_a0 + 1;
            do {
              lVar35 = *plVar17;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar5) {
                *plVar17 = lVar35 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar35 == 0) {
              (**(code **)(*local_a0 + 0x10))(local_a0);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
        do {
          lVar35 = *plVar45;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar45,0x10);
          if (bVar5) {
            *plVar45 = lVar35 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        pppppppplVar26 = local_d8;
        pppppppplVar34 = local_e0;
        if (lVar35 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          std::__shared_weak_count::__release_weak();
          pppppppplVar26 = local_d8;
          pppppppplVar34 = local_e0;
        }
      }
      else {
        pppppplVar36 = *pppppppplVar34[uVar43 * 2 + 1];
        if (pppppplVar36 != (long ******)0x0) {
          *(byte *)(pppppplVar36 + 0xb) = *(byte *)(pppppplVar36 + 0xb) & 0xfe;
        }
      }
      uVar43 = uVar43 + 1;
    } while (uVar43 < (ulong)((long)pppppppplVar26 - (long)pppppppplVar34 >> 4));
  }
  *(int *)(lVar10 + 0x178) =
       (int)((ulong)(*(long *)(lVar10 + 0x150) - *(long *)(lVar10 + 0x148)) >> 4);
  plVar9 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar19,ppppbVar22,pppplVar23,lVar41,
                                  param_7,param_8);
  if (plVar9 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&DAT_00000030;
      ppppppppplVar19 = &local_a8;
      uVar43 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar43 & 1) != 0) &&
         (plVar9 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar19,ppppbVar22,pppplVar23
                                          ,lVar41,param_7,param_8), plVar9 != (long *)0x0))
      goto LAB_710185af04;
    }
    plVar9 = (long *)0x0;
  }
LAB_710185af04:
  plVar13 = plVar9 + 1;
  *plVar13 = 0;
  *plVar9 = (long)&PTR_FUN_71050acbd8;
  plVar9[2] = 0;
  pppppppplVar26 = (long ********)(plVar9 + 3);
  *pppppppplVar26 = (long *******)&PTR_FUN_71050accb8;
  puVar14 = (undefined8 *)
            FUN_710392e290(0x10,0x140,(long ****)ppppppppplVar19,ppppbVar22,pppplVar23,lVar41,
                           param_7,param_8);
  if (puVar14 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&DAT_00000140;
      ppppppppplVar19 = &local_a8;
      uVar43 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar43 & 1) != 0) &&
         (puVar14 = (undefined8 *)
                    FUN_710392e290(0x10,0x140,(long ****)ppppppppplVar19,ppppbVar22,pppplVar23,
                                   lVar41,param_7,param_8), puVar14 != (undefined8 *)0x0))
      goto LAB_710185af88;
    }
    puVar14 = (undefined8 *)0x0;
  }
LAB_710185af88:
  plVar45 = puVar14 + 4;
  *puVar14 = &PTR_FUN_71050acd20;
  puVar14[4] = plVar45;
  puVar14[8] = 0;
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar14[5] = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  *(undefined4 *)(puVar14 + 0x1e) = 0xffffffff;
  *(undefined1 *)((long)puVar14 + 0xf4) = 0;
  puVar14[9] = 0;
  puVar14[0x1f] = &PTR_FUN_710523d9a8;
  puVar14[0x1c] = 0;
  puVar14[0x1d] = 0xffffffff;
  puVar14[0x1a] = 0;
  puVar14[0x1b] = 0;
  puVar14[0x18] = 0;
  puVar14[0x19] = 0;
  puVar14[0x16] = 0;
  puVar14[0x17] = 0;
  puVar14[0x14] = 0;
  puVar14[0x15] = 0;
  puVar14[0x12] = 0;
  puVar14[0x13] = 0;
  puVar14[0x10] = 0;
  puVar14[0x11] = 0;
  puVar14[0xe] = 0;
  puVar14[0xf] = 0;
  puVar14[0xc] = 0;
  puVar14[0xd] = 0;
  puVar14[10] = 0;
  puVar14[0xb] = 0;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar19,ppppbVar22,pppplVar23,lVar41,param_7
                           ,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&SUB_00000020;
      ppppppppplVar19 = &local_a8;
      uVar43 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar43 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar19,ppppbVar22,pppplVar23,lVar41
                                   ,param_7,param_8), puVar15 != (undefined8 *)0x0))
      goto LAB_710185b048;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_710185b048:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  puVar14[0x20] = puVar15;
  *(undefined8 *)((long)puVar14 + 0x135) = 0;
  puVar14[0x22] = 0;
  puVar14[9] = FUN_7101bfd8a0;
  puVar14[10] = 0;
  puVar14[0xb] = FUN_7101bfd8b0;
  puVar14[0xc] = 0;
  puVar14[0xf] = FUN_7101bfd9b0;
  puVar14[0x10] = 0;
  puVar14[0x11] = FUN_7101bfda60;
  puVar14[0x12] = 0;
  puVar14[0x25] = 0;
  puVar14[0x26] = 0;
  puVar14[0x23] = 0;
  puVar14[0x24] = 0;
  puVar14[0xd] = FUN_7101bfd8c0;
  puVar14[0xe] = 0;
  puVar14[5] = 0;
  puVar14[6] = 0;
  *(undefined8 *)((long)puVar14 + 0xdc) = 0;
  *(undefined8 *)((long)puVar14 + 0xd4) = 0;
  *(undefined8 *)((long)puVar14 + 0xcc) = 0;
  *(undefined8 *)((long)puVar14 + 0xc4) = 0;
  *(undefined8 *)((long)puVar14 + 0xbc) = 0;
  *(undefined8 *)((long)puVar14 + 0xb4) = 0;
  *(undefined8 *)((long)puVar14 + 0xac) = 0;
  *(undefined8 *)((long)puVar14 + 0xa4) = 0;
  *(undefined8 *)((long)puVar14 + 0x9c) = 0;
  *(undefined8 *)((long)puVar14 + 0xe4) = 0xffffffff00000000;
  *(undefined8 *)((long)puVar14 + 0xec) = 0xffffffff00000000;
  *(undefined1 *)((long)puVar14 + 0xf4) = 0;
  *(undefined4 *)(puVar14 + 0x13) = 0;
  FUN_7101bfda70(plVar45);
  plVar9[4] = (long)plVar45;
  plVar9[5] = (long)puVar14;
  uVar49 = *(undefined4 *)(lVar10 + 0x114);
  uVar51 = *(undefined4 *)(lVar10 + 0x118);
  FUN_7103776390(&local_b8,puVar11,(long ****)ppppppppplVar19,ppppbVar22,pppplVar23,lVar41,param_7,
                 param_8);
  *(undefined4 *)((long)puVar14 + 0x134) = uVar49;
  *(undefined4 *)(puVar14 + 0x27) = uVar51;
  FUN_7103776910(&local_a8,(long)&local_b8,(long ****)"txt_big_15",ppppppppplVar19,ppppbVar22,
                 pppplVar23,lVar41,param_7,param_8);
  plVar17 = local_a0;
  if (&local_a8 != (long *********)(puVar14 + 0x1f)) {
    local_a0 = (long *)0x0;
    uVar43 = puVar14[0x20];
    puVar14[0x20] = plVar17;
    if (uVar43 != 0) {
      FUN_710392eb40(uVar43);
    }
  }
  plVar17 = local_a0;
  local_a8 = (long ********)&PTR_FUN_710523d9a8;
  local_a0 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar17);
  }
  uVar43 = local_b0;
  lVar35 = *(long *)puVar14[0x20];
  if (lVar35 != 0) {
    *(byte *)(lVar35 + 0x58) = *(byte *)(lVar35 + 0x58) & 0xfe;
  }
  if (*(uint *)((long)puVar14 + 0xe4) < 0x13) {
    *(undefined4 *)((long)plVar45 + (long)(int)*(uint *)((long)puVar14 + 0xe4) * 4 + 0x78) = 0;
    local_b8 = &PTR_FUN_710523d988;
    local_b0 = 0;
    if (uVar43 != 0) {
      uVar46 = *(ulong *)(uVar43 + 0x18);
      *(undefined ***)(uVar43 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar43 + 0x18) = 0;
      if (uVar46 != 0) {
        FUN_710392eb40(uVar46);
      }
      FUN_710392eb40(uVar43);
    }
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = *plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar14 = *(undefined8 **)(lVar10 + 0x150);
    if (puVar14 < *(undefined8 **)(lVar10 + 0x158)) {
      *puVar14 = pppppppplVar26;
      puVar14[1] = plVar9;
      local_a8 = (long ********)0x0;
      local_a0 = (long *)0x0;
      *(long *)(lVar10 + 0x150) = *(long *)(lVar10 + 0x150) + 0x10;
    }
    else {
      local_a8 = pppppppplVar26;
      local_a0 = plVar9;
      FUN_7101bfd0b0((long *)(lVar10 + 0x148),&local_a8,(long ****)ppppppppplVar19,ppppbVar22,
                     pppplVar23,lVar41,param_7,param_8);
      if (local_a0 != (long *)0x0) {
        plVar45 = local_a0 + 1;
        do {
          lVar35 = *plVar45;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar45,0x10);
          if (bVar5) {
            *plVar45 = lVar35 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar35 == 0) {
          (**(code **)(*local_a0 + 0x10))(local_a0);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    FUN_7103776910(&local_a8,(long)puVar11,(long ****)"textbox_param",ppppppppplVar19,ppppbVar22,
                   pppplVar23,lVar41,param_7,param_8);
    plVar45 = local_a0;
    if (((*local_a0 == 0) ||
        (puVar18 = FUN_71000598d0(*local_a0,"string_length_small"), puVar18 == (uint *)0x0)) ||
       (*(char *)((long)puVar18 + 10) != '\x01')) {
      uVar30 = 0;
    }
    else {
      uVar30 = (uint)(ushort)puVar18[2];
      if ((ushort)puVar18[2] != 0) {
        uVar30 = *(uint *)((long)puVar18 + (ulong)puVar18[1]);
      }
    }
    *(uint *)(lVar10 + 0x138) = uVar30;
    if (((*plVar45 == 0) ||
        (puVar18 = FUN_71000598d0(*plVar45,"string_length_mid"), puVar18 == (uint *)0x0)) ||
       (*(char *)((long)puVar18 + 10) != '\x01')) {
      uVar30 = 0;
    }
    else {
      uVar30 = (uint)(ushort)puVar18[2];
      if ((ushort)puVar18[2] != 0) {
        uVar30 = *(uint *)((long)puVar18 + (ulong)puVar18[1]);
      }
    }
    *(uint *)(lVar10 + 0x13c) = uVar30;
    if (((*plVar45 == 0) ||
        (puVar18 = FUN_71000598d0(*plVar45,"string_length_big"), puVar18 == (uint *)0x0)) ||
       (*(char *)((long)puVar18 + 10) != '\x01')) {
      uVar30 = 0;
    }
    else {
      uVar30 = (uint)(ushort)puVar18[2];
      if ((ushort)puVar18[2] != 0) {
        uVar30 = *(uint *)((long)puVar18 + (ulong)puVar18[1]);
      }
    }
    *(uint *)(lVar10 + 0x140) = uVar30;
    lVar35 = *(long *)**(undefined8 **)(lVar10 + 200);
    *(undefined4 *)(*(long *)(lVar35 + 0x600) + 0x18) = 0x40000;
    *(undefined4 *)(*(long *)(lVar35 + 0x600) + 0x1c) = 0x100000;
    *(undefined4 *)(*(long *)(lVar35 + 0x600) + 0x20) = 0x400000;
    *(undefined4 *)(*(long *)(lVar35 + 0x600) + 0x28) = 0x20;
    *(undefined4 *)(*(long *)(lVar35 + 0x600) + 0x2c) = 0xbfffffff;
    lVar35 = *(long *)(lVar35 + 0x600);
    *(undefined8 *)(lVar35 + 0x3fc) = 0xc00000011;
    *(undefined8 *)(lVar35 + 0x404) = 0x6400000006;
    *(undefined8 *)(lVar35 + 0x40c) = 0;
    *(undefined8 *)(lVar35 + 0x414) = 0xc00000011;
    *(undefined8 *)(lVar35 + 0x41c) = 0x6400000006;
    *(undefined8 *)(lVar35 + 0x424) = 0;
    FUN_71037760f0(*(long *)**(undefined8 **)(lVar10 + 200),0);
    pppplVar21 = (long ****)&DAT_00001000;
    FUN_7103775dc0((long *)**(undefined8 **)(lVar10 + 200),0,(long ****)&DAT_00001000,ppppbVar22,
                   pppplVar23,lVar41,param_7,param_8);
    local_a8 = (long ********)&PTR_FUN_710523d9a8;
    local_a0 = (long *)0x0;
    FUN_710392eb40((ulong)plVar45);
    do {
      lVar10 = *plVar13;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar39 = extraout_x1_06;
    if (lVar10 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
      uVar39 = extraout_x1_07;
    }
    pppppppplVar26 = local_e0;
    if (local_e0 != (long ********)0x0) {
      while (local_d8 != pppppppplVar26) {
        pppppppplVar34 = local_d8 + -2;
        (*(code *)**pppppppplVar34)(pppppppplVar34);
        uVar39 = extraout_x1_08;
        local_d8 = pppppppplVar34;
      }
      local_d8 = pppppppplVar26;
      if (local_e0 != (long ********)0x0) {
        FUN_710392eb40((ulong)local_e0);
        uVar39 = extraout_x1_09;
      }
    }
    puVar8[2] = &DAT_7105333600;
    uVar49 = DAT_7105333664;
    *(undefined4 *)(puVar8 + 0xd) = DAT_7105333660;
    *(undefined4 *)((long)puVar8 + 0x6c) = uVar49;
    do {
      uVar30 = DAT_7105333650;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
      if (bVar5) {
        DAT_7105333650 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0' || (uVar30 & 1) != 0);
    puVar8[9] = DAT_7105333648;
    DAT_7105333650 = 0;
    DAT_7105333648 = puVar8;
    FUN_71032caea0((long)puVar8,uVar39,pppplVar21,ppppbVar22,pppplVar23,lVar41,param_7,param_8);
    lVar10 = *(long *)(lVar7 + 0xd0);
    *(undefined8 **)(lVar7 + 0xd0) = puVar8;
    if (lVar10 != 0) {
      FUN_71032cad20(lVar10);
      return;
    }
    return;
  }
LAB_710185b548:
                    /* WARNING: Subroutine does not return */
  abort();
}

