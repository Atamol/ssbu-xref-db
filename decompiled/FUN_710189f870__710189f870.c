// addr:      710189f870
// offset:    0x189f870
// name:      FUN_710189f870
// mangled:   
// signature: undefined __cdecl FUN_710189f870(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710189f870(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 uVar12;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  long *********ppppppppplVar13;
  long *********ppppppppplVar14;
  long *********ppppppppplVar15;
  long *********ppppppppplVar16;
  long *********ppppppppplVar17;
  long *********ppppppppplVar18;
  long *********ppppppppplVar19;
  long ****pppplVar20;
  byte ****ppppbVar21;
  long ****pppplVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  undefined1 auVar26 [16];
  long ********local_70;
  ulong local_68;
  undefined4 local_54;
  
  ppppppppplVar14 = &local_70;
  ppppppppplVar13 = &local_70;
  ppppppppplVar15 = &local_70;
  ppppppppplVar16 = &local_70;
  ppppppppplVar17 = &local_70;
  ppppppppplVar18 = &local_70;
  ppppppppplVar19 = &local_70;
  plVar5 = (long *)FUN_710392e290(0x10,0xe0,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8);
  if (plVar5 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_70 = (long ********)&DAT_000000e0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      param_3 = ppppppppplVar14;
      if (((uVar6 & 1) != 0) &&
         (plVar5 = (long *)FUN_710392e290(0x10,0xe0,(long ****)ppppppppplVar14,param_4,param_5,
                                          param_6,param_7,param_8), param_3 = ppppppppplVar14,
         plVar5 != (long *)0x0)) goto LAB_710189f8f0;
    }
    plVar5 = (long *)0x0;
  }
