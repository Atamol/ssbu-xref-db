// addr:      71018c96f0
// offset:    0x18c96f0
// name:      FUN_71018c96f0
// mangled:   
// signature: undefined __cdecl FUN_71018c96f0(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71018c96f0(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  long ********pppppppplVar4;
  int iVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long ***ppplVar12;
  undefined1 *puVar13;
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
  long ****pppplVar14;
  undefined **ppuVar15;
  long *********ppppppppplVar16;
  long *******ppppppplVar17;
  byte ****ppppbVar18;
  char *pcVar19;
  uint uVar20;
  long ****pppplVar21;
  long *****ppppplVar22;
  undefined8 uVar23;
  uint uVar24;
  long ******pppppplVar25;
  long *******ppppppplVar26;
  long ***local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined6 uStack_de;
  undefined2 uStack_d8;
  undefined4 uStack_d6;
  undefined2 uStack_d2;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_6c [3];
  
  puVar6 = (undefined4 *)FUN_710392e290(0x10,0xf9c8,param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar6 == (undefined4 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_158 = (long ***)((ulong)local_158 & 0xffffffff00000000);
      local_f8 = (long ********)0xf9c8;
      pppplVar14 = (long ****)&local_f8;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_158);
      if (((uVar7 & 1) != 0) &&
         (puVar6 = (undefined4 *)
                   FUN_710392e290(0x10,0xf9c8,pppplVar14,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined4 *)0x0)) goto LAB_71018c9774;
    }
    puVar6 = (undefined4 *)0x0;
  }
