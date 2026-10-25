// addr:      7101854680
// offset:    0x1854680
// name:      FUN_7101854680
// mangled:   
// signature: undefined __cdecl FUN_7101854680(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101854680(long param_1,long param_2,long *********param_3,byte ****param_4,
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
  long *****ppppplVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 uVar15;
  long *********ppppppppplVar16;
  undefined **ppuVar17;
  byte ****ppppbVar18;
  long ****pppplVar19;
  byte ****ppppbVar20;
  long ******pppppplVar21;
  undefined1 auVar22 [16];
  long ********local_48;
  undefined4 local_34;
  
  lVar7 = FUN_710392e290(0x10,0xe0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (lVar7 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_48 = (long ********)&DAT_000000e0;
      param_3 = &local_48;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar8 & 1) != 0) &&
         (lVar7 = FUN_710392e290(0x10,0xe0,(long ****)param_3,param_4,param_5,param_6,param_7,
                                 param_8), lVar7 != 0)) goto LAB_71018546fc;
    }
    lVar7 = 0;
  }
LAB_71018546fc:
  *(undefined8 *)(lVar7 + 0x10) = 0;
  *(undefined8 *)(lVar7 + 0x18) = 0;
  *(undefined4 *)(lVar7 + 0xb0) = 0xffffffff;
  *(long *)lVar7 = lVar7;
  *(undefined8 *)(lVar7 + 8) = 0;
  *(undefined1 *)(lVar7 + 0xb4) = 0;
  *(undefined4 *)(lVar7 + 0xb8) = 0;
  *(undefined8 *)(lVar7 + 0xa0) = 0;
  *(undefined8 *)(lVar7 + 0xa8) = 0xffffffff;
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
      local_34 = 0;
      local_48 = (long ********)&DAT_00000080;
      param_3 = &local_48;
      auVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      uVar15 = auVar22._8_8_;
      if (((auVar22._0_8_ & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), uVar15 = extraout_x1_00, puVar9 != (undefined8 *)0x0))
      goto LAB_710185478c;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_710185478c:
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
  puVar9[9] = 0;
  puVar9[10] = puVar9 + 0xb;
  puVar9[0xc] = 0;
  *(undefined4 *)(puVar9 + 0xd) = 2;
  *(undefined4 *)(puVar9 + 0xf) = 0;
  puVar9[0xe] = 0;
  *(undefined8 **)(lVar7 + 0xc0) = puVar9;
  *(undefined1 *)(lVar7 + 0xd8) = 0;
  *(code **)(lVar7 + 0x28) = FUN_71018540f0;
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(code **)(lVar7 + 0x38) = FUN_7101854190;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(undefined8 *)(lVar7 + 200) = 0;
  *(undefined8 *)(lVar7 + 0xd0) = 0;
  *(code **)(lVar7 + 0x48) = FUN_7101854330;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  if (0x12 < *(uint *)(lVar7 + 0xa4)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(lVar7 + (long)(int)*(uint *)(lVar7 + 0xa4) * 4 + 0x58) = 0;
  puVar9 = *(undefined8 **)(param_2 + 0xa8);
  if (puVar9 != (undefined8 *)0x0) {
    if (((DAT_71053248a8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053248a8), iVar6 != 0)) {
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
      DAT_71053248b0 = &DAT_7105324760;
      __cxa_guard_release(&DAT_71053248a8);
    }
    auVar22 = (**(code **)*puVar9)(puVar9);
    uVar15 = auVar22._8_8_;
    for (puVar10 = auVar22._0_8_; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10) {
      if ((undefined8 **)puVar10 == &DAT_71053248b0) {
        *(undefined1 *)(lVar7 + 0xd8) = *(undefined1 *)(puVar9 + 1);
        break;
      }
    }
  }
  uVar8 = *(ulong *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar7;
  if (uVar8 != 0) {
    lVar7 = *(long *)(uVar8 + 200);
    *(undefined8 *)(uVar8 + 200) = 0;
    if (lVar7 != 0) {
      FUN_71032cad20(lVar7);
      uVar15 = extraout_x1_01;
    }
    FUN_710323b9e0(*(long *)(uVar8 + 0xc0),uVar15,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar11 = *(long **)(uVar8 + 0xc0);
    *(undefined8 *)(uVar8 + 0xc0) = 0;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 8))();
    }
    FUN_710392eb40(uVar8);
    lVar7 = *(long *)(param_1 + 0x58);
  }
  plVar11 = (long *)(lVar7 + 0xc0);
  lVar12 = *plVar11;
  FUN_710323beb0(lVar12,(ulong *)&DAT_7104544e40,(long)*(int *)(lVar12 + 0x70),
                 (ulong)*(uint *)(lVar12 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar12 = *plVar11;
  local_48 = (long ********)0x1dd5d06117;
  FUN_710323beb0(lVar12,(ulong *)&local_48,(long)*(int *)(lVar12 + 0x70),
                 (ulong)*(uint *)(lVar12 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar12 = *plVar11;
  local_48 = (long ********)0x22f525ad60;
  FUN_710323beb0(lVar12,(ulong *)&local_48,(long)*(int *)(lVar12 + 0x70),
                 (ulong)*(uint *)(lVar12 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar12 = *plVar11;
  ppppppppplVar16 = (long *********)(long)*(int *)(lVar12 + 0x70);
  ppppbVar18 = (byte ****)(ulong)*(uint *)(lVar12 + 0x68);
  pppplVar19 = (long ****)0x1;
  FUN_710323beb0(lVar12,(ulong *)&DAT_7104544e48,(long)ppppppppplVar16,(ulong)ppppbVar18,
                 (long ****)0x1,param_6,param_7,param_8);
  lVar12 = *plVar11;
  uVar8 = FUN_710323cb80(lVar12,extraout_x1_02,ppppppppplVar16,ppppbVar18,pppplVar19,param_6,param_7
                         ,param_8);
  while ((uVar8 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar8 = FUN_710323cb80(lVar12,extraout_x1_03,ppppppppplVar16,ppppbVar18,pppplVar19,param_6,
                           param_7,param_8);
  }
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar16,ppppbVar18,pppplVar19,param_6,param_7
                          ,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_48 = (long ********)&DAT_00000088;
      ppppppppplVar16 = &local_48;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar8 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar16,ppppbVar18,pppplVar19,param_6
                                  ,param_7,param_8), puVar9 != (undefined8 *)0x0))
      goto LAB_71018549cc;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71018549cc:
  ppppbVar20 = (byte ****)(ulong)*(byte *)(lVar7 + 0xd8);
  *puVar9 = &PTR_FUN_71050ac130;
  puVar9[1] = 0;
  puVar9[0xc] = 0;
  puVar9[0xd] = 0x1ffffffff;
  *(undefined1 *)(puVar9 + 0xb) = 0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  puVar9[0xf] = plVar11;
  *(undefined1 *)(puVar9 + 0xe) = 1;
  puVar9[9] = 0;
  puVar9[10] = 0;
  ppppppplVar13 =
       (long *******)
       FUN_710392e290(0x10,0x48,(long ****)ppppppppplVar16,ppppbVar18,pppplVar19,param_6,param_7,
                      param_8);
  if (ppppppplVar13 == (long *******)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_48 = (long ********)&DAT_00000048;
      ppppppppplVar16 = &local_48;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar8 & 1) != 0) &&
         (ppppppplVar13 =
               (long *******)
               FUN_710392e290(0x10,0x48,(long ****)ppppppppplVar16,ppppbVar18,pppplVar19,param_6,
                              param_7,param_8), ppppppplVar13 != (long *******)0x0))
      goto LAB_7101854a58;
    }
    ppppppplVar13 = (long *******)0x0;
  }