LAB_710189f8f0:
  *plVar5 = (long)plVar5;
  plVar5[4] = 0;
  plVar5[1] = 0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  *(undefined4 *)(plVar5 + 0x18) = 0xffffffff;
  *(undefined1 *)((long)plVar5 + 0xc4) = 0;
  plVar5[5] = 0;
  *(undefined4 *)(plVar5 + 0x19) = 0;
  plVar5[0x16] = 0;
  plVar5[0x17] = 0xffffffff;
  plVar5[0x14] = 0;
  plVar5[0x15] = 0;
  plVar5[0x12] = 0;
  plVar5[0x13] = 0;
  plVar5[0x10] = 0;
  plVar5[0x11] = 0;
  plVar5[0xe] = 0;
  plVar5[0xf] = 0;
  plVar5[0xc] = 0;
  plVar5[0xd] = 0;
  plVar5[10] = 0;
  plVar5[0xb] = 0;
  plVar5[8] = 0;
  plVar5[9] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_70 = (long ********)&DAT_00000080;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      param_3 = ppppppppplVar13;
      if (((uVar6 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x80,(long ****)ppppppppplVar13,param_4,param_5,param_6,
                                  param_7,param_8), param_3 = ppppppppplVar13,
         puVar7 != (undefined8 *)0x0)) goto LAB_710189f990;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_710189f990:
  *puVar7 = &PTR_FUN_7105181b40;
  puVar7[2] = 0;
  puVar7[1] = puVar7 + 2;
  puVar7[5] = 0;
  puVar7[3] = 0;
  puVar7[4] = puVar7 + 5;
  puVar7[8] = 0;
  puVar7[6] = 0;
  puVar7[7] = puVar7 + 8;
  puVar7[0xb] = 0;
  puVar7[9] = 0;
  puVar7[10] = puVar7 + 0xb;
  *(undefined4 *)(puVar7 + 0xd) = 2;
  puVar7[0xc] = 0;
  *(undefined4 *)(puVar7 + 0xf) = 0;
  puVar7[0xe] = 0;
  plVar5[5] = (long)FUN_710189f540;
  plVar5[6] = 0;
  plVar5[9] = (long)FUN_710189f5e0;
  plVar5[10] = 0;
  plVar5[0x1a] = (long)puVar7;
  plVar5[0x1b] = 0;
  plVar5[0xb] = (long)FUN_710189f660;
  plVar5[0xc] = 0;
  plVar5[7] = (long)FUN_710189f550;
  plVar5[8] = 0;
  plVar5[1] = 0;
  plVar5[2] = 0;
  *(undefined8 *)((long)plVar5 + 0xac) = 0;
  *(undefined8 *)((long)plVar5 + 0xa4) = 0;
  *(undefined8 *)((long)plVar5 + 0x9c) = 0;
  *(undefined8 *)((long)plVar5 + 0x94) = 0;
  *(undefined8 *)((long)plVar5 + 0x8c) = 0;
  *(undefined8 *)((long)plVar5 + 0x84) = 0;
  *(undefined8 *)((long)plVar5 + 0x7c) = 0;
  *(undefined8 *)((long)plVar5 + 0x74) = 0;
  *(undefined8 *)((long)plVar5 + 0x6c) = 0;
  *(undefined8 *)((long)plVar5 + 0xb4) = 0xffffffff00000000;
  *(undefined8 *)((long)plVar5 + 0xbc) = 0xffffffff00000000;
  *(undefined1 *)((long)plVar5 + 0xc4) = 0;
  *(undefined4 *)(plVar5 + 0xd) = 0;
  FUN_71018a01f0(plVar5);
  uVar6 = *(ulong *)(param_1 + 0x58);
  *(long **)(param_1 + 0x58) = plVar5;
  if (uVar6 != 0) {
    lVar8 = *(long *)(uVar6 + 0xd8);
    *(undefined8 *)(uVar6 + 0xd8) = 0;
    uVar12 = extraout_x1;
    if (lVar8 != 0) {
      FUN_71032cad20(lVar8);
      uVar12 = extraout_x1_00;
    }
    FUN_710323b9e0(*(long *)(uVar6 + 0xd0),uVar12,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar5 = *(long **)(uVar6 + 0xd0);
    *(undefined8 *)(uVar6 + 0xd0) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    FUN_710392eb40(uVar6);
    plVar5 = *(long **)(param_1 + 0x58);
  }
  plVar25 = plVar5 + 0x1a;
  lVar8 = *plVar25;
  ppppppppplVar14 = (long *********)(long)*(int *)(lVar8 + 0x70);
  ppppbVar21 = (byte ****)(ulong)*(uint *)(lVar8 + 0x68);
  pppplVar22 = (long ****)0x0;
  FUN_710323beb0(lVar8,(ulong *)&DAT_7104545358,(long)ppppppppplVar14,(ulong)ppppbVar21,
                 (long ****)0x0,param_6,param_7,param_8);
  lVar8 = *plVar25;
  uVar6 = FUN_710323cb80(lVar8,extraout_x1_01,ppppppppplVar14,ppppbVar21,pppplVar22,param_6,param_7,
                         param_8);
  while ((uVar6 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar6 = FUN_710323cb80(lVar8,extraout_x1_02,ppppppppplVar14,ppppbVar21,pppplVar22,param_6,
                           param_7,param_8);
  }
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar14,ppppbVar21,pppplVar22,param_6,param_7
                          ,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_70 = (long ********)&DAT_00000088;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      ppppppppplVar14 = ppppppppplVar15;
      if (((uVar6 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar15,ppppbVar21,pppplVar22,param_6
                                  ,param_7,param_8), ppppppppplVar14 = ppppppppplVar15,
         puVar7 != (undefined8 *)0x0)) goto LAB_710189fb48;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_710189fb48:
  *puVar7 = &PTR_FUN_71050ae288;
  puVar7[1] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0x1ffffffff;
  puVar7[2] = 0;
  puVar7[3] = 0;
  *(undefined1 *)(puVar7 + 0xb) = 0;
  puVar7[0xf] = plVar25;
  *(undefined1 *)(puVar7 + 0xe) = 1;
  puVar7[9] = 0;
  puVar7[10] = 0;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x180,(long ****)ppppppppplVar14,ppppbVar21,pppplVar22,param_6,
                          param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_70 = (long ********)&DAT_00000180;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      ppppppppplVar14 = ppppppppplVar16;
      if (((uVar6 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x180,(long ****)ppppppppplVar16,ppppbVar21,pppplVar22,
                                  param_6,param_7,param_8), ppppppppplVar14 = ppppppppplVar16,
         puVar9 != (undefined8 *)0x0)) goto LAB_710189fbd0;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_710189fbd0:
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)ppppppppplVar14,ppppbVar21,pppplVar22,param_6,param_7,
                           param_8);
  uVar12 = extraout_x1_03;
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_70 = (long ********)&DAT_00000008;
      auVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      uVar12 = auVar26._8_8_;
      ppppppppplVar14 = ppppppppplVar17;
      if (((auVar26._0_8_ & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)ppppppppplVar17,ppppbVar21,pppplVar22,param_6,
                                   param_7,param_8), uVar12 = extraout_x1_04,
         ppppppppplVar14 = ppppppppplVar17, puVar10 != (undefined8 *)0x0)) goto LAB_710189fc2c;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_710189fc2c:
  FUN_7103773200(puVar10,uVar12,(long ****)ppppppppplVar14,ppppbVar21,pppplVar22,param_6,param_7,
                 param_8);
  *puVar9 = puVar10;
  puVar9[1] = puVar9;
  puVar10 = puVar9 + 0x1e;
  puVar9[3] = 0;
  puVar9[2] = 0;
  puVar9[4] = 0;
  puVar9[5] = 0;
  *(undefined4 *)(puVar9 + 0x1d) = 0xffffffff;
  *(undefined1 *)((long)puVar9 + 0xec) = 0;
  puVar9[6] = 0;
  puVar9[0x1b] = 0;
  puVar9[0x1c] = 0xffffffff;
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
  puVar9[0xb] = 0;
  puVar9[0xc] = 0;
  puVar9[9] = 0;
  puVar9[10] = 0;
  puVar9[7] = 0;
  puVar9[8] = 0;
  FUN_7103776290(puVar10,extraout_x1_05,(long ****)ppppppppplVar14,ppppbVar21,pppplVar22,param_6,
                 param_7,param_8);
  FUN_7103776290(puVar9 + 0x20,extraout_x1_06,(long ****)ppppppppplVar14,ppppbVar21,pppplVar22,
                 param_6,param_7,param_8);
  puVar9[0x22] = &PTR_FUN_710523d9a8;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,ppppbVar21,pppplVar22,param_6,
                           param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_70 = (long ********)&SUB_00000020;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      ppppppppplVar14 = ppppppppplVar18;
      if (((uVar6 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar18,ppppbVar21,pppplVar22,
                                   param_6,param_7,param_8), ppppppppplVar14 = ppppppppplVar18,
         puVar11 != (undefined8 *)0x0)) goto LAB_710189fcf8;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_710189fcf8:
  puVar11[2] = 0;
  puVar11[3] = 0;
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar9[0x23] = puVar11;
  puVar9[0x24] = &PTR_FUN_710523d9a8;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,ppppbVar21,pppplVar22,param_6,
                           param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_70 = (long ********)&SUB_00000020;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      if (((uVar6 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar19,ppppbVar21,pppplVar22,
                                   param_6,param_7,param_8), puVar11 != (undefined8 *)0x0))
      goto LAB_710189fd5c;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_710189fd5c:
  puVar11[2] = 0;
  puVar11[3] = 0;
  *puVar11 = 0;
  puVar11[1] = 0;
  ppppbVar21 = (byte ****)0x1;
  *(undefined4 *)(puVar9 + 0x27) = 1;
  *(undefined4 *)(puVar9 + 0x29) = 1;
  puVar9[0x28] = 0;
  puVar9[0x2a] = 0;
  *(undefined1 *)(puVar9 + 0x2b) = 0;
  puVar9[0x2c] = 0;
  puVar9[0x25] = puVar11;
  puVar9[0x26] = 0;
  *(undefined8 *)((long)puVar9 + 0x175) = 0;
  puVar9[0x2d] = 0;
  puVar9[0x2e] = 0;
  FUN_71032cbf30(puVar9,*plVar25,(ulong *)&DAT_7104545358,(byte ****)0x1,pppplVar22,param_6,param_7,
                 param_8);
  *(undefined4 *)(*(long *)(**(long **)*puVar9 + 0x600) + 0x14) = 0x40;
  *(undefined4 *)(*(long *)(**(long **)*puVar9 + 0x600) + 0x10) = 0x20;
  pppplVar20 = (long ****)0x15000;
  FUN_7103775dc0(*(long **)*puVar9,1,(long ****)0x15000,ppppbVar21,pppplVar22,param_6,param_7,
                 param_8);
  lVar8 = *(long *)*puVar9;
  if ((undefined8 *)(lVar8 + 8) != puVar10) {
    *(undefined8 *)puVar9[0x1f] = **(undefined8 **)(lVar8 + 0x10);
    *(undefined8 *)(puVar9[0x1f] + 8) = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 8);
    lVar23 = *(long *)(lVar8 + 0x10);
    lVar8 = puVar9[0x1f];
    if (lVar8 != lVar23) {
      **(undefined8 **)(lVar8 + 0x18) = **(undefined8 **)(lVar23 + 0x18);
      *(undefined8 *)(*(long *)(lVar8 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar23 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar8 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar23 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar8 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar23 + 0x18) + 0x18);
    }
  }
  FUN_71037780e0(&local_70,(long)puVar10,(long ****)"next_mov_fade_in",pppplVar20,ppppbVar21,
                 pppplVar22,param_6,param_7,param_8);
  FUN_710377b140((long)&local_70);
  uVar6 = local_68;
  local_70 = (long ********)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_7103776640(&local_70,(long)puVar10,(byte ****)"set_parts_lct_playbtn",pppplVar20,ppppbVar21,
                 pppplVar22,param_6,param_7,param_8);
  uVar6 = local_68;
  if (&local_70 != (long *********)(puVar9 + 0x20)) {
    local_68 = 0;
    uVar24 = puVar9[0x21];
    puVar9[0x21] = uVar6;
    if (uVar24 != 0) {
      uVar6 = *(ulong *)(uVar24 + 0x18);
      *(undefined ***)(uVar24 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar24 + 0x18) = 0;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
      FUN_710392eb40(uVar24);
    }
  }
  uVar6 = local_68;
  local_70 = (long ********)&PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar6 != 0) {
    uVar24 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar24 != 0) {
      FUN_710392eb40(uVar24);
    }
    FUN_710392eb40(uVar6);
  }
  FUN_7103778300(0x3f800000,puVar9[0x21],0x710432a87b);
  FUN_7103776910(&local_70,(long)puVar10,(long ****)"set_rep_pic_mov",pppplVar20,ppppbVar21,
                 pppplVar22,param_6,param_7,param_8);
  uVar6 = local_68;
  if (&local_70 != (long *********)(puVar9 + 0x22)) {
    local_68 = 0;
    uVar24 = puVar9[0x23];
    puVar9[0x23] = uVar6;
    if (uVar24 != 0) {
      FUN_710392eb40(uVar24);
    }
  }
  uVar6 = local_68;
  local_70 = (long ********)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_7103776910(&local_70,(long)puVar10,(long ****)"set_txt_header",pppplVar20,ppppbVar21,
                 pppplVar22,param_6,param_7,param_8);
  uVar6 = local_68;
  if (&local_70 != (long *********)(puVar9 + 0x24)) {
    local_68 = 0;
    uVar24 = puVar9[0x25];
    puVar9[0x25] = uVar6;
    if (uVar24 != 0) {
      FUN_710392eb40(uVar24);
    }
  }
  uVar6 = local_68;
  local_70 = (long ********)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  puVar9[6] = FUN_7101cc3320;
  puVar9[7] = 0;
  puVar9[8] = FUN_7101cc3330;
  puVar9[9] = 0;
  puVar9[10] = FUN_7101cc3a00;
  puVar9[0xb] = 0;
  puVar9[0xe] = FUN_7101cc4100;
  puVar9[0xf] = 0;
  puVar9[0x10] = FUN_7101cc4170;
  puVar9[0x11] = 0;
  puVar9[0xc] = FUN_7101cc40a0;
  puVar9[0xd] = 0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  *(undefined8 *)((long)puVar9 + 0xd4) = 0;
  *(undefined8 *)((long)puVar9 + 0xcc) = 0;
  *(undefined8 *)((long)puVar9 + 0xc4) = 0;
  *(undefined8 *)((long)puVar9 + 0xbc) = 0;
  *(undefined8 *)((long)puVar9 + 0xb4) = 0;
  *(undefined8 *)((long)puVar9 + 0xac) = 0;
  *(undefined8 *)((long)puVar9 + 0xa4) = 0;
  *(undefined8 *)((long)puVar9 + 0x9c) = 0;
  *(undefined8 *)((long)puVar9 + 0x94) = 0;
  *(undefined8 *)((long)puVar9 + 0xdc) = 0xffffffff00000000;
  *(undefined8 *)((long)puVar9 + 0xe4) = 0xffffffff00000000;
  *(undefined1 *)((long)puVar9 + 0xec) = 0;
  *(undefined4 *)(puVar9 + 0x12) = 0;
  FUN_7101cc4180(puVar9 + 1);
  puVar7[0x10] = puVar9;
  puVar7[2] = &DAT_7105333600;
  uVar4 = DAT_7105333664;
  *(undefined4 *)(puVar7 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar7 + 0x6c) = uVar4;
  do {
    uVar3 = DAT_7105333650;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar2) {
      DAT_7105333650 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0' || (uVar3 & 1) != 0);
  puVar7[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar7;
  FUN_71032caea0((long)puVar7,extraout_x1_07,pppplVar20,ppppbVar21,pppplVar22,param_6,param_7,
                 param_8);
  lVar8 = plVar5[0x1b];
  plVar5[0x1b] = (long)puVar7;
  if (lVar8 != 0) {
    FUN_71032cad20(lVar8);
  }
  if (*(uint *)((long)plVar5 + 0xb4) < 0x13) {
    *(undefined4 *)((long)plVar5 + (long)(int)*(uint *)((long)plVar5 + 0xb4) * 4 + 0x68) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