LAB_71018c9774:
  *puVar6 = 0x3c;
  pppplVar14 = (long ****)&DAT_0000011c;
  puVar6[0x53] = 0;
  *(undefined4 **)(puVar6 + 2) = puVar6;
  *(undefined8 *)(puVar6 + 8) = 0;
  *(undefined8 *)(puVar6 + 10) = 0;
  *(undefined8 *)(puVar6 + 0x54) = 0xffffffff;
  puVar6[0x56] = 0xffffffff;
  *(undefined1 *)(puVar6 + 0x57) = 0;
  *(undefined8 *)(puVar6 + 4) = 0;
  *(undefined8 *)(puVar6 + 6) = 0;
  memset(puVar6 + 0xc,0,0x11c);
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x80,pppplVar14,param_4,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_158 = (long ***)((ulong)local_158 & 0xffffffff00000000);
      local_f8 = (long ********)&DAT_00000080;
      pppplVar14 = (long ****)&local_f8;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_158);
      if (((uVar7 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x80,pppplVar14,param_4,param_5,param_6,param_7,param_8),
         puVar8 != (undefined8 *)0x0)) goto LAB_71018c9804;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71018c9804:
  *puVar8 = &PTR_FUN_7105181b40;
  puVar8[2] = 0;
  puVar8[1] = puVar8 + 2;
  puVar8[5] = 0;
  puVar8[3] = 0;
  puVar8[4] = puVar8 + 5;
  puVar8[8] = 0;
  puVar8[6] = 0;
  puVar8[7] = puVar8 + 8;
  puVar8[0xc] = 0;
  puVar8[0xb] = 0;
  *(undefined4 *)(puVar8 + 0xd) = 2;
  *(undefined4 *)(puVar8 + 0xf) = 0;
  puVar8[0xe] = 0;
  puVar8[9] = 0;
  puVar8[10] = puVar8 + 0xb;
  *(undefined8 **)(puVar6 + 0x58) = puVar8;
  lVar9 = DAT_710532f840;
  *(undefined8 *)(puVar6 + 0x5a) = *(undefined8 *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
  uVar23 = *(undefined8 *)(*(long *)(lVar9 + 8) + 0xc0);
  puVar6[0x66] = 0;
  *(undefined8 *)(puVar6 + 0x5c) = uVar23;
  *(undefined8 *)(puVar6 + 0x62) = 0;
  *(undefined8 *)(puVar6 + 100) = 0;
  *(undefined8 *)(puVar6 + 0x5e) = 0;
  *(undefined8 *)(puVar6 + 0x60) = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  puVar6[0x68] = 0xffffffff;
  *(undefined1 *)(puVar6 + 0x69) = 0;
  *(undefined8 *)(puVar6 + 0x72) = 0x1000c0b0a040303;
  *(undefined2 *)(puVar6 + 0x74) = 0x205;
  *(undefined1 *)((long)puVar6 + 0x1d2) = 2;
  puVar6[0x67] = uVar1;
  *(undefined8 *)((long)puVar6 + 0x1d3) = 0x303040401010101;
  *(undefined8 *)((long)puVar6 + 0x1db) = 0x2020501000c0b0a;
  *(undefined4 *)((long)puVar6 + 0x1e3) = 0x1010101;
  *(undefined2 *)((long)puVar6 + 0x1e7) = 0xd0d;
  *(undefined4 *)((long)puVar6 + 0x1e9) = 0x20304;
  ppuVar15 = (undefined **)0xf788;
  *(undefined2 *)((long)puVar6 + 0x1ed) = 0x102;
  *(undefined4 *)((long)puVar6 + 0x1ef) = 0x1010101;
  *(undefined2 *)(puVar6 + 0x6c) = 0;
  *(undefined8 *)(puVar6 + 0x6a) = 0;
  memset(puVar6 + 0x7d,0,0xf788);
  puVar6[0x3e5f] = 0xffffffff;
  *(undefined8 *)(puVar6 + 0x3e60) = 0x1000c0b0a040303;
  *(undefined2 *)(puVar6 + 0x3e62) = 0x205;
  *(undefined1 *)((long)puVar6 + 0xf98a) = 2;
  *(undefined8 *)((long)puVar6 + 0xf98b) = 0x303040401010101;
  *(undefined8 *)((long)puVar6 + 0xf993) = 0x2020501000c0b0a;
  *(undefined4 *)((long)puVar6 + 0xf99b) = 0x1010101;
  *(undefined2 *)((long)puVar6 + 0xf99f) = 0xd0d;
  *(undefined4 *)((long)puVar6 + 0xf9a1) = 0x20304;
  *(undefined2 *)((long)puVar6 + 0xf9a5) = 0x102;
  *(undefined4 *)((long)puVar6 + 0xf9a7) = 0x1010101;
  *(undefined8 *)(puVar6 + 0x3e6b) = 0;
  FUN_7103391a80((long *)(puVar6 + 0x3e6e),extraout_x1,(long ****)ppuVar15,param_4,param_5,param_6,
                 param_7,param_8);
  uVar23 = extraout_x1_00;
  if (((DAT_71053144d8 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), uVar23 = extraout_x1_11, iVar5 != 0)) {
    FUN_7101764000();
    ppuVar15 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
    uVar23 = extraout_x1_12;
  }
  *(bool *)(puVar6 + 0x3e70) = DAT_71053050f0 == 0x3020000;
  *(code **)(puVar6 + 0xc) = FUN_71018c1740;
  *(undefined8 *)(puVar6 + 0xe) = 0;
  *(code **)(puVar6 + 0x14) = FUN_71018c2210;
  *(undefined8 *)(puVar6 + 0x16) = 0;
  *(code **)(puVar6 + 0x20) = FUN_71018c2cb0;
  *(undefined8 *)(puVar6 + 0x22) = 0;
  *(code **)(puVar6 + 0x10) = FUN_71018c1780;
  *(undefined8 *)(puVar6 + 0x12) = 0;
  *(code **)(puVar6 + 0x18) = FUN_71018c29a0;
  *(undefined8 *)(puVar6 + 0x1a) = 0;
  *(code **)(puVar6 + 0x1c) = FUN_71018c2bf0;
  *(undefined8 *)(puVar6 + 0x1e) = 0;
  *(code **)(puVar6 + 0x24) = FUN_71018c3240;
  *(undefined8 *)(puVar6 + 0x26) = 0;
  *(code **)(puVar6 + 0x28) = FUN_71018c3660;
  *(undefined8 *)(puVar6 + 0x2a) = 0;
  *(code **)(puVar6 + 0x2c) = FUN_71018c39c0;
  *(undefined8 *)(puVar6 + 0x2e) = 0;
  *(code **)(puVar6 + 0x30) = FUN_71018c3d20;
  *(undefined8 *)(puVar6 + 0x32) = 0;
  *(code **)(puVar6 + 0x38) = FUN_71018c43b0;
  *(undefined8 *)(puVar6 + 0x3a) = 0;
  *(code **)(puVar6 + 0x34) = FUN_71018c4270;
  *(undefined8 *)(puVar6 + 0x36) = 0;
  *(code **)(puVar6 + 0x3c) = FUN_71018c45c0;
  *(undefined8 *)(puVar6 + 0x3e) = 0;
  if (0x12 < (uint)puVar6[0x53]) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar6[(long)(int)puVar6[0x53] + 0x40] = 0;
  uVar7 = *(ulong *)(param_1 + 0x58);
  *(undefined4 **)(param_1 + 0x58) = puVar6;
  if (uVar7 != 0) {
    FUN_71018c46f0(uVar7,uVar23,(char *)ppuVar15,param_4,param_5,param_6,param_7,param_8);
    FUN_7103391e50((undefined8 *)(uVar7 + 0xf9b8),extraout_x1_01,(long ****)ppuVar15,param_4,param_5
                   ,param_6,param_7,param_8);
    lVar9 = *(long *)(uVar7 + 0x188);
    *(undefined8 *)(uVar7 + 0x188) = 0;
    uVar23 = extraout_x1_02;
    if (lVar9 != 0) {
      FUN_71032cad20(lVar9);
      uVar23 = extraout_x1_03;
    }
    lVar9 = *(long *)(uVar7 + 0x180);
    *(undefined8 *)(uVar7 + 0x180) = 0;
    if (lVar9 != 0) {
      FUN_71032cad20(lVar9);
      uVar23 = extraout_x1_04;
    }
    lVar9 = *(long *)(uVar7 + 0x178);
    *(undefined8 *)(uVar7 + 0x178) = 0;
    if (lVar9 != 0) {
      FUN_71032cad20(lVar9);
      uVar23 = extraout_x1_05;
    }
    FUN_710323b9e0(*(long *)(uVar7 + 0x160),uVar23,(long *********)ppuVar15,param_4,param_5,param_6,
                   param_7,param_8);
    plVar10 = *(long **)(uVar7 + 0x160);
    *(undefined8 *)(uVar7 + 0x160) = 0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    FUN_710392eb40(uVar7);
    puVar6 = *(undefined4 **)(param_1 + 0x58);
  }
  *(undefined8 *)(*(long *)(puVar6 + 0x58) + 0x70) = 1;
  lVar9 = *(long *)(puVar6 + 0x58);
  plVar10 = (long *)(puVar6 + 0x58);
  FUN_710323beb0(lVar9,(ulong *)&DAT_71045455f8,(long)*(int *)(lVar9 + 0x70),
                 (ulong)*(uint *)(lVar9 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar9 = *(long *)(puVar6 + 0x58);
  local_f8 = (long ********)0x1dd5d06117;
  FUN_710323beb0(lVar9,&local_f8,(long)*(int *)(lVar9 + 0x70),(ulong)*(uint *)(lVar9 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  lVar9 = *(long *)(puVar6 + 0x58);
  local_f8 = (long ********)0x22f525ad60;
  FUN_710323beb0(lVar9,&local_f8,(long)*(int *)(lVar9 + 0x70),(ulong)*(uint *)(lVar9 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  lVar9 = *(long *)(puVar6 + 0x58);
  FUN_710323beb0(lVar9,(ulong *)&DAT_7104545600,(long)*(int *)(lVar9 + 0x70),
                 (ulong)*(uint *)(lVar9 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar9 = *(long *)(puVar6 + 0x58);
  local_f8 = (long ********)0x1dd5d06117;
  FUN_710323beb0(lVar9,&local_f8,(long)*(int *)(lVar9 + 0x70),(ulong)*(uint *)(lVar9 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  lVar9 = *(long *)(puVar6 + 0x58);
  local_f8 = (long ********)0x22f525ad60;
  FUN_710323beb0(lVar9,&local_f8,(long)*(int *)(lVar9 + 0x70),(ulong)*(uint *)(lVar9 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  lVar9 = *(long *)(puVar6 + 0x58);
  ppppppppplVar16 = (long *********)(long)*(int *)(lVar9 + 0x70);
  ppppbVar18 = (byte ****)(ulong)*(uint *)(lVar9 + 0x68);
  pppplVar14 = (long ****)0x1;
  FUN_710323beb0(lVar9,(ulong *)&DAT_7104545608,(long)ppppppppplVar16,(ulong)ppppbVar18,
                 (long ****)0x1,param_6,param_7,param_8);
  lVar9 = *(long *)(puVar6 + 0x58);
  uVar7 = FUN_710323cb80(lVar9,extraout_x1_06,ppppppppplVar16,ppppbVar18,pppplVar14,param_6,param_7,
                         param_8);
  while ((uVar7 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar7 = FUN_710323cb80(lVar9,extraout_x1_07,ppppppppplVar16,ppppbVar18,pppplVar14,param_6,
                           param_7,param_8);
  }
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar16,ppppbVar18,pppplVar14,param_6,param_7
                          ,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_158 = (long ***)((ulong)local_158 & 0xffffffff00000000);
      local_f8 = (long ********)&DAT_00000088;
      ppppppppplVar16 = (long *********)&local_f8;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_158);
      if (((uVar7 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar16,ppppbVar18,pppplVar14,param_6
                                  ,param_7,param_8), puVar8 != (undefined8 *)0x0))
      goto LAB_71018c9c80;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71018c9c80:
  *puVar8 = &PTR_FUN_71050af0a8;
  puVar8[1] = 0;
  puVar8[0xc] = 0;
  puVar8[0xd] = 0x1ffffffff;
  puVar8[2] = 0;
  puVar8[3] = 0;
  *(undefined1 *)(puVar8 + 0xb) = 0;
  puVar8[0xf] = plVar10;
  *(undefined1 *)(puVar8 + 0xe) = 1;
  puVar8[9] = 0;
  puVar8[10] = 0;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,200,(long ****)ppppppppplVar16,ppppbVar18,pppplVar14,param_6,param_7
                           ,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_158 = (long ***)((ulong)local_158 & 0xffffffff00000000);
      local_f8 = (long ********)&DAT_000000c8;
      pppplVar21 = (long ****)&local_f8;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_158);
      if (((uVar7 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,200,pppplVar21,ppppbVar18,pppplVar14,param_6,param_7,param_8
                                  ), puVar11 != (undefined8 *)0x0)) goto LAB_71018c9d00;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_71018c9d00:
  *(undefined4 *)(puVar11 + 1) = 0x1000;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[2] = 0;
  ppuVar15 = &PTR_DAT_71050af088;
  pcVar19 = (char *)0x2aa42d0657;
  pppplVar14 = (long ****)0x1;
  puVar11[6] = 0;
  puVar11[5] = puVar11 + 6;
  *puVar11 = &PTR_FUN_71050aef98;
  puVar11[9] = 0;
  puVar11[10] = &PTR_FUN_71050aefe0;
  puVar11[7] = 0;
  puVar11[8] = 0;
  *(undefined4 *)(puVar11 + 0x16) = 0;
  puVar11[0xb] = 0;
  puVar11[0x17] = 0xffffffff00000000;
  *(undefined1 *)(puVar11 + 0x18) = 0;
  puVar11[0x14] = 0;
  puVar11[0x15] = 0;
  puVar11[0x12] = 0;
  puVar11[0x13] = 0;
  puVar11[0x10] = 0;
  puVar11[0x11] = 0;
  puVar11[0xe] = 0;
  puVar11[0xf] = 0;
  puVar11[0xc] = 0;
  puVar11[0xd] = 0;
  puVar8[0x10] = puVar11;
  FUN_71032cb040((long)puVar11,plVar10,(long ****)&PTR_DAT_71050af088,(byte ****)0x2aa42d0657,
                 (long ****)0x1,param_6,param_7,param_8);
  ppppppplVar26 = (long *******)puVar8[0x10];
  if (ppppppplVar26[3] == ppppppplVar26[2]) {
LAB_71018cabdc:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  pppplVar21 = **ppppppplVar26[2];
  *(undefined4 *)((**pppplVar21)[0xc0] + 2) = 0x20;
  *(undefined4 *)((long)(**pppplVar21)[0xc0] + 0x14) = 0x40;
  *(undefined4 *)((**pppplVar21)[0xc0] + 3) = 0x10;
  uVar23 = extraout_x1_08;
  if (ppppppplVar26[8] != (long ******)0x0) {
    ppppplVar22 = *ppppppplVar26[8];
    if (ppppplVar22 == (long *****)0x0) {
      pppplVar21 = (long ****)0x0;
    }
    else {
      pppplVar21 = *ppppplVar22;
    }
    if (ppppppplVar26[3] == ppppppplVar26[2]) goto LAB_71018cabdc;
    FUN_71033743c0((long)pppplVar21,"layout_root",**ppppppplVar26[2]);
    ppppppplVar17 = ppppppplVar26 + 9;
    FUN_71033744b0((long)pppplVar21,"scroller",ppppppplVar17);
    pppppplVar25 = ppppppplVar26[8];
    if (*pppppplVar25 != (long *****)0x0) {
      ppppppplVar17 = (long *******)&DAT_71042b2a84;
      pcVar19 = (char *)0x6;
      FUN_7103375650((long *)*pppppplVar25,"BUTTON_DELETE",&DAT_71042b2a84);
      pppppplVar25 = ppppppplVar26[8];
      if (*pppppplVar25 != (long *****)0x0) {
        ppppppplVar17 = (long *******)&DAT_71042b2a84;
        pcVar19 = &DAT_ffffffff;
        FUN_7103375650((long *)*pppppplVar25,"ITEM_INDEX_NONE",&DAT_71042b2a84);
        pppppplVar25 = ppppppplVar26[8];
        if (*pppppplVar25 != (long *****)0x0) {
          ppppppplVar17 = (long *******)&DAT_71042b2a84;
          pcVar19 = (char *)0xfffffffe;
          FUN_7103375650((long *)*pppppplVar25,"ITEM_INDEX_FIRST",&DAT_71042b2a84);
          pppppplVar25 = ppppppplVar26[8];
          if (*pppppplVar25 != (long *****)0x0) {
            ppppppplVar17 = (long *******)&DAT_71042b2a84;
            pcVar19 = (char *)0xfffffffd;
            FUN_7103375650((long *)*pppppplVar25,"ITEM_INDEX_LAST",&DAT_71042b2a84);
            pppppplVar25 = ppppppplVar26[8];
            if (*pppppplVar25 != (long *****)0x0) {
              ppppppplVar17 = (long *******)&DAT_71042b2a84;
              pcVar19 = (char *)0x0;
              FUN_7103375650((long *)*pppppplVar25,"FOCUS_NONE",&DAT_71042b2a84);
              pppppplVar25 = ppppppplVar26[8];
              if (*pppppplVar25 != (long *****)0x0) {
                ppppppplVar17 = (long *******)&DAT_71042b2a84;
                pcVar19 = (char *)0x1;
                FUN_7103375650((long *)*pppppplVar25,"FOCUS_VIBRATION",&DAT_71042b2a84);
                pppppplVar25 = ppppppplVar26[8];
                if (*pppppplVar25 != (long *****)0x0) {
                  ppppppplVar17 = (long *******)&DAT_71042b2a84;
                  pcVar19 = (char *)0x2;
                  FUN_7103375650((long *)*pppppplVar25,"FOCUS_SCROLLER",&DAT_71042b2a84);
                  pppppplVar25 = ppppppplVar26[8];
                  if (*pppppplVar25 != (long *****)0x0) {
                    ppppppplVar17 = (long *******)&DAT_71042d5020;
                    pcVar19 = "mnu_opt_btn_help_vib_on";
                    FUN_7103375650((long *)*pppppplVar25,"HELP_MSG_VIBRATION_ON",&DAT_71042d5020);
                    pppppplVar25 = ppppppplVar26[8];
                    if (*pppppplVar25 != (long *****)0x0) {
                      ppppppplVar17 = (long *******)&DAT_71042d5020;
                      pcVar19 = "mnu_opt_btn_help_vib_off";
                      FUN_7103375650((long *)*pppppplVar25,"HELP_MSG_VIBRATION_OFF",&DAT_71042d5020)
                      ;
                      pppppplVar25 = ppppppplVar26[8];
                      if (*pppppplVar25 != (long *****)0x0) {
                        ppppppplVar17 = (long *******)&DAT_71042d5020;
                        pcVar19 = "mnu_opt_btn_help_noname";
                        FUN_7103375650((long *)*pppppplVar25,"HELP_MSG_NO_NAME",&DAT_71042d5020);
                        pppppplVar25 = ppppppplVar26[8];
                        if (*pppppplVar25 != (long *****)0x0) {
                          ppppppplVar17 = (long *******)&DAT_71042d5020;
                          pcVar19 = "mnu_opt_btn_help_new";
                          FUN_7103375650((long *)*pppppplVar25,"HELP_MSG_NEW_NAME",&DAT_71042d5020);
                          pppppplVar25 = ppppppplVar26[8];
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    ppplVar12 = (long ***)
                FUN_710392e290(0x10,0x28,(long ****)ppppppplVar17,(byte ****)pcVar19,pppplVar14,
                               param_6,param_7,param_8);
    if (ppplVar12 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_158 = (long ***)((ulong)local_158 & 0xffffffff00000000);
        local_f8 = (long ********)&DAT_00000028;
        pppplVar21 = (long ****)&local_f8;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_158);
        if (((uVar7 & 1) != 0) &&
           (ppplVar12 = (long ***)
                        FUN_710392e290(0x10,0x28,pppplVar21,(byte ****)pcVar19,pppplVar14,param_6,
                                       param_7,param_8), ppplVar12 != (long ***)0x0))
        goto LAB_71018ca028;
      }
      ppplVar12 = (long ***)0x0;
    }
LAB_71018ca028:
    *ppplVar12 = (long **)&PTR_FUN_71050af020;
    ppplVar12[4] = (long **)0x0;
    ppplVar12[2] = (long **)ppppppplVar26;
    ppplVar12[3] = (long **)FUN_7101d377b0;
    *(undefined4 *)(ppplVar12 + 1) = 0;
    pppplVar21 = &local_158;
    local_158 = ppplVar12;
    FUN_7103376af0((long)pppppplVar25,(byte *)"decided_oname",pppplVar21,(byte ****)pcVar19,
                   pppplVar14,param_6,param_7,param_8);
    ppplVar12 = local_158;
    local_158 = (long ***)0x0;
    if (ppplVar12 != (long ***)0x0) {
      (*(code *)(*ppplVar12)[1])();
    }
    pppppplVar25 = ppppppplVar26[8];
    ppplVar12 = (long ***)
                FUN_710392e290(0x10,0x28,pppplVar21,(byte ****)pcVar19,pppplVar14,param_6,param_7,
                               param_8);
    if (ppplVar12 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_78 = (long ***)((ulong)local_78._4_4_ << 0x20);
        local_f8 = (long ********)&DAT_00000028;
        pppplVar21 = (long ****)&local_f8;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
        if (((uVar7 & 1) != 0) &&
           (ppplVar12 = (long ***)
                        FUN_710392e290(0x10,0x28,pppplVar21,(byte ****)pcVar19,pppplVar14,param_6,
                                       param_7,param_8), ppplVar12 != (long ***)0x0))
        goto LAB_71018ca0d0;
      }
      ppplVar12 = (long ***)0x0;
    }
LAB_71018ca0d0:
    *ppplVar12 = (long **)&PTR_FUN_71050af020;
    ppplVar12[2] = (long **)ppppppplVar26;
    ppplVar12[3] = (long **)FUN_7101d37880;
    ppplVar12[4] = (long **)0x0;
    pppplVar21 = (long ****)&local_78;
    *(undefined4 *)(ppplVar12 + 1) = 0;
    local_78 = ppplVar12;
    FUN_7103376af0((long)pppppplVar25,(byte *)"delete_oname",pppplVar21,(byte ****)pcVar19,
                   pppplVar14,param_6,param_7,param_8);
    ppplVar12 = local_78;
    local_78 = (long ***)0x0;
    if (ppplVar12 != (long ***)0x0) {
      (*(code *)(*ppplVar12)[1])();
    }
    pppppplVar25 = ppppppplVar26[8];
    ppplVar12 = (long ***)
                FUN_710392e290(0x10,0x38,pppplVar21,(byte ****)pcVar19,pppplVar14,param_6,param_7,
                               param_8);
    if (ppplVar12 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_80 = (long ***)((ulong)local_80._4_4_ << 0x20);
        local_f8 = (long ********)&DAT_00000038;
        pppplVar21 = (long ****)&local_f8;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
        if (((uVar7 & 1) != 0) &&
           (ppplVar12 = (long ***)
                        FUN_710392e290(0x10,0x38,pppplVar21,(byte ****)pcVar19,pppplVar14,param_6,
                                       param_7,param_8), ppplVar12 != (long ***)0x0))
        goto LAB_71018ca170;
      }
      ppplVar12 = (long ***)0x0;
    }
LAB_71018ca170:
    ppplVar12[3] = (long **)FUN_7101d378d0;
    ppplVar12[4] = (long **)0x0;
    ppplVar12[5] = (long **)0x0;
    ppplVar12[6] = (long **)0x0;
    *ppplVar12 = (long **)&PTR_FUN_71050af048;
    ppplVar12[2] = (long **)ppppppplVar26;
    pppplVar21 = (long ****)&local_80;
    *(undefined4 *)(ppplVar12 + 1) = 1;
    local_80 = ppplVar12;
    FUN_7103376af0((long)pppppplVar25,(byte *)"is_oname",pppplVar21,(byte ****)pcVar19,pppplVar14,
                   param_6,param_7,param_8);
    ppplVar12 = local_80;
    local_80 = (long ***)0x0;
    if (ppplVar12 != (long ***)0x0) {
      (*(code *)(*ppplVar12)[1])();
    }
    pppppplVar25 = ppppppplVar26[8];
    ppplVar12 = (long ***)
                FUN_710392e290(0x10,0x38,pppplVar21,(byte ****)pcVar19,pppplVar14,param_6,param_7,
                               param_8);
    if (ppplVar12 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_88 = (long ***)((ulong)local_88._4_4_ << 0x20);
        local_f8 = (long ********)&DAT_00000038;
        pppplVar21 = (long ****)&local_f8;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
        if (((uVar7 & 1) != 0) &&
           (ppplVar12 = (long ***)
                        FUN_710392e290(0x10,0x38,pppplVar21,(byte ****)pcVar19,pppplVar14,param_6,
                                       param_7,param_8), ppplVar12 != (long ***)0x0))
        goto LAB_71018ca220;
      }
      ppplVar12 = (long ***)0x0;
    }
LAB_71018ca220:
    *ppplVar12 = (long **)&PTR_FUN_71050af048;
    ppplVar12[3] = (long **)FUN_7101d37920;
    ppplVar12[4] = (long **)0x0;
    ppplVar12[5] = (long **)0x0;
    ppplVar12[6] = (long **)0x0;
    pppplVar21 = (long ****)&local_88;
    ppplVar12[2] = (long **)ppppppplVar26;
    *(undefined4 *)(ppplVar12 + 1) = 1;
    local_88 = ppplVar12;
    FUN_7103376af0((long)pppppplVar25,(byte *)"is_no_name_oname",pppplVar21,(byte ****)pcVar19,
                   pppplVar14,param_6,param_7,param_8);
    ppplVar12 = local_88;
    local_88 = (long ***)0x0;
    if (ppplVar12 != (long ***)0x0) {
      (*(code *)(*ppplVar12)[1])();
    }
    pppppplVar25 = ppppppplVar26[8];
    ppplVar12 = (long ***)
                FUN_710392e290(0x10,0x28,pppplVar21,(byte ****)pcVar19,pppplVar14,param_6,param_7,
                               param_8);
    if (ppplVar12 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_90 = (long ***)((ulong)local_90._4_4_ << 0x20);
        local_f8 = (long ********)&DAT_00000028;
        pppplVar21 = (long ****)&local_f8;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
        if (((uVar7 & 1) != 0) &&
           (ppplVar12 = (long ***)
                        FUN_710392e290(0x10,0x28,pppplVar21,(byte ****)pcVar19,pppplVar14,param_6,
                                       param_7,param_8), ppplVar12 != (long ***)0x0))
        goto LAB_71018ca2c8;
      }
      ppplVar12 = (long ***)0x0;
    }
LAB_71018ca2c8:
    *ppplVar12 = (long **)&PTR_FUN_71050af020;
    ppplVar12[2] = (long **)ppppppplVar26;
    ppplVar12[3] = (long **)FUN_7101d37990;
    ppplVar12[4] = (long **)0x0;
    pppplVar21 = (long ****)&local_90;
    *(undefined4 *)(ppplVar12 + 1) = 0;
    local_90 = ppplVar12;
    FUN_7103376af0((long)pppppplVar25,(byte *)"open_popup",pppplVar21,(byte ****)pcVar19,pppplVar14,
                   param_6,param_7,param_8);
    ppplVar12 = local_90;
    local_90 = (long ***)0x0;
    if (ppplVar12 != (long ***)0x0) {
      (*(code *)(*ppplVar12)[1])();
    }
    pppppplVar25 = ppppppplVar26[8];
    ppplVar12 = (long ***)
                FUN_710392e290(0x10,0x28,pppplVar21,(byte ****)pcVar19,pppplVar14,param_6,param_7,
                               param_8);
    if (ppplVar12 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_98 = (long ***)((ulong)local_98._4_4_ << 0x20);
        local_f8 = (long ********)&DAT_00000028;
        pppplVar21 = (long ****)&local_f8;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
        if (((uVar7 & 1) != 0) &&
           (ppplVar12 = (long ***)
                        FUN_710392e290(0x10,0x28,pppplVar21,(byte ****)pcVar19,pppplVar14,param_6,
                                       param_7,param_8), ppplVar12 != (long ***)0x0))
        goto LAB_71018ca368;
      }
      ppplVar12 = (long ***)0x0;
    }
LAB_71018ca368:
    *ppplVar12 = (long **)&PTR_FUN_71050af020;
    ppplVar12[2] = (long **)ppppppplVar26;
    ppplVar12[3] = (long **)FUN_7101d37c00;
    ppplVar12[4] = (long **)0x0;
    pppplVar21 = (long ****)&local_98;
    *(undefined4 *)(ppplVar12 + 1) = 0;
    local_98 = ppplVar12;
    FUN_7103376af0((long)pppppplVar25,(byte *)"set_help_message",pppplVar21,(byte ****)pcVar19,
                   pppplVar14,param_6,param_7,param_8);
    ppplVar12 = local_98;
    local_98 = (long ***)0x0;
    if (ppplVar12 != (long ***)0x0) {
      (*(code *)(*ppplVar12)[1])();
    }
    pppppplVar25 = ppppppplVar26[8];
    local_f8 = (long ********)
               FUN_710392e290(0x10,0x38,pppplVar21,(byte ****)pcVar19,pppplVar14,param_6,param_7,
                              param_8);
    if (local_f8 == (long ********)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_6c[0] = 0;
        local_f8 = (long ********)&DAT_00000038;
        pppplVar21 = (long ****)&local_f8;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
        if (((uVar7 & 1) != 0) &&
           (local_f8 = (long ********)
                       FUN_710392e290(0x10,0x38,pppplVar21,(byte ****)pcVar19,pppplVar14,param_6,
                                      param_7,param_8), local_f8 != (long ********)0x0))
        goto LAB_71018ca408;
      }
      local_f8 = (long ********)0x0;
    }
LAB_71018ca408:
    local_f8[2] = ppppppplVar26;
    *local_f8 = (long *******)&PTR_FUN_71050af070;
    local_f8[5] = (long *******)0x0;
    local_f8[6] = (long *******)0x0;
    local_f8[3] = (long *******)FUN_7101d37c10;
    local_f8[4] = (long *******)0x0;
    ppuVar15 = (undefined **)&local_f8;
    *(undefined4 *)(local_f8 + 1) = 0;
    FUN_7103376af0((long)pppppplVar25,(byte *)"vibrate",(long ****)ppuVar15,(byte ****)pcVar19,
                   pppplVar14,param_6,param_7,param_8);
    pppppppplVar4 = local_f8;
    local_f8 = (long ********)0x0;
    uVar23 = extraout_x1_09;
    if (pppppppplVar4 != (long ********)0x0) {
      (*(code *)(*pppppppplVar4)[1])();
      uVar23 = extraout_x1_10;
    }
  }
  puVar8[2] = &DAT_7105333600;
  uVar1 = DAT_7105333664;
  *(undefined4 *)(puVar8 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar8 + 0x6c) = uVar1;
  do {
    uVar20 = DAT_7105333650;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar3) {
      DAT_7105333650 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0' || (uVar20 & 1) != 0);
  puVar8[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar8;
  FUN_71032caea0((long)puVar8,uVar23,(long ****)ppuVar15,(byte ****)pcVar19,pppplVar14,param_6,
                 param_7,param_8);
  lVar9 = *(long *)(puVar6 + 0x5e);
  *(undefined8 **)(puVar6 + 0x5e) = puVar8;
  if (lVar9 != 0) {
    FUN_71032cad20(lVar9);
  }
  *(undefined8 *)(*plVar10 + 0x70) = 2;
  lVar9 = *plVar10;
  FUN_710323beb0(lVar9,(ulong *)&DAT_71045455e0,(long)*(int *)(lVar9 + 0x70),
                 (ulong)*(uint *)(lVar9 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar9 = *plVar10;
  local_f8 = (long ********)0x1dd5d06117;
  FUN_710323beb0(lVar9,&local_f8,(long)*(int *)(lVar9 + 0x70),(ulong)*(uint *)(lVar9 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  lVar9 = *plVar10;
  local_f8 = (long ********)0x22f525ad60;
  FUN_710323beb0(lVar9,&local_f8,(long)*(int *)(lVar9 + 0x70),(ulong)*(uint *)(lVar9 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  lVar9 = *plVar10;
  FUN_710323beb0(lVar9,(ulong *)&DAT_71045455e8,(long)*(int *)(lVar9 + 0x70),
                 (ulong)*(uint *)(lVar9 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar9 = *plVar10;
  local_f8 = (long ********)0x1dd5d06117;
  FUN_710323beb0(lVar9,&local_f8,(long)*(int *)(lVar9 + 0x70),(ulong)*(uint *)(lVar9 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  lVar9 = *plVar10;
  local_f8 = (long ********)0x22f525ad60;
  FUN_710323beb0(lVar9,&local_f8,(long)*(int *)(lVar9 + 0x70),(ulong)*(uint *)(lVar9 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  lVar9 = *plVar10;
  FUN_710323beb0(lVar9,(ulong *)&DAT_71045455f0,(long)*(int *)(lVar9 + 0x70),
                 (ulong)*(uint *)(lVar9 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  *(undefined8 *)(*plVar10 + 0x70) = 3;
  lVar9 = *plVar10;
  FUN_710323beb0(lVar9,(ulong *)&DAT_71045455c0,(long)*(int *)(lVar9 + 0x70),
                 (ulong)*(uint *)(lVar9 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar9 = *plVar10;
  FUN_710323beb0(lVar9,(ulong *)&DAT_71045455c8,(long)*(int *)(lVar9 + 0x70),
                 (ulong)*(uint *)(lVar9 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar9 = *plVar10;
  local_f8 = (long ********)0x1dd5d06117;
  FUN_710323beb0(lVar9,&local_f8,(long)*(int *)(lVar9 + 0x70),(ulong)*(uint *)(lVar9 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  lVar9 = *plVar10;
  local_f8 = (long ********)0x22f525ad60;
  FUN_710323beb0(lVar9,&local_f8,(long)*(int *)(lVar9 + 0x70),(ulong)*(uint *)(lVar9 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  lVar9 = *plVar10;
  FUN_710323beb0(lVar9,(ulong *)&DAT_71045455d0,(long)*(int *)(lVar9 + 0x70),
                 (ulong)*(uint *)(lVar9 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar9 = *plVar10;
  local_f8 = (long ********)0x1dd5d06117;
  FUN_710323beb0(lVar9,&local_f8,(long)*(int *)(lVar9 + 0x70),(ulong)*(uint *)(lVar9 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  lVar9 = *plVar10;
  local_f8 = (long ********)0x22f525ad60;
  FUN_710323beb0(lVar9,&local_f8,(long)*(int *)(lVar9 + 0x70),(ulong)*(uint *)(lVar9 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  lVar9 = *plVar10;
  FUN_710323beb0(lVar9,(ulong *)&DAT_71045455d8,(long)*(int *)(lVar9 + 0x70),
                 (ulong)*(uint *)(lVar9 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  *(undefined8 *)(*plVar10 + 0x70) = 4;
  lVar9 = *plVar10;
  pppplVar14 = (long ****)(long)*(int *)(lVar9 + 0x70);
  ppppbVar18 = (byte ****)(ulong)*(uint *)(lVar9 + 0x68);
  pppplVar21 = (long ****)0x0;
  FUN_710323beb0(lVar9,(ulong *)&DAT_7104544df8,(long)pppplVar14,(ulong)ppppbVar18,(long ****)0x0,
                 param_6,param_7,param_8);
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x301c,pppplVar14,ppppbVar18,pppplVar21,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_158 = (long ***)((ulong)local_158 & 0xffffffff00000000);
      local_f8 = (long ********)0x301c;
      pppplVar14 = (long ****)&local_f8;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_158);
      if (((uVar7 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x301c,pppplVar14,ppppbVar18,pppplVar21,param_6,param_7,
                                  param_8), puVar8 != (undefined8 *)0x0)) goto LAB_71018ca708;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71018ca708:
  *(undefined4 *)(puVar8 + 1) = 0;
  *(undefined2 *)((long)puVar8 + 0xc) = 0;
  *(undefined8 *)((long)puVar8 + 0x100c) = 0;
  *(undefined2 *)((long)puVar8 + 0x1014) = 0;
  *(undefined8 *)((long)puVar8 + 0x2014) = 0;
  *(undefined2 *)((long)puVar8 + 0x201c) = 0;
  *puVar8 = 1;
  local_f0 = 0x5f74706f5f756e6d;
  local_e8 = 0x6279656b5f6e7462;
  local_e0 = 0x616f;
  uStack_de = 0x706c65685f64;
  uStack_d8 = 0x655f;
  uStack_d6 = 0x7265746e;
  uVar20 = 0x811c9dc5;
  uStack_d2 = 0x6e5f;
  uVar24 = 0x6d;
  lVar9 = 9;
  local_d0 = CONCAT44(local_d0._4_4_,0x656d61);
  do {
    uVar20 = uVar20 * 0x89 ^ uVar24;
    uVar24 = (uint)*(byte *)((long)&local_f8 + lVar9);
    lVar9 = lVar9 + 1;
  } while (uVar24 != 0);
  local_f8 = (long ********)CONCAT44(0x23,uVar20);
  FUN_7103391610((long)puVar8,(long)&local_f8);
  FUN_7103391f40(*(long **)(puVar6 + 0x3e6e),(undefined4 *)puVar8);
  local_a0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_f8 = (long ********)0x0;
  local_90 = (long ***)((ulong)local_90 & 0xffffffffffff0000);
  local_100 = 0;
  local_158 = (long ***)0x0;
  local_98 = (long ***)((ulong)local_98 & 0xffffffffffff0000);
  local_88 = (long ***)((ulong)local_88 & 0xffff000000000000);
  local_80 = (long ***)((ulong)local_80 & 0xffff000000000000);
  local_d0 = 0;
  local_c8 = 0;
  local_e0 = 0;
  uStack_de = 0;
  uStack_d8 = 0;
  uStack_d6 = 0;
  uStack_d2 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_110 = 0;
  local_108 = 0;
  local_120 = 0;
  local_118 = 0;
  local_130 = 0;
  local_128 = 0;
  local_140 = 0;
  local_138 = 0;
  local_150 = 0;
  local_148 = 0;
  lVar9 = *(long *)(DAT_710532f730 + 8);
  puVar13 = FUN_71032631a0(*(long *)(lVar9 + 0x168),0xedaf3c863);
  uVar7 = FUN_71032b23e0(*(long *)(*(long *)(lVar9 + 0x178) + 8),0x16d5030b51);
  lVar9 = *(long *)(DAT_710532f8b0 + 8);
  *(undefined1 **)(lVar9 + 0x148) = puVar13;
  *(undefined8 *)(lVar9 + 0x150) = 0x10000000000;
  *(undefined1 *)(lVar9 + 0x328) = 0;
  *(undefined2 *)(lVar9 + 0x168) = 0x205;
  *(undefined8 *)(lVar9 + 0x158) = 0xffffffff;
  *(undefined8 *)(lVar9 + 0x160) = 0x1000c0b0a040303;
  *(undefined1 *)(lVar9 + 0x16a) = 2;
  *(undefined4 *)(lVar9 + 0x16b) = 0x1010101;
  *(undefined8 *)(lVar9 + 0x16f) = 0xc0b0a03030404;
  *(undefined4 *)(lVar9 + 0x177) = 0x2020501;
  *(undefined4 *)(lVar9 + 0x17b) = 0x1010101;
  *(undefined2 *)(lVar9 + 0x17f) = 0xd0d;
  *(undefined4 *)(lVar9 + 0x181) = 0x20304;
  *(undefined2 *)(lVar9 + 0x185) = 0x102;
  *(undefined4 *)(lVar9 + 0x187) = 0x1010101;
  *(undefined4 *)(lVar9 + 0x18b) = 0;
  *(ulong *)(lVar9 + 0x1a7) = CONCAT62(uStack_de,local_e0);
  *(undefined8 *)(lVar9 + 0x19f) = local_e8;
  *(undefined8 *)(lVar9 + 0x197) = local_f0;
  *(long *********)(lVar9 + 399) = local_f8;
  *(undefined8 *)(lVar9 + 0x1c7) = local_c0;
  *(undefined8 *)(lVar9 + 0x1bf) = local_c8;
  *(undefined8 *)(lVar9 + 0x1b7) = local_d0;
  *(ulong *)(lVar9 + 0x1af) = CONCAT26(uStack_d2,CONCAT42(uStack_d6,uStack_d8));
  *(undefined8 *)(lVar9 + 0x1df) = local_a8;
  *(undefined1 *)(lVar9 + 0x1e7) = local_a0;
  *(undefined8 *)(lVar9 + 0x1d7) = local_b0;
  *(undefined8 *)(lVar9 + 0x1cf) = local_b8;
  *(undefined8 *)(lVar9 + 0x1e8) = 0x13ffff0000000000;
  *(undefined8 *)(lVar9 + 0x1f0) = 0x5affff0000000000;
  *(undefined2 *)(lVar9 + 0x1fc) = local_80._4_2_;
  *(undefined4 *)(lVar9 + 0x1f8) = (undefined4)local_80;
  *(undefined8 *)(lVar9 + 0x208) = 0x10000000003;
  *(undefined8 *)(lVar9 + 0x218) = 0x1000c0b0a040303;
  *(undefined2 *)(lVar9 + 0x220) = 0x205;
  *(undefined8 *)(lVar9 + 0x210) = 0xffffffff;
  *(undefined1 *)(lVar9 + 0x222) = 2;
  *(undefined1 **)(lVar9 + 0x200) = &DAT_c1ffff0000000000;
  *(undefined2 *)(lVar9 + 0x1fe) = (undefined2)local_90;
  *(undefined4 *)(lVar9 + 0x223) = 0x1010101;
  *(undefined8 *)(lVar9 + 0x227) = 0xc0b0a03030404;
  *(undefined4 *)(lVar9 + 0x22f) = 0x2020501;
  *(undefined4 *)(lVar9 + 0x233) = 0x1010101;
  *(undefined8 *)(lVar9 + 0x237) = 0x102000203040d0d;
  *(undefined4 *)(lVar9 + 0x23f) = 0x1010101;
  *(undefined4 *)(lVar9 + 0x243) = 0;
  *(undefined8 *)(lVar9 + 0x25f) = local_140;
  *(undefined8 *)(lVar9 + 599) = local_148;
  *(undefined8 *)(lVar9 + 0x24f) = local_150;
  *(long ****)(lVar9 + 0x247) = local_158;
  *(undefined8 *)(lVar9 + 0x27f) = local_120;
  *(undefined8 *)(lVar9 + 0x277) = local_128;
  *(undefined8 *)(lVar9 + 0x26f) = local_130;
  *(undefined8 *)(lVar9 + 0x267) = local_138;
  *(undefined8 *)(lVar9 + 0x297) = local_108;
  *(undefined1 *)(lVar9 + 0x29f) = local_100;
  *(undefined8 *)(lVar9 + 0x28f) = local_110;
  *(undefined8 *)(lVar9 + 0x287) = local_118;
  *(undefined8 *)(lVar9 + 0x2a0) = 0x13ffff0000000000;
  *(undefined8 *)(lVar9 + 0x2a8) = 0x5affff0000000000;
  *(undefined2 *)(lVar9 + 0x2b4) = local_88._4_2_;
  *(undefined4 *)(lVar9 + 0x2b0) = (undefined4)local_88;
  *(undefined1 *)(lVar9 + 0x2b8) = 2;
  *(undefined2 *)(lVar9 + 0x2b6) = (undefined2)local_98;
  *(undefined2 *)(lVar9 + 0x2bd) = local_78._4_2_;
  *(undefined4 *)(lVar9 + 0x2b9) = (undefined4)local_78;
  *(undefined1 *)(lVar9 + 0x2bf) = local_78._6_1_;
  *(ulong *)(lVar9 + 0x2c0) = uVar7;
  *(undefined2 *)(lVar9 + 0x2c8) = 0;
  *(undefined1 *)(lVar9 + 0x2ca) = 0;
  *(undefined8 *)(lVar9 + 0x2cc) = 0x100000100000001;
  iVar5 = *(int *)(lVar9 + 0x138);
  *(undefined1 *)(lVar9 + 0x2d4) = 1;
  *(undefined4 *)(lVar9 + 0x130) = 0;
  *(undefined8 *)(lVar9 + 8) = 0;
  *(undefined8 *)(lVar9 + 0x10) = 0;
  *(undefined4 *)(lVar9 + 0x138) = 0xffffffff;
  *(undefined8 *)(lVar9 + 0x120) = 0;
  *(undefined8 *)(lVar9 + 0x128) = 0;
  *(undefined4 *)(lVar9 + 0x13c) = 0;
  *(undefined8 *)(lVar9 + 0x110) = 0;
  *(undefined8 *)(lVar9 + 0x118) = 0;
  *(undefined4 *)(lVar9 + 0x140) = 0xffffffff;
  *(undefined1 *)(lVar9 + 0x144) = 0;
  *(undefined4 *)(lVar9 + 0x134) = 1;
  *(undefined4 *)(lVar9 + 0xe8) = 3;
  *(undefined4 *)(lVar9 + 0xec) = 1;
  *(undefined8 *)(lVar9 + 0x100) = 0;
  *(undefined8 *)(lVar9 + 0x108) = 0;
  *(undefined8 *)(lVar9 + 0xf0) = 0;
  *(undefined8 *)(lVar9 + 0xf8) = 0;
  if (iVar5 != 0) {
    *(undefined8 *)(lVar9 + 0xf0) = 0x800000009;
    *(undefined4 *)(lVar9 + 0x134) = 4;
    *(undefined4 *)(lVar9 + 0xf8) = 4;
  }
  if (puVar8 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar8);
  }
  return;
}

