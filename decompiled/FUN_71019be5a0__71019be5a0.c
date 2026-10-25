// addr:      71019be5a0
// offset:    0x19be5a0
// name:      FUN_71019be5a0
// mangled:   
// signature: undefined __cdecl FUN_71019be5a0(undefined8 * param_1, long * param_2, byte * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71019be5a0(undefined8 *param_1,long *param_2,byte ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined **ppuVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined *puVar12;
  long *********ppppppppplVar13;
  long ****pppplVar14;
  byte ****ppppbVar15;
  ulong *puVar16;
  undefined8 uVar17;
  byte ****ppppbVar18;
  long lVar19;
  long *plVar20;
  code *pcVar21;
  undefined ***pppuVar22;
  long lVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  long *plVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined **local_268;
  long *local_260;
  undefined **local_220;
  undefined **local_218;
  undefined8 uStack_210;
  undefined **local_208;
  long *local_200 [8];
  byte ***local_1c0;
  ulong uStack_1b8;
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
  undefined **local_90;
  long *local_88;
  
  *param_1 = &PTR_FUN_71050a7750;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x1ffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xf] = param_2;
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  ppppbVar18 = param_3;
  lVar7 = FUN_710392e290(0x10,0x100,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (lVar7 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_208 = (undefined **)((ulong)local_208 & 0xffffffff00000000);
      local_1c0 = (byte ***)&DAT_00000100;
      ppppbVar18 = &local_1c0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_208);
      if (((uVar8 & 1) != 0) &&
         (lVar7 = FUN_710392e290(0x10,0x100,(long ****)ppppbVar18,param_4,param_5,param_6,param_7,
                                 param_8), lVar7 != 0)) goto LAB_71019be658;
    }
    lVar7 = 0;
  }
