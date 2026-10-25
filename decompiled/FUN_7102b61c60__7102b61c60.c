// addr:      7102b61c60
// offset:    0x2b61c60
// name:      FUN_7102b61c60
// mangled:   
// signature: undefined __cdecl FUN_7102b61c60(long * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined * param_6, long * * * param_7, long * * * param_8)


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7102b61c60(long *param_1,long *param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined *param_6,long ***param_7,long ***param_8)

{
  char *pcVar1;
  uint *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  long *****ppppplVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  void *pvVar13;
  undefined8 *puVar14;
  long *extraout_x1;
  long *extraout_x1_00;
  long *plVar15;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  long *********ppppppppplVar16;
  long ****pppplVar17;
  undefined *puVar18;
  long ***ppplVar19;
  long lVar20;
  uint *puVar21;
  long ********pppppppplVar22;
  uint uVar23;
  void *pvVar24;
  uint uVar25;
  ulong uVar26;
  size_t sVar27;
  int iVar28;
  ulong uVar29;
  uint uVar30;
  uint *puVar31;
  undefined4 *puVar32;
  long ****local_240;
  long ****local_238;
  long ****local_230;
  long local_228;
  undefined4 *local_220;
  undefined4 *local_218;
  undefined4 *puStack_210;
  long ********local_208;
  long ********local_200;
  long ********local_1f8;
  long ********local_1f0;
  undefined4 **ppuStack_1e8;
  int local_1c4;
  char local_1c0 [64];
  int local_180;
  char local_17c [64];
  int local_13c;
  char local_138 [64];
  uint local_f8 [2];
  byte ***apppbStack_f0 [8];
  long ***local_b0;
  long ***appplStack_a8 [9];
  
  local_218 = (undefined4 *)0x0;
  puStack_210 = (undefined4 *)0x0;
  local_220 = (undefined4 *)0x0;
  uVar29 = (ulong)param_4 & 0xffffffff;
  iVar28 = (int)param_4;
  plVar15 = param_2;
  pppplVar17 = param_5;
  local_230 = param_3;
  if (param_2[2] - *param_2 != 0) {
    uVar26 = param_2[2] - *param_2 >> 3;
    ppuStack_1e8 = &puStack_210;
    local_1f0 = (long ********)0x0;
    if (0xf0f0f0f0f0f0f0 < uVar26) goto LAB_7102b62860;
    ppplVar19 = (long ***)(uVar26 * 0x110);
    if (ppplVar19 == (long ***)0x0) {
      ppplVar19 = (long ***)0x1;
    }
    local_208 = (long ********)
                FUN_710392e290(0x10,ppplVar19,param_3,param_4,param_5,param_6,param_7,param_8);
    if (local_208 == (long ********)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_f8[0] = 0;
        param_3 = &local_b0;
        local_b0 = ppplVar19;
        uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_f8);
        if (((uVar12 & 1) != 0) &&
           (local_208 = (long ********)
                        FUN_710392e290(0x10,ppplVar19,param_3,param_4,pppplVar17,param_6,param_7,
                                       param_8), local_208 != (long ********)0x0))
        goto LAB_7102b61d30;
      }
      local_208 = (long ********)0x0;
    }
