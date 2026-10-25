// addr:      7101806670
// offset:    0x1806670
// name:      FUN_7101806670
// mangled:   
// signature: undefined __cdecl FUN_7101806670(long param_1)


void FUN_7101806670(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 uVar17;
  byte ****ppppbVar18;
  long *********ppppppppplVar19;
  long ****pppplVar20;
  byte ****ppppbVar21;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar22;
  code *pcVar23;
  long *plVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  byte ***local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  undefined2 local_1ac;
  undefined1 local_1aa;
  undefined1 *local_1a8;
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
  undefined **local_88;
  undefined8 *local_80;
  undefined4 local_64;
  
  plVar1 = (long *)(param_1 + 200);
  ppppbVar21 = (byte ****)0x3;
  ppppbVar18 = (byte ****)0x0;
  plVar10 = FUN_710323f330(plVar1,*(ulong *)(param_1 + 0xd8),0,3,in_x4,in_x5,in_x6,in_x7);
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)ppppbVar18,ppppbVar21,in_x4,in_x5,in_x6,in_x7);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_88 = (undefined **)((ulong)local_88 & 0xffffffff00000000);
      local_1c0 = (byte ***)&DAT_00000088;
      ppppbVar18 = &local_1c0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
      if (((uVar12 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,(long ****)ppppbVar18,ppppbVar21,in_x4,in_x5,in_x6,
                                   in_x7), puVar11 != (undefined8 *)0x0)) goto LAB_7101806710;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101806710:
  uVar12 = *(ulong *)(param_1 + 0xd8);
  uVar3 = *(undefined1 *)(param_1 + 0xec);
  *puVar11 = &PTR_FUN_71050a76e0;
  puVar11[1] = 0;
  puVar11[0xc] = 0;
  puVar11[0xd] = 0x1ffffffff;
  puVar11[2] = 0;
  puVar11[3] = 0;
  *(undefined1 *)(puVar11 + 0xb) = 0;
  puVar11[0xf] = plVar1;
  *(undefined1 *)(puVar11 + 0xe) = 1;
  puVar11[9] = 0;
  puVar11[10] = 0;
  lVar13 = FUN_710392e290(0x10,0x100,(long ****)ppppbVar18,ppppbVar21,in_x4,in_x5,in_x6,in_x7);
  if (lVar13 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_88 = (undefined **)((ulong)local_88 & 0xffffffff00000000);
      local_1c0 = (byte ***)&DAT_00000100;
      ppppbVar18 = &local_1c0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
      if (((uVar14 & 1) != 0) &&
         (lVar13 = FUN_710392e290(0x10,0x100,(long ****)ppppbVar18,ppppbVar21,in_x4,in_x5,in_x6,
                                  in_x7), lVar13 != 0)) goto LAB_71018067a0;
    }
    lVar13 = 0;
  }