LAB_7101854a58:
  *(undefined4 *)(ppppppplVar13 + 1) = 0x1000;
  ppppppplVar13[3] = (long ******)0x0;
  ppppppplVar13[4] = (long ******)0x0;
  ppppppplVar13[2] = (long ******)0x0;
  ppuVar17 = &PTR_DAT_71050ac110;
  ppppbVar18 = (byte ****)0x2987f45fc2;
  pppplVar19 = (long ****)0x1;
  ppppppplVar13[6] = (long ******)0x0;
  ppppppplVar13[5] = (long ******)(ppppppplVar13 + 6);
  *ppppppplVar13 = (long ******)&DAT_71050ac168;
  ppppppplVar13[7] = (long ******)0x0;
  ppppppplVar13[8] = (long ******)0x0;
  FUN_71032cb040((long)ppppppplVar13,plVar11,(long ****)&PTR_DAT_71050ac110,(byte ****)0x2987f45fc2,
                 (long ****)0x1,param_6,param_7,param_8);
  uVar15 = extraout_x1_04;
  if (ppppppplVar13[8] == (long ******)0x0) goto LAB_7101854d7c;
  ppppplVar14 = *ppppppplVar13[8];
  if (ppppplVar14 != (long *****)0x0) {
    ppuVar17 = (undefined **)&DAT_71042b2a84;
    FUN_7103375650((long *)ppppplVar14,"MELEE_NORMAL",&DAT_71042b2a84);
    if (*ppppppplVar13[8] != (long *****)0x0) {
      ppuVar17 = (undefined **)&DAT_71042b2a84;
      FUN_7103375650((long *)*ppppppplVar13[8],"MELEE_TEAM_COMPE",&DAT_71042b2a84);
      if (*ppppppplVar13[8] != (long *****)0x0) {
        ppuVar17 = (undefined **)&DAT_71042b2a84;
        FUN_7103375650((long *)*ppppppplVar13[8],"MELEE_SPECIAL_VARIOS",&DAT_71042b2a84);
        if (*ppppppplVar13[8] != (long *****)0x0) {
          ppuVar17 = (undefined **)&DAT_71042b2a84;
          FUN_7103375650((long *)*ppppppplVar13[8],"MELEE_SPECIAL_SUDDENDEATH",&DAT_71042b2a84);
          if (*ppppppplVar13[8] != (long *****)0x0) {
            ppuVar17 = (undefined **)&DAT_71042b2a84;
            FUN_7103375650((long *)*ppppppplVar13[8],"SPIRITS_CHALLENGE",&DAT_71042b2a84);
            if (*ppppppplVar13[8] != (long *****)0x0) {
              ppuVar17 = (undefined **)&DAT_71042b2a84;
              FUN_7103375650((long *)*ppppppplVar13[8],"OTHER_KUMITE_100",&DAT_71042b2a84);
              if (*ppppppplVar13[8] != (long *****)0x0) {
                ppuVar17 = (undefined **)&DAT_71042b2a84;
                FUN_7103375650((long *)*ppppppplVar13[8],"OTHER_KUMITE_ALLSTAR",&DAT_71042b2a84);
                if (*ppppppplVar13[8] != (long *****)0x0) {
                  ppuVar17 = (undefined **)&DAT_71042b2a84;
                  FUN_7103375650((long *)*ppppppplVar13[8],"OTHER_KUMITE_CRUEL",&DAT_71042b2a84);
                }
              }
            }
          }
        }
      }
    }
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
    FUN_7101764000();
    ppuVar17 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  pppppplVar21 = ppppppplVar13[8];
  ppppbVar18 = (byte ****)0x0;
  if ((int)DAT_7105306478 < 0x3010000) {
    if ((int)DAT_7105306478 == 0x2020000) {
      ppppbVar18 = (byte ****)0x1;
      ppppplVar14 = *pppppplVar21;
    }
    else if ((int)DAT_7105306478 == 0x2030100) {
      ppppbVar18 = (byte ****)0x2;
      ppppplVar14 = *pppppplVar21;
    }
    else {
      if ((int)DAT_7105306478 != 0x2030200) goto LAB_7101854c94;
      ppppbVar18 = (byte ****)0x3;
      ppppplVar14 = *pppppplVar21;
    }
  }
  else if ((int)DAT_7105306478 < 0x4020200) {
    if ((int)DAT_7105306478 == 0x3010000) {
      ppppbVar18 = (byte ****)&DAT_00000004;
      ppppplVar14 = *pppppplVar21;
    }
    else {
      if ((int)DAT_7105306478 != 0x4020100) goto LAB_7101854c94;
      ppppbVar18 = (byte ****)0x5;
      ppppplVar14 = *pppppplVar21;
    }
  }
  else if ((int)DAT_7105306478 == 0x4020200) {
    ppppbVar18 = (byte ****)0x6;
    ppppplVar14 = *pppppplVar21;
  }
  else {
    if ((int)DAT_7105306478 == 0x4020300) {
      ppppbVar18 = (byte ****)&DAT_00000007;
    }
LAB_7101854c94:
    ppppplVar14 = *pppppplVar21;
  }
  if (ppppplVar14 != (long *****)0x0) {
    ppuVar17 = (undefined **)&DAT_71042b2a84;
    FUN_7103375650((long *)ppppplVar14,"ROOT_TYPE",&DAT_71042b2a84);
    pppppplVar21 = ppppppplVar13[8];
    if (*pppppplVar21 != (long *****)0x0) {
      ppuVar17 = (undefined **)&DAT_71042b2a84;
      FUN_7103375650((long *)*pppppplVar21,"CANCELLED",&DAT_71042b2a84);
      pppppplVar21 = ppppppplVar13[8];
      ppppbVar18 = ppppbVar20;
    }
  }
  local_48 = (long ********)
             FUN_710392e290(0x10,0x28,(long ****)ppuVar17,ppppbVar18,pppplVar19,param_6,param_7,
                            param_8);
  if (local_48 == (long ********)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_48 = (long ********)&DAT_00000028;
      ppppppppplVar16 = &local_48;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar8 & 1) != 0) &&
         (local_48 = (long ********)
                     FUN_710392e290(0x10,0x28,(long ****)ppppppppplVar16,ppppbVar18,pppplVar19,
                                    param_6,param_7,param_8), local_48 != (long ********)0x0))
      goto LAB_7101854d2c;
    }
    local_48 = (long ********)0x0;
  }
