// addr:      7101a26200
// offset:    0x1a26200
// name:      FUN_7101a26200
// mangled:   
// signature: undefined __cdecl FUN_7101a26200(long param_1, uint param_2, long * * * * * * * * * * * param_3, long * * * * * * * * * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a26200(long param_1,uint param_2,long ***********param_3,long ************param_4,
                   long ****param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  bool bVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar5;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  long ***********ppppppppppplVar6;
  ulong uVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  long *plVar19;
  undefined *puVar20;
  ulong uVar21;
  long ***********local_118;
  undefined8 local_110;
  undefined4 local_108;
  long **********local_d0;
  undefined4 local_c8;
  undefined **local_c0;
  ulong local_b8 [9];
  uint *local_68;
  
  lVar18 = **(long **)(param_1 + 0x198);
  lVar10 = lVar18 + 8;
  if (*(char *)(param_1 + 0xf80) == '\0') {
    bVar2 = *(char *)(param_1 + 0xf82) != '\0';
  }
  else {
    bVar2 = false;
  }
  ppppppppppplVar6 = param_3;
  switch(*(undefined4 *)(param_1 + 0x16c)) {
  default:
    ppppppppppplVar6 = (long ***********)(ulong)*(uint *)(param_1 + 0x160);
    FUN_7103778430(lVar10,"player_number_%dp",ppppppppppplVar6,param_4,param_5,param_6,param_7,
                   param_8);
    break;
  case 5:
    ppppppppppplVar6 = (long ***********)(ulong)*(uint *)(param_1 + 0x160);
    FUN_7103778430(lVar10,"player_number_%dp",ppppppppppplVar6,param_4,param_5,param_6,param_7,
                   param_8);
    if (*(char *)(param_1 + 0xcbc) == '\0') {
      bVar2 = (bool)(bVar2 & *(int *)(param_1 + 0xcb8) == 0);
    }
    else {
      bVar2 = false;
    }
    break;
  case 7:
  case 0xb:
  case 0xc:
  case 0x10:
  case 0x11:
  case 0x15:
    uVar17 = *(uint *)(param_1 + 0x160);
    pcVar4 = "player_number_%dp";
    goto LAB_7101a262a8;
  case 8:
  case 0x13:
  case 0x14:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
    goto switchD_7101a26274_caseD_8;
  case 9:
    ppppppppppplVar6 = (long ***********)(ulong)*(uint *)(param_1 + 0x160);
    FUN_7103778430(lVar10,"standard_player_%dp",ppppppppppplVar6,param_4,param_5,param_6,param_7,
                   param_8);
    break;
  case 10:
    ppppppppppplVar6 = (long ***********)(ulong)*(uint *)(param_1 + 0x160);
    FUN_7103778430(lVar10,"kumite_player_number_%dp",ppppppppppplVar6,param_4,param_5,param_6,
                   param_7,param_8);
    break;
  case 0xd:
  case 0xe:
  case 0x16:
    uVar17 = *(uint *)(param_1 + 0x160);
    pcVar4 = "kumite_player_number_%dp";
LAB_7101a262a8:
    ppppppppppplVar6 = (long ***********)(ulong)uVar17;
    FUN_7103778430(lVar10,pcVar4,ppppppppppplVar6,param_4,param_5,param_6,param_7,param_8);
    bVar2 = false;
    break;
  case 0xf:
    ppppppppppplVar6 = (long ***********)(ulong)*(uint *)(param_1 + 0x160);
    FUN_7103778430(lVar10,"kumite_player_number_%dp",ppppppppppplVar6,param_4,param_5,param_6,
                   param_7,param_8);
    bVar2 = true;
  }
  if (*(int *)(param_1 + 0x16c) == 6) {
    if (*(int *)(param_1 + 0x180) < 2) {
      FUN_7103778300(0x3f800000,*(long *)(lVar18 + 0x10),0x710441237e);
      FUN_7103776640(&local_c0,**(long **)(param_1 + 0x198) + 8,
                     (byte ****)"set_lct_controller_entry",ppppppppppplVar6,param_4,param_5,param_6,
                     param_7,param_8);
      uVar7 = local_b8[0];
      if ((*(long *)(local_b8[0] + 8) != 0) &&
         (plVar19 = (long *)FUN_71037964b0(*(long *)(local_b8[0] + 8),0x71043ae0c3),
         plVar19 != (long *)0x0)) {
        (**(code **)(*plVar19 + 0x140))(plVar19,1);
        lVar10 = *(long *)(local_b8[0] + 8);
        if (lVar10 != 0) {
          plVar13 = *(long **)(lVar10 + 0x80);
          while (plVar13 != (long *)(lVar10 + 0x88)) {
            uVar3 = (**(code **)(*(long *)plVar13[0xd] + 0x148))();
            if (((uVar3 & 1) != 0) &&
               (uVar3 = (**(code **)(*plVar19 + 0x120))(plVar19,plVar13[0xd]), (uVar3 & 1) != 0)) {
              (**(code **)(*(long *)plVar13[0xd] + 0x178))();
              (**(code **)(*(long *)plVar13[0xd] + 0x140))((long *)plVar13[0xd],0);
            }
            plVar9 = (long *)plVar13[1];
            if ((long *)plVar13[1] == (long *)0x0) {
              plVar9 = plVar13 + 2;
              bVar2 = *(long **)*plVar9 != plVar13;
              plVar13 = (long *)*plVar9;
              if (bVar2) {
                do {
                  lVar11 = *plVar9;
                  plVar9 = (long *)(lVar11 + 0x10);
                  plVar13 = (long *)*plVar9;
                } while (*plVar13 != lVar11);
              }
            }
            else {
              do {
                plVar13 = plVar9;
                plVar9 = (long *)*plVar13;
              } while ((long *)*plVar13 != (long *)0x0);
            }
          }
        }
        (**(code **)(*plVar19 + 0x178))(plVar19);
      }
      local_c0 = &PTR_FUN_710523d988;
      local_b8[0] = 0;
      if (uVar7 != 0) {
        uVar3 = *(ulong *)(uVar7 + 0x18);
        *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar7 + 0x18) = 0;
        if (uVar3 != 0) {
          FUN_710392eb40(uVar3);
        }
        FUN_710392eb40(uVar7);
      }
    }
    else {
      if (*(int *)(param_1 + 0x160) == 1) {
        pcVar4 = "controller_entry_on";
      }
      else {
        pcVar4 = "controller_entry_off";
      }
      FUN_7103778300(0x3f800000,*(long *)(lVar18 + 0x10),(long)pcVar4);
      if (bVar2) goto LAB_7101a26430;
    }
