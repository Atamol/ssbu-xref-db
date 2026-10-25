// addr:      7101a7b780
// offset:    0x1a7b780
// name:      FUN_7101a7b780
// mangled:   
// signature: undefined __cdecl FUN_7101a7b780(long param_1, int param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a7b780(long param_1,int param_2,long *********param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  ushort uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long *********ppppppppplVar6;
  long ****pppplVar7;
  byte ****ppppbVar8;
  ulong uVar9;
  long ******pppppplVar10;
  long *plVar11;
  long *******ppppppplVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  undefined **local_140;
  ulong local_138;
  undefined **local_130;
  ulong local_128;
  undefined **local_120;
  ulong local_118;
  undefined **local_110;
  ulong local_108;
  undefined **local_100;
  ulong local_f8;
  undefined **local_f0;
  ulong local_e8;
  undefined **local_e0;
  ulong local_d8;
  undefined **local_d0;
  ulong local_c8;
  undefined **local_c0;
  ulong local_b8;
  undefined **local_b0;
  ulong local_a8;
  undefined **local_a0;
  ulong local_98;
  undefined **local_90;
  ulong local_88;
  long ********local_80;
  undefined **local_78;
  ulong local_70;
  long ********local_68;
  long *local_60;
  undefined4 local_54;
  
  lVar13 = *(long *)(param_1 + 0x200);
  uVar9 = (*(long *)(param_1 + 0x208) - lVar13 >> 3) * -0x71c71c71c71c71c7;
  uVar17 = (ulong)param_2;
  if (uVar9 < uVar17 || uVar9 - uVar17 == 0) {
    FUN_7103776390(&local_78,param_3,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    plVar4 = (long *)FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,
                                    param_8);
    if (plVar4 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_80 = (long ********)((ulong)local_80 & 0xffffffff00000000);
        local_68 = (long ********)&DAT_00000008;
        param_3 = &local_68;
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
        if (((uVar9 & 1) != 0) &&
           (plVar4 = (long *)FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,
                                            param_7,param_8), plVar4 != (long *)0x0))
        goto LAB_7101a7b9b4;
      }
      plVar4 = (long *)0x0;
    }
LAB_7101a7b9b4:
    *plVar4 = 0;
    lVar13 = *(long *)(local_70 + 8);
    if ((lVar13 == 0) || (*(long *)(lVar13 + 0x60) == 0)) {
      *plVar4 = 0;
    }
    else {
      plVar15 = (long *)FUN_7103796f20(*(long *)(lVar13 + 0x60),*(long *)(lVar13 + 0x18) + 0xb0);
      *plVar4 = (long)plVar15;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x208))(plVar15,0);
        uVar9 = (**(code **)(*plVar15 + 0x200))(plVar15);
        if ((uVar9 & 1) == 0) {
          uVar3 = 1;
        }
        else {
          uVar3 = (**(code **)(*plVar15 + 0x210))(plVar15);
          uVar3 = uVar3 ^ 1;
        }
        param_3 = (long *********)0x0;
        (**(code **)(*plVar15 + 0x388))(plVar15,uVar3 & 1);
      }
    }
    FUN_710392eb40((ulong)plVar4);
    plVar4 = (long *)FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,
                                    param_8);
    if (plVar4 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_80 = (long ********)((ulong)local_80 & 0xffffffff00000000);
        local_68 = (long ********)&DAT_00000008;
        param_3 = &local_68;
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
        if (((uVar9 & 1) != 0) &&
           (plVar4 = (long *)FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,
                                            param_7,param_8), plVar4 != (long *)0x0))
        goto LAB_7101a7c2f8;
      }
      plVar4 = (long *)0x0;
    }
