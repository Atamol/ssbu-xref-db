// addr:      7101d20930
// offset:    0x1d20930
// name:      FUN_7101d20930
// mangled:   
// signature: undefined __cdecl FUN_7101d20930(long param_1, byte param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d20930(long param_1,byte param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char *pcVar2;
  byte bVar3;
  ulong uVar4;
  long ********pppppppplVar5;
  bool bVar6;
  ulong uVar7;
  long *******ppppppplVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 uVar11;
  long ****pppplVar12;
  long *********ppppppppplVar13;
  ulong uVar14;
  byte ****ppppbVar15;
  uint uVar16;
  uint uVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  byte *pbVar22;
  int iVar23;
  ulong uVar24;
  byte *pbVar25;
  ulong uVar26;
  long *plVar27;
  long lVar28;
  long *********ppppppppplVar29;
  long *plVar30;
  ulong uVar31;
  long lVar32;
  undefined **local_918;
  long *local_910;
  undefined8 local_908;
  undefined6 uStack_900;
  undefined2 local_8fa;
  undefined6 uStack_8f8;
  undefined1 auStack_8f0 [704];
  undefined8 local_630;
  undefined8 local_628;
  undefined8 local_620;
  undefined8 local_618;
  undefined8 local_610;
  undefined8 local_608;
  undefined8 local_600;
  undefined8 local_5f8;
  undefined8 local_5f0;
  undefined8 local_5e8;
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined8 local_5d0;
  uint local_5c8;
  undefined4 local_5c4;
  byte local_5c0 [64];
  undefined **local_580;
  ulong local_578 [8];
  undefined **local_538;
  ulong local_530;
  undefined **local_528;
  ulong local_520;
  undefined **local_518;
  ulong local_510;
  undefined **local_508;
  ulong local_500;
  uint local_4f8 [2];
  undefined1 local_4f0 [64];
  uint local_4b0 [2];
  byte local_4a8 [64];
  undefined **local_468;
  ulong local_460;
  uint local_458 [2];
  undefined1 local_450 [64];
  undefined **local_410;
  long ********local_408;
  undefined8 local_400;
  undefined6 uStack_3f8;
  undefined2 local_3f2;
  undefined6 uStack_3f0;
  undefined1 auStack_3e8 [704];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  uint local_c0;
  undefined4 local_bc;
  byte local_b8 [72];
  
  uVar11 = 0;
  FUN_7103776640(&local_410,*(long *)(param_1 + 0xc0),(byte ****)"set_panel_%02d",0,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037780e0(&local_918,(long)&local_410,(long ****)"result_rank_off",uVar11,param_4,param_5,
                 param_6,param_7,param_8);
  plVar1 = local_910;
  plVar27 = (long *)local_910[1];
  if (plVar27 == (long *)0x0) {
    local_918 = &PTR_FUN_710523d9e8;
    local_910 = (long *)0x0;
    if (plVar1 != (long *)0x0) goto LAB_7101d20a90;
  }
  else {
    if ((char)local_910[2] != '\0') {
      plVar30 = *(long **)(*local_910 + 0x80);
      plVar20 = (long *)(*local_910 + 0x88);
      if (plVar30 != plVar20) {
        do {
          while( true ) {
            uVar7 = (**(code **)(*(long *)plVar30[0xd] + 0x148))();
            if (((uVar7 & 1) != 0) &&
               (uVar7 = (**(code **)(*plVar27 + 0x120))(plVar27,plVar30[0xd]), (uVar7 & 1) != 0)) {
              (**(code **)(*(long *)plVar30[0xd] + 0x178))();
              (**(code **)(*(long *)plVar30[0xd] + 0x140))((long *)plVar30[0xd],0);
            }
            plVar18 = (long *)plVar30[1];
            if ((long *)plVar30[1] == (long *)0x0) break;
            do {
              plVar30 = plVar18;
              plVar18 = (long *)*plVar30;
            } while ((long *)*plVar30 != (long *)0x0);
LAB_7101d20a44:
            if (plVar30 == plVar20) goto LAB_7101d20a5c;
          }
          plVar18 = plVar30 + 2;
          plVar21 = (long *)*plVar18;
          if ((long *)*plVar21 != plVar30) {
            do {
              lVar32 = *plVar18;
              plVar18 = (long *)(lVar32 + 0x10);
              plVar30 = (long *)*plVar18;
            } while (*plVar30 != lVar32);
            goto LAB_7101d20a44;
          }
          plVar30 = plVar21;
        } while (plVar21 != plVar20);
LAB_7101d20a5c:
        plVar27 = (long *)local_910[1];
      }
    }
    (**(code **)(*plVar27 + 0x188))(plVar27);
LAB_7101d20a90:
    local_910 = (long *)0x0;
    local_918 = &PTR_FUN_710523d9e8;
    FUN_710392eb40((ulong)plVar1);
  }
  FUN_71037780e0(&local_918,(long)&local_410,(long ****)"effect_in",uVar11,param_4,param_5,param_6,
                 param_7,param_8);
  plVar1 = local_910;
  plVar27 = (long *)local_910[1];
  if (plVar27 == (long *)0x0) {
    local_918 = &PTR_FUN_710523d9e8;
    local_910 = (long *)0x0;
    if (plVar1 != (long *)0x0) goto LAB_7101d20bb4;
  }
  else {
    if ((char)local_910[2] != '\0') {
      plVar30 = *(long **)(*local_910 + 0x80);
      plVar20 = (long *)(*local_910 + 0x88);
      if (plVar30 != plVar20) {
        do {
          while( true ) {
            uVar7 = (**(code **)(*(long *)plVar30[0xd] + 0x148))();
            if (((uVar7 & 1) != 0) &&
               (uVar7 = (**(code **)(*plVar27 + 0x120))(plVar27,plVar30[0xd]), (uVar7 & 1) != 0)) {
              (**(code **)(*(long *)plVar30[0xd] + 0x178))();
              (**(code **)(*(long *)plVar30[0xd] + 0x140))((long *)plVar30[0xd],0);
            }
            plVar18 = (long *)plVar30[1];
            if ((long *)plVar30[1] == (long *)0x0) break;
            do {
              plVar30 = plVar18;
              plVar18 = (long *)*plVar30;
            } while ((long *)*plVar30 != (long *)0x0);
LAB_7101d20b68:
            if (plVar30 == plVar20) goto LAB_7101d20b80;
          }
          plVar18 = plVar30 + 2;
          plVar21 = (long *)*plVar18;
          if ((long *)*plVar21 != plVar30) {
            do {
              lVar32 = *plVar18;
              plVar18 = (long *)(lVar32 + 0x10);
              plVar30 = (long *)*plVar18;
            } while (*plVar30 != lVar32);
            goto LAB_7101d20b68;
          }
          plVar30 = plVar21;
        } while (plVar21 != plVar20);
LAB_7101d20b80:
        plVar27 = (long *)plVar1[1];
      }
    }
    (**(code **)(*plVar27 + 0x188))(plVar27);
LAB_7101d20bb4:
    local_910 = (long *)0x0;
    local_918 = &PTR_FUN_710523d9e8;
    FUN_710392eb40((ulong)plVar1);
  }
  FUN_71037780e0(&local_918,(long)&local_410,(long ****)"boost_size",uVar11,param_4,param_5,param_6,
                 param_7,param_8);
  plVar1 = local_910;
  plVar27 = (long *)local_910[1];
  if (plVar27 == (long *)0x0) {
    local_918 = &PTR_FUN_710523d9e8;
    local_910 = (long *)0x0;
    if (plVar1 != (long *)0x0) goto LAB_7101d20cd8;
  }
  else {
    if ((char)local_910[2] != '\0') {
      plVar30 = *(long **)(*local_910 + 0x80);
      plVar20 = (long *)(*local_910 + 0x88);
      if (plVar30 != plVar20) {
        do {
          while( true ) {
            uVar7 = (**(code **)(*(long *)plVar30[0xd] + 0x148))();
            if (((uVar7 & 1) != 0) &&
               (uVar7 = (**(code **)(*plVar27 + 0x120))(plVar27,plVar30[0xd]), (uVar7 & 1) != 0)) {
              (**(code **)(*(long *)plVar30[0xd] + 0x178))();
              (**(code **)(*(long *)plVar30[0xd] + 0x140))((long *)plVar30[0xd],0);
            }
            plVar18 = (long *)plVar30[1];
            if ((long *)plVar30[1] == (long *)0x0) break;
            do {
              plVar30 = plVar18;
              plVar18 = (long *)*plVar30;
            } while ((long *)*plVar30 != (long *)0x0);
LAB_7101d20c8c:
            if (plVar30 == plVar20) goto LAB_7101d20ca4;
          }
          plVar18 = plVar30 + 2;
          plVar21 = (long *)*plVar18;
          if ((long *)*plVar21 != plVar30) {
            do {
              lVar32 = *plVar18;
              plVar18 = (long *)(lVar32 + 0x10);
              plVar30 = (long *)*plVar18;
            } while (*plVar30 != lVar32);
            goto LAB_7101d20c8c;
          }
          plVar30 = plVar21;
        } while (plVar21 != plVar20);
LAB_7101d20ca4:
        plVar27 = (long *)plVar1[1];
      }
    }
    (**(code **)(*plVar27 + 0x188))(plVar27);
LAB_7101d20cd8:
    local_910 = (long *)0x0;
    local_918 = &PTR_FUN_710523d9e8;
    FUN_710392eb40((ulong)plVar1);
  }
  pppppppplVar5 = local_408;
  local_410 = &PTR_FUN_710523d988;
  local_408 = (long ********)0x0;
  if (pppppppplVar5 != (long ********)0x0) {
    ppppppplVar8 = pppppppplVar5[3];
    pppppppplVar5[2] = (long *******)&PTR_FUN_710523d9a8;
    pppppppplVar5[3] = (long *******)0x0;
    if (ppppppplVar8 != (long *******)0x0) {
      FUN_710392eb40((ulong)ppppppplVar8);
    }
    FUN_710392eb40((ulong)pppppppplVar5);
  }
  uVar11 = 1;
  FUN_7103776640(&local_410,*(long *)(param_1 + 0xc0),(byte ****)"set_panel_%02d",1,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037780e0(&local_918,(long)&local_410,(long ****)"result_rank_off",uVar11,param_4,param_5,
                 param_6,param_7,param_8);
  plVar1 = local_910;
  plVar27 = (long *)local_910[1];
  if (plVar27 == (long *)0x0) {
    local_918 = &PTR_FUN_710523d9e8;
    local_910 = (long *)0x0;
    if (plVar1 != (long *)0x0) goto LAB_7101d20e4c;
  }
  else {
    if ((char)local_910[2] != '\0') {
      plVar30 = *(long **)(*local_910 + 0x80);
      plVar20 = (long *)(*local_910 + 0x88);
      if (plVar30 != plVar20) {
        do {
          while( true ) {
            uVar7 = (**(code **)(*(long *)plVar30[0xd] + 0x148))();
            if (((uVar7 & 1) != 0) &&
               (uVar7 = (**(code **)(*plVar27 + 0x120))(plVar27,plVar30[0xd]), (uVar7 & 1) != 0)) {
              (**(code **)(*(long *)plVar30[0xd] + 0x178))();
              (**(code **)(*(long *)plVar30[0xd] + 0x140))((long *)plVar30[0xd],0);
            }
            plVar18 = (long *)plVar30[1];
            if ((long *)plVar30[1] == (long *)0x0) break;
            do {
              plVar30 = plVar18;
              plVar18 = (long *)*plVar30;
            } while ((long *)*plVar30 != (long *)0x0);
LAB_7101d20e00:
            if (plVar30 == plVar20) goto LAB_7101d20e18;
          }
          plVar18 = plVar30 + 2;
          plVar21 = (long *)*plVar18;
          if ((long *)*plVar21 != plVar30) {
            do {
              lVar32 = *plVar18;
              plVar18 = (long *)(lVar32 + 0x10);
              plVar30 = (long *)*plVar18;
            } while (*plVar30 != lVar32);
            goto LAB_7101d20e00;
          }
          plVar30 = plVar21;
        } while (plVar21 != plVar20);
LAB_7101d20e18:
        plVar27 = (long *)plVar1[1];
      }
    }
    (**(code **)(*plVar27 + 0x188))(plVar27);
LAB_7101d20e4c:
    local_910 = (long *)0x0;
    local_918 = &PTR_FUN_710523d9e8;
    FUN_710392eb40((ulong)plVar1);
  }
  FUN_71037780e0(&local_918,(long)&local_410,(long ****)"effect_in",uVar11,param_4,param_5,param_6,
                 param_7,param_8);
  plVar1 = local_910;
  plVar27 = (long *)local_910[1];
  if (plVar27 == (long *)0x0) {
    local_918 = &PTR_FUN_710523d9e8;
    local_910 = (long *)0x0;
    if (plVar1 != (long *)0x0) goto LAB_7101d20f70;
  }
  else {
    if ((char)local_910[2] != '\0') {
      plVar30 = *(long **)(*local_910 + 0x80);
      plVar20 = (long *)(*local_910 + 0x88);
      if (plVar30 != plVar20) {
        do {
          while( true ) {
            uVar7 = (**(code **)(*(long *)plVar30[0xd] + 0x148))();
            if (((uVar7 & 1) != 0) &&
               (uVar7 = (**(code **)(*plVar27 + 0x120))(plVar27,plVar30[0xd]), (uVar7 & 1) != 0)) {
              (**(code **)(*(long *)plVar30[0xd] + 0x178))();
              (**(code **)(*(long *)plVar30[0xd] + 0x140))((long *)plVar30[0xd],0);
            }
            plVar18 = (long *)plVar30[1];
            if ((long *)plVar30[1] == (long *)0x0) break;
            do {
              plVar30 = plVar18;
              plVar18 = (long *)*plVar30;
            } while ((long *)*plVar30 != (long *)0x0);
LAB_7101d20f24:
            if (plVar30 == plVar20) goto LAB_7101d20f3c;
          }
          plVar18 = plVar30 + 2;
          plVar21 = (long *)*plVar18;
          if ((long *)*plVar21 != plVar30) {
            do {
              lVar32 = *plVar18;
              plVar18 = (long *)(lVar32 + 0x10);
              plVar30 = (long *)*plVar18;
            } while (*plVar30 != lVar32);
            goto LAB_7101d20f24;
          }
          plVar30 = plVar21;
        } while (plVar21 != plVar20);
LAB_7101d20f3c:
        plVar27 = (long *)plVar1[1];
      }
    }
    (**(code **)(*plVar27 + 0x188))(plVar27);
LAB_7101d20f70:
    local_910 = (long *)0x0;
    local_918 = &PTR_FUN_710523d9e8;
    FUN_710392eb40((ulong)plVar1);
  }
  FUN_71037780e0(&local_918,(long)&local_410,(long ****)"boost_size",uVar11,param_4,param_5,param_6,
                 param_7,param_8);
  plVar1 = local_910;
  plVar27 = (long *)local_910[1];
  if (plVar27 == (long *)0x0) {
    local_918 = &PTR_FUN_710523d9e8;
    local_910 = (long *)0x0;
    if (plVar1 != (long *)0x0) goto LAB_7101d21094;
  }
  else {
    if ((char)local_910[2] != '\0') {
      plVar30 = *(long **)(*local_910 + 0x80);
      plVar20 = (long *)(*local_910 + 0x88);
      if (plVar30 != plVar20) {
        do {
          while( true ) {
            uVar7 = (**(code **)(*(long *)plVar30[0xd] + 0x148))();
            if (((uVar7 & 1) != 0) &&
               (uVar7 = (**(code **)(*plVar27 + 0x120))(plVar27,plVar30[0xd]), (uVar7 & 1) != 0)) {
              (**(code **)(*(long *)plVar30[0xd] + 0x178))();
              (**(code **)(*(long *)plVar30[0xd] + 0x140))((long *)plVar30[0xd],0);
            }
            plVar18 = (long *)plVar30[1];
            if ((long *)plVar30[1] == (long *)0x0) break;
            do {
              plVar30 = plVar18;
              plVar18 = (long *)*plVar30;
            } while ((long *)*plVar30 != (long *)0x0);
LAB_7101d21048:
            if (plVar30 == plVar20) goto LAB_7101d21060;
          }
          plVar18 = plVar30 + 2;
          plVar21 = (long *)*plVar18;
          if ((long *)*plVar21 != plVar30) {
            do {
              lVar32 = *plVar18;
              plVar18 = (long *)(lVar32 + 0x10);
              plVar30 = (long *)*plVar18;
            } while (*plVar30 != lVar32);
            goto LAB_7101d21048;
          }
          plVar30 = plVar21;
        } while (plVar21 != plVar20);
LAB_7101d21060:
        plVar27 = (long *)plVar1[1];
      }
    }
    (**(code **)(*plVar27 + 0x188))(plVar27);
LAB_7101d21094:
    local_910 = (long *)0x0;
    local_918 = &PTR_FUN_710523d9e8;
    FUN_710392eb40((ulong)plVar1);
  }
  pppppppplVar5 = local_408;
  local_410 = &PTR_FUN_710523d988;
  local_408 = (long ********)0x0;
  if (pppppppplVar5 != (long ********)0x0) {
    ppppppplVar8 = pppppppplVar5[3];
    pppppppplVar5[2] = (long *******)&PTR_FUN_710523d9a8;
    pppppppplVar5[3] = (long *******)0x0;
    if (ppppppplVar8 != (long *******)0x0) {
      FUN_710392eb40((ulong)ppppppplVar8);
    }
    FUN_710392eb40((ulong)pppppppplVar5);
  }
  uVar11 = 2;
  FUN_7103776640(&local_410,*(long *)(param_1 + 0xc0),(byte ****)"set_panel_%02d",2,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037780e0(&local_918,(long)&local_410,(long ****)"result_rank_off",uVar11,param_4,param_5,
                 param_6,param_7,param_8);
  plVar1 = local_910;
  plVar27 = (long *)local_910[1];
  if (plVar27 == (long *)0x0) {
    local_918 = &PTR_FUN_710523d9e8;
    local_910 = (long *)0x0;
    if (plVar1 != (long *)0x0) goto LAB_7101d21208;
  }
  else {
    if ((char)local_910[2] != '\0') {
      plVar30 = *(long **)(*local_910 + 0x80);
      plVar20 = (long *)(*local_910 + 0x88);
      if (plVar30 != plVar20) {
        do {
          while( true ) {
            uVar7 = (**(code **)(*(long *)plVar30[0xd] + 0x148))();
            if (((uVar7 & 1) != 0) &&
               (uVar7 = (**(code **)(*plVar27 + 0x120))(plVar27,plVar30[0xd]), (uVar7 & 1) != 0)) {
              (**(code **)(*(long *)plVar30[0xd] + 0x178))();
              (**(code **)(*(long *)plVar30[0xd] + 0x140))((long *)plVar30[0xd],0);
            }
            plVar18 = (long *)plVar30[1];
            if ((long *)plVar30[1] == (long *)0x0) break;
            do {
              plVar30 = plVar18;
              plVar18 = (long *)*plVar30;
            } while ((long *)*plVar30 != (long *)0x0);
LAB_7101d211bc:
            if (plVar30 == plVar20) goto LAB_7101d211d4;
          }
          plVar18 = plVar30 + 2;
          plVar21 = (long *)*plVar18;
          if ((long *)*plVar21 != plVar30) {
            do {
              lVar32 = *plVar18;
              plVar18 = (long *)(lVar32 + 0x10);
              plVar30 = (long *)*plVar18;
            } while (*plVar30 != lVar32);
            goto LAB_7101d211bc;
          }
          plVar30 = plVar21;
        } while (plVar21 != plVar20);
LAB_7101d211d4:
        plVar27 = (long *)plVar1[1];
      }
    }
    (**(code **)(*plVar27 + 0x188))(plVar27);
LAB_7101d21208:
    local_910 = (long *)0x0;
    local_918 = &PTR_FUN_710523d9e8;
    FUN_710392eb40((ulong)plVar1);
  }
  FUN_71037780e0(&local_918,(long)&local_410,(long ****)"effect_in",uVar11,param_4,param_5,param_6,
                 param_7,param_8);
  plVar1 = local_910;
  plVar27 = (long *)local_910[1];
  if (plVar27 == (long *)0x0) {
    local_918 = &PTR_FUN_710523d9e8;
    local_910 = (long *)0x0;
    if (plVar1 != (long *)0x0) goto LAB_7101d2132c;
  }
  else {
    if ((char)local_910[2] != '\0') {
      plVar30 = *(long **)(*local_910 + 0x80);
      plVar20 = (long *)(*local_910 + 0x88);
      if (plVar30 != plVar20) {
        do {
          while( true ) {
            uVar7 = (**(code **)(*(long *)plVar30[0xd] + 0x148))();
            if (((uVar7 & 1) != 0) &&
               (uVar7 = (**(code **)(*plVar27 + 0x120))(plVar27,plVar30[0xd]), (uVar7 & 1) != 0)) {
              (**(code **)(*(long *)plVar30[0xd] + 0x178))();
              (**(code **)(*(long *)plVar30[0xd] + 0x140))((long *)plVar30[0xd],0);
            }
            plVar18 = (long *)plVar30[1];
            if ((long *)plVar30[1] == (long *)0x0) break;
            do {
              plVar30 = plVar18;
              plVar18 = (long *)*plVar30;
            } while ((long *)*plVar30 != (long *)0x0);
LAB_7101d212e0:
            if (plVar30 == plVar20) goto LAB_7101d212f8;
          }
          plVar18 = plVar30 + 2;
          plVar21 = (long *)*plVar18;
          if ((long *)*plVar21 != plVar30) {
            do {
              lVar32 = *plVar18;
              plVar18 = (long *)(lVar32 + 0x10);
              plVar30 = (long *)*plVar18;
            } while (*plVar30 != lVar32);
            goto LAB_7101d212e0;
          }
          plVar30 = plVar21;
        } while (plVar21 != plVar20);
LAB_7101d212f8:
        plVar27 = (long *)plVar1[1];
      }
    }
    (**(code **)(*plVar27 + 0x188))(plVar27);
LAB_7101d2132c:
    local_910 = (long *)0x0;
    local_918 = &PTR_FUN_710523d9e8;
    FUN_710392eb40((ulong)plVar1);
  }
  FUN_71037780e0(&local_918,(long)&local_410,(long ****)"boost_size",uVar11,param_4,param_5,param_6,
                 param_7,param_8);
  plVar1 = local_910;
  plVar27 = (long *)local_910[1];
  if (plVar27 == (long *)0x0) {
    local_918 = &PTR_FUN_710523d9e8;
    local_910 = (long *)0x0;
    if (plVar1 != (long *)0x0) goto LAB_7101d21450;
  }
  else {
    if ((char)local_910[2] != '\0') {
      plVar30 = *(long **)(*local_910 + 0x80);
      plVar20 = (long *)(*local_910 + 0x88);
      if (plVar30 != plVar20) {
        do {
          while( true ) {
            uVar7 = (**(code **)(*(long *)plVar30[0xd] + 0x148))();
            if (((uVar7 & 1) != 0) &&
               (uVar7 = (**(code **)(*plVar27 + 0x120))(plVar27,plVar30[0xd]), (uVar7 & 1) != 0)) {
              (**(code **)(*(long *)plVar30[0xd] + 0x178))();
              (**(code **)(*(long *)plVar30[0xd] + 0x140))((long *)plVar30[0xd],0);
            }
            plVar18 = (long *)plVar30[1];
            if ((long *)plVar30[1] == (long *)0x0) break;
            do {
              plVar30 = plVar18;
              plVar18 = (long *)*plVar30;
            } while ((long *)*plVar30 != (long *)0x0);
LAB_7101d21404:
            if (plVar30 == plVar20) goto LAB_7101d2141c;
          }
          plVar18 = plVar30 + 2;
          plVar21 = (long *)*plVar18;
          if ((long *)*plVar21 != plVar30) {
            do {
              lVar32 = *plVar18;
              plVar18 = (long *)(lVar32 + 0x10);
              plVar30 = (long *)*plVar18;
            } while (*plVar30 != lVar32);
            goto LAB_7101d21404;
          }
          plVar30 = plVar21;
        } while (plVar21 != plVar20);
LAB_7101d2141c:
        plVar27 = (long *)plVar1[1];
      }
    }
    (**(code **)(*plVar27 + 0x188))(plVar27);
LAB_7101d21450:
    local_910 = (long *)0x0;
    local_918 = &PTR_FUN_710523d9e8;
    FUN_710392eb40((ulong)plVar1);
  }
  pppppppplVar5 = local_408;
  local_410 = &PTR_FUN_710523d988;
  local_408 = (long ********)0x0;
  if (pppppppplVar5 != (long ********)0x0) {
    ppppppplVar8 = pppppppplVar5[3];
    pppppppplVar5[2] = (long *******)&PTR_FUN_710523d9a8;
    pppppppplVar5[3] = (long *******)0x0;
    if (ppppppplVar8 != (long *******)0x0) {
      FUN_710392eb40((ulong)ppppppplVar8);
    }
    FUN_710392eb40((ulong)pppppppplVar5);
  }
  uVar11 = 3;
  FUN_7103776640(&local_410,*(long *)(param_1 + 0xc0),(byte ****)"set_panel_%02d",3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037780e0(&local_918,(long)&local_410,(long ****)"result_rank_off",uVar11,param_4,param_5,
                 param_6,param_7,param_8);
  plVar1 = local_910;
  plVar27 = (long *)local_910[1];
  if (plVar27 == (long *)0x0) {
    local_918 = &PTR_FUN_710523d9e8;
    local_910 = (long *)0x0;
    if (plVar1 != (long *)0x0) goto LAB_7101d215c4;
  }
  else {
    if ((char)local_910[2] != '\0') {
      plVar30 = *(long **)(*local_910 + 0x80);
      plVar20 = (long *)(*local_910 + 0x88);
      if (plVar30 != plVar20) {
        do {
          while( true ) {
            uVar7 = (**(code **)(*(long *)plVar30[0xd] + 0x148))();
            if (((uVar7 & 1) != 0) &&
               (uVar7 = (**(code **)(*plVar27 + 0x120))(plVar27,plVar30[0xd]), (uVar7 & 1) != 0)) {
              (**(code **)(*(long *)plVar30[0xd] + 0x178))();
              (**(code **)(*(long *)plVar30[0xd] + 0x140))((long *)plVar30[0xd],0);
            }
            plVar18 = (long *)plVar30[1];
            if ((long *)plVar30[1] == (long *)0x0) break;
            do {
              plVar30 = plVar18;
              plVar18 = (long *)*plVar30;
            } while ((long *)*plVar30 != (long *)0x0);
LAB_7101d21578:
            if (plVar30 == plVar20) goto LAB_7101d21590;
          }
          plVar18 = plVar30 + 2;
          plVar21 = (long *)*plVar18;
          if ((long *)*plVar21 != plVar30) {
            do {
              lVar32 = *plVar18;
              plVar18 = (long *)(lVar32 + 0x10);
              plVar30 = (long *)*plVar18;
            } while (*plVar30 != lVar32);
            goto LAB_7101d21578;
          }
          plVar30 = plVar21;
        } while (plVar21 != plVar20);
LAB_7101d21590:
        plVar27 = (long *)plVar1[1];
      }
    }
    (**(code **)(*plVar27 + 0x188))(plVar27);
LAB_7101d215c4:
    local_910 = (long *)0x0;
    local_918 = &PTR_FUN_710523d9e8;
    FUN_710392eb40((ulong)plVar1);
  }
  FUN_71037780e0(&local_918,(long)&local_410,(long ****)"effect_in",uVar11,param_4,param_5,param_6,
                 param_7,param_8);
  plVar1 = local_910;
  plVar27 = (long *)local_910[1];
  if (plVar27 == (long *)0x0) {
    local_918 = &PTR_FUN_710523d9e8;
    local_910 = (long *)0x0;
    if (plVar1 != (long *)0x0) goto LAB_7101d216e8;
  }
  else {
    if ((char)local_910[2] != '\0') {
      plVar30 = *(long **)(*local_910 + 0x80);
      plVar20 = (long *)(*local_910 + 0x88);
      if (plVar30 != plVar20) {
        do {
          while( true ) {
            uVar7 = (**(code **)(*(long *)plVar30[0xd] + 0x148))();
            if (((uVar7 & 1) != 0) &&
               (uVar7 = (**(code **)(*plVar27 + 0x120))(plVar27,plVar30[0xd]), (uVar7 & 1) != 0)) {
              (**(code **)(*(long *)plVar30[0xd] + 0x178))();
              (**(code **)(*(long *)plVar30[0xd] + 0x140))((long *)plVar30[0xd],0);
            }
            plVar18 = (long *)plVar30[1];
            if ((long *)plVar30[1] == (long *)0x0) break;
            do {
              plVar30 = plVar18;
              plVar18 = (long *)*plVar30;
            } while ((long *)*plVar30 != (long *)0x0);
LAB_7101d2169c:
            if (plVar30 == plVar20) goto LAB_7101d216b4;
          }
          plVar18 = plVar30 + 2;
          plVar21 = (long *)*plVar18;
          if ((long *)*plVar21 != plVar30) {
            do {
              lVar32 = *plVar18;
              plVar18 = (long *)(lVar32 + 0x10);
              plVar30 = (long *)*plVar18;
            } while (*plVar30 != lVar32);
            goto LAB_7101d2169c;
          }
          plVar30 = plVar21;
        } while (plVar21 != plVar20);
LAB_7101d216b4:
        plVar27 = (long *)plVar1[1];
      }
    }
    (**(code **)(*plVar27 + 0x188))(plVar27);
LAB_7101d216e8:
    local_910 = (long *)0x0;
    local_918 = &PTR_FUN_710523d9e8;
    FUN_710392eb40((ulong)plVar1);
  }
  FUN_71037780e0(&local_918,(long)&local_410,(long ****)"boost_size",uVar11,param_4,param_5,param_6,
                 param_7,param_8);
  plVar1 = local_910;
  plVar27 = (long *)local_910[1];
  if (plVar27 == (long *)0x0) {
    local_918 = &PTR_FUN_710523d9e8;
    local_910 = (long *)0x0;
    if (plVar1 == (long *)0x0) goto LAB_7101d21814;
  }
  else {
    if ((char)local_910[2] != '\0') {
      plVar30 = *(long **)(*local_910 + 0x80);
      plVar20 = (long *)(*local_910 + 0x88);
      if (plVar30 != plVar20) {
        do {
          while( true ) {
            uVar7 = (**(code **)(*(long *)plVar30[0xd] + 0x148))();
            if (((uVar7 & 1) != 0) &&
               (uVar7 = (**(code **)(*plVar27 + 0x120))(plVar27,plVar30[0xd]), (uVar7 & 1) != 0)) {
              (**(code **)(*(long *)plVar30[0xd] + 0x178))();
              (**(code **)(*(long *)plVar30[0xd] + 0x140))((long *)plVar30[0xd],0);
            }
            plVar18 = (long *)plVar30[1];
            if ((long *)plVar30[1] == (long *)0x0) break;
            do {
              plVar30 = plVar18;
              plVar18 = (long *)*plVar30;
            } while ((long *)*plVar30 != (long *)0x0);
LAB_7101d217c0:
            if (plVar30 == plVar20) goto LAB_7101d217d8;
          }
          plVar18 = plVar30 + 2;
          plVar21 = (long *)*plVar18;
          if ((long *)*plVar21 != plVar30) {
            do {
              lVar32 = *plVar18;
              plVar18 = (long *)(lVar32 + 0x10);
              plVar30 = (long *)*plVar18;
            } while (*plVar30 != lVar32);
            goto LAB_7101d217c0;
          }
          plVar30 = plVar21;
        } while (plVar21 != plVar20);
LAB_7101d217d8:
        plVar27 = (long *)plVar1[1];
      }
    }
    (**(code **)(*plVar27 + 0x188))(plVar27);
  }
  local_910 = (long *)0x0;
  local_918 = &PTR_FUN_710523d9e8;
  FUN_710392eb40((ulong)plVar1);
LAB_7101d21814:
  pppppppplVar5 = local_408;
  local_410 = &PTR_FUN_710523d988;
  local_408 = (long ********)0x0;
  if (pppppppplVar5 != (long ********)0x0) {
    ppppppplVar8 = pppppppplVar5[3];
    pppppppplVar5[2] = (long *******)&PTR_FUN_710523d9a8;
    pppppppplVar5[3] = (long *******)0x0;
    if (ppppppplVar8 != (long *******)0x0) {
      FUN_710392eb40((ulong)ppppppplVar8);
    }
    FUN_710392eb40((ulong)pppppppplVar5);
  }
  uVar7 = DAT_7105325d88;
  lVar32 = *(long *)(*(long *)(DAT_7105325d88 + 8) + 0x118);
  if ((*(int *)(lVar32 + 200) != 2) && (*(char *)(lVar32 + 0xd8) != '\0')) {
    local_918 = (undefined **)((ulong)local_918 & 0xffffffffffffff00);
    local_910 = *(long **)(lVar32 + 0xf0);
    local_908 = *(undefined8 *)(lVar32 + 0xf8);
    uStack_8f8 = (undefined6)((ulong)*(undefined8 *)(lVar32 + 0x106) >> 0x10);
    uStack_900 = (undefined6)*(undefined8 *)(lVar32 + 0x100);
    local_8fa = (undefined2)((ulong)*(undefined8 *)(lVar32 + 0x100) >> 0x30);
    FUN_7101d11b60((long)auStack_8f0,lVar32 + 0x110);
    local_630 = *(undefined8 *)(lVar32 + 0x3d0);
    local_628 = *(undefined8 *)(lVar32 + 0x3d8);
    local_620 = *(undefined8 *)(lVar32 + 0x3e0);
    local_618 = *(undefined8 *)(lVar32 + 1000);
    local_610 = *(undefined8 *)(lVar32 + 0x3f0);
    local_608 = *(undefined8 *)(lVar32 + 0x3f8);
    local_600 = *(undefined8 *)(lVar32 + 0x400);
    local_5f8 = *(undefined8 *)(lVar32 + 0x408);
    local_5f0 = *(undefined8 *)(lVar32 + 0x410);
    local_5e8 = *(undefined8 *)(lVar32 + 0x418);
    local_5e0 = *(undefined8 *)(lVar32 + 0x420);
    local_5d8 = *(undefined8 *)(lVar32 + 0x428);
    local_5d0 = *(undefined8 *)(lVar32 + 0x430);
    uVar19 = 0;
    while( true ) {
      pbVar22 = (byte *)(lVar32 + 0x440 + uVar19);
      bVar3 = *pbVar22;
      if (bVar3 == 0) break;
      local_5c0[uVar19] = bVar3;
      if (0x3e < (int)uVar19 + 1U) {
        uVar19 = (ulong)((int)uVar19 + 1);
        break;
      }
      bVar3 = pbVar22[1];
      if (bVar3 == 0) {
        uVar19 = uVar19 + 1;
        break;
      }
      local_5c0[uVar19 + 1] = bVar3;
      uVar19 = uVar19 + 2;
    }
    local_5c0[uVar19 & 0xffffffff] = 0;
    local_5c4 = (undefined4)uVar19;
    uVar16 = (uint)local_5c0[0];
    local_5c8 = 0x811c9dc5;
    if (local_5c0[0] != 0) {
      pbVar22 = local_5c0;
      do {
        pbVar22 = pbVar22 + 1;
        local_5c8 = local_5c8 * 0x89 ^ uVar16;
        uVar16 = (uint)*pbVar22;
      } while (uVar16 != 0);
    }
    local_918 = (undefined **)CONCAT71(local_918._1_7_,1);
    *(long **)(param_1 + 200) = local_910;
    *(ulong *)(param_1 + 0xde) = CONCAT62(uStack_8f8,local_8fa);
    *(undefined8 *)(param_1 + 0xd0) = local_908;
    *(ulong *)(param_1 + 0xd8) = CONCAT26(local_8fa,uStack_900);
    FUN_71017005f0(param_1 + 0xe8,(long)auStack_8f0);
    *(undefined8 *)(param_1 + 0x3a8) = local_630;
    *(undefined8 *)(param_1 + 0x3c8) = local_610;
    *(undefined8 *)(param_1 + 0x3c0) = local_618;
    *(undefined8 *)(param_1 + 0x3b8) = local_620;
    *(undefined8 *)(param_1 + 0x3b0) = local_628;
    *(undefined8 *)(param_1 + 1000) = local_5f0;
    *(undefined8 *)(param_1 + 0x3e0) = local_5f8;
    *(undefined8 *)(param_1 + 0x3d8) = local_600;
    *(undefined8 *)(param_1 + 0x3d0) = local_608;
    *(undefined8 *)(param_1 + 0x408) = local_5d0;
    *(undefined8 *)(param_1 + 0x400) = local_5d8;
    *(undefined8 *)(param_1 + 0x3f8) = local_5e0;
    *(undefined8 *)(param_1 + 0x3f0) = local_5e8;
    if ((long **)(param_1 + 200) != &local_910) {
      for (uVar19 = 0; local_5c0[uVar19] != 0; uVar19 = uVar19 + 2) {
        *(byte *)(param_1 + uVar19 + 0x418) = local_5c0[uVar19];
        if (0x3e < (int)uVar19 + 1U) {
          uVar19 = (ulong)((int)uVar19 + 1);
          break;
        }
        if (local_5c0[uVar19 + 1] == 0) {
          uVar19 = uVar19 + 1;
          break;
        }
        *(byte *)(param_1 + uVar19 + 0x419) = local_5c0[uVar19 + 1];
      }
      *(undefined1 *)(param_1 + 0x418 + (uVar19 & 0xffffffff)) = 0;
      *(int *)(param_1 + 0x414) = (int)uVar19;
      uVar17 = (uint)*(byte *)(param_1 + 0x418);
      uVar16 = 0x811c9dc5;
      if (*(byte *)(param_1 + 0x418) != 0) {
        pbVar22 = (byte *)(param_1 + 0x419);
        do {
          uVar16 = uVar16 * 0x89 ^ uVar17;
          uVar17 = (uint)*pbVar22;
          pbVar22 = pbVar22 + 1;
        } while (uVar17 != 0);
      }
      *(uint *)(param_1 + 0x410) = uVar16;
    }
    lVar32 = *(long *)(*(long *)(uVar7 + 8) + 0x118);
    if ((*(int *)(lVar32 + 200) != 2) && (*(char *)(lVar32 + 0xd8) != '\0')) {
      local_410 = (undefined **)((ulong)local_410 & 0xffffffffffffff00);
      local_408 = *(long *********)(lVar32 + 0xf0);
      local_400 = *(undefined8 *)(lVar32 + 0xf8);
      uStack_3f0 = (undefined6)((ulong)*(undefined8 *)(lVar32 + 0x106) >> 0x10);
      uStack_3f8 = (undefined6)*(undefined8 *)(lVar32 + 0x100);
      local_3f2 = (undefined2)((ulong)*(undefined8 *)(lVar32 + 0x100) >> 0x30);
      FUN_7101d11b60((long)auStack_3e8,lVar32 + 0x110);
      local_128 = *(undefined8 *)(lVar32 + 0x3d0);
      local_108 = *(undefined8 *)(lVar32 + 0x3f0);
      local_110 = *(undefined8 *)(lVar32 + 1000);
      local_118 = *(undefined8 *)(lVar32 + 0x3e0);
      local_120 = *(undefined8 *)(lVar32 + 0x3d8);
      local_e8 = *(undefined8 *)(lVar32 + 0x410);
      local_f0 = *(undefined8 *)(lVar32 + 0x408);
      local_f8 = *(undefined8 *)(lVar32 + 0x400);
      local_100 = *(undefined8 *)(lVar32 + 0x3f8);
      local_e0 = *(undefined8 *)(lVar32 + 0x418);
      local_c8 = *(undefined8 *)(lVar32 + 0x430);
      local_d0 = *(undefined8 *)(lVar32 + 0x428);
      local_d8 = *(undefined8 *)(lVar32 + 0x420);
      local_c0 = 0;
      uVar7 = 0;
      while( true ) {
        pbVar22 = (byte *)(lVar32 + 0x440 + uVar7);
        bVar3 = *pbVar22;
        if (bVar3 == 0) break;
        local_b8[uVar7] = bVar3;
        if (0x3e < (int)uVar7 + 1U) {
          uVar7 = (ulong)((int)uVar7 + 1);
          break;
        }
        bVar3 = pbVar22[1];
        if (bVar3 == 0) {
          uVar7 = uVar7 + 1;
          break;
        }
        local_b8[uVar7 + 1] = bVar3;
        uVar7 = uVar7 + 2;
      }
      local_b8[uVar7 & 0xffffffff] = 0;
      local_bc = (int)uVar7;
      uVar16 = (uint)local_b8[0];
      local_c0 = 0x811c9dc5;
      if (local_b8[0] != 0) {
        pbVar22 = local_b8;
        do {
          pbVar22 = pbVar22 + 1;
          local_c0 = local_c0 * 0x89 ^ uVar16;
          uVar16 = (uint)*pbVar22;
        } while (uVar16 != 0);
      }
      uVar7 = (ulong)((int)local_400 == 2);
    }
    local_410 = (undefined **)((ulong)local_410 & 0xffffffffffffff00);
    local_450[0] = 0;
    local_458[0] = 0;
    local_458[1] = 0;
    pppplVar12 = (long ****)
                 (ulong)((uint)*(byte *)(param_1 + 0xe8) + (uint)*(byte *)(param_1 + 0x140) +
                         (uint)*(byte *)(param_1 + 0x198) + (uint)*(byte *)(param_1 + 0x1f0) +
                         (uint)*(byte *)(param_1 + 0x248) + (uint)*(byte *)(param_1 + 0x2a0) +
                         (uint)*(byte *)(param_1 + 0x2f8) + (uint)*(byte *)(param_1 + 0x350));
    FUN_710062dc20(local_458,"panel_%d");
    FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 0xc0) + 8),(long)local_450);
    uVar11 = extraout_x1;
    if ((uVar7 & 1) != 0) {
      FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 0xc0) + 8),0x710425f692);
      FUN_7103776640(&local_410,*(long *)(param_1 + 0xc0),(byte ****)"set_panel_00",pppplVar12,
                     param_4,param_5,param_6,param_7,param_8);
      pppppppplVar5 = local_408;
      FUN_7103778300(0x3f800000,(long)local_408,0x7104280c4f);
      local_410 = &PTR_FUN_710523d988;
      local_408 = (long ********)0x0;
      if (pppppppplVar5 != (long ********)0x0) {
        ppppppplVar8 = pppppppplVar5[3];
        pppppppplVar5[2] = (long *******)&PTR_FUN_710523d9a8;
        pppppppplVar5[3] = (long *******)0x0;
        if (ppppppplVar8 != (long *******)0x0) {
          FUN_710392eb40((ulong)ppppppplVar8);
        }
        FUN_710392eb40((ulong)pppppppplVar5);
      }
      FUN_7103776640(&local_410,*(long *)(param_1 + 0xc0),(byte ****)"set_panel_01",pppplVar12,
                     param_4,param_5,param_6,param_7,param_8);
      pppppppplVar5 = local_408;
      FUN_7103778300(0x3f800000,(long)local_408,0x71042b45b2);
      local_410 = &PTR_FUN_710523d988;
      local_408 = (long ********)0x0;
      if (pppppppplVar5 != (long ********)0x0) {
        ppppppplVar8 = pppppppplVar5[3];
        pppppppplVar5[2] = (long *******)&PTR_FUN_710523d9a8;
        pppppppplVar5[3] = (long *******)0x0;
        if (ppppppplVar8 != (long *******)0x0) {
          FUN_710392eb40((ulong)ppppppplVar8);
        }
        FUN_710392eb40((ulong)pppppppplVar5);
      }
      FUN_7103776640(&local_410,*(long *)(param_1 + 0xc0),(byte ****)"set_panel_02",pppplVar12,
                     param_4,param_5,param_6,param_7,param_8);
      pppppppplVar5 = local_408;
      FUN_7103778300(0x3f800000,(long)local_408,0x7104280c4f);
      local_410 = &PTR_FUN_710523d988;
      local_408 = (long ********)0x0;
      if (pppppppplVar5 != (long ********)0x0) {
        ppppppplVar8 = pppppppplVar5[3];
        pppppppplVar5[2] = (long *******)&PTR_FUN_710523d9a8;
        pppppppplVar5[3] = (long *******)0x0;
        if (ppppppplVar8 != (long *******)0x0) {
          FUN_710392eb40((ulong)ppppppplVar8);
        }
        FUN_710392eb40((ulong)pppppppplVar5);
      }
      FUN_7103776640(&local_410,*(long *)(param_1 + 0xc0),(byte ****)"set_panel_03",pppplVar12,
                     param_4,param_5,param_6,param_7,param_8);
      pppppppplVar5 = local_408;
      FUN_7103778300(0x3f800000,(long)local_408,0x71042b45b2);
      local_410 = &PTR_FUN_710523d988;
      local_408 = (long ********)0x0;
      uVar11 = extraout_x1_00;
      if (pppppppplVar5 != (long ********)0x0) {
        ppppppplVar8 = pppppppplVar5[3];
        pppppppplVar5[2] = (long *******)&PTR_FUN_710523d9a8;
        pppppppplVar5[3] = (long *******)0x0;
        if (ppppppplVar8 != (long *******)0x0) {
          FUN_710392eb40((ulong)ppppppplVar8);
        }
        FUN_710392eb40((ulong)pppppppplVar5);
        uVar11 = extraout_x1_01;
      }
    }
    uVar24 = 1;
    lVar32 = 0;
    plVar1 = (long *)(param_1 + 0x460);
    plVar27 = (long *)(param_1 + 0x478);
    uVar19 = uVar7;
    do {
      if (*(char *)(param_1 + lVar32 * 0x58 + 0xe8) != '\0') {
        pbVar22 = (byte *)(param_1 + lVar32 * 0x58 + 0xec);
        bVar3 = *pbVar22;
        plVar30 = *(long **)(param_1 + 0x460);
        uVar16 = (uint)bVar3;
        plVar20 = plVar1;
        if (plVar30 == (long *)0x0) {
LAB_7101d21ef4:
          FUN_7101d1b3f0(param_1,uVar11,pppplVar12,param_4,param_5,param_6,param_7,param_8);
          plVar30 = *(long **)(param_1 + 0x460);
          plVar20 = plVar1;
          while (plVar30 != (long *)0x0) {
            while (plVar18 = plVar30, (int)uVar16 < *(int *)((long)plVar18 + 0x1c)) {
              plVar30 = (long *)*plVar18;
              plVar20 = plVar18;
              if ((long *)*plVar18 == (long *)0x0) goto LAB_7101d21f48;
            }
            if ((int)uVar16 <= *(int *)((long)plVar18 + 0x1c)) break;
            plVar20 = plVar18 + 1;
            plVar30 = (long *)*plVar20;
          }
LAB_7101d21f48:
          plVar20 = (long *)*plVar20;
        }
        else {
          do {
            if ((int)(uint)bVar3 <= *(int *)((long)plVar30 + 0x1c)) {
              plVar20 = plVar30;
            }
            plVar30 = (long *)plVar30[*(int *)((long)plVar30 + 0x1c) < (int)(uint)bVar3];
          } while (plVar30 != (long *)0x0);
          if ((plVar20 == plVar1) || ((int)uVar16 < *(int *)((long)plVar20 + 0x1c)))
          goto LAB_7101d21ef4;
        }
        FUN_7103776640(&local_468,*(long *)(param_1 + 0xc0),(byte ****)"set_panel_%02d",
                       (ulong)*(uint *)(plVar20 + 4),param_4,param_5,param_6,param_7,param_8);
        local_4a8[0] = 0;
        local_4b0[0] = 0;
        local_4b0[1] = 0;
        uVar14 = uVar24;
        FUN_710062dc20(local_4b0,"cmn_%dp");
        FUN_7103776910(&local_410,(long)&local_468,(long ****)"set_txt_player",uVar14,param_4,
                       param_5,param_6,param_7,param_8);
        pbVar25 = (byte *)(param_1 + lVar32 * 0x58 + 0xea);
        iVar23 = (int)uVar24;
        uVar14 = (ulong)(iVar23 - 1);
        FUN_710377a280((long)&local_410,local_4a8,(uint)*pbVar25);
        pppppppplVar5 = local_408;
        local_410 = &PTR_FUN_710523d9a8;
        local_408 = (long ********)0x0;
        if (pppppppplVar5 != (long ********)0x0) {
          FUN_710392eb40((ulong)pppppppplVar5);
        }
        local_4f0[0] = 0;
        local_4f8[0] = 0;
        local_4f8[1] = 0;
        if ((uVar19 & 1) != 0) {
          uVar24 = (ulong)(*(byte *)(param_1 + lVar32 * 0x58 + 0xeb) + 1);
        }
        FUN_710062dc20(local_4f8,"player_color_%dp");
        uVar4 = local_460;
        FUN_7103778300(0x3f800000,local_460,(long)local_4f0);
        FUN_7103776910(&local_410,(long)&local_468,(long ****)"set_txt_name",uVar24,uVar14,param_5,
                       param_6,param_7,param_8);
        param_4 = (byte ****)(param_1 + lVar32 * 0x58 + 0xf8);
        uVar11 = 1;
        FUN_710377a280((long)&local_410,(byte *)"mnu_spectate_nam",1);
        pppppppplVar5 = local_408;
        local_410 = &PTR_FUN_710523d9a8;
        local_408 = (long ********)0x0;
        if (pppppppplVar5 != (long ********)0x0) {
          FUN_710392eb40((ulong)pppppppplVar5);
        }
        FUN_7103776910(&local_410,(long)&local_468,(long ****)"set_txt_pw",uVar11,param_4,param_5,
                       param_6,param_7,param_8);
        ppppppppplVar13 = (long *********)(ulong)*(uint *)(param_1 + lVar32 * 0x58 + 0x120);
        FUN_710377a310((long)&local_410,1);
        pppppppplVar5 = local_408;
        local_410 = &PTR_FUN_710523d9a8;
        local_408 = (long ********)0x0;
        if (pppppppplVar5 != (long ********)0x0) {
          FUN_710392eb40((ulong)pppppppplVar5);
        }
        uVar16 = (uint)*(byte *)(param_1 + lVar32 * 0x58 + 0xe9);
        if (uVar16 == 0xff) {
          puVar9 = &DAT_c1ffff0000000000;
        }
        else {
          puVar9 = FUN_7103264590(*(long *)(DAT_710532f730 + 8) + 0x160,uVar16);
        }
        lVar28 = *(long *)(DAT_710532f730 + 8);
        bVar6 = FUN_71032648e0(lVar28 + 0x160,(ulong)puVar9);
        if (bVar6) {
          puVar9 = FUN_71032631a0(*(long *)(lVar28 + 0x168),0x143829f67e);
        }
        ppppppppplVar29 = (long *********)(ulong)*pbVar25;
        FUN_7103778300(0x3f800000,uVar4,0x7104443995);
        FUN_7103776910(&local_508,(long)&local_468,(long ****)"set_rep_mark_m",ppppppppplVar13,
                       param_4,param_5,param_6,param_7,param_8);
        FUN_7103776910(&local_518,(long)&local_468,(long ****)"set_rep_chara",ppppppppplVar13,
                       param_4,param_5,param_6,param_7,param_8);
        FUN_7103776910(&local_528,(long)&local_468,(long ****)"set_rep_chara_sd",ppppppppplVar13,
                       param_4,param_5,param_6,param_7,param_8);
        FUN_7103776910(&local_538,(long)&local_468,(long ****)"set_txt_chara_name",ppppppppplVar13,
                       param_4,param_5,param_6,param_7,param_8);
        uVar24 = local_500;
        if ((((ulong)puVar9 & 0xff00000000000000) == 0xc100000000000000) &&
           (((ulong)puVar9 & 0xffffffffff) != 0)) {
          uVar19 = FUN_7103263f80(*(long *)(lVar28 + 0x168),(ulong)puVar9);
          uVar19 = FUN_7103238d60(uVar19,0x11);
          uVar24 = local_500;
          if ((uVar19 & 0xffffffffff) == 0) {
            local_410 = (undefined **)CONCAT44(local_410._4_4_,0xffffff);
            FUN_7103778c70(local_500,(uint *)&local_410,ppppppppplVar13,param_4,param_5,param_6,
                           param_7,param_8);
          }
          else {
            FUN_710353da30((uint *)&local_410,uVar19);
            uVar24 = local_500;
            uVar16 = (uint)local_410;
            FUN_7103778c70(local_500,(uint *)&local_410,ppppppppplVar13,param_4,param_5,param_6,
                           param_7,param_8);
            if (uVar16 != 0xffffff) {
              FUN_7103540b10(DAT_7105332f20,uVar16,ppppppppplVar13,param_4,param_5,param_6,param_7,
                             param_8);
              local_410 = (undefined **)CONCAT44(local_410._4_4_,0xffffff);
            }
          }
          plVar20 = *(long **)(param_1 + 0xb8);
          local_410 = (undefined **)FUN_7103238a70((ulong)puVar9,ppppppppplVar29,1);
          if (((ulong)local_410 & 0xffffffffff) != 0) {
            lVar10 = *plVar20;
            FUN_710323c4e0(lVar10,(ulong *)&local_410,(long *********)(long)*(int *)(lVar10 + 0x70),
                           (byte ****)(ulong)*(uint *)(lVar10 + 0x68),param_5,param_6,param_7,
                           param_8);
          }
          ppppbVar15 = (byte ****)0x1;
          ppppppppplVar13 = ppppppppplVar29;
          plVar20 = FUN_710323f330(*(long **)(param_1 + 0xb8),(ulong)puVar9,(ulong)ppppppppplVar29,1
                                   ,param_5,param_6,param_7,param_8);
          uVar31 = local_510;
          FUN_7103778b80(local_510,(long)plVar20,ppppppppplVar13,ppppbVar15,param_5,param_6,param_7,
                         param_8);
          param_4 = (byte ****)0x1;
          ppppppppplVar13 = ppppppppplVar29;
          plVar20 = FUN_710323f330(*(long **)(param_1 + 0xb8),(ulong)puVar9,(ulong)ppppppppplVar29,1
                                   ,param_5,param_6,param_7,param_8);
          uVar26 = local_520;
          FUN_7103778b80(local_520,(long)plVar20,ppppppppplVar13,param_4,param_5,param_6,param_7,
                         param_8);
          uVar16 = FUN_7103263540(*(long *)(lVar28 + 0x168),(ulong)puVar9,(ulong)ppppppppplVar29,
                                  param_4,param_5,param_6,param_7,param_8);
          FUN_7103262310((uint *)&local_410,*(long *)(lVar28 + 0x168),(ulong)puVar9);
          ppppppppplVar13 = &local_408;
          FUN_71003a4ca0((uint *)&local_580,"nam_chr1_%02d_%s",(ulong)uVar16,&local_408,param_4,
                         param_5,param_6,param_7,param_8);
          FUN_710377a120((long)&local_538,(char *)local_578,ppppppppplVar13,param_4,param_5,param_6,
                         param_7,param_8);
          uVar14 = local_530;
        }
        else {
          FUN_71037790a0(local_500,1,ppppppppplVar13,param_4,param_5,param_6,param_7,param_8);
          uVar31 = local_510;
          FUN_71037790a0(local_510,1,ppppppppplVar13,param_4,param_5,param_6,param_7,param_8);
          uVar26 = local_520;
          FUN_71037790a0(local_520,1,ppppppppplVar13,param_4,param_5,param_6,param_7,param_8);
          uVar14 = local_530;
          if (*(long **)(local_530 + 0x10) != (long *)0x0) {
            ppppppppplVar13 = (long *********)0x0;
            param_4 = (byte ****)0x0;
            local_410 = (undefined **)((ulong)local_410 & 0xffffffff00000000);
            FUN_71037a2270(*(long **)(local_530 + 0x10),(ushort *)&local_410,0,0);
          }
        }
        uVar19 = uVar7 & 0xffffffff;
        local_538 = &PTR_FUN_710523d9a8;
        local_530 = 0;
        if (uVar14 != 0) {
          FUN_710392eb40(uVar14);
        }
        local_528 = &PTR_FUN_710523d9a8;
        local_520 = 0;
        if (uVar26 != 0) {
          FUN_710392eb40(uVar26);
        }
        local_518 = &PTR_FUN_710523d9a8;
        local_510 = 0;
        if (uVar31 != 0) {
          FUN_710392eb40(uVar31);
        }
        local_508 = &PTR_FUN_710523d9a8;
        local_500 = 0;
        if (uVar24 != 0) {
          FUN_710392eb40(uVar24);
        }
        FUN_7103776910(&local_410,(long)&local_468,(long ****)"set_txt_win",ppppppppplVar13,param_4,
                       param_5,param_6,param_7,param_8);
        FUN_710377a310((long)&local_410,1);
        pppppppplVar5 = local_408;
        local_410 = &PTR_FUN_710523d9a8;
        local_408 = (long ********)0x0;
        if (pppppppplVar5 != (long ********)0x0) {
          FUN_710392eb40((ulong)pppppppplVar5);
        }
        uVar17 = (uint)*(byte *)(param_1 + lVar32 * 0x58 + 0xed);
        uVar16 = 4 - uVar17;
        if (3 < uVar17) {
          uVar16 = 0;
        }
        uVar24 = (ulong)uVar16;
        local_408 = (long ********)((ulong)local_408 & 0xffffffffffffff00);
        local_410 = (undefined **)0x0;
        FUN_710062dc20((uint *)&local_410,"arrow_color_%d");
        FUN_7103778300(0x3f800000,uVar4,(long)&local_408);
        FUN_7103776910(&local_580,(long)&local_468,(long ****)"set_txt_arrow",uVar24,param_4,param_5
                       ,param_6,param_7,param_8);
        pppplVar12 = (long ****)(ulong)uVar16;
        FUN_710377a120((long)&local_580,"mnu_spectate_vector_%d",pppplVar12,param_4,param_5,param_6,
                       param_7,param_8);
        uVar24 = local_578[0];
        local_580 = &PTR_FUN_710523d9a8;
        local_578[0] = 0;
        uVar11 = extraout_x1_02;
        if (uVar24 != 0) {
          FUN_710392eb40(uVar24);
          uVar11 = extraout_x1_03;
        }
        if ((uVar7 & 1) != 0) {
          pcVar2 = (char *)(param_1 + lVar32 * 0x58 + 0xeb);
          if (*(char *)(param_1 + 0xe8) != '\0') {
            uVar16 = (uint)*(byte *)(param_1 + 0xec);
            if ((uVar16 != *pbVar22) && (*(char *)(param_1 + 0xeb) == *pcVar2)) {
              plVar30 = (long *)*plVar27;
              plVar20 = plVar27;
              while (plVar30 != (long *)0x0) {
                while (plVar18 = plVar30, uVar17 = *(uint *)((long)plVar18 + 0x1c),
                      uVar17 != *(byte *)(param_1 + 0xec) && (int)uVar16 <= (int)uVar17) {
                  plVar30 = (long *)*plVar18;
                  plVar20 = plVar18;
                  if ((long *)*plVar18 == (long *)0x0) goto LAB_7101d224c4;
                }
                if ((int)uVar16 <= (int)uVar17) break;
                plVar20 = plVar18 + 1;
                plVar30 = (long *)*plVar20;
              }
LAB_7101d224c4:
              lVar28 = *plVar20;
              *(uint *)(lVar28 + 0x24) = (uint)*pbVar22;
              *(undefined1 *)(lVar28 + 0x20) = 1;
            }
          }
          if (*(char *)(param_1 + 0x140) != '\0') {
            uVar16 = (uint)*(byte *)(param_1 + 0x144);
            if ((uVar16 != *pbVar22) && (*(char *)(param_1 + 0x143) == *pcVar2)) {
              plVar30 = (long *)*plVar27;
              plVar20 = plVar27;
              while (plVar30 != (long *)0x0) {
                while (plVar18 = plVar30, uVar17 = *(uint *)((long)plVar18 + 0x1c),
                      uVar17 != *(byte *)(param_1 + 0x144) && (int)uVar16 <= (int)uVar17) {
                  plVar30 = (long *)*plVar18;
                  plVar20 = plVar18;
                  if ((long *)*plVar18 == (long *)0x0) goto LAB_7101d22548;
                }
                if ((int)uVar16 <= (int)uVar17) break;
                plVar20 = plVar18 + 1;
                plVar30 = (long *)*plVar20;
              }
LAB_7101d22548:
              lVar28 = *plVar20;
              *(uint *)(lVar28 + 0x24) = (uint)*pbVar22;
              *(undefined1 *)(lVar28 + 0x20) = 1;
            }
          }
          if (*(char *)(param_1 + 0x198) != '\0') {
            uVar16 = (uint)*(byte *)(param_1 + 0x19c);
            if ((uVar16 != *pbVar22) && (*(char *)(param_1 + 0x19b) == *pcVar2)) {
              plVar30 = (long *)*plVar27;
              plVar20 = plVar27;
              while (plVar30 != (long *)0x0) {
                while (plVar18 = plVar30, uVar17 = *(uint *)((long)plVar18 + 0x1c),
                      uVar17 != *(byte *)(param_1 + 0x19c) && (int)uVar16 <= (int)uVar17) {
                  plVar30 = (long *)*plVar18;
                  plVar20 = plVar18;
                  if ((long *)*plVar18 == (long *)0x0) goto LAB_7101d225cc;
                }
                if ((int)uVar16 <= (int)uVar17) break;
                plVar20 = plVar18 + 1;
                plVar30 = (long *)*plVar20;
              }
LAB_7101d225cc:
              lVar28 = *plVar20;
              *(uint *)(lVar28 + 0x24) = (uint)*pbVar22;
              *(undefined1 *)(lVar28 + 0x20) = 1;
            }
          }
          if (*(char *)(param_1 + 0x1f0) != '\0') {
            uVar16 = (uint)*(byte *)(param_1 + 500);
            if ((uVar16 != *pbVar22) && (*(char *)(param_1 + 499) == *pcVar2)) {
              plVar30 = (long *)*plVar27;
              plVar20 = plVar27;
              while (plVar30 != (long *)0x0) {
                while (plVar18 = plVar30, uVar17 = *(uint *)((long)plVar18 + 0x1c),
                      uVar17 != *(byte *)(param_1 + 500) && (int)uVar16 <= (int)uVar17) {
                  plVar30 = (long *)*plVar18;
                  plVar20 = plVar18;
                  if ((long *)*plVar18 == (long *)0x0) goto LAB_7101d22650;
                }
                if ((int)uVar16 <= (int)uVar17) break;
                plVar20 = plVar18 + 1;
                plVar30 = (long *)*plVar20;
              }
LAB_7101d22650:
              lVar28 = *plVar20;
              *(uint *)(lVar28 + 0x24) = (uint)*pbVar22;
              *(undefined1 *)(lVar28 + 0x20) = 1;
            }
          }
          if (*(char *)(param_1 + 0x248) != '\0') {
            uVar16 = (uint)*(byte *)(param_1 + 0x24c);
            if ((uVar16 != *pbVar22) && (*(char *)(param_1 + 0x24b) == *pcVar2)) {
              plVar30 = (long *)*plVar27;
              plVar20 = plVar27;
              while (plVar30 != (long *)0x0) {
                while (plVar18 = plVar30, uVar17 = *(uint *)((long)plVar18 + 0x1c),
                      uVar17 != *(byte *)(param_1 + 0x24c) && (int)uVar16 <= (int)uVar17) {
                  plVar30 = (long *)*plVar18;
                  plVar20 = plVar18;
                  if ((long *)*plVar18 == (long *)0x0) goto LAB_7101d226d4;
                }
                if ((int)uVar16 <= (int)uVar17) break;
                plVar20 = plVar18 + 1;
                plVar30 = (long *)*plVar20;
              }
LAB_7101d226d4:
              lVar28 = *plVar20;
              *(uint *)(lVar28 + 0x24) = (uint)*pbVar22;
              *(undefined1 *)(lVar28 + 0x20) = 1;
            }
          }
          if (*(char *)(param_1 + 0x2a0) != '\0') {
            uVar16 = (uint)*(byte *)(param_1 + 0x2a4);
            if ((uVar16 != *pbVar22) && (*(char *)(param_1 + 0x2a3) == *pcVar2)) {
              plVar30 = (long *)*plVar27;
              plVar20 = plVar27;
              while (plVar30 != (long *)0x0) {
                while (plVar18 = plVar30, uVar17 = *(uint *)((long)plVar18 + 0x1c),
                      uVar17 != *(byte *)(param_1 + 0x2a4) && (int)uVar16 <= (int)uVar17) {
                  plVar30 = (long *)*plVar18;
                  plVar20 = plVar18;
                  if ((long *)*plVar18 == (long *)0x0) goto LAB_7101d22758;
                }
                if ((int)uVar16 <= (int)uVar17) break;
                plVar20 = plVar18 + 1;
                plVar30 = (long *)*plVar20;
              }
LAB_7101d22758:
              lVar28 = *plVar20;
              *(uint *)(lVar28 + 0x24) = (uint)*pbVar22;
              *(undefined1 *)(lVar28 + 0x20) = 1;
            }
          }
          if (*(char *)(param_1 + 0x2f8) != '\0') {
            uVar16 = (uint)*(byte *)(param_1 + 0x2fc);
            if ((uVar16 != *pbVar22) && (*(char *)(param_1 + 0x2fb) == *pcVar2)) {
              plVar30 = (long *)*plVar27;
              plVar20 = plVar27;
              while (plVar30 != (long *)0x0) {
                while (plVar18 = plVar30, uVar17 = *(uint *)((long)plVar18 + 0x1c),
                      uVar17 != *(byte *)(param_1 + 0x2fc) && (int)uVar16 <= (int)uVar17) {
                  plVar30 = (long *)*plVar18;
                  plVar20 = plVar18;
                  if ((long *)*plVar18 == (long *)0x0) goto LAB_7101d227dc;
                }
                if ((int)uVar16 <= (int)uVar17) break;
                plVar20 = plVar18 + 1;
                plVar30 = (long *)*plVar20;
              }
LAB_7101d227dc:
              lVar28 = *plVar20;
              *(uint *)(lVar28 + 0x24) = (uint)*pbVar22;
              *(undefined1 *)(lVar28 + 0x20) = 1;
            }
          }
          if (*(char *)(param_1 + 0x350) != '\0') {
            uVar16 = (uint)*(byte *)(param_1 + 0x354);
            if ((uVar16 != *pbVar22) && (*(char *)(param_1 + 0x353) == *pcVar2)) {
              plVar30 = (long *)*plVar27;
              plVar20 = plVar27;
              while (plVar30 != (long *)0x0) {
                while (plVar18 = plVar30, uVar17 = *(uint *)((long)plVar18 + 0x1c),
                      uVar17 != *(byte *)(param_1 + 0x354) && (int)uVar16 <= (int)uVar17) {
                  plVar30 = (long *)*plVar18;
                  plVar20 = plVar18;
                  if ((long *)*plVar18 == (long *)0x0) goto LAB_7101d22860;
                }
                if ((int)uVar16 <= (int)uVar17) break;
                plVar20 = plVar18 + 1;
                plVar30 = (long *)*plVar20;
              }
LAB_7101d22860:
              lVar28 = *plVar20;
              *(uint *)(lVar28 + 0x24) = (uint)*pbVar22;
              *(undefined1 *)(lVar28 + 0x20) = 1;
            }
          }
        }
        uVar24 = (ulong)(iVar23 + 1);
        local_468 = &PTR_FUN_710523d988;
        local_460 = 0;
        if (uVar4 != 0) {
          uVar14 = *(ulong *)(uVar4 + 0x18);
          *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar4 + 0x18) = 0;
          if (uVar14 != 0) {
            FUN_710392eb40(uVar14);
          }
          FUN_710392eb40(uVar4);
          uVar11 = extraout_x1_04;
        }
      }
      lVar32 = lVar32 + 1;
    } while (lVar32 != 8);
    *(byte *)(param_1 + 0x4a0) = param_2 & 1;
    lVar32 = *(long *)(*(long *)(DAT_7105325d88 + 8) + 0x118);
    if ((*(int *)(lVar32 + 200) == 2) || (*(char *)(lVar32 + 0xd8) == '\0')) {
      bVar6 = false;
    }
    else {
      local_410 = (undefined **)((ulong)local_410 & 0xffffffffffffff00);
      local_408 = *(long *********)(lVar32 + 0xf0);
      local_400 = *(undefined8 *)(lVar32 + 0xf8);
      uStack_3f0 = (undefined6)((ulong)*(undefined8 *)(lVar32 + 0x106) >> 0x10);
      uStack_3f8 = (undefined6)*(undefined8 *)(lVar32 + 0x100);
      local_3f2 = (undefined2)((ulong)*(undefined8 *)(lVar32 + 0x100) >> 0x30);
      FUN_7101d11b60((long)auStack_3e8,lVar32 + 0x110);
      local_128 = *(undefined8 *)(lVar32 + 0x3d0);
      local_108 = *(undefined8 *)(lVar32 + 0x3f0);
      local_110 = *(undefined8 *)(lVar32 + 1000);
      local_118 = *(undefined8 *)(lVar32 + 0x3e0);
      local_120 = *(undefined8 *)(lVar32 + 0x3d8);
      local_e8 = *(undefined8 *)(lVar32 + 0x410);
      local_f0 = *(undefined8 *)(lVar32 + 0x408);
      local_f8 = *(undefined8 *)(lVar32 + 0x400);
      local_100 = *(undefined8 *)(lVar32 + 0x3f8);
      local_e0 = *(undefined8 *)(lVar32 + 0x418);
      local_c8 = *(undefined8 *)(lVar32 + 0x430);
      local_d0 = *(undefined8 *)(lVar32 + 0x428);
      local_d8 = *(undefined8 *)(lVar32 + 0x420);
      local_c0 = 0;
      uVar7 = 0;
      while( true ) {
        pbVar22 = (byte *)(lVar32 + 0x440 + uVar7);
        bVar3 = *pbVar22;
        if (bVar3 == 0) break;
        local_b8[uVar7] = bVar3;
        if (0x3e < (int)uVar7 + 1U) {
          uVar7 = (ulong)((int)uVar7 + 1);
          break;
        }
        bVar3 = pbVar22[1];
        if (bVar3 == 0) {
          uVar7 = uVar7 + 1;
          break;
        }
        local_b8[uVar7 + 1] = bVar3;
        uVar7 = uVar7 + 2;
      }
      local_b8[uVar7 & 0xffffffff] = 0;
      uVar16 = (uint)local_b8[0];
      local_c0 = 0x811c9dc5;
      local_bc = (int)uVar7;
      if (local_b8[0] != 0) {
        pbVar22 = local_b8;
        do {
          pbVar22 = pbVar22 + 1;
          local_c0 = local_c0 * 0x89 ^ uVar16;
          uVar16 = (uint)*pbVar22;
        } while (uVar16 != 0);
      }
      bVar6 = (int)local_400 == 2;
    }
    local_410 = (undefined **)((ulong)local_410 & 0xffffffffffffff00);
    *(bool *)(param_1 + 0x4a1) = bVar6;
    if (0x12 < *(uint *)(param_1 + 0xa4)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xa4) * 4 + 0x58) = 1;
  }
  return;
}