switchD_7101a26274_caseD_8:
    FUN_7103778300(0x3f800000,*(long *)(lVar18 + 0x10),0x710438c350);
    bVar2 = false;
    bVar14 = false;
    uVar5 = extraout_x1_00;
  }
  else {
    if (!bVar2) goto switchD_7101a26274_caseD_8;
LAB_7101a26430:
    FUN_7103778300(0x3f800000,*(long *)(lVar18 + 0x10),0x7104421cc8);
    bVar2 = *(int *)(param_1 + 0x160) < *(int *)(param_1 + 0x180);
    bVar14 = *(int *)(param_1 + 0x17c) < *(int *)(param_1 + 0x160);
    uVar5 = extraout_x1;
  }
  local_68 = (uint *)(param_1 + 0x160);
  lVar10 = *(long *)(*(long *)(param_1 + 0xe18) + 0x1b8);
  if (lVar10 != 0) {
    lVar18 = *(long *)(param_1 + 0xe18) + 0x1b8;
    lVar11 = lVar18;
    lVar12 = lVar10;
    do {
      if (2 < *(int *)(lVar12 + 0x20)) {
        lVar11 = lVar12;
      }
      lVar12 = *(long *)(lVar12 + (ulong)(*(int *)(lVar12 + 0x20) < 3) * 8);
    } while (lVar12 != 0);
    if (((lVar11 != lVar18) && (*(int *)(lVar11 + 0x20) < 4)) &&
       (plVar19 = *(long **)(lVar11 + 0x28), plVar19 != (long *)0x0)) {
      (**(code **)(*plVar19 + 0x1f8))(plVar19,bVar2);
      ppppppppppplVar6 = (long ***********)0x0;
      (**(code **)(*plVar19 + 0x388))(plVar19,bVar2 ^ 1);
      lVar18 = *(long *)(param_1 + 0xe18) + 0x1b8;
      lVar10 = *(long *)(*(long *)(param_1 + 0xe18) + 0x1b8);
      uVar5 = extraout_x1_01;
    }
    lVar11 = lVar18;
    if (lVar10 != 0) {
      do {
        if (3 < *(int *)(lVar10 + 0x20)) {
          lVar11 = lVar10;
        }
        lVar10 = *(long *)(lVar10 + (ulong)(*(int *)(lVar10 + 0x20) < 4) * 8);
      } while (lVar10 != 0);
      if (((lVar11 != lVar18) && (*(int *)(lVar11 + 0x20) < 5)) &&
         (plVar19 = *(long **)(lVar11 + 0x28), plVar19 != (long *)0x0)) {
        (**(code **)(*plVar19 + 0x1f8))(plVar19,bVar14);
        ppppppppppplVar6 = (long ***********)0x0;
        (**(code **)(*plVar19 + 0x388))(plVar19,bVar14 ^ 1);
        uVar5 = extraout_x1_02;
      }
    }
  }
  uVar17 = *(uint *)(param_1 + 0x160);
  uVar16 = 0;
  uVar15 = 3;
  switch(*(undefined4 *)(param_1 + 0x16c)) {
  case 9:
    uVar8 = 4;
    uVar15 = 8;
    goto LAB_7101a26628;
  case 10:
    if ((int)uVar17 < 2) goto switchD_7101a265e0_caseD_c;
  case 0xe:
  case 0xf:
    uVar16 = 0;
    uVar15 = uVar17 << 1;
    break;
  case 0xb:
    break;
  default:
switchD_7101a265e0_caseD_c:
    uVar16 = 0;
    uVar15 = uVar17;
    break;
  case 0x16:
    uVar15 = 4;
    uVar8 = uVar17;
LAB_7101a26628:
    uVar16 = 0;
    if ((int)uVar17 < 2) {
      uVar15 = uVar8;
    }
    break;
  case 0x19:
  case 0x1a:
  case 0x1b:
    uVar16 = 1;
    uVar15 = 3;
    break;
  case 0x1c:
    uVar16 = 2;
    uVar15 = 4;
  }
  lVar10 = *(long *)(param_1 + 0x250);
  lVar18 = *(long *)(param_1 + 600);
  if (lVar10 != lVar18) {
    bVar2 = 4 < (int)uVar15;
    puVar20 = (&PTR_s_window_l_71050a88e0)[bVar2];
    do {
      lVar12 = *(long *)(lVar10 + 8);
      param_4 = (long ************)(ulong)((uint)param_3 & 1);
      ppppppppppplVar6 = (long ***********)(ulong)uVar16;
      FUN_71019fce50(*(long *)(lVar12 + 0x5e8),uVar15,ppppppppppplVar6,param_4,param_5,param_6,
                     param_7,param_8);
      lVar11 = *(long *)(lVar12 + 0x5f8);
      *(uint *)(lVar12 + 0x670) = uVar15;
      *(uint *)(lVar11 + 0x40) = (uint)bVar2;
      FUN_7103778300(0x3f800000,*(long *)(lVar11 + 0x28),(long)puVar20);
      FUN_71019fa350(*(long *)(lVar12 + 0x608),(uint)bVar2,(long ****)ppppppppppplVar6,
                     (byte ****)param_4,param_5,param_6,param_7,param_8);
      uVar17 = (uint)bVar2;
      FUN_71019e90c0(*(long *)(lVar12 + 0x618),(uint)bVar2,(long ****)ppppppppppplVar6,
                     (byte ****)param_4,param_5,param_6,param_7,param_8);
      FUN_71019ea0a0(*(long *)(lVar12 + 0x628),uVar17,(long ****)ppppppppppplVar6,(byte ****)param_4
                     ,param_5,param_6,param_7,param_8);
      FUN_71019eade0(*(long *)(lVar12 + 0x638),uVar17,(long ****)ppppppppppplVar6,(byte ****)param_4
                     ,param_5,param_6,param_7,param_8);
      FUN_71019f2980(*(long *)(lVar12 + 0x658),(ulong)uVar17,(long ****)ppppppppppplVar6,
                     (byte ****)param_4,param_5,param_6,param_7,param_8);
      uVar17 = (uint)bVar2;
      if (*(int *)(lVar12 + 0x670) < 3) {
        uVar17 = 3;
      }
      FUN_7101a0f680(*(long *)(lVar12 + 0x648),uVar17,(long ****)ppppppppppplVar6,(byte ****)param_4
                     ,param_5,param_6,param_7,param_8);
      lVar10 = lVar10 + 0x10;
      uVar5 = extraout_x1_03;
    } while (lVar18 != lVar10);
  }
  lVar18 = *(long *)(param_1 + 0x270);
  for (lVar10 = *(long *)(param_1 + 0x268); lVar10 != lVar18; lVar10 = lVar10 + 0x10) {
    lVar11 = *(long *)(lVar10 + 8);
    uVar7 = (ulong)uVar15;
    FUN_7103778430(lVar11,"set_%d",uVar7,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776640(&local_c0,lVar11,(byte ****)"set_parts_controller_res",uVar7,param_4,param_5,
                   param_6,param_7,param_8);
    ppppppppppplVar6 = (long ***********)(ulong)uVar15;
    FUN_7103778430((long)&local_c0,"set_%d",ppppppppppplVar6,param_4,param_5,param_6,param_7,param_8
                  );
    uVar7 = local_b8[0];
    local_c0 = &PTR_FUN_710523d988;
    local_b8[0] = 0;
    uVar5 = extraout_x1_04;
    if (uVar7 != 0) {
      uVar3 = *(ulong *)(uVar7 + 0x18);
      *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar7 + 0x18) = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
      FUN_710392eb40(uVar7);
      uVar5 = extraout_x1_05;
    }
    if (*(char *)(lVar11 + 0x61) == '\0') {
      *(undefined8 *)(lVar11 + 0x48) = 0;
      FUN_710376b960(*(long *)(lVar11 + 0x50));
      FUN_7103778300(0x3f800000,*(long *)(lVar11 + 8),0x7104280412);
      *(undefined1 *)(lVar11 + 0x61) = 1;
      uVar5 = extraout_x1_06;
    }
  }
  if (*(int *)(param_1 + 0x16c) == 0xf) {
    uVar17 = *local_68;
    if (3 < (int)uVar17) {
      uVar17 = 4;
    }
    if ((int)uVar17 < 3) {
      uVar17 = 2;
    }
    FUN_71003a4ca0((uint *)&local_c0,"player_number_%dp",(ulong)uVar17,ppppppppppplVar6,param_4,
                   param_5,param_6,param_7,param_8);
    if (((ulong)param_3 & 1) == 0) {
      FUN_7103778760(*(long *)(**(long **)(param_1 + 0x1a8) + 0x10),(long)local_b8);
      uVar5 = extraout_x1_08;
    }
    else {
      if (3 < (int)param_2) {
        param_2 = 4;
      }
      if ((int)param_2 < 3) {
        param_2 = 2;
      }
      if ((int)param_2 < (int)uVar17) {
        FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x1a8) + 0x10),(long)local_b8);
        local_d0 = (long **********)&DAT_c1ffff0000000000;
        ppppppppppplVar6 = &local_d0;
        param_4 = &local_118;
        local_c8 = 0;
        local_118 = (long ***********)&DAT_ffffffff00000000;
        local_110 = 0xffffffff;
        local_108 = 0xffffffff;
        FUN_7101a1b4a0(param_1,uVar17 - 1,(ulong *)ppppppppppplVar6,(byte ****)param_4,param_5,
                       param_6,param_7,param_8);
        uVar5 = extraout_x1_07;
      }
      else {
        FUN_71003a4ca0((uint *)&local_118,"player_number_%dp",(ulong)param_2,ppppppppppplVar6,
                       param_4,param_5,param_6,param_7,param_8);
        FUN_7103778300(0xbf800000,*(long *)(**(long **)(param_1 + 0x1a8) + 0x10),(long)&local_110);
        uVar5 = extraout_x1_09;
      }
    }
  }
  lVar10 = *(long *)(param_1 + 0x250);
  uVar3 = *(long *)(param_1 + 600) - lVar10;
  uVar7 = (ulong)*(int *)(param_1 + 0x160);
  if (*(int *)(param_1 + 0x160) < (int)(uVar3 >> 4)) {
    if (uVar7 < (ulong)((long)uVar3 >> 4)) {
      uVar21 = uVar7 << 4 | 8;
      lVar18 = uVar7 << 0x20;
      do {
        plVar19 = (long *)(lVar10 + uVar21) + -1;
        lVar11 = *(long *)(lVar10 + uVar21);
        if (*(int *)(lVar11 + 0x5d4) != 3) {
          lVar12 = *(long *)(lVar11 + 0x678);
          if (lVar12 != 0) {
            FUN_7101a06ef0(lVar11,uVar5,(long ****)ppppppppppplVar6,(byte ****)param_4,param_5,
                           param_6,param_7,param_8);
            *(undefined1 *)(*(long *)(*(long *)(lVar12 + 8) + 0x20) + 0x166) = 0;
            *(undefined4 *)(*(long *)(lVar12 + 8) + 0x2c) = 0xffffffff;
            lVar11 = *(long *)(lVar12 + 8);
            if ((*(int *)(lVar11 + 0x30) != -1) && ((int)*local_68 <= *(int *)(lVar11 + 0x30))) {
              *(undefined1 *)(*(long *)(lVar11 + 0x20) + 0x167) = 0;
              *(undefined4 *)(*(long *)(lVar12 + 8) + 0x30) = 0xffffffff;
              lVar11 = *(long *)(lVar12 + 8);
            }
            if (*(int *)(lVar11 + 0x28) == *(int *)(*(long *)(lVar10 + uVar21) + 0x150)) {
              uVar17 = *(uint *)(*(long *)(*(long *)(lVar11 + 0x10) + 8) + 0x488);
              FUN_7101a1e9b0(param_1,lVar12,ppppppppppplVar6,param_4,param_5,param_6,param_7,param_8
                            );
              if (((7 < (uint)uVar7) ||
                  (*(undefined4 *)(*(long *)(DAT_710593b990 + 8) + (lVar18 >> 0x1e)) = 0xffffffff,
                  uVar17 == 0xffffffff)) || (9 < uVar17)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              lVar11 = *(long *)(param_1 + 400);
              lVar12 = (long)(int)uVar17 * 4;
              puVar1 = (undefined4 *)(lVar11 + lVar12);
              *puVar1 = 0;
              puVar1[10] = 0;
              *(undefined1 *)(lVar11 + (int)uVar17 + 0x50) = 0;
              *(undefined4 *)(*(long *)(param_1 + 400) + lVar12 + 0x188) = 6;
            }
          }
          FUN_7101a1e860(*(int *)(param_1 + 0x170),(long)plVar19,ppppppppppplVar6,(byte ****)param_4
                         ,param_5,param_6,param_7,param_8);
          FUN_7101a1e660((long)plVar19,0,(long ****)ppppppppppplVar6,(byte ****)param_4,param_5,
                         param_6,param_7,param_8);
          FUN_7101a1f0b0(param_1,(long)plVar19,(long ****)ppppppppppplVar6,(byte ****)param_4,
                         param_5,param_6,param_7,param_8);
          FUN_7101a06380(*(long *)(lVar10 + uVar21),1);
          uVar5 = extraout_x1_10;
        }
        uVar7 = uVar7 + 1;
        if ((long)(uVar3 * 0x10000000) >> 0x20 <= (long)uVar7) goto LAB_7101a26a60;
        lVar10 = *(long *)(param_1 + 0x250);
        lVar18 = lVar18 + 0x100000000;
        uVar21 = uVar21 + 0x10;
      } while (uVar7 < (ulong)(*(long *)(param_1 + 600) - lVar10 >> 4));
    }
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
LAB_7101a26a60:
  FUN_7101a27570(param_1,uVar5,ppppppppppplVar6,param_4,param_5,param_6,param_7,param_8);
  return;
}