LAB_71019be658:
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
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,8,(long ****)ppppbVar18,param_4,param_5,param_6,param_7,param_8);
  uVar17 = extraout_x1;
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_208 = (undefined **)((ulong)local_208 & 0xffffffff00000000);
      local_1c0 = (byte ***)&DAT_00000008;
      ppppbVar18 = &local_1c0;
      auVar30 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_208);
      uVar17 = auVar30._8_8_;
      if (((auVar30._0_8_ & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,8,(long ****)ppppbVar18,param_4,param_5,param_6,param_7,
                                  param_8), uVar17 = extraout_x1_00, puVar9 != (undefined8 *)0x0))
      goto LAB_71019be6f0;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71019be6f0:
  FUN_7103773200(puVar9,uVar17,(long ****)ppppbVar18,param_4,param_5,param_6,param_7,param_8);
  puVar1 = (undefined8 *)(lVar7 + 0xd0);
  *(undefined8 **)(lVar7 + 200) = puVar9;
  FUN_7103776290(puVar1,extraout_x1_01,(long ****)ppppbVar18,param_4,param_5,param_6,param_7,param_8
                );
  pppuVar22 = (undefined ***)(lVar7 + 0xe0);
  *pppuVar22 = &PTR_FUN_710523d9a8;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x20,(long ****)ppppbVar18,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_208 = (undefined **)((ulong)local_208 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar18 = &local_1c0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_208);
      if (((uVar8 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,(long ****)ppppbVar18,param_4,param_5,param_6,param_7,
                                  param_8), puVar9 != (undefined8 *)0x0)) goto LAB_71019be770;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71019be770:
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  plVar26 = (long *)(lVar7 + 0xf0);
  *plVar26 = 0;
  *(undefined8 **)(lVar7 + 0xe8) = puVar9;
  fVar27 = (float)FUN_71033112b0(0,*(long *)(DAT_710532f8c0 + 8),0x12e6d7504b);
  *(code **)(lVar7 + 0x28) = FUN_71019be170;
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(code **)(lVar7 + 0x48) = FUN_71019be170;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  *(code **)(lVar7 + 0x38) = FUN_71019be180;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(code **)(lVar7 + 0x58) = FUN_71019be500;
  *(undefined8 *)(lVar7 + 0x60) = 0;
  *(int *)(lVar7 + 0xf8) = (int)fVar27;
  if (0x12 < *(uint *)(lVar7 + 0xb4)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(lVar7 + (long)(int)*(uint *)(lVar7 + 0xb4) * 4 + 0x68) = 0;
  param_1[0x10] = lVar7;
  puVar12 = &DAT_71045439f8;
  uVar17 = 1;
  FUN_71032cbf30((undefined8 *)(lVar7 + 200),*param_2,(ulong *)&DAT_71045439f8,(byte ****)0x1,
                 param_5,param_6,param_7,param_8);
  lVar19 = **(long **)(lVar7 + 200);
  if ((undefined8 *)(lVar19 + 8) != puVar1) {
    **(undefined8 **)(lVar7 + 0xd8) = **(undefined8 **)(lVar19 + 0x10);
    *(undefined8 *)(*(long *)(lVar7 + 0xd8) + 8) = *(undefined8 *)(*(long *)(lVar19 + 0x10) + 8);
    lVar23 = *(long *)(lVar19 + 0x10);
    lVar19 = *(long *)(lVar7 + 0xd8);
    if (lVar19 != lVar23) {
      **(undefined8 **)(lVar19 + 0x18) = **(undefined8 **)(lVar23 + 0x18);
      *(undefined8 *)(*(long *)(lVar19 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar23 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar19 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar23 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar19 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar23 + 0x18) + 0x18);
    }
  }
  FUN_7103776910(&local_208,(long)puVar1,(long ****)"set_rep_chara",puVar12,uVar17,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_268,(long)puVar1,(long ****)"set_rep_miifighter",puVar12,uVar17,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_220,(long)puVar1,(long ****)"set_rep_miiswordsman",puVar12,uVar17,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_90,(long)puVar1,(long ****)"set_rep_miigunner",puVar12,uVar17,param_5,
                 param_6,param_7,param_8);
  plVar4 = local_88;
  plVar3 = local_200[0];
  ppuVar11 = local_218;
  plVar20 = local_260;
  lVar19 = *local_200[0];
  if (lVar19 != 0) {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
  }
  lVar19 = *local_260;
  if (lVar19 != 0) {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
  }
  lVar19 = (long)*local_218;
  if (lVar19 != 0) {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
  }
  lVar19 = *local_88;
  if (lVar19 != 0) {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
  }
  lVar19 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
  puVar10 = FUN_71032631a0(lVar19,0x13fdfdfb2b);
  if ((((ulong)param_3 & 0xff00000000000000) == 0xc100000000000000) &&
     (((ulong)param_3 & 0xffffffffff) != 0)) {
    if (((((ulong)puVar10 & 0xff00000000000000) == 0xc100000000000000) &&
        (((ulong)puVar10 & 0xffffffffff) != 0)) &&
       ((((ulong)puVar10 ^ (ulong)param_3) & 0xffffffffff) == 0)) {
LAB_71019bea84:
      if (&local_268 != pppuVar22) {
        **(long **)(lVar7 + 0xe8) = *plVar20;
        *(long *)(*(long *)(lVar7 + 0xe8) + 8) = local_260[1];
        ppuVar11 = (undefined **)local_260;
LAB_71019beaf8:
        *(undefined **)(*(long *)(lVar7 + 0xe8) + 0x10) = ppuVar11[2];
        lVar19 = (long)ppuVar11[3];
        lVar23 = *(long *)(lVar7 + 0xe8);
        goto LAB_71019beba0;
      }
    }
    else {
      puVar10 = FUN_71032631a0(lVar19,0x15d7061f77);
      if (((((ulong)puVar10 & 0xff00000000000000) == 0xc100000000000000) &&
          (((ulong)puVar10 & 0xffffffffff) != 0)) &&
         ((((ulong)puVar10 ^ (ulong)param_3) & 0xffffffffff) == 0)) {
LAB_71019beac0:
        if (&local_220 != pppuVar22) {
          **(long **)(lVar7 + 0xe8) = (long)*ppuVar11;
          *(undefined **)(*(long *)(lVar7 + 0xe8) + 8) = local_218[1];
          ppuVar11 = local_218;
          goto LAB_71019beaf8;
        }
      }
      else {
        puVar10 = FUN_71032631a0(lVar19,0x1257ab1d87);
        if (((((ulong)puVar10 & 0xff00000000000000) != 0xc100000000000000) ||
            (((ulong)puVar10 & 0xffffffffff) == 0)) ||
           ((((ulong)puVar10 ^ (ulong)param_3) & 0xffffffffff) != 0)) goto LAB_71019beb18;
LAB_71019beb58:
        if (pppuVar22 != &local_90) {
          **(long **)(lVar7 + 0xe8) = *plVar4;
          *(long *)(*(long *)(lVar7 + 0xe8) + 8) = local_88[1];
          plVar20 = local_88;
          goto LAB_71019beb8c;
        }
      }
    }
  }
  else {
    if ((((ulong)puVar10 & 0xff00000000000000) != 0xc100000000000000) ||
       (((ulong)puVar10 & 0xffffffffff) == 0)) goto LAB_71019bea84;
    puVar10 = FUN_71032631a0(lVar19,0x15d7061f77);
    if ((((ulong)puVar10 & 0xff00000000000000) != 0xc100000000000000) ||
       (((ulong)puVar10 & 0xffffffffff) == 0)) goto LAB_71019beac0;
    puVar10 = FUN_71032631a0(lVar19,0x1257ab1d87);
    if ((((ulong)puVar10 & 0xff00000000000000) != 0xc100000000000000) ||
       (((ulong)puVar10 & 0xffffffffff) == 0)) goto LAB_71019beb58;
LAB_71019beb18:
    if (pppuVar22 == &local_208) goto LAB_71019beba4;
    **(long **)(lVar7 + 0xe8) = *plVar3;
    *(long *)(*(long *)(lVar7 + 0xe8) + 8) = local_200[0][1];
    plVar20 = local_200[0];
LAB_71019beb8c:
    *(long *)(*(long *)(lVar7 + 0xe8) + 0x10) = plVar20[2];
    lVar19 = plVar20[3];
    lVar23 = *(long *)(lVar7 + 0xe8);
LAB_71019beba0:
    *(long *)(lVar23 + 0x18) = lVar19;
  }
LAB_71019beba4:
  lVar19 = **(long **)(lVar7 + 0xe8);
  if (lVar19 != 0) {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) | 1;
  }
  lVar19 = *(long *)**(undefined8 **)(lVar7 + 200);
  memset(*(void **)(lVar19 + 0x600),0,0x198);
  *(undefined4 *)(*(long *)(lVar19 + 0x600) + 0x10) = 0xf0;
  *(undefined1 *)(*(long *)(lVar19 + 0x600) + 0x4aa) = 0;
  local_1c0 = (byte ***)0x0;
  uStack_1b8 = 0x101;
  local_1b0 = 1;
  local_1ac = 1;
  local_1aa = 1;
  local_1a8 = &DAT_41f0000000000000;
  local_1a0 = 0;
  local_170 = (long *)0x0;
  local_140 = (long *)0x0;
  local_110 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_b0 = (long *)0x0;
  local_a0 = 0;
  FUN_710337df20((long)&local_1c0);
  ppppbVar18 = &local_1c0;
  FUN_7103770b30(plVar26,puVar1,(long ****)"selector",ppppbVar18,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar26,0,"btn_press_any",ppppbVar18,param_5,param_6,param_7,param_8);
  FUN_7103771930(*plVar26,0,(long ****)&DAT_00000004,(byte ****)0x0,param_5,param_6,param_7,param_8)
  ;
  (**(code **)(*(long *)*plVar26 + 0x60))((long *)*plVar26,1);
  (**(code **)(*(long *)*plVar26 + 0x70))((long *)*plVar26,1);
  FUN_7103771a80(plVar26,0,1);
  if (alStack_d0 == local_b0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  else if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x28))();
  }
  if (alStack_100 == local_e0) {
    pcVar21 = *(code **)(*local_e0 + 0x20);
LAB_71019bed2c:
    (*pcVar21)();
  }
  else if (local_e0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_e0 + 0x28);
    goto LAB_71019bed2c;
  }
  if (alStack_130 == local_110) {
    pcVar21 = *(code **)(*local_110 + 0x20);
LAB_71019bed5c:
    (*pcVar21)();
  }
  else if (local_110 != (long *)0x0) {
    pcVar21 = *(code **)(*local_110 + 0x28);
    goto LAB_71019bed5c;
  }
  if (alStack_160 == local_140) {
    pcVar21 = *(code **)(*local_140 + 0x20);
LAB_71019bed8c:
    (*pcVar21)();
  }
  else if (local_140 != (long *)0x0) {
    pcVar21 = *(code **)(*local_140 + 0x28);
    goto LAB_71019bed8c;
  }
  if (alStack_190 == local_170) {
    pcVar21 = *(code **)(*local_170 + 0x20);
  }
  else {
    if (local_170 == (long *)0x0) goto LAB_71019bedc0;
    pcVar21 = *(code **)(*local_170 + 0x28);
  }
  (*pcVar21)();
