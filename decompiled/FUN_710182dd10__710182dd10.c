// addr:      710182dd10
// offset:    0x182dd10
// name:      FUN_710182dd10
// mangled:   
// signature: undefined __cdecl FUN_710182dd10(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710182dd10(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long ********pppppppplVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long *****ppppplVar13;
  long ***ppplVar14;
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
  long *********ppppppppplVar15;
  undefined **ppuVar16;
  long *******ppppppplVar17;
  byte ****ppppbVar18;
  char *pcVar19;
  long ****pppplVar20;
  undefined8 uVar21;
  long *plVar22;
  long ****pppplVar23;
  long *******ppppppplVar24;
  long ******pppppplVar25;
  undefined4 uVar26;
  undefined1 auVar27 [16];
  long ***local_68;
  undefined4 local_5c;
  long ********local_58;
  
  lVar6 = FUN_710392e290(0x10,0x128,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (lVar6 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_68 = (long ***)((ulong)local_68 & 0xffffffff00000000);
      local_58 = (long ********)&DAT_00000128;
      param_3 = &local_58;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_68);
      if (((uVar7 & 1) != 0) &&
         (lVar6 = FUN_710392e290(0x10,0x128,(long ****)param_3,param_4,param_5,param_6,param_7,
                                 param_8), lVar6 != 0)) goto LAB_710182dd90;
    }
    lVar6 = 0;
  }