LAB_71018067a0:
  *(undefined8 *)(lVar13 + 0x10) = 0;
  *(undefined8 *)(lVar13 + 0x18) = 0;
  *(undefined4 *)(lVar13 + 0xd0) = 0xffffffff;
  *(long *)lVar13 = lVar13;
  *(undefined8 *)(lVar13 + 8) = 0;
  *(undefined1 *)(lVar13 + 0xd4) = 0;
  *(undefined8 *)(lVar13 + 0xc0) = 0;
  *(undefined8 *)(lVar13 + 200) = 0xffffffff;
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
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)ppppbVar18,ppppbVar21,in_x4,in_x5,in_x6,in_x7);
  uVar17 = extraout_x1;
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_88 = (undefined **)((ulong)local_88 & 0xffffffff00000000);
      local_1c0 = (byte ***)&DAT_00000008;
      ppppbVar18 = &local_1c0;
      auVar28 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
      uVar17 = auVar28._8_8_;
      if (((auVar28._0_8_ & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)ppppbVar18,ppppbVar21,in_x4,in_x5,in_x6,in_x7),
         uVar17 = extraout_x1_00, puVar15 != (undefined8 *)0x0)) goto LAB_710180683c;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_710180683c:
  FUN_7103773200(puVar15,uVar17,(long ****)ppppbVar18,ppppbVar21,in_x4,in_x5,in_x6,in_x7);
  puVar2 = (undefined8 *)(lVar13 + 0xe0);
  *(undefined8 **)(lVar13 + 0xd8) = puVar15;
  FUN_7103776290(puVar2,extraout_x1_01,(long ****)ppppbVar18,ppppbVar21,in_x4,in_x5,in_x6,in_x7);
  plVar24 = (long *)(lVar13 + 0xf0);
  *plVar24 = 0;
  fVar25 = (float)FUN_71033112b0(0,*(long *)(DAT_710532f8c0 + 8),0x1291d060dd);
  *(int *)(lVar13 + 0xf8) = (int)fVar25;
  *(code **)(lVar13 + 0x38) = FUN_71019bd740;
  *(undefined8 *)(lVar13 + 0x40) = 0;
  *(undefined1 *)(lVar13 + 0xfc) = 0;
  *(code **)(lVar13 + 0x28) = FUN_71019bd730;
  *(undefined8 *)(lVar13 + 0x30) = 0;
  *(code **)(lVar13 + 0x48) = FUN_71019bda20;
  *(undefined8 *)(lVar13 + 0x50) = 0;
  *(code **)(lVar13 + 0x58) = FUN_71019bdac0;
  *(undefined8 *)(lVar13 + 0x60) = 0;
  *(code **)(lVar13 + 0x68) = FUN_71019bd730;
  *(undefined8 *)(lVar13 + 0x70) = 0;
  if (0x12 < *(uint *)(lVar13 + 0xc4)) goto LAB_7101806ddc;
  *(undefined4 *)(lVar13 + (long)(int)*(uint *)(lVar13 + 0xc4) * 4 + 0x78) = 0;
  puVar11[0x10] = lVar13;
  *(undefined1 *)(lVar13 + 0xfc) = uVar3;
  puVar15 = (undefined8 *)(lVar13 + 0xd8);
  ppppppppplVar19 = (long *********)&DAT_71045439e8;
  ppppbVar18 = (byte ****)0x1;
  FUN_71032cbf30(puVar15,*plVar1,(ulong *)&DAT_71045439e8,(byte ****)0x1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037760f0(*(long *)**(undefined8 **)(lVar13 + 0xd8),0);
  lVar22 = **(long **)(lVar13 + 0xd8);
  if ((undefined8 *)(lVar22 + 8) != puVar2) {
    **(undefined8 **)(lVar13 + 0xe8) = **(undefined8 **)(lVar22 + 0x10);
    *(undefined8 *)(*(long *)(lVar13 + 0xe8) + 8) = *(undefined8 *)(*(long *)(lVar22 + 0x10) + 8);
    lVar22 = *(long *)(lVar22 + 0x10);
    lVar13 = *(long *)(lVar13 + 0xe8);
    if (lVar13 != lVar22) {
      **(undefined8 **)(lVar13 + 0x18) = **(undefined8 **)(lVar22 + 0x18);
      *(undefined8 *)(*(long *)(lVar13 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar22 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar13 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar22 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar13 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar22 + 0x18) + 0x18);
    }
  }
  FUN_7103776910(&local_88,(long)puVar2,(long ****)"set_rep_chara",ppppppppplVar19,ppppbVar18,in_x4,
                 in_x5,in_x6,in_x7);
  puVar7 = local_80;
  FUN_7103778b80((long)local_80,(long)plVar10,ppppppppplVar19,ppppbVar18,in_x4,in_x5,in_x6,in_x7);
  lVar13 = *(long *)(DAT_710532f730 + 8);
  uVar9 = FUN_7103280ec0(*(long *)(lVar13 + 0x2a8),uVar12,0,ppppbVar18,in_x4,in_x5,in_x6,in_x7);
  uVar12 = 0;
  lVar13 = *(long *)(*(long *)(lVar13 + 0x2a8) + 8);
  auVar26 = FUN_710326ad60(ZEXT816(0),lVar13,uVar9,0x120debead3);
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar12;
  auVar28 = FUN_710326ad60(auVar28 << 0x40,lVar13,uVar9,0x127aecda45);
  pppplVar20 = (long ****)0xf8abff452;
  auVar27 = FUN_710326ad60(ZEXT816(0x3f800000),lVar13,uVar9,0xf8abff452);
  puVar16 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar18,in_x4,in_x5,in_x6,in_x7);
  if (puVar16 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar21 = &local_1c0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar12 & 1) != 0) &&
         (puVar16 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar21,ppppbVar18,in_x4,in_x5,in_x6,
                                   in_x7), puVar16 != (undefined8 *)0x0)) goto LAB_7101806a98;
    }
    puVar16 = (undefined8 *)0x0;
  }