LAB_71019bedc0:
  plVar26 = local_88;
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = (long *)0x0;
  if (plVar26 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar26);
  }
  ppuVar11 = local_218;
  local_220 = &PTR_FUN_710523d9a8;
  local_218 = (undefined **)0x0;
  if (ppuVar11 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar11);
  }
  plVar26 = local_260;
  local_268 = &PTR_FUN_710523d9a8;
  local_260 = (long *)0x0;
  if (plVar26 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar26);
  }
  plVar26 = local_200[0];
  local_208 = &PTR_FUN_710523d9a8;
  local_200[0] = (long *)0x0;
  if (plVar26 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar26);
  }
  ppppbVar18 = (byte ****)0x3;
  ppppppppplVar13 = (long *********)0x0;
  plVar26 = FUN_710323f330(param_2,(ulong)param_3,0,3,param_5,param_6,param_7,param_8);
  FUN_7103778b80(*(long *)(lVar7 + 0xe8),(long)plVar26,ppppppppplVar13,ppppbVar18,param_5,param_6,
                 param_7,param_8);
  lVar7 = *(long *)(DAT_710532f730 + 8);
  uVar6 = FUN_7103280ec0(*(long *)(lVar7 + 0x2a8),(ulong)param_3,0,ppppbVar18,param_5,param_6,
                         param_7,param_8);
  uVar8 = 0;
  lVar7 = *(long *)(*(long *)(lVar7 + 0x2a8) + 8);
  auVar28 = FUN_710326ad60(ZEXT816(0),lVar7,uVar6,0x12e22981ed);
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar8;
  auVar30 = FUN_710326ad60(auVar30 << 0x40,lVar7,uVar6,0x12952eb17b);
  pppplVar14 = (long ****)0xf2cc8ffe6;
  auVar29 = FUN_710326ad60(ZEXT816(0x3f800000),lVar7,uVar6,0xf2cc8ffe6);
  FUN_7103778ab0(&local_90,pppuVar22,pppplVar14,ppppbVar18,param_5,param_6,param_7,param_8);
  local_1c0 = (byte ***)CONCAT44(auVar30._0_4_,auVar28._0_4_);
  uStack_1b8 = 0;
  FUN_7103779770(auVar29._0_4_,(long)local_88,&local_1c0);
  plVar26 = local_88;
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = (long *)0x0;
  if (plVar26 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar26);
  }
  ppppbVar15 = param_3;
  FUN_7103262310((uint *)&local_1c0,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),(ulong)param_3)
  ;
  FUN_71003a4ca0((uint *)&local_208,"mnu_challengers_join_00_%s",&uStack_1b8,ppppbVar15,ppppbVar18,
                 param_5,param_6,param_7,param_8);
  local_220 = (undefined **)0x0;
  local_218 = (undefined **)0x0;
  uStack_210 = 0;
  bVar5 = FUN_71037a4570((long *)*DAT_710593bc60,(byte *)local_200);
  if (bVar5) {
    FUN_71037a7e90((ulong *)&local_220,(byte *)local_200,(long ****)ppppbVar15,ppppbVar18,param_5,
                   param_6,param_7,param_8);
    ppuVar11 = local_218;
    ppuVar24 = local_220;
    if (1 < (ulong)(((long)local_218 - (long)local_220 >> 4) * -0x3333333333333333)) {
      FUN_7103776910(&local_1c0,(long)puVar1,(long ****)"set_txt_appear_00",ppppbVar15,ppppbVar18,
                     param_5,param_6,param_7,param_8);
      uVar8 = uStack_1b8;
      if (*(long **)(uStack_1b8 + 0x10) != (long *)0x0) {
        ppppbVar15 = (byte ****)&DAT_ffffffff;
        ppppbVar18 = (byte ****)0x1;
        FUN_71037a2270(*(long **)(uStack_1b8 + 0x10),(ushort *)local_220[8],0xffffffff,1);
      }
      local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
      uStack_1b8 = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_7103776910(&local_1c0,(long)puVar1,(long ****)"set_txt_appear_01",ppppbVar15,ppppbVar18,
                     param_5,param_6,param_7,param_8);
      uVar8 = uStack_1b8;
      if (*(long **)(uStack_1b8 + 0x10) != (long *)0x0) {
        ppppbVar18 = (byte ****)0x1;
        FUN_71037a2270(*(long **)(uStack_1b8 + 0x10),(ushort *)local_220[0x12],0xffffffff,1);
      }
      local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
      uStack_1b8 = 0;
      ppuVar11 = local_218;
      ppuVar24 = local_220;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
        ppuVar11 = local_218;
        ppuVar24 = local_220;
      }
    }
  }
  else {
    ppuVar11 = (undefined **)0x0;
    ppuVar24 = (undefined **)0x0;
  }
  if ((ulong)(((long)ppuVar11 - (long)ppuVar24 >> 4) * -0x3333333333333333) < 2) {
    lVar7 = *(long *)(DAT_710532f730 + 8);
    uVar6 = FUN_7103263540(*(long *)(lVar7 + 0x168),(ulong)param_3,0,ppppbVar18,param_5,param_6,
                           param_7,param_8);
    FUN_7103262310((uint *)&local_1c0,*(long *)(lVar7 + 0x168),(ulong)param_3);
    puVar16 = &uStack_1b8;
    FUN_71003a4ca0((uint *)&local_268,"nam_chr0_%02d_%s",(ulong)uVar6,puVar16,ppppbVar18,param_5,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_1c0,(long)puVar1,(long ****)"set_txt_appear_00",puVar16,ppppbVar18,param_5
                   ,param_6,param_7,param_8);
    FUN_710377a310((long)&local_1c0,1);
    uVar8 = uStack_1b8;
    local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
    uStack_1b8 = 0;
    ppuVar24 = local_220;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
      ppuVar24 = local_220;
    }
  }
  ppuVar11 = ppuVar24;
  ppuVar2 = local_218;
  if (ppuVar24 != (undefined **)0x0) {
    while (ppuVar2 != ppuVar24) {
      ppuVar11 = (undefined **)ppuVar2[-2];
      ppuVar25 = ppuVar2 + -10;
      if (ppuVar25 != ppuVar11 && ppuVar11 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar11);
      }
      *(undefined2 *)(ppuVar2 + -10) = 0;
      ppuVar2[-2] = (undefined *)ppuVar25;
      *(undefined4 *)(ppuVar2 + -1) = 0;
      ppuVar11 = local_220;
      ppuVar2 = ppuVar25;
    }
    if (ppuVar11 != (undefined **)0x0) {
      local_218 = ppuVar24;
      FUN_710392eb40((ulong)ppuVar11);
    }
  }
  *(undefined1 *)(param_1 + 0xe) = 1;
  return;
}

