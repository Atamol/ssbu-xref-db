// addr:      71018cc350
// offset:    0x18cc350
// name:      FUN_71018cc350
// mangled:   
// signature: undefined __cdecl FUN_71018cc350(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71018cc350(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  long ********pppppppplVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long ****pppplVar12;
  long ***ppplVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 uVar14;
  long *********ppppppppplVar15;
  undefined **ppuVar16;
  long ****pppplVar17;
  long ****pppplVar18;
  byte ****ppppbVar19;
  long ****pppplVar20;
  long *****ppppplVar21;
  undefined8 uVar22;
  long ******pppppplVar23;
  long *******ppppppplVar24;
  undefined1 auVar25 [16];
  undefined8 local_60;
  undefined8 local_58;
  long ***local_50;
  undefined4 local_44;
  long ********local_38;
  
  pppplVar18 = (long ****)&local_60;
  lVar6 = FUN_710392e290(0x10,0x118,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (lVar6 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_50 = (long ***)((ulong)local_50 & 0xffffffff00000000);
      local_38 = (long ********)&DAT_00000118;
      param_3 = &local_38;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_50);
      if (((uVar7 & 1) != 0) &&
         (lVar6 = FUN_710392e290(0x10,0x118,(long ****)param_3,param_4,param_5,param_6,param_7,
                                 param_8), lVar6 != 0)) goto LAB_71018cc3c8;
    }
    lVar6 = 0;
  }
