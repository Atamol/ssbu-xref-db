// addr:      71018821d0
// offset:    0x18821d0
// name:      FUN_71018821d0
// mangled:   
// signature: undefined __cdecl FUN_71018821d0(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71018821d0(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  long ********pppppppplVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long *******ppppppplVar13;
  long ***ppplVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 uVar15;
  undefined8 extraout_x1_07;
  long *********ppppppppplVar16;
  undefined **ppuVar17;
  long ****pppplVar18;
  byte ****ppppbVar19;
  long ****pppplVar20;
  long ******pppppplVar21;
  long **pplVar22;
  undefined1 auVar23 [16];
  undefined8 local_78;
  undefined8 local_70;
  long ***local_68;
  undefined4 local_5c;
  long ********local_58;
  
  lVar7 = FUN_710392e290(0x10,0x100,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (lVar7 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_68 = (long ***)((ulong)local_68 & 0xffffffff00000000);
      local_58 = (long ********)&DAT_00000100;
      param_3 = &local_58;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_68);
      if (((uVar8 & 1) != 0) &&
         (lVar7 = FUN_710392e290(0x10,0x100,(long ****)param_3,param_4,param_5,param_6,param_7,
                                 param_8), lVar7 != 0)) goto LAB_7101882250;
    }
    lVar7 = 0;
  }