LAB_7101a7c2f8:
    *plVar4 = 0;
    lVar13 = *(long *)(local_70 + 8);
    if ((lVar13 == 0) || (*(long *)(lVar13 + 0x60) == 0)) {
      *plVar4 = 0;
    }
    else {
      plVar15 = (long *)FUN_7103796f20(*(long *)(lVar13 + 0x60),*(long *)(lVar13 + 0x18) + 0xb0);
      *plVar4 = (long)plVar15;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x1f8))(plVar15,0);
        uVar9 = (**(code **)(*plVar15 + 0x200))(plVar15);
        if ((uVar9 & 1) == 0) {
          uVar3 = 1;
        }
        else {
          uVar3 = (**(code **)(*plVar15 + 0x210))(plVar15);
          uVar3 = uVar3 ^ 1;
        }
        param_3 = (long *********)0x0;
        (**(code **)(*plVar15 + 0x388))(plVar15,uVar3 & 1);
      }
    }
    FUN_710392eb40((ulong)plVar4);
    FUN_71037780e0(&local_68,(long)&local_78,(long ****)"grayout",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_710377b140((long)&local_68);
    plVar4 = local_60;
    local_68 = (long ********)&PTR_FUN_710523d9e8;
    local_60 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar4);
    }
    uVar9 = local_70;
    local_78 = &PTR_FUN_710523d988;
    local_70 = 0;
    if (uVar9 == 0) {
      return;
    }
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    goto LAB_7101a7c3e4;
  }
  if ((param_3[1][1] != (long *******)0x0) &&
     (pppppplVar10 = param_3[1][1][3], pppppplVar10 != (long ******)0x0)) {
    *(byte *)(pppppplVar10 + 0xb) = *(byte *)(pppppplVar10 + 0xb) | 1;
    lVar13 = *(long *)(param_1 + 0x200);
  }
  uVar2 = *(ushort *)(lVar13 + uVar17 * 0x48 + 0x30);
  plVar15 = (long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2e8) + 0x18);
  plVar16 = (long *)*plVar15;
  local_80 = (long ********)0x1effff0000000000;
  plVar4 = plVar15;
  if (plVar16 != (long *)0x0) {
    do {
      if (*(ushort *)(plVar16 + 4) >= uVar2) {
        plVar4 = plVar16;
      }
      plVar16 = (long *)plVar16[*(ushort *)(plVar16 + 4) < uVar2];
    } while (plVar16 != (long *)0x0);
    if ((plVar4 != plVar15) && (*(ushort *)(plVar4 + 4) <= uVar2)) {
      local_80 = (long ********)plVar4[5];
    }
  }
  ppppppppplVar6 = param_3;
  FUN_7103776390(&local_90,param_3,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  plVar4 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar6,param_4,param_5,param_6,param_7,
                                  param_8);
  if (plVar4 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_68 = (long ********)&DAT_00000008;
      ppppppppplVar6 = &local_68;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      if (((uVar9 & 1) != 0) &&
         (plVar4 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar6,param_4,param_5,param_6,
                                          param_7,param_8), plVar4 != (long *)0x0))
      goto LAB_7101a7b8c4;
    }
    plVar4 = (long *)0x0;
  }
LAB_7101a7b8c4:
  *plVar4 = 0;
  lVar13 = *(long *)(local_88 + 8);
  if ((lVar13 == 0) || (*(long *)(lVar13 + 0x60) == 0)) {
    *plVar4 = 0;
  }
  else {
    plVar15 = (long *)FUN_7103796f20(*(long *)(lVar13 + 0x60),*(long *)(lVar13 + 0x18) + 0xb0);
    *plVar4 = (long)plVar15;
    if (plVar15 != (long *)0x0) {
      uVar3 = 1;
      (**(code **)(*plVar15 + 0x208))(plVar15,1);
      uVar9 = (**(code **)(*plVar15 + 0x200))(plVar15);
      if ((uVar9 & 1) != 0) {
        uVar3 = (**(code **)(*plVar15 + 0x210))(plVar15);
        uVar3 = uVar3 ^ 1;
      }
      ppppppppplVar6 = (long *********)0x0;
      (**(code **)(*plVar15 + 0x388))(plVar15,uVar3 & 1);
    }
  }
  FUN_710392eb40((ulong)plVar4);
  plVar4 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar6,param_4,param_5,param_6,param_7,
                                  param_8);
  if (plVar4 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_68 = (long ********)&DAT_00000008;
      ppppppppplVar6 = &local_68;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      if (((uVar9 & 1) != 0) &&
         (plVar4 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar6,param_4,param_5,param_6,
                                          param_7,param_8), plVar4 != (long *)0x0))
      goto LAB_7101a7ba88;
    }
    plVar4 = (long *)0x0;
  }
