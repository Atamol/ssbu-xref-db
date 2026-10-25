// addr:      7101d6ae20
// offset:    0x1d6ae20
// name:      FUN_7101d6ae20
// mangled:   
// signature: undefined __cdecl FUN_7101d6ae20(long * param_1, ulong param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101d6ae20(long *param_1,ulong param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  ulong extraout_x1;
  ulong extraout_x1_00;
  undefined8 extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  ulong extraout_x1_06;
  ulong extraout_x1_07;
  ulong extraout_x1_08;
  ulong extraout_x1_09;
  ulong extraout_x1_10;
  ulong extraout_x1_11;
  ulong extraout_x1_12;
  char *pcVar15;
  ulong extraout_x1_13;
  ulong extraout_x1_14;
  ulong extraout_x1_15;
  ulong extraout_x1_16;
  ulong extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  ulong extraout_x1_20;
  ulong extraout_x1_21;
  ulong extraout_x1_22;
  long *********ppppppppplVar16;
  byte bVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  undefined **ppuVar23;
  byte bVar24;
  int iVar25;
  undefined4 uVar26;
  ulong uVar27;
  long *plVar28;
  int *piVar29;
  ulong uVar30;
  undefined **ppuVar31;
  long *plVar32;
  long lVar33;
  uint *puVar34;
  byte *pbVar35;
  long *plVar37;
  byte bVar38;
  undefined8 *puVar39;
  undefined4 uVar40;
  long *plVar41;
  long lVar42;
  ulong uVar43;
  ulong uVar44;
  uint uVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar48 [16];
  int local_e4;
  float local_d8;
  undefined **local_d0;
  long *local_c8;
  long ********local_c0;
  undefined **local_b8;
  undefined **local_b0;
  undefined8 local_a8;
  char local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  float local_74;
  byte *pbVar36;
  
  if (*(uint *)(param_1 + 0x52) < 5) {
    plVar18 = (long *)*param_1;
    switch(*(uint *)(param_1 + 0x52)) {
    default:
      lVar21 = plVar18[1];
      lVar42 = 0x30;
      break;
    case 1:
      lVar21 = plVar18[4];
      plVar18 = plVar18 + 3;
      lVar42 = 0x58;
      break;
    case 2:
      lVar21 = plVar18[7];
      plVar18 = plVar18 + 6;
      lVar42 = 200;
      break;
    case 3:
      goto switchD_7101d6ae6c_caseD_3;
    }
    iVar7 = 0;
    if (lVar42 != 0) {
      iVar7 = (int)((lVar21 - *plVar18) / lVar42);
    }
    if (iVar7 < 1) goto switchD_7101d6ae6c_caseD_3;
  }
  else {
switchD_7101d6ae6c_caseD_3:
    if (*(char *)(*(long *)(**(long **)param_1[0x38] + 0x600) + 0x4aa) != '\0') {
      *(undefined1 *)(*(long *)(**(long **)param_1[0x38] + 0x600) + 0x4aa) = 0;
    }
    if (*(char *)(param_1[0x51] + 0x4aa) != '\0') {
      *(undefined1 *)(param_1[0x51] + 0x4aa) = 0;
    }
  }
  if (((int)param_1[0x52] == 4) || ((int)param_1[0x52] == 2)) {
    iVar7 = *(int *)(param_1[0x4f] + 0x25c);
    bVar5 = false;
  }
  else {
    iVar8 = -1;
    if (*(char *)((long)param_1 + 0x4e3) == '\0') {
      iVar8 = *(int *)(param_1[0x4f] + 0x25c);
      FUN_7103771d60(&local_c0,param_1[0x4f],(long ****)0x0,param_4,param_5,param_6,param_7,param_8)
      ;
      param_3 = (long *********)0x2;
      FUN_7103771d60(&local_d0,param_1[0x4f],(long ****)0x2,param_4,param_5,param_6,param_7,param_8)
      ;
      ppuVar23 = local_b8;
      param_2 = extraout_x1;
      if ((long *)*local_b8 != (long *)0x0) {
        auVar48 = (**(code **)(*(long *)*local_b8 + 0x210))();
        param_2 = auVar48._8_8_;
        if (((auVar48._0_8_ & 1) != 0) && (plVar18 = (long *)*local_b8, plVar18 != (long *)0x0)) {
          (**(code **)(*plVar18 + 0x208))(plVar18,0);
          uVar19 = (**(code **)(*plVar18 + 0x200))(plVar18);
          if ((uVar19 & 1) == 0) {
            uVar11 = 1;
          }
          else {
            uVar11 = (**(code **)(*plVar18 + 0x210))(plVar18);
            uVar11 = uVar11 ^ 1;
          }
          param_3 = (long *********)0x0;
          (**(code **)(*plVar18 + 0x388))(plVar18,uVar11 & 1);
          param_2 = extraout_x1_09;
        }
      }
      plVar18 = local_c8;
      if ((long *)*local_c8 == (long *)0x0) {
LAB_7101d6b884:
        local_d0 = &PTR_FUN_710523d9c8;
        local_c8 = (long *)0x0;
        if (plVar18 != (long *)0x0) goto LAB_7101d6b8c0;
      }
      else {
        auVar48 = (**(code **)(*(long *)*local_c8 + 0x210))();
        param_2 = auVar48._8_8_;
        if ((auVar48._0_8_ & 1) == 0) goto LAB_7101d6b884;
        plVar41 = (long *)*local_c8;
        if (plVar41 != (long *)0x0) {
          (**(code **)(*plVar41 + 0x208))(plVar41,0);
          uVar19 = (**(code **)(*plVar41 + 0x200))(plVar41);
          if ((uVar19 & 1) == 0) {
            uVar11 = 1;
          }
          else {
            uVar11 = (**(code **)(*plVar41 + 0x210))(plVar41);
            uVar11 = uVar11 ^ 1;
          }
          param_3 = (long *********)0x0;
          (**(code **)(*plVar41 + 0x388))(plVar41,uVar11 & 1);
        }
LAB_7101d6b8c0:
        local_c8 = (long *)0x0;
        local_d0 = &PTR_FUN_710523d9c8;
        FUN_710392eb40((ulong)plVar18);
        param_2 = extraout_x1_10;
      }
      local_c0 = (long ********)&PTR_FUN_710523d9c8;
      local_b8 = (undefined **)0x0;
      if (ppuVar23 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar23);
        param_2 = extraout_x1_11;
      }
    }
    lVar21 = param_1[0x51];
    if ((**(uint **)(DAT_710593b988 + 8) >> (ulong)(*(uint *)(lVar21 + 0x494) & 0x1f) < 2) &&
       (*(char *)(lVar21 + 0x4aa) != '\0')) {
      uVar11 = *(byte *)(lVar21 + 0x27c) >> 4 & 1;
      bVar38 = *(byte *)(lVar21 + 0x1b0) >> 2;
      bVar24 = bVar38 & 1;
      bVar5 = (bool)(bVar38 & 1);
      uVar45 = *(byte *)(lVar21 + 0x284) >> 4 & 1;
      bVar17 = *(byte *)(lVar21 + 0x1b8) >> 2;
      bVar38 = bVar17 & 1;
      bVar6 = (bool)(bVar17 & 1);
      cVar2 = *(char *)((long)param_1 + 0x4e3);
    }
    else {
      bVar38 = 0;
      bVar6 = false;
      uVar45 = 0;
      bVar24 = 0;
      bVar5 = false;
      uVar11 = 0;
      cVar2 = *(char *)((long)param_1 + 0x4e3);
    }
    if (cVar2 == '\0') {
      FUN_7103771d60(&local_c0,param_1[0x4f],(long ****)0x0,param_4,param_5,param_6,param_7,param_8)
      ;
      ppuVar23 = local_b8;
      if ((long *)*local_b8 == (long *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = (**(code **)(*(long *)*local_b8 + 0x250))();
      }
      local_c0 = (long ********)&PTR_FUN_710523d9c8;
      local_b8 = (undefined **)0x0;
      if (ppuVar23 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar23);
      }
      param_3 = (long *********)0x2;
      FUN_7103771d60(&local_c0,param_1[0x4f],(long ****)0x2,param_4,param_5,param_6,param_7,param_8)
      ;
      ppuVar23 = local_b8;
      if ((long *)*local_b8 == (long *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (**(code **)(*(long *)*local_b8 + 0x250))();
      }
      local_b8 = (undefined **)0x0;
      local_c0 = (long ********)&PTR_FUN_710523d9c8;
      if (ppuVar23 != (undefined **)0x0) {
        local_b8 = (undefined **)0x0;
        local_c0 = (long ********)&PTR_FUN_710523d9c8;
        FUN_710392eb40((ulong)ppuVar23);
      }
      if ((uVar9 & 1) == 0) {
        bVar5 = (char)param_1[0x9c] != '\0';
      }
      else {
        bVar5 = false;
      }
      uVar11 = uVar11 | uVar9 & 1;
      bVar24 = bVar24 | bVar5;
      uVar45 = uVar45 | uVar10 & 1;
      if ((uVar10 & 1) == 0) {
        bVar5 = *(char *)((long)param_1 + 0x4e1) != '\0';
      }
      else {
        bVar5 = false;
      }
      *(byte *)(param_1 + 0x9c) = (byte)uVar9 & 1;
      *(byte *)((long)param_1 + 0x4e1) = (byte)uVar10 & 1;
      bVar38 = bVar38 | bVar5;
      auVar48 = (**(code **)(*(long *)param_1[0x4f] + 0x78))();
      param_2 = auVar48._8_8_;
      if ((auVar48._0_8_ & 1) != 0) {
        if (*(int *)(param_1[0x4f] + 0x254) == 2) {
          lVar21 = *(long *)(**(long **)param_1[0x38] + 0x600);
          if (*(char *)(lVar21 + 0x4aa) == '\0') {
            bVar17 = 0;
          }
          else {
            uVar45 = uVar45 | (*(byte *)(lVar21 + 0x274) & 0x10) >> 4;
            bVar17 = *(byte *)(lVar21 + 0x1a8) >> 2 & 1;
          }
          bVar38 = bVar38 | bVar17;
        }
        else if ((*(int *)(param_1[0x4f] + 0x254) == 0) &&
                (lVar21 = *(long *)(**(long **)param_1[0x38] + 0x600),
                *(char *)(lVar21 + 0x4aa) != '\0')) {
          uVar11 = uVar11 | (*(byte *)(lVar21 + 0x274) & 0x10) >> 4;
          bVar24 = bVar24 | *(byte *)(lVar21 + 0x1a8) >> 2 & 1;
        }
      }
      bVar6 = bVar38 != 0;
      uVar45 = (uint)(uVar45 != 0);
      bVar5 = bVar24 != 0;
      uVar11 = (uint)(uVar11 != 0);
    }
    if ((int)param_1[0x1c] == 5) {
LAB_7101d6bc7c:
      if (uVar11 != 0) goto LAB_7101d6bc80;
LAB_7101d6bcf0:
      if (uVar45 == 0) {
        if (bVar5 == false) {
          if (bVar6 != false) {
            iVar7 = iVar8;
            if ((int)param_1[0x9b] < 0x3c) {
              if (*(char *)((long)param_1 + 0x4e3) != '\0') {
                lVar21 = *(long *)(DAT_710532f8d0 + 8);
                if ((ulong)(*(long *)(lVar21 + 0x48) - *(long *)(lVar21 + 0x40) >> 3) < 3) {
                  uVar19 = 0;
                  if (*(char *)(lVar21 + 0x191) == '\0') goto LAB_7101d6c50c;
LAB_7101d6c57c:
                  local_a8 = 0x87650000000000;
                  local_98 = 0xffffffffffffffff;
                  local_90 = 0;
                  local_c0 = (long ********)((ulong)local_c0 & 0xffffffff00000000);
                  local_88 = 0;
                }
                else {
                  uVar19 = *(ulong *)(*(long *)(lVar21 + 0x40) + 0x10);
                  if (*(char *)(lVar21 + 0x191) != '\0') goto LAB_7101d6c57c;
LAB_7101d6c50c:
                  param_3 = (long *********)&DAT_00000004;
                  uVar44 = FUN_7103313f20(lVar21,uVar19,(long ****)&DAT_00000004,param_4,param_5,
                                          param_6,param_7,param_8);
                  param_2 = extraout_x1_20;
                  if ((uVar44 & 1) == 0) goto LAB_7101d6c57c;
                  FUN_71024076d0((undefined4 *)&local_c0,uVar19);
                  param_2 = extraout_x1_21;
                  if (((local_b0 != (undefined **)0x0) && (DAT_7106dd53a8 == '\x01')) &&
                     ((int)local_a8 == DAT_7106dd53ac)) {
                    local_b0 = local_b0 + 7;
                    do {
                      cVar2 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(local_b0,0x10);
                      if (bVar5) {
                        *(int *)local_b0 = *(int *)local_b0 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                }
                local_b8 = &PTR_FUN_7104f73d50;
                local_b0 = (undefined **)0x0;
                local_a0 = '\0';
                if (*(char *)((long)param_1 + 0x4e3) != '\0') {
                  iVar7 = *(int *)((long)param_1 + 0x4d4);
                  if (*(int *)((long)param_1 + 0x4d4) != 2) {
                    iVar7 = iVar8;
                  }
                  goto LAB_7101d6c674;
                }
              }
              FUN_7103771d60(&local_d0,param_1[0x4f],(long ****)0x2,param_4,param_5,param_6,param_7,
                             param_8);
              plVar18 = local_c8;
              plVar41 = (long *)*local_c8;
              if (plVar41 != (long *)0x0) {
                uVar11 = 1;
                (**(code **)(*plVar41 + 0x208))(plVar41,1);
                uVar19 = (**(code **)(*plVar41 + 0x200))(plVar41);
                if ((uVar19 & 1) != 0) {
                  uVar11 = (**(code **)(*plVar41 + 0x210))(plVar41);
                  uVar11 = uVar11 ^ 1;
                }
                (**(code **)(*plVar41 + 0x388))(plVar41,uVar11 & 1,0);
              }
              local_d0 = &PTR_FUN_710523d9c8;
              local_c8 = (long *)0x0;
              if (plVar18 != (long *)0x0) {
                FUN_710392eb40((ulong)plVar18);
              }
              param_3 = (long *********)0x0;
              FUN_7103771be0(param_1 + 0x4f,2,0);
              param_2 = extraout_x1_22;
              iVar7 = 2;
            }
LAB_7101d6c674:
            *(undefined4 *)((long)param_1 + 0x4d4) = 2;
            goto LAB_7101d6c67c;
          }
        }
        else {
          if ((int)param_1[0x9b] < 0x3c) {
            if (*(char *)((long)param_1 + 0x4e3) != '\0') {
              lVar21 = *(long *)(DAT_710532f8d0 + 8);
              if ((ulong)(*(long *)(lVar21 + 0x48) - *(long *)(lVar21 + 0x40) >> 3) < 3) {
                uVar19 = 0;
                if (*(char *)(lVar21 + 0x191) == '\0') goto LAB_7101d6bde4;
LAB_7101d6be54:
                local_a8 = 0x87650000000000;
                local_98 = 0xffffffffffffffff;
                local_90 = 0;
                local_c0 = (long ********)((ulong)local_c0 & 0xffffffff00000000);
                local_88 = 0;
              }
              else {
                uVar19 = *(ulong *)(*(long *)(lVar21 + 0x40) + 0x10);
                if (*(char *)(lVar21 + 0x191) != '\0') goto LAB_7101d6be54;
LAB_7101d6bde4:
                param_3 = (long *********)&DAT_00000004;
                uVar44 = FUN_7103313f20(lVar21,uVar19,(long ****)&DAT_00000004,param_4,param_5,
                                        param_6,param_7,param_8);
                param_2 = extraout_x1_15;
                if ((uVar44 & 1) == 0) goto LAB_7101d6be54;
                FUN_71024076d0((undefined4 *)&local_c0,uVar19);
                param_2 = extraout_x1_16;
                if (((local_b0 != (undefined **)0x0) && (DAT_7106dd53a8 == '\x01')) &&
                   ((int)local_a8 == DAT_7106dd53ac)) {
                  local_b0 = local_b0 + 7;
                  do {
                    cVar2 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(local_b0,0x10);
                    if (bVar5) {
                      *(int *)local_b0 = *(int *)local_b0 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
              }
              local_b8 = &PTR_FUN_7104f73d50;
              local_b0 = (undefined **)0x0;
              local_a0 = '\0';
              if (*(char *)((long)param_1 + 0x4e3) != '\0') {
                iVar25 = *(int *)((long)param_1 + 0x4d4);
                *(undefined4 *)((long)param_1 + 0x4d4) = 0;
                iVar7 = 0;
                if (iVar25 != 0) {
                  iVar7 = iVar8;
                }
                goto LAB_7101d6c67c;
              }
            }
            FUN_7103771d60(&local_d0,param_1[0x4f],(long ****)0x0,param_4,param_5,param_6,param_7,
                           param_8);
            plVar18 = local_c8;
            plVar41 = (long *)*local_c8;
            if (plVar41 != (long *)0x0) {
              uVar11 = 1;
              (**(code **)(*plVar41 + 0x208))(plVar41,1);
              uVar19 = (**(code **)(*plVar41 + 0x200))(plVar41);
              if ((uVar19 & 1) != 0) {
                uVar11 = (**(code **)(*plVar41 + 0x210))(plVar41);
                uVar11 = uVar11 ^ 1;
              }
              (**(code **)(*plVar41 + 0x388))(plVar41,uVar11 & 1,0);
            }
            local_d0 = &PTR_FUN_710523d9c8;
            local_c8 = (long *)0x0;
            if (plVar18 != (long *)0x0) {
              FUN_710392eb40((ulong)plVar18);
            }
            param_3 = (long *********)0x0;
            FUN_7103771be0(param_1 + 0x4f,0,0);
            iVar8 = 0;
            param_2 = extraout_x1_17;
          }
          *(undefined4 *)((long)param_1 + 0x4d4) = 0;
          iVar7 = iVar8;
LAB_7101d6c67c:
          iVar8 = iVar7;
          *(undefined4 *)((long)param_1 + 0x4dc) = 0;
        }
        bVar5 = false;
        *(undefined4 *)(param_1 + 0x9b) = 0;
        *(undefined4 *)(param_1 + 0x9a) = 0;
        iVar7 = iVar8;
      }
      else {
        iVar25 = (int)param_1[0x9b];
        bVar6 = (iVar25 + 1U) % 0x15 == 0;
        *(uint *)(param_1 + 0x9b) = iVar25 + 1U;
        bVar5 = 0x3a < iVar25 && bVar6;
        iVar7 = 2;
        if (iVar25 < 0x3b || !bVar6) {
          iVar7 = iVar8;
        }
      }
    }
    else {
      if ((*(long *)(param_1[0x3a] + 8) == 0) ||
         (plVar18 = (long *)FUN_71037964b0(*(long *)(param_1[0x3a] + 8),0x71043be99a),
         plVar18 == (long *)0x0)) {
        uVar19 = 0;
      }
      else {
        uVar19 = (**(code **)(*plVar18 + 0x130))();
        uVar19 = uVar19 & 0xffffffff;
      }
      if ((*(long *)(param_1[0x3e] + 8) == 0) ||
         (plVar18 = (long *)FUN_71037964b0(*(long *)(param_1[0x3e] + 8),0x71043be99a),
         plVar18 == (long *)0x0)) {
        uVar44 = 0;
        if (uVar11 != 0) goto LAB_7101d6bbfc;
LAB_7101d6bbe0:
        if ((uVar19 & 1) != 0) {
          lVar21 = param_1[0x3a];
          pcVar15 = "release_button";
LAB_7101d6bc0c:
          FUN_7103778300(0x3f800000,lVar21,(long)pcVar15);
        }
      }
      else {
        uVar44 = (**(code **)(*plVar18 + 0x130))();
        uVar44 = uVar44 & 0xffffffff;
        if (uVar11 == 0) goto LAB_7101d6bbe0;
LAB_7101d6bbfc:
        if ((uVar19 & 1) == 0) {
          lVar21 = param_1[0x3a];
          pcVar15 = "holding_down_button";
          goto LAB_7101d6bc0c;
        }
      }
      if (uVar45 == 0) {
        if ((uVar44 & 1) != 0) {
          lVar21 = param_1[0x3e];
          pcVar15 = "release_button";
          goto LAB_7101d6bc3c;
        }
      }
      else if ((uVar44 & 1) == 0) {
        lVar21 = param_1[0x3e];
        pcVar15 = "holding_down_button";
LAB_7101d6bc3c:
        FUN_7103778300(0x3f800000,lVar21,(long)pcVar15);
      }
      auVar48 = (**(code **)(*(long *)param_1[0x4f] + 0x78))();
      param_2 = auVar48._8_8_;
      if ((auVar48._0_8_ & 1) == 0) goto LAB_7101d6bc7c;
      if (uVar11 == 0) {
        if (uVar45 == 1 && *(int *)(param_1[0x4f] + 0x254) != 2) {
          param_3 = (long *********)0x0;
          FUN_7103771a80(param_1 + 0x4f,2,0);
          param_2 = extraout_x1_14;
        }
        goto LAB_7101d6bcf0;
      }
      if (*(int *)(param_1[0x4f] + 0x254) != 0) {
        param_3 = (long *********)0x0;
        FUN_7103771a80(param_1 + 0x4f,0,0);
        param_2 = extraout_x1_13;
      }
LAB_7101d6bc80:
      iVar25 = (int)param_1[0x9b];
      bVar6 = (iVar25 + 1U) % 0x15 == 0;
      *(uint *)(param_1 + 0x9b) = iVar25 + 1U;
      bVar5 = 0x3a < iVar25 && bVar6;
      iVar7 = 0;
      if (0x3a >= iVar25 || !bVar6) {
        iVar7 = iVar8;
      }
    }
    iVar8 = *(int *)((long)param_1 + 0x4dc);
    if ((iVar8 < 0x3c) && (*(int *)((long)param_1 + 0x4dc) = iVar8 + 1, iVar8 == 0x3b)) {
      *(undefined4 *)((long)param_1 + 0x4d4) = 0xffffffff;
    }
  }
  uVar11 = *(uint *)(param_1 + 0x52);
  if (1 < uVar11) {
    if (uVar11 == 2) {
      switch(iVar7) {
      case 0:
        lVar21 = *(long *)(*param_1 + 0x30);
        uVar44 = (*(long *)(*param_1 + 0x38) - lVar21 >> 3) * -0x70a3d70a3d70a3d7;
        iVar7 = *(int *)((long)param_1 + 0x2ac);
        uVar19 = (ulong)iVar7;
        if ((uVar19 <= uVar44 && uVar44 - uVar19 != 0) &&
           (lVar21 = lVar21 + uVar19 * 200,
           iVar8 = (int)((ulong)(*(long *)(lVar21 + 0xb0) - *(long *)(lVar21 + 0xa8)) >> 4),
           0 < iVar8)) {
          iVar25 = ((int)param_1[0x56] + -1) - iVar8;
          do {
            iVar25 = iVar25 + iVar8;
          } while (iVar25 < 0);
LAB_7101d6b220:
          iVar1 = 0;
          if (iVar8 != 0) {
            iVar1 = iVar25 / iVar8;
          }
          uVar11 = iVar25 - iVar1 * iVar8;
          goto LAB_7101d6b3e0;
        }
        break;
      case 1:
        if ((int)param_1[0x53] == 1) {
          iVar7 = *(int *)((long)param_1 + 0x2a4);
          uVar11 = *(uint *)(param_1 + 0x55);
        }
        else {
          iVar7 = *(int *)((long)param_1 + 0x2ac);
          uVar11 = *(uint *)(param_1 + 0x56);
        }
LAB_7101d6b3e0:
        param_3 = (long *********)(ulong)uVar11;
        FUN_7101d709f0(param_1,iVar7,param_3,param_4,param_5,param_6,param_7,param_8);
        break;
      case 2:
        lVar21 = *(long *)(*param_1 + 0x30);
        uVar44 = (*(long *)(*param_1 + 0x38) - lVar21 >> 3) * -0x70a3d70a3d70a3d7;
        iVar7 = *(int *)((long)param_1 + 0x2ac);
        uVar19 = (ulong)iVar7;
        if ((uVar19 <= uVar44 && uVar44 - uVar19 != 0) &&
           (lVar21 = lVar21 + uVar19 * 200,
           iVar8 = (int)((ulong)(*(long *)(lVar21 + 0xb0) - *(long *)(lVar21 + 0xa8)) >> 4),
           0 < iVar8)) {
          iVar25 = ((int)param_1[0x56] + 1) - iVar8;
          do {
            iVar25 = iVar25 + iVar8;
          } while (iVar25 < 0);
          goto LAB_7101d6b220;
        }
        break;
      case 3:
        lVar21 = *(long *)(*param_1 + 0x30);
        uVar44 = (*(long *)(*param_1 + 0x38) - lVar21 >> 3) * -0x70a3d70a3d70a3d7;
        iVar7 = *(int *)((long)param_1 + 0x2ac);
        uVar19 = (ulong)iVar7;
        if ((uVar19 <= uVar44 && uVar44 - uVar19 != 0) &&
           (lVar21 = lVar21 + uVar19 * 200,
           uVar11 = (uint)((ulong)(*(long *)(lVar21 + 0xb0) - *(long *)(lVar21 + 0xa8)) >> 4),
           0 < (int)uVar11)) {
          uVar45 = DAT_71052391c0 ^ DAT_71052391c0 << 0xb;
          DAT_71052391c0 = DAT_71052391c4;
          uVar45 = uVar45 ^ uVar45 >> 8 ^ DAT_71052391cc ^ DAT_71052391cc >> 0x13;
          DAT_71052391c4 = DAT_71052391c8;
          DAT_71052391c8 = DAT_71052391cc;
          uVar9 = 0;
          if (uVar11 != 0) {
            uVar9 = uVar45 / uVar11;
          }
          uVar11 = uVar45 - uVar9 * uVar11;
          DAT_71052391cc = uVar45;
          goto LAB_7101d6b3e0;
        }
      }
      if ((int)param_1[0x54] == 1) {
        lVar21 = *(long *)(DAT_710532f8d8 + 8);
        if ((((((*(long **)(lVar21 + 0x58) == (long *)0x0) ||
               (uVar19 = (**(code **)(**(long **)(lVar21 + 0x58) + 0x20))(), (uVar19 & 1) != 0)) ||
              (*(char *)(*DAT_710593b438 + 1) == '\0')) ||
             ((*(int *)(lVar21 + 100) != 0x876500 || (DAT_7106dd53a8 != '\x01')))) ||
            (*(int *)(lVar21 + 0x60) != DAT_7106dd53ac)) ||
           (((*(char *)(lVar21 + 0x68) != '\0' || (*(long **)(lVar21 + 0x58) == (long *)0x0)) ||
            ((uVar19 = (**(code **)(**(long **)(lVar21 + 0x58) + 0x20))(), (uVar19 & 1) != 0 ||
             (uVar19 = (**(code **)(**(long **)(lVar21 + 0x58) + 0x68))(), (uVar19 & 1) != 0)))))) {
          *(undefined4 *)(param_1 + 0x54) = 3;
        }
      }
      if (((char)param_1[0x92] == '\0') ||
         (lVar21 = param_1[0x94], iVar7 = (int)lVar21 + -1, *(int *)(param_1 + 0x94) = iVar7,
         iVar7 != 0 && 0 < (int)lVar21)) goto LAB_7101d6cad0;
      plVar37 = *(long **)(DAT_710532f8d8 + 8);
      plVar41 = plVar37 + 4;
      plVar18 = (long *)*plVar41;
      if (plVar18 != (long *)0x0) {
        uVar44 = param_1[0x93];
        uVar19 = uVar44 & 0xff0000ffffffffff;
        plVar28 = plVar41;
        plVar32 = plVar18;
        do {
          bVar5 = (plVar32[4] & 0xff0000ffffffffffU) < uVar19;
          if (!bVar5) {
            plVar28 = plVar32;
          }
          plVar32 = (long *)plVar32[bVar5];
        } while (plVar32 != (long *)0x0);
        if ((plVar28 != plVar41) && ((plVar28[4] & 0xff0000ffffffffffU) <= uVar19)) {
          plVar28 = plVar37 + 7;
          plVar32 = (long *)*plVar28;
          plVar41 = plVar28;
          if (plVar32 != (long *)0x0) {
            do {
              bVar5 = (plVar32[4] & 0xff0000ffffffffffU) < uVar19;
              if (!bVar5) {
                plVar41 = plVar32;
              }
              plVar32 = (long *)plVar32[bVar5];
            } while (plVar32 != (long *)0x0);
            if ((plVar41 != plVar28) && ((plVar41[4] & 0xff0000ffffffffffU) <= uVar19)) {
              plVar41 = plVar37 + 4;
              do {
                while (plVar32 = plVar18, uVar19 < (plVar32[4] & 0xff0000ffffffffffU)) {
                  plVar18 = (long *)*plVar32;
                  plVar41 = plVar32;
                  if ((long *)*plVar32 == (long *)0x0) goto LAB_7101d6b568;
                }
                if (uVar19 <= (plVar32[4] & 0xff0000ffffffffffU)) break;
                plVar41 = plVar32 + 1;
                plVar18 = (long *)*plVar41;
              } while ((long *)*plVar41 != (long *)0x0);
LAB_7101d6b568:
              plVar18 = (long *)*plVar41;
              if (plVar18 == (long *)0x0) {
                plVar18 = (long *)FUN_710392e290(0x10,0x30,(long ****)param_3,param_4,param_5,
                                                 param_6,param_7,param_8);
                if (plVar18 == (long *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_d0 = (undefined **)((ulong)local_d0 & 0xffffffff00000000);
                    local_c0 = (long ********)&DAT_00000030;
                    param_3 = &local_c0;
                    uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
                    if (((uVar19 & 1) != 0) &&
                       (plVar18 = (long *)FUN_710392e290(0x10,0x30,(long ****)param_3,param_4,
                                                         param_5,param_6,param_7,param_8),
                       plVar18 != (long *)0x0)) goto LAB_7101d6b5cc;
                  }
                  plVar18 = (long *)0x0;
                }
LAB_7101d6b5cc:
                plVar18[4] = uVar44;
                *(undefined4 *)(plVar18 + 5) = 0;
                plVar18[2] = (long)plVar32;
                *plVar18 = 0;
                plVar18[1] = 0;
                *plVar41 = (long)plVar18;
                plVar32 = plVar18;
                if (*(long *)plVar37[3] != 0) {
                  plVar37[3] = *(long *)plVar37[3];
                  plVar32 = (long *)*plVar41;
                }
                std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                          ((long *)plVar37[4],plVar32);
                plVar37[5] = plVar37[5] + 1;
              }
              if ((ulong)(plVar37[1] - *plVar37 >> 3) <= (ulong)(long)(int)plVar18[5]) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_out_of_range();
              }
              puVar39 = *(undefined8 **)(*plVar37 + (long)(int)plVar18[5] * 8);
              if ((long *)plVar37[7] == (long *)0x0) {
                plVar41 = (long *)*plVar28;
                plVar18 = plVar28;
              }
              else {
                plVar41 = (long *)plVar37[7];
                plVar18 = plVar37 + 7;
                do {
                  while (plVar28 = plVar41,
                        (param_1[0x93] & 0xff0000ffffffffffU) < (plVar28[4] & 0xff0000ffffffffffU))
                  {
                    plVar41 = (long *)*plVar28;
                    plVar18 = plVar28;
                    if ((long *)*plVar28 == (long *)0x0) {
                      plVar41 = (long *)*plVar28;
                      goto joined_r0x007101d6c78c;
                    }
                  }
                  if ((param_1[0x93] & 0xff0000ffffffffffU) <= (plVar28[4] & 0xff0000ffffffffffU))
                  break;
                  plVar18 = plVar28 + 1;
                  plVar41 = (long *)*plVar18;
                } while ((long *)*plVar18 != (long *)0x0);
                plVar41 = (long *)*plVar18;
              }
joined_r0x007101d6c78c:
              if (plVar41 == (long *)0x0) {
                plVar41 = (long *)FUN_710392e290(0x10,0x30,(long ****)param_3,param_4,param_5,
                                                 param_6,param_7,param_8);
                if (plVar41 == (long *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_d0 = (undefined **)((ulong)local_d0 & 0xffffffff00000000);
                    local_c0 = (long ********)&DAT_00000030;
                    ppppppppplVar16 = &local_c0;
                    uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
                    if (((uVar19 & 1) != 0) &&
                       (plVar41 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar16,
                                                         param_4,param_5,param_6,param_7,param_8),
                       plVar41 != (long *)0x0)) goto LAB_7101d6c7ec;
                  }
                  plVar41 = (long *)0x0;
                }
LAB_7101d6c7ec:
                plVar41[4] = param_1[0x93];
                *(undefined4 *)(plVar41 + 5) = 0;
                *plVar41 = 0;
                plVar41[1] = 0;
                plVar41[2] = (long)plVar28;
                *plVar18 = (long)plVar41;
                plVar28 = plVar41;
                if (*(long *)plVar37[6] != 0) {
                  plVar37[6] = *(long *)plVar37[6];
                  plVar28 = (long *)*plVar18;
                }
                std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                          ((long *)plVar37[7],plVar28);
                plVar37[8] = plVar37[8] + 1;
              }
              plVar18 = (long *)*puVar39;
              local_74 = 0.0;
              fVar46 = 0.0;
              ppuVar23 = (undefined **)0x0;
              iVar7 = 0;
              uVar11 = 0xffffffff;
              if ((*(char *)((long)plVar18 + 0x99) == '\0') || ((int)plVar41[5] < 0)) {
                local_d8 = 0.0;
                uVar45 = 0xffffffff;
                local_74 = 0.0;
                uVar26 = 0;
                *(undefined4 *)(plVar37 + 9) = 0;
LAB_7101d6c984:
                if (((plVar37[0xb] != 0) && (DAT_7106dd53a8 == '\x01')) &&
                   ((int)plVar37[0xc] == DAT_7106dd53ac)) {
                  piVar29 = (int *)(plVar37[0xb] + 0x38);
                  do {
                    cVar2 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar29,0x10);
                    if (bVar5) {
                      *piVar29 = *piVar29 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
                plVar37[0xb] = 0;
LAB_7101d6ca78:
                *(undefined1 *)(plVar37 + 0xd) = 0;
              }
              else {
                lVar21 = *plVar18;
                uVar19 = (plVar18[1] - lVar21 >> 4) * -0x30c30c30c30c30c3;
                uVar44 = (ulong)(int)plVar41[5];
                if (uVar19 < uVar44 || uVar19 - uVar44 == 0) goto LAB_7101d6c964;
                lVar42 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
                uVar43 = plVar18[0x12];
                puVar13 = FUN_71032631a0(lVar42,0x11e4b123e6);
                bVar5 = (uVar43 & 0xffffffffff) == 0;
                uVar19 = uVar43 & 0xff00000000000000;
                if (((uVar19 != 0xc100000000000000 || bVar5) ||
                    (((ulong)puVar13 & 0xff00000000000000) != 0xc100000000000000)) ||
                   (((ulong)puVar13 & 0xffffffffff) == 0)) {
                  if ((((ulong)puVar13 & 0xffffffffff) != 0 &&
                      ((ulong)puVar13 & 0xff00000000000000) == 0xc100000000000000) ==
                      (uVar19 == 0xc100000000000000 && (uVar43 & 0xffffffffff) != 0))
                  goto LAB_7101d6cb3c;
LAB_7101d6c8f0:
                  uVar11 = *(uint *)(lVar21 + uVar44 * 0x150 + 0x28);
                  if (uVar11 != 0xffffffff) {
LAB_7101d6c91c:
                    lVar42 = plVar18[5];
joined_r0x007101d6c920:
                    if (lVar42 != 0) {
                      plVar18 = plVar18 + 4;
                      plVar28 = (long *)*plVar18;
                      plVar41 = plVar18;
                      if (plVar28 != (long *)0x0) {
                        do {
                          if (*(uint *)(plVar28 + 4) >= uVar11) {
                            plVar41 = plVar28;
                          }
                          plVar28 = (long *)plVar28[*(uint *)(plVar28 + 4) < uVar11];
                        } while (plVar28 != (long *)0x0);
                        if ((plVar41 != plVar18) && (*(uint *)(plVar41 + 4) <= uVar11)) {
                          lVar42 = plVar41[6];
                          if ((int)lVar42 == -1) {
LAB_7101d6cea8:
                            local_a8 = 0x87650000000000;
                            local_b8 = &PTR_FUN_7104f73d30;
                            local_b0 = (undefined **)0x0;
                            local_a0 = '\0';
                            local_c0 = (long ********)((ulong)local_c0 & 0xffffffff00000000);
                            local_88 = 0;
                            local_98 = 0xffffffffffffffff;
                            local_90 = 0;
                          }
                          else {
                            plVar41 = plVar41 + 5;
                            piVar29 = (int *)*plVar41;
                            if ((piVar29 == (int *)0x0) ||
                               ((((char)piVar29[0x16] == '\0' &&
                                 (((piVar29[1] != 0 || (*(long **)(piVar29 + 4) == (long *)0x0)) ||
                                  (uVar19 = (**(code **)(**(long **)(piVar29 + 4) + 0x20))(),
                                  (uVar19 & 1) != 0)))) ||
                                ((*piVar29 != (int)lVar42 ||
                                 (lVar42 = *(long *)(*(long *)(*plVar41 + 0x30) + 8), lVar42 == 0)))
                                ))) goto LAB_7101d6cea8;
                            local_c0 = (long ********)
                                       (*(ulong *)(lVar21 + uVar44 * 0x150 + 8) & 0xffffffffff);
                            puVar39 = bsearch(&local_c0,(void *)(lVar42 + 8),
                                              (ulong)*(uint *)(lVar42 + 4),8,FUN_71037416f0);
                            if (puVar39 == (undefined8 *)0x0) goto LAB_7101d6cea8;
                            FUN_7103738770((undefined4 *)&local_c0,plVar41,
                                           (uint)((ulong)*puVar39 >> 0x28));
                          }
                          iVar7 = *(int *)(lVar21 + uVar44 * 0x150 + 0x38);
                          if (((iVar7 != 0) && (((uint)local_98 != -1 || (local_98._4_4_ != -1))))
                             && (local_b0 != (undefined **)0x0)) {
                            uVar19 = (**(code **)(*local_b0 + 0x20))();
                            fVar46 = 0.0;
                            if (((uVar19 & 1) == 0) &&
                               (fVar46 = 0.0, *(char *)(*DAT_710593b438 + 1) != '\0')) {
                              fVar46 = (float)local_90;
                            }
                            if (((local_b0 != (undefined **)0x0) &&
                                (uVar19 = (**(code **)(*local_b0 + 0x20))(), (uVar19 & 1) == 0)) &&
                               (*(char *)(*DAT_710593b438 + 1) != '\0')) {
                              fVar46 = fVar46 + (float)iVar7;
                              if (((local_a8._4_4_ == 0x876500) && (DAT_7106dd53a8 == '\x01')) &&
                                 (((int)local_a8 == DAT_7106dd53ac &&
                                  ((local_a0 == '\0' && (local_b0 != (undefined **)0x0)))))) {
                                fVar47 = local_90._4_4_;
                                fVar4 = (float)local_88;
                                uVar19 = (**(code **)(*local_b0 + 0x20))();
                                ppuVar23 = local_b0;
                                if ((uVar19 & 1) == 0) {
                                  std::recursive_mutex::lock();
                                  lVar21 = DAT_7106dd5408;
                                  uVar11 = *(uint *)(DAT_7106dd5408 + 0x18);
                                  uVar45 = *(uint *)(DAT_7106dd5408 + 0x14);
                                  uVar44 = (ulong)uVar45;
                                  uVar19 = (ulong)(uVar45 + 0x20) + 8;
                                  if (uVar45 < uVar11) {
                                    if (uVar19 < uVar11) goto LAB_7101d6dd10;
                                  }
                                  else {
                                    if (*(uint *)(DAT_7106dd5408 + 0x10) < uVar19) {
                                      if (uVar11 < 0x29) goto LAB_7101d6dd74;
                                      *(undefined4 *)(*(long *)(DAT_7106dd5408 + 8) + uVar44) =
                                           0x64716e62;
                                      uVar44 = 0;
                                    }
LAB_7101d6dd10:
                                    puVar39 = (undefined8 *)(*(long *)(lVar21 + 8) + uVar44);
                                    puVar39[2] = ppuVar23;
                                    *(undefined4 *)((long)puVar39 + 0x24) = 0;
                                    *puVar39 = 0x2070716e62;
                                    puVar39[1] = 0x8756c6f76;
                                    uVar11 = (int)uVar44 + 0x28;
                                    *(float *)(puVar39 + 4) = fVar47 + fVar46 + fVar4;
                                    uVar45 = *(uint *)(lVar21 + 0x10);
                                    uVar9 = 0;
                                    if (uVar45 != 0) {
                                      uVar9 = uVar11 / uVar45;
                                    }
                                    *(uint *)(lVar21 + 0x14) = uVar11 - uVar9 * uVar45;
                                    if (ppuVar23 != (undefined **)0x0) {
                                      piVar29 = (int *)((long)ppuVar23 + 0x3c);
                                      do {
                                        cVar2 = '\x01';
                                        bVar5 = (bool)ExclusiveMonitorPass(piVar29,0x10);
                                        if (bVar5) {
                                          *piVar29 = *piVar29 + 1;
                                          cVar2 = ExclusiveMonitorsStatus();
                                        }
                                      } while (cVar2 != '\0');
                                    }
                                  }
LAB_7101d6dd74:
                                  std::recursive_mutex::unlock();
                                }
                              }
                              local_90 = CONCAT44(local_90._4_4_,fVar46);
                            }
                          }
                          iVar7 = DAT_7106dd53ac;
                          if (local_b0 == (undefined **)0x0) {
                            iVar7 = 0;
                            ppuVar31 = (undefined **)0x0;
                          }
                          else {
                            ppuVar23 = local_b0 + 7;
                            do {
                              cVar2 = '\x01';
                              bVar5 = (bool)ExclusiveMonitorPass(ppuVar23,0x10);
                              if (bVar5) {
                                *(int *)ppuVar23 = *(int *)ppuVar23 + 1;
                                cVar2 = ExclusiveMonitorsStatus();
                              }
                              ppuVar31 = local_b0;
                            } while (cVar2 != '\0');
                          }
                          ppuVar23 = local_b0;
                          if (((ppuVar31 != (undefined **)0x0) && (DAT_7106dd53a8 == '\x01')) &&
                             ((int)local_a8 == DAT_7106dd53ac)) {
                            ppuVar31 = ppuVar31 + 7;
                            do {
                              cVar2 = '\x01';
                              bVar5 = (bool)ExclusiveMonitorPass(ppuVar31,0x10);
                              if (bVar5) {
                                *(int *)ppuVar31 = *(int *)ppuVar31 + -1;
                                cVar2 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar2 != '\0');
                          }
                          goto LAB_7101d6da68;
                        }
                      }
                    }
LAB_7101d6c964:
                    iVar7 = 0;
                    ppuVar23 = (undefined **)0x0;
                    uVar11 = 0xffffffff;
                    uVar26 = 0;
                    uVar45 = 0xffffffff;
                    *(undefined4 *)(plVar37 + 9) = 0;
                    fVar46 = local_74;
                    local_d8 = local_74;
                    goto LAB_7101d6c984;
                  }
                  iVar7 = *(int *)(lVar21 + uVar44 * 0x150 + 0x2c);
                  if (iVar7 != -1) {
                    uVar11 = iVar7 + 0xa000;
                    goto LAB_7101d6c91c;
                  }
                  if (*(char *)(lVar21 + uVar44 * 0x150 + 0x3e) != '\0') {
                    plVar41 = plVar18 + 7;
                    plVar28 = (long *)*plVar41;
                    if (plVar28 != (long *)0x0) {
                      puVar34 = (uint *)(lVar21 + uVar44 * 0x150 + 200);
                      uVar11 = *puVar34;
                      if (uVar11 == 0) {
                        uVar19 = 0;
                      }
                      else {
                        uVar45 = 0xffffffff;
                        pbVar36 = (byte *)(lVar21 + uVar44 * 0x150 + 0xcc);
                        do {
                          pbVar35 = pbVar36 + 1;
                          bVar24 = *pbVar36;
                          uVar9 = bVar24 + 0x20;
                          if (0x19 < bVar24 - 0x41) {
                            uVar9 = (uint)bVar24;
                          }
                          uVar45 = (&DAT_7104754084)[(uVar9 ^ uVar45) & 0xff] ^ uVar45 >> 8;
                          pbVar36 = pbVar35;
                        } while (pbVar35 < (byte *)((long)puVar34 + (ulong)uVar11 + 4));
                        uVar19 = (ulong)~uVar45;
                      }
                      uVar19 = uVar19 | ((long)(int)uVar11 & 0xffU) << 0x20;
                      plVar32 = plVar41;
                      do {
                        bVar5 = (plVar28[4] & 0xffffffffffU) < uVar19;
                        if (!bVar5) {
                          plVar32 = plVar28;
                        }
                        plVar28 = (long *)plVar28[bVar5];
                      } while (plVar28 != (long *)0x0);
                      if ((plVar32 == plVar41) || (uVar19 < (plVar32[4] & 0xffffffffffU)))
                      goto LAB_7101d6c964;
                      uVar11 = *(uint *)(plVar32 + 5);
                      lVar42 = plVar18[5];
                      goto joined_r0x007101d6c920;
                    }
                    goto LAB_7101d6c964;
                  }
                  uVar27 = *(ulong *)(lVar21 + uVar44 * 0x150 + 0x20);
                  if (((uVar27 & 0xff00000000000000) == 0xc100000000000000) &&
                     ((uVar27 & 0xffffffffff) != 0)) {
                    puVar13 = FUN_71032631a0(lVar42,0x11e4b123e6);
                    if ((((ulong)puVar13 & 0xff00000000000000) == 0xc100000000000000) &&
                       (((ulong)puVar13 & 0xffffffffff) != 0)) {
                      if ((((ulong)puVar13 ^ uVar27) & 0xffffffffff) != 0) {
LAB_7101d6d14c:
                        uVar19 = plVar18[0x11];
                        if ((((uVar19 & 0xff00000000000000) != 0xc100000000000000) ||
                            ((uVar19 & 0xffffffffff) == 0)) ||
                           (((uVar19 ^ uVar27) & 0xffffffffff) != 0)) {
                          uVar14 = FUN_71032626e0(lVar42,uVar27);
                          if ((int)uVar14 != -1) {
                            uVar11 = (int)uVar14 + 0x7000;
                            lVar42 = plVar18[5];
                            goto joined_r0x007101d6c920;
                          }
                          goto LAB_7101d6c964;
                        }
                        lVar21 = lVar21 + uVar44 * 0x150;
                        FUN_7102401d90((undefined4 *)&local_c0,(long)plVar18,*(ulong *)(lVar21 + 8))
                        ;
                        iVar7 = *(int *)(lVar21 + 0x38);
                        if (((iVar7 != 0) && (((uint)local_98 != -1 || (local_98._4_4_ != -1)))) &&
                           (local_b0 != (undefined **)0x0)) {
                          uVar19 = (**(code **)(*local_b0 + 0x20))();
                          fVar46 = 0.0;
                          if (((uVar19 & 1) == 0) &&
                             (fVar46 = 0.0, *(char *)(*DAT_710593b438 + 1) != '\0')) {
                            fVar46 = (float)local_90;
                          }
                          if (((local_b0 != (undefined **)0x0) &&
                              (uVar19 = (**(code **)(*local_b0 + 0x20))(), (uVar19 & 1) == 0)) &&
                             (*(char *)(*DAT_710593b438 + 1) != '\0')) {
                            fVar46 = fVar46 + (float)iVar7;
                            if (((local_a8._4_4_ == 0x876500) && (DAT_7106dd53a8 == '\x01')) &&
                               (((int)local_a8 == DAT_7106dd53ac &&
                                ((local_a0 == '\0' && (local_b0 != (undefined **)0x0)))))) {
                              fVar47 = local_90._4_4_;
                              fVar4 = (float)local_88;
                              uVar19 = (**(code **)(*local_b0 + 0x20))();
                              ppuVar23 = local_b0;
                              if ((uVar19 & 1) == 0) {
                                std::recursive_mutex::lock();
                                lVar21 = DAT_7106dd5408;
                                uVar11 = *(uint *)(DAT_7106dd5408 + 0x18);
                                uVar45 = *(uint *)(DAT_7106dd5408 + 0x14);
                                uVar44 = (ulong)uVar45;
                                uVar19 = (ulong)(uVar45 + 0x20) + 8;
                                if (uVar45 < uVar11) {
                                  if (uVar19 < uVar11) goto LAB_7101d6e424;
                                }
                                else {
                                  if (*(uint *)(DAT_7106dd5408 + 0x10) < uVar19) {
                                    if (uVar11 < 0x29) goto LAB_7101d6e488;
                                    *(undefined4 *)(*(long *)(DAT_7106dd5408 + 8) + uVar44) =
                                         0x64716e62;
                                    uVar44 = 0;
                                  }
LAB_7101d6e424:
                                  puVar39 = (undefined8 *)(*(long *)(lVar21 + 8) + uVar44);
                                  puVar39[2] = ppuVar23;
                                  *(undefined4 *)((long)puVar39 + 0x24) = 0;
                                  *puVar39 = 0x2070716e62;
                                  puVar39[1] = 0x8756c6f76;
                                  uVar11 = (int)uVar44 + 0x28;
                                  *(float *)(puVar39 + 4) = fVar47 + fVar46 + fVar4;
                                  uVar45 = *(uint *)(lVar21 + 0x10);
                                  uVar9 = 0;
                                  if (uVar45 != 0) {
                                    uVar9 = uVar11 / uVar45;
                                  }
                                  *(uint *)(lVar21 + 0x14) = uVar11 - uVar9 * uVar45;
                                  if (ppuVar23 != (undefined **)0x0) {
                                    piVar29 = (int *)((long)ppuVar23 + 0x3c);
                                    do {
                                      cVar2 = '\x01';
                                      bVar5 = (bool)ExclusiveMonitorPass(piVar29,0x10);
                                      if (bVar5) {
                                        *piVar29 = *piVar29 + 1;
                                        cVar2 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar2 != '\0');
                                  }
                                }
LAB_7101d6e488:
                                std::recursive_mutex::unlock();
                              }
                            }
                            local_90 = CONCAT44(local_90._4_4_,fVar46);
                          }
                        }
                        iVar7 = DAT_7106dd53ac;
                        if (local_b0 == (undefined **)0x0) {
                          iVar7 = 0;
                          ppuVar31 = (undefined **)0x0;
                        }
                        else {
                          ppuVar23 = local_b0 + 7;
                          do {
                            cVar2 = '\x01';
                            bVar5 = (bool)ExclusiveMonitorPass(ppuVar23,0x10);
                            if (bVar5) {
                              *(int *)ppuVar23 = *(int *)ppuVar23 + 1;
                              cVar2 = ExclusiveMonitorsStatus();
                            }
                            ppuVar31 = local_b0;
                          } while (cVar2 != '\0');
                        }
                        ppuVar23 = local_b0;
                        if (((ppuVar31 != (undefined **)0x0) && (DAT_7106dd53a8 == '\x01')) &&
                           ((int)local_a8 == DAT_7106dd53ac)) {
                          ppuVar31 = ppuVar31 + 7;
                          do {
                            cVar2 = '\x01';
                            bVar5 = (bool)ExclusiveMonitorPass(ppuVar31,0x10);
                            if (bVar5) {
                              *(int *)ppuVar31 = *(int *)ppuVar31 + -1;
                              cVar2 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar2 != '\0');
                        }
                        goto LAB_7101d6da68;
                      }
                    }
                    else if ((((ulong)puVar13 & 0xffffffffff) == 0) ||
                            (((ulong)puVar13 & 0xff00000000000000) != 0xc100000000000000))
                    goto LAB_7101d6d14c;
                    lVar21 = lVar21 + uVar44 * 0x150;
                    FUN_71024076d0((undefined4 *)&local_c0,*(ulong *)(lVar21 + 8));
                    iVar7 = *(int *)(lVar21 + 0x38);
                    if (((iVar7 != 0) && (((uint)local_98 != -1 || (local_98._4_4_ != -1)))) &&
                       (local_b0 != (undefined **)0x0)) {
                      uVar19 = (**(code **)(*local_b0 + 0x20))();
                      fVar46 = 0.0;
                      if (((uVar19 & 1) == 0) &&
                         (fVar46 = 0.0, *(char *)(*DAT_710593b438 + 1) != '\0')) {
                        fVar46 = (float)local_90;
                      }
                      if (((local_b0 != (undefined **)0x0) &&
                          (uVar19 = (**(code **)(*local_b0 + 0x20))(), (uVar19 & 1) == 0)) &&
                         (*(char *)(*DAT_710593b438 + 1) != '\0')) {
                        fVar46 = fVar46 + (float)iVar7;
                        if (((local_a8._4_4_ == 0x876500) && (DAT_7106dd53a8 == '\x01')) &&
                           (((int)local_a8 == DAT_7106dd53ac &&
                            ((local_a0 == '\0' && (local_b0 != (undefined **)0x0)))))) {
                          fVar47 = local_90._4_4_;
                          fVar4 = (float)local_88;
                          uVar19 = (**(code **)(*local_b0 + 0x20))();
                          ppuVar23 = local_b0;
                          if ((uVar19 & 1) == 0) {
                            std::recursive_mutex::lock();
                            lVar21 = DAT_7106dd5408;
                            uVar11 = *(uint *)(DAT_7106dd5408 + 0x18);
                            uVar45 = *(uint *)(DAT_7106dd5408 + 0x14);
                            uVar44 = (ulong)uVar45;
                            uVar19 = (ulong)(uVar45 + 0x20) + 8;
                            if (uVar45 < uVar11) {
                              if (uVar19 < uVar11) goto LAB_7101d6e23c;
                            }
                            else {
                              if (*(uint *)(DAT_7106dd5408 + 0x10) < uVar19) {
                                if (uVar11 < 0x29) goto LAB_7101d6e2a0;
                                *(undefined4 *)(*(long *)(DAT_7106dd5408 + 8) + uVar44) = 0x64716e62
                                ;
                                uVar44 = 0;
                              }
LAB_7101d6e23c:
                              puVar39 = (undefined8 *)(*(long *)(lVar21 + 8) + uVar44);
                              puVar39[2] = ppuVar23;
                              *(undefined4 *)((long)puVar39 + 0x24) = 0;
                              *puVar39 = 0x2070716e62;
                              puVar39[1] = 0x8756c6f76;
                              uVar11 = (int)uVar44 + 0x28;
                              *(float *)(puVar39 + 4) = fVar47 + fVar46 + fVar4;
                              uVar45 = *(uint *)(lVar21 + 0x10);
                              uVar9 = 0;
                              if (uVar45 != 0) {
                                uVar9 = uVar11 / uVar45;
                              }
                              *(uint *)(lVar21 + 0x14) = uVar11 - uVar9 * uVar45;
                              if (ppuVar23 != (undefined **)0x0) {
                                piVar29 = (int *)((long)ppuVar23 + 0x3c);
                                do {
                                  cVar2 = '\x01';
                                  bVar5 = (bool)ExclusiveMonitorPass(piVar29,0x10);
                                  if (bVar5) {
                                    *piVar29 = *piVar29 + 1;
                                    cVar2 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar2 != '\0');
                              }
                            }
LAB_7101d6e2a0:
                            std::recursive_mutex::unlock();
                          }
                        }
                        local_90 = CONCAT44(local_90._4_4_,fVar46);
                      }
                    }
                    iVar7 = DAT_7106dd53ac;
                    if (local_b0 == (undefined **)0x0) {
                      iVar7 = 0;
                      ppuVar31 = (undefined **)0x0;
                    }
                    else {
                      ppuVar23 = local_b0 + 7;
                      do {
                        cVar2 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(ppuVar23,0x10);
                        if (bVar5) {
                          *(int *)ppuVar23 = *(int *)ppuVar23 + 1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                        ppuVar31 = local_b0;
                      } while (cVar2 != '\0');
                    }
                    ppuVar23 = local_b0;
                    if (((ppuVar31 != (undefined **)0x0) && (DAT_7106dd53a8 == '\x01')) &&
                       ((int)local_a8 == DAT_7106dd53ac)) {
                      ppuVar31 = ppuVar31 + 7;
                      do {
                        cVar2 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(ppuVar31,0x10);
                        if (bVar5) {
                          *(int *)ppuVar31 = *(int *)ppuVar31 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                    }
                    goto LAB_7101d6da68;
                  }
                  uVar30 = plVar18[0x11];
                  uVar27 = uVar30 & 0xffffffffff;
                  if (uVar19 != 0xc100000000000000 || bVar5) {
                    if ((uVar30 & 0xff00000000000000) == 0xc100000000000000)
                    goto joined_r0x007101d6d1a4;
LAB_7101d6d298:
                    lVar21 = lVar21 + uVar44 * 0x150;
                    FUN_7102401d90((undefined4 *)&local_c0,(long)plVar18,*(ulong *)(lVar21 + 8));
                    iVar7 = *(int *)(lVar21 + 0x38);
                    if (((iVar7 != 0) && (((uint)local_98 != -1 || (local_98._4_4_ != -1)))) &&
                       (local_b0 != (undefined **)0x0)) {
                      uVar19 = (**(code **)(*local_b0 + 0x20))();
                      fVar46 = 0.0;
                      if (((uVar19 & 1) == 0) &&
                         (fVar46 = 0.0, *(char *)(*DAT_710593b438 + 1) != '\0')) {
                        fVar46 = (float)local_90;
                      }
                      if (((local_b0 != (undefined **)0x0) &&
                          (uVar19 = (**(code **)(*local_b0 + 0x20))(), (uVar19 & 1) == 0)) &&
                         (*(char *)(*DAT_710593b438 + 1) != '\0')) {
                        fVar46 = fVar46 + (float)iVar7;
                        if (((local_a8._4_4_ == 0x876500) && (DAT_7106dd53a8 == '\x01')) &&
                           (((int)local_a8 == DAT_7106dd53ac &&
                            ((local_a0 == '\0' && (local_b0 != (undefined **)0x0)))))) {
                          fVar47 = local_90._4_4_;
                          fVar4 = (float)local_88;
                          uVar19 = (**(code **)(*local_b0 + 0x20))();
                          ppuVar23 = local_b0;
                          if ((uVar19 & 1) == 0) {
                            std::recursive_mutex::lock();
                            lVar21 = DAT_7106dd5408;
                            uVar11 = *(uint *)(DAT_7106dd5408 + 0x18);
                            uVar45 = *(uint *)(DAT_7106dd5408 + 0x14);
                            uVar44 = (ulong)uVar45;
                            uVar19 = (ulong)(uVar45 + 0x20) + 8;
                            if (uVar45 < uVar11) {
                              if (uVar19 < uVar11) goto LAB_7101d6e2f0;
                            }
                            else {
                              if (*(uint *)(DAT_7106dd5408 + 0x10) < uVar19) {
                                if (uVar11 < 0x29) goto LAB_7101d6e354;
                                *(undefined4 *)(*(long *)(DAT_7106dd5408 + 8) + uVar44) = 0x64716e62
                                ;
                                uVar44 = 0;
                              }
LAB_7101d6e2f0:
                              puVar39 = (undefined8 *)(*(long *)(lVar21 + 8) + uVar44);
                              puVar39[2] = ppuVar23;
                              *(undefined4 *)((long)puVar39 + 0x24) = 0;
                              *puVar39 = 0x2070716e62;
                              puVar39[1] = 0x8756c6f76;
                              uVar11 = (int)uVar44 + 0x28;
                              *(float *)(puVar39 + 4) = fVar47 + fVar46 + fVar4;
                              uVar45 = *(uint *)(lVar21 + 0x10);
                              uVar9 = 0;
                              if (uVar45 != 0) {
                                uVar9 = uVar11 / uVar45;
                              }
                              *(uint *)(lVar21 + 0x14) = uVar11 - uVar9 * uVar45;
                              if (ppuVar23 != (undefined **)0x0) {
                                piVar29 = (int *)((long)ppuVar23 + 0x3c);
                                do {
                                  cVar2 = '\x01';
                                  bVar5 = (bool)ExclusiveMonitorPass(piVar29,0x10);
                                  if (bVar5) {
                                    *piVar29 = *piVar29 + 1;
                                    cVar2 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar2 != '\0');
                              }
                            }
LAB_7101d6e354:
                            std::recursive_mutex::unlock();
                          }
                        }
                        local_90 = CONCAT44(local_90._4_4_,fVar46);
                      }
                    }
                    iVar7 = DAT_7106dd53ac;
                    if (local_b0 == (undefined **)0x0) {
                      iVar7 = 0;
                      ppuVar31 = (undefined **)0x0;
                    }
                    else {
                      ppuVar23 = local_b0 + 7;
                      do {
                        cVar2 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(ppuVar23,0x10);
                        if (bVar5) {
                          *(int *)ppuVar23 = *(int *)ppuVar23 + 1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                        ppuVar31 = local_b0;
                      } while (cVar2 != '\0');
                    }
                    ppuVar23 = local_b0;
                    if (((ppuVar31 != (undefined **)0x0) && (DAT_7106dd53a8 == '\x01')) &&
                       ((int)local_a8 == DAT_7106dd53ac)) {
                      ppuVar31 = ppuVar31 + 7;
                      do {
                        cVar2 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(ppuVar31,0x10);
                        if (bVar5) {
                          *(int *)ppuVar31 = *(int *)ppuVar31 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                    }
                    goto LAB_7101d6da68;
                  }
                  if (((uVar30 & 0xff00000000000000) == 0xc100000000000000) && (uVar27 != 0)) {
                    uVar27 = (uVar30 ^ uVar43) & 0xffffffffff;
joined_r0x007101d6d1a4:
                    if (uVar27 == 0) goto LAB_7101d6d298;
                  }
                  uVar11 = FUN_71032638e0(lVar42,uVar43);
                  if ((uVar11 & 1) != 0) {
                    if (plVar18[5] == 0) {
LAB_7101d6d8e4:
                      local_a8 = 0x87650000000000;
                      local_b8 = &PTR_FUN_7104f73d30;
                      local_b0 = (undefined **)0x0;
                      local_a0 = '\0';
                      local_c0 = (long ********)((ulong)local_c0 & 0xffffffff00000000);
                      local_88 = 0;
                      local_98 = 0xffffffffffffffff;
                      local_90 = 0;
                    }
                    else {
                      plVar18 = plVar18 + 4;
                      plVar41 = (long *)*plVar18;
                      if (plVar41 == (long *)0x0) goto LAB_7101d6d8e4;
                      uVar11 = *(byte *)(lVar21 + uVar44 * 0x150 + 0x3c) | 0x7000;
                      plVar28 = plVar18;
                      do {
                        if (*(uint *)(plVar41 + 4) >= uVar11) {
                          plVar28 = plVar41;
                        }
                        plVar41 = (long *)plVar41[*(uint *)(plVar41 + 4) < uVar11];
                      } while (plVar41 != (long *)0x0);
                      if (((plVar28 == plVar18) || (uVar11 < *(uint *)(plVar28 + 4))) ||
                         (lVar42 = plVar28[6], (int)lVar42 == -1)) goto LAB_7101d6d8e4;
                      plVar28 = plVar28 + 5;
                      piVar29 = (int *)*plVar28;
                      if ((piVar29 == (int *)0x0) ||
                         ((((char)piVar29[0x16] == '\0' &&
                           (((piVar29[1] != 0 || (*(long **)(piVar29 + 4) == (long *)0x0)) ||
                            (uVar19 = (**(code **)(**(long **)(piVar29 + 4) + 0x20))(),
                            (uVar19 & 1) != 0)))) ||
                          ((*piVar29 != (int)lVar42 ||
                           (lVar42 = *(long *)(*(long *)(*plVar28 + 0x30) + 8), lVar42 == 0))))))
                      goto LAB_7101d6d8e4;
                      local_c0 = (long ********)
                                 (*(ulong *)(lVar21 + uVar44 * 0x150 + 8) & 0xffffffffff);
                      puVar39 = bsearch(&local_c0,(void *)(lVar42 + 8),(ulong)*(uint *)(lVar42 + 4),
                                        8,FUN_71037416f0);
                      if (puVar39 == (undefined8 *)0x0) goto LAB_7101d6d8e4;
                      FUN_7103738770((undefined4 *)&local_c0,plVar28,(uint)((ulong)*puVar39 >> 0x28)
                                    );
                    }
                    iVar7 = *(int *)(lVar21 + uVar44 * 0x150 + 0x38);
                    if ((iVar7 != 0) &&
                       ((((uint)local_98 != -1 || (local_98._4_4_ != -1)) &&
                        (local_b0 != (undefined **)0x0)))) {
                      uVar19 = (**(code **)(*local_b0 + 0x20))();
                      fVar46 = 0.0;
                      if (((uVar19 & 1) == 0) &&
                         (fVar46 = 0.0, *(char *)(*DAT_710593b438 + 1) != '\0')) {
                        fVar46 = (float)local_90;
                      }
                      if (((local_b0 != (undefined **)0x0) &&
                          (uVar19 = (**(code **)(*local_b0 + 0x20))(), (uVar19 & 1) == 0)) &&
                         (*(char *)(*DAT_710593b438 + 1) != '\0')) {
                        fVar46 = fVar46 + (float)iVar7;
                        if ((((local_a8._4_4_ == 0x876500) && (DAT_7106dd53a8 == '\x01')) &&
                            ((int)local_a8 == DAT_7106dd53ac)) &&
                           ((local_a0 == '\0' && (local_b0 != (undefined **)0x0)))) {
                          fVar47 = local_90._4_4_;
                          fVar4 = (float)local_88;
                          uVar19 = (**(code **)(*local_b0 + 0x20))();
                          ppuVar23 = local_b0;
                          if ((uVar19 & 1) == 0) {
                            std::recursive_mutex::lock();
                            lVar21 = DAT_7106dd5408;
                            uVar11 = *(uint *)(DAT_7106dd5408 + 0x18);
                            uVar45 = *(uint *)(DAT_7106dd5408 + 0x14);
                            uVar44 = (ulong)uVar45;
                            uVar19 = (ulong)(uVar45 + 0x20) + 8;
                            if (uVar45 < uVar11) {
                              if (uVar19 < uVar11) goto LAB_7101d6e388;
                            }
                            else {
                              if (*(uint *)(DAT_7106dd5408 + 0x10) < uVar19) {
                                if (uVar11 < 0x29) goto LAB_7101d6e3ec;
                                *(undefined4 *)(*(long *)(DAT_7106dd5408 + 8) + uVar44) = 0x64716e62
                                ;
                                uVar44 = 0;
                              }
LAB_7101d6e388:
                              puVar39 = (undefined8 *)(*(long *)(lVar21 + 8) + uVar44);
                              puVar39[2] = ppuVar23;
                              *(undefined4 *)((long)puVar39 + 0x24) = 0;
                              *puVar39 = 0x2070716e62;
                              puVar39[1] = 0x8756c6f76;
                              uVar11 = (int)uVar44 + 0x28;
                              *(float *)(puVar39 + 4) = fVar47 + fVar46 + fVar4;
                              uVar45 = *(uint *)(lVar21 + 0x10);
                              uVar9 = 0;
                              if (uVar45 != 0) {
                                uVar9 = uVar11 / uVar45;
                              }
                              *(uint *)(lVar21 + 0x14) = uVar11 - uVar9 * uVar45;
                              if (ppuVar23 != (undefined **)0x0) {
                                piVar29 = (int *)((long)ppuVar23 + 0x3c);
                                do {
                                  cVar2 = '\x01';
                                  bVar5 = (bool)ExclusiveMonitorPass(piVar29,0x10);
                                  if (bVar5) {
                                    *piVar29 = *piVar29 + 1;
                                    cVar2 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar2 != '\0');
                              }
                            }
LAB_7101d6e3ec:
                            std::recursive_mutex::unlock();
                          }
                        }
                        local_90 = CONCAT44(local_90._4_4_,fVar46);
                      }
                    }
                    iVar7 = DAT_7106dd53ac;
                    if (local_b0 == (undefined **)0x0) {
                      iVar7 = 0;
                      ppuVar31 = (undefined **)0x0;
                    }
                    else {
                      ppuVar23 = local_b0 + 7;
                      do {
                        cVar2 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(ppuVar23,0x10);
                        if (bVar5) {
                          *(int *)ppuVar23 = *(int *)ppuVar23 + 1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                        ppuVar31 = local_b0;
                      } while (cVar2 != '\0');
                    }
                    ppuVar23 = local_b0;
                    if (((ppuVar31 != (undefined **)0x0) && (DAT_7106dd53a8 == '\x01')) &&
                       ((int)local_a8 == DAT_7106dd53ac)) {
                      ppuVar31 = ppuVar31 + 7;
                      do {
                        cVar2 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(ppuVar31,0x10);
                        if (bVar5) {
                          *(int *)ppuVar31 = *(int *)ppuVar31 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                    }
                    goto LAB_7101d6da68;
                  }
                  if (*(char *)((long)plVar18 + 0x9b) == '\0') {
                    uVar11 = 0x7fff;
                    lVar42 = plVar18[5];
                    goto joined_r0x007101d6c920;
                  }
                  local_d0 = (undefined **)0x0;
                  if (plVar18[5] == 0) {
                    fVar46 = 0.0;
                    uVar11 = 0xffffffff;
                    uVar26 = 0;
                    local_e4 = 0;
                    uVar40 = 0;
                    local_d8 = 0.0;
                    local_74 = 0.0;
                    uVar45 = 0xffffffff;
                  }
                  else {
                    plVar28 = plVar18 + 4;
                    plVar32 = (long *)*plVar28;
                    plVar41 = plVar28;
                    if (plVar32 == (long *)0x0) {
LAB_7101d6da88:
                      local_a8 = 0x87650000000000;
                      uVar40 = 0;
                      local_b0 = (undefined **)0x0;
                      local_a0 = '\0';
                      local_c0 = (long ********)((ulong)local_c0 & 0xffffffff00000000);
                      local_88 = 0;
                      local_98 = 0xffffffffffffffff;
                      local_90 = 0;
LAB_7101d6dab8:
                      if (((local_d0 != (undefined **)0x0) && (DAT_7106dd53a8 == '\x01')) &&
                         (DAT_7106dd53ac == 0)) {
                        local_d0 = local_d0 + 7;
                        do {
                          cVar2 = '\x01';
                          bVar5 = (bool)ExclusiveMonitorPass(local_d0,0x10);
                          if (bVar5) {
                            *(int *)local_d0 = *(int *)local_d0 + -1;
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar2 != '\0');
                      }
                      local_e4 = 0;
                      local_d0 = (undefined **)0x0;
                    }
                    else {
                      do {
                        if (*(uint *)(plVar32 + 4) >= 0x7fff) {
                          plVar41 = plVar32;
                        }
                        plVar32 = (long *)plVar32[*(uint *)(plVar32 + 4) < 0x7fff];
                      } while (plVar32 != (long *)0x0);
                      if (((plVar41 == plVar28) || (*(uint *)(plVar41 + 4) >> 0xf != 0)) ||
                         (lVar42 = plVar41[6], (int)lVar42 == -1)) goto LAB_7101d6da88;
                      plVar41 = plVar41 + 5;
                      piVar29 = (int *)*plVar41;
                      if (((piVar29 == (int *)0x0) ||
                          (((char)piVar29[0x16] == '\0' &&
                           (((piVar29[1] != 0 || (*(long **)(piVar29 + 4) == (long *)0x0)) ||
                            (uVar19 = (**(code **)(**(long **)(piVar29 + 4) + 0x20))(),
                            (uVar19 & 1) != 0)))))) ||
                         ((*piVar29 != (int)lVar42 ||
                          (lVar42 = *(long *)(*(long *)(*plVar41 + 0x30) + 8), lVar42 == 0))))
                      goto LAB_7101d6da88;
                      local_c0 = (long ********)
                                 (*(ulong *)(lVar21 + uVar44 * 0x150 + 8) & 0xffffffffff);
                      puVar39 = bsearch(&local_c0,(void *)(lVar42 + 8),(ulong)*(uint *)(lVar42 + 4),
                                        8,FUN_71037416f0);
                      if (puVar39 == (undefined8 *)0x0) goto LAB_7101d6da88;
                      FUN_7103738770((undefined4 *)&local_c0,plVar41,(uint)((ulong)*puVar39 >> 0x28)
                                    );
                      uVar40 = local_c0._0_4_;
                      if (local_b0 == (undefined **)0x0) goto LAB_7101d6dab8;
                      local_e4 = DAT_7106dd53ac;
                      if (DAT_7106dd53ac == 0) {
                        if ((local_d0 != (undefined **)0x0) && (DAT_7106dd53a8 == '\x01')) {
                          local_d0 = local_d0 + 7;
                          do {
                            cVar2 = '\x01';
                            bVar5 = (bool)ExclusiveMonitorPass(local_d0,0x10);
                            if (bVar5) {
                              *(int *)local_d0 = *(int *)local_d0 + -1;
                              cVar2 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar2 != '\0');
                        }
                        local_e4 = 0;
                      }
                      local_d0 = local_b0;
                      ppuVar23 = local_b0 + 7;
                      do {
                        cVar2 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(ppuVar23,0x10);
                        if (bVar5) {
                          *(int *)ppuVar23 = *(int *)ppuVar23 + 1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                    }
                    local_b8 = &PTR_FUN_7104f73d50;
                    local_d8 = (float)((ulong)local_90 >> 0x20);
                    local_74 = (float)local_88;
                    if (((local_b0 != (undefined **)0x0) && (DAT_7106dd53a8 == '\x01')) &&
                       ((int)local_a8 == DAT_7106dd53ac)) {
                      local_b0 = local_b0 + 7;
                      do {
                        cVar2 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(local_b0,0x10);
                        if (bVar5) {
                          *(int *)local_b0 = *(int *)local_b0 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                    }
                    local_b0 = (undefined **)0x0;
                    fVar46 = (float)local_90;
                    uVar26 = local_88._4_4_;
                    uVar45 = (uint)local_98;
                    uVar11 = local_98._4_4_;
                    if ((uint)local_98 == 0xffffffff) {
                      if (local_98._4_4_ == 0xffffffff) {
                        uVar14 = FUN_71032626e0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),
                                                plVar18[0x12]);
                        plVar18 = (long *)plVar18[4];
                        if (plVar18 == (long *)0x0) {
LAB_7101d6deb0:
                          local_a8 = 0x87650000000000;
                          uVar40 = 0;
                          local_b0 = (undefined **)0x0;
                          local_a0 = '\0';
                          local_c0 = (long ********)((ulong)local_c0 & 0xffffffff00000000);
                          local_88 = 0;
                          local_98 = 0xffffffffffffffff;
                          local_90 = 0;
LAB_7101d6dee0:
                          if (((local_d0 != (undefined **)0x0) && (DAT_7106dd53a8 == '\x01')) &&
                             (local_e4 == DAT_7106dd53ac)) {
                            local_d0 = local_d0 + 7;
                            do {
                              cVar2 = '\x01';
                              bVar5 = (bool)ExclusiveMonitorPass(local_d0,0x10);
                              if (bVar5) {
                                *(int *)local_d0 = *(int *)local_d0 + -1;
                                cVar2 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar2 != '\0');
                          }
                          local_d0 = (undefined **)0x0;
                        }
                        else {
                          uVar11 = (int)uVar14 + 0x7000;
                          plVar41 = plVar28;
                          do {
                            if (*(uint *)(plVar18 + 4) >= uVar11) {
                              plVar41 = plVar18;
                            }
                            plVar18 = (long *)plVar18[*(uint *)(plVar18 + 4) < uVar11];
                          } while (plVar18 != (long *)0x0);
                          if (((plVar41 == plVar28) || (uVar11 < *(uint *)(plVar41 + 4))) ||
                             (lVar42 = plVar41[6], (int)lVar42 == -1)) goto LAB_7101d6deb0;
                          plVar41 = plVar41 + 5;
                          piVar29 = (int *)*plVar41;
                          if (((piVar29 == (int *)0x0) ||
                              (((char)piVar29[0x16] == '\0' &&
                               (((piVar29[1] != 0 || (*(long **)(piVar29 + 4) == (long *)0x0)) ||
                                (uVar19 = (**(code **)(**(long **)(piVar29 + 4) + 0x20))(),
                                (uVar19 & 1) != 0)))))) ||
                             ((*piVar29 != (int)lVar42 ||
                              (lVar42 = *(long *)(*(long *)(*plVar41 + 0x30) + 8), lVar42 == 0))))
                          goto LAB_7101d6deb0;
                          local_c0 = (long ********)
                                     (*(ulong *)(lVar21 + uVar44 * 0x150 + 8) & 0xffffffffff);
                          puVar39 = bsearch(&local_c0,(void *)(lVar42 + 8),
                                            (ulong)*(uint *)(lVar42 + 4),8,FUN_71037416f0);
                          if (puVar39 == (undefined8 *)0x0) goto LAB_7101d6deb0;
                          FUN_7103738770((undefined4 *)&local_c0,plVar41,
                                         (uint)((ulong)*puVar39 >> 0x28));
                          uVar40 = local_c0._0_4_;
                          if (local_b0 == (undefined **)0x0) goto LAB_7101d6dee0;
                          iVar7 = DAT_7106dd53ac;
                          if (((local_e4 == DAT_7106dd53ac) &&
                              (iVar7 = local_e4, local_d0 != (undefined **)0x0)) &&
                             (DAT_7106dd53a8 == '\x01')) {
                            local_d0 = local_d0 + 7;
                            do {
                              cVar2 = '\x01';
                              bVar5 = (bool)ExclusiveMonitorPass(local_d0,0x10);
                              if (bVar5) {
                                *(int *)local_d0 = *(int *)local_d0 + -1;
                                cVar2 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar2 != '\0');
                          }
                          local_d0 = local_b0;
                          ppuVar23 = local_b0 + 7;
                          do {
                            cVar2 = '\x01';
                            bVar5 = (bool)ExclusiveMonitorPass(ppuVar23,0x10);
                            if (bVar5) {
                              *(int *)ppuVar23 = *(int *)ppuVar23 + 1;
                              cVar2 = ExclusiveMonitorsStatus();
                            }
                            local_e4 = iVar7;
                          } while (cVar2 != '\0');
                        }
                        local_b8 = &PTR_FUN_7104f73d50;
                        local_d8 = (float)((ulong)local_90 >> 0x20);
                        local_74 = (float)local_88;
                        if (((local_b0 != (undefined **)0x0) && (DAT_7106dd53a8 == '\x01')) &&
                           ((int)local_a8 == DAT_7106dd53ac)) {
                          local_b0 = local_b0 + 7;
                          do {
                            cVar2 = '\x01';
                            bVar5 = (bool)ExclusiveMonitorPass(local_b0,0x10);
                            if (bVar5) {
                              *(int *)local_b0 = *(int *)local_b0 + -1;
                              cVar2 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar2 != '\0');
                        }
                        local_b0 = (undefined **)0x0;
                        fVar46 = (float)local_90;
                        uVar26 = local_88._4_4_;
                        uVar45 = (uint)local_98;
                        uVar11 = local_98._4_4_;
                      }
                      else {
                        uVar45 = 0xffffffff;
                      }
                    }
                  }
                  iVar7 = *(int *)(lVar21 + uVar44 * 0x150 + 0x38);
                  if (iVar7 != 0 && (uVar45 & uVar11) != 0xffffffff) {
                    fVar47 = 0.0;
                    if (((local_d0 != (undefined **)0x0) &&
                        (uVar19 = (**(code **)(*local_d0 + 0x20))(), fVar47 = 0.0, (uVar19 & 1) == 0
                        )) && (fVar47 = 0.0, *(char *)(*DAT_710593b438 + 1) != '\0')) {
                      fVar47 = fVar46;
                    }
                    if ((((local_d0 != (undefined **)0x0) &&
                         (uVar19 = (**(code **)(*local_d0 + 0x20))(), (uVar19 & 1) == 0)) &&
                        ((*(char *)(*DAT_710593b438 + 1) != '\0' &&
                         ((fVar46 = fVar47 + (float)iVar7, DAT_7106dd53a8 == '\x01' &&
                          (local_e4 == DAT_7106dd53ac)))))) &&
                       ((local_d0 != (undefined **)0x0 &&
                        (uVar19 = (**(code **)(*local_d0 + 0x20))(), ppuVar23 = local_d0,
                        (uVar19 & 1) == 0)))) {
                      std::recursive_mutex::lock();
                      lVar21 = DAT_7106dd5408;
                      uVar9 = *(uint *)(DAT_7106dd5408 + 0x18);
                      uVar10 = *(uint *)(DAT_7106dd5408 + 0x14);
                      uVar44 = (ulong)uVar10;
                      uVar19 = (ulong)(uVar10 + 0x20) + 8;
                      if (uVar10 < uVar9) {
                        if (uVar19 < uVar9) goto LAB_7101d6e0c4;
                      }
                      else {
                        if (*(uint *)(DAT_7106dd5408 + 0x10) < uVar19) {
                          if (uVar9 < 0x29) goto LAB_7101d6e130;
                          *(undefined4 *)(*(long *)(DAT_7106dd5408 + 8) + uVar44) = 0x64716e62;
                          uVar44 = 0;
                        }
LAB_7101d6e0c4:
                        puVar39 = (undefined8 *)(*(long *)(lVar21 + 8) + uVar44);
                        puVar39[2] = ppuVar23;
                        *(undefined4 *)((long)puVar39 + 0x24) = 0;
                        uVar9 = (int)uVar44 + 0x28;
                        *puVar39 = 0x2070716e62;
                        puVar39[1] = 0x8756c6f76;
                        *(float *)(puVar39 + 4) = local_d8 + fVar46 + local_74;
                        uVar10 = *(uint *)(lVar21 + 0x10);
                        uVar3 = 0;
                        if (uVar10 != 0) {
                          uVar3 = uVar9 / uVar10;
                        }
                        *(uint *)(lVar21 + 0x14) = uVar9 - uVar3 * uVar10;
                        if (ppuVar23 != (undefined **)0x0) {
                          piVar29 = (int *)((long)ppuVar23 + 0x3c);
                          do {
                            cVar2 = '\x01';
                            bVar5 = (bool)ExclusiveMonitorPass(piVar29,0x10);
                            if (bVar5) {
                              *piVar29 = *piVar29 + 1;
                              cVar2 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar2 != '\0');
                        }
                      }
LAB_7101d6e130:
                      std::recursive_mutex::unlock();
                    }
                  }
                  ppuVar23 = local_d0;
                  iVar7 = DAT_7106dd53ac;
                  if (local_d0 == (undefined **)0x0) {
                    iVar7 = 0;
                  }
                  else {
                    ppuVar31 = local_d0 + 7;
                    do {
                      cVar2 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(ppuVar31,0x10);
                      if (bVar5) {
                        *(int *)ppuVar31 = *(int *)ppuVar31 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (((local_d0 != (undefined **)0x0) && (DAT_7106dd53a8 == '\x01')) &&
                       (local_e4 == DAT_7106dd53ac)) {
                      local_d0 = local_d0 + 7;
                      do {
                        cVar2 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(local_d0,0x10);
                        if (bVar5) {
                          *(int *)local_d0 = *(int *)local_d0 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                    }
                  }
                  local_d0 = (undefined **)0x0;
                  *(undefined4 *)(plVar37 + 9) = uVar40;
                }
                else {
                  if ((((ulong)puVar13 ^ uVar43) & 0xffffffffff) != 0) goto LAB_7101d6c8f0;
LAB_7101d6cb3c:
                  lVar21 = lVar21 + uVar44 * 0x150;
                  FUN_71024076d0((undefined4 *)&local_c0,*(ulong *)(lVar21 + 8));
                  iVar7 = *(int *)(lVar21 + 0x38);
                  if (((iVar7 != 0) && (((uint)local_98 != -1 || (local_98._4_4_ != -1)))) &&
                     (local_b0 != (undefined **)0x0)) {
                    uVar19 = (**(code **)(*local_b0 + 0x20))();
                    fVar46 = 0.0;
                    if (((uVar19 & 1) == 0) &&
                       (fVar46 = 0.0, *(char *)(*DAT_710593b438 + 1) != '\0')) {
                      fVar46 = (float)local_90;
                    }
                    if (((local_b0 != (undefined **)0x0) &&
                        (uVar19 = (**(code **)(*local_b0 + 0x20))(), (uVar19 & 1) == 0)) &&
                       (*(char *)(*DAT_710593b438 + 1) != '\0')) {
                      fVar46 = fVar46 + (float)iVar7;
                      if (((local_a8._4_4_ == 0x876500) && (DAT_7106dd53a8 == '\x01')) &&
                         (((int)local_a8 == DAT_7106dd53ac &&
                          ((local_a0 == '\0' && (local_b0 != (undefined **)0x0)))))) {
                        fVar47 = local_90._4_4_;
                        fVar4 = (float)local_88;
                        uVar19 = (**(code **)(*local_b0 + 0x20))();
                        ppuVar23 = local_b0;
                        if ((uVar19 & 1) == 0) {
                          std::recursive_mutex::lock();
                          lVar21 = DAT_7106dd5408;
                          uVar11 = *(uint *)(DAT_7106dd5408 + 0x18);
                          uVar45 = *(uint *)(DAT_7106dd5408 + 0x14);
                          uVar44 = (ulong)uVar45;
                          uVar19 = (ulong)(uVar45 + 0x20) + 8;
                          if (uVar45 < uVar11) {
                            if (uVar19 < uVar11) goto LAB_7101d6d810;
                          }
                          else {
                            if (*(uint *)(DAT_7106dd5408 + 0x10) < uVar19) {
                              if (uVar11 < 0x29) goto LAB_7101d6d874;
                              *(undefined4 *)(*(long *)(DAT_7106dd5408 + 8) + uVar44) = 0x64716e62;
                              uVar44 = 0;
                            }
LAB_7101d6d810:
                            puVar39 = (undefined8 *)(*(long *)(lVar21 + 8) + uVar44);
                            puVar39[2] = ppuVar23;
                            *(undefined4 *)((long)puVar39 + 0x24) = 0;
                            *puVar39 = 0x2070716e62;
                            puVar39[1] = 0x8756c6f76;
                            uVar11 = (int)uVar44 + 0x28;
                            *(float *)(puVar39 + 4) = fVar47 + fVar46 + fVar4;
                            uVar45 = *(uint *)(lVar21 + 0x10);
                            uVar9 = 0;
                            if (uVar45 != 0) {
                              uVar9 = uVar11 / uVar45;
                            }
                            *(uint *)(lVar21 + 0x14) = uVar11 - uVar9 * uVar45;
                            if (ppuVar23 != (undefined **)0x0) {
                              piVar29 = (int *)((long)ppuVar23 + 0x3c);
                              do {
                                cVar2 = '\x01';
                                bVar5 = (bool)ExclusiveMonitorPass(piVar29,0x10);
                                if (bVar5) {
                                  *piVar29 = *piVar29 + 1;
                                  cVar2 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar2 != '\0');
                            }
                          }
LAB_7101d6d874:
                          std::recursive_mutex::unlock();
                        }
                      }
                      local_90 = CONCAT44(local_90._4_4_,fVar46);
                    }
                  }
                  iVar7 = DAT_7106dd53ac;
                  if (local_b0 == (undefined **)0x0) {
                    iVar7 = 0;
                    ppuVar31 = (undefined **)0x0;
                  }
                  else {
                    ppuVar23 = local_b0 + 7;
                    do {
                      cVar2 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(ppuVar23,0x10);
                      if (bVar5) {
                        *(int *)ppuVar23 = *(int *)ppuVar23 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                      ppuVar31 = local_b0;
                    } while (cVar2 != '\0');
                  }
                  ppuVar23 = local_b0;
                  if (((ppuVar31 != (undefined **)0x0) && (DAT_7106dd53a8 == '\x01')) &&
                     ((int)local_a8 == DAT_7106dd53ac)) {
                    ppuVar31 = ppuVar31 + 7;
                    do {
                      cVar2 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(ppuVar31,0x10);
                      if (bVar5) {
                        *(int *)ppuVar31 = *(int *)ppuVar31 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
LAB_7101d6da68:
                  local_b8 = &PTR_FUN_7104f73d50;
                  local_b0 = (undefined **)0x0;
                  local_a0 = '\0';
                  *(undefined4 *)(plVar37 + 9) = local_c0._0_4_;
                  fVar46 = (float)local_90;
                  uVar26 = local_88._4_4_;
                  uVar45 = (uint)local_98;
                  uVar11 = local_98._4_4_;
                  local_74 = (float)local_88;
                  local_d8 = local_90._4_4_;
                }
                if (ppuVar23 == (undefined **)0x0) goto LAB_7101d6c984;
                if (*(int *)((long)plVar37 + 100) == 0x876500) {
                  if ((int)plVar37[0xc] == DAT_7106dd53ac) {
                    if ((plVar37[0xb] != 0) && (DAT_7106dd53a8 == '\x01')) {
                      piVar29 = (int *)(plVar37[0xb] + 0x38);
                      do {
                        cVar2 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(piVar29,0x10);
                        if (bVar5) {
                          *piVar29 = *piVar29 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                    }
                    *(undefined1 *)(plVar37 + 0xd) = 0;
                    plVar37[0xb] = 0;
                  }
                  else {
                    *(int *)(plVar37 + 0xc) = DAT_7106dd53ac;
                  }
                  plVar37[0xb] = (long)ppuVar23;
                  ppuVar31 = ppuVar23 + 7;
                  do {
                    cVar2 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(ppuVar31,0x10);
                    if (bVar5) {
                      *(int *)ppuVar31 = *(int *)ppuVar31 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  goto LAB_7101d6ca78;
                }
              }
              *(uint *)(plVar37 + 0xe) = uVar45;
              *(uint *)((long)plVar37 + 0x74) = uVar11;
              *(float *)(plVar37 + 0xf) = fVar46;
              *(float *)((long)plVar37 + 0x7c) = local_d8;
              *(float *)(plVar37 + 0x10) = local_74;
              *(undefined4 *)((long)plVar37 + 0x84) = uVar26;
              if (((ppuVar23 != (undefined **)0x0) && (DAT_7106dd53a8 == '\x01')) &&
                 (iVar7 == DAT_7106dd53ac)) {
                ppuVar23 = ppuVar23 + 7;
                do {
                  cVar2 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(ppuVar23,0x10);
                  if (bVar5) {
                    *(int *)ppuVar23 = *(int *)ppuVar23 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
            }
          }
        }
      }
      *(undefined4 *)(param_1 + 0x54) = 1;
      *(undefined1 *)(param_1 + 0x92) = 0;
LAB_7101d6cad0:
      FUN_7101d703f0((long)param_1);
      return;
    }
    if (uVar11 != 4) {
      return;
    }
  }
  switch(iVar7) {
  case 0:
    if (bVar5) {
      if ((int)param_1[0x54] == 1) {
        if ((int)param_1[0x9a] < 1) {
          iVar7 = 0x14e6;
        }
        else {
          iVar7 = (int)param_1[0x9a] + 500;
          if (0x3bf5 < iVar7) {
            iVar7 = 0x3bf6;
          }
        }
        *(int *)(param_1 + 0x9a) = iVar7;
        iVar8 = FUN_7103315750(*(long *)(DAT_710532f8d0 + 8));
        iVar7 = *(int *)((long)param_1 + 0x4cc);
        uVar45 = iVar8 - (int)param_1[0x9a];
        uVar11 = uVar45 & ((int)uVar45 >> 0x1f ^ 0xffffffffU);
        param_2 = (ulong)uVar11;
        if (iVar7 - 1U < 2) {
          if ((int)uVar45 < 1) {
LAB_7101d6b6c4:
            uVar11 = 0xffffeb1a;
            goto LAB_7101d6b6cc;
          }
        }
        else if (1 < iVar7 - 3U) {
          if (iVar7 != 0) break;
          if (((int)uVar45 < 1) && (0 < (int)param_1[0x56])) goto LAB_7101d6b6c4;
        }
LAB_7101d6b7f4:
        FUN_7103315450(*(long **)(DAT_710532f8d0 + 8),uVar11,param_3,param_4,param_5,param_6,param_7
                       ,param_8);
        param_2 = extraout_x1_08;
      }
    }
    else {
      uVar11 = FUN_7103315750(*(long *)(DAT_710532f8d0 + 8));
      if (uVar11 < 3000) {
        uVar11 = 0;
LAB_7101d6b6cc:
        FUN_7101d70070(param_1,uVar11,param_3,param_4,param_5,param_6,param_7,param_8);
        goto LAB_7101d6b6d0;
      }
switchD_7101d6b148_caseD_3:
      param_3 = (long *********)(ulong)*(uint *)(param_1 + 0x56);
      param_4 = (byte ****)0x0;
      FUN_7101d6e4a0(param_1,*(undefined4 *)((long)param_1 + 0x2ac),(long ****)param_3,
                     (byte ****)0x0,param_5,param_6,param_7,param_8);
      param_2 = extraout_x1_02;
    }
    break;
  case 1:
    if (((int)param_1[0x53] == 1) || ((char)param_1[0x6a] != '\0')) {
      uVar11 = *(uint *)((long)param_1 + 0x2a4);
      param_2 = (ulong)uVar11;
      param_3 = (long *********)(ulong)*(uint *)(param_1 + 0x55);
      if (uVar11 == *(uint *)((long)param_1 + 0x2ac)) {
        if (*(uint *)(param_1 + 0x55) == *(uint *)(param_1 + 0x56)) goto LAB_7101d6b12c;
        param_4 = (byte ****)0x0;
        FUN_7101d6e4a0(param_1,uVar11,(long ****)param_3,(byte ****)0x0,param_5,param_6,param_7,
                       param_8);
      }
      else {
        param_4 = (byte ****)0x0;
        FUN_7101d6e4a0(param_1,uVar11,(long ****)param_3,(byte ****)0x0,param_5,param_6,param_7,
                       param_8);
        FUN_7101d70b60(param_1,extraout_x1_01,param_3,param_4,param_5,param_6,param_7,param_8);
      }
LAB_7101d6b6d0:
      FUN_7101d6e660(param_1);
      param_2 = extraout_x1_07;
      break;
    }
LAB_7101d6b12c:
    switch((int)param_1[0x54]) {
    case 0:
      param_3 = (long *********)(ulong)*(uint *)(param_1 + 0x56);
      param_4 = (byte ****)0x0;
      FUN_7101d6e4a0(param_1,*(undefined4 *)((long)param_1 + 0x2ac),(long ****)param_3,
                     (byte ****)0x0,param_5,param_6,param_7,param_8);
      param_2 = extraout_x1_00;
      if (*(int *)((long)param_1 + 0x29c) == 0) goto LAB_7101d6b6d0;
      break;
    case 1:
      FUN_71033147c0(*(long *)(DAT_710532f8d0 + 8));
      lVar21 = param_1[0x3c];
      pcVar15 = "mark_play";
      *(undefined4 *)(param_1 + 0x54) = 2;
      goto LAB_7101d6bb30;
    case 2:
      FUN_71033148b0(*(long *)(DAT_710532f8d0 + 8));
      lVar21 = param_1[0x3c];
      *(undefined4 *)(param_1 + 0x54) = 1;
      pcVar15 = "mark_pause";
LAB_7101d6bb30:
      FUN_7103778300(0x3f800000,lVar21,(long)pcVar15);
      param_2 = extraout_x1_12;
      break;
    case 3:
      goto switchD_7101d6b148_caseD_3;
    }
    break;
  case 2:
    if (!bVar5) {
      FUN_7101d70230(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      goto LAB_7101d6b6d0;
    }
    if ((int)param_1[0x54] == 1) {
      if ((int)param_1[0x9a] < 1) {
        iVar7 = 0x122a;
      }
      else {
        iVar7 = (int)param_1[0x9a] + 500;
        if (0x3939 < iVar7) {
          iVar7 = 0x393a;
        }
      }
      *(int *)(param_1 + 0x9a) = iVar7;
      iVar7 = FUN_7103315750(*(long *)(DAT_710532f8d0 + 8));
      uVar11 = (int)param_1[0x9a] + iVar7;
      param_2 = (ulong)uVar11;
      uVar45 = *(uint *)((long)param_1 + 0x4cc);
      if (2 < uVar45) {
        if (uVar45 == 3) goto LAB_7101d6b7f4;
        if (uVar45 != 4) break;
      }
      plVar18 = *(long **)(DAT_710532f8d0 + 8);
      uVar45 = 0;
      if (((plVar18[0x19] & 0xff00000000000000U) == 0xd900000000000000) &&
         ((plVar18[0x19] & 0xffffffffffU) != 0)) {
        uVar45 = *(uint *)(plVar18 + 0x1b);
      }
      if (uVar11 <= uVar45) {
        uVar45 = uVar11;
      }
      FUN_7103315450(plVar18,uVar45,param_3,param_4,param_5,param_6,param_7,param_8);
      param_2 = extraout_x1_06;
    }
    break;
  case 3:
    switch(*(undefined4 *)((long)param_1 + 0x4cc)) {
    case 0:
      *(undefined4 *)((long)param_1 + 0x4cc) = 1;
      FUN_71033152c0(*(long *)(DAT_710532f8d0 + 8),0);
      lVar21 = param_1[0x40];
      pcVar15 = "mark_repeat_all";
      goto LAB_7101d6b3a4;
    case 1:
      *(undefined4 *)((long)param_1 + 0x4cc) = 2;
      FUN_71033152c0(*(long *)(DAT_710532f8d0 + 8),0);
      lVar21 = param_1[0x40];
      pcVar15 = "mark_shuffle";
LAB_7101d6b3a4:
      FUN_7103778300(0x3f800000,lVar21,(long)pcVar15);
      param_2 = extraout_x1_05;
      break;
    case 2:
      *(undefined4 *)((long)param_1 + 0x4cc) = 3;
      FUN_71033152c0(*(long *)(DAT_710532f8d0 + 8),1);
      FUN_7103778300(0x3f800000,param_1[0x40],0x710442267d);
      FUN_7101d6fd00(param_1);
      lVar21 = *(long *)param_1[0x4e];
      param_2 = extraout_x1_03;
      if (lVar21 != 0) {
        bVar24 = *(byte *)(lVar21 + 0x58) & 0xfe;
LAB_7101d6b374:
        *(byte *)(lVar21 + 0x58) = bVar24;
      }
      break;
    case 3:
      *(undefined4 *)((long)param_1 + 0x4cc) = 0;
      FUN_71033152c0(*(long *)(DAT_710532f8d0 + 8),0);
      FUN_7103778300(0x3f800000,param_1[0x40],0x71042d65de);
      FUN_7101d6fd00(param_1);
      lVar21 = *(long *)param_1[0x4e];
      param_2 = extraout_x1_04;
      if (lVar21 != 0) {
        bVar24 = *(byte *)(lVar21 + 0x58) | 1;
        goto LAB_7101d6b374;
      }
      break;
    default:
      goto switchD_7101d6af2c_default;
    }
    if (0x12 < *(uint *)((long)param_1 + 0x1a4)) goto LAB_7101d6e3f8;
    *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x1a4) * 4 + 0x158) = 1;
  }
switchD_7101d6af2c_default:
  if (((int)param_1[0x54] != 1) ||
     ((uVar19 = *(ulong *)(*(long *)(DAT_710532f8d0 + 8) + 200),
      (uVar19 & 0xff00000000000000) == 0xd900000000000000 && ((uVar19 & 0xffffffffff) != 0))))
  goto switchD_7101d6b728_default;
  switch(*(undefined4 *)((long)param_1 + 0x4cc)) {
  case 0:
    iVar7 = 0;
    if (4 < *(uint *)(param_1 + 0x52)) goto switchD_7101d6b790_caseD_3;
    uVar19 = (ulong)*(int *)((long)param_1 + 0x2ac);
    plVar18 = (long *)*param_1;
    switch(*(uint *)(param_1 + 0x52)) {
    default:
      uVar44 = (plVar18[1] - *plVar18 >> 4) * -0x5555555555555555;
      if (uVar19 <= uVar44 && uVar44 - uVar19 != 0) {
        lVar21 = *plVar18 + uVar19 * 0x30;
        lVar21 = *(long *)(lVar21 + 0x10) - *(long *)(lVar21 + 8);
LAB_7101d6bfe4:
        iVar8 = (int)(lVar21 >> 3) * -0x55555555;
        if (0 < iVar8) goto LAB_7101d6bff0;
      }
      goto LAB_7101d6c02c;
    case 1:
      uVar44 = (plVar18[4] - plVar18[3] >> 3) * 0x2e8ba2e8ba2e8ba3;
      if (uVar19 <= uVar44 && uVar44 - uVar19 != 0) {
        lVar21 = plVar18[3] + uVar19 * 0x58;
        lVar21 = *(long *)(lVar21 + 0x40) - *(long *)(lVar21 + 0x38);
        goto LAB_7101d6bfe4;
      }
LAB_7101d6c02c:
      iVar7 = 0;
      break;
    case 2:
      uVar44 = (plVar18[7] - plVar18[6] >> 3) * -0x70a3d70a3d70a3d7;
      if ((uVar44 < uVar19 || uVar44 - uVar19 == 0) ||
         (lVar21 = plVar18[6] + uVar19 * 200,
         iVar8 = (int)((ulong)(*(long *)(lVar21 + 0xb0) - *(long *)(lVar21 + 0xa8)) >> 4), iVar8 < 1
         )) goto LAB_7101d6c02c;
LAB_7101d6bff0:
      param_1[0x95] = 0xffffffff;
      param_1[0x97] = param_1[0x96];
      iVar7 = ((int)param_1[0x56] + 1) - iVar8;
      *(undefined4 *)(param_1 + 0x99) = 0;
      do {
        iVar7 = iVar7 + iVar8;
      } while (iVar7 < 0);
      iVar25 = 0;
      if (iVar8 != 0) {
        iVar25 = iVar7 / iVar8;
      }
      iVar7 = iVar7 - iVar25 * iVar8;
      if (0 < iVar7) goto switchD_7101d6b728_caseD_1;
      break;
    case 3:
      break;
    }
switchD_7101d6b790_caseD_3:
    *(undefined4 *)(param_1 + 0x54) = 3;
    FUN_7103778300(0x3f800000,param_1[0x3c],0x71043f0ced);
    *(int *)(param_1 + 0x56) = iVar7;
LAB_7101d6c050:
    FUN_7101d6e660(param_1);
switchD_7101d6b728_default:
    cVar2 = (char)param_1[0x8f];
    break;
  case 1:
  case 2:
switchD_7101d6b728_caseD_1:
    FUN_7101d70230(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    goto LAB_7101d6c050;
  case 3:
    param_3 = (long *********)(ulong)*(uint *)(param_1 + 0x56);
    param_4 = (byte ****)0x0;
    FUN_7101d6e4a0(param_1,*(undefined4 *)((long)param_1 + 0x2ac),(long ****)param_3,(byte ****)0x0,
                   param_5,param_6,param_7,param_8);
    cVar2 = (char)param_1[0x8f];
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x54) = 3;
    FUN_7103778300(0x3f800000,param_1[0x3c],0x71043f0ced);
    FUN_7101d6fd00(param_1);
    cVar2 = (char)param_1[0x8f];
    break;
  default:
    goto switchD_7101d6b728_default;
  }
  if ((cVar2 != '\0') &&
     (iVar7 = *(int *)((long)param_1 + 0x48c), iVar8 = iVar7 + -1,
     *(int *)((long)param_1 + 0x48c) = iVar8, iVar8 == 0 || iVar7 < 1)) {
    FUN_7103315030(DAT_710532f8d0,param_1[0x90],(long ****)param_3,param_4,param_5,param_6,param_7,
                   param_8);
    uVar11 = *(uint *)(param_1 + 0x91);
    if ((int)uVar11 < 0) {
      plVar18 = *(long **)(DAT_710532f8d0 + 8);
      iVar7 = 0;
      if (((plVar18[0x19] & 0xff00000000000000U) == 0xd900000000000000) &&
         ((plVar18[0x19] & 0xffffffffffU) != 0)) {
        iVar7 = (int)plVar18[0x1b];
      }
      uVar45 = uVar11 + iVar7 & ((int)(uVar11 + iVar7) >> 0x1f ^ 0xffffffffU);
LAB_7101d6c0f8:
      FUN_7103315450(plVar18,uVar45,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else if (uVar11 != 0) {
      plVar18 = *(long **)(DAT_710532f8d0 + 8);
      uVar45 = 0;
      if (((plVar18[0x19] & 0xff00000000000000U) == 0xd900000000000000) &&
         ((plVar18[0x19] & 0xffffffffffU) != 0)) {
        uVar45 = *(uint *)(plVar18 + 0x1b);
      }
      if ((int)uVar11 <= (int)uVar45) {
        uVar45 = uVar11;
      }
      goto LAB_7101d6c0f8;
    }
    *(undefined4 *)(param_1 + 0x54) = 1;
    FUN_7103778300(0x3f800000,param_1[0x3c],0x71042a3372);
    *(undefined1 *)(param_1 + 0x8f) = 0;
    if ((((int)param_1[0x52] == 4) && (*(char *)((long)param_1 + 0x2b6) != '\0')) &&
       (*(char *)((long)param_1 + 0x4e4) == '\0')) {
      lVar20 = param_1[0x4f];
      lVar33 = *(long *)(lVar20 + 0x1b8);
      lVar21 = lVar20 + 0x1b8;
      uVar14 = extraout_x1_18;
      lVar42 = lVar21;
      if (lVar33 != 0) {
        do {
          if (0 < *(int *)(lVar33 + 0x20)) {
            lVar42 = lVar33;
          }
          lVar33 = *(long *)(lVar33 + (ulong)(*(int *)(lVar33 + 0x20) < 1) * 8);
        } while (lVar33 != 0);
        if (((lVar42 != lVar21) && (*(int *)(lVar42 + 0x20) < 2)) &&
           (plVar18 = *(long **)(lVar42 + 0x28), plVar18 != (long *)0x0)) {
          (**(code **)(*plVar18 + 0x1f8))(plVar18,1);
          param_3 = (long *********)0x0;
          (**(code **)(*plVar18 + 0x388))(plVar18,0);
          lVar20 = param_1[0x4f];
          lVar21 = lVar20 + 0x1b8;
          uVar14 = extraout_x1_19;
        }
      }
      *(undefined1 *)((long)param_1 + 0x4e4) = 1;
      lVar33 = *(long *)(lVar20 + 0x1b8);
      lVar42 = lVar21;
      if (lVar33 == 0) {
LAB_7101d6c210:
        FUN_7103776290(&local_c0,uVar14,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      }
      else {
        do {
          if (0 < *(int *)(lVar33 + 0x20)) {
            lVar42 = lVar33;
          }
          lVar33 = *(long *)(lVar33 + (ulong)(*(int *)(lVar33 + 0x20) < 1) * 8);
        } while (lVar33 != 0);
        if (((lVar42 == lVar21) || (1 < *(int *)(lVar42 + 0x20))) || (*(long *)(lVar42 + 0x28) == 0)
           ) goto LAB_7101d6c210;
        FUN_7103776640(&local_c0,lVar20 + 0x160,*(byte *****)(*(long *)(lVar42 + 0x28) + 0x88),
                       param_3,param_4,param_5,param_6,param_7,param_8);
      }
      ppuVar23 = local_b8;
      if (*(long *)local_b8[3] != 0) {
        *(undefined1 *)(*(long *)local_b8[3] + 0x59) = 0xff;
      }
      local_c0 = (long ********)&PTR_FUN_710523d988;
      local_b8 = (undefined **)0x0;
      if (ppuVar23 != (undefined **)0x0) {
        puVar12 = ppuVar23[3];
        ppuVar23[2] = (undefined *)&PTR_FUN_710523d9a8;
        ppuVar23[3] = (undefined *)0x0;
        if (puVar12 != (undefined *)0x0) {
          FUN_710392eb40((ulong)puVar12);
        }
        FUN_710392eb40((ulong)ppuVar23);
      }
      FUN_7103776910(&local_c0,*(long *)param_1[0x38] + 8,(long ****)"set_txt_04",param_3,param_4,
                     param_5,param_6,param_7,param_8);
      ppuVar23 = local_b8;
      lVar21 = (long)*local_b8;
      if (lVar21 != 0) {
        *(byte *)(lVar21 + 0x58) = *(byte *)(lVar21 + 0x58) | 1;
      }
      local_c0 = (long ********)&PTR_FUN_710523d9a8;
      local_b8 = (undefined **)0x0;
      if (ppuVar23 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar23);
      }
    }
  }
  FUN_7101d6f820(param_1,1,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7101d703f0((long)param_1);
  if ((int)param_1[0x54] == 1) {
    FUN_7101d6fd00(param_1);
  }
  if (0x12 < *(uint *)((long)param_1 + 0x1a4)) {
LAB_7101d6e3f8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar11 = *(uint *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x1a4) * 4 + 0x158);
  if (*(uint *)(param_1 + 0x35) != uVar11) {
    *(uint *)(param_1 + 0x36) = *(uint *)(param_1 + 0x35);
    *(uint *)(param_1 + 0x35) = uVar11;
    if (3 < uVar11) goto LAB_7101d6e3f8;
    lVar21 = param_1[(long)(int)uVar11 * 2 + 0x24];
    param_1[0x1f] = param_1[(long)(int)uVar11 * 2 + 0x23];
    param_1[0x20] = lVar21;
    pcVar22 = (code *)param_1[0x21];
    uVar19 = param_1[0x22] & 1;
    if (uVar19 != 0 || pcVar22 != (code *)0x0) {
      if (uVar19 != 0) {
        pcVar22 = *(code **)(pcVar22 + *(long *)(param_1[0x1e] + (param_1[0x22] >> 1)));
      }
      (*pcVar22)();
    }
    *(undefined4 *)((long)param_1 + 0x1ac) = 0;
  }
  if (*(char *)((long)param_1 + 0x1b4) != '\0') {
    pcVar22 = (code *)param_1[0x21];
    uVar19 = param_1[0x22] & 1;
    if (uVar19 != 0 || pcVar22 != (code *)0x0) {
      if (uVar19 != 0) {
        pcVar22 = *(code **)(pcVar22 + *(long *)(param_1[0x1e] + (param_1[0x22] >> 1)));
      }
      (*pcVar22)();
    }
    *(undefined4 *)((long)param_1 + 0x1ac) = 0;
    *(undefined1 *)((long)param_1 + 0x1b4) = 0;
  }
  if (param_1[0x1e] != 0) {
    pcVar22 = (code *)param_1[0x1f];
    uVar19 = param_1[0x20] & 1;
    if (uVar19 != 0 || pcVar22 != (code *)0x0) {
      if (uVar19 != 0) {
        pcVar22 = *(code **)(pcVar22 + *(long *)(param_1[0x1e] + (param_1[0x20] >> 1)));
      }
      (*pcVar22)();
    }
  }
  uVar11 = *(uint *)(param_1 + 0x52);
  bVar5 = false;
  *(int *)((long)param_1 + 0x1ac) = *(int *)((long)param_1 + 0x1ac) + 1;
  if ((1 < uVar11) || (DAT_710593b534 != 0)) goto LAB_7101d6c4c0;
  iVar7 = 0;
  if (uVar11 < 5) {
    uVar19 = (ulong)*(int *)((long)param_1 + 0x2ac);
    plVar18 = (long *)*param_1;
    switch(uVar11) {
    default:
      uVar44 = (plVar18[1] - *plVar18 >> 4) * -0x5555555555555555;
      if (uVar19 <= uVar44 && uVar44 - uVar19 != 0) {
        lVar42 = *plVar18 + uVar19 * 0x30;
        lVar21 = *(long *)(lVar42 + 8);
        lVar42 = *(long *)(lVar42 + 0x10);
        goto LAB_7101d6c49c;
      }
LAB_7101d6c4b4:
      iVar7 = 0;
      break;
    case 1:
      uVar44 = (plVar18[4] - plVar18[3] >> 3) * 0x2e8ba2e8ba2e8ba3;
      if (uVar44 < uVar19 || uVar44 - uVar19 == 0) goto LAB_7101d6c4b4;
      lVar42 = plVar18[3] + uVar19 * 0x58;
      lVar21 = *(long *)(lVar42 + 0x38);
      lVar42 = *(long *)(lVar42 + 0x40);
LAB_7101d6c49c:
      iVar7 = (int)((ulong)(lVar42 - lVar21) >> 3) * -0x55555555;
      break;
    case 2:
      uVar44 = (plVar18[7] - plVar18[6] >> 3) * -0x70a3d70a3d70a3d7;
      if (uVar44 < uVar19 || uVar44 - uVar19 == 0) goto LAB_7101d6c4b4;
      lVar21 = plVar18[6] + uVar19 * 200;
      iVar7 = (int)((ulong)(*(long *)(lVar21 + 0xb0) - *(long *)(lVar21 + 0xa8)) >> 4);
      break;
    case 3:
      break;
    }
  }
  bVar5 = (int)param_1[0x56] < iVar7;
LAB_7101d6c4c0:
  if (bVar5 != (bool)*(char *)((long)param_1 + 0x4e2)) {
    *(bool *)((long)param_1 + 0x4e2) = bVar5;
    pcVar15 = "bgm_btn_on";
    if (bVar5 == false) {
      pcVar15 = "bgm_btn_off";
    }
    FUN_7103778300(0x3f800000,*(long *)(*(long *)param_1[0x38] + 0x10),(long)pcVar15);
  }
  return;
}