LAB_7102b61d30:
    local_1f0 = local_208 + uVar26 * 0x22;
    local_200 = local_208;
    local_1f8 = local_208;
    FUN_7102b62870((long *)&local_220,&local_208);
    if (local_1f8 != local_200) {
      local_1f8 = local_1f8 +
                  ((ulong)((long)local_1f8 + (-0x110 - (long)local_200)) / 0x110 ^
                  0xffffffffffffffff) * 0x22;
    }
    plVar15 = extraout_x1;
    if (local_208 != (long ********)0x0) {
      FUN_710392eb40((ulong)local_208);
      plVar15 = extraout_x1_00;
    }
  }
  uVar5 = *(uint *)((long)local_230 + 0x24c);
  local_228 = param_1[2];
  uVar6 = *(uint *)((long)local_230 + uVar29 * 0x10 + 0x254);
  local_208 = (long ********)((ulong)local_208 & 0xffffff0000000000);
  local_1c4 = 0;
  local_1c0[0] = '\0';
  local_180 = 0;
  local_17c[0] = '\0';
  local_13c = 0;
  local_138[0] = '\0';
  uVar25 = (uint)param_5;
  if ((*(ulong *)(*(long *)(*(long *)(local_228 + 8) + uVar29 * 0x20 + 8) +
                 ((ulong)(long)(int)uVar25 >> 3 & 0x1ffffffffffffff8)) &
      1L << ((long)(int)uVar25 & 0x3fU)) == 0) {
LAB_7102b61fec:
    if (iVar28 == 0) goto LAB_7102b6216c;
LAB_7102b61ff4:
    if (iVar28 == 2) {
      lVar20 = 1;
      puVar31 = (uint *)&DAT_7104557924;
      goto LAB_7102b62178;
    }
    if (iVar28 == 1) {
      lVar20 = 2;
      puVar31 = &DAT_7104557928;
      goto LAB_7102b62178;
    }
  }
  else {
    local_238 = (long ****)CONCAT44(local_238._4_4_,iVar28);
    pcVar1 = "Ground";
    if (uVar5 != 1) {
      pcVar1 = "Island";
    }
    pcVar3 = "Island";
    if (uVar5 != 0) {
      pcVar3 = pcVar1;
    }
    puVar18 = &DAT_710426e064;
    if (iVar28 != 1) {
      puVar18 = &DAT_710439b3be;
    }
    param_6 = &DAT_71042b2c92;
    if (iVar28 != 2) {
      param_6 = puVar18;
    }
    param_4 = apppbStack_f0;
    uVar29 = (ulong)uVar6;
    param_3 = appplStack_a8;
    puVar18 = param_6;
    FUN_710176bcc0((uint *)&local_b0,plVar15,"Land_%s_%02d_%s",pcVar3,uVar29,param_6,param_7,param_8
                  );
    FUN_710176bcc0(local_f8,extraout_x1_01,"SP%d",(ulong)param_5 & 0xffffffff,uVar29,puVar18,param_7
                   ,param_8);
    FUN_7102b63800((int *)&local_208,0,param_3,(byte *)param_4,uVar29,puVar18,param_7,param_8);
    uVar29 = (ulong)uVar6;
    puVar18 = param_6;
    FUN_710176bcc0((uint *)&local_b0,extraout_x1_02,"Land_%s_%02d_%s",pcVar3,uVar29,param_6,param_7,
                   param_8);
    FUN_710176bcc0(local_f8,extraout_x1_03,"SP%d",(long ****)((ulong)param_5 & 0xffffffff),uVar29,
                   puVar18,param_7,param_8);
    FUN_7102b63800(&local_1c4,1,param_3,(byte *)param_4,uVar29,puVar18,param_7,param_8);
    uVar29 = (ulong)uVar6;
    puVar18 = param_6;
    FUN_710176bcc0((uint *)&local_b0,extraout_x1_04,"Land_%s_%02d_%s",pcVar3,uVar29,param_6,param_7,
                   param_8);
    FUN_710176bcc0(local_f8,extraout_x1_05,"SP%d",(ulong)param_5 & 0xffffffff,uVar29,puVar18,param_7
                   ,param_8);
    FUN_7102b63800(&local_180,2,param_3,(byte *)param_4,uVar29,puVar18,param_7,param_8);
    pppplVar17 = (long ****)(ulong)uVar6;
    FUN_710176bcc0((uint *)&local_b0,extraout_x1_06,"Land_%s_%02d_%s",pcVar3,pppplVar17,param_6,
                   param_7,param_8);
    FUN_710176bcc0(local_f8,extraout_x1_07,"SP%d",(ulong)param_5 & 0xffffffff,pppplVar17,param_6,
                   param_7,param_8);
    FUN_7102b63800(&local_13c,3,param_3,(byte *)param_4,pppplVar17,param_6,param_7,param_8);
    if (local_218 == puStack_210) {
      FUN_7102b63e10((long *)&local_220,(long)&local_208,param_3,param_4,pppplVar17,param_6,param_7,
                     param_8);
      iVar28 = (int)local_238;
      goto LAB_7102b61fec;
    }
    uVar29 = 0;
    while( true ) {
      pcVar1 = (char *)(((ulong)&local_208 | 4) + uVar29);
      cVar8 = *pcVar1;
      if (cVar8 == '\0') break;
      *(char *)((long)local_218 + uVar29 + 4) = cVar8;
      if (0x3e < (int)uVar29 + 1U) {
        uVar29 = (ulong)((int)uVar29 + 1);
        break;
      }
      cVar8 = pcVar1[1];
      if (cVar8 == '\0') {
        uVar29 = uVar29 + 1;
        break;
      }
      *(char *)((long)local_218 + uVar29 + 5) = cVar8;
      uVar29 = uVar29 + 2;
    }
    *(undefined1 *)((long)local_218 + (uVar29 & 0xffffffff) + 4) = 0;
    *local_218 = (int)uVar29;
    for (uVar29 = 0; local_1c0[uVar29] != '\0'; uVar29 = uVar29 + 2) {
      *(char *)((long)local_218 + uVar29 + 0x48) = local_1c0[uVar29];
      if (0x3e < (int)uVar29 + 1U) {
        uVar29 = (ulong)((int)uVar29 + 1);
        break;
      }
      if (local_1c0[uVar29 + 1] == '\0') {
        uVar29 = uVar29 + 1;
        break;
      }
      *(char *)((long)local_218 + uVar29 + 0x49) = local_1c0[uVar29 + 1];
    }
    *(undefined1 *)((long)local_218 + (uVar29 & 0xffffffff) + 0x48) = 0;
    local_218[0x11] = (int)uVar29;
    for (uVar29 = 0; local_17c[uVar29] != '\0'; uVar29 = uVar29 + 2) {
      *(char *)((long)local_218 + uVar29 + 0x8c) = local_17c[uVar29];
      if (0x3e < (int)uVar29 + 1U) {
        uVar29 = (ulong)((int)uVar29 + 1);
        break;
      }
      if (local_17c[uVar29 + 1] == '\0') {
        uVar29 = uVar29 + 1;
        break;
      }
      *(char *)((long)local_218 + uVar29 + 0x8d) = local_17c[uVar29 + 1];
    }
    *(undefined1 *)((long)local_218 + (uVar29 & 0xffffffff) + 0x8c) = 0;
    local_218[0x22] = (int)uVar29;
    for (uVar29 = 0; local_138[uVar29] != '\0'; uVar29 = uVar29 + 2) {
      *(char *)((long)local_218 + uVar29 + 0xd0) = local_138[uVar29];
      if (0x3e < (int)uVar29 + 1U) {
        uVar29 = (ulong)((int)uVar29 + 1);
        break;
      }
      if (local_138[uVar29 + 1] == '\0') {
        uVar29 = uVar29 + 1;
        break;
      }
      *(char *)((long)local_218 + uVar29 + 0xd1) = local_138[uVar29 + 1];
    }
    *(undefined1 *)((long)local_218 + (uVar29 & 0xffffffff) + 0xd0) = 0;
    local_218[0x33] = (int)uVar29;
    local_218 = local_218 + 0x44;
    iVar28 = (int)local_238;
    if ((int)local_238 != 0) goto LAB_7102b61ff4;
LAB_7102b6216c:
    lVar20 = 1;
    puVar31 = &DAT_7104557930;
LAB_7102b62178:
    puVar2 = puVar31 + lVar20;
    local_240 = local_230 + 0x1e;
    local_238 = local_230 + 0x1b;
    do {
      uVar7 = *puVar31;
      uVar29 = (ulong)uVar7;
      if (*(uint *)(*(long *)(local_228 + 8) + uVar29 * 4 + 0x60) == uVar25) {
        switch(uVar29) {
        case 0:
          iVar28 = *(int *)((long)local_230 + 0x24c);
          pppplVar17 = local_238;
          if (iVar28 != 0) {
            pppplVar17 = local_240;
          }
          puVar21 = (uint *)((long)*pppplVar17 + (long)*(int *)((long)local_230 + 0x254) * 0x34 + 8)
          ;
          break;
        case 1:
          iVar28 = *(int *)((long)local_230 + 0x24c);
          pppplVar17 = local_238;
          if (iVar28 != 0) {
            pppplVar17 = local_240;
          }
          puVar21 = (uint *)((long)*pppplVar17 +
                            (long)*(int *)((long)local_230 + 0x264) * 0x34 + 0xc);
          break;
        case 2:
          iVar28 = *(int *)((long)local_230 + 0x24c);
          pppplVar17 = local_238;
          if (iVar28 != 0) {
            pppplVar17 = local_240;
          }
          puVar21 = (uint *)((long)*pppplVar17 +
                            (long)*(int *)((long)local_230 + 0x264) * 0x34 + 0x10);
          break;
        case 3:
          iVar28 = *(int *)((long)local_230 + 0x24c);
          pppplVar17 = local_238;
          if (iVar28 != 0) {
            pppplVar17 = local_240;
          }
          puVar21 = (uint *)((long)*pppplVar17 +
                            (long)*(int *)((long)local_230 + 0x274) * 0x34 + 0x14);
          break;
        default:
          iVar28 = *(int *)((long)local_230 + 0x24c);
          uVar23 = 0;
          goto switchD_7102b622e8_caseD_1;
        }
        uVar23 = *puVar21;
        if (2 < uVar23 - 1) {
          uVar23 = 0;
        }
        switch(*(undefined4 *)(&DAT_7104467680 + uVar29 * 4)) {
        case 0:
          ppppplVar9 = &local_238;
          if (iVar28 != 0) {
            ppppplVar9 = &local_240;
          }
          puVar21 = (uint *)((long)**ppppplVar9 + (long)*(int *)((long)local_230 + 0x254) * 0x34 + 8
                            );
          break;
        case 1:
switchD_7102b622e8_caseD_1:
          ppppplVar9 = &local_238;
          if (iVar28 != 0) {
            ppppplVar9 = &local_240;
          }
          puVar21 = (uint *)((long)**ppppplVar9 +
                            (long)*(int *)((long)local_230 + 0x264) * 0x34 + 0xc);
          break;
        case 2:
          ppppplVar9 = &local_238;
          if (iVar28 != 0) {
            ppppplVar9 = &local_240;
          }
          puVar21 = (uint *)((long)**ppppplVar9 +
                            (long)*(int *)((long)local_230 + 0x264) * 0x34 + 0x10);
          break;
        case 3:
          ppppplVar9 = &local_238;
          if (iVar28 != 0) {
            ppppplVar9 = &local_240;
          }
          puVar21 = (uint *)((long)**ppppplVar9 +
                            (long)*(int *)((long)local_230 + 0x274) * 0x34 + 0x14);
          break;
        default:
          goto switchD_7102b622e8_default;
        }
        uVar30 = *puVar21;
        if (2 < uVar30 - 1) {
switchD_7102b622e8_default:
          uVar30 = 0;
        }
        FUN_7102b63970((int *)&local_208,(ulong)uVar5,(ulong)uVar6,0,uVar25,uVar7,(ulong)uVar23,
                       (ulong)uVar30);
        FUN_7102b63970(&local_1c4,(ulong)uVar5,(ulong)uVar6,1,uVar25,uVar7,(ulong)uVar23,
                       (ulong)uVar30);
        FUN_7102b63970(&local_180,(ulong)uVar5,(ulong)uVar6,2,uVar25,uVar7,(ulong)uVar23,
                       (ulong)uVar30);
        param_4 = (byte ****)0x3;
        param_3 = (long ****)(ulong)uVar6;
        param_6 = (undefined *)(ulong)uVar7;
        param_7 = (long ***)(ulong)uVar23;
        param_8 = (long ***)(ulong)uVar30;
        pppplVar17 = (long ****)((ulong)param_5 & 0xffffffff);
        FUN_7102b63970(&local_13c,(ulong)uVar5,(ulong)param_3,3,uVar25,uVar7,(ulong)param_7,
                       (ulong)param_8);
        if (local_218 == puStack_210) {
          FUN_7102b63e10((long *)&local_220,(long)&local_208,param_3,param_4,pppplVar17,param_6,
                         param_7,param_8);
        }
        else {
          uVar29 = 0;
          do {
            pcVar1 = (char *)(((ulong)&local_208 | 4) + uVar29);
            uVar26 = uVar29;
            if (*pcVar1 == '\0') break;
            *(char *)((long)local_218 + uVar29 + 4) = *pcVar1;
            if (pcVar1[1] == '\0') {
              uVar26 = uVar29 + 1;
              break;
            }
            *(char *)((long)local_218 + uVar29 + 5) = pcVar1[1];
            if (pcVar1[2] == '\0') {
              uVar26 = uVar29 + 2;
              break;
            }
            uVar26 = uVar29 + 3;
            *(char *)((long)local_218 + uVar29 + 6) = pcVar1[2];
            uVar29 = uVar26;
          } while ((uint)uVar26 < 0x3f);
          *(undefined1 *)((long)local_218 + (uVar26 & 0xffffffff) + 4) = 0;
          *local_218 = (int)uVar26;
          uVar29 = 0;
          do {
            uVar26 = uVar29;
            if (local_1c0[uVar29] == '\0') break;
            *(char *)((long)local_218 + uVar29 + 0x48) = local_1c0[uVar29];
            if (local_1c0[uVar29 + 1] == '\0') {
              uVar26 = uVar29 + 1;
              break;
            }
            *(char *)((long)local_218 + uVar29 + 0x49) = local_1c0[uVar29 + 1];
            if (local_1c0[uVar29 + 2] == '\0') {
              uVar26 = uVar29 + 2;
              break;
            }
            uVar26 = uVar29 + 3;
            *(char *)((long)local_218 + uVar29 + 0x4a) = local_1c0[uVar29 + 2];
            uVar29 = uVar26;
          } while ((uint)uVar26 < 0x3f);
          *(undefined1 *)((long)local_218 + (uVar26 & 0xffffffff) + 0x48) = 0;
          local_218[0x11] = (int)uVar26;
          uVar29 = 0;
          do {
            uVar26 = uVar29;
            if (local_17c[uVar29] == '\0') break;
            *(char *)((long)local_218 + uVar29 + 0x8c) = local_17c[uVar29];
            if (local_17c[uVar29 + 1] == '\0') {
              uVar26 = uVar29 + 1;
              break;
            }
            *(char *)((long)local_218 + uVar29 + 0x8d) = local_17c[uVar29 + 1];
            if (local_17c[uVar29 + 2] == '\0') {
              uVar26 = uVar29 + 2;
              break;
            }
            uVar26 = uVar29 + 3;
            *(char *)((long)local_218 + uVar29 + 0x8e) = local_17c[uVar29 + 2];
            uVar29 = uVar26;
          } while ((uint)uVar26 < 0x3f);
          *(undefined1 *)((long)local_218 + (uVar26 & 0xffffffff) + 0x8c) = 0;
          local_218[0x22] = (int)uVar26;
          uVar29 = 0;
          do {
            uVar26 = uVar29;
            if (local_138[uVar29] == '\0') break;
            *(char *)((long)local_218 + uVar29 + 0xd0) = local_138[uVar29];
            if (local_138[uVar29 + 1] == '\0') {
              uVar26 = uVar29 + 1;
              break;
            }
            *(char *)((long)local_218 + uVar29 + 0xd1) = local_138[uVar29 + 1];
            if (local_138[uVar29 + 2] == '\0') {
              uVar26 = uVar29 + 2;
              break;
            }
            uVar26 = uVar29 + 3;
            *(char *)((long)local_218 + uVar29 + 0xd2) = local_138[uVar29 + 2];
            uVar29 = uVar26;
          } while ((uint)uVar26 < 0x3f);
          *(undefined1 *)((long)local_218 + (uVar26 & 0xffffffff) + 0xd0) = 0;
          local_218[0x33] = (int)uVar26;
          local_218 = local_218 + 0x44;
        }
      }
      puVar31 = puVar31 + 1;
    } while (puVar31 != puVar2);
  }
  puVar32 = local_218;
  puVar10 = local_220;
  lVar20 = (long)local_218 - (long)local_220 >> 4;
  pvVar24 = (void *)*param_2;
  puVar11 = puVar10;
  if ((ulong)(lVar20 * -0xf0f0f0f0f0f0f0f) <= (ulong)(param_2[2] - (long)pvVar24 >> 3))
  goto joined_r0x007102b626e0;
  if ((ulong)(lVar20 * -0xf0f0f0f0f0f0f0f) >> 0x3d != 0) {
LAB_7102b62860:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  sVar27 = param_2[1] - (long)pvVar24;
  pppppppplVar22 = (long ********)(lVar20 * -0x7878787878787878);
  if ((long)local_218 - (long)local_220 == 0) {
    pppppppplVar22 = (long ********)0x1;
  }
  pvVar13 = (void *)FUN_710392e290(0x10,pppppppplVar22,param_3,param_4,pppplVar17,param_6,param_7,
                                   param_8);
  if (pvVar13 == (void *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
      ppppppppplVar16 = &local_208;
      local_208 = pppppppplVar22;
      uVar29 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar29 & 1) != 0) &&
         (pvVar13 = (void *)FUN_710392e290(0x10,pppppppplVar22,(long ****)ppppppppplVar16,param_4,
                                           pppplVar17,param_6,param_7,param_8),
         pvVar13 != (void *)0x0)) goto LAB_7102b6269c;
    }
    pvVar13 = (void *)0x0;
  }