LAB_71018cc3c8:
  *(undefined8 *)(lVar6 + 0x10) = 0;
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined4 *)(lVar6 + 0xe0) = 0xffffffff;
  *(long *)lVar6 = lVar6;
  *(undefined8 *)(lVar6 + 8) = 0;
  *(undefined1 *)(lVar6 + 0xe4) = 0;
  *(undefined8 *)(lVar6 + 0xd0) = 0;
  *(undefined8 *)(lVar6 + 0xd8) = 0xffffffff;
  *(undefined8 *)(lVar6 + 0xc0) = 0;
  *(undefined8 *)(lVar6 + 200) = 0;
  *(undefined8 *)(lVar6 + 0xb0) = 0;
  *(undefined8 *)(lVar6 + 0xb8) = 0;
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
  uVar14 = extraout_x1;
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_50 = (long ***)((ulong)local_50 & 0xffffffff00000000);
      local_38 = (long ********)&DAT_00000080;
      param_3 = &local_38;
      auVar25 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_50);
      uVar14 = auVar25._8_8_;
      if (((auVar25._0_8_ & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), uVar14 = extraout_x1_00, puVar8 != (undefined8 *)0x0))
      goto LAB_71018cc460;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71018cc460:
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
  *(undefined8 **)(lVar6 + 0xe8) = puVar8;
  *(undefined8 *)(lVar6 + 0xf0) = 0;
  lVar10 = DAT_710532f840;
  *(undefined8 *)(lVar6 + 0xf8) = *(undefined8 *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
  uVar22 = *(undefined8 *)(*(long *)(lVar10 + 8) + 0xc0);
  *(code **)(lVar6 + 0x28) = FUN_71018cad20;
  *(undefined8 *)(lVar6 + 0x30) = 0;
  *(undefined8 *)(lVar6 + 0x100) = uVar22;
  *(undefined8 *)(lVar6 + 0x108) = 0;
  *(undefined8 *)(lVar6 + 0x110) = 0;
  *(code **)(lVar6 + 0x38) = FUN_71018cbc90;
  *(undefined8 *)(lVar6 + 0x40) = 0;
  *(code **)(lVar6 + 0x48) = FUN_71018cbfb0;
  *(undefined8 *)(lVar6 + 0x50) = 0;
  *(code **)(lVar6 + 0x58) = FUN_71018cc070;
  *(undefined8 *)(lVar6 + 0x60) = 0;
  *(code **)(lVar6 + 0x68) = FUN_71018cc1b0;
  *(undefined8 *)(lVar6 + 0x70) = 0;
  *(code **)(lVar6 + 0x78) = FUN_71018cc260;
  *(undefined8 *)(lVar6 + 0x80) = 0;
  if (0x12 < *(uint *)(lVar6 + 0xd4)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(lVar6 + (long)(int)*(uint *)(lVar6 + 0xd4) * 4 + 0x88) = 0;
  uVar7 = *(ulong *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar6;
  if (uVar7 != 0) {
    lVar6 = *(long *)(uVar7 + 0xf0);
    *(undefined8 *)(uVar7 + 0xf0) = 0;
    if (lVar6 != 0) {
      FUN_71032cad20(lVar6);
      uVar14 = extraout_x1_01;
    }
    FUN_710323b9e0(*(long *)(uVar7 + 0xe8),uVar14,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar9 = *(long **)(uVar7 + 0xe8);
    *(undefined8 *)(uVar7 + 0xe8) = 0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    FUN_710392eb40(uVar7);
    lVar6 = *(long *)(param_1 + 0x58);
  }
  plVar9 = (long *)(lVar6 + 0xe8);
  lVar10 = *plVar9;
  FUN_710323beb0(lVar10,(ulong *)&DAT_7104545610,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar10 = *plVar9;
  local_38 = (long ********)0x1dd5d06117;
  FUN_710323beb0(lVar10,(ulong *)&local_38,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar10 = *plVar9;
  local_38 = (long ********)0x22f525ad60;
  FUN_710323beb0(lVar10,(ulong *)&local_38,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar10 = *plVar9;
  FUN_710323beb0(lVar10,(ulong *)&DAT_7104545618,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar10 = *plVar9;
  local_38 = (long ********)0x1dd5d06117;
  FUN_710323beb0(lVar10,(ulong *)&local_38,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar10 = *plVar9;
  local_38 = (long ********)0x22f525ad60;
  FUN_710323beb0(lVar10,(ulong *)&local_38,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar10 = *plVar9;
  ppppppppplVar15 = (long *********)(long)*(int *)(lVar10 + 0x70);
  ppppbVar19 = (byte ****)(ulong)*(uint *)(lVar10 + 0x68);
  pppplVar20 = (long ****)0x1;
  FUN_710323beb0(lVar10,(ulong *)&DAT_7104545620,(long)ppppppppplVar15,(ulong)ppppbVar19,
                 (long ****)0x1,param_6,param_7,param_8);
  lVar10 = *plVar9;
  uVar7 = FUN_710323cb80(lVar10,extraout_x1_02,ppppppppplVar15,ppppbVar19,pppplVar20,param_6,param_7
                         ,param_8);
  while ((uVar7 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar7 = FUN_710323cb80(lVar10,extraout_x1_03,ppppppppplVar15,ppppbVar19,pppplVar20,param_6,
                           param_7,param_8);
  }
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar15,ppppbVar19,pppplVar20,param_6,param_7
                          ,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_50 = (long ***)((ulong)local_50 & 0xffffffff00000000);
      local_38 = (long ********)&DAT_00000088;
      ppppppppplVar15 = &local_38;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_50);
      if (((uVar7 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar15,ppppbVar19,pppplVar20,param_6
                                  ,param_7,param_8), puVar8 != (undefined8 *)0x0))
      goto LAB_71018cc6e4;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71018cc6e4:
  *puVar8 = &PTR_FUN_71050af188;
  puVar8[1] = 0;
  *(undefined1 *)(puVar8 + 0xb) = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[0xf] = plVar9;
  *(undefined1 *)(puVar8 + 0xe) = 1;
  puVar8[9] = 0;
  puVar8[10] = 0;
  puVar8[0xc] = 0;
  puVar8[0xd] = 0x1ffffffff;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x70,(long ****)ppppppppplVar15,ppppbVar19,pppplVar20,param_6,
                           param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_50 = (long ***)((ulong)local_50 & 0xffffffff00000000);
      local_38 = (long ********)&DAT_00000070;
      ppppppppplVar15 = &local_38;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_50);
      if (((uVar7 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x70,(long ****)ppppppppplVar15,ppppbVar19,pppplVar20,
                                   param_6,param_7,param_8), puVar11 != (undefined8 *)0x0))
      goto LAB_71018cc764;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_71018cc764:
  *(undefined4 *)(puVar11 + 1) = 0x1000;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[2] = 0;
  ppuVar16 = &PTR_DAT_71050af168;
  ppppbVar19 = (byte ****)0x287df6da84;
  pppplVar20 = (long ****)0x1;
  puVar11[6] = 0;
  puVar11[5] = puVar11 + 6;
  *puVar11 = &DAT_71050af0e0;
  puVar11[7] = 0;
  puVar11[8] = 0;
  *(undefined1 *)(puVar11 + 9) = 0;
  *(undefined1 **)((long)puVar11 + 0x4c) = &DAT_100000001;
  *(undefined4 *)((long)puVar11 + 0x54) = 1;
  puVar11[0xb] = 0;
  puVar11[0xc] = 0;
  puVar11[0xd] = 0;
  puVar8[0x10] = puVar11;
  FUN_71032cb040((long)puVar11,plVar9,(long ****)&PTR_DAT_71050af168,(byte ****)0x287df6da84,
                 (long ****)0x1,param_6,param_7,param_8);
  (**(code **)(*(long *)puVar8[0x10] + 8))((long *)puVar8[0x10],0);
  ppppppplVar24 = (long *******)puVar8[0x10];
  uVar14 = extraout_x1_04;
  if (ppppppplVar24[8] == (long ******)0x0) goto LAB_71018ccac0;
  ppppplVar21 = *ppppppplVar24[8];
  if (ppppplVar21 == (long *****)0x0) {
    pppplVar12 = (long ****)0x0;
  }
  else {
    pppplVar12 = *ppppplVar21;
  }
  if (ppppppplVar24[3] == ppppppplVar24[2]) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  pppplVar17 = **ppppppplVar24[2];
  FUN_71033743c0((long)pppplVar12,"layout_root",pppplVar17);
  pppppplVar23 = ppppppplVar24[8];
  ppplVar13 = (long ***)
              FUN_710392e290(0x10,0x28,pppplVar17,ppppbVar19,pppplVar20,param_6,param_7,param_8);
  if (ppplVar13 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_50 = (long ***)((ulong)local_50 & 0xffffffff00000000);
      local_38 = (long ********)&DAT_00000028;
      ppppppppplVar15 = &local_38;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_50);
      if (((uVar7 & 1) != 0) &&
         (ppplVar13 = (long ***)
                      FUN_710392e290(0x10,0x28,(long ****)ppppppppplVar15,ppppbVar19,pppplVar20,
                                     param_6,param_7,param_8), ppplVar13 != (long ***)0x0))
      goto LAB_71018cc880;
    }
    ppplVar13 = (long ***)0x0;
  }
LAB_71018cc880:
  *ppplVar13 = (long **)&PTR_FUN_71050af128;
  ppplVar13[4] = (long **)0x0;
  ppplVar13[2] = (long **)ppppppplVar24;
  ppplVar13[3] = (long **)FUN_7101d40460;
  *(undefined4 *)(ppplVar13 + 1) = 0;
  pppplVar12 = &local_50;
  local_50 = ppplVar13;
  FUN_7103376af0((long)pppppplVar23,(byte *)"language_name_label",pppplVar12,ppppbVar19,pppplVar20,
                 param_6,param_7,param_8);
  ppplVar13 = local_50;
  local_50 = (long ***)0x0;
  if (ppplVar13 != (long ***)0x0) {
    (*(code *)(*ppplVar13)[1])();
  }
  pppppplVar23 = ppppppplVar24[8];
  ppplVar13 = (long ***)
              FUN_710392e290(0x10,0x28,pppplVar12,ppppbVar19,pppplVar20,param_6,param_7,param_8);
  if (ppplVar13 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_58 = (long ***)((ulong)local_58._4_4_ << 0x20);
      local_38 = (long ********)&DAT_00000028;
      ppppppppplVar15 = &local_38;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_58);
      if (((uVar7 & 1) != 0) &&
         (ppplVar13 = (long ***)
                      FUN_710392e290(0x10,0x28,(long ****)ppppppppplVar15,ppppbVar19,pppplVar20,
                                     param_6,param_7,param_8), ppplVar13 != (long ***)0x0))
      goto LAB_71018cc928;
    }
    ppplVar13 = (long ***)0x0;
  }
LAB_71018cc928:
  *ppplVar13 = (long **)&PTR_FUN_71050af128;
  ppplVar13[2] = (long **)ppppppplVar24;
  ppplVar13[3] = (long **)FUN_7101d40780;
  ppplVar13[4] = (long **)0x0;
  pppplVar12 = (long ****)&local_58;
  *(undefined4 *)(ppplVar13 + 1) = 0;
  local_58 = ppplVar13;
  FUN_7103376af0((long)pppppplVar23,(byte *)"request",pppplVar12,ppppbVar19,pppplVar20,param_6,
                 param_7,param_8);
  ppplVar13 = local_58;
  local_58 = (long ***)0x0;
  if (ppplVar13 != (long ***)0x0) {
    (*(code *)(*ppplVar13)[1])();
  }
  pppppplVar23 = ppppppplVar24[8];
  ppplVar13 = (long ***)
              FUN_710392e290(0x10,0x38,pppplVar12,ppppbVar19,pppplVar20,param_6,param_7,param_8);
  if (ppplVar13 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_60 = (long ***)((ulong)local_60._4_4_ << 0x20);
      local_38 = (long ********)&DAT_00000038;
      ppppppppplVar15 = &local_38;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_60);
      if (((uVar7 & 1) != 0) &&
         (ppplVar13 = (long ***)
                      FUN_710392e290(0x10,0x38,(long ****)ppppppppplVar15,ppppbVar19,pppplVar20,
                                     param_6,param_7,param_8), ppplVar13 != (long ***)0x0))
      goto LAB_71018cc9c8;
    }
    ppplVar13 = (long ***)0x0;
  }
LAB_71018cc9c8:
  *ppplVar13 = (long **)&PTR_FUN_71050af150;
  ppplVar13[2] = (long **)ppppppplVar24;
  ppplVar13[3] = (long **)0x0;
  ppplVar13[6] = (long **)0x0;
  ppplVar13[4] = (long **)0x0;
  ppplVar13[5] = (long **)FUN_7101d407b0;
  *(undefined4 *)(ppplVar13 + 1) = 1;
  local_60 = ppplVar13;
  FUN_7103376af0((long)pppppplVar23,(byte *)"is_requested",(long ****)&local_60,ppppbVar19,
                 pppplVar20,param_6,param_7,param_8);
  ppplVar13 = local_60;
  local_60 = (long ***)0x0;
  if (ppplVar13 != (long ***)0x0) {
    (*(code *)(*ppplVar13)[1])();
  }
  pppppplVar23 = ppppppplVar24[8];
  local_38 = (long ********)
             FUN_710392e290(0x10,0x28,pppplVar18,ppppbVar19,pppplVar20,param_6,param_7,param_8);
  if (local_38 == (long ********)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_38 = (long ********)&DAT_00000028;
      ppppppppplVar15 = &local_38;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar7 & 1) != 0) &&
         (local_38 = (long ********)
                     FUN_710392e290(0x10,0x28,(long ****)ppppppppplVar15,ppppbVar19,pppplVar20,
                                    param_6,param_7,param_8), local_38 != (long ********)0x0))
      goto LAB_71018cca78;
    }
    local_38 = (long ********)0x0;
  }