LAB_7101854d2c:
  *local_48 = (long *******)&PTR_FUN_71050ac1b0;
  local_48[4] = (long *******)0x0;
  local_48[2] = ppppppplVar13;
  local_48[3] = (long *******)FUN_7101bd2cf0;
  *(undefined4 *)(local_48 + 1) = 0;
  ppuVar17 = (undefined **)&local_48;
  FUN_7103376af0((long)pppppplVar21,(byte *)"set_mode",(long ****)ppuVar17,ppppbVar18,pppplVar19,
                 param_6,param_7,param_8);
  pppppppplVar5 = local_48;
  local_48 = (long ********)0x0;
  uVar15 = extraout_x1_05;
  if (pppppppplVar5 != (long ********)0x0) {
    (*(code *)(*pppppppplVar5)[1])();
    uVar15 = extraout_x1_06;
  }
LAB_7101854d7c:
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
  FUN_71032caea0((long)puVar9,uVar15,(long ****)ppuVar17,ppppbVar18,pppplVar19,param_6,param_7,
                 param_8);
  lVar12 = *(long *)(lVar7 + 200);
  *(undefined8 **)(lVar7 + 200) = puVar9;
  if (lVar12 != 0) {
    FUN_71032cad20(lVar12);
    return;
  }
  return;
}