LAB_7101a7ba88:
  *plVar4 = 0;
  lVar13 = *(long *)(local_88 + 8);
  if ((lVar13 == 0) || (*(long *)(lVar13 + 0x60) == 0)) {
    *plVar4 = 0;
  }
  else {
    plVar15 = (long *)FUN_7103796f20(*(long *)(lVar13 + 0x60),*(long *)(lVar13 + 0x18) + 0xb0);
    *plVar4 = (long)plVar15;
    if (plVar15 != (long *)0x0) {
      uVar3 = 1;
      (**(code **)(*plVar15 + 0x1f8))(plVar15,1);
      uVar9 = (**(code **)(*plVar15 + 0x200))(plVar15);
      if ((uVar9 & 1) != 0) {
        uVar3 = (**(code **)(*plVar15 + 0x210))(plVar15);
        uVar3 = uVar3 ^ 1;
      }
      ppppppppplVar6 = (long *********)0x0;
      (**(code **)(*plVar15 + 0x388))(plVar15,uVar3 & 1);
    }
  }
  FUN_710392eb40((ulong)plVar4);
  FUN_71037780e0(&local_68,(long)&local_90,(long ****)"grayout",ppppppppplVar6,param_4,param_5,
                 param_6,param_7,param_8);
  plVar4 = local_60;
  plVar15 = (long *)local_60[1];
  if (plVar15 == (long *)0x0) {
    local_68 = (long ********)&PTR_FUN_710523d9e8;
    local_60 = (long *)0x0;
    if (plVar4 != (long *)0x0) goto LAB_7101a7bc40;
  }
  else {
    if ((char)local_60[2] != '\0') {
      plVar18 = *(long **)(*local_60 + 0x80);
      plVar16 = (long *)(*local_60 + 0x88);
      if (plVar18 != plVar16) {
        do {
          while( true ) {
            uVar9 = (**(code **)(*(long *)plVar18[0xd] + 0x148))();
            if (((uVar9 & 1) != 0) &&
               (uVar9 = (**(code **)(*plVar15 + 0x120))(plVar15,plVar18[0xd]), (uVar9 & 1) != 0)) {
              (**(code **)(*(long *)plVar18[0xd] + 0x178))();
              (**(code **)(*(long *)plVar18[0xd] + 0x140))((long *)plVar18[0xd],0);
            }
            plVar11 = (long *)plVar18[1];
            if ((long *)plVar18[1] == (long *)0x0) break;
            do {
              plVar18 = plVar11;
              plVar11 = (long *)*plVar18;
            } while ((long *)*plVar18 != (long *)0x0);
LAB_7101a7bbf4:
            if (plVar18 == plVar16) goto LAB_7101a7bc0c;
          }
          plVar11 = plVar18 + 2;
          plVar14 = (long *)*plVar11;
          if ((long *)*plVar14 != plVar18) {
            do {
              lVar13 = *plVar11;
              plVar11 = (long *)(lVar13 + 0x10);
              plVar18 = (long *)*plVar11;
            } while (*plVar18 != lVar13);
            goto LAB_7101a7bbf4;
          }
          plVar18 = plVar14;
        } while (plVar14 != plVar16);
LAB_7101a7bc0c:
        plVar15 = (long *)local_60[1];
      }
    }
    (**(code **)(*plVar15 + 0x188))(plVar15);
LAB_7101a7bc40:
    local_60 = (long *)0x0;
    local_68 = (long ********)&PTR_FUN_710523d9e8;
    FUN_710392eb40((ulong)plVar4);
  }
  uVar9 = local_88;
  local_90 = &PTR_FUN_710523d988;
  local_88 = 0;
  if (uVar9 != 0) {
    uVar5 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar9);
  }
  FUN_7103776390(&local_a0,param_3,(long ****)ppppppppplVar6,param_4,param_5,param_6,param_7,param_8
                );
  pppplVar7 = (long ****)(ulong)*(byte *)(*(long *)(param_1 + 0x200) + uVar17 * 0x48 + 0x32);
  FUN_7103778430((long)&local_a0,"tagcolor_%02d",pppplVar7,param_4,param_5,param_6,param_7,param_8);
  uVar9 = local_98;
  local_a0 = &PTR_FUN_710523d988;
  local_98 = 0;
  if (uVar9 != 0) {
    uVar5 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar9);
  }
  FUN_7103776390(&local_b0,param_3,pppplVar7,param_4,param_5,param_6,param_7,param_8);
  ppppbVar8 = (byte ****)(*(long *)(param_1 + 0x200) + uVar17 * 0x48 + 0xc);
  FUN_7103776910(&local_68,(long)&local_b0,(long ****)"set_txt_name",pppplVar7,param_4,param_5,
                 param_6,param_7,param_8);
  pppplVar7 = (long ****)0x1;
  FUN_710377a280((long)&local_68,(byte *)"mnu_opt_online_nickname",1);
  plVar4 = local_60;
  local_68 = (long ********)&PTR_FUN_710523d9a8;
  local_60 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar4);
  }
  uVar9 = local_a8;
  local_b0 = &PTR_FUN_710523d988;
  local_a8 = 0;
  if (uVar9 != 0) {
    uVar5 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar9);
  }
  FUN_7103776390(&local_c0,param_3,pppplVar7,ppppbVar8,param_5,param_6,param_7,param_8);
  uVar3 = *(uint *)(*(long *)(param_1 + 0x200) + uVar17 * 0x48 + 0x24);
  FUN_7103776910(&local_68,(long)&local_c0,(long ****)"set_txt_win_count",pppplVar7,ppppbVar8,
                 param_5,param_6,param_7,param_8);
  pppplVar7 = (long ****)0x1;
  ppppbVar8 = (byte ****)(ulong)uVar3;
  FUN_710377a280((long)&local_68,(byte *)"mnu_opponents_card_win_n",1);
  plVar4 = local_60;
  local_68 = (long ********)&PTR_FUN_710523d9a8;
  local_60 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar4);
  }
  uVar9 = local_b8;
  local_c0 = &PTR_FUN_710523d988;
  local_b8 = 0;
  if (uVar9 != 0) {
    uVar5 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar9);
  }
  FUN_7103776390(&local_d0,param_3,pppplVar7,ppppbVar8,param_5,param_6,param_7,param_8);
  pcVar1 = "new_off";
  if (*(char *)(*(long *)(param_1 + 0x200) + uVar17 * 0x48 + 0x28) != '\0') {
    pcVar1 = "new_on";
  }
  FUN_7103778300(0x3f800000,local_c8,(long)pcVar1);
  uVar9 = local_c8;
  local_d0 = &PTR_FUN_710523d988;
  local_c8 = 0;
  if (uVar9 != 0) {
    uVar5 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar9);
  }
  FUN_7103776390(&local_e0,param_3,pppplVar7,ppppbVar8,param_5,param_6,param_7,param_8);
  pcVar1 = "favorite_off";
  if (*(char *)(*(long *)(param_1 + 0x200) + uVar17 * 0x48 + 0x29) != '\0') {
    pcVar1 = "favorite_on";
  }
  FUN_7103778300(0x3f800000,local_d8,(long)pcVar1);
  uVar9 = local_d8;
  local_e0 = &PTR_FUN_710523d988;
  local_d8 = 0;
  if (uVar9 != 0) {
    uVar5 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar9);
  }
  FUN_7103776390(&local_f0,param_3,pppplVar7,ppppbVar8,param_5,param_6,param_7,param_8);
  pcVar1 = "friend_off";
  if (*(char *)(*(long *)(param_1 + 0x200) + uVar17 * 0x48 + 0x2a) != '\0') {
    pcVar1 = "friend_on";
  }
  FUN_7103778300(0x3f800000,local_e8,(long)pcVar1);
  uVar9 = local_e8;
  local_f0 = &PTR_FUN_710523d988;
  local_e8 = 0;
  if (uVar9 != 0) {
    uVar5 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar9);
  }
  plVar4 = *(long **)(param_1 + 0x140);
  FUN_7103776390(&local_100,param_3,pppplVar7,ppppbVar8,param_5,param_6,param_7,param_8);
  FUN_7101aeec40(plVar4,(long)&local_100,
                 (long *********)(*(long *)(param_1 + 0x200) + uVar17 * 0x48 + 0x34),ppppbVar8,
                 param_5,param_6,param_7,param_8);
  uVar9 = local_f8;
  local_100 = &PTR_FUN_710523d988;
  local_f8 = 0;
  if (uVar9 != 0) {
    uVar5 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar9);
  }
  ppppppppplVar6 = &local_80;
  FUN_7101aeeea0(*(long **)(param_1 + 0x140),(long)param_3,ppppppppplVar6,ppppbVar8,param_5,param_6,
                 param_7,param_8);
  if (*(int *)(param_1 + 0x130) == 4) {
    FUN_7103776390(&local_110,param_3,(long ****)ppppppppplVar6,ppppbVar8,param_5,param_6,param_7,
                   param_8);
    pcVar1 = "uncheck_off";
    if (*(char *)(*(long *)(param_1 + 0x200) + uVar17 * 0x48 + 0x29) != '\0') {
      pcVar1 = "uncheck_on";
    }
    FUN_7103778300(0x3f800000,local_108,(long)pcVar1);
    uVar9 = local_108;
    local_110 = &PTR_FUN_710523d988;
    local_108 = 0;
    if (uVar9 != 0) {
      uVar5 = *(ulong *)(uVar9 + 0x18);
      *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar9 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar9);
    }
    if (*(char *)(*(long *)(param_1 + 0x200) + uVar17 * 0x48 + 0x29) == '\0') {
      FUN_7103776390(&local_120,param_3,(long ****)ppppppppplVar6,ppppbVar8,param_5,param_6,param_7,
                     param_8);
      pcVar1 = "check_off";
      if (*(char *)(*(long *)(param_1 + 0x200) + uVar17 * 0x48 + 0x2b) != '\0') {
        pcVar1 = "check_on";
      }
      FUN_7103778300(0x3f800000,local_118,(long)pcVar1);
      uVar9 = local_118;
      local_120 = &PTR_FUN_710523d988;
      local_118 = 0;
      if (uVar9 != 0) {
        uVar17 = *(ulong *)(uVar9 + 0x18);
        *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar9 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar9);
      }
    }
    plVar4 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar6,ppppbVar8,param_5,param_6,
                                    param_7,param_8);
    if (plVar4 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_54 = 0;
        local_68 = (long ********)&DAT_00000008;
        ppppppppplVar6 = &local_68;
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
        if (((uVar9 & 1) != 0) &&
           (plVar4 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar6,ppppbVar8,param_5,
                                            param_6,param_7,param_8), plVar4 != (long *)0x0))
        goto LAB_7101a7c0a4;
      }
      plVar4 = (long *)0x0;
    }