LAB_7101806a98:
  puVar8 = local_80;
  puVar16[2] = 0;
  puVar16[3] = 0;
  *puVar16 = 0;
  puVar16[1] = 0;
  *puVar16 = *puVar7;
  puVar16[1] = puVar7[1];
  local_1c0 = (byte ***)CONCAT44(auVar28._0_4_,auVar26._0_4_);
  puVar16[2] = local_80[2];
  puVar16[3] = local_80[3];
  uStack_1b8 = 0;
  FUN_7103779770(auVar27._0_4_,(long)puVar16,&local_1c0);
  if (puVar16 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar16);
  }
  local_88 = &PTR_FUN_710523d9a8;
  local_80 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar8);
  }
  lVar13 = **(long **)*puVar15;
  memset(*(void **)(lVar13 + 0x600),0,0x198);
  *(undefined4 *)(*(long *)(lVar13 + 0x600) + 0x10) = 0xf0;
  local_1c0 = (byte ***)0x0;
  uStack_1b8 = 0x101;
  local_1b0 = 1;
  local_1ac = 1;
  local_1aa = 1;
  local_170 = (long *)0x0;
  local_140 = (long *)0x0;
  local_110 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_1a8 = &DAT_41f0000000000000;
  local_1a0 = 0;
  local_b0 = (long *)0x0;
  local_a0 = 0;
  FUN_710337df20((long)&local_1c0);
  ppppbVar18 = &local_1c0;
  FUN_7103770b30(plVar24,puVar2,(long ****)"selector",ppppbVar18,in_x4,in_x5,in_x6,in_x7);
  FUN_71037717d0(plVar24,0,"btn_press_any",ppppbVar18,in_x4,in_x5,in_x6,in_x7);
  ppppbVar18 = (byte ****)0x0;
  FUN_7103771930(*plVar24,0,(long ****)&DAT_00000004,(byte ****)0x0,in_x4,in_x5,in_x6,in_x7);
  (**(code **)(*(long *)*plVar24 + 0x70))((long *)*plVar24,1);
  FUN_7103771a80(plVar24,0,0);
  pppplVar20 = (long ****)&DAT_00001000;
  FUN_7103775dc0(*(long **)*puVar15,0,(long ****)&DAT_00001000,ppppbVar18,in_x4,in_x5,in_x6,in_x7);
  if (alStack_d0 == local_b0) {
    pcVar23 = *(code **)(*local_b0 + 0x20);
LAB_7101806c2c:
    (*pcVar23)();
    uVar17 = extraout_x1_03;
  }
  else {
    uVar17 = extraout_x1_02;
    if (local_b0 != (long *)0x0) {
      pcVar23 = *(code **)(*local_b0 + 0x28);
      goto LAB_7101806c2c;
    }
  }
  if (alStack_100 == local_e0) {
    pcVar23 = *(code **)(*local_e0 + 0x20);
LAB_7101806c5c:
    (*pcVar23)();
    uVar17 = extraout_x1_04;
  }
  else if (local_e0 != (long *)0x0) {
    pcVar23 = *(code **)(*local_e0 + 0x28);
    goto LAB_7101806c5c;
  }
  if (alStack_130 == local_110) {
    pcVar23 = *(code **)(*local_110 + 0x20);
LAB_7101806c8c:
    (*pcVar23)();
    uVar17 = extraout_x1_05;
  }
  else if (local_110 != (long *)0x0) {
    pcVar23 = *(code **)(*local_110 + 0x28);
    goto LAB_7101806c8c;
  }
  if (alStack_160 == local_140) {
    pcVar23 = *(code **)(*local_140 + 0x20);
LAB_7101806cbc:
    (*pcVar23)();
    uVar17 = extraout_x1_06;
  }
  else if (local_140 != (long *)0x0) {
    pcVar23 = *(code **)(*local_140 + 0x28);
    goto LAB_7101806cbc;
  }
  if (alStack_190 == local_170) {
    pcVar23 = *(code **)(*local_170 + 0x20);
LAB_7101806cec:
    (*pcVar23)();
    uVar17 = extraout_x1_07;
  }
  else if (local_170 != (long *)0x0) {
    pcVar23 = *(code **)(*local_170 + 0x28);
    goto LAB_7101806cec;
  }
  puVar11[2] = &DAT_7105333600;
  uVar6 = DAT_7105333664;
  *(undefined4 *)(puVar11 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar11 + 0x6c) = uVar6;
  do {
    uVar9 = DAT_7105333650;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar5) {
      DAT_7105333650 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0' || (uVar9 & 1) != 0);
  puVar11[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar11;
  FUN_71032caea0((long)puVar11,uVar17,pppplVar20,ppppbVar18,in_x4,in_x5,in_x6,in_x7);
  lVar13 = *(long *)(param_1 + 0xd0);
  *(undefined8 **)(param_1 + 0xd0) = puVar11;
  if (lVar13 != 0) {
    FUN_71032cad20(lVar13);
    puVar11 = *(undefined8 **)(param_1 + 0xd0);
  }
  *(undefined1 *)(puVar11 + 0xe) = 1;
  if (*(char *)(param_1 + 0xe0) != '\0') {
    FUN_7103311d60();
    if (*(uint *)(param_1 + 0xe8) != 0xffffffff) {
      FUN_7103311ae0(DAT_710532f8c8,*(uint *)(param_1 + 0xe8),pppplVar20,ppppbVar18,in_x4,in_x5,
                     in_x6,in_x7);
    }
    if (*(uint *)(param_1 + 0xe4) != 0xffffffff) {
      FUN_7103311ae0(DAT_710532f8c8,*(uint *)(param_1 + 0xe4),pppplVar20,ppppbVar18,in_x4,in_x5,
                     in_x6,in_x7);
    }
  }
  if (*(uint *)(param_1 + 0xb4) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xb4) * 4 + 0x68) = 2;
    return;
  }
LAB_7101806ddc:
                    /* WARNING: Subroutine does not return */
  abort();
}