LAB_71018cca78:
  *local_38 = (long *******)&PTR_FUN_71050af128;
  local_38[2] = ppppppplVar24;
  local_38[3] = (long *******)FUN_7101d407c0;
  local_38[4] = (long *******)0x0;
  ppuVar16 = (undefined **)&local_38;
  *(undefined4 *)(local_38 + 1) = 0;
  FUN_7103376af0((long)pppppplVar23,(byte *)"open_popup",(long ****)ppuVar16,ppppbVar19,pppplVar20,
                 param_6,param_7,param_8);
  pppppppplVar5 = local_38;
  local_38 = (long ********)0x0;
  uVar14 = extraout_x1_05;
  if (pppppppplVar5 != (long ********)0x0) {
    (*(code *)(*pppppppplVar5)[1])();
    uVar14 = extraout_x1_06;
  }
LAB_71018ccac0:
  puVar8[2] = &DAT_7105333600;
  uVar4 = DAT_7105333664;
  *(undefined4 *)(puVar8 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar8 + 0x6c) = uVar4;
  do {
    uVar3 = DAT_7105333650;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar2) {
      DAT_7105333650 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0' || (uVar3 & 1) != 0);
  puVar8[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar8;
  FUN_71032caea0((long)puVar8,uVar14,(long ****)ppuVar16,ppppbVar19,pppplVar20,param_6,param_7,
                 param_8);
  lVar10 = *(long *)(lVar6 + 0xf0);
  *(undefined8 **)(lVar6 + 0xf0) = puVar8;
  if (lVar10 != 0) {
    FUN_71032cad20(lVar10);
    return;
  }
  return;
}