LAB_7101a7c0a4:
    *plVar4 = 0;
    ppppppplVar12 = param_3[1][1];
    if ((ppppppplVar12 == (long *******)0x0) || (ppppppplVar12[0xc] == (long ******)0x0)) {
LAB_7101a7c238:
      *plVar4 = 0;
    }
    else {
      plVar15 = (long *)FUN_7103796f20((long)ppppppplVar12[0xc],(long)(ppppppplVar12[3] + 0x16));
      *plVar4 = (long)plVar15;
      if (plVar15 != (long *)0x0) {
        uVar3 = 1;
        (**(code **)(*plVar15 + 0x208))(plVar15,1);
        uVar9 = (**(code **)(*plVar15 + 0x200))(plVar15);
        if ((uVar9 & 1) != 0) {
          uVar3 = (**(code **)(*plVar15 + 0x210))(plVar15);
          uVar3 = uVar3 ^ 1;
        }
        ppppppppplVar6 = (long *********)0x0;
        (**(code **)(*plVar15 + 0x388))(plVar15,uVar3 & 1);
      }
    }
  }
  else {
    FUN_7103776390(&local_130,param_3,(long ****)ppppppppplVar6,ppppbVar8,param_5,param_6,param_7,
                   param_8);
    FUN_7103778300(0x3f800000,local_128,0x7104292479);
    uVar9 = local_128;
    local_130 = &PTR_FUN_710523d988;
    local_128 = 0;
    if (uVar9 != 0) {
      uVar17 = *(ulong *)(uVar9 + 0x18);
      *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar9 + 0x18) = 0;
      if (uVar17 != 0) {
        FUN_710392eb40(uVar17);
      }
      FUN_710392eb40(uVar9);
    }
    plVar4 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar6,ppppbVar8,param_5,param_6,
                                    param_7,param_8);
    if (plVar4 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_54 = 0;
        local_68 = (long ********)&DAT_00000008;
        ppppppppplVar6 = &local_68;
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
        if (((uVar9 & 1) != 0) &&
           (plVar4 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar6,ppppbVar8,param_5,
                                            param_6,param_7,param_8), plVar4 != (long *)0x0))
        goto LAB_7101a7c1cc;
      }
      plVar4 = (long *)0x0;
    }
