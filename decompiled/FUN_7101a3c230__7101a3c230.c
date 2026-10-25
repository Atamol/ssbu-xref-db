// addr:      7101a3c230
// offset:    0x1a3c230
// name:      FUN_7101a3c230
// mangled:   
// signature: undefined __cdecl FUN_7101a3c230(undefined1[16] param_1, float param_2, long * * param_3, float param_4, long * param_5, undefined8 param_6, long * * * * param_7, byte * * * * param_8, long * * * * param_9, ulong param_10, undefined8 param_11, undefined8 param_12)


/* WARNING: Removing unreachable block (ram,0x007101a3fdb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101a3c230(undefined1 param_1 [16],float param_2,long **param_3,float param_4,long *param_5
                   ,undefined8 param_6,long ****param_7,byte ****param_8,long ****param_9,
                   ulong param_10,undefined8 param_11,undefined8 param_12)

{
  float *pfVar1;
  uint *puVar2;
  byte ****ppppbVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  long ***ppplVar16;
  ulong uVar17;
  long *plVar18;
  long **pplVar19;
  long *plVar20;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
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
  ulong extraout_x1_13;
  ulong extraout_x1_14;
  ulong extraout_x1_15;
  ulong extraout_x1_16;
  ulong extraout_x1_17;
  ulong extraout_x1_18;
  ulong extraout_x1_19;
  ulong extraout_x1_20;
  ulong extraout_x1_21;
  ulong extraout_x1_22;
  ulong extraout_x1_23;
  ulong extraout_x1_24;
  undefined8 extraout_x1_25;
  ulong extraout_x1_26;
  ulong extraout_x1_27;
  ulong extraout_x1_28;
  ulong extraout_x1_29;
  ulong extraout_x1_30;
  ulong extraout_x1_31;
  ulong extraout_x1_32;
  ulong extraout_x1_33;
  ulong extraout_x1_34;
  ulong extraout_x1_35;
  ulong extraout_x1_36;
  undefined8 extraout_x1_37;
  undefined8 extraout_x1_38;
  undefined8 extraout_x1_39;
  undefined8 extraout_x1_40;
  undefined8 extraout_x1_41;
  undefined8 extraout_x1_42;
  undefined8 extraout_x1_43;
  undefined8 extraout_x1_44;
  undefined8 extraout_x1_45;
  undefined8 extraout_x1_46;
  undefined8 extraout_x1_47;
  undefined8 extraout_x1_48;
  undefined8 extraout_x1_49;
  undefined8 extraout_x1_50;
  ulong extraout_x1_51;
  ulong extraout_x1_52;
  ulong extraout_x1_53;
  undefined8 extraout_x1_54;
  undefined8 extraout_x1_55;
  ulong extraout_x1_56;
  ulong extraout_x1_57;
  ulong extraout_x1_58;
  ulong extraout_x1_59;
  int *extraout_x1_60;
  int iVar21;
  long ***ppplVar22;
  long lVar23;
  int *piVar24;
  long lVar25;
  undefined4 *puVar26;
  int *piVar27;
  code *pcVar28;
  undefined2 uVar29;
  undefined4 uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  int *piVar34;
  byte ***pppbVar35;
  int *piVar36;
  int iVar37;
  long lVar38;
  long lVar39;
  byte *pbVar40;
  byte bVar41;
  undefined4 uVar42;
  uint uVar43;
  ulong uVar44;
  long lVar45;
  undefined8 *puVar46;
  byte bVar47;
  uint uVar48;
  undefined8 *puVar49;
  uint *puVar50;
  byte ****ppppbVar51;
  long ***ppplVar52;
  long lVar53;
  ulong uVar54;
  long *plVar55;
  int *piVar56;
  long ****pppplVar57;
  float fVar58;
  undefined4 extraout_s0;
  int iVar59;
  undefined4 extraout_var;
  int iVar60;
  undefined4 extraout_var_00;
  int iVar61;
  undefined4 extraout_var_01;
  int iVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined8 uVar67;
  float fVar68;
  undefined1 auVar69 [16];
  undefined **local_160;
  ulong local_158;
  long **local_150;
  ulong local_148;
  undefined8 local_138;
  undefined **local_130;
  long local_128;
  int local_120;
  undefined4 uStack_11c;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 local_e8;
  long ***local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  
  *(undefined4 *)(param_5 + 0x61) = 0xffffffff;
  lVar45 = param_5[0x34];
  for (lVar31 = param_5[0x33]; lVar31 != lVar45; lVar31 = lVar31 + 0x10) {
    *(bool *)(*(long *)(*(long *)(lVar31 + 8) + 0x20) + 0x165) =
         *(char *)(*(long *)(lVar31 + 8) + 0x36) == '\0';
  }
  *(undefined1 *)(param_5[0x2e] + 0x2c) = 0;
  *(undefined1 *)(param_5[0x30] + 0x2c) = 0;
  *(undefined1 *)(param_5[0x32] + 0x2c) = 0;
  local_e8 = (undefined **)0x0;
  local_e0 = (long ***)0x0;
  local_f0 = (undefined **)0x0;
  lVar31 = param_5[0x33];
  lVar45 = param_5[0x34];
  lVar23 = lVar45 - lVar31;
  ppplVar16 = (long ***)local_e8;
  if (lVar23 != 0) {
    uVar44 = lVar23 >> 4;
    if (0x555555555555555 < uVar44) goto LAB_7101a4027c;
    ppplVar22 = (long ***)(uVar44 * 0x30);
    if (ppplVar22 == (long ***)0x0) {
      ppplVar22 = (long ***)0x1;
    }
    ppplVar16 = (long ***)
                FUN_710392e290(0x10,ppplVar22,param_7,param_8,param_9,param_10,param_11,param_12);
    if (ppplVar16 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_150 = (long **)((ulong)local_150 & 0xffffffff00000000);
        param_7 = (long ****)&local_138;
        local_138 = ppplVar22;
        uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_150);
        if (((uVar17 & 1) != 0) &&
           (ppplVar16 = (long ***)
                        FUN_710392e290(0x10,ppplVar22,param_7,param_8,param_9,param_10,param_11,
                                       param_12), ppplVar16 != (long ***)0x0)) goto LAB_7101a3c33c;
      }
      ppplVar16 = (long ***)0x0;
    }
LAB_7101a3c33c:
    local_e0 = ppplVar16 + uVar44 * 6;
    local_e8 = (undefined **)ppplVar16;
  }
  for (; local_f0 = (undefined **)ppplVar16, lVar31 != lVar45; lVar31 = lVar31 + 0x10) {
    lVar23 = *(long *)(lVar31 + 8);
    uVar67 = *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0x100) + 0x60);
    fVar58 = (float)uVar67;
    param_2 = (float)((ulong)uVar67 >> 0x20);
    lVar38 = param_5[0x40];
    param_3 = (long **)(ulong)(uint)*(float *)(lVar38 + 0xbf0);
    if ((((((*(float *)(lVar38 + 0xbf0) < fVar58) ||
           (param_3 = (long **)(ulong)(uint)*(float *)(lVar38 + 0xbec),
           fVar58 < *(float *)(lVar38 + 0xbec))) ||
          (param_3 = (long **)(ulong)(uint)*(float *)(lVar38 + 0xbf8),
          *(float *)(lVar38 + 0xbf8) < param_2)) ||
         ((param_3 = (long **)(ulong)(uint)*(float *)(lVar38 + 0xbf4),
          param_2 < *(float *)(lVar38 + 0xbf4) || (*(int *)(lVar23 + 0x2c) == -1)))) &&
        (*(char *)(lVar23 + 0x36) != '\0')) && (*(char *)(*(long *)(lVar23 + 0x20) + 0x165) == '\0')
       ) {
      lVar38 = *(long *)(*(long *)(lVar23 + 0x10) + 8);
      if (*(int *)(lVar38 + 0x484) == 0) {
        bVar12 = *(int *)(lVar38 + 0x488) != -1;
      }
      else {
        bVar12 = true;
      }
      if (*(char *)(lVar38 + 0x4aa) != '\0' && bVar12) {
        uVar30 = 1;
        if ((*(byte *)(lVar38 + 0x1a8) & 2) != 0) {
          uVar30 = 2;
        }
      }
      else {
        uVar30 = 0;
      }
      param_2 = 540.0 - param_2;
      uVar42 = *(undefined4 *)(lVar23 + 0x28);
      param_3 = (long **)CONCAT44(param_2,fVar58 + 960.0);
      if ((long ***)local_e8 == local_e0) {
        pppplVar57 = (long ****)((long)local_e8 - (long)ppplVar16);
        uVar17 = 0x555555555555555;
        uVar44 = ((long)pppplVar57 >> 4) * -0x5555555555555555 + 1;
        if (0x555555555555555 < uVar44) {
LAB_7101a40274:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar23 = (long)local_e0 - (long)ppplVar16 >> 4;
        if ((ulong)(lVar23 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
          uVar54 = lVar23 * 0x5555555555555556;
          uVar17 = uVar44;
          if (uVar44 <= uVar54) {
            uVar17 = uVar54;
          }
          if (uVar17 != 0) goto LAB_7101a3c4dc;
          lVar23 = 0;
        }
        else {
LAB_7101a3c4dc:
          ppplVar22 = (long ***)(uVar17 * 0x30);
          if (ppplVar22 == (long ***)0x0) {
            ppplVar22 = (long ***)0x1;
          }
          lVar23 = FUN_710392e290(0x10,ppplVar22,param_7,param_8,param_9,param_10,param_11,param_12)
          ;
          if (lVar23 == 0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_150 = (long **)((ulong)local_150 & 0xffffffff00000000);
              param_7 = (long ****)&local_138;
              local_138 = ppplVar22;
              uVar44 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_150);
              if (((uVar44 & 1) != 0) &&
                 (lVar23 = FUN_710392e290(0x10,ppplVar22,param_7,param_8,param_9,param_10,param_11,
                                          param_12), lVar23 != 0)) goto LAB_7101a3c544;
            }
            lVar23 = 0;
          }
        }
LAB_7101a3c544:
        puVar26 = (undefined4 *)(lVar23 + ((long)pppplVar57 >> 4) * 0x10);
        *puVar26 = uVar30;
        *(long ****)(puVar26 + 1) = local_138;
        *(undefined8 *)(puVar26 + 10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar26 + 6) = 0;
        *(long ***)(puVar26 + 4) = param_3;
        lVar38 = SUB168(SEXT816((long)pppplVar57) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
        puVar26[3] = local_130._0_4_;
        ppplVar22 = (long ***)(lVar23 + uVar17 * 0x30);
        puVar26[8] = 0;
        puVar26[9] = uVar42;
        ppplVar52 = (long ***)(puVar26 + ((lVar38 >> 3) - (lVar38 >> 0x3f)) * 0xc);
        if (0 < (long)pppplVar57) {
          memcpy(ppplVar52,ppplVar16,(size_t)pppplVar57);
          param_7 = pppplVar57;
        }
        local_f0 = (undefined **)ppplVar52;
        local_e8 = (undefined **)(puVar26 + 0xc);
        local_e0 = ppplVar22;
        if (ppplVar16 != (long ***)0x0) {
          FUN_710392eb40((ulong)ppplVar16);
        }
      }
      else {
        *(undefined4 *)local_e8 = uVar30;
        local_e8[3] = (undefined *)0x0;
        local_e8[2] = (undefined *)param_3;
        *(long ****)((long)local_e8 + 4) = local_138;
        *(undefined4 *)((long)local_e8 + 0xc) = local_130._0_4_;
        *(undefined4 *)(local_e8 + 4) = 0;
        *(undefined4 *)((long)local_e8 + 0x24) = uVar42;
        local_e8[5] = (undefined *)0xffffffffffffffff;
        local_e8 = local_e8 + 6;
      }
    }
    ppplVar16 = (long ***)local_f0;
  }
  plVar18 = param_5 + 0x45;
  FUN_710376e720((long *)param_5[0x45],&local_f0,param_7,param_8,param_9,param_10,param_11,param_12)
  ;
  ppplVar22 = (long ***)local_e8;
  bVar12 = true;
  uVar67 = extraout_x1;
  for (ppplVar16 = (long ***)local_f0; ppplVar16 != ppplVar22; ppplVar16 = ppplVar16 + 6) {
    if (*(int *)(ppplVar16 + 5) != -1) {
      if ((ulong)(param_5[0x34] - param_5[0x33] >> 4) <=
          (ulong)(long)*(int *)((long)ppplVar16 + 0x24)) goto LAB_7101a40290;
      *(undefined1 *)
       (*(long *)(*(long *)(param_5[0x33] + (long)*(int *)((long)ppplVar16 + 0x24) * 0x10 + 8) +
                 0x20) + 0x165) = 1;
      if (*(char *)((long)param_5 + 0x31c) == '\0') {
        if (2 < *(uint *)(ppplVar16 + 5)) goto LAB_7101a4027c;
        *(undefined1 *)(param_5[(long)(int)*(uint *)(ppplVar16 + 5) * 2 + 0x2e] + 0x2c) = 1;
      }
    }
    if (*(int *)((long)ppplVar16 + 0x2c) != -1) {
      if (*(int *)((long)ppplVar16 + 0x2c) == 2) {
        lVar31 = *(long *)(*plVar18 + 0x1b8);
        if (lVar31 != 0) {
          lVar45 = *plVar18 + 0x1b8;
          lVar23 = lVar45;
          do {
            if (1 < *(int *)(lVar31 + 0x20)) {
              lVar23 = lVar31;
            }
            lVar31 = *(long *)(lVar31 + (ulong)(*(int *)(lVar31 + 0x20) < 2) * 8);
          } while (lVar31 != 0);
          if (((lVar23 != lVar45) && (*(int *)(lVar23 + 0x20) < 3)) &&
             (plVar55 = *(long **)(lVar23 + 0x28), plVar55 != (long *)0x0)) {
            (**(code **)(*plVar55 + 0x1f8))(plVar55,0);
            param_7 = (long ****)0x0;
            (**(code **)(*plVar55 + 0x388))(plVar55,1);
            uVar67 = extraout_x1_00;
          }
        }
        *(undefined1 *)((long)param_5 + 0x31d) = 1;
      }
      if ((ulong)(param_5[0x34] - param_5[0x33] >> 4) <=
          (ulong)(long)*(int *)((long)ppplVar16 + 0x24)) {
LAB_7101a40290:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      FUN_71032d3260(*(long *)(*(long *)(param_5[0x33] +
                                         (long)*(int *)((long)ppplVar16 + 0x24) * 0x10 + 8) + 0x20),
                     uVar67,param_7,param_8,param_9,param_10,param_11,param_12);
      bVar12 = false;
      uVar67 = extraout_x1_01;
    }
  }
  if ((long ***)local_f0 != (long ***)0x0) {
    local_e8 = local_f0;
    FUN_710392eb40((ulong)local_f0);
  }
  FUN_71032d6e10(param_5[0x2e]);
  FUN_71032d6e10(param_5[0x30]);
  FUN_71032d6e10(param_5[0x32]);
  lVar45 = param_5[0x34];
  uVar44 = extraout_x1_02;
  for (lVar31 = param_5[0x33]; lVar31 != lVar45; lVar31 = lVar31 + 0x10) {
    if (bVar12) {
      if (((*(char *)(*(long *)(lVar31 + 8) + 0x36) == '\0') ||
          (lVar23 = *(long *)(*(long *)(*(long *)(lVar31 + 8) + 0x10) + 8),
          *(char *)(lVar23 + 0x4aa) == '\0')) ||
         (((*(byte *)(lVar23 + 0x1b0) >> 1 & 1) == 0 || (*(char *)((long)param_5 + 0x31c) == '\0')))
         ) {
        bVar12 = true;
      }
      else {
        param_7 = (long ****)0x0;
        FUN_7103771be0(plVar18,2,0);
        lVar23 = *(long *)(*plVar18 + 0x1b8);
        uVar44 = extraout_x1_03;
        if (lVar23 != 0) {
          lVar38 = *plVar18 + 0x1b8;
          lVar53 = lVar38;
          do {
            if (1 < *(int *)(lVar23 + 0x20)) {
              lVar53 = lVar23;
            }
            lVar23 = *(long *)(lVar23 + (ulong)(*(int *)(lVar23 + 0x20) < 2) * 8);
          } while (lVar23 != 0);
          if (((lVar53 != lVar38) && (*(int *)(lVar53 + 0x20) < 3)) &&
             (plVar55 = *(long **)(lVar53 + 0x28), plVar55 != (long *)0x0)) {
            (**(code **)(*plVar55 + 0x1f8))(plVar55,0);
            param_7 = (long ****)0x0;
            (**(code **)(*plVar55 + 0x388))(plVar55,1);
            uVar44 = extraout_x1_04;
          }
        }
        bVar12 = false;
        *(undefined1 *)((long)param_5 + 0x31d) = 1;
      }
    }
    else {
      bVar12 = false;
    }
  }
  if (*(int *)(*plVar18 + 0x25c) == 1) {
    *(undefined4 *)((long)param_5 + 0x134) = 3;
  }
  else if ((*(int *)(*plVar18 + 0x25c) == 2) && (*(char *)((long)param_5 + 0x31c) != '\0')) {
    if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
      param_7 = (long ****)&DAT_00000004;
      uVar17 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x13d3b19adc,(long ****)&DAT_00000004,
                              param_8,param_9,param_10,param_11,param_12);
      uVar44 = extraout_x1_05;
      if ((uVar17 & 1) == 0) goto LAB_7101a3c8f0;
      FUN_71024076d0((undefined4 *)&local_f0,0x13d3b19adc);
      uVar44 = extraout_x1_06;
      if (((local_e0 != (long ***)0x0) && (DAT_7106dd53a8 == '\x01')) &&
         ((int)uStack_d8 == DAT_7106dd53ac)) {
        local_e0 = local_e0 + 7;
        do {
          cVar13 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(local_e0,0x10);
          if (bVar12) {
            *(int *)local_e0 = *(int *)local_e0 + -1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
      }
    }
    else {
LAB_7101a3c8f0:
      uStack_d8 = 0x87650000000000;
      local_c8 = -1;
      local_c0 = 0;
      local_f0 = (undefined **)((ulong)local_f0 & 0xffffffff00000000);
      local_b8 = 0;
    }
    local_e8 = &PTR_FUN_7104f73d50;
    local_e0 = (long ***)0x0;
    local_d0 = 0;
    if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
      param_7 = (long ****)&DAT_00000004;
      uVar17 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x17a3061361,(long ****)&DAT_00000004,
                              param_8,param_9,param_10,param_11,param_12);
      uVar44 = extraout_x1_07;
      if ((uVar17 & 1) == 0) goto LAB_7101a3c9b0;
      FUN_71024076d0((undefined4 *)&local_138,0x17a3061361);
      uVar44 = extraout_x1_08;
      if (((local_128 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_120 == DAT_7106dd53ac)) {
        piVar24 = (int *)(local_128 + 0x38);
        do {
          cVar13 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar24,0x10);
          if (bVar12) {
            *piVar24 = *piVar24 + -1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
      }
    }
    else {
LAB_7101a3c9b0:
      local_120 = 0;
      uStack_11c = 0x876500;
      local_110 = 0xffffffffffffffff;
      uStack_108 = 0;
      local_138 = (long ***)((ulong)local_138 & 0xffffffff00000000);
      local_100 = 0;
    }
    local_130 = &PTR_FUN_7104f73d50;
    local_128 = 0;
    local_118 = 0;
    lVar31 = param_5[0x33];
    lVar45 = param_5[0x34];
    if (lVar31 != lVar45) {
      do {
        lVar38 = *(long *)(*(long *)(*(long *)(lVar31 + 8) + 0x10) + 8);
        lVar23 = 0x48c;
        if (*(int *)(lVar38 + 0x484) != 2) {
          lVar23 = 0x488;
        }
        uVar15 = *(uint *)(lVar38 + lVar23);
        uVar44 = (ulong)uVar15;
        if (uVar15 != 0xffffffff) {
          param_2 = 1.0;
          param_9 = (long ****)0x1;
          param_8 = (byte ****)0x0;
          param_10 = 0;
          param_11 = 0;
          param_12 = 0;
          param_7 = (long ****)0x18f7951026;
          FUN_710175dfc0(1.0,1.0,*(long *)(DAT_71052c5120 + 8),uVar15,0x18f7951026,0,1,0,0,0);
          uVar44 = extraout_x1_09;
        }
        lVar31 = lVar31 + 0x10;
      } while (lVar45 != lVar31);
    }
    *(undefined4 *)((long)param_5 + 0x134) = 1;
    *(undefined1 *)((long)param_5 + 0x31d) = 1;
  }
  if (*(char *)((long)param_5 + 0x31d) != '\0') {
    lVar45 = **(long **)param_5[0x2a];
    lVar31 = *(long *)(lVar45 + 0x600);
    param_7 = (long ****)0x264;
    memset((void *)(lVar31 + 0x198),0,0x264);
    *(undefined8 *)(lVar31 + 0x40c) = 0;
    *(undefined8 *)(lVar31 + 0x424) = 0;
    *(undefined4 *)(lVar31 + 0x480) = 0;
    uVar8 = uRam0000007107459008;
    uVar67 = _ConstantZero;
    *(undefined8 *)(lVar31 + 0x4a0) = 0;
    *(undefined8 *)(lVar31 + 0x468) = uVar8;
    *(undefined8 *)(lVar31 + 0x460) = uVar67;
    *(undefined8 *)(lVar31 + 0x438) = uVar8;
    *(undefined8 *)(lVar31 + 0x430) = uVar67;
    *(undefined8 *)(lVar31 + 0x448) = uVar8;
    *(undefined8 *)(lVar31 + 0x440) = uVar67;
    *(undefined8 *)(lVar31 + 0x458) = uVar8;
    *(undefined8 *)(lVar31 + 0x450) = uVar67;
    *(undefined8 *)(lVar31 + 0x498) = 0;
    lVar23 = *(long *)(lVar45 + 0x610);
    uVar44 = extraout_x1_10;
    for (lVar31 = *(long *)(lVar45 + 0x608); lVar31 != lVar23; lVar31 = lVar31 + 0x10) {
      lVar38 = *(long *)(lVar31 + 8);
      param_7 = (long ****)0x264;
      memset((void *)(lVar38 + 0x198),0,0x264);
      *(undefined8 *)(lVar38 + 0x40c) = 0;
      *(undefined8 *)(lVar38 + 0x424) = 0;
      *(undefined4 *)(lVar38 + 0x480) = 0;
      *(undefined8 *)(lVar38 + 0x4a0) = 0;
      *(undefined8 *)(lVar38 + 0x468) = uVar8;
      *(undefined8 *)(lVar38 + 0x460) = uVar67;
      *(undefined8 *)(lVar38 + 0x438) = uVar8;
      *(undefined8 *)(lVar38 + 0x430) = uVar67;
      *(undefined8 *)(lVar38 + 0x498) = 0;
      *(undefined8 *)(lVar38 + 0x448) = uVar8;
      *(undefined8 *)(lVar38 + 0x440) = uVar67;
      *(undefined8 *)(lVar38 + 0x458) = uVar8;
      *(undefined8 *)(lVar38 + 0x450) = uVar67;
      uVar44 = extraout_x1_11;
    }
    puVar46 = *(undefined8 **)(lVar45 + 0x468);
    for (puVar49 = *(undefined8 **)(lVar45 + 0x460); puVar49 != puVar46; puVar49 = puVar49 + 1) {
      (**(code **)(*(long *)*puVar49 + 0x58))();
      uVar44 = extraout_x1_12;
    }
  }
  if (*(char *)(*(long *)(**(long **)param_5[0x2a] + 0x600) + 0x4aa) == '\0') {
    bVar47 = 0;
    if (*(char *)((long)param_5 + 0x31c) == '\0') goto LAB_7101a3cba8;
LAB_7101a3cb94:
    iVar14 = 0;
  }
  else {
    bVar47 = *(byte *)(*(long *)(**(long **)param_5[0x2a] + 0x600) + 0x278) >> 4 & 1;
    if (*(char *)((long)param_5 + 0x31c) != '\0') goto LAB_7101a3cb94;
LAB_7101a3cba8:
    iVar14 = (int)param_5[0x62];
  }
  for (lVar31 = param_5[0x33]; lVar31 != param_5[0x34]; lVar31 = lVar31 + 0x10) {
    if (*(char *)(*(long *)(lVar31 + 8) + 0x36) != '\0') {
      lVar45 = *(long *)(*(long *)(*(long *)(lVar31 + 8) + 0x10) + 8);
      if (*(char *)(lVar45 + 0x4aa) == '\0') {
        if (iVar14 < 1) goto LAB_7101a3cbe0;
      }
      else if (iVar14 <= *(int *)(lVar45 + 0x344)) {
LAB_7101a3cbe0:
        if (*(char *)(lVar45 + 0x4aa) == '\0') {
          bVar41 = 0;
        }
        else {
          bVar41 = *(byte *)(lVar45 + 0x278) >> 4 & 1;
        }
        bVar47 = bVar47 | bVar41;
      }
    }
  }
  bVar41 = *(byte *)((long)param_5 + 0x31b);
  if (*(byte *)((long)param_5 + 0x31b) != bVar47) {
    plVar18 = *(long **)param_5[0x49];
    if (bVar47 == 0) {
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 0x328))(plVar18,0);
        uVar44 = extraout_x1_16;
      }
      if (((int)param_5[0x5e] != -1) || (*(int *)((long)param_5 + 0x2f4) != -1)) {
        FUN_710373b540((long)(param_5 + 0x59),0);
        *(undefined4 *)(param_5 + 0x59) = 0;
        FUN_71039602c0((long)(param_5 + 0x5a));
        param_5[0x5a] = (long)&PTR_FUN_7104f73d50;
        if ((param_5[0x5b] != 0) &&
           ((DAT_7106dd53a8 == '\x01' && ((int)param_5[0x5c] == DAT_7106dd53ac)))) {
          piVar24 = (int *)(param_5[0x5b] + 0x38);
          do {
            cVar13 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar24,0x10);
            if (bVar12) {
              *piVar24 = *piVar24 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
        }
        param_5[0x5c] = 0;
        param_5[0x5d] = 0;
        param_5[0x5a] = 0;
        param_5[0x5b] = 0;
        *(undefined4 *)((long)param_5 + 0x2e4) = 0x876500;
        param_5[0x5a] = (long)&PTR_FUN_7104f73d30;
        param_5[0x5b] = 0;
        *(undefined4 *)(param_5 + 0x5c) = 0;
        *(undefined1 *)(param_5 + 0x5d) = 0;
        param_5[0x5e] = -1;
        param_5[0x5f] = 0;
        *(undefined4 *)((long)param_5 + 0x304) = 0;
        uVar44 = extraout_x1_17;
      }
    }
    else {
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 800))(plVar18,1);
        uVar44 = extraout_x1_13;
      }
      if (((int)param_5[0x5e] == -1) && (*(int *)((long)param_5 + 0x2f4) == -1)) {
        if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
          param_7 = (long ****)&DAT_00000004;
          uVar17 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1a029a90f3,
                                  (long ****)&DAT_00000004,param_8,param_9,param_10,param_11,
                                  param_12);
          uVar44 = extraout_x1_14;
          if ((uVar17 & 1) == 0) goto LAB_7101a3f360;
          FUN_71024076d0((undefined4 *)&local_f0,0x1a029a90f3);
          *(uint *)(param_5 + 0x59) = (uint)local_f0;
          uVar44 = extraout_x1_15;
          if (local_e0 == (long ***)0x0) goto LAB_7101a3f390;
          if (*(int *)((long)param_5 + 0x2e4) == 0x876500) {
            if ((int)param_5[0x5c] == DAT_7106dd53ac) {
              if ((param_5[0x5b] != 0) && (DAT_7106dd53a8 == '\x01')) {
                piVar24 = (int *)(param_5[0x5b] + 0x38);
                do {
                  cVar13 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                  if (bVar12) {
                    *piVar24 = *piVar24 + -1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
              }
              param_5[0x5b] = 0;
              *(undefined1 *)(param_5 + 0x5d) = 0;
            }
            else {
              *(int *)(param_5 + 0x5c) = DAT_7106dd53ac;
            }
            param_5[0x5b] = (long)local_e0;
            ppplVar16 = local_e0 + 7;
            do {
              cVar13 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(ppplVar16,0x10);
              if (bVar12) {
                *(int *)ppplVar16 = *(int *)ppplVar16 + 1;
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
            goto LAB_7101a3f3d8;
          }
          param_5[0x5e] = local_c8;
          param_5[0x5f] = local_c0;
          param_5[0x60] = local_b8;
LAB_7101a3f400:
          if ((DAT_7106dd53a8 == '\x01') && ((int)uStack_d8 == DAT_7106dd53ac)) {
            local_e0 = local_e0 + 7;
            do {
              cVar13 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(local_e0,0x10);
              if (bVar12) {
                *(int *)local_e0 = *(int *)local_e0 + -1;
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
          }
        }
        else {
LAB_7101a3f360:
          uStack_d8 = 0x87650000000000;
          local_d0 = 0;
          local_e0 = (long ***)0x0;
          local_f0 = (undefined **)((ulong)local_f0 & 0xffffffff00000000);
          local_b8 = 0;
          local_c8 = -1;
          local_c0 = 0;
          *(undefined4 *)(param_5 + 0x59) = 0;
LAB_7101a3f390:
          if (((param_5[0x5b] != 0) && (DAT_7106dd53a8 == '\x01')) &&
             ((int)param_5[0x5c] == DAT_7106dd53ac)) {
            piVar24 = (int *)(param_5[0x5b] + 0x38);
            do {
              cVar13 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar24,0x10);
              if (bVar12) {
                *piVar24 = *piVar24 + -1;
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
          }
          param_5[0x5b] = 0;
LAB_7101a3f3d8:
          *(undefined1 *)(param_5 + 0x5d) = 0;
          param_5[0x5e] = local_c8;
          param_5[0x5f] = local_c0;
          param_5[0x60] = local_b8;
          if (local_e0 != (long ***)0x0) goto LAB_7101a3f400;
        }
        local_e8 = &PTR_FUN_7104f73d50;
        local_e0 = (long ***)0x0;
      }
    }
    *(byte *)((long)param_5 + 0x31b) = bVar47;
    bVar41 = bVar47;
  }
  if (bVar41 == 0) {
LAB_7101a3ce0c:
    if (*(int *)(param_5[0x45] + 0x25c) == 0) goto LAB_7101a3ce18;
  }
  else {
    if (*(long **)param_5[0x49] != (long *)0x0) {
      auVar69 = (**(code **)(**(long **)param_5[0x49] + 0x330))();
      uVar44 = auVar69._8_8_;
      if ((auVar69._0_8_ & 1) == 0) goto LAB_7101a3ce0c;
    }
LAB_7101a3ce18:
    if (((int)param_5[0x5e] != -1) || (*(int *)((long)param_5 + 0x2f4) != -1)) {
      FUN_710373b540((long)(param_5 + 0x59),0);
      *(undefined4 *)(param_5 + 0x59) = 0;
      FUN_71039602c0((long)(param_5 + 0x5a));
      param_5[0x5a] = (long)&PTR_FUN_7104f73d50;
      if ((param_5[0x5b] != 0) &&
         ((DAT_7106dd53a8 == '\x01' && ((int)param_5[0x5c] == DAT_7106dd53ac)))) {
        piVar24 = (int *)(param_5[0x5b] + 0x38);
        do {
          cVar13 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar24,0x10);
          if (bVar12) {
            *piVar24 = *piVar24 + -1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
      }
      param_5[0x5c] = 0;
      param_5[0x5d] = 0;
      param_5[0x5a] = 0;
      param_5[0x5b] = 0;
      *(undefined4 *)((long)param_5 + 0x2e4) = 0x876500;
      param_5[0x5a] = (long)&PTR_FUN_7104f73d30;
      param_5[0x5b] = 0;
      *(undefined4 *)(param_5 + 0x5c) = 0;
      *(undefined1 *)(param_5 + 0x5d) = 0;
      param_5[0x5e] = -1;
      param_5[0x5f] = 0;
      *(undefined4 *)((long)param_5 + 0x304) = 0;
    }
    lVar31 = DAT_710532f820;
    if ((int)param_5[0x26] == 1) {
      bVar12 = FUN_7103291150(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1c8),0x58ffff1b41ae366b);
      if (bVar12) {
        FUN_71032edf70(*(uint **)(lVar31 + 0x10),0x58ffff1b41ae366b);
        FUN_71032f1bb0(*(long *)(lVar31 + 8),*(uint **)(lVar31 + 0x10),param_7,param_8,param_9,
                       param_10,param_11,param_12);
        uVar44 = extraout_x1_19;
      }
      else {
        *(undefined4 *)(*(long *)(lVar31 + 8) + 0x118) = 0;
        uVar44 = extraout_x1_18;
      }
      if (0x11 < *(int *)((long)param_5 + 0x104)) goto LAB_7101a3d068;
      uVar15 = *(int *)((long)param_5 + 0x104) + 1;
      *(uint *)((long)param_5 + 0x104) = uVar15;
      if (0x12 < uVar15) goto LAB_7101a4027c;
      uVar30 = 2;
    }
    else {
      FUN_71037760f0(**(long **)param_5[0x2a],0);
      lVar31 = *(long *)(DAT_710532f8d0 + 8);
      uVar44 = extraout_x1_20;
      if ((ulong)(*(long *)(lVar31 + 0x48) - *(long *)(lVar31 + 0x40) >> 3) < 4) {
        uVar17 = 0;
        if (*(char *)(lVar31 + 0x191) == '\0') goto LAB_7101a3cfac;
LAB_7101a3d01c:
        uStack_d8 = 0x87650000000000;
        local_c8 = -1;
        local_c0 = 0;
        local_f0 = (undefined **)((ulong)local_f0 & 0xffffffff00000000);
        local_b8 = 0;
      }
      else {
        uVar17 = *(ulong *)(*(long *)(lVar31 + 0x40) + 0x18);
        if (*(char *)(lVar31 + 0x191) != '\0') goto LAB_7101a3d01c;
LAB_7101a3cfac:
        param_7 = (long ****)&DAT_00000004;
        uVar54 = FUN_7103313f20(lVar31,uVar17,(long ****)&DAT_00000004,param_8,param_9,param_10,
                                param_11,param_12);
        uVar44 = extraout_x1_21;
        if ((uVar54 & 1) == 0) goto LAB_7101a3d01c;
        FUN_71024076d0((undefined4 *)&local_f0,uVar17);
        uVar44 = extraout_x1_22;
        if (((local_e0 != (long ***)0x0) && (DAT_7106dd53a8 == '\x01')) &&
           ((int)uStack_d8 == DAT_7106dd53ac)) {
          local_e0 = local_e0 + 7;
          do {
            cVar13 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(local_e0,0x10);
            if (bVar12) {
              *(int *)local_e0 = *(int *)local_e0 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
        }
      }
      local_e8 = &PTR_FUN_7104f73d50;
      local_e0 = (long ***)0x0;
      local_d0 = 0;
      uVar15 = *(uint *)((long)param_5 + 0x104);
      if (0x12 < uVar15) goto LAB_7101a4027c;
      uVar30 = 8;
    }
    *(undefined4 *)((long)param_5 + (long)(int)uVar15 * 4 + 0xb8) = uVar30;
  }
LAB_7101a3d068:
  if (*(char *)((long)param_5 + 0x31d) == '\0') {
    FUN_710337b690(param_5[0x29],uVar44,param_7,param_8,param_9,param_10,param_11,param_12);
    lVar31 = param_5[0x29];
    puVar50 = *(uint **)(lVar31 + 0x68);
    puVar2 = *(uint **)(lVar31 + 0x70);
    uVar44 = extraout_x1_53;
    if (puVar50 != puVar2) {
      do {
        uVar15 = *puVar50;
        pppplVar57 = (long ****)(ulong)uVar15;
        for (lVar31 = param_5[0x33]; lVar31 != param_5[0x34]; lVar31 = lVar31 + 0x10) {
          lVar45 = *(long *)(lVar31 + 8);
          if (((*(char *)(lVar45 + 0x34) == '\0') &&
              (lVar23 = *(long *)(*(long *)(lVar45 + 0x10) + 8), *(int *)(lVar23 + 0x484) == 0)) &&
             (*(int *)(lVar23 + 0x488) == -1)) {
            if ((ulong)(param_5[0x37] - param_5[0x36] >> 4) <= (ulong)(long)*(int *)(lVar45 + 0x28))
            goto LAB_7101a40280;
            plVar18 = (long *)(param_5[0x36] + (long)*(int *)(lVar45 + 0x28) * 0x10 + 8);
            lVar45 = *plVar18;
            if ((*(long *)(lVar45 + 1000) == 0) ||
               (*(int *)(*(long *)(*(long *)(lVar45 + 1000) + 8) + 0x28) != *(int *)(lVar45 + 0x150)
               )) {
              if (*(int *)(lVar45 + 0x138) == 0xb) {
                FUN_71019e69d0(*(long **)(lVar45 + 0x3a8));
                FUN_71019e66d0(*(long *)(lVar45 + 0x3a8),extraout_x1_54,param_7,param_8,param_9,
                               param_10,param_11,param_12);
                FUN_7101a48570(lVar45,extraout_x1_55,param_7,param_8,param_9,param_10,param_11,
                               param_12);
                *(undefined4 *)(lVar45 + 0x3e0) = 0xffffffff;
                DAT_71050a8078 = -1;
                if (0x12 < *(uint *)(lVar45 + 0x134)) goto LAB_7101a4027c;
                *(undefined4 *)(lVar45 + (long)(int)*(uint *)(lVar45 + 0x134) * 4 + 0xe8) = 3;
                lVar45 = *plVar18;
                uVar44 = extraout_x1_56;
              }
              FUN_7101a4d950(lVar45,uVar44,param_7,param_8,param_9,param_10,param_11,param_12);
              auVar69._4_4_ = extraout_var;
              auVar69._0_4_ = extraout_s0;
              auVar69._8_4_ = extraout_var_00;
              auVar69._12_4_ = extraout_var_01;
              FUN_7101a402b0(auVar69,param_2,SUB84(param_3,0),param_4,(long)param_5,
                             *(int *)(*plVar18 + 0x150),pppplVar57,param_8,param_9,param_10,param_11
                             ,param_12);
              uVar48 = *(uint *)(*plVar18 + 0x150);
              uVar17 = (ulong)(int)uVar48;
              uVar44 = extraout_x1_57;
              if (uVar48 == 0xffffffff) {
                bVar12 = true;
                goto LAB_7101a3f0cc;
              }
              if (7 < uVar48) goto LAB_7101a4027c;
              *(uint *)(*(long *)(DAT_710593b990 + 8) + uVar17 * 4) = uVar15;
              bVar12 = true;
              param_7 = pppplVar57;
              goto joined_r0x007101a3f030;
            }
          }
        }
        bVar12 = false;
        pppplVar57 = param_7;
LAB_7101a3f0cc:
        uVar17 = 0xffffffffffffffff;
        param_7 = pppplVar57;
joined_r0x007101a3f030:
        if (uVar15 != 0xffffffff) {
          if (9 < uVar15) goto LAB_7101a4027c;
          lVar45 = param_5[0x29];
          uVar42 = 0;
          lVar31 = (long)(int)uVar15;
          uVar30 = 2;
          if (!bVar12) {
            uVar30 = 0;
          }
          *(undefined4 *)(lVar45 + lVar31 * 4) = uVar30;
          if (bVar12) {
            if (uVar15 < 10) {
              puVar49 = &DAT_7105339830;
              if ((*(char *)(DAT_71053398b0 + 8) != '\0') &&
                 (puVar49 = (undefined8 *)(&DAT_7105339860)[lVar31], puVar49 == (undefined8 *)0x0))
              {
                uVar42 = 0;
                goto LAB_7101a3f164;
              }
            }
            else {
              puVar49 = &DAT_7105339830;
            }
            uVar15 = *(int *)(puVar49[2] + 0x9c) - 1;
            if (uVar15 < 7) {
              uVar42 = *(undefined4 *)(&DAT_7104753de0 + (long)(int)uVar15 * 4);
            }
            else {
              uVar42 = 0;
            }
          }
LAB_7101a3f164:
          *(undefined4 *)(lVar45 + lVar31 * 4 + 0x28) = uVar42;
          *(bool *)(lVar45 + lVar31 + 0x50) = bVar12;
        }
        if (bVar12) {
          if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
            param_7 = (long ****)&DAT_00000004;
            uVar44 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1acb49fd32,
                                    (long ****)&DAT_00000004,param_8,param_9,param_10,param_11,
                                    param_12);
            if ((uVar44 & 1) == 0) goto LAB_7101a3f208;
            FUN_71024076d0((undefined4 *)&local_f0,0x1acb49fd32);
            if (((local_e0 != (long ***)0x0) && (DAT_7106dd53a8 == '\x01')) &&
               ((int)uStack_d8 == DAT_7106dd53ac)) {
              local_e0 = local_e0 + 7;
              do {
                cVar13 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(local_e0,0x10);
                if (bVar12) {
                  *(int *)local_e0 = *(int *)local_e0 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
            }
          }
          else {
LAB_7101a3f208:
            uStack_d8 = 0x87650000000000;
            local_f0 = (undefined **)((ulong)local_f0 & 0xffffffff00000000);
            local_c8 = -1;
            local_c0 = 0;
            local_b8 = 0;
          }
          local_e8 = &PTR_FUN_7104f73d50;
          local_e0 = (long ***)0x0;
          local_d0 = 0;
          if ((ulong)(param_5[0x37] - param_5[0x36] >> 4) <= uVar17) goto LAB_7101a40280;
          uVar44 = (ulong)*(int *)(*(long *)(param_5[0x36] + uVar17 * 0x10 + 8) + 0x150);
          if ((ulong)(param_5[0x34] - param_5[0x33] >> 4) <= uVar44) goto LAB_7101a4026c;
          lVar45 = *(long *)(*(long *)(*(long *)(param_5[0x33] + uVar44 * 0x10 + 8) + 0x10) + 8);
          lVar31 = 0x48c;
          if (*(int *)(lVar45 + 0x484) != 2) {
            lVar31 = 0x488;
          }
          uVar15 = *(uint *)(lVar45 + lVar31);
          uVar44 = (ulong)uVar15;
          if (uVar15 != 0xffffffff) {
            param_2 = 1.0;
            param_9 = (long ****)0x1;
            param_7 = (long ****)0x19966c38f0;
            param_8 = (byte ****)0x0;
            param_10 = 0;
            param_11 = 0;
            param_12 = 0;
            FUN_710175dfc0(1.0,1.0,*(long *)(DAT_71052c5120 + 8),uVar15,0x19966c38f0,0,1,0,0,0);
            uVar44 = extraout_x1_58;
          }
        }
        puVar50 = puVar50 + 1;
      } while (puVar50 != puVar2);
      lVar31 = param_5[0x29];
    }
    puVar2 = *(uint **)(lVar31 + 0x88);
    for (puVar50 = *(uint **)(lVar31 + 0x80); puVar50 != puVar2; puVar50 = puVar50 + 1) {
      FUN_7101a38fd0((long)param_5,*puVar50,param_7,param_8,param_9,param_10,param_11,param_12);
      uVar44 = extraout_x1_59;
    }
    for (lVar31 = param_5[0x33]; lVar31 != param_5[0x34]; lVar31 = lVar31 + 0x10) {
      lVar45 = *(long *)(*(long *)(*(long *)(lVar31 + 8) + 0x10) + 8);
      iVar14 = *(int *)(lVar45 + 0x48c);
      if (iVar14 != -1 && *(int *)(lVar45 + 0x498) == 0) {
        *(int *)(param_5 + 0x27) = iVar14;
        break;
      }
    }
  }
  lVar31 = param_5[0x36];
  lVar45 = param_5[0x37];
  if (lVar31 != lVar45) {
    do {
      plVar18 = *(long **)(lVar31 + 8);
      if (*(long **)(plVar18[0x5a] + 8) != (long *)0x0) {
        auVar69 = (**(code **)(**(long **)(plVar18[0x5a] + 8) + 0x130))();
        uVar44 = auVar69._8_8_;
        if ((auVar69._0_8_ & 1) != 0) {
          if (*(long **)(plVar18[0x5a] + 8) != (long *)0x0) {
            auVar69 = (**(code **)(**(long **)(plVar18[0x5a] + 8) + 0x138))();
            uVar44 = auVar69._8_8_;
            if ((auVar69._0_8_ & 1) == 0) goto LAB_7101a3d184;
          }
          iVar14 = (int)plVar18[0x5b];
          uVar15 = iVar14 + 2;
          if (-1 < iVar14 + 1) {
            uVar15 = iVar14 + 1;
          }
          uVar15 = (iVar14 + 1) - (uVar15 & 0xfffffffe);
          iVar14 = uVar15 + (uVar15 >> 0x1e & 2);
          *(int *)(plVar18 + 0x5b) = iVar14;
          FUN_7103778300(0x3f800000,plVar18[0x58],
                         (long)(&PTR_s_controller_joy_dual_71050a8880)[iVar14]);
          FUN_7103776910(&local_f0,(long)(plVar18 + 0x57),(long ****)"set_txt_btn",param_7,param_8,
                         param_9,param_10,param_11,param_12);
          FUN_710377a120((long)&local_f0,
                         (&PTR_s_mel_chara_select_help_press_any__71050a8890)[(int)plVar18[0x5b]],
                         param_7,param_8,param_9,param_10,param_11,param_12);
          ppplVar16 = (long ***)local_e8;
          local_f0 = &PTR_FUN_710523d9a8;
          local_e8 = (undefined **)0x0;
          uVar44 = extraout_x1_23;
          if (ppplVar16 != (long ***)0x0) {
            FUN_710392eb40((ulong)ppplVar16);
            uVar44 = extraout_x1_24;
          }
        }
      }
LAB_7101a3d184:
      lVar23 = plVar18[0x7d];
      *(int *)((long)plVar18 + 0x3d4) = (int)plVar18[0x7a];
      *(undefined4 *)(plVar18 + 0x4d) = 0;
      *(undefined4 *)(plVar18 + 0x7a) = 0xffffffff;
      *(undefined4 *)((long)plVar18 + 0x3dc) = 0xffffffff;
      *(undefined4 *)((long)plVar18 + 0x3e4) = 3;
      if (lVar23 != 0) {
        iVar14 = *(int *)((long)plVar18 + 0x414) + -1;
        if ((0 < *(int *)((long)plVar18 + 0x414)) &&
           (*(int *)((long)plVar18 + 0x414) = iVar14, iVar14 == 0)) {
          uVar15 = *(uint *)(*(long *)(*(long *)(*(long *)(lVar23 + 8) + 0x10) + 8) + 0x488);
          FUN_7103776390(&local_150,plVar18 + 0x5c,param_7,param_8,param_9,param_10,param_11,
                         param_12);
          if (((uVar15 == 0xffffffff) ||
              ((puVar49 = &DAT_7105339830, uVar15 < 10 && *(char *)(DAT_71053398b0 + 8) != '\0' &&
               (puVar49 = (undefined8 *)(&DAT_7105339860)[(int)uVar15], puVar49 == (undefined8 *)0x0
               )))) || (uVar48 = *(int *)(puVar49[2] + 0x9c) - 1, 6 < uVar48)) {
            uVar30 = 0;
          }
          else {
            uVar30 = *(undefined4 *)(&DAT_7104753de0 + (long)(int)uVar48 * 4);
          }
          FUN_710339d9f0((uint *)&local_f0,uVar30);
          FUN_7103778300(0x3f800000,local_148,(long)&local_e8);
          puVar49 = &DAT_7105339830;
          if (((uVar15 < 10 && *(char *)(DAT_71053398b0 + 8) != '\0') &&
              (puVar49 = (undefined8 *)(&DAT_7105339860)[(int)uVar15], puVar49 == (undefined8 *)0x0)
              ) || ((char)((long *)puVar49[2])[0x17] == '\0')) {
LAB_7101a3d2f8:
            local_130 = (undefined **)((ulong)local_130 & 0xffffffffffffff00);
            local_138 = (long ***)0x811c9dc5;
          }
          else {
            cVar13 = (**(code **)(*(long *)puVar49[2] + 0x20))();
            bVar47 = cVar13 - 1;
            if ((0xe < bVar47) || ((0x2e8aUL >> ((long)(char)bVar47 & 0x3fU) & 1) != 0))
            goto LAB_7101a3d2f8;
            FUN_71003a4ca0((uint *)&local_138,"indicator_%d",
                           (ulong)(*(int *)(&DAT_7104753e00 + (long)(char)bVar47 * 4) + 1),param_7,
                           param_8,param_9,param_10,param_11,param_12);
            if (local_138._4_4_ != 0) {
              FUN_7103778300(0x3f800000,local_148,(long)&local_130);
            }
          }
          uVar44 = local_148;
          local_150 = (long **)&PTR_FUN_710523d988;
          local_148 = 0;
          if (uVar44 != 0) {
            uVar17 = *(ulong *)(uVar44 + 0x18);
            *(undefined ***)(uVar44 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar44 + 0x18) = 0;
            if (uVar17 != 0) {
              FUN_710392eb40(uVar17);
            }
            FUN_710392eb40(uVar44);
          }
          FUN_7103776390(&local_160,plVar18 + 0x5e,param_7,param_8,param_9,param_10,param_11,
                         param_12);
          if (uVar15 == 0xffffffff) {
LAB_7101a3d3b0:
            uVar30 = 0;
          }
          else {
            if (uVar15 < 10) {
              puVar49 = &DAT_7105339830;
              if ((*(char *)(DAT_71053398b0 + 8) != '\0') &&
                 (puVar49 = (undefined8 *)(&DAT_7105339860)[(int)uVar15],
                 puVar49 == (undefined8 *)0x0)) goto LAB_7101a3d3b0;
            }
            else {
              puVar49 = &DAT_7105339830;
            }
            uVar48 = *(int *)(puVar49[2] + 0x9c) - 1;
            if (6 < uVar48) goto LAB_7101a3d3b0;
            uVar30 = *(undefined4 *)(&DAT_7104753de0 + (long)(int)uVar48 * 4);
          }
          FUN_710339d9f0((uint *)&local_f0,uVar30);
          FUN_7103778300(0x3f800000,local_158,(long)&local_e8);
          if (uVar15 < 10) {
            puVar49 = &DAT_7105339830;
            if ((*(char *)(DAT_71053398b0 + 8) == '\0') ||
               (puVar49 = (undefined8 *)(&DAT_7105339860)[(int)uVar15], puVar49 != (undefined8 *)0x0
               )) goto LAB_7101a3d408;
LAB_7101a3d47c:
            local_130 = (undefined **)((ulong)local_130 & 0xffffffffffffff00);
            local_138 = (long ***)0x811c9dc5;
          }
          else {
            puVar49 = &DAT_7105339830;
LAB_7101a3d408:
            if ((char)((long *)puVar49[2])[0x17] == '\0') goto LAB_7101a3d47c;
            cVar13 = (**(code **)(*(long *)puVar49[2] + 0x20))();
            bVar47 = cVar13 - 1;
            if ((0xe < bVar47) || ((0x2e8aUL >> ((long)(char)bVar47 & 0x3fU) & 1) != 0))
            goto LAB_7101a3d47c;
            FUN_71003a4ca0((uint *)&local_138,"indicator_%d",
                           (ulong)(*(int *)(&DAT_7104753e00 + (long)(char)bVar47 * 4) + 1),param_7,
                           param_8,param_9,param_10,param_11,param_12);
            if (local_138._4_4_ != 0) {
              FUN_7103778300(0x3f800000,local_158,(long)&local_130);
            }
          }
          uVar44 = local_158;
          local_160 = &PTR_FUN_710523d988;
          local_158 = 0;
          if (uVar44 != 0) {
            uVar17 = *(ulong *)(uVar44 + 0x18);
            *(undefined ***)(uVar44 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar44 + 0x18) = 0;
            if (uVar17 != 0) {
              FUN_710392eb40(uVar17);
            }
            FUN_710392eb40(uVar44);
          }
          FUN_7103776390(&local_f0,plVar18 + 0x5c,param_7,param_8,param_9,param_10,param_11,param_12
                        );
          FUN_710337d0d0((long)&local_f0,uVar15,param_7,param_8,param_9,param_10,param_11,param_12);
          ppplVar16 = (long ***)local_e8;
          local_f0 = &PTR_FUN_710523d988;
          local_e8 = (undefined **)0x0;
          if (ppplVar16 != (long ***)0x0) {
            pplVar19 = ppplVar16[3];
            ppplVar16[2] = (long **)&PTR_FUN_710523d9a8;
            ppplVar16[3] = (long **)0x0;
            if (pplVar19 != (long **)0x0) {
              FUN_710392eb40((ulong)pplVar19);
            }
            FUN_710392eb40((ulong)ppplVar16);
          }
          lVar23 = plVar18[0x7d];
          *(undefined4 *)((long)plVar18 + 0x414) = 0;
        }
        lVar53 = plVar18[0x77];
        for (lVar38 = plVar18[0x76]; lVar38 != lVar53; lVar38 = lVar38 + 0x10) {
          if (*(char *)(*(long *)(lVar38 + 8) + 0x104) != '\0') {
            local_d0 = 0;
            local_c8 = -1;
            lVar32 = *(long *)(lVar23 + 8);
            lVar39 = *(long *)(*(long *)(lVar32 + 0x10) + 8);
            if (((*(int *)(lVar39 + 0x484) == 0) && (*(int *)(lVar39 + 0x488) == -1)) ||
               (*(char *)(lVar39 + 0x4aa) == '\0' || *(char *)(lVar32 + 0x36) == '\0')) {
              uVar30 = 0;
            }
            else {
              uVar30 = 1;
              if ((*(byte *)(lVar39 + 0x1a8) & 2) != 0) {
                uVar30 = 2;
              }
            }
            local_f0 = (undefined **)CONCAT44((int)((ulong)local_f0 >> 0x20),uVar30);
            uVar67 = *(undefined8 *)(*(long *)(*(long *)(lVar32 + 0x20) + 0x100) + 0x60);
            local_e0 = (long ***)
                       CONCAT44(540.0 - (float)((ulong)uVar67 >> 0x20),(float)uVar67 + 960.0);
            uStack_d8 = 0;
            FUN_710376e330(*(long **)(*(long *)(lVar38 + 8) + 200),(int *)&local_f0);
            if ((int)local_c8 != -1) {
              *(undefined1 *)(*(long *)(*(long *)(lVar23 + 8) + 0x20) + 0x165) = 1;
            }
            if (local_c8._4_4_ != -1) {
              FUN_71032d3260(*(long *)(*(long *)(lVar23 + 8) + 0x20),extraout_x1_25,param_7,param_8,
                             param_9,param_10,param_11,param_12);
            }
            lVar23 = plVar18[0x7d];
          }
        }
        FUN_7101a4a0e0((long)plVar18,lVar23,param_7,param_8,param_9,param_10,param_11,param_12);
        uVar44 = extraout_x1_26;
      }
      if (((*(char *)((long)plVar18 + 0x419) != '\0') && (plVar18[0x7d] == 0)) &&
         (((int)plVar18[0x27] - 2U < 2 ||
          (((int)plVar18[0x27] == 0xb && (*(int *)(*(long *)(DAT_710532f7b0 + 8) + 0xa28) != 2))))))
      {
        lVar38 = plVar18[0x77];
        for (lVar23 = plVar18[0x76]; lVar23 != lVar38; lVar23 = lVar23 + 0x10) {
          lVar25 = *(long *)(lVar23 + 8);
          local_e8 = (undefined **)0x0;
          local_e0 = (long ***)0x0;
          local_f0 = (undefined **)0x0;
          lVar53 = param_5[0x33];
          lVar32 = param_5[0x34];
          lVar39 = lVar32 - lVar53;
          ppplVar16 = (long ***)local_e8;
          if (lVar39 != 0) {
            uVar44 = lVar39 >> 4;
            if (0x555555555555555 < uVar44) goto LAB_7101a4027c;
            ppplVar22 = (long ***)(uVar44 * 0x30);
            if (ppplVar22 == (long ***)0x0) {
              ppplVar22 = (long ***)0x1;
            }
            ppplVar16 = (long ***)
                        FUN_710392e290(0x10,ppplVar22,param_7,param_8,param_9,param_10,param_11,
                                       param_12);
            if (ppplVar16 == (long ***)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_150 = (long **)((ulong)local_150 & 0xffffffff00000000);
                param_7 = (long ****)&local_138;
                local_138 = ppplVar22;
                uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_150);
                if (((uVar17 & 1) != 0) &&
                   (ppplVar16 = (long ***)
                                FUN_710392e290(0x10,ppplVar22,param_7,param_8,param_9,param_10,
                                               param_11,param_12), ppplVar16 != (long ***)0x0))
                goto LAB_7101a3d6d8;
              }
              ppplVar16 = (long ***)0x0;
            }
LAB_7101a3d6d8:
            local_e0 = ppplVar16 + uVar44 * 6;
            local_e8 = (undefined **)ppplVar16;
          }
          for (; local_f0 = (undefined **)ppplVar16, lVar53 != lVar32; lVar53 = lVar53 + 0x10) {
            uVar44 = 0x555555555555555;
            uVar30 = 1;
            local_150 = (long **)0x0;
            lVar39 = *(long *)(lVar53 + 8);
            lVar33 = *(long *)(*(long *)(lVar39 + 0x10) + 8);
            if (((*(int *)(lVar33 + 0x484) == 0) && (*(int *)(lVar33 + 0x488) == -1)) ||
               (*(char *)(lVar33 + 0x4aa) == '\0' || *(char *)(lVar39 + 0x36) == '\0')) {
              uVar30 = 0;
            }
            else if ((*(byte *)(lVar33 + 0x1a8) & 2) != 0) {
              uVar30 = 2;
            }
            uVar67 = *(undefined8 *)(*(long *)(*(long *)(lVar39 + 0x20) + 0x100) + 0x60);
            pplVar19 = (long **)CONCAT44(540.0 - (float)((ulong)uVar67 >> 0x20),
                                         (float)uVar67 + 960.0);
            if ((long ***)local_e8 == local_e0) {
              pppplVar57 = (long ****)((long)local_e8 - (long)ppplVar16);
              uVar17 = ((long)pppplVar57 >> 4) * -0x5555555555555555 + 1;
              if (0x555555555555555 < uVar17) goto LAB_7101a40274;
              lVar39 = (long)local_e0 - (long)ppplVar16 >> 4;
              if ((ulong)(lVar39 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
                uVar54 = lVar39 * 0x5555555555555556;
                uVar44 = uVar17;
                if (uVar17 <= uVar54) {
                  uVar44 = uVar54;
                }
                if (uVar44 != 0) goto LAB_7101a3d800;
                lVar39 = 0;
              }
              else {
LAB_7101a3d800:
                ppplVar22 = (long ***)(uVar44 * 0x30);
                if (ppplVar22 == (long ***)0x0) {
                  ppplVar22 = (long ***)0x1;
                }
                lVar39 = FUN_710392e290(0x10,ppplVar22,param_7,param_8,param_9,param_10,param_11,
                                        param_12);
                if (lVar39 == 0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_160 = (undefined **)((ulong)local_160 & 0xffffffff00000000);
                    param_7 = (long ****)&local_138;
                    local_138 = ppplVar22;
                    uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_160);
                    if (((uVar17 & 1) != 0) &&
                       (lVar39 = FUN_710392e290(0x10,ppplVar22,param_7,param_8,param_9,param_10,
                                                param_11,param_12), lVar39 != 0))
                    goto LAB_7101a3d868;
                  }
                  lVar39 = 0;
                }
              }
LAB_7101a3d868:
              puVar26 = (undefined4 *)(lVar39 + ((long)pppplVar57 >> 4) * 0x10);
              lVar33 = SUB168(SEXT816((long)pppplVar57) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
              *puVar26 = uVar30;
              puVar26[3] = local_130._0_4_;
              *(long ****)(puVar26 + 1) = local_138;
              *(undefined8 *)(puVar26 + 6) = 0;
              *(long ***)(puVar26 + 4) = pplVar19;
              ppplVar22 = (long ***)(lVar39 + uVar44 * 0x30);
              ppplVar52 = (long ***)(puVar26 + ((lVar33 >> 3) - (lVar33 >> 0x3f)) * 0xc);
              *(long ***)(puVar26 + 8) = local_150;
              *(undefined8 *)(puVar26 + 10) = 0xffffffffffffffff;
              if (0 < (long)pppplVar57) {
                memcpy(ppplVar52,ppplVar16,(size_t)pppplVar57);
                param_7 = pppplVar57;
              }
              local_f0 = (undefined **)ppplVar52;
              local_e8 = (undefined **)(puVar26 + 0xc);
              local_e0 = ppplVar22;
              if (ppplVar16 != (long ***)0x0) {
                FUN_710392eb40((ulong)ppplVar16);
              }
            }
            else {
              *(undefined4 *)local_e8 = uVar30;
              local_e8[3] = (undefined *)0x0;
              local_e8[2] = (undefined *)pplVar19;
              *(undefined4 *)((long)local_e8 + 0xc) = local_130._0_4_;
              *(long ****)((long)local_e8 + 4) = local_138;
              local_e8[4] = (undefined *)0x0;
              local_e8[5] = (undefined *)0xffffffffffffffff;
              local_e8 = local_e8 + 6;
            }
            ppplVar16 = (long ***)local_f0;
          }
          iVar14 = FUN_710376e720(*(long **)(lVar25 + 200),&local_f0,param_7,param_8,param_9,
                                  param_10,param_11,param_12);
          uVar17 = ((long)local_e8 - (long)local_f0 >> 4) * -0x5555555555555555;
          ppplVar16 = (long ***)local_f0;
          uVar44 = extraout_x1_27;
          if (0 < (int)uVar17) {
            lVar32 = 0;
            uVar54 = 0;
            lVar53 = 8;
            ppplVar22 = (long ***)local_e8;
            do {
              if (uVar17 <= uVar54) goto LAB_7101a40264;
              if (*(int *)((long)ppplVar16 + lVar32 + 0x28) != -1) {
                if ((ulong)(param_5[0x34] - param_5[0x33] >> 4) <= uVar54) goto LAB_7101a4026c;
                *(undefined1 *)(*(long *)(*(long *)(param_5[0x33] + lVar53) + 0x20) + 0x165) = 1;
              }
              uVar17 = ((long)ppplVar22 - (long)ppplVar16 >> 4) * -0x5555555555555555;
              if (uVar17 < uVar54 || uVar17 - uVar54 == 0) goto LAB_7101a40264;
              if (*(int *)((long)ppplVar16 + lVar32 + 0x2c) != -1) {
                if ((ulong)(param_5[0x34] - param_5[0x33] >> 4) <= uVar54) goto LAB_7101a4026c;
                FUN_71032d3260(*(long *)(*(long *)(param_5[0x33] + lVar53) + 0x20),uVar44,param_7,
                               param_8,param_9,param_10,param_11,param_12);
                uVar17 = ((long)local_e8 - (long)local_f0 >> 4) * -0x5555555555555555;
                ppplVar16 = (long ***)local_f0;
                uVar44 = extraout_x1_28;
                ppplVar22 = (long ***)local_e8;
                if (uVar17 < uVar54 || uVar17 - uVar54 == 0) goto LAB_7101a40264;
              }
              uVar54 = uVar54 + 1;
              lVar53 = lVar53 + 0x10;
              lVar32 = lVar32 + 0x30;
            } while ((long)uVar54 < (long)(int)uVar17);
          }
          if (ppplVar16 != (long ***)0x0) {
            local_e8 = (undefined **)ppplVar16;
            FUN_710392eb40((ulong)ppplVar16);
            uVar44 = extraout_x1_29;
          }
          if (iVar14 != -1) {
            if ((ulong)(param_5[0x34] - param_5[0x33] >> 4) <= (ulong)(long)iVar14)
            goto LAB_7101a4026c;
            lVar53 = param_5[0x33] + (long)iVar14 * 0x10;
            FUN_7101a49c60((long)plVar18,uVar44,param_7,param_8,param_9,param_10,param_11,param_12);
            plVar18[0x7e] = lVar53;
            uVar44 = extraout_x1_30;
            if (lVar53 != 0) {
              lVar32 = plVar18[0x76];
              lVar39 = plVar18[0x77];
              plVar18[0x80] = lVar53;
              if (lVar32 != lVar39) {
                uVar17 = (lVar39 + -0x10) - lVar32;
                uVar15 = ((uint)(uVar17 >> 4) & 0xfffffff) + 1;
                if ((uVar15 & 7) != 0) {
                  lVar53 = -((ulong)uVar15 & 7);
                  do {
                    plVar55 = (long *)(lVar32 + 8);
                    lVar32 = lVar32 + 0x10;
                    lVar53 = lVar53 + 1;
                    *(undefined1 *)(*plVar55 + 0x106) = 0;
                  } while (lVar53 != 0);
                }
                if (0x6f < uVar17) {
                  do {
                    *(undefined1 *)(*(long *)(lVar32 + 8) + 0x106) = 0;
                    *(undefined1 *)(*(long *)(lVar32 + 0x18) + 0x106) = 0;
                    *(undefined1 *)(*(long *)(lVar32 + 0x28) + 0x106) = 0;
                    *(undefined1 *)(*(long *)(lVar32 + 0x38) + 0x106) = 0;
                    *(undefined1 *)(*(long *)(lVar32 + 0x48) + 0x106) = 0;
                    *(undefined1 *)(*(long *)(lVar32 + 0x58) + 0x106) = 0;
                    *(undefined1 *)(*(long *)(lVar32 + 0x68) + 0x106) = 0;
                    plVar55 = (long *)(lVar32 + 0x78);
                    lVar32 = lVar32 + 0x80;
                    *(undefined1 *)(*plVar55 + 0x106) = 0;
                  } while (lVar39 != lVar32);
                }
              }
            }
          }
        }
        uVar30 = 1;
        lVar23 = param_5[0x33];
        if ((param_5[0x34] - lVar23 == 0) || ((ulong)(param_5[0x34] - lVar23 >> 4) < 2)) {
LAB_7101a4026c:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        if ((((int)plVar18[0x2a] == 1) && (lVar23 != 0)) && ((int)plVar18[0x27] == 2)) {
          local_150 = (long **)0x0;
          lVar38 = *(long *)(lVar23 + 8);
          lVar53 = *(long *)(*(long *)(lVar38 + 0x10) + 8);
          if (((*(int *)(lVar53 + 0x484) == 0) && (*(int *)(lVar53 + 0x488) == -1)) ||
             (*(char *)(lVar53 + 0x4aa) == '\0' || *(char *)(lVar38 + 0x36) == '\0')) {
            uVar30 = 0;
          }
          else if ((*(byte *)(lVar53 + 0x1a8) & 2) != 0) {
            uVar30 = 2;
          }
          uVar67 = *(undefined8 *)(*(long *)(*(long *)(lVar38 + 0x20) + 0x100) + 0x60);
          ppplVar16 = (long ***)
                      FUN_710392e290(0x10,0x30,param_7,param_8,param_9,param_10,param_11,param_12);
          if (ppplVar16 == (long ***)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_138 = (long ***)((ulong)local_138 & 0xffffffff00000000);
              local_f0 = (undefined **)&DAT_00000030;
              param_7 = (long ****)&local_f0;
              uVar44 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_138);
              if (((uVar44 & 1) != 0) &&
                 (ppplVar16 = (long ***)
                              FUN_710392e290(0x10,0x30,param_7,param_8,param_9,param_10,param_11,
                                             param_12), ppplVar16 != (long ***)0x0))
              goto LAB_7101a3dc00;
            }
            ppplVar16 = (long ***)0x0;
          }
LAB_7101a3dc00:
          *(undefined4 *)ppplVar16 = uVar30;
          *(undefined4 *)((long)ppplVar16 + 0xc) = local_130._0_4_;
          *(long ****)((long)ppplVar16 + 4) = local_138;
          ppplVar16[3] = (long **)0x0;
          ppplVar16[2] = (long **)CONCAT44(540.0 - (float)((ulong)uVar67 >> 0x20),
                                           (float)uVar67 + 960.0);
          ppplVar22 = ppplVar16 + 6;
          ppplVar16[4] = local_150;
          ppplVar16[5] = (long **)0xffffffffffffffff;
          local_f0 = (undefined **)ppplVar16;
          local_e8 = (undefined **)ppplVar22;
          local_e0 = ppplVar22;
          FUN_710376e720((long *)plVar18[0x65],&local_f0,param_7,param_8,param_9,param_10,param_11,
                         param_12);
          uVar17 = 0;
          uVar54 = 1;
          uVar44 = extraout_x1_31;
          do {
            if (uVar54 <= uVar17) {
LAB_7101a40264:
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            if (*(int *)(ppplVar16 + uVar17 * 6 + 5) != -1) {
              *(undefined1 *)(*(long *)(*(long *)(lVar23 + 8) + 0x20) + 0x165) = 1;
            }
            uVar54 = ((long)ppplVar22 - (long)ppplVar16 >> 4) * -0x5555555555555555;
            if (uVar54 < uVar17 || uVar54 - uVar17 == 0) goto LAB_7101a40264;
            if ((*(int *)((long)ppplVar16 + uVar17 * 0x30 + 0x2c) != -1) &&
               (FUN_71032d3260(*(long *)(*(long *)(lVar23 + 8) + 0x20),uVar44,param_7,param_8,
                               param_9,param_10,param_11,param_12), uVar44 = extraout_x1_32,
               plVar18[0x7d] != lVar23)) {
              FUN_7101a49c60((long)plVar18,extraout_x1_32,param_7,param_8,param_9,param_10,param_11,
                             param_12);
              lVar38 = plVar18[0x76];
              lVar53 = plVar18[0x77];
              plVar18[0x7e] = lVar23;
              plVar18[0x80] = lVar23;
              uVar44 = extraout_x1_33;
              if (lVar38 != lVar53) {
                uVar54 = (lVar53 + -0x10) - lVar38;
                uVar15 = ((uint)(uVar54 >> 4) & 0xfffffff) + 1;
                if ((uVar15 & 7) != 0) {
                  lVar32 = -((ulong)uVar15 & 7);
                  do {
                    plVar55 = (long *)(lVar38 + 8);
                    lVar38 = lVar38 + 0x10;
                    lVar32 = lVar32 + 1;
                    *(undefined1 *)(*plVar55 + 0x106) = 0;
                  } while (lVar32 != 0);
                }
                if (0x6f < uVar54) {
                  do {
                    *(undefined1 *)(*(long *)(lVar38 + 8) + 0x106) = 0;
                    *(undefined1 *)(*(long *)(lVar38 + 0x18) + 0x106) = 0;
                    *(undefined1 *)(*(long *)(lVar38 + 0x28) + 0x106) = 0;
                    *(undefined1 *)(*(long *)(lVar38 + 0x38) + 0x106) = 0;
                    *(undefined1 *)(*(long *)(lVar38 + 0x48) + 0x106) = 0;
                    *(undefined1 *)(*(long *)(lVar38 + 0x58) + 0x106) = 0;
                    *(undefined1 *)(*(long *)(lVar38 + 0x68) + 0x106) = 0;
                    plVar55 = (long *)(lVar38 + 0x78);
                    lVar38 = lVar38 + 0x80;
                    *(undefined1 *)(*plVar55 + 0x106) = 0;
                  } while (lVar53 != lVar38);
                }
              }
            }
            uVar54 = ((long)local_e8 - (long)local_f0 >> 4) * -0x5555555555555555;
            uVar17 = uVar17 + 1;
            ppplVar22 = (long ***)local_e8;
            ppplVar16 = (long ***)local_f0;
          } while ((long)uVar17 < (long)(int)uVar54);
          if (*(int *)(plVar18[0x65] + 0x25c) == 0) {
            FUN_7101a49c60((long)plVar18,uVar44,param_7,param_8,param_9,param_10,param_11,param_12);
            lVar38 = plVar18[0x76];
            lVar53 = plVar18[0x77];
            plVar18[0x7e] = lVar23;
            plVar18[0x80] = lVar23;
            if (lVar38 != lVar53) {
              uVar44 = (lVar53 + -0x10) - lVar38;
              uVar15 = ((uint)(uVar44 >> 4) & 0xfffffff) + 1;
              if ((uVar15 & 7) != 0) {
                lVar32 = -((ulong)uVar15 & 7);
                do {
                  plVar55 = (long *)(lVar38 + 8);
                  lVar38 = lVar38 + 0x10;
                  lVar32 = lVar32 + 1;
                  *(undefined1 *)(*plVar55 + 0x106) = 0;
                } while (lVar32 != 0);
              }
              if (0x6f < uVar44) {
                do {
                  *(undefined1 *)(*(long *)(lVar38 + 8) + 0x106) = 0;
                  *(undefined1 *)(*(long *)(lVar38 + 0x18) + 0x106) = 0;
                  *(undefined1 *)(*(long *)(lVar38 + 0x28) + 0x106) = 0;
                  *(undefined1 *)(*(long *)(lVar38 + 0x38) + 0x106) = 0;
                  *(undefined1 *)(*(long *)(lVar38 + 0x48) + 0x106) = 0;
                  *(undefined1 *)(*(long *)(lVar38 + 0x58) + 0x106) = 0;
                  *(undefined1 *)(*(long *)(lVar38 + 0x68) + 0x106) = 0;
                  plVar55 = (long *)(lVar38 + 0x78);
                  lVar38 = lVar38 + 0x80;
                  *(undefined1 *)(*plVar55 + 0x106) = 0;
                } while (lVar53 != lVar38);
              }
            }
            *(undefined4 *)(plVar18 + 0x4d) = 3;
            uVar44 = extraout_x1_34;
          }
          if ((long ***)local_f0 != (long ***)0x0) {
            local_e8 = local_f0;
            FUN_710392eb40((ulong)local_f0);
            uVar44 = extraout_x1_35;
          }
        }
        lVar38 = *(long *)(*(long *)(*(long *)(lVar23 + 0x18) + 0x10) + 8);
        if ((*(int *)(lVar38 + 0x484) == 0) && (*(int *)(lVar38 + 0x488) == -1)) {
          lVar38 = *(long *)(*(long *)(*(long *)(lVar23 + 8) + 0x10) + 8);
          if ((*(int *)(lVar38 + 0x484) == 0) && (*(int *)(lVar38 + 0x488) == -1))
          goto LAB_7101a3de74;
        }
        else {
          lVar23 = lVar23 + 0x10;
        }
        FUN_7101a4a0e0((long)plVar18,lVar23,param_7,param_8,param_9,param_10,param_11,param_12);
        uVar44 = extraout_x1_36;
      }
LAB_7101a3de74:
      lVar38 = plVar18[0x77];
      for (lVar23 = plVar18[0x76]; lVar23 != lVar38; lVar23 = lVar23 + 0x10) {
        lVar53 = *(long *)(lVar23 + 8);
        *(undefined4 *)(lVar53 + 0xd4) = 0;
        auVar69 = (**(code **)(**(long **)(lVar53 + 200) + 0x68))();
        uVar44 = auVar69._8_8_;
        if ((auVar69._0_8_ & 1) == 0) goto switchD_7101a3ded8_default;
        auVar69 = (**(code **)(**(long **)(lVar53 + 200) + 0x78))();
        uVar44 = auVar69._8_8_;
        if ((auVar69._0_8_ & 1) == 0) goto switchD_7101a3ded8_default;
        switch(*(undefined4 *)(*(long *)(lVar53 + 200) + 0x25c)) {
        case 0:
          *(undefined4 *)(lVar53 + 0xd4) = 1;
          goto switchD_7101a3ded8_default;
        case 1:
          if (*(int *)(lVar53 + 0xd8) == 1) {
            uVar30 = 6;
          }
          else {
            if (*(int *)(lVar53 + 0xd8) != 0) goto switchD_7101a3ded8_default;
            uVar30 = 5;
          }
          break;
        case 2:
          uVar30 = 7;
          break;
        case 3:
          uVar30 = 2;
          break;
        case 4:
          uVar30 = 3;
          break;
        case 5:
          uVar30 = 4;
          break;
        default:
          goto switchD_7101a3ded8_default;
        }
        *(undefined4 *)(lVar53 + 0xd4) = uVar30;
switchD_7101a3ded8_default:
      }
      FUN_71019e7c00((undefined8 *)plVar18[0x67],uVar44,param_7,param_8,param_9,param_10,param_11,
                     param_12);
      FUN_71019f9b50(plVar18[0x69],extraout_x1_37,param_7,param_8,param_9,param_10,param_11,param_12
                    );
      FUN_71019e8ff0(plVar18[0x6b],extraout_x1_38,param_7,param_8,param_9,param_10,param_11,param_12
                    );
      lVar23 = plVar18[0x6d];
      if (*(char *)(lVar23 + 0x48) == '\0') {
        if (*(char *)(*(long *)(lVar23 + 0x30) + 0x316) == '\0') {
          uVar15 = *(uint *)(*(long *)(lVar23 + 0x30) + 0x2b4);
          if (uVar15 == 0xffffffff) goto LAB_7101a3e04c;
          if (0xc < uVar15) goto LAB_7101a4027c;
          switch(*(undefined4 *)(&DAT_7104543a78 + (long)(int)uVar15 * 4)) {
          case 1:
            uVar29 = 10;
            break;
          case 2:
            uVar29 = 0x14;
            break;
          case 3:
            uVar29 = 0x1e;
            break;
          case 4:
            uVar29 = 0x28;
            break;
          case 5:
            uVar29 = 0x32;
            break;
          case 6:
            uVar29 = 0x3c;
            break;
          case 7:
            uVar29 = 0x50;
            break;
          case 8:
            uVar29 = 100;
            break;
          case 9:
            uVar29 = 0x7d;
            break;
          case 10:
            uVar29 = 0x96;
            break;
          case 0xb:
            uVar29 = 200;
            break;
          case 0xc:
            uVar29 = 300;
            break;
          default:
            uVar29 = 0;
          }
          *(undefined2 *)(lVar23 + 0x3c) = uVar29;
          *(undefined4 *)(lVar23 + 0x44) = 2;
        }
        else {
          *(undefined4 *)(lVar23 + 0x44) = 1;
        }
        *(undefined1 *)(lVar23 + 0x48) = 1;
      }
LAB_7101a3e04c:
      FUN_71019eace0(plVar18[0x6f]);
      FUN_7101a0f290(plVar18[0x71],extraout_x1_39,param_7,param_8,param_9,param_10,param_11,param_12
                    );
      lVar23 = plVar18[0x73];
      if (*(char *)(lVar23 + 100) == '\0') {
        if (*(char *)(*(long *)(lVar23 + 0x58) + 0x316) == '\0') {
          iVar14 = *(int *)(*(long *)(lVar23 + 0x58) + 0x2b4);
          if (iVar14 == -1) goto LAB_7101a3e0d4;
          if (iVar14 < 0) {
LAB_7101a3e0c4:
            *(undefined4 *)(lVar23 + 0x50) = 0;
LAB_7101a3e0c8:
            uVar30 = 1;
          }
          else {
            uVar44 = *(long *)(lVar23 + 0x40) - *(long *)(lVar23 + 0x38) >> 2;
            if ((int)uVar44 <= iVar14) goto LAB_7101a3e0c4;
            if (uVar44 <= (ulong)(long)iVar14) {
LAB_7101a40298:
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            iVar14 = *(int *)(*(long *)(lVar23 + 0x38) + (long)iVar14 * 4);
            *(int *)(lVar23 + 0x50) = iVar14;
            if (iVar14 == 0) goto LAB_7101a3e0c8;
            uVar30 = 2;
          }
          *(undefined4 *)(lVar23 + 0x60) = uVar30;
        }
        else {
          *(undefined4 *)(lVar23 + 0x60) = 1;
        }
        *(undefined1 *)(lVar23 + 100) = 1;
      }
LAB_7101a3e0d4:
      FUN_71019e6420((long *)plVar18[0x75]);
      piVar24 = (int *)plVar18[0x4a];
      piVar56 = (int *)plVar18[0x4b];
      if (piVar24 != piVar56) {
        plVar55 = plVar18 + 0x2a;
        uVar67 = extraout_x1_40;
        do {
          if (((int)plVar18[0x4d] == 0) && ((int)plVar18[0x27] == 3)) {
            lVar23 = plVar18[0x4a];
            uVar44 = (plVar18[0x4b] - lVar23 >> 3) * 0x7efdfbf7efdfbf7f;
            uVar17 = (ulong)*piVar24;
            if (uVar44 < uVar17 || uVar44 - uVar17 == 0) goto LAB_7101a40280;
            if ((ulong)(plVar18[0x77] - plVar18[0x76] >> 4) <= uVar17) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            iVar14 = *(int *)(*(long *)(plVar18[0x76] + uVar17 * 0x10 + 8) + 0xd4);
            if (iVar14 - 1U < 7) {
              piVar27 = (int *)(lVar23 + uVar17 * 0x3f8);
              switch(iVar14) {
              case 1:
                piVar34 = (int *)(lVar23 + uVar17 * 0x3f8 + 0x10);
                iVar4 = *piVar34;
                iVar14 = 0;
                if (iVar4 != 3) {
                  iVar14 = iVar4 + 1;
                }
                do {
                  if (iVar14 == 0) {
                    if ((plVar18[0x7d] != 0) &&
                       (*(int *)(*(long *)(plVar18[0x7d] + 8) + 0x28) == (int)*plVar55)) {
                      iVar37 = 0;
                      break;
                    }
                  }
                  else if (iVar14 != 3) {
                    iVar37 = iVar14;
                    if (iVar14 != 2) break;
                    if ((DAT_7105324ae1 != '\0') && ((int)plVar18[0x7c] == -1)) {
                      iVar37 = 2;
                      break;
                    }
                  }
                  iVar21 = 0;
                  if (iVar14 != 3) {
                    iVar21 = iVar14 + 1;
                  }
                  iVar37 = iVar4;
                  iVar14 = iVar21;
                } while (iVar21 != iVar4);
                *(int *)((long)plVar18 + 0x3e4) = iVar37;
                if (iVar37 != *piVar34) {
                  *(undefined4 *)(plVar18 + 0x4d) = 1;
                  *(int *)(plVar18 + 0x7a) = *piVar27;
                }
                FUN_7101a49c60((long)plVar18,uVar67,param_7,param_8,param_9,param_10,param_11,
                               param_12);
                uVar67 = extraout_x1_41;
                break;
              case 2:
                *(undefined4 *)(plVar18 + 0x4d) = 5;
                iVar14 = *piVar27;
                *(int *)(plVar18 + 0x7a) = iVar14;
                FUN_7101a4a510((long)plVar18,iVar14);
                uVar67 = extraout_x1_44;
                break;
              case 3:
                *(undefined4 *)(plVar18 + 0x4d) = 6;
                iVar14 = *piVar27;
                *(int *)(plVar18 + 0x7a) = iVar14;
                FUN_7101a4a6c0((long)plVar18,iVar14);
                uVar67 = extraout_x1_43;
                break;
              case 4:
                if (*(char *)((long)plVar18 + 0x41a) != '\0') {
                  lVar38 = plVar18[0x7d];
                  if (lVar38 == 0) {
                    if (plVar18[0x7e] == 0) break;
                    cVar13 = *(char *)(*(long *)(plVar18[0x7e] + 8) + 0x36);
                  }
                  else {
                    cVar13 = *(char *)(*(long *)(lVar38 + 8) + 0x36);
                  }
                  if (cVar13 != '\0') {
                    *(int *)(plVar18 + 0x7b) = *piVar27;
                    lVar53 = *(long *)(DAT_710532f730 + 8);
                    uVar44 = *(ulong *)(lVar23 + uVar17 * 0x3f8 + 0x18);
                    uVar15 = FUN_71032633f0(*(long *)(lVar53 + 0x168),uVar44);
                    if ((int)uVar15 < 2) {
                      bVar12 = FUN_7103265e70(lVar53 + 0x160,uVar44);
                      uVar67 = extraout_x1_47;
                      if (!bVar12) break;
                      if (lVar38 == 0) {
                        lVar38 = plVar18[0x7e];
                        plVar18[0x7f] = lVar38;
                        if (lVar38 != 0) goto LAB_7101a3e720;
                        param_7 = (long ****)0x0;
                        plVar20 = plVar55;
                      }
                      else {
                        plVar18[0x7f] = lVar38;
LAB_7101a3e720:
                        lVar23 = *(long *)(lVar38 + 8);
                        lVar38 = *(long *)(lVar23 + 0x20);
                        *(undefined1 *)(lVar23 + 0x36) = 0;
                        plVar20 = *(long **)(lVar38 + 0x100);
                        (**(code **)(*plVar20 + 0x60))(plVar20,0);
                        *(undefined1 *)(lVar38 + 0x162) = 0;
                        bVar12 = false;
                        if ((*(char *)(lVar23 + 0x35) != '\0') &&
                           (bVar12 = false, *(char *)(lVar23 + 0x36) != '\0')) {
                          bVar12 = *(char *)(lVar23 + 0x37) == '\0';
                        }
                        lVar23 = *(long *)(lVar23 + 0x20);
                        lVar38 = *(long *)(*(long *)(lVar23 + 0x100) + 0x38);
                        if (lVar38 != 0) {
                          *(byte *)(lVar38 + 0x58) = *(byte *)(lVar38 + 0x58) & 0xfe | bVar12;
                        }
                        *(bool *)(lVar23 + 0x163) = bVar12;
                        param_7 = (long ****)(ulong)*(uint *)(*(long *)(plVar18[0x7f] + 8) + 8);
                        plVar20 = (long *)(*(long *)(plVar18[0x7f] + 8) + 0x28);
                      }
                      FUN_7101a48cd0((long)plVar18,(int)*plVar20,(uint)param_7,param_8,param_9,
                                     param_10,param_11,param_12);
                      *(undefined1 *)((long)plVar18 + 0x41a) = 0;
                      if (0x12 < *(uint *)((long)plVar18 + 0x134)) goto LAB_7101a4027c;
                      lVar23 = (long)plVar18 + (long)(int)*(uint *)((long)plVar18 + 0x134) * 4;
                      uVar30 = 10;
                      uVar67 = extraout_x1_49;
                    }
                    else {
                      if (lVar38 == 0) {
                        lVar38 = plVar18[0x7e];
                        plVar18[0x7f] = lVar38;
                        if (lVar38 != 0) goto LAB_7101a3e674;
                        param_7 = (long ****)0x0;
                        plVar20 = plVar55;
                      }
                      else {
                        plVar18[0x7f] = lVar38;
LAB_7101a3e674:
                        lVar23 = *(long *)(lVar38 + 8);
                        lVar38 = *(long *)(lVar23 + 0x20);
                        *(undefined1 *)(lVar23 + 0x36) = 0;
                        plVar20 = *(long **)(lVar38 + 0x100);
                        (**(code **)(*plVar20 + 0x60))(plVar20,0);
                        *(undefined1 *)(lVar38 + 0x162) = 0;
                        bVar12 = false;
                        if ((*(char *)(lVar23 + 0x35) != '\0') &&
                           (bVar12 = false, *(char *)(lVar23 + 0x36) != '\0')) {
                          bVar12 = *(char *)(lVar23 + 0x37) == '\0';
                        }
                        lVar23 = *(long *)(lVar23 + 0x20);
                        lVar38 = *(long *)(*(long *)(lVar23 + 0x100) + 0x38);
                        if (lVar38 != 0) {
                          *(byte *)(lVar38 + 0x58) = *(byte *)(lVar38 + 0x58) & 0xfe | bVar12;
                        }
                        *(bool *)(lVar23 + 0x163) = bVar12;
                        param_7 = (long ****)(ulong)*(uint *)(*(long *)(plVar18[0x7f] + 8) + 8);
                        plVar20 = (long *)(*(long *)(plVar18[0x7f] + 8) + 0x28);
                      }
                      FUN_7101a48cd0((long)plVar18,(int)*plVar20,(uint)param_7,param_8,param_9,
                                     param_10,param_11,param_12);
                      *(undefined1 *)((long)plVar18 + 0x41a) = 0;
                      if (0x12 < *(uint *)((long)plVar18 + 0x134)) goto LAB_7101a4027c;
                      lVar23 = (long)plVar18 + (long)(int)*(uint *)((long)plVar18 + 0x134) * 4;
                      uVar30 = 4;
                      uVar67 = extraout_x1_48;
                    }
LAB_7101a3e7bc:
                    *(undefined4 *)(lVar23 + 0xe8) = uVar30;
                  }
                }
                break;
              case 5:
                if (*(char *)((long)plVar18 + 0x41a) != '\0') {
                  lVar23 = plVar18[0x7d];
                  if (lVar23 == 0) {
                    if ((plVar18[0x7e] != 0) &&
                       (*(char *)(*(long *)(plVar18[0x7e] + 8) + 0x36) != '\0')) {
                      lVar23 = plVar18[0x7e];
                      *(int *)(plVar18 + 0x7b) = *piVar27;
                      plVar18[0x7f] = lVar23;
                      if (lVar23 != 0) goto LAB_7101a3e270;
                      uVar15 = 0;
                      plVar20 = plVar55;
                      goto LAB_7101a3e2e8;
                    }
                  }
                  else if (*(char *)(*(long *)(lVar23 + 8) + 0x36) != '\0') {
                    *(int *)(plVar18 + 0x7b) = *piVar27;
                    plVar18[0x7f] = lVar23;
LAB_7101a3e270:
                    lVar23 = *(long *)(lVar23 + 8);
                    lVar38 = *(long *)(lVar23 + 0x20);
                    *(undefined1 *)(lVar23 + 0x36) = 0;
                    plVar20 = *(long **)(lVar38 + 0x100);
                    (**(code **)(*plVar20 + 0x60))(plVar20,0);
                    *(undefined1 *)(lVar38 + 0x162) = 0;
                    bVar12 = false;
                    if ((*(char *)(lVar23 + 0x35) != '\0') &&
                       (bVar12 = false, *(char *)(lVar23 + 0x36) != '\0')) {
                      bVar12 = *(char *)(lVar23 + 0x37) == '\0';
                    }
                    lVar23 = *(long *)(lVar23 + 0x20);
                    lVar38 = *(long *)(*(long *)(lVar23 + 0x100) + 0x38);
                    if (lVar38 != 0) {
                      *(byte *)(lVar38 + 0x58) = *(byte *)(lVar38 + 0x58) & 0xfe | bVar12;
                    }
                    *(bool *)(lVar23 + 0x163) = bVar12;
                    uVar15 = *(uint *)(*(long *)(plVar18[0x7f] + 8) + 8);
                    plVar20 = (long *)(*(long *)(plVar18[0x7f] + 8) + 0x28);
LAB_7101a3e2e8:
                    param_7 = (long ****)(ulong)uVar15;
                    FUN_7101a48cd0((long)plVar18,(int)*plVar20,uVar15,param_8,param_9,param_10,
                                   param_11,param_12);
                    *(undefined1 *)((long)plVar18 + 0x41a) = 0;
                    if (*(uint *)((long)plVar18 + 0x134) < 0x13) {
                      lVar23 = (long)plVar18 + (long)(int)*(uint *)((long)plVar18 + 0x134) * 4;
                      uVar30 = 5;
                      uVar67 = extraout_x1_42;
                      goto LAB_7101a3e7bc;
                    }
                    goto LAB_7101a4027c;
                  }
                }
                break;
              case 6:
                if (*(char *)((long)plVar18 + 0x41a) != '\0') {
                  lVar23 = plVar18[0x7d];
                  if (lVar23 == 0) {
                    if ((plVar18[0x7e] != 0) &&
                       (*(char *)(*(long *)(plVar18[0x7e] + 8) + 0x36) != '\0')) {
                      lVar23 = plVar18[0x7e];
                      *(int *)(plVar18 + 0x7b) = *piVar27;
                      plVar18[0x7f] = lVar23;
                      if (lVar23 != 0) goto LAB_7101a3e390;
                      uVar15 = 0;
                      plVar20 = plVar55;
                      goto LAB_7101a3e408;
                    }
                  }
                  else if (*(char *)(*(long *)(lVar23 + 8) + 0x36) != '\0') {
                    *(int *)(plVar18 + 0x7b) = *piVar27;
                    plVar18[0x7f] = lVar23;
LAB_7101a3e390:
                    lVar23 = *(long *)(lVar23 + 8);
                    lVar38 = *(long *)(lVar23 + 0x20);
                    *(undefined1 *)(lVar23 + 0x36) = 0;
                    plVar20 = *(long **)(lVar38 + 0x100);
                    (**(code **)(*plVar20 + 0x60))(plVar20,0);
                    *(undefined1 *)(lVar38 + 0x162) = 0;
                    bVar12 = false;
                    if ((*(char *)(lVar23 + 0x35) != '\0') &&
                       (bVar12 = false, *(char *)(lVar23 + 0x36) != '\0')) {
                      bVar12 = *(char *)(lVar23 + 0x37) == '\0';
                    }
                    lVar23 = *(long *)(lVar23 + 0x20);
                    lVar38 = *(long *)(*(long *)(lVar23 + 0x100) + 0x38);
                    if (lVar38 != 0) {
                      *(byte *)(lVar38 + 0x58) = *(byte *)(lVar38 + 0x58) & 0xfe | bVar12;
                    }
                    *(bool *)(lVar23 + 0x163) = bVar12;
                    uVar15 = *(uint *)(*(long *)(plVar18[0x7f] + 8) + 8);
                    plVar20 = (long *)(*(long *)(plVar18[0x7f] + 8) + 0x28);
LAB_7101a3e408:
                    param_7 = (long ****)(ulong)uVar15;
                    FUN_7101a48cd0((long)plVar18,(int)*plVar20,uVar15,param_8,param_9,param_10,
                                   param_11,param_12);
                    *(undefined1 *)((long)plVar18 + 0x41a) = 0;
                    if (*(uint *)((long)plVar18 + 0x134) < 0x13) {
                      lVar23 = (long)plVar18 + (long)(int)*(uint *)((long)plVar18 + 0x134) * 4;
                      uVar30 = 6;
                      uVar67 = extraout_x1_45;
                      goto LAB_7101a3e7bc;
                    }
                    goto LAB_7101a4027c;
                  }
                }
                break;
              case 7:
                if (*(char *)((long)plVar18 + 0x41a) != '\0') {
                  lVar23 = plVar18[0x7d];
                  if (lVar23 == 0) {
                    if ((plVar18[0x7e] != 0) &&
                       (*(char *)(*(long *)(plVar18[0x7e] + 8) + 0x36) != '\0')) {
                      lVar23 = plVar18[0x7e];
                      *(int *)(plVar18 + 0x7b) = *piVar27;
                      plVar18[0x7f] = lVar23;
                      if (lVar23 != 0) goto LAB_7101a3e458;
                      uVar15 = 0;
                      plVar20 = plVar55;
                      goto LAB_7101a3e4d0;
                    }
                  }
                  else if (*(char *)(*(long *)(lVar23 + 8) + 0x36) != '\0') {
                    *(int *)(plVar18 + 0x7b) = *piVar27;
                    plVar18[0x7f] = lVar23;
LAB_7101a3e458:
                    lVar23 = *(long *)(lVar23 + 8);
                    lVar38 = *(long *)(lVar23 + 0x20);
                    *(undefined1 *)(lVar23 + 0x36) = 0;
                    plVar20 = *(long **)(lVar38 + 0x100);
                    (**(code **)(*plVar20 + 0x60))(plVar20,0);
                    *(undefined1 *)(lVar38 + 0x162) = 0;
                    bVar12 = false;
                    if ((*(char *)(lVar23 + 0x35) != '\0') &&
                       (bVar12 = false, *(char *)(lVar23 + 0x36) != '\0')) {
                      bVar12 = *(char *)(lVar23 + 0x37) == '\0';
                    }
                    lVar23 = *(long *)(lVar23 + 0x20);
                    lVar38 = *(long *)(*(long *)(lVar23 + 0x100) + 0x38);
                    if (lVar38 != 0) {
                      *(byte *)(lVar38 + 0x58) = *(byte *)(lVar38 + 0x58) & 0xfe | bVar12;
                    }
                    *(bool *)(lVar23 + 0x163) = bVar12;
                    uVar15 = *(uint *)(*(long *)(plVar18[0x7f] + 8) + 8);
                    plVar20 = (long *)(*(long *)(plVar18[0x7f] + 8) + 0x28);
LAB_7101a3e4d0:
                    param_7 = (long ****)(ulong)uVar15;
                    FUN_7101a48cd0((long)plVar18,(int)*plVar20,uVar15,param_8,param_9,param_10,
                                   param_11,param_12);
                    *(undefined1 *)((long)plVar18 + 0x41a) = 0;
                    if (*(uint *)((long)plVar18 + 0x134) < 0x13) {
                      lVar23 = (long)plVar18 + (long)(int)*(uint *)((long)plVar18 + 0x134) * 4;
                      uVar30 = 9;
                      uVar67 = extraout_x1_46;
                      goto LAB_7101a3e7bc;
                    }
                    goto LAB_7101a4027c;
                  }
                }
              }
            }
          }
          piVar24 = piVar24 + 0xfe;
        } while (piVar24 != piVar56);
        lVar23 = plVar18[0x4a];
        lVar38 = plVar18[0x4b];
        if (lVar23 != lVar38) {
          do {
            if ((int)plVar18[0x7c] == -1) {
LAB_7101a3eac8:
              if (*(int *)(lVar23 + 0x10) != 2) goto LAB_7101a3eadc;
LAB_7101a3ed30:
              piVar24 = (int *)(lVar23 + 0x3f0);
              if (0 < *piVar24) {
                lVar53 = *(long *)(DAT_710532f7b0 + 8);
                std::recursive_mutex::lock();
                cVar13 = *(char *)(lVar53 + 0x10a51);
                std::recursive_mutex::unlock();
                if ((DAT_71050a8078 == -1) && (cVar13 == '\0')) {
                  if (DAT_7105324ae0 == '\0') {
                    if (0x12 < *(uint *)((long)plVar18 + 0x134)) goto LAB_7101a4027c;
                    *(undefined4 *)
                     ((long)plVar18 + (long)(int)*(uint *)((long)plVar18 + 0x134) * 4 + 0xe8) = 0xb;
                    *piVar24 = -1;
                  }
                  else {
                    iVar14 = *piVar24;
                    iVar4 = iVar14 + -1;
                    *piVar24 = iVar4;
                    if (iVar4 != 0 && 0 < iVar14) goto LAB_7101a3ede4;
                  }
                  DAT_71050a8078 = (int)plVar18[0x2a];
                  if (0x12 < *(uint *)((long)plVar18 + 0x134)) goto LAB_7101a4027c;
                  *(undefined4 *)
                   ((long)plVar18 + (long)(int)*(uint *)((long)plVar18 + 0x134) * 4 + 0xe8) = 0xb;
                  *piVar24 = 0;
                  *(undefined4 *)(plVar18 + 0x4d) = 8;
                }
              }
            }
            else {
              if (*(int *)(lVar23 + 0x10) == 2) {
                lVar53 = plVar18[0x7f];
                if ((lVar53 == 0) ||
                   ((lVar32 = *(long *)(*(long *)(*(long *)(lVar53 + 8) + 0x10) + 8),
                    *(char *)(lVar32 + 0x4aa) != '\0' && ((*(byte *)(lVar32 + 0x1ec) >> 1 & 1) != 0)
                    ))) {
                  *(undefined4 *)(plVar18 + 0x4d) = 1;
                  iVar4 = *(int *)(lVar23 + 0x10);
                  iVar14 = 0;
                  if (iVar4 != 3) {
                    iVar14 = iVar4 + 1;
                  }
                  do {
                    if (1 < iVar14 - 2U) {
                      iVar37 = iVar14;
                      if (iVar14 != 0) break;
                      if ((plVar18[0x7d] != 0) &&
                         (*(int *)(*(long *)(plVar18[0x7d] + 8) + 0x28) == (int)plVar18[0x2a])) {
                        iVar37 = 0;
                        break;
                      }
                    }
                    iVar21 = 0;
                    if (iVar14 != 3) {
                      iVar21 = iVar14 + 1;
                    }
                    iVar37 = iVar4;
                    iVar14 = iVar21;
                  } while (iVar21 != iVar4);
                  *(int *)((long)plVar18 + 0x3e4) = iVar37;
                  *(int *)(plVar18 + 0x7a) = (int)plVar18[0x7c];
                  if (lVar53 != 0) {
                    lVar53 = *(long *)(lVar53 + 8);
                    *(undefined1 *)(lVar53 + 0x36) = 1;
                    if (*(char *)(lVar53 + 0x35) == '\0') {
                      bVar12 = false;
                    }
                    else {
                      bVar12 = *(char *)(lVar53 + 0x37) == '\0';
                    }
                    lVar32 = *(long *)(lVar53 + 0x20);
                    plVar55 = *(long **)(lVar32 + 0x100);
                    (**(code **)(*plVar55 + 0x60))(plVar55,bVar12);
                    *(bool *)(lVar32 + 0x162) = bVar12;
                    bVar12 = false;
                    if ((*(char *)(lVar53 + 0x35) != '\0') &&
                       (bVar12 = false, *(char *)(lVar53 + 0x36) != '\0')) {
                      bVar12 = *(char *)(lVar53 + 0x37) == '\0';
                    }
                    lVar53 = *(long *)(lVar53 + 0x20);
                    lVar32 = *(long *)(*(long *)(lVar53 + 0x100) + 0x38);
                    if (lVar32 != 0) {
                      *(byte *)(lVar32 + 0x58) = *(byte *)(lVar32 + 0x58) & 0xfe | bVar12;
                    }
                    *(bool *)(lVar53 + 0x163) = bVar12;
                    plVar18[0x7e] = 0;
                    plVar18[0x7f] = 0;
                  }
                  lVar32 = plVar18[0x77];
                  for (lVar53 = plVar18[0x76]; lVar53 != lVar32; lVar53 = lVar53 + 0x10) {
                    lVar39 = *(long *)(*(long *)(lVar53 + 8) + 200);
                    plVar55 = *(long **)(lVar39 + 0x1b0);
                    while (plVar55 != (long *)(lVar39 + 0x1b8)) {
                      plVar20 = (long *)plVar55[5];
                      if (plVar20 != (long *)0x0) {
                        (**(code **)(*plVar20 + 0x2c0))(plVar20,6);
                      }
                      plVar20 = (long *)plVar55[1];
                      if ((long *)plVar55[1] == (long *)0x0) {
                        plVar20 = plVar55 + 2;
                        bVar12 = *(long **)*plVar20 != plVar55;
                        plVar55 = (long *)*plVar20;
                        if (bVar12) {
                          do {
                            lVar25 = *plVar20;
                            plVar20 = (long *)(lVar25 + 0x10);
                            plVar55 = (long *)*plVar20;
                          } while (*plVar55 != lVar25);
                        }
                      }
                      else {
                        do {
                          plVar55 = plVar20;
                          plVar20 = (long *)*plVar55;
                        } while ((long *)*plVar55 != (long *)0x0);
                      }
                    }
                  }
                  lVar53 = plVar18[0x60];
                  plVar55 = *(long **)(lVar53 + 0x1b0);
                  while (plVar55 != (long *)(lVar53 + 0x1b8)) {
                    plVar20 = (long *)plVar55[5];
                    if (plVar20 != (long *)0x0) {
                      (**(code **)(*plVar20 + 0x2c0))(plVar20,6);
                    }
                    plVar20 = (long *)plVar55[1];
                    if ((long *)plVar55[1] == (long *)0x0) {
                      plVar20 = plVar55 + 2;
                      bVar12 = *(long **)*plVar20 != plVar55;
                      plVar55 = (long *)*plVar20;
                      if (bVar12) {
                        do {
                          lVar32 = *plVar20;
                          plVar20 = (long *)(lVar32 + 0x10);
                          plVar55 = (long *)*plVar20;
                        } while (*plVar55 != lVar32);
                      }
                    }
                    else {
                      do {
                        plVar55 = plVar20;
                        plVar20 = (long *)*plVar55;
                      } while ((long *)*plVar55 != (long *)0x0);
                    }
                  }
                  lVar53 = plVar18[0x65];
                  plVar55 = *(long **)(lVar53 + 0x1b0);
                  while (plVar55 != (long *)(lVar53 + 0x1b8)) {
                    plVar20 = (long *)plVar55[5];
                    if (plVar20 != (long *)0x0) {
                      (**(code **)(*plVar20 + 0x2c0))(plVar20,6);
                    }
                    plVar20 = (long *)plVar55[1];
                    if ((long *)plVar55[1] == (long *)0x0) {
                      plVar20 = plVar55 + 2;
                      bVar12 = *(long **)*plVar20 != plVar55;
                      plVar55 = (long *)*plVar20;
                      if (bVar12) {
                        do {
                          lVar32 = *plVar20;
                          plVar20 = (long *)(lVar32 + 0x10);
                          plVar55 = (long *)*plVar20;
                        } while (*plVar55 != lVar32);
                      }
                    }
                    else {
                      do {
                        plVar55 = plVar20;
                        plVar20 = (long *)*plVar55;
                      } while ((long *)*plVar55 != (long *)0x0);
                    }
                  }
                  param_7 = (long ****)0x0;
                  FUN_7101a48cd0((long)plVar18,*(int *)((long)plVar18 + 0x154),0,param_8,param_9,
                                 param_10,param_11,param_12);
                  *(undefined4 *)(plVar18 + 0x7b) = 0xffffffff;
                  *(undefined1 *)((long)plVar18 + 0x41a) = 1;
                  FUN_7101a48570((long)plVar18,extraout_x1_50,param_7,param_8,param_9,param_10,
                                 param_11,param_12);
                  *(undefined4 *)(lVar23 + 0x3f0) = 0;
                  *(undefined4 *)(plVar18 + 0x7c) = 0xffffffff;
                }
                goto LAB_7101a3eac8;
              }
LAB_7101a3eadc:
              if (0 < *(int *)(lVar23 + 0x3f0)) {
                if (plVar18[0x7f] != 0) {
                  lVar53 = *(long *)(plVar18[0x7f] + 8);
                  *(undefined1 *)(lVar53 + 0x36) = 1;
                  if (*(char *)(lVar53 + 0x35) == '\0') {
                    bVar12 = false;
                  }
                  else {
                    bVar12 = *(char *)(lVar53 + 0x37) == '\0';
                  }
                  lVar32 = *(long *)(lVar53 + 0x20);
                  plVar55 = *(long **)(lVar32 + 0x100);
                  (**(code **)(*plVar55 + 0x60))(plVar55,bVar12);
                  *(bool *)(lVar32 + 0x162) = bVar12;
                  bVar12 = false;
                  if ((*(char *)(lVar53 + 0x35) != '\0') &&
                     (bVar12 = false, *(char *)(lVar53 + 0x36) != '\0')) {
                    bVar12 = *(char *)(lVar53 + 0x37) == '\0';
                  }
                  lVar53 = *(long *)(lVar53 + 0x20);
                  lVar32 = *(long *)(*(long *)(lVar53 + 0x100) + 0x38);
                  if (lVar32 != 0) {
                    *(byte *)(lVar32 + 0x58) = *(byte *)(lVar32 + 0x58) & 0xfe | bVar12;
                  }
                  *(bool *)(lVar53 + 0x163) = bVar12;
                  plVar18[0x7e] = 0;
                  plVar18[0x7f] = 0;
                }
                lVar32 = plVar18[0x77];
                for (lVar53 = plVar18[0x76]; lVar53 != lVar32; lVar53 = lVar53 + 0x10) {
                  lVar39 = *(long *)(*(long *)(lVar53 + 8) + 200);
                  plVar55 = *(long **)(lVar39 + 0x1b0);
                  while (plVar55 != (long *)(lVar39 + 0x1b8)) {
                    plVar20 = (long *)plVar55[5];
                    if (plVar20 != (long *)0x0) {
                      (**(code **)(*plVar20 + 0x2c0))(plVar20,6);
                    }
                    plVar20 = (long *)plVar55[1];
                    if ((long *)plVar55[1] == (long *)0x0) {
                      plVar20 = plVar55 + 2;
                      bVar12 = *(long **)*plVar20 != plVar55;
                      plVar55 = (long *)*plVar20;
                      if (bVar12) {
                        do {
                          lVar25 = *plVar20;
                          plVar20 = (long *)(lVar25 + 0x10);
                          plVar55 = (long *)*plVar20;
                        } while (*plVar55 != lVar25);
                      }
                    }
                    else {
                      do {
                        plVar55 = plVar20;
                        plVar20 = (long *)*plVar55;
                      } while ((long *)*plVar55 != (long *)0x0);
                    }
                  }
                }
                lVar53 = plVar18[0x60];
                plVar55 = *(long **)(lVar53 + 0x1b0);
                while (plVar55 != (long *)(lVar53 + 0x1b8)) {
                  plVar20 = (long *)plVar55[5];
                  if (plVar20 != (long *)0x0) {
                    (**(code **)(*plVar20 + 0x2c0))(plVar20,6);
                  }
                  plVar20 = (long *)plVar55[1];
                  if ((long *)plVar55[1] == (long *)0x0) {
                    plVar20 = plVar55 + 2;
                    bVar12 = *(long **)*plVar20 != plVar55;
                    plVar55 = (long *)*plVar20;
                    if (bVar12) {
                      do {
                        lVar32 = *plVar20;
                        plVar20 = (long *)(lVar32 + 0x10);
                        plVar55 = (long *)*plVar20;
                      } while (*plVar55 != lVar32);
                    }
                  }
                  else {
                    do {
                      plVar55 = plVar20;
                      plVar20 = (long *)*plVar55;
                    } while ((long *)*plVar55 != (long *)0x0);
                  }
                }
                lVar53 = plVar18[0x65];
                plVar55 = *(long **)(lVar53 + 0x1b0);
                while (plVar55 != (long *)(lVar53 + 0x1b8)) {
                  plVar20 = (long *)plVar55[5];
                  if (plVar20 != (long *)0x0) {
                    (**(code **)(*plVar20 + 0x2c0))(plVar20,6);
                  }
                  plVar20 = (long *)plVar55[1];
                  if ((long *)plVar55[1] == (long *)0x0) {
                    plVar20 = plVar55 + 2;
                    bVar12 = *(long **)*plVar20 != plVar55;
                    plVar55 = (long *)*plVar20;
                    if (bVar12) {
                      do {
                        lVar32 = *plVar20;
                        plVar20 = (long *)(lVar32 + 0x10);
                        plVar55 = (long *)*plVar20;
                      } while (*plVar55 != lVar32);
                    }
                  }
                  else {
                    do {
                      plVar55 = plVar20;
                      plVar20 = (long *)*plVar55;
                    } while ((long *)*plVar55 != (long *)0x0);
                  }
                }
                param_7 = (long ****)0x0;
                FUN_7101a48cd0((long)plVar18,*(int *)((long)plVar18 + 0x154),0,param_8,param_9,
                               param_10,param_11,param_12);
                *(undefined4 *)(plVar18 + 0x7b) = 0xffffffff;
                *(undefined1 *)((long)plVar18 + 0x41a) = 1;
                *(undefined4 *)(lVar23 + 0x3f0) = 0;
                *(undefined4 *)(plVar18 + 0x7c) = 0xffffffff;
                goto LAB_7101a3ed30;
              }
            }
LAB_7101a3ede4:
            lVar23 = lVar23 + 0x3f8;
          } while (lVar23 != lVar38);
        }
      }
      if (((int)plVar18[0x4d] == 0) && ((char)plVar18[0x84] != '\0')) {
        *(undefined4 *)(plVar18 + 0x4d) = 10;
        *(undefined1 *)(plVar18 + 0x84) = 0;
      }
      FUN_7101a484a0(plVar18);
      uVar44 = extraout_x1_51;
      if (*plVar18 != 0) {
        pcVar28 = (code *)plVar18[1];
        uVar17 = plVar18[2] & 1;
        if (uVar17 != 0 || pcVar28 != (code *)0x0) {
          if (uVar17 != 0) {
            pcVar28 = *(code **)(pcVar28 + *(long *)(*plVar18 + (plVar18[2] >> 1)));
          }
          (*pcVar28)();
          uVar44 = extraout_x1_52;
        }
      }
      *(int *)((long)plVar18 + 0x13c) = *(int *)((long)plVar18 + 0x13c) + 1;
      lVar31 = lVar31 + 0x10;
    } while (lVar31 != lVar45);
  }
  FUN_71032cf7e0(param_5[0x40],uVar44,param_7,param_8,param_9,param_10,param_11,param_12);
  lVar31 = param_5[0x40];
  fVar64 = (float)*(undefined8 *)(lVar31 + 0xb0);
  fVar58 = (float)((ulong)*(undefined8 *)(lVar31 + 0xb0) >> 0x20);
  uVar15 = *(uint *)(lVar31 + 0xbe0);
  if (fVar58 <= fVar64) {
    fVar58 = fVar64;
  }
  if (0 < (int)uVar15) {
    uVar44 = 0;
    lVar45 = 0x100;
    do {
      pfVar1 = (float *)(lVar31 + lVar45);
      *(undefined1 *)((long)pfVar1 + 0x1e) = 0;
      fVar64 = 0.8;
      if (*(char *)((long)pfVar1 + 0x1f) != '\0') {
        fVar64 = 1.0;
      }
      pfVar1[1] = fVar64;
      pfVar1[3] = fVar64 * *pfVar1;
      if ((ulong)uVar15 - 1 == uVar44) goto LAB_7101a3eef8;
      lVar31 = param_5[0x40];
      uVar44 = uVar44 + 1;
      lVar45 = lVar45 + 0x130;
    } while (uVar44 < 10);
LAB_7101a4027c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
LAB_7101a3eef8:
  lVar31 = param_5[0x33];
  lVar45 = param_5[0x34];
  if (lVar31 != lVar45) {
    fVar58 = fVar58 * 0.5 * 0.8;
    fVar58 = fVar58 * fVar58;
    fVar58 = fVar58 + fVar58;
    do {
      lVar23 = *(long *)(lVar31 + 8);
      uVar48 = *(uint *)(lVar23 + 0x30);
      if (uVar48 == 0xffffffff) {
        iVar14 = *(int *)(lVar23 + 0x28);
        if ((ulong)(param_5[0x37] - param_5[0x36] >> 4) <= (ulong)(long)iVar14) goto LAB_7101a40280;
        lVar23 = *(long *)(lVar23 + 0x20);
        fVar64 = *(float *)(lVar23 + 0x148);
        iVar37 = *(int *)(*(long *)(param_5[0x36] + (long)iVar14 * 0x10 + 8) + 0x3cc);
        fVar63 = *(float *)(lVar23 + 0x14c) - fVar64;
        iVar4 = 0;
        if (iVar37 != -1) {
          iVar4 = iVar37;
        }
        if ((fVar63 <= -1e-05) || (uVar48 = 0xffffffff, 1e-05 <= fVar63)) {
          fVar63 = *(float *)(lVar23 + 0x154);
          fVar65 = *(float *)(lVar23 + 0x150);
          if ((fVar63 - fVar65 <= -1e-05) || (uVar48 = 0xffffffff, 1e-05 <= fVar63 - fVar65)) {
            uVar67 = *(undefined8 *)(*(long *)(lVar23 + 0x100) + 0x60);
            fVar66 = (float)uVar67;
            fVar68 = (float)((ulong)uVar67 >> 0x20);
            auVar69 = ZEXT416((uint)fVar68);
            bVar12 = false;
            bVar10 = true;
            if (fVar66 <= *(float *)(lVar23 + 0x14c)) {
              bVar12 = false;
              bVar10 = true;
              if (!NAN(fVar64) && !NAN(fVar66)) {
                bVar12 = fVar64 == fVar66;
                bVar10 = fVar66 <= fVar64;
              }
            }
            bVar9 = true;
            bVar11 = false;
            if (!bVar10 || bVar12) {
              bVar9 = false;
              bVar11 = true;
              if (!NAN(fVar63) && !NAN(fVar68)) {
                bVar9 = fVar63 < fVar68;
                bVar11 = false;
              }
            }
            bVar12 = false;
            bVar10 = true;
            if (bVar9 == bVar11) {
              bVar12 = false;
              bVar10 = true;
              if (!NAN(fVar65) && !NAN(fVar68)) {
                bVar12 = fVar65 == fVar68;
                bVar10 = fVar68 <= fVar65;
              }
            }
            uVar48 = 0xffffffff;
            if (!bVar10 || bVar12) {
              if ((*(char *)(lVar23 + 0x162) != '\0') && (*(char *)(lVar23 + 0x163) != '\0')) {
                fVar64 = FUN_71032d2ff0(lVar23);
                local_f0 = (undefined **)CONCAT44(auVar69._0_4_,fVar64);
                local_e8 = (undefined **)CONCAT44(fVar65,fVar63);
                if (0 < (int)uVar15) {
                  uVar44 = 0;
                  lVar23 = 0x11f;
                  uVar17 = 0xffffffff;
                  uVar43 = 0xffffffff;
                  fVar64 = fVar58;
                  do {
                    if (9 < uVar44) goto LAB_7101a4027c;
                    lVar38 = param_5[0x40];
                    if (*(char *)(lVar38 + lVar23) == '\0') {
                      iVar37 = *(int *)(*(long *)(lVar31 + 8) + 0x28);
                      lVar53 = lVar38 + lVar23;
                      iVar21 = (int)((uVar44 & 0xffffffff) / 5);
                      if ((((iVar37 == iVar21 || *(char *)(lVar53 + -2) == '\0') &&
                           (*(char *)(lVar53 + -7) != '\0')) && (*(char *)(lVar53 + -6) != '\0')) &&
                         ((*(char *)(lVar53 + -4) != '\0' && (*(char *)(lVar53 + -3) != '\0')))) {
                        iVar59 = -(uint)((float)*(undefined8 *)(lVar53 + -0x3f) ==
                                        *(float *)(lVar53 + -0x2f));
                        iVar60 = -(uint)((float)((ulong)*(undefined8 *)(lVar53 + -0x3f) >> 0x20) ==
                                        *(float *)(lVar53 + -0x2b));
                        iVar61 = -(uint)((float)*(undefined8 *)(lVar53 + -0x37) ==
                                        *(float *)(lVar53 + -0x27));
                        iVar62 = -(uint)((float)((ulong)*(undefined8 *)(lVar53 + -0x37) >> 0x20) ==
                                        *(float *)(lVar53 + -0x23));
                        auVar5._4_4_ = iVar60;
                        auVar5._0_4_ = iVar59;
                        auVar5._8_4_ = iVar61;
                        auVar5._12_4_ = iVar62;
                        auVar6._4_4_ = iVar60;
                        auVar6._0_4_ = iVar59;
                        auVar6._8_4_ = iVar61;
                        auVar6._12_4_ = iVar62;
                        auVar69 = NEON_ext(auVar5,auVar6,8,1);
                        uVar54 = CONCAT44(iVar60,iVar59) & auVar69._0_8_;
                        if (((uint)uVar54 & (uint)(uVar54 >> 0x20)) != 0) {
                          lVar53 = **(long **)(*(long *)(lVar53 + -0xf7) + 0x18);
                          if (lVar53 == 0) {
                            fVar63 = (float)_ConstantZero;
                            fVar65 = (float)((ulong)_ConstantZero >> 0x20);
                          }
                          else {
                            fVar63 = *(float *)(lVar53 + 0x30);
                            fVar65 = *(float *)(lVar53 + 0x34);
                          }
                          fVar63 = (fVar63 - fVar66) * (fVar63 - fVar66) +
                                   (fVar65 - fVar68) * (fVar65 - fVar68);
                          uVar48 = (uint)uVar44;
                          if (fVar58 <= fVar63) {
                            param_7 = (long ****)&local_f0;
                            bVar12 = FUN_71032d12e0(lVar38,uVar48,(float *)param_7);
                            if (uVar43 != iVar14 * 5 + iVar4 && ((bVar12 ^ 0xffU) & 1) == 0) {
                              uVar43 = uVar48;
                            }
                          }
                          else {
                            if (iVar37 == iVar21) goto LAB_7101a3f734;
                            if (fVar63 < fVar64) {
                              uVar17 = uVar44 & 0xffffffff;
                              fVar64 = fVar63;
                            }
                          }
                        }
                      }
                    }
                    uVar44 = uVar44 + 1;
                    lVar23 = lVar23 + 0x130;
                  } while ((long)uVar44 < (long)(int)uVar15);
                  uVar48 = (uint)uVar17;
                  if (((uint)uVar17 != 0xffffffff) || (uVar48 = uVar43, uVar43 != 0xffffffff)) {
                    if (uVar48 < 10) {
                      lVar38 = param_5[0x40];
LAB_7101a3f734:
                      if (*(char *)(lVar38 + (long)(int)uVar48 * 0x130 + 0x11f) == '\0') {
                        lVar23 = (long)(int)uVar48;
                        lVar53 = lVar38 + lVar23 * 0x130;
                        *(undefined1 *)(lVar53 + 0x11e) = 1;
                        if ((*(int *)(lVar53 + 0x10) != 1) ||
                           (fVar64 = 0.96, *(char *)(lVar38 + lVar23 * 0x130 + 0x126) == '\0')) {
                          fVar64 = 0.8;
                        }
                        lVar38 = lVar38 + lVar23 * 0x130;
                        *(float *)(lVar38 + 0x104) = fVar64;
                        *(float *)(lVar38 + 0x10c) = fVar64 * *(float *)(lVar38 + 0x100);
                      }
                      goto LAB_7101a3f790;
                    }
                    goto LAB_7101a4027c;
                  }
                }
              }
              uVar48 = 0xffffffff;
            }
          }
        }
      }
      else {
        if (9 < uVar48) goto LAB_7101a4027c;
        if (*(char *)(param_5[0x40] + (long)(int)uVar48 * 0x130 + 0x124) != '\0') {
          lVar23 = *(long *)(lVar23 + 0x20);
          FUN_71037780e0(&local_f0,lVar23 + 0x108,(long ****)"hand_catch",param_7,param_8,param_9,
                         param_10,param_11,param_12);
          ppplVar16 = (long ***)local_e8;
          if ((undefined8 *)(lVar23 + 0x128) != &local_f0) {
            local_e8 = (undefined **)0x0;
            uVar44 = *(ulong *)(lVar23 + 0x130);
            *(long ****)(lVar23 + 0x130) = ppplVar16;
            if (uVar44 != 0) {
              FUN_710392eb40(uVar44);
            }
          }
          ppplVar16 = (long ***)local_e8;
          local_f0 = &PTR_FUN_710523d9e8;
          local_e8 = (undefined **)0x0;
          if (ppplVar16 != (long ***)0x0) {
            FUN_710392eb40((ulong)ppplVar16);
          }
          FUN_710377aee0(0x3f800000,lVar23 + 0x128);
        }
      }
LAB_7101a3f790:
      *(bool *)(*(long *)(*(long *)(lVar31 + 8) + 0x20) + 0x166) = uVar48 != 0xffffffff;
      plVar18 = (long *)(lVar31 + 8);
      lVar31 = lVar31 + 0x10;
      *(uint *)(*plVar18 + 0x2c) = uVar48;
    } while (lVar31 != lVar45);
  }
  FUN_7101a35230(param_5);
  if (*param_5 != 0) {
    pcVar28 = (code *)param_5[1];
    uVar44 = param_5[2] & 1;
    if (uVar44 != 0 || pcVar28 != (code *)0x0) {
      if (uVar44 != 0) {
        pcVar28 = *(code **)(pcVar28 + *(long *)(*param_5 + (param_5[2] >> 1)));
      }
      (*pcVar28)();
    }
  }
  *(int *)((long)param_5 + 0x10c) = *(int *)((long)param_5 + 0x10c) + 1;
  if ((int)param_5[0x21] == 7) {
    ppppbVar51 = (byte ****)param_5[0x33];
    ppppbVar3 = (byte ****)param_5[0x34];
    if (ppppbVar51 != ppppbVar3) {
      do {
        pppbVar35 = ppppbVar51[1];
        if ((ulong)(param_5[0x37] - param_5[0x36] >> 4) <= (ulong)(long)*(int *)(pppbVar35 + 5)) {
LAB_7101a40280:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        lVar31 = param_5[0x36] + (long)*(int *)(pppbVar35 + 5) * 0x10;
        plVar18 = (long *)(lVar31 + 8);
        lVar45 = *plVar18;
        if (*(int *)(lVar45 + 0x26c) != 0) {
          pbVar40 = pppbVar35[2][1];
          if (*(char *)((long)pppbVar35 + 0x36) == '\0') {
            if (*(int *)(pbVar40 + 0x484) == 0) goto LAB_7101a3f974;
          }
          else if ((*(int *)(pbVar40 + 0x484) == 0) && (*(int *)(pbVar40 + 0x488) == -1)) {
LAB_7101a3f974:
            if (*(int *)(pbVar40 + 0x488) == -1) {
              uVar15 = *(uint *)(lVar45 + 0x3dc);
              uVar44 = (ulong)(int)uVar15;
              if ((uVar15 != 0xffffffff) && (uVar15 != *(uint *)(lVar45 + 0x3cc))) {
                param_7 = (long ****)(ulong)uVar15;
                FUN_7101a385b0((long)param_5,*(int *)(lVar45 + 0x150),uVar15,param_8,param_9,
                               param_10,param_11,param_12);
                lVar31 = *(long *)(*plVar18 + 0x250);
                uVar17 = (*(long *)(*plVar18 + 600) - lVar31 >> 3) * 0x7efdfbf7efdfbf7f;
                if (uVar17 < uVar44 || uVar17 - uVar44 == 0) {
LAB_7101a4029c:
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_out_of_range();
                }
                *(undefined4 *)(lVar31 + uVar44 * 0x3f8 + 1000) = 1;
              }
            }
          }
          else {
            uVar44 = (ulong)*(uint *)(lVar45 + 0x3dc);
            if (*(uint *)(lVar45 + 0x3dc) == 0xffffffff) {
              if (*(long **)(pppbVar35[4][0x26] + 8) != (long *)0x0) {
                uVar44 = (**(code **)(**(long **)(pppbVar35[4][0x26] + 8) + 0x138))();
                if ((uVar44 & 1) == 0) goto LAB_7101a3fcc8;
                pppbVar35 = ppppbVar51[1];
              }
              if ((*(int *)(pppbVar35 + 6) == -1) &&
                 (iVar14 = *(int *)((long)param_5 + 0x13c), 0 < iVar14)) {
                lVar45 = *plVar18;
                lVar38 = *(long *)(lVar45 + 0x250);
                uVar17 = (*(long *)(lVar45 + 600) - lVar38 >> 3) * 0x7efdfbf7efdfbf7f;
                uVar44 = 0;
                bVar12 = false;
                lVar23 = lVar38;
                do {
                  if (uVar17 < uVar44 || uVar17 - uVar44 == 0) goto LAB_7101a40298;
                  if (*(int *)(lVar23 + 0x10) == 2) {
                    bVar12 = (bool)(bVar12 | *(char *)(lVar23 + 0x3f5) == '\0');
                  }
                  uVar44 = uVar44 + 1;
                  lVar23 = lVar23 + 0x3f8;
                } while ((long)uVar44 < (long)iVar14);
                if (!bVar12) {
                  uVar44 = 0;
                  piVar24 = (int *)(lVar38 + 1000);
                  do {
                    if (uVar17 < uVar44 || uVar17 - uVar44 == 0) goto LAB_7101a40298;
                    if (*piVar24 == 1) goto LAB_7101a3f8e8;
                    uVar44 = uVar44 + 1;
                    piVar24 = piVar24 + 0xfe;
                  } while ((long)uVar44 < (long)iVar14);
                }
              }
            }
            else {
LAB_7101a3f8e8:
              uVar15 = (uint)uVar44;
              if (uVar15 != *(uint *)(lVar45 + 0x3cc)) {
                uVar44 = (*(long *)(lVar45 + 600) - *(long *)(lVar45 + 0x250) >> 3) *
                         0x7efdfbf7efdfbf7f;
                uVar17 = (ulong)(int)uVar15;
                if (uVar44 < uVar17 || uVar44 - uVar17 == 0) goto LAB_7101a4029c;
                if (*(int *)(*(long *)(lVar45 + 0x250) + uVar17 * 0x3f8 + 0x10) == 3) {
                  param_9 = (long ****)0x0;
                  param_8 = ppppbVar51;
                  FUN_7101a386c0((long)param_5,lVar31,uVar15,ppppbVar51,(long ****)0x0,param_10,
                                 param_11,param_12);
                  FUN_7101a35900((long)param_5,lVar31,uVar15,param_8,param_9,param_10,param_11,
                                 param_12);
                  iVar14 = *(int *)(*plVar18 + 0x150);
                }
                else {
                  iVar14 = *(int *)(lVar45 + 0x150);
                }
                FUN_7101a385b0((long)param_5,iVar14,uVar15,param_8,param_9,param_10,param_11,
                               param_12);
                lVar31 = *(long *)(*plVar18 + 0x250);
                uVar44 = (*(long *)(*plVar18 + 600) - lVar31 >> 3) * 0x7efdfbf7efdfbf7f;
                if (uVar44 < uVar17 || uVar44 - uVar17 == 0) goto LAB_7101a4029c;
                *(undefined4 *)(lVar31 + uVar17 * 0x3f8 + 1000) = 1;
                lVar31 = *(long *)(*plVar18 + 0x250);
                uVar44 = (*(long *)(*plVar18 + 600) - lVar31 >> 3) * 0x7efdfbf7efdfbf7f;
                if (uVar44 < uVar17 || uVar44 - uVar17 == 0) goto LAB_7101a4029c;
                *(undefined1 *)(lVar31 + uVar17 * 0x3f8 + 0x3f5) = 0;
                iVar14 = *(int *)(*plVar18 + 0x150) * 5 + uVar15;
                *(bool *)((long)ppppbVar51[1][4] + 0x167) = iVar14 != -1;
                *(int *)(ppppbVar51[1] + 6) = iVar14;
                lVar31 = *plVar18;
                uVar44 = (*(long *)(lVar31 + 600) - *(long *)(lVar31 + 0x250) >> 3) *
                         0x7efdfbf7efdfbf7f;
                if (uVar44 < uVar17 || uVar44 - uVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_out_of_range();
                }
                param_10 = (ulong)(uVar15 + 1);
                uVar48 = *(uint *)(lVar31 + 0x150) * 5 + uVar15;
                iVar14 = *(int *)(ppppbVar51[1] + 5);
                param_9 = (long ****)&DAT_ffffffff;
                FUN_71032d0830((long)(param_5 + 0x3f),uVar48,(ulong)*(uint *)(lVar31 + 0x150),
                               (ulong)*(uint *)(*(long *)(lVar31 + 0x250) + uVar17 * 0x3f8 + 0x10),
                               0xffffffff,param_10,param_11,param_12);
                if (9 < uVar48) goto LAB_7101a4027c;
                lVar45 = (long)(int)uVar48;
                param_8 = (byte ****)0x0;
                *(byte ****)(param_5[0x40] + (long)(int)uVar48 * 0x130 + 0x110) = ppppbVar51[1] + 3;
                FUN_71032d0c60((long)(param_5 + 0x3f),uVar48,1,0);
                param_7 = (long ****)(ulong)(iVar14 * 5 + uVar15);
                FUN_71032d0e00(param_5[0x40],uVar48,param_7,param_8,param_9,param_10,param_11,
                               param_12);
                pbVar40 = ppppbVar51[1][4][0x20];
                lVar31 = param_5[0x40];
                fVar58 = (float)*(undefined8 *)(pbVar40 + 0x60);
                fVar64 = (float)((ulong)*(undefined8 *)(pbVar40 + 0x60) >> 0x20);
                if ((((*(float *)(lVar31 + 0xbf0) < fVar58) || (fVar58 < *(float *)(lVar31 + 0xbec))
                     ) || (*(float *)(lVar31 + 0xbf8) < fVar64)) ||
                   (fVar64 < *(float *)(lVar31 + 0xbf4))) {
                  lVar31 = **(long **)(*(long *)(lVar31 + lVar45 * 0x130 + 0x28) + 0x18);
                  if (lVar31 == 0) {
                    fVar58 = (float)_ConstantZero;
                    fVar64 = (float)((ulong)_ConstantZero >> 0x20);
                  }
                  else {
                    fVar58 = *(float *)(lVar31 + 0x30);
                    fVar64 = *(float *)(lVar31 + 0x34);
                  }
                  fVar63 = *(float *)(pbVar40 + 0x90);
                  if (*(float *)(pbVar40 + 0x90) <= fVar58) {
                    fVar63 = fVar58;
                  }
                  fVar58 = *(float *)(pbVar40 + 0x94);
                  if (fVar63 <= *(float *)(pbVar40 + 0x94)) {
                    fVar58 = fVar63;
                  }
                  fVar63 = *(float *)(pbVar40 + 0x98);
                  if (*(float *)(pbVar40 + 0x98) <= fVar64) {
                    fVar63 = fVar64;
                  }
                  fVar64 = *(float *)(pbVar40 + 0x9c);
                  if (fVar63 <= *(float *)(pbVar40 + 0x9c)) {
                    fVar64 = fVar63;
                  }
                  pbVar40[0x78] = 0;
                  pbVar40[0x79] = 0;
                  pbVar40[0x7a] = 0;
                  pbVar40[0x7b] = 0;
                  pbVar40[0x7c] = 0;
                  pbVar40[0x7d] = 0;
                  pbVar40[0x7e] = 0;
                  pbVar40[0x7f] = 0;
                  *(ulong *)(pbVar40 + 0x70) = CONCAT44(fVar64,fVar58);
                  *(undefined2 *)(param_5[0x40] + lVar45 * 0x130 + 0x123) = 0;
                }
                else {
                  *(undefined2 *)(lVar31 + lVar45 * 0x130 + 0x123) = 0;
                  auVar7._12_4_ =
                       (int)((ulong)*(undefined8 *)(ppppbVar51[1][4][0x20] + 0x68) >> 0x20);
                  auVar7._0_12_ = *(undefined1 (*) [12])(ppppbVar51[1][4][0x20] + 0x60);
                  FUN_71032d0eb0(auVar7,param_5[0x40],uVar48);
                }
              }
            }
          }
        }
LAB_7101a3fcc8:
        ppppbVar51 = ppppbVar51 + 2;
      } while (ppppbVar51 != ppppbVar3);
    }
  }
  FUN_7103764cd0((long)(param_5 + 0x4f));
  if (*(char *)((long)param_5 + 0x2c1) != '\0') {
    piVar24 = (int *)param_5[0x4c];
    piVar56 = (int *)param_5[0x4d];
    if (piVar24 != piVar56) {
      piVar27 = piVar24 + 1;
      iVar14 = *piVar24;
      piVar34 = extraout_x1_60;
      if (piVar27 == piVar56) {
        if (piVar24 != piVar56) goto LAB_7101a3fd98;
      }
      else {
        uVar44 = (long)piVar56 + (-8 - (long)piVar24);
        if (((uint)uVar44 >> 2 & 1) == 0) {
          piVar36 = piVar24;
          if (piVar24[1] != iVar14) {
            *piVar24 = piVar24[1];
            piVar36 = piVar27;
          }
          piVar27 = piVar24 + 2;
          piVar24 = piVar36;
        }
        if (3 < uVar44) {
          do {
            piVar36 = piVar24;
            if (*piVar27 != iVar14) {
              piVar36 = piVar24 + 1;
              *piVar24 = *piVar27;
            }
            piVar24 = piVar36;
            if (piVar27[1] != iVar14) {
              piVar24 = piVar36 + 1;
              *piVar36 = piVar27[1];
            }
            piVar27 = piVar27 + 2;
          } while (piVar27 != piVar56);
        }
        piVar56 = (int *)param_5[0x4d];
        if (piVar24 != (int *)param_5[0x4d]) {
LAB_7101a3fd98:
          piVar34 = piVar56;
          param_7 = (long ****)0x0;
          param_5[0x4d] = (long)piVar24;
        }
      }
      if (iVar14 == 2) {
        FUN_7103765160(param_5 + 0x4f,piVar34,param_7,param_8,param_9,param_10,param_11,param_12);
        if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
           (uVar44 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0xeab447024,
                                    (long ****)&DAT_00000004,param_8,param_9,param_10,param_11,
                                    param_12), (uVar44 & 1) != 0)) {
          FUN_71024076d0((undefined4 *)&local_f0,0xeab447024);
          if (((local_e0 != (long ***)0x0) && (DAT_7106dd53a8 == '\x01')) &&
             ((int)uStack_d8 == DAT_7106dd53ac)) {
            local_e0 = local_e0 + 7;
            do {
              cVar13 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(local_e0,0x10);
              if (bVar12) {
                *(int *)local_e0 = *(int *)local_e0 + -1;
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
          }
        }
        else {
          uStack_d8 = 0x87650000000000;
          local_c8 = -1;
          local_c0 = 0;
          local_f0 = (undefined **)((ulong)local_f0 & 0xffffffff00000000);
          local_b8 = 0;
        }
        local_e8 = &PTR_FUN_7104f73d50;
        local_e0 = (long ***)0x0;
        local_d0 = 0;
      }
    }
  }
  lVar45 = param_5[0x34];
  for (lVar31 = param_5[0x33]; lVar31 != lVar45; lVar31 = lVar31 + 0x10) {
    FUN_71032d2ba0(*(long **)(*(long *)(lVar31 + 8) + 0x20));
  }
  if ((*(uint *)(param_5 + 0x21) & 0xfffffffe) != 6) goto LAB_7101a40204;
  lVar31 = param_5[0x33];
  if (lVar31 == param_5[0x34]) {
    bVar47 = 1;
  }
  else {
    uVar44 = (ulong)((param_5[0x34] + -0x10) - lVar31) >> 4;
    uVar15 = (int)uVar44 + 1;
    if (uVar44 == 0) {
      bVar47 = 1;
    }
    else {
      lVar45 = (((ulong)uVar15 & 1) - 1) - uVar44;
      bVar47 = 1;
      do {
        plVar18 = (long *)(lVar31 + 8);
        plVar55 = (long *)(lVar31 + 0x18);
        lVar31 = lVar31 + 0x20;
        lVar45 = lVar45 + 2;
        bVar47 = bVar47 & *(char *)(*plVar18 + 0x36) != '\0' & *(char *)(*plVar55 + 0x36) != '\0';
      } while (lVar45 != 0);
      if ((uVar15 & 1) == 0) goto LAB_7101a3ff5c;
    }
    bVar47 = bVar47 & *(char *)(*(long *)(lVar31 + 8) + 0x36) != '\0';
  }
LAB_7101a3ff5c:
  for (lVar31 = param_5[0x36]; lVar31 != param_5[0x37]; lVar31 = lVar31 + 0x10) {
    lVar45 = *(long *)(lVar31 + 8);
    if ((*(char *)(lVar45 + 0x419) == '\0' || *(int *)(lVar45 + 0x26c) != 0) &&
        *(int *)(lVar45 + 0x26c) == 1) {
      if (((*(long *)(lVar45 + 1000) == 0) ||
          (bVar41 = 0, *(char *)(*(long *)(*(long *)(lVar45 + 1000) + 8) + 0x36) != '\0')) &&
         (bVar41 = 0, *(char *)(lVar45 + 0x41a) != '\0')) {
        if (0 < *(int *)(lVar45 + 0x3c8)) {
          lVar23 = *(long *)(lVar45 + 0x250);
          uVar17 = (*(long *)(lVar45 + 600) - lVar23 >> 3) * 0x7efdfbf7efdfbf7f;
          uVar44 = 0;
          do {
            if (uVar17 < uVar44 || uVar17 - uVar44 == 0) goto LAB_7101a40298;
            if (((*(int *)(lVar23 + 0x10) == 3) || (*(char *)(lVar23 + 0x3f5) == '\0')) ||
               ((*(int *)(lVar23 + 0x10) == 2 && (*(int *)(lVar23 + 0x1b8) == -1))))
            goto LAB_7101a40024;
            uVar44 = uVar44 + 1;
            lVar23 = lVar23 + 0x3f8;
          } while ((int)uVar44 < *(int *)(lVar45 + 0x3c8));
        }
        bVar41 = 1;
      }
    }
    else {
LAB_7101a40024:
      bVar41 = 0;
    }
    bVar47 = bVar47 & bVar41;
  }
  if (*(byte *)((long)param_5 + 0x31c) != bVar47) {
    *(byte *)((long)param_5 + 0x31c) = bVar47;
    lVar31 = *(long *)(param_5[0x45] + 0x1b8);
    if (lVar31 != 0) {
      lVar45 = param_5[0x45] + 0x1b8;
      lVar23 = lVar45;
      do {
        if (1 < *(int *)(lVar31 + 0x20)) {
          lVar23 = lVar31;
        }
        lVar31 = *(long *)(lVar31 + (ulong)(*(int *)(lVar31 + 0x20) < 2) * 8);
      } while (lVar31 != 0);
      if (((lVar23 != lVar45) && (*(int *)(lVar23 + 0x20) < 3)) &&
         (plVar18 = *(long **)(lVar23 + 0x28), plVar18 != (long *)0x0)) {
        (**(code **)(*plVar18 + 0x1f8))(plVar18,bVar47);
        (**(code **)(*plVar18 + 0x388))(plVar18,~bVar47 & 1,0);
        bVar47 = *(byte *)((long)param_5 + 0x31c);
      }
    }
    if (bVar47 == 0) {
      FUN_710377aee0(0x3f800000,(long)(param_5 + 0x43));
      FUN_71032d0240(param_5[0x40]);
      FUN_7103778300(0x3f800000,*(long *)(*(long *)param_5[0x2a] + 0x10),0x71042d4aad);
    }
    else {
      FUN_710377b010(0,(long)(param_5 + 0x43));
      FUN_710377aee0(0x3f800000,(long)(param_5 + 0x41));
      FUN_71032d0460(param_5[0x40]);
      FUN_7103778300(0x3f800000,*(long *)(*(long *)param_5[0x2a] + 0x10),0x71043ef055);
      if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar44 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0xd9c5a53af,(long ****)&DAT_00000004
                                  ,param_8,param_9,param_10,param_11,param_12), (uVar44 & 1) != 0))
      {
        FUN_71024076d0((undefined4 *)&local_f0,0xd9c5a53af);
        if (((local_e0 != (long ***)0x0) && (DAT_7106dd53a8 == '\x01')) &&
           ((int)uStack_d8 == DAT_7106dd53ac)) {
          local_e0 = local_e0 + 7;
          do {
            cVar13 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(local_e0,0x10);
            if (bVar12) {
              *(int *)local_e0 = *(int *)local_e0 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
        }
      }
      else {
        uStack_d8 = 0x87650000000000;
        local_c8 = -1;
        local_c0 = 0;
        local_f0 = (undefined **)((ulong)local_f0 & 0xffffffff00000000);
        local_b8 = 0;
      }
      local_e8 = &PTR_FUN_7104f73d50;
      local_e0 = (long ***)0x0;
      local_d0 = 0;
    }
  }
LAB_7101a40204:
  FUN_71019f1410((long *)param_5[0x3e]);
  return;
}