LAB_7102b6269c:
  if (0 < (long)sVar27) {
    memcpy(pvVar13,pvVar24,sVar27);
  }
  *param_2 = (long)pvVar13;
  param_2[1] = (long)((long)pvVar13 + ((long)sVar27 >> 3) * 8);
  param_2[2] = (long)((long)pvVar13 + lVar20 * -0x7878787878787878);
  if (pvVar24 != (void *)0x0) {
    FUN_710392eb40((ulong)pvVar24);
    puVar10 = local_220;
    puVar11 = local_220;
    puVar32 = local_218;
  }
joined_r0x007102b626e0:
  do {
    if (puVar10 == puVar32) {
      if (puVar11 != (undefined4 *)0x0) {
        local_218 = puVar11;
        FUN_710392eb40((ulong)puVar11);
      }
      return;
    }
    ppppppppplVar16 = &local_208;
    local_208 = (long ********)0x6;
    local_200 = (long ********)0x6;
    local_1f8 = (long ********)0x6;
    local_1f0 = (long ********)0x6;
    puVar14 = FUN_7102b61160(param_1,(long)puVar10,ppppppppplVar16,param_4,pppplVar17,param_6,
                             param_7,param_8);
    puVar4 = (undefined8 *)param_2[1];
    if (puVar4 == (undefined8 *)param_2[2]) {
      pvVar24 = (void *)*param_2;
      sVar27 = (long)puVar4 - (long)pvVar24;
      uVar29 = ((long)sVar27 >> 3) + 1;
      if (uVar29 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar20 = param_2[2] - (long)pvVar24;
      if ((ulong)(lVar20 >> 3) < 0xfffffffffffffff) {
        uVar26 = lVar20 >> 2;
        if (uVar29 <= uVar26) {
          uVar29 = uVar26;
        }
        if (uVar29 != 0) {
          if (uVar29 >> 0x3d == 0) goto LAB_7102b62770;
          goto LAB_7102b62860;
        }
LAB_7102b627d0:
        pvVar13 = (void *)0x0;
      }
      else {
        uVar29 = 0x1fffffffffffffff;
LAB_7102b62770:
        pppppppplVar22 = (long ********)(uVar29 * 8);
        if (pppppppplVar22 == (long ********)0x0) {
          pppppppplVar22 = (long ********)0x1;
        }
        pvVar13 = (void *)FUN_710392e290(0x10,pppppppplVar22,(long ****)ppppppppplVar16,param_4,
                                         pppplVar17,param_6,param_7,param_8);
        if (pvVar13 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
            ppppppppplVar16 = &local_208;
            local_208 = pppppppplVar22;
            uVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
            if (((uVar26 & 1) != 0) &&
               (pvVar13 = (void *)FUN_710392e290(0x10,pppppppplVar22,(long ****)ppppppppplVar16,
                                                 param_4,pppplVar17,param_6,param_7,param_8),
               pvVar13 != (void *)0x0)) goto LAB_7102b627d4;
          }
          goto LAB_7102b627d0;
        }
      }
LAB_7102b627d4:
      puVar4 = (undefined8 *)((long)pvVar13 + ((long)sVar27 >> 3) * 8);
      *puVar4 = puVar14;
      if (0 < (long)sVar27) {
        memcpy(pvVar13,pvVar24,sVar27);
      }
      param_2[2] = (long)((long)pvVar13 + uVar29 * 8);
      *param_2 = (long)pvVar13;
      param_2[1] = (long)(puVar4 + 1);
      if (pvVar24 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar24);
      }
    }
    else {
      *puVar4 = puVar14;
      param_2[1] = param_2[1] + 8;
    }
    puVar10 = puVar10 + 0x44;
    puVar11 = local_220;
  } while( true );
}