LAB_710182dd90:
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
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_68 = (long ***)((ulong)local_68 & 0xffffffff00000000);
      local_58 = (long ********)&DAT_00000080;
      param_3 = &local_58;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_68);
      if (((uVar7 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar8 != (undefined8 *)0x0)) goto LAB_710182de28;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_710182de28:
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
  *(undefined4 *)(puVar8 + 0xd) = 2;
  puVar8[0xc] = 0;
  *(undefined4 *)(puVar8 + 0xf) = 0;
  puVar8[0xe] = 0;
  puVar8[9] = 0;
  puVar8[10] = puVar8 + 0xb;
  *(undefined8 **)(lVar6 + 0xe8) = puVar8;
  lVar10 = DAT_710532f840;
  *(undefined8 *)(lVar6 + 0xf0) = *(undefined8 *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
  uVar21 = *(undefined8 *)(*(long *)(lVar10 + 8) + 0xc0);
  *(undefined8 *)(lVar6 + 0x100) = 0;
  *(undefined8 *)(lVar6 + 0x108) = 0;
  *(undefined8 *)(lVar6 + 0xf8) = uVar21;
  iVar2 = *(int *)(param_2 + 0x10);
  *(undefined1 *)(lVar6 + 0x111) = 1;
  *(bool *)(lVar6 + 0x110) = iVar2 == 2;
  *(undefined8 *)(lVar6 + 0x114) = 0;
  *(undefined4 *)(lVar6 + 0x11c) = 0;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar21 = extraout_x1;
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_68 = (long ***)((ulong)local_68 & 0xffffffff00000000);
      local_58 = (long ********)&DAT_00000008;
      param_3 = &local_58;
      auVar27 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_68);
      uVar21 = auVar27._8_8_;
      if (((auVar27._0_8_ & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
         , uVar21 = extraout_x1_00, puVar8 != (undefined8 *)0x0)) goto LAB_710182df20;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_710182df20:
  FUN_7103773200(puVar8,uVar21,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  *(code **)(lVar6 + 0x28) = FUN_710182c3a0;
  *(undefined8 *)(lVar6 + 0x30) = 0;
  *(undefined8 **)(lVar6 + 0x120) = puVar8;
  *(code **)(lVar6 + 0x48) = FUN_710182c8b0;
  *(undefined8 *)(lVar6 + 0x50) = 0;
  *(code **)(lVar6 + 0x58) = FUN_710182cb80;
  *(undefined8 *)(lVar6 + 0x60) = 0;
  *(code **)(lVar6 + 0x38) = FUN_710182c570;
  *(undefined8 *)(lVar6 + 0x40) = 0;
  *(code **)(lVar6 + 0x68) = FUN_710182cbb0;
  *(undefined8 *)(lVar6 + 0x70) = 0;
  *(code **)(lVar6 + 0x78) = FUN_710182dbd0;
  *(undefined8 *)(lVar6 + 0x80) = 0;
  if (0x12 < *(uint *)(lVar6 + 0xd4)) {
LAB_710182eb88:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(lVar6 + (long)(int)*(uint *)(lVar6 + 0xd4) * 4 + 0x88) = 5;
  if (*(int *)(lVar6 + 0xd4) < 0x12) {
    uVar1 = *(int *)(lVar6 + 0xd4) + 1;
    *(uint *)(lVar6 + 0xd4) = uVar1;
    if (0x12 < uVar1) goto LAB_710182eb88;
    *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x88) = 0;
  }
  uVar7 = *(ulong *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar6;
  if (uVar7 != 0) {
    FUN_7103775fa0((long *)**(undefined8 **)(uVar7 + 0x120),extraout_x1_01,(long ****)param_3,
                   param_4,param_5,param_6,param_7,param_8);
    puVar8 = *(undefined8 **)(uVar7 + 0x120);
    *(undefined8 *)(uVar7 + 0x120) = 0;
    uVar21 = extraout_x1_02;
    if (puVar8 != (undefined8 *)0x0) {
      FUN_7103773770(puVar8,extraout_x1_02,(long ****)param_3,param_4,param_5,param_6,param_7,
                     param_8);
      FUN_710392eb40((ulong)puVar8);
      uVar21 = extraout_x1_03;
    }
    lVar6 = *(long *)(uVar7 + 0x108);
    *(undefined8 *)(uVar7 + 0x108) = 0;
    if (lVar6 != 0) {
      FUN_71032cad20(lVar6);
      uVar21 = extraout_x1_04;
    }
    lVar6 = *(long *)(uVar7 + 0x100);
    *(undefined8 *)(uVar7 + 0x100) = 0;
    if (lVar6 != 0) {
      FUN_71032cad20(lVar6);
      uVar21 = extraout_x1_05;
    }
    FUN_710323b9e0(*(long *)(uVar7 + 0xe8),uVar21,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar9 = *(long **)(uVar7 + 0xe8);
    *(undefined8 *)(uVar7 + 0xe8) = 0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    FUN_710392eb40(uVar7);
    lVar6 = *(long *)(param_1 + 0x58);
  }
  plVar9 = (long *)(lVar6 + 0xe8);
  *(undefined8 *)(*plVar9 + 0x70) = 1;
  lVar10 = *plVar9;
  FUN_710323beb0(lVar10,(ulong *)&DAT_7104544630,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar10 = *plVar9;
  local_58 = (long ********)0x1dd5d06117;
  FUN_710323beb0(lVar10,(ulong *)&local_58,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar10 = *plVar9;
  local_58 = (long ********)0x22f525ad60;
  FUN_710323beb0(lVar10,(ulong *)&local_58,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar10 = *plVar9;
  FUN_710323beb0(lVar10,(ulong *)&DAT_7104544638,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar10 = *plVar9;
  local_58 = (long ********)0x1dd5d06117;
  FUN_710323beb0(lVar10,(ulong *)&local_58,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar10 = *plVar9;
  local_58 = (long ********)0x22f525ad60;
  FUN_710323beb0(lVar10,(ulong *)&local_58,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar10 = *plVar9;
  FUN_710323beb0(lVar10,(ulong *)&DAT_7104544640,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  *(undefined8 *)(*plVar9 + 0x70) = 2;
  lVar10 = *plVar9;
  FUN_710323beb0(lVar10,(ulong *)&DAT_7104544618,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar10 = *plVar9;
  local_58 = (long ********)0x1dd5d06117;
  FUN_710323beb0(lVar10,(ulong *)&local_58,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar10 = *plVar9;
  local_58 = (long ********)0x22f525ad60;
  FUN_710323beb0(lVar10,(ulong *)&local_58,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar10 = *plVar9;
  FUN_710323beb0(lVar10,(ulong *)&DAT_7104544620,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar10 = *plVar9;
  local_58 = (long ********)0x1dd5d06117;
  FUN_710323beb0(lVar10,(ulong *)&local_58,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar10 = *plVar9;
  local_58 = (long ********)0x22f525ad60;
  FUN_710323beb0(lVar10,(ulong *)&local_58,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar10 = *plVar9;
  FUN_710323beb0(lVar10,(ulong *)&DAT_7104544628,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar10 = *plVar9;
  ppppppppplVar15 = (long *********)(long)*(int *)(lVar10 + 0x70);
  ppppbVar18 = (byte ****)(ulong)*(uint *)(lVar10 + 0x68);
  pppplVar20 = (long ****)0x0;
  FUN_710323beb0(lVar10,(ulong *)&DAT_7104543898,(long)ppppppppplVar15,(ulong)ppppbVar18,
                 (long ****)0x0,param_6,param_7,param_8);
  lVar10 = *plVar9;
  uVar7 = FUN_710323cb80(lVar10,extraout_x1_06,ppppppppplVar15,ppppbVar18,pppplVar20,param_6,param_7
                         ,param_8);
  while ((uVar7 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar7 = FUN_710323cb80(lVar10,extraout_x1_07,ppppppppplVar15,ppppbVar18,pppplVar20,param_6,
                           param_7,param_8);
  }
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar15,ppppbVar18,pppplVar20,param_6,param_7
                          ,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_68 = (long ***)((ulong)local_68 & 0xffffffff00000000);
      local_58 = (long ********)&DAT_00000088;
      ppppppppplVar15 = &local_58;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_68);
      if (((uVar7 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar15,ppppbVar18,pppplVar20,param_6
                                  ,param_7,param_8), puVar8 != (undefined8 *)0x0))
      goto LAB_710182e290;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_710182e290:
  *puVar8 = &PTR_FUN_71050a9dd0;
  puVar8[1] = 0;
  puVar8[0xc] = 0;
  puVar8[0xd] = 0x1ffffffff;
  puVar8[2] = 0;
  puVar8[3] = 0;
  *(undefined1 *)(puVar8 + 0xb) = 0;
  puVar8[0xf] = plVar9;
  *(undefined1 *)(puVar8 + 0xe) = 1;
  puVar8[9] = 0;
  puVar8[10] = 0;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x48,(long ****)ppppppppplVar15,ppppbVar18,pppplVar20,param_6,
                           param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_68 = (long ***)((ulong)local_68 & 0xffffffff00000000);
      local_58 = (long ********)&DAT_00000048;
      ppppppppplVar15 = &local_58;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_68);
      if (((uVar7 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x48,(long ****)ppppppppplVar15,ppppbVar18,pppplVar20,
                                   param_6,param_7,param_8), puVar11 != (undefined8 *)0x0))
      goto LAB_710182e310;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_710182e310:
  *(undefined4 *)(puVar11 + 1) = 0x1000;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[2] = 0;
  ppuVar16 = &PTR_DAT_71050a9db0;
  puVar11[7] = 0;
  puVar11[8] = 0;
  pcVar19 = (char *)0x30b700627c;
  pppplVar20 = (long ****)0x1;
  puVar11[6] = 0;
  puVar11[5] = puVar11 + 6;
  *puVar11 = &PTR_FUN_71050a9e08;
  puVar8[0x10] = puVar11;
  FUN_71032cb040((long)puVar11,plVar9,(long ****)&PTR_DAT_71050a9db0,(byte ****)0x30b700627c,
                 (long ****)0x1,param_6,param_7,param_8);
  lVar10 = puVar8[0x10];
  if (*(undefined8 **)(lVar10 + 0x18) == *(undefined8 **)(lVar10 + 0x10)) goto LAB_710182eb80;
  FUN_7103778630(0,*(long *)(**(long **)**(undefined8 **)(lVar10 + 0x10) + 0x10),0x7104421055);
  uVar21 = extraout_x1_08;
  if (*(undefined8 **)(lVar10 + 0x40) != (undefined8 *)0x0) {
    plVar22 = (long *)**(undefined8 **)(lVar10 + 0x40);
    if (plVar22 == (long *)0x0) {
      lVar12 = 0;
    }
    else {
      lVar12 = *plVar22;
    }
    if (*(undefined8 **)(lVar10 + 0x18) == *(undefined8 **)(lVar10 + 0x10)) goto LAB_710182eb80;
    ppuVar16 = *(undefined ***)**(undefined8 **)(lVar10 + 0x10);
    FUN_71033743c0(lVar12,"layout_root",ppuVar16);
    uVar21 = extraout_x1_09;
    if ((long *)**(undefined8 **)(lVar10 + 0x40) != (long *)0x0) {
      ppuVar16 = (undefined **)&DAT_71042b2a84;
      pcVar19 = (char *)0x0;
      FUN_7103375650((long *)**(undefined8 **)(lVar10 + 0x40),"BUTTON_ID_FIGHTER",&DAT_71042b2a84);
      uVar21 = extraout_x1_10;
      if ((long *)**(undefined8 **)(lVar10 + 0x40) != (long *)0x0) {
        ppuVar16 = (undefined **)&DAT_71042b2a84;
        pcVar19 = (char *)0x1;
        FUN_7103375650((long *)**(undefined8 **)(lVar10 + 0x40),"BUTTON_ID_TECHNIQUE",
                       &DAT_71042b2a84);
        uVar21 = extraout_x1_11;
        if ((long *)**(undefined8 **)(lVar10 + 0x40) != (long *)0x0) {
          ppuVar16 = (undefined **)&DAT_71042b2a84;
          pcVar19 = (char *)0x2;
          FUN_7103375650((long *)**(undefined8 **)(lVar10 + 0x40),"BUTTON_ID_SPIRIT",&DAT_71042b2a84
                        );
          uVar21 = extraout_x1_12;
          if ((long *)**(undefined8 **)(lVar10 + 0x40) != (long *)0x0) {
            ppuVar16 = (undefined **)&DAT_71042b2a84;
            pcVar19 = (char *)0x3;
            FUN_7103375650((long *)**(undefined8 **)(lVar10 + 0x40),"BUTTON_ID_ITEM",&DAT_71042b2a84
                          );
            uVar21 = extraout_x1_13;
            if ((long *)**(undefined8 **)(lVar10 + 0x40) != (long *)0x0) {
              ppuVar16 = (undefined **)&DAT_71042b2a84;
              pcVar19 = &DAT_00000004;
              FUN_7103375650((long *)**(undefined8 **)(lVar10 + 0x40),"BUTTON_ID_STAGE",
                             &DAT_71042b2a84);
              uVar21 = extraout_x1_14;
              if ((long *)**(undefined8 **)(lVar10 + 0x40) != (long *)0x0) {
                ppuVar16 = (undefined **)&DAT_71042b2a84;
                pcVar19 = (char *)0x5;
                FUN_7103375650((long *)**(undefined8 **)(lVar10 + 0x40),"BUTTON_ID_OTHER",
                               &DAT_71042b2a84);
                uVar21 = extraout_x1_15;
                if ((long *)**(undefined8 **)(lVar10 + 0x40) != (long *)0x0) {
                  ppuVar16 = (undefined **)&DAT_71042d5020;
                  pcVar19 = "mnu_smaknowledge_category_help_fighter_each";
                  FUN_7103375650((long *)**(undefined8 **)(lVar10 + 0x40),"HELP_MSG_FIGHTER",
                                 &DAT_71042d5020);
                  uVar21 = extraout_x1_16;
                  if ((long *)**(undefined8 **)(lVar10 + 0x40) != (long *)0x0) {
                    ppuVar16 = (undefined **)&DAT_71042d5020;
                    pcVar19 = "mnu_smaknowledge_category_help_fighter_common";
                    FUN_7103375650((long *)**(undefined8 **)(lVar10 + 0x40),"HELP_MSG_TECHNIQUE",
                                   &DAT_71042d5020);
                    uVar21 = extraout_x1_17;
                    if ((long *)**(undefined8 **)(lVar10 + 0x40) != (long *)0x0) {
                      ppuVar16 = (undefined **)&DAT_71042d5020;
                      pcVar19 = "mnu_smaknowledge_category_help_spirit";
                      FUN_7103375650((long *)**(undefined8 **)(lVar10 + 0x40),"HELP_MSG_SPIRIT",
                                     &DAT_71042d5020);
                      uVar21 = extraout_x1_18;
                      if ((long *)**(undefined8 **)(lVar10 + 0x40) != (long *)0x0) {
                        ppuVar16 = (undefined **)&DAT_71042d5020;
                        pcVar19 = "mnu_smaknowledge_category_help_item";
                        FUN_7103375650((long *)**(undefined8 **)(lVar10 + 0x40),"HELP_MSG_ITEM",
                                       &DAT_71042d5020);
                        uVar21 = extraout_x1_19;
                        if ((long *)**(undefined8 **)(lVar10 + 0x40) != (long *)0x0) {
                          ppuVar16 = (undefined **)&DAT_71042d5020;
                          pcVar19 = "mnu_smaknowledge_category_help_stage";
                          FUN_7103375650((long *)**(undefined8 **)(lVar10 + 0x40),"HELP_MSG_STAGE",
                                         &DAT_71042d5020);
                          uVar21 = extraout_x1_20;
                          if ((long *)**(undefined8 **)(lVar10 + 0x40) != (long *)0x0) {
                            ppuVar16 = (undefined **)&DAT_71042d5020;
                            pcVar19 = "mnu_smaknowledge_category_help_etc";
                            FUN_7103375650((long *)**(undefined8 **)(lVar10 + 0x40),"HELP_MSG_OTHER"
                                           ,&DAT_71042d5020);
                            uVar21 = extraout_x1_21;
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
    }
  }
  puVar8[2] = &DAT_7105333600;
  *(undefined4 *)(puVar8 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar8 + 0x6c) = DAT_7105333664;
  do {
    uVar1 = DAT_7105333650;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar4) {
      DAT_7105333650 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0' || (uVar1 & 1) != 0);
  puVar8[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar8;
  FUN_71032caea0((long)puVar8,uVar21,(long ****)ppuVar16,(byte ****)pcVar19,pppplVar20,param_6,
                 param_7,param_8);
  lVar10 = *(long *)(lVar6 + 0x100);
  *(undefined8 **)(lVar6 + 0x100) = puVar8;
  if (lVar10 != 0) {
    FUN_71032cad20(lVar10);
  }
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x88,(long ****)ppuVar16,(byte ****)pcVar19,pppplVar20,param_6,
                          param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_68 = (long ***)((ulong)local_68 & 0xffffffff00000000);
      local_58 = (long ********)&DAT_00000088;
      ppuVar16 = (undefined **)&local_58;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_68);
      if (((uVar7 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,(long ****)ppuVar16,(byte ****)pcVar19,pppplVar20,
                                  param_6,param_7,param_8), puVar8 != (undefined8 *)0x0))
      goto LAB_710182e66c;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_710182e66c:
  *puVar8 = &PTR_FUN_71050a9d88;
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
            FUN_710392e290(0x10,0x268,(long ****)ppuVar16,(byte ****)pcVar19,pppplVar20,param_6,
                           param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_68 = (long ***)((ulong)local_68 & 0xffffffff00000000);
      local_58 = (long ********)&DAT_00000268;
      ppppppppplVar15 = &local_58;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_68);
      if (((uVar7 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x268,(long ****)ppppppppplVar15,(byte ****)pcVar19,
                                   pppplVar20,param_6,param_7,param_8), puVar11 != (undefined8 *)0x0
         )) goto LAB_710182e6ec;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_710182e6ec:
  *(undefined4 *)(puVar11 + 1) = 0x1000;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[2] = 0;
  ppuVar16 = &PTR_DAT_71050a9d68;
  puVar11[6] = 0;
  puVar11[5] = puVar11 + 6;
  *puVar11 = &DAT_71050a9ca0;
  puVar11[7] = 0;
  puVar11[8] = 0;
  ppppbVar18 = (byte ****)0x31ca4303d9;
  pppplVar20 = (long ****)0x2;
  puVar11[9] = puVar11;
  puVar11[10] = 0;
  *(undefined8 *)((long)puVar11 + 0x10c) = 0xffffffff00000000;
  puVar11[0xd] = 0;
  puVar11[0xb] = 0;
  puVar11[0xc] = 0;
  *(undefined8 *)((long)puVar11 + 0x114) = 0xffffffff00000000;
  *(undefined1 *)((long)puVar11 + 0x11c) = 0;
  *(undefined4 *)(puVar11 + 0x21) = 0;
  puVar11[0x18] = 0;
  *(undefined4 *)(puVar11 + 0x2a) = 1;
  *(undefined4 *)(puVar11 + 0x37) = 0xffffffff;
  *(undefined1 *)((long)puVar11 + 0x1bc) = 1;
  *(undefined1 *)(puVar11 + 0x3f) = 0;
  puVar11[0x38] = 0;
  *(undefined4 *)(puVar11 + 0x47) = 0xffffffff;
  *(undefined4 *)(puVar11 + 0x4c) = 0;
  puVar11[0x4b] = 0;
  puVar11[0x4a] = 0;
  puVar11[0x49] = 0;
  puVar11[0x48] = 0;
  *(undefined4 *)(puVar11 + 0x18) = 0;
  puVar11[0x24] = 0;
  puVar11[0x25] = &PTR_FUN_71050a9ce8;
  puVar11[0xe] = FUN_7101ad9e50;
  puVar11[0xf] = 0;
  puVar11[0x10] = FUN_7101ad9e90;
  puVar11[0x11] = 0;
  puVar11[0x12] = FUN_7101adcd40;
  puVar11[0x13] = 0;
  puVar11[0x1f] = 0;
  puVar11[0x20] = 0;
  puVar11[0x1d] = 0;
  puVar11[0x1e] = 0;
  puVar11[0x1b] = 0;
  puVar11[0x1c] = 0;
  puVar11[0x19] = 0;
  puVar11[0x1a] = 0;
  puVar11[0x28] = 0;
  puVar11[0x29] = 0;
  puVar11[0x28] = 0;
  puVar11[0x26] = plVar9;
  puVar11[0x27] = 0;
  puVar11[0x35] = 0;
  puVar11[0x36] = 0;
  puVar11[0x33] = 0;
  puVar11[0x34] = 0;
  puVar11[0x31] = 0;
  puVar11[0x32] = 0;
  puVar11[0x2f] = 0;
  puVar11[0x30] = 0;
  puVar11[0x2d] = 0;
  puVar11[0x2e] = 0;
  puVar11[0x2b] = 0;
  puVar11[0x2c] = 0;
  puVar11[0x3d] = 0;
  puVar11[0x3e] = 0;
  puVar11[0x3b] = 0;
  puVar11[0x3c] = 0;
  puVar11[0x39] = 0;
  puVar11[0x3a] = 0;
  puVar11[0x14] = FUN_7101adcd90;
  puVar11[0x15] = 0;
  puVar11[0x16] = FUN_7101adce20;
  puVar11[0x17] = 0;
  puVar8[0x10] = puVar11;
  FUN_71032cb040((long)puVar11,plVar9,(long ****)&PTR_DAT_71050a9d68,(byte ****)0x31ca4303d9,
                 (long ****)0x2,param_6,param_7,param_8);
  ppppppplVar24 = (long *******)puVar8[0x10];
  if (ppppppplVar24[3] == ppppppplVar24[2]) goto LAB_710182eb80;
  pppplVar23 = **ppppppplVar24[2];
  *(undefined4 *)((**pppplVar23)[0xc0] + 2) = 0x20;
  *(undefined4 *)((long)(**pppplVar23)[0xc0] + 0x14) = 0x40;
  *(undefined4 *)((**pppplVar23)[0xc0] + 3) = 0x100;
  *(undefined4 *)((long)(**pppplVar23)[0xc0] + 0x1c) = 0x200;
  FUN_7101adc840((long)ppppppplVar24);
  uVar26 = FUN_71033112b0(0,*(long *)(DAT_710532f8c0 + 8),0x9e1d89d31);
  *(undefined4 *)((long)ppppppplVar24 + 0x25c) = uVar26;
  *(undefined4 *)(ppppppplVar24 + 0x4c) = *(undefined4 *)(ppppppplVar24[0x24] + 0x4c);
  uVar21 = extraout_x1_22;
  if (ppppppplVar24[8] == (long ******)0x0) goto LAB_710182eae4;
  ppppplVar13 = *ppppppplVar24[8];
  if (ppppplVar13 == (long *****)0x0) {
LAB_710182e94c:
    pppplVar23 = (long ****)0x0;
  }
  else {
    ppppbVar18 = (byte ****)&DAT_ffffffff;
    FUN_7103375650((long *)ppppplVar13,"ITEM_INDEX_NONE",&DAT_71042b2a84);
    if (*ppppppplVar24[8] == (long *****)0x0) goto LAB_710182e94c;
    ppppbVar18 = (byte ****)0x6;
    FUN_7103375650((long *)*ppppppplVar24[8],"BUTTON_EX_LEFT",&DAT_71042b2a84);
    if (*ppppppplVar24[8] == (long *****)0x0) goto LAB_710182e94c;
    ppppbVar18 = (byte ****)&DAT_00000007;
    FUN_7103375650((long *)*ppppppplVar24[8],"BUTTON_EX_RIGHT",&DAT_71042b2a84);
    if (*ppppppplVar24[8] == (long *****)0x0) goto LAB_710182e94c;
    pppplVar23 = **ppppppplVar24[8];
  }
  if (ppppppplVar24[3] == ppppppplVar24[2]) {
LAB_710182eb80:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  ppppppplVar17 = ppppppplVar24 + 0x24;
  FUN_71033743c0((long)pppplVar23,"layout_root",**ppppppplVar24[2]);
  FUN_71033744b0((long)pppplVar23,"scroller",ppppppplVar17);
  pppppplVar25 = ppppppplVar24[8];
  ppplVar14 = (long ***)
              FUN_710392e290(0x10,0x38,(long ****)ppppppplVar17,ppppbVar18,pppplVar20,param_6,
                             param_7,param_8);
  if (ppplVar14 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_68 = (long ***)((ulong)local_68 & 0xffffffff00000000);
      local_58 = (long ********)&DAT_00000038;
      ppppppppplVar15 = &local_58;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_68);
      if (((uVar7 & 1) != 0) &&
         (ppplVar14 = (long ***)
                      FUN_710392e290(0x10,0x38,(long ****)ppppppppplVar15,ppppbVar18,pppplVar20,
                                     param_6,param_7,param_8), ppplVar14 != (long ***)0x0))
      goto LAB_710182e9e4;
    }
    ppplVar14 = (long ***)0x0;
  }
LAB_710182e9e4:
  ppplVar14[2] = (long **)ppppppplVar24;
  *ppplVar14 = (long **)&PTR_FUN_71050a9d28;
  ppplVar14[3] = (long **)FUN_7101add1b0;
  ppplVar14[4] = (long **)0x0;
  ppplVar14[5] = (long **)0x0;
  ppplVar14[6] = (long **)0x0;
  pppplVar23 = &local_68;
  *(undefined4 *)(ppplVar14 + 1) = 1;
  local_68 = ppplVar14;
  FUN_7103376af0((long)pppppplVar25,(byte *)"is_font_cache_ready",pppplVar23,ppppbVar18,pppplVar20,
                 param_6,param_7,param_8);
  ppplVar14 = local_68;
  local_68 = (long ***)0x0;
  if (ppplVar14 != (long ***)0x0) {
    (*(code *)(*ppplVar14)[1])();
  }
  pppppplVar25 = ppppppplVar24[8];
  local_58 = (long ********)
             FUN_710392e290(0x10,0x28,pppplVar23,ppppbVar18,pppplVar20,param_6,param_7,param_8);
  if (local_58 == (long ********)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_5c = 0;
      local_58 = (long ********)&DAT_00000028;
      ppppppppplVar15 = &local_58;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_5c);
      if (((uVar7 & 1) != 0) &&
         (local_58 = (long ********)
                     FUN_710392e290(0x10,0x28,(long ****)ppppppppplVar15,ppppbVar18,pppplVar20,
                                    param_6,param_7,param_8), local_58 != (long ********)0x0))
      goto LAB_710182ea94;
    }
    local_58 = (long ********)0x0;
  }
LAB_710182ea94:
  *local_58 = (long *******)&PTR_FUN_71050a9d50;
  local_58[4] = (long *******)0x0;
  local_58[2] = ppppppplVar24;
  local_58[3] = (long *******)FUN_7101add200;
  *(undefined4 *)(local_58 + 1) = 0;
  ppuVar16 = (undefined **)&local_58;
  FUN_7103376af0((long)pppppplVar25,(byte *)"update_tips_list",(long ****)ppuVar16,ppppbVar18,
                 pppplVar20,param_6,param_7,param_8);
  pppppppplVar5 = local_58;
  local_58 = (long ********)0x0;
  uVar21 = extraout_x1_23;
  if (pppppppplVar5 != (long ********)0x0) {
    (*(code *)(*pppppppplVar5)[1])();
    uVar21 = extraout_x1_24;
  }
LAB_710182eae4:
  puVar8[2] = &DAT_7105333600;
  *(undefined4 *)(puVar8 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar8 + 0x6c) = DAT_7105333664;
  do {
    uVar1 = DAT_7105333650;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar4) {
      DAT_7105333650 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0' || (uVar1 & 1) != 0);
  puVar8[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar8;
  FUN_71032caea0((long)puVar8,uVar21,(long ****)ppuVar16,ppppbVar18,pppplVar20,param_6,param_7,
                 param_8);
  lVar10 = *(long *)(lVar6 + 0x108);
  *(undefined8 **)(lVar6 + 0x108) = puVar8;
  if (lVar10 != 0) {
    FUN_71032cad20(lVar10);
  }
  ppppbVar18 = (byte ****)0x1;
  FUN_71032cbf30((undefined8 *)(lVar6 + 0x120),*(long *)(lVar6 + 0xe8),(ulong *)&DAT_7104543898,
                 (byte ****)0x1,pppplVar20,param_6,param_7,param_8);
  FUN_7103775dc0((long *)**(undefined8 **)(lVar6 + 0x120),0,(long ****)&DAT_00001000,ppppbVar18,
                 pppplVar20,param_6,param_7,param_8);
  return;
}

