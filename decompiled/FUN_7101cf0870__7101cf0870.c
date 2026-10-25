// addr:      7101cf0870
// offset:    0x1cf0870
// name:      FUN_7101cf0870
// mangled:   
// signature: undefined __cdecl FUN_7101cf0870(long param_1, uint param_2, long * * * * * * * * * param_3, long * * * * * * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101cf0870(long param_1,uint param_2,long *********param_3,long *********param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  ulong *puVar2;
  uint *puVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  ulong uVar9;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 extraout_x1_09;
  long lVar12;
  long *plVar13;
  ushort *puVar14;
  uint uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  uint uVar19;
  long *********ppppppppplVar20;
  long lVar21;
  ulong uVar22;
  uint auStack_49c [17];
  undefined8 local_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined4 local_440;
  byte local_43c [4];
  char local_438;
  char local_437;
  char local_436;
  char local_435;
  undefined1 auStack_430 [12];
  undefined1 local_424;
  short local_414;
  uint local_328;
  uint local_324;
  ushort local_320 [5];
  short local_316;
  short local_314;
  short local_312;
  short local_310;
  short local_30e;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined1 *local_298;
  long ********local_290;
  ulong local_288;
  undefined2 local_280;
  undefined2 uStack_27e;
  undefined4 uStack_27c;
  ushort local_278 [32];
  undefined8 local_238;
  undefined8 local_230;
  undefined5 uStack_228;
  undefined3 local_223;
  undefined4 uStack_220;
  byte bStack_21c;
  char local_21b;
  char local_21a;
  char local_219;
  char local_218;
  char local_217;
  char local_216;
  char local_215;
  undefined1 auStack_210 [264];
  undefined8 local_108;
  ushort local_100;
  short local_fe;
  short local_fc;
  short local_fa;
  short local_f8;
  short local_f6;
  short local_f4;
  short local_f2;
  short local_f0;
  short local_ee;
  undefined8 local_e8;
  undefined8 local_e0;
  uint local_d8;
  undefined2 uStack_d4;
  undefined2 uStack_d2;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 *local_78;
  long ********local_70;
  ulong local_68;
  
  lVar16 = DAT_710532f8f8;
  if (0x61 < param_2) {
    return;
  }
  if (*(long *)(param_1 + 0x160) == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 200) | 4) == 4) {
    return;
  }
  lVar21 = param_1 + (long)(int)param_2 * 0x18;
  uVar22 = (ulong)(int)param_2;
  iVar6 = FUN_710334fcb0(*(long *)(DAT_710532f8f8 + 8),*(ulong *)(lVar21 + 0x170));
  if ((iVar6 == 3) && (*(int *)(param_1 + uVar22 * 0x18 + 0x17c) == 1)) {
    return;
  }
  lVar12 = param_1 + uVar22 * 0x18;
  piVar1 = (int *)(lVar12 + 0x178);
  if (*(int *)(lVar12 + 0x178) == 3) {
LAB_7101cf0994:
    lVar16 = *(long *)(param_1 + 0x160);
    if (*(int *)(lVar16 + 0x58) <= (int)param_2) goto LAB_7101cf0a48;
    uVar9 = (*(long *)(lVar16 + 0x208) - *(long *)(lVar16 + 0x200) >> 4) * -0x5555555555555555;
    if (uVar9 < uVar22 || uVar9 - uVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    FUN_7103776390(&local_70,(undefined8 *)(*(long *)(lVar16 + 0x200) + uVar22 * 0x30 + 0x20),
                   (long ****)param_3,(byte ****)param_4,param_5,param_6,param_7,param_8);
    uVar10 = extraout_x1_00;
  }
  else {
    lVar16 = *(long *)(lVar16 + 8);
    if ((*(long *)(lVar16 + 0x108) == 0) ||
       (plVar13 = *(long **)(lVar16 + 0x100), plVar13 == (long *)0x0)) {
      *piVar1 = 0;
      goto LAB_7101cf0994;
    }
    plVar17 = (long *)(lVar16 + 0x100);
    plVar18 = plVar13;
    do {
      if (0 < (int)plVar18[4]) {
        plVar17 = plVar18;
      }
      plVar18 = (long *)plVar18[(int)plVar18[4] < 1];
    } while (plVar18 != (long *)0x0);
    if ((plVar17 == (long *)(lVar16 + 0x100)) || (1 < (int)plVar17[4])) {
      *piVar1 = 0;
    }
    else {
      plVar17 = (long *)(lVar16 + 0x100);
      do {
        while (plVar18 = plVar13, 1 < (int)plVar18[4]) {
          plVar13 = (long *)*plVar18;
          plVar17 = plVar18;
          if ((long *)*plVar18 == (long *)0x0) goto LAB_7101cf0a20;
        }
        if ((int)plVar18[4] == 1) break;
        plVar17 = plVar18 + 1;
        plVar13 = (long *)*plVar17;
      } while ((long *)*plVar17 != (long *)0x0);
LAB_7101cf0a20:
      iVar6 = 3;
      if (*(int *)(*plVar17 + 0x28) != 2) {
        iVar6 = (uint)(*(int *)(*plVar17 + 0x28) == 1) << 1;
      }
      *piVar1 = iVar6;
    }
    if (-1 < (int)param_2) goto LAB_7101cf0994;
LAB_7101cf0a48:
    FUN_7103776290(&local_70,extraout_x1,(long ****)param_3,(byte ****)param_4,param_5,param_6,
                   param_7,param_8);
    uVar10 = extraout_x1_01;
  }
  puVar2 = (ulong *)(lVar21 + 0x170);
  if (*piVar1 == 3) {
    uVar9 = *puVar2;
    puVar3 = (uint *)(lVar21 + 0x168);
    if (uVar9 == 0) {
      lVar12 = *(long *)(DAT_710532f8f8 + 8);
      lVar16 = *(long *)(lVar12 + 0x110);
      lVar21 = *(long *)(lVar12 + 0x118);
      if (lVar16 == lVar21) {
        param_3 = (long *********)(ulong)*(uint *)(lVar12 + 0xd8);
        FUN_710334c400(&local_290,lVar12,(long ****)param_3,(byte ****)param_4,param_5,param_6,
                       param_7,param_8);
        uVar9 = *(ulong *)(lVar12 + 0x110);
        if (uVar9 != 0) {
          *(ulong *)(lVar12 + 0x118) = uVar9;
          FUN_710392eb40(uVar9);
          *(undefined8 *)(lVar12 + 0x118) = 0;
          *(undefined8 *)(lVar12 + 0x120) = 0;
          *(undefined8 *)(lVar12 + 0x110) = 0;
        }
        *(long *********)(lVar12 + 0x110) = local_290;
        *(ulong *)(lVar12 + 0x118) = local_288;
        *(ulong *)(lVar12 + 0x120) = CONCAT44(uStack_27c,CONCAT22(uStack_27e,local_280));
        lVar16 = *(long *)(lVar12 + 0x110);
        lVar21 = *(long *)(lVar12 + 0x118);
      }
      if (uVar22 < (ulong)(lVar21 - lVar16 >> 3)) {
        uVar9 = *(ulong *)(lVar16 + uVar22 * 8);
        *puVar2 = uVar9;
        if (uVar9 != 0) goto LAB_7101cf0a6c;
        uVar10 = 0;
      }
      else {
        uVar9 = *puVar2;
        uVar10 = 0;
        if (uVar9 != 0) goto LAB_7101cf0a6c;
      }
LAB_7101cf0b9c:
      uVar5 = 0xffff;
      if ((int)param_2 < 0) goto LAB_7101cf0bdc;
LAB_7101cf0ba4:
      lVar16 = *(long *)(*(long *)(param_1 + 0x160) + 0x200);
      uVar9 = (*(long *)(*(long *)(param_1 + 0x160) + 0x208) - lVar16 >> 4) * -0x5555555555555555;
      if (uVar9 < uVar22 || uVar9 - uVar22 == 0) goto LAB_7101cf0bdc;
      param_4 = (long *********)(ulong)*(uint *)(lVar16 + uVar22 * 0x30);
    }
    else {
LAB_7101cf0a6c:
      param_3 = (long *********)(ulong)*puVar3;
      uVar5 = FUN_710334c7d0(*(long *)(DAT_710532f8f8 + 8),uVar9,*puVar3);
      uVar10 = extraout_x1_02;
      if (uVar5 == 0xffff) goto LAB_7101cf0b9c;
      param_3 = (long *********)0x0;
      local_288 = local_288 & 0xffffffffffffff00;
      local_290 = (long ********)0x0;
      if (uVar5 < 4) {
        param_3 = (long *********)(ulong)*(uint *)(&DAT_710446a5c0 + (long)(short)uVar5 * 4);
      }
      FUN_710062dc20((uint *)&local_290,"mode_%02d");
      FUN_7103778300(0x3f800000,local_68,(long)&local_288);
      FUN_7103778300(0x3f800000,local_68,0x71042e73f1);
      uVar10 = extraout_x1_03;
      if (-1 < (int)param_2) goto LAB_7101cf0ba4;
LAB_7101cf0bdc:
      param_4 = (long *********)0x0;
    }
    switch(uVar5) {
    case 0:
      ppppppppplVar20 = *(long **********)(param_1 + 0xd8);
      FUN_7103778300(0x3f800000,local_68,0x710433a322);
      FUN_7103776910(&local_290,(long)&local_70,(long ****)"set_rep_mfshot",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      param_4 = &local_290;
      uVar7 = FUN_710334fb10(*(long *)(DAT_710532f8f8 + 8),ppppppppplVar20,*puVar2,param_4,param_5,
                             param_6,param_7,param_8);
      uVar9 = local_288;
      uVar19 = (uint)((int)uVar7 == 3);
      local_290 = (long ********)&PTR_FUN_710523d9a8;
      local_288 = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      uStack_27c = 0;
      local_278[0] = 0;
      local_280 = 0;
      param_3 = &local_290;
      local_288 = 0;
      local_290 = (long ********)0x0;
      uStack_220 = 0;
      bStack_21c = 0;
      local_e8 = 0x13ffff0000000000;
      local_e0 = 0x5affff0000000000;
      uStack_228 = 0;
      local_223 = 0;
      local_230 = 0;
      local_238 = 0;
      local_108 = 0;
      local_100 = 0;
      uStack_d4 = 0;
      local_d8 = 0;
      local_78 = &DAT_c1ffff0000000000;
      uVar8 = FUN_710334f120(*(long *)(DAT_710532f8f8 + 8),(int *)puVar3,param_3);
      uVar10 = extraout_x1_06;
      if (((int)uVar7 == 3) && ((int)uVar8 == 3)) {
        uVar15 = 0;
        if ((byte)local_d8 < 0xc) {
          uVar15 = local_d8 & 0xff;
        }
        param_3 = (long *********)(ulong)uVar15;
        FUN_7103778430((long)&local_70,"mf_clr_%02d",param_3,param_4,param_5,param_6,param_7,param_8
                      );
        uVar10 = extraout_x1_07;
      }
      if ((int)uVar8 == 3) {
        FUN_71016bc6e0(auStack_49c,local_278);
        uStack_448 = CONCAT35(local_223,uStack_228);
        local_450 = local_230;
        local_458 = local_238;
        uVar9 = (ulong)bStack_21c;
        if (bStack_21c != 0) {
          local_43c[0] = bStack_21c;
          if (local_21b == '\0') {
            uVar9 = 1;
          }
          else {
            local_43c[1] = local_21b;
            if (local_21a == '\0') {
              uVar9 = 2;
            }
            else {
              local_43c[2] = local_21a;
              if (local_219 == '\0') {
                uVar9 = 3;
              }
              else {
                local_43c[3] = local_219;
                if (local_218 == '\0') {
                  uVar9 = 4;
                }
                else {
                  local_438 = local_218;
                  if (local_217 == '\0') {
                    uVar9 = 5;
                  }
                  else {
                    local_437 = local_217;
                    if (local_216 == '\0') {
                      uVar9 = 6;
                    }
                    else {
                      local_436 = local_216;
                      if (local_215 == '\0') {
                        uVar9 = 7;
                      }
                      else {
                        local_435 = local_215;
                        uVar9 = 8;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        local_43c[uVar9] = 0;
        local_440 = (undefined4)uVar9;
        param_3 = (long *********)&DAT_00000108;
        memcpy(auStack_430,auStack_210,0x108);
        if (local_100 == 0) {
          local_324 = 0;
        }
        else {
          local_320[0] = local_100;
          if (local_fe == 0) {
            local_324 = 1;
          }
          else {
            local_320[1] = local_fe;
            if (local_fc == 0) {
              local_324 = 2;
            }
            else {
              local_320[2] = local_fc;
              if (local_fa == 0) {
                local_324 = 3;
              }
              else {
                local_320[3] = local_fa;
                if (local_f8 == 0) {
                  local_324 = 4;
                }
                else {
                  local_320[4] = local_f8;
                  if (local_f6 == 0) {
                    local_324 = 5;
                  }
                  else {
                    local_316 = local_f6;
                    if (local_f4 == 0) {
                      local_324 = 6;
                    }
                    else {
                      local_314 = local_f4;
                      if (local_f2 == 0) {
                        local_324 = 7;
                      }
                      else {
                        local_312 = local_f2;
                        if (local_f0 == 0) {
                          local_324 = 8;
                        }
                        else {
                          local_310 = local_f0;
                          if (local_ee == 0) {
                            local_324 = 9;
                          }
                          else {
                            local_30e = local_ee;
                            local_324 = 10;
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
        local_320[local_324] = 0;
        puVar14 = local_320;
        uVar15 = (uint)local_320[0];
        local_328 = 0x811c9dc5;
        if (local_320[0] != 0) {
          do {
            puVar14 = puVar14 + 1;
            local_328 = local_328 * 0x89 ^ uVar15;
            uVar15 = (uint)*puVar14;
          } while (uVar15 != 0);
        }
        local_300 = local_e0;
        local_2e0 = local_c0;
        local_308 = local_e8;
        local_2f0 = local_d0;
        uStack_2e8 = local_c8;
        local_2f8 = CONCAT26(uStack_d2,CONCAT24(uStack_d4,local_d8));
        local_2c0 = local_a0;
        local_2c8 = local_a8;
        local_2d0 = local_b0;
        local_2d8 = local_b8;
        local_2a0 = local_80;
        local_2a8 = local_88;
        local_2b0 = local_90;
        local_2b8 = local_98;
        local_298 = local_78;
        local_424 = 1;
        pcVar11 = "icon01_on";
        if (local_414 != 0) {
          pcVar11 = "icon01_off";
        }
        FUN_7103778300(0x3f800000,local_68,(long)pcVar11);
        uVar10 = extraout_x1_09;
      }
      break;
    case 1:
      param_3 = &local_70;
      bVar4 = FUN_7101cf23e0(*(long **********)(param_1 + 0xd8),(long)puVar3,(long)param_3,param_4,
                             param_5,param_6,param_7,param_8);
      uVar19 = (uint)bVar4;
      uVar10 = extraout_x1_08;
      break;
    case 2:
    case 3:
      param_3 = &local_70;
      bVar4 = FUN_7101cf2530(*(long **********)(param_1 + 0xd8),puVar3,(long)param_3,param_4,param_5
                             ,param_6,param_7,param_8);
      uVar19 = (uint)bVar4;
      uVar10 = extraout_x1_04;
      break;
    case 4:
      param_3 = &local_70;
      bVar4 = FUN_7101cf2800(*(long **********)(param_1 + 0xd8),(long)puVar3,(long)param_3,param_4,
                             param_5,param_6,param_7,param_8);
      uVar19 = (uint)bVar4;
      uVar10 = extraout_x1_05;
      break;
    default:
      uVar19 = 0;
    }
    *(uint *)(param_1 + uVar22 * 0x18 + 0x17c) = uVar19;
    if (uVar19 != 1) goto LAB_7101cf0b0c;
LAB_7101cf0e10:
    FUN_71037780e0(&local_290,(long)&local_70,(long ****)"turn_on",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar22 = local_288;
    if (*(long **)(local_288 + 8) == (long *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)(**(long **)(local_288 + 8) + 0x148))();
      uVar9 = uVar9 & 0xffffffff;
    }
    local_290 = (long ********)&PTR_FUN_710523d9e8;
    local_288 = 0;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
    }
    if ((uVar9 & 1) != 0) {
      FUN_7103778300(0x3f800000,local_68,0x7104433949);
    }
  }
  else {
    if (*(int *)(param_1 + uVar22 * 0x18 + 0x17c) == 1) goto LAB_7101cf0e10;
LAB_7101cf0b0c:
    FUN_7101cf2220((long)&local_70,uVar10,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  uVar22 = *puVar2;
  plVar17 = (long *)(*(long *)(DAT_7105325cc0 + 8) + 8);
  plVar18 = (long *)*plVar17;
  plVar13 = plVar17;
  if (plVar18 != (long *)0x0) {
    do {
      if ((ulong)plVar18[4] >= uVar22) {
        plVar13 = plVar18;
      }
      plVar18 = (long *)plVar18[(ulong)plVar18[4] < uVar22];
    } while (plVar18 != (long *)0x0);
    if ((plVar13 != plVar17) && ((ulong)plVar13[4] <= uVar22)) {
      pcVar11 = "icon_on";
      goto LAB_7101cf0ed0;
    }
  }
  pcVar11 = "icon_off";
LAB_7101cf0ed0:
  FUN_7103778300(0x3f800000,local_68,(long)pcVar11);
  uVar22 = local_68;
  local_70 = (long ********)&PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar22 != 0) {
    uVar9 = *(ulong *)(uVar22 + 0x18);
    *(undefined ***)(uVar22 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar22 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar22);
  }
  return;
}