LAB_7101882250:
  *(undefined8 *)(lVar7 + 0x10) = 0;
  *(undefined8 *)(lVar7 + 0x18) = 0;
  *(undefined4 *)(lVar7 + 0xc0) = 0xffffffff;
  *(long *)lVar7 = lVar7;
  *(undefined8 *)(lVar7 + 8) = 0;
  *(undefined1 *)(lVar7 + 0xc4) = 0;
  *(undefined4 *)(lVar7 + 200) = 0;
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
           FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar15 = extraout_x1;
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_68 = (long ***)((ulong)local_68 & 0xffffffff00000000);
      local_58 = (long ********)&DAT_00000080;
      param_3 = &local_58;
      auVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_68);
      uVar15 = auVar23._8_8_;
      if (((auVar23._0_8_ & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), uVar15 = extraout_x1_00, puVar9 != (undefined8 *)0x0))
      goto LAB_71018822e4;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71018822e4:
  *puVar9 = &PTR_FUN_7105181b40;
  puVar9[2] = 0;
  puVar9[1] = puVar9 + 2;
  puVar9[5] = 0;
  puVar9[3] = 0;
  puVar9[4] = puVar9 + 5;
  puVar9[8] = 0;
  puVar9[6] = 0;
  puVar9[7] = puVar9 + 8;
  puVar9[0xb] = 0;
  *(undefined4 *)(puVar9 + 0xd) = 2;
  puVar9[0xc] = 0;
  *(undefined4 *)(puVar9 + 0xf) = 0;
  puVar9[0xe] = 0;
  puVar9[9] = 0;
  puVar9[10] = puVar9 + 0xb;
  *(undefined1 *)(lVar7 + 0xe0) = 0;
  *(undefined8 **)(lVar7 + 0xd0) = puVar9;
  *(undefined8 *)(lVar7 + 0xd8) = 0;
  lVar12 = DAT_710532f840;
  *(undefined8 *)(lVar7 + 0xe8) = *(undefined8 *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
  *(undefined8 *)(lVar7 + 0xf0) = *(undefined8 *)(*(long *)(lVar12 + 8) + 0xc0);
  *(code **)(lVar7 + 0x38) = FUN_7101881bb0;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(code **)(lVar7 + 0x28) = FUN_71018818c0;
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(code **)(lVar7 + 0x48) = FUN_7101881d10;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  *(undefined4 *)(lVar7 + 0xf8) = 0;
  *(code **)(lVar7 + 0x58) = FUN_7101881ed0;
  *(undefined8 *)(lVar7 + 0x60) = 0;
  puVar9 = *(undefined8 **)(param_2 + 0xa8);
  if (puVar9 != (undefined8 *)0x0) {
    if (((DAT_7105324908 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_7105324908), iVar6 != 0)) {
      if (((DAT_7105324748 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_7105324748), iVar6 != 0))
      {
        if (((DAT_7105324750 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(&DAT_7105324750), iVar6 != 0)) {
          DAT_7105324758 = 0;
          __cxa_guard_release(&DAT_7105324750);
        }
        DAT_7105324760 = &DAT_7105324758;
        __cxa_guard_release(&DAT_7105324748);
      }
      DAT_7105324910 = &DAT_7105324760;
      __cxa_guard_release(&DAT_7105324908);
    }
    auVar23 = (**(code **)*puVar9)(puVar9);
    uVar15 = auVar23._8_8_;
    for (puVar10 = auVar23._0_8_; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10) {
      if ((undefined8 **)puVar10 == &DAT_7105324910) {
        *(undefined1 *)(lVar7 + 0xe0) = *(undefined1 *)(puVar9 + 1);
        break;
      }
    }
  }
  if (0x12 < *(uint *)(lVar7 + 0xb4)) goto LAB_7101882c88;
  *(undefined4 *)(lVar7 + (long)(int)*(uint *)(lVar7 + 0xb4) * 4 + 0x68) = 0;
  uVar8 = *(ulong *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar7;
  if (uVar8 != 0) {
    if (0 < *(int *)(uVar8 + 0xf8)) {
      **(uint **)(DAT_710593b988 + 8) = **(uint **)(DAT_710593b988 + 8) & 0xfffffeff;
      *(undefined4 *)(uVar8 + 0xf8) = 0;
    }
    lVar7 = *(long *)(uVar8 + 0xd8);
    *(undefined8 *)(uVar8 + 0xd8) = 0;
    if (lVar7 != 0) {
      FUN_71032cad20(lVar7);
      uVar15 = extraout_x1_01;
    }
    FUN_710323b9e0(*(long *)(uVar8 + 0xd0),uVar15,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar11 = *(long **)(uVar8 + 0xd0);
    *(undefined8 *)(uVar8 + 0xd0) = 0;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 8))();
    }
    FUN_710392eb40(uVar8);
    lVar7 = *(long *)(param_1 + 0x58);
  }
  plVar11 = (long *)(lVar7 + 0xd0);
  lVar12 = *plVar11;
  FUN_710323beb0(lVar12,(ulong *)&DAT_71045451d8,(long)*(int *)(lVar12 + 0x70),
                 (ulong)*(uint *)(lVar12 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar12 = *plVar11;
  FUN_710323beb0(lVar12,(ulong *)&DAT_71045451e0,(long)*(int *)(lVar12 + 0x70),
                 (ulong)*(uint *)(lVar12 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar12 = *plVar11;
  local_58 = (long ********)0x1dd5d06117;
  FUN_710323beb0(lVar12,(ulong *)&local_58,(long)*(int *)(lVar12 + 0x70),
                 (ulong)*(uint *)(lVar12 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar12 = *plVar11;
  local_58 = (long ********)0x22f525ad60;
  FUN_710323beb0(lVar12,(ulong *)&local_58,(long)*(int *)(lVar12 + 0x70),
                 (ulong)*(uint *)(lVar12 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar12 = *plVar11;
  FUN_710323beb0(lVar12,(ulong *)&DAT_71045451e8,(long)*(int *)(lVar12 + 0x70),
                 (ulong)*(uint *)(lVar12 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar12 = *plVar11;
  local_58 = (long ********)0x1dd5d06117;
  FUN_710323beb0(lVar12,(ulong *)&local_58,(long)*(int *)(lVar12 + 0x70),
                 (ulong)*(uint *)(lVar12 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar12 = *plVar11;
  local_58 = (long ********)0x22f525ad60;
  FUN_710323beb0(lVar12,(ulong *)&local_58,(long)*(int *)(lVar12 + 0x70),
                 (ulong)*(uint *)(lVar12 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar12 = *plVar11;
  ppppppppplVar16 = (long *********)(long)*(int *)(lVar12 + 0x70);
  ppppbVar19 = (byte ****)(ulong)*(uint *)(lVar12 + 0x68);
  pppplVar20 = (long ****)0x1;
  FUN_710323beb0(lVar12,(ulong *)&DAT_71045451f0,(long)ppppppppplVar16,(ulong)ppppbVar19,
                 (long ****)0x1,param_6,param_7,param_8);
  FUN_7101ca4340(plVar11,extraout_x1_02,(long ****)ppppppppplVar16,ppppbVar19,pppplVar20,param_6,
                 param_7,param_8);
  lVar12 = *plVar11;
  uVar8 = FUN_710323cb80(lVar12,extraout_x1_03,ppppppppplVar16,ppppbVar19,pppplVar20,param_6,param_7
                         ,param_8);
  while ((uVar8 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar8 = FUN_710323cb80(lVar12,extraout_x1_04,ppppppppplVar16,ppppbVar19,pppplVar20,param_6,
                           param_7,param_8);
  }
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar16,ppppbVar19,pppplVar20,param_6,param_7
                          ,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_68 = (long ***)((ulong)local_68 & 0xffffffff00000000);
      local_58 = (long ********)&DAT_00000088;
      ppppppppplVar16 = &local_58;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_68);
      if (((uVar8 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar16,ppppbVar19,pppplVar20,param_6
                                  ,param_7,param_8), puVar9 != (undefined8 *)0x0))
      goto LAB_71018825f0;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71018825f0:
  *puVar9 = &PTR_FUN_71050ad540;
  puVar9[1] = 0;
  puVar9[0xc] = 0;
  puVar9[0xd] = 0x1ffffffff;
  puVar9[2] = 0;
  puVar9[3] = 0;
  *(undefined1 *)(puVar9 + 0xb) = 0;
  puVar9[0xf] = plVar11;
  *(undefined1 *)(puVar9 + 0xe) = 1;
  puVar9[9] = 0;
  puVar9[10] = 0;
  ppppppplVar13 =
       (long *******)
       FUN_710392e290(0x10,0x128,(long ****)ppppppppplVar16,ppppbVar19,pppplVar20,param_6,param_7,
                      param_8);
  uVar15 = extraout_x1_05;
  if (ppppppplVar13 == (long *******)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_68 = (long ***)((ulong)local_68 & 0xffffffff00000000);
      local_58 = (long ********)&DAT_00000128;
      ppppppppplVar16 = &local_58;
      auVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_68);
      uVar15 = auVar23._8_8_;
      if (((auVar23._0_8_ & 1) != 0) &&
         (ppppppplVar13 =
               (long *******)
               FUN_710392e290(0x10,0x128,(long ****)ppppppppplVar16,ppppbVar19,pppplVar20,param_6,
                              param_7,param_8), uVar15 = extraout_x1_06,
         ppppppplVar13 != (long *******)0x0)) goto LAB_7101882678;
    }
    ppppppplVar13 = (long *******)0x0;
  }
LAB_7101882678:
  *(undefined4 *)(ppppppplVar13 + 1) = 0x1000;
  ppppppplVar13[2] = (long ******)0x0;
  ppppppplVar13[3] = (long ******)0x0;
  ppppppplVar13[4] = (long ******)0x0;
  ppppppplVar13[6] = (long ******)0x0;
  ppppppplVar13[5] = (long ******)(ppppppplVar13 + 6);
  *ppppppplVar13 = (long ******)&DAT_71050ad578;
  *(undefined8 *)((long)ppppppplVar13 + 0xec) = 0xffffffff00000000;
  ppppppplVar13[7] = (long ******)0x0;
  ppppppplVar13[8] = (long ******)0x0;
  *(undefined8 *)((long)ppppppplVar13 + 0xf4) = 0xffffffff00000000;
  *(undefined1 *)((long)ppppppplVar13 + 0xfc) = 0;
  *(undefined4 *)(ppppppplVar13 + 0x1d) = 0;
  ppppppplVar13[9] = (long ******)ppppppplVar13;
  ppppppplVar13[10] = (long ******)0x0;
  ppppppplVar13[0xb] = (long ******)0x0;
  ppppppplVar13[0xc] = (long ******)0x0;
  ppppppplVar13[0xd] = (long ******)0x0;
  ppppppplVar13[0xe] = (long ******)0x0;
  ppppppplVar13[0x1b] = (long ******)0x0;
  ppppppplVar13[0x1c] = (long ******)0x0;
  ppppppplVar13[0x19] = (long ******)0x0;
  ppppppplVar13[0x1a] = (long ******)0x0;
  ppppppplVar13[0x17] = (long ******)0x0;
  ppppppplVar13[0x18] = (long ******)0x0;
  ppppppplVar13[0x15] = (long ******)0x0;
  ppppppplVar13[0x16] = (long ******)0x0;
  ppppppplVar13[0x13] = (long ******)0x0;
  ppppppplVar13[0x14] = (long ******)0x0;
  ppppppplVar13[0x11] = (long ******)0x0;
  ppppppplVar13[0x12] = (long ******)0x0;
  ppppppplVar13[0xf] = (long ******)0x0;
  ppppppplVar13[0x10] = (long ******)0x0;
  FUN_7101ca2e70(ppppppplVar13 + 0x20,uVar15,(long ****)ppppppppplVar16,ppppbVar19,pppplVar20,
                 param_6,param_7,param_8);
  ppuVar17 = &PTR_DAT_71050ad520;
  ppppbVar19 = (byte ****)0x237342380f;
  pppplVar20 = (long ****)0x1;
  FUN_71032cb040((long)ppppppplVar13,plVar11,(long ****)&PTR_DAT_71050ad520,(byte ****)0x237342380f,
                 (long ****)0x1,param_6,param_7,param_8);
  pppppplVar21 = ppppppplVar13[2];
  if (ppppppplVar13[3] == pppppplVar21) goto LAB_7101882c80;
  pplVar22 = ****pppppplVar21;
  *(undefined4 *)(pplVar22[0xc0] + 2) = 0x20;
  *(undefined4 *)((long)pplVar22[0xc0] + 0x14) = 0x40;
  *(undefined4 *)(pplVar22[0xc0] + 3) = 0x80;
  pppppplVar21 = ppppppplVar13[8];
  if (pppppplVar21 != (long ******)0x0) {
    if (*pppppplVar21 != (long *****)0x0) {
      ppuVar17 = (undefined **)&DAT_71042b2a84;
      ppppbVar19 = (byte ****)0x3;
      FUN_7103375650((long *)*pppppplVar21,"SCENE_EXIT_CODE_SELECT",&DAT_71042b2a84);
      pppppplVar21 = ppppppplVar13[8];
      if (*pppppplVar21 != (long *****)0x0) {
        ppuVar17 = (undefined **)&DAT_71042b2a84;
        ppppbVar19 = (byte ****)0x6;
        FUN_7103375650((long *)*pppppplVar21,"BUTTON_HELP",&DAT_71042b2a84);
        pppppplVar21 = ppppppplVar13[8];
        if (*pppppplVar21 != (long *****)0x0) {
          ppuVar17 = (undefined **)&DAT_71042b2a84;
          ppppbVar19 = (byte ****)0x0;
          FUN_7103375650((long *)*pppppplVar21,"MODE_NORMAL",&DAT_71042b2a84);
          pppppplVar21 = ppppppplVar13[8];
          if (*pppppplVar21 != (long *****)0x0) {
            ppuVar17 = (undefined **)&DAT_71042b2a84;
            ppppbVar19 = (byte ****)0x1;
            FUN_7103375650((long *)*pppppplVar21,"MODE_VIP",&DAT_71042b2a84);
            pppppplVar21 = ppppppplVar13[8];
            if (*pppppplVar21 != (long *****)0x0) {
              ppuVar17 = (undefined **)&DAT_71042b2a84;
              ppppbVar19 = (byte ****)0x0;
              FUN_7103375650((long *)*pppppplVar21,"BUTTON_ID_SINGLE",&DAT_71042b2a84);
              pppppplVar21 = ppppppplVar13[8];
              if (*pppppplVar21 != (long *****)0x0) {
                ppuVar17 = (undefined **)&DAT_71042b2a84;
                ppppbVar19 = (byte ****)0x1;
                FUN_7103375650((long *)*pppppplVar21,"BUTTON_ID_DOUBLE",&DAT_71042b2a84);
                pppppplVar21 = ppppppplVar13[8];
                if (*pppppplVar21 != (long *****)0x0) {
                  ppuVar17 = (undefined **)&DAT_71042b2a84;
                  ppppbVar19 = (byte ****)0x2;
                  FUN_7103375650((long *)*pppppplVar21,"BUTTON_ID_VIP",&DAT_71042b2a84);
                  pppppplVar21 = ppppppplVar13[8];
                  if (*pppppplVar21 != (long *****)0x0) {
                    ppuVar17 = (undefined **)&DAT_71042b2a84;
                    ppppbVar19 = (byte ****)0x3;
                    FUN_7103375650((long *)*pppppplVar21,"BUTTON_ID_PRIORITY",&DAT_71042b2a84);
                    pppppplVar21 = ppppppplVar13[8];
                    if (*pppppplVar21 != (long *****)0x0) {
                      ppuVar17 = (undefined **)&DAT_71042b2a84;
                      ppppbVar19 = (byte ****)0x3;
                      FUN_7103375650((long *)*pppppplVar21,"SCENE_EXIT_CODE_SELECT",&DAT_71042b2a84)
                      ;
                      pppppplVar21 = ppppppplVar13[8];
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    ppplVar14 = (long ***)
                FUN_710392e290(0x10,0x38,(long ****)ppuVar17,ppppbVar19,pppplVar20,param_6,param_7,
                               param_8);
    if (ppplVar14 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_68 = (long ***)((ulong)local_68 & 0xffffffff00000000);
        local_58 = (long ********)&DAT_00000038;
        ppppppppplVar16 = &local_58;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_68);
        if (((uVar8 & 1) != 0) &&
           (ppplVar14 = (long ***)
                        FUN_710392e290(0x10,0x38,(long ****)ppppppppplVar16,ppppbVar19,pppplVar20,
                                       param_6,param_7,param_8), ppplVar14 != (long ***)0x0))
        goto LAB_71018828f8;
      }
      ppplVar14 = (long ***)0x0;
    }
LAB_71018828f8:
    ppplVar14[5] = (long **)0x0;
    ppplVar14[6] = (long **)0x0;
    *ppplVar14 = (long **)&PTR_FUN_71050ad4e0;
    ppplVar14[2] = (long **)ppppppplVar13;
    ppplVar14[3] = (long **)FUN_7101c431a0;
    ppplVar14[4] = (long **)0x0;
    pppplVar18 = &local_68;
    *(undefined4 *)(ppplVar14 + 1) = 0;
    local_68 = ppplVar14;
    FUN_7103376af0((long)pppppplVar21,(byte *)"open_priority_sub_window",pppplVar18,ppppbVar19,
                   pppplVar20,param_6,param_7,param_8);
    ppplVar14 = local_68;
    local_68 = (long ***)0x0;
    if (ppplVar14 != (long ***)0x0) {
      (*(code *)(*ppplVar14)[1])();
    }
    pppppplVar21 = ppppppplVar13[8];
    ppplVar14 = (long ***)
                FUN_710392e290(0x10,0x38,pppplVar18,ppppbVar19,pppplVar20,param_6,param_7,param_8);
    if (ppplVar14 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_70 = (long ***)((ulong)local_70._4_4_ << 0x20);
        local_58 = (long ********)&DAT_00000038;
        ppppppppplVar16 = &local_58;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
        if (((uVar8 & 1) != 0) &&
           (ppplVar14 = (long ***)
                        FUN_710392e290(0x10,0x38,(long ****)ppppppppplVar16,ppppbVar19,pppplVar20,
                                       param_6,param_7,param_8), ppplVar14 != (long ***)0x0))
        goto LAB_71018829a4;
      }
      ppplVar14 = (long ***)0x0;
    }
LAB_71018829a4:
    ppplVar14[3] = (long **)FUN_7101c431e0;
    ppplVar14[4] = (long **)0x0;
    ppplVar14[5] = (long **)0x0;
    ppplVar14[6] = (long **)0x0;
    *ppplVar14 = (long **)&PTR_FUN_71050ad508;
    ppplVar14[2] = (long **)ppppppplVar13;
    pppplVar18 = (long ****)&local_70;
    *(undefined4 *)(ppplVar14 + 1) = 1;
    local_70 = ppplVar14;
    FUN_7103376af0((long)pppppplVar21,(byte *)"decided_priority_sub_window",pppplVar18,ppppbVar19,
                   pppplVar20,param_6,param_7,param_8);
    ppplVar14 = local_70;
    local_70 = (long ***)0x0;
    if (ppplVar14 != (long ***)0x0) {
      (*(code *)(*ppplVar14)[1])();
    }
    pppppplVar21 = ppppppplVar13[8];
    ppplVar14 = (long ***)
                FUN_710392e290(0x10,0x38,pppplVar18,ppppbVar19,pppplVar20,param_6,param_7,param_8);
    if (ppplVar14 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_78 = (long ***)((ulong)local_78._4_4_ << 0x20);
        local_58 = (long ********)&DAT_00000038;
        ppppppppplVar16 = &local_58;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
        if (((uVar8 & 1) != 0) &&
           (ppplVar14 = (long ***)
                        FUN_710392e290(0x10,0x38,(long ****)ppppppppplVar16,ppppbVar19,pppplVar20,
                                       param_6,param_7,param_8), ppplVar14 != (long ***)0x0))
        goto LAB_7101882a54;
      }
      ppplVar14 = (long ***)0x0;
    }
LAB_7101882a54:
    *ppplVar14 = (long **)&PTR_FUN_71050ad4e0;
    ppplVar14[5] = (long **)0x0;
    ppplVar14[6] = (long **)0x0;
    ppplVar14[2] = (long **)ppppppplVar13;
    pppplVar18 = (long ****)&local_78;
    ppplVar14[3] = (long **)FUN_7101c432b0;
    ppplVar14[4] = (long **)0x0;
    *(undefined4 *)(ppplVar14 + 1) = 0;
    local_78 = ppplVar14;
    FUN_7103376af0((long)pppppplVar21,(byte *)"close_priority_sub_window",pppplVar18,ppppbVar19,
                   pppplVar20,param_6,param_7,param_8);
    ppplVar14 = local_78;
    local_78 = (long ***)0x0;
    if (ppplVar14 != (long ***)0x0) {
      (*(code *)(*ppplVar14)[1])();
    }
    pppppplVar21 = ppppppplVar13[8];
    local_58 = (long ********)
               FUN_710392e290(0x10,0x38,pppplVar18,ppppbVar19,pppplVar20,param_6,param_7,param_8);
    if (local_58 == (long ********)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_5c = 0;
        local_58 = (long ********)&DAT_00000038;
        ppppppppplVar16 = &local_58;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_5c);
        if (((uVar8 & 1) != 0) &&
           (local_58 = (long ********)
                       FUN_710392e290(0x10,0x38,(long ****)ppppppppplVar16,ppppbVar19,pppplVar20,
                                      param_6,param_7,param_8), local_58 != (long ********)0x0))
        goto LAB_7101882af8;
      }
      local_58 = (long ********)0x0;
    }
LAB_7101882af8:
    *local_58 = (long *******)&PTR_FUN_71050ad508;
    local_58[3] = (long *******)FUN_7101c432c0;
    local_58[4] = (long *******)0x0;
    local_58[5] = (long *******)0x0;
    local_58[6] = (long *******)0x0;
    ppuVar17 = (undefined **)&local_58;
    local_58[2] = ppppppplVar13;
    *(undefined4 *)(local_58 + 1) = 1;
    FUN_7103376af0((long)pppppplVar21,(byte *)"is_busy_priority_sub_window",(long ****)ppuVar17,
                   ppppbVar19,pppplVar20,param_6,param_7,param_8);
    pppppppplVar5 = local_58;
    local_58 = (long ********)0x0;
    if (pppppppplVar5 != (long ********)0x0) {
      (*(code *)(*pppppppplVar5)[1])();
    }
  }
  if (1 < (ulong)((long)ppppppplVar13[3] - (long)ppppppplVar13[2] >> 3)) {
    FUN_7101ca4730((long)(ppppppplVar13 + 0x20),ppppppplVar13[2][1],ppuVar17,ppppbVar19,pppplVar20,
                   param_6,param_7,param_8);
    ppppppplVar13[0xe] = (long ******)FUN_7101c43430;
    ppppppplVar13[0xf] = (long ******)0x0;
    ppppppplVar13[0x10] = (long ******)FUN_7101c435f0;
    ppppppplVar13[0x11] = (long ******)0x0;
    ppppppplVar13[0x12] = (long ******)FUN_7101c43600;
    ppppppplVar13[0x13] = (long ******)0x0;
    if (*(uint *)((long)ppppppplVar13 + 0xec) < 0x13) {
      *(undefined4 *)
       ((long)ppppppplVar13 + (long)(int)*(uint *)((long)ppppppplVar13 + 0xec) * 4 + 0xa0) = 1;
      puVar9[0x10] = ppppppplVar13;
      puVar9[2] = &DAT_7105333600;
      uVar4 = DAT_7105333664;
      *(undefined4 *)(puVar9 + 0xd) = DAT_7105333660;
      *(undefined4 *)((long)puVar9 + 0x6c) = uVar4;
      do {
        uVar3 = DAT_7105333650;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
        if (bVar2) {
          DAT_7105333650 = 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0' || (uVar3 & 1) != 0);
      puVar9[9] = DAT_7105333648;
      DAT_7105333650 = 0;
      DAT_7105333648 = puVar9;
      FUN_71032caea0((long)puVar9,extraout_x1_07,(long ****)ppuVar17,ppppbVar19,pppplVar20,param_6,
                     param_7,param_8);
      lVar12 = *(long *)(lVar7 + 0xd8);
      *(undefined8 **)(lVar7 + 0xd8) = puVar9;
      if (lVar12 != 0) {
        FUN_71032cad20(lVar12);
        return;
      }
      return;
    }
LAB_7101882c88:
                    /* WARNING: Subroutine does not return */
    abort();
  }
LAB_7101882c80:
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}