LAB_7101a7c1cc:
    *plVar4 = 0;
    ppppppplVar12 = param_3[1][1];
    if ((ppppppplVar12 == (long *******)0x0) || (ppppppplVar12[0xc] == (long ******)0x0))
    goto LAB_7101a7c238;
    plVar15 = (long *)FUN_7103796f20((long)ppppppplVar12[0xc],(long)(ppppppplVar12[3] + 0x16));
    *plVar4 = (long)plVar15;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x208))(plVar15,0);
      uVar9 = (**(code **)(*plVar15 + 0x200))(plVar15);
      if ((uVar9 & 1) == 0) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)(*plVar15 + 0x210))(plVar15);
        uVar3 = uVar3 ^ 1;
      }
      ppppppppplVar6 = (long *********)0x0;
      (**(code **)(*plVar15 + 0x388))(plVar15,uVar3 & 1);
    }
  }
  FUN_710392eb40((ulong)plVar4);
  FUN_7103776390(&local_140,param_3,(long ****)ppppppppplVar6,ppppbVar8,param_5,param_6,param_7,
                 param_8);
  FUN_7103778300(0x3f800000,local_138,0x710426fb50);
  uVar9 = local_138;
  local_140 = &PTR_FUN_710523d988;
  local_138 = 0;
  if (uVar9 == 0) {
    return;
  }
  *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
LAB_7101a7c3e4:
  uVar17 = *(ulong *)(uVar9 + 0x18);
  *(undefined8 *)(uVar9 + 0x18) = 0;
  if (uVar17 != 0) {
    FUN_710392eb40(uVar17);
  }
  FUN_710392eb40(uVar9);
  return;
}

