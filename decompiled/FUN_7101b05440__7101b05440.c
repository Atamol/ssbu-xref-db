// addr:      7101b05440
// offset:    0x1b05440
// name:      FUN_7101b05440
// mangled:   
// signature: undefined __cdecl FUN_7101b05440(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b05440(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  undefined **ppuVar6;
  byte ***pppbVar7;
  ulong uVar8;
  undefined **ppuVar9;
  char *pcVar10;
  long ****pppplVar11;
  uint uVar12;
  undefined8 uVar13;
  int *piVar14;
  byte *pbVar15;
  ulong uVar16;
  undefined ***pppuVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  undefined8 *puVar22;
  int iVar23;
  undefined8 *puVar24;
  uint uVar25;
  ulong uVar26;
  int local_1b4;
  undefined8 local_1b0;
  undefined **local_170;
  ulong local_168;
  undefined **local_160;
  undefined **local_158 [8];
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  ulong local_104;
  undefined **local_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined1 uStack_af;
  undefined1 uStack_ae;
  undefined1 uStack_ad;
  undefined4 uStack_ac;
  int local_a8;
  undefined4 uStack_a4;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  
  if (*(long *)(param_1 + 0x4e8) == *(long *)(param_1 + 0x4f0)) {
LAB_7101b0555c:
    if (*(int *)(param_1 + 0x25c) < 1) {
      return;
    }
    *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + -1;
    return;
  }
  puVar22 = *(undefined8 **)(param_1 + 0x438);
  plVar1 = (long *)(param_1 + 0x438);
  puVar24 = *(undefined8 **)(param_1 + 0x440);
  if (*(int *)(param_1 + 0x264) == 0) {
    while (puVar24 != puVar22) {
      puVar24 = puVar24 + -2;
      (**(code **)*puVar24)(puVar24);
    }
    *(undefined8 **)(param_1 + 0x440) = puVar22;
    *(undefined4 *)(param_1 + 0x4e0) = 0;
    if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
      param_3 = (long ****)&DAT_00000004;
      uVar8 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x15a76d2244,(long ****)&DAT_00000004,
                             param_4,param_5,param_6,param_7,param_8);
      if ((uVar8 & 1) != 0) {
        FUN_71024076d0((undefined4 *)&local_c0,0x15a76d2244);
        if (((CONCAT44(uStack_ac,
                       CONCAT13(uStack_ad,CONCAT12(uStack_ae,CONCAT11(uStack_af,local_b0)))) != 0)
            && (DAT_7106dd53a8 == '\x01')) && (local_a8 == DAT_7106dd53ac)) {
          piVar14 = (int *)(CONCAT44(uStack_ac,
                                     CONCAT13(uStack_ad,
                                              CONCAT12(uStack_ae,CONCAT11(uStack_af,local_b0)))) +
                           0x38);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar5) {
              *piVar14 = *piVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        goto LAB_7101b05654;
      }
    }
    local_a0 = 0;
    local_a8 = 0;
    uStack_a4 = 0x876500;
    local_98 = 0xffffffffffffffff;
    uStack_90 = 0;
    local_88 = 0;
LAB_7101b05654:
    uStack_ae = 0;
    uStack_ad = 0;
    uStack_ac = 0;
    uVar21 = 0x811c9dc5;
    if (*(long *)(param_1 + 0x4e8) != *(long *)(param_1 + 0x4f0)) {
      iVar23 = (int)(*(long *)(param_1 + 0x4f0) - *(long *)(param_1 + 0x4e8) >> 4) * -0x33333333;
      local_c0 = (undefined **)0x900000000;
      local_b8 = (byte ***)0x6c7469745f746573;
      uVar25 = 0x73;
      local_b0 = 0x65;
      uStack_af = 0;
      uVar19 = 0x73;
      pbVar15 = (byte *)((long)&local_b8 + 1);
      uVar12 = uVar21;
      do {
        uVar12 = uVar12 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar19 != 0);
      local_c0 = (undefined **)CONCAT44(9,uVar12);
      if (1 < iVar23) {
        uStack_af = 0x5f;
        uStack_ae = 0x30;
        uStack_ad = 0x30;
        uStack_ac = 0;
        local_c0 = (undefined **)CONCAT44(0xc,uVar12);
        uVar19 = 0x73;
        pbVar15 = (byte *)((long)&local_b8 + 1);
        uVar12 = uVar21;
        do {
          uVar12 = uVar12 * 0x89 ^ uVar19;
          uVar19 = (uint)*pbVar15;
          pbVar15 = pbVar15 + 1;
        } while (uVar19 != 0);
        local_c0 = (undefined **)CONCAT44(0xc,uVar12);
      }
      uStack_ac = 0;
      lVar2 = param_1 + 0x3d0;
      FUN_7103776640(&local_d0,lVar2,(byte ****)&local_b8,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      uVar8 = local_c8;
      if (**(int **)(param_1 + 0x4e8) == 1) {
        pcVar10 = "view_ticket";
      }
      else {
        pcVar10 = "view_event";
      }
      FUN_7103778300(0x3f800000,local_c8,(long)pcVar10);
      local_118 = (long ***)0x900000000;
      local_110 = (long ***)0x756e6f625f746573;
      local_108 = CONCAT22(local_108._2_2_,0x73);
      pbVar15 = (byte *)((long)&local_110 + 1);
      uVar12 = uVar21;
      do {
        uVar12 = uVar12 * 0x89 ^ uVar25;
        uVar25 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar25 != 0);
      local_118 = (long ***)CONCAT44(9,uVar12);
      local_158[0] = (undefined **)((ulong)local_158[0] & 0xffffffffffffff00);
      local_160 = (undefined **)0x0;
      if (0 < iVar23) {
        if (iVar23 < 2) {
          uVar26 = 0;
          do {
            local_158[0] = (undefined **)((ulong)local_158[0] & 0xffffffffffffff00);
            local_160 = (undefined **)0x0;
            uVar16 = 0;
            do {
              uVar18 = uVar16;
              if (*(char *)((long)&local_110 + uVar16) == '\0') break;
              *(char *)((long)&local_1b0 + uVar16) = *(char *)((long)&local_110 + uVar16);
              cVar4 = *(char *)((long)&local_110 + uVar16 + 1);
              if (cVar4 == '\0') {
                uVar18 = uVar16 + 1;
                break;
              }
              cVar3 = *(char *)((long)&local_110 + uVar16 + 2);
              *(char *)((long)&local_1b0 + uVar16 + 1) = cVar4;
              if (cVar3 == '\0') {
                uVar18 = uVar16 + 2;
                break;
              }
              uVar18 = uVar16 + 3;
              *(char *)((long)&local_1b0 + uVar16 + 2) = cVar3;
              uVar16 = uVar18;
            } while ((uint)uVar18 < 0x3f);
            *(undefined1 *)((long)&local_1b0 + (uVar18 & 0xffffffff)) = 0;
            pcVar10 = (char *)((long)&local_1b0 + 1);
            cVar4 = (char)local_1b0;
            while (cVar4 != '\0') {
              cVar4 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            }
            *(undefined1 *)((long)&local_1b0 + (long)(int)uVar18) = 0;
            pcVar10 = (char *)((long)&local_1b0 + 1);
            cVar4 = (char)local_1b0;
            while (cVar4 != '\0') {
              cVar4 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            }
            FUN_7103776640(&local_170,lVar2,(byte ****)&local_1b0,param_3,param_4,param_5,param_6,
                           param_7,param_8);
            uVar16 = local_168;
            uVar18 = (*(long *)(param_1 + 0x4f0) - *(long *)(param_1 + 0x4e8) >> 4) *
                     -0x3333333333333333;
            if (uVar18 < uVar26 || uVar18 - uVar26 == 0) goto LAB_7101b05fa0;
            if ((*(byte *)(*(long *)(param_1 + 0x4e8) + uVar26 * 0x50 + 5) >> 2 & 1) == 0) {
              pcVar10 = "text_reward";
            }
            else {
              pcVar10 = "text_exp";
            }
            FUN_7103778300(0x3f800000,local_168,(long)pcVar10);
            local_170 = &PTR_FUN_710523d988;
            local_168 = 0;
            if (uVar16 != 0) {
              uVar18 = *(ulong *)(uVar16 + 0x18);
              *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
              *(undefined8 *)(uVar16 + 0x18) = 0;
              if (uVar18 != 0) {
                FUN_710392eb40(uVar18);
              }
              FUN_710392eb40(uVar16);
            }
            uVar26 = uVar26 + 1;
          } while ((long)uVar26 < (long)iVar23);
        }
        else {
          uVar26 = 0;
          do {
            param_3 = (long ****)(uVar26 & 0xffffffff);
            FUN_710062dc20((uint *)&local_160,"_%02d");
            uVar16 = 0;
            do {
              uVar18 = uVar16;
              if (*(char *)((long)&local_110 + uVar16) == '\0') break;
              *(char *)((long)&local_1b0 + uVar16) = *(char *)((long)&local_110 + uVar16);
              cVar4 = *(char *)((long)&local_110 + uVar16 + 1);
              if (cVar4 == '\0') {
                uVar18 = uVar16 + 1;
                break;
              }
              cVar3 = *(char *)((long)&local_110 + uVar16 + 2);
              *(char *)((long)&local_1b0 + uVar16 + 1) = cVar4;
              if (cVar3 == '\0') {
                uVar18 = uVar16 + 2;
                break;
              }
              uVar18 = uVar16 + 3;
              *(char *)((long)&local_1b0 + uVar16 + 2) = cVar3;
              uVar16 = uVar18;
            } while ((uint)uVar18 < 0x3f);
            *(undefined1 *)((long)&local_1b0 + (uVar18 & 0xffffffff)) = 0;
            local_1b4 = (int)uVar18;
            pcVar10 = (char *)((long)&local_1b0 + 1);
            cVar4 = (char)local_1b0;
            while (cVar4 != '\0') {
              cVar4 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            }
            if (local_1b4 < 0x3f) {
              uVar12 = local_1b4 - 1;
              pppuVar17 = local_158;
              do {
                cVar4 = *(char *)pppuVar17;
                if (cVar4 == '\0') break;
                lVar20 = (long)local_1b4;
                uVar12 = uVar12 + 1;
                pppuVar17 = (undefined ***)((long)pppuVar17 + 1);
                local_1b4 = local_1b4 + 1;
                *(char *)((long)&local_1b0 + lVar20) = cVar4;
              } while (uVar12 < 0x3e);
            }
            *(undefined1 *)((long)&local_1b0 + (long)local_1b4) = 0;
            pcVar10 = (char *)((long)&local_1b0 + 1);
            cVar4 = (char)local_1b0;
            while (cVar4 != '\0') {
              cVar4 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            }
            FUN_7103776640(&local_170,lVar2,(byte ****)&local_1b0,param_3,param_4,param_5,param_6,
                           param_7,param_8);
            uVar16 = local_168;
            uVar18 = (*(long *)(param_1 + 0x4f0) - *(long *)(param_1 + 0x4e8) >> 4) *
                     -0x3333333333333333;
            if (uVar18 < uVar26 || uVar18 - uVar26 == 0) {
LAB_7101b05fa0:
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            if ((*(byte *)(*(long *)(param_1 + 0x4e8) + uVar26 * 0x50 + 5) >> 2 & 1) == 0) {
              pcVar10 = "text_reward";
            }
            else {
              pcVar10 = "text_exp";
            }
            FUN_7103778300(0x3f800000,local_168,(long)pcVar10);
            local_170 = &PTR_FUN_710523d988;
            local_168 = 0;
            if (uVar16 != 0) {
              uVar18 = *(ulong *)(uVar16 + 0x18);
              *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
              *(undefined8 *)(uVar16 + 0x18) = 0;
              if (uVar18 != 0) {
                FUN_710392eb40(uVar18);
              }
              FUN_710392eb40(uVar16);
            }
            uVar26 = uVar26 + 1;
          } while ((long)uVar26 < (long)iVar23);
        }
      }
      local_d0 = &PTR_FUN_710523d988;
      local_c8 = 0;
      if (uVar8 != 0) {
        uVar26 = *(ulong *)(uVar8 + 0x18);
        *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar8 + 0x18) = 0;
        if (uVar26 != 0) {
          FUN_710392eb40(uVar26);
        }
        FUN_710392eb40(uVar8);
      }
    }
    local_b8 = (byte ***)0x657a6972705f6e69;
    local_110 = (long ***)((ulong)local_110 & 0xffffffffffffff00);
    local_b0 = 0x5f;
    uStack_af = 0x75;
    uStack_ae = 0x70;
    uStack_ad = 0;
    uVar19 = 0x69;
    local_118 = (long ***)0x0;
    local_c0 = (undefined **)0xb00000000;
    pbVar15 = (byte *)((long)&local_b8 + 1);
    uVar12 = uVar21;
    do {
      uVar12 = uVar12 * 0x89 ^ uVar19;
      uVar19 = (uint)*pbVar15;
      pbVar15 = pbVar15 + 1;
    } while (uVar19 != 0);
    local_104 = local_104 & 0xffffffffffffff00;
    local_110 = (long ***)0x7a6972705f746966;
    local_c0 = (undefined **)CONCAT44(0xb,uVar12);
    local_108 = 0x70755f65;
    uVar25 = 0x66;
    local_118 = (long ***)0xc00000000;
    pbVar15 = (byte *)((long)&local_110 + 1);
    uVar19 = uVar21;
    do {
      uVar19 = uVar19 * 0x89 ^ uVar25;
      uVar25 = (uint)*pbVar15;
      pbVar15 = pbVar15 + 1;
    } while (uVar25 != 0);
    local_118 = (long ***)CONCAT44(0xc,uVar19);
    if (1 < (ulong)((*(long *)(param_1 + 0x4f0) - *(long *)(param_1 + 0x4e8) >> 4) *
                   -0x3333333333333333)) {
      uStack_ad = 0x5f;
      uStack_ac = 0x62756f64;
      local_a8 = CONCAT13(local_a8._3_1_,0x656c);
      local_c0 = (undefined **)CONCAT44(0x12,uVar12);
      uVar25 = 0x69;
      pbVar15 = (byte *)((long)&local_b8 + 1);
      uVar12 = uVar21;
      do {
        uVar12 = uVar12 * 0x89 ^ uVar25;
        uVar25 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar25 != 0);
      local_104 = 0x656c62756f645f;
      uVar25 = 0x66;
      local_c0 = (undefined **)CONCAT44(0x12,uVar12);
      local_118 = (long ***)CONCAT44(0x13,uVar19);
      pbVar15 = (byte *)((long)&local_110 + 1);
      do {
        uVar21 = uVar21 * 0x89 ^ uVar25;
        uVar25 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar25 != 0);
      local_118 = (long ***)CONCAT44(0x13,uVar21);
    }
    FUN_71037780e0(&local_160,param_1 + 0x3d0,(long ****)&local_b8,param_3,param_4,param_5,param_6,
                   param_7,param_8);
    ppuVar6 = local_158[0];
    pppuVar17 = *(undefined ****)(param_1 + 0x440);
    if (pppuVar17 < *(undefined ****)(param_1 + 0x448)) {
      *pppuVar17 = &PTR_FUN_710523d9e8;
      pppuVar17[1] = (undefined **)0x0;
      if (pppuVar17 != &local_160) {
        local_158[0] = (undefined **)0x0;
        ppuVar9 = pppuVar17[1];
        pppuVar17[1] = ppuVar6;
        if (ppuVar9 != (undefined **)0x0) {
          FUN_710392eb40((ulong)ppuVar9);
        }
      }
      *(long *)(param_1 + 0x440) = *(long *)(param_1 + 0x440) + 0x10;
    }
    else {
      FUN_7101b09e60(plVar1,&local_160,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    ppuVar6 = local_158[0];
    local_160 = &PTR_FUN_710523d9e8;
    local_158[0] = (undefined **)0x0;
    if (ppuVar6 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar6);
    }
    FUN_71037780e0(&local_160,param_1 + 0x3d0,(long ****)&local_110,param_3,param_4,param_5,param_6,
                   param_7,param_8);
    ppuVar6 = local_158[0];
    pppuVar17 = *(undefined ****)(param_1 + 0x440);
    if (pppuVar17 < *(undefined ****)(param_1 + 0x448)) {
      *pppuVar17 = &PTR_FUN_710523d9e8;
      pppuVar17[1] = (undefined **)0x0;
      if (pppuVar17 != &local_160) {
        local_158[0] = (undefined **)0x0;
        ppuVar9 = pppuVar17[1];
        pppuVar17[1] = ppuVar6;
        if (ppuVar9 != (undefined **)0x0) {
          FUN_710392eb40((ulong)ppuVar9);
        }
      }
      *(long *)(param_1 + 0x440) = *(long *)(param_1 + 0x440) + 0x10;
    }
    else {
      FUN_7101b09e60(plVar1,&local_160,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    ppuVar6 = local_158[0];
    local_160 = &PTR_FUN_710523d9e8;
    local_158[0] = (undefined **)0x0;
    if (ppuVar6 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar6);
    }
    FUN_710377aee0(0x3f800000,*plVar1);
    return;
  }
  if (puVar22 == puVar24) goto LAB_7101b0555c;
  if ((*(char *)(*(long *)(param_1 + 0x518) + 0x4aa) == '\0') ||
     ((*(byte *)(*(long *)(param_1 + 0x518) + 0x1b0) >> 1 & 1) == 0)) {
    if (*(long **)(puVar22[1] + 8) != (long *)0x0) {
      uVar8 = (**(code **)(**(long **)(puVar22[1] + 8) + 0x138))();
      if ((uVar8 & 1) == 0) {
        return;
      }
      puVar22 = *(undefined8 **)(param_1 + 0x438);
      puVar24 = *(undefined8 **)(param_1 + 0x440);
    }
    if (puVar22 + 2 != puVar24) {
      do {
        uVar13 = puVar22[3];
        uVar8 = puVar22[1];
        puVar22[3] = 0;
        puVar22[1] = uVar13;
        if (uVar8 != 0) {
          FUN_710392eb40(uVar8);
        }
        puVar22 = puVar22 + 2;
      } while (puVar24 + -2 != puVar22);
      puVar24 = *(undefined8 **)(param_1 + 0x440);
      if (puVar24 == puVar22) goto LAB_7101b05524;
    }
    do {
      puVar24 = puVar24 + -2;
      (**(code **)*puVar24)(puVar24);
    } while (puVar22 != puVar24);
LAB_7101b05524:
    *(undefined8 **)(param_1 + 0x440) = puVar22;
    if (*(undefined8 **)(param_1 + 0x438) == puVar22) {
      return;
    }
    FUN_710377aee0(0x3f800000,(long)*(undefined8 **)(param_1 + 0x438));
    return;
  }
  if ((ulong)((long)puVar24 - (long)puVar22 >> 4) < 2) {
    return;
  }
  local_c0 = &PTR_FUN_710523d9e8;
  local_b8 = (byte ***)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_b8 == (byte ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_160 = (undefined **)((ulong)local_160 & 0xffffffff00000000);
      local_118 = (long ***)&SUB_00000018;
      param_3 = (long ****)&local_118;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_160);
      if (((uVar8 & 1) != 0) &&
         (local_b8 = (byte ***)
                     FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         local_b8 != (byte ***)0x0)) goto LAB_7101b057d0;
    }
    local_b8 = (byte ***)0x0;
  }
LAB_7101b057d0:
  *(undefined1 *)(local_b8 + 2) = 1;
  *local_b8 = (byte **)0x0;
  local_b8[1] = (byte **)0x0;
  if (&local_c0 != puVar24 + -2) {
    puVar22 = (undefined8 *)puVar24[-1];
    *local_b8 = (byte **)*puVar22;
    local_b8[1] = (byte **)puVar22[1];
    *(undefined1 *)(local_b8 + 2) = *(undefined1 *)(puVar24[-1] + 0x10);
  }
  FUN_710377aee0(0x3f800000,(long)&local_c0);
  puVar24 = *(undefined8 **)(param_1 + 0x438);
  puVar22 = *(undefined8 **)(param_1 + 0x440);
  while (puVar22 != puVar24) {
    puVar22 = puVar22 + -2;
    (**(code **)*puVar22)(puVar22);
  }
  *(undefined8 **)(param_1 + 0x440) = puVar24;
  if (puVar24 == *(undefined8 **)(param_1 + 0x448)) {
    FUN_7101438690(plVar1,&local_c0,param_3,param_4,param_5,param_6,param_7,param_8);
    goto LAB_7101b05f8c;
  }
  *puVar24 = &PTR_FUN_710523d9e8;
  puVar22 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar22 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_160 = (undefined **)((ulong)local_160 & 0xffffffff00000000);
      local_118 = (long ***)&SUB_00000018;
      pppplVar11 = (long ****)&local_118;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_160);
      if (((uVar8 & 1) != 0) &&
         (puVar22 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,pppplVar11,param_4,param_5,param_6,param_7,param_8),
         puVar22 != (undefined8 *)0x0)) goto LAB_7101b058ac;
    }
    puVar22 = (undefined8 *)0x0;
  }
LAB_7101b058ac:
  *(undefined1 *)(puVar22 + 2) = 1;
  *puVar22 = 0;
  puVar22[1] = 0;
  puVar24[1] = puVar22;
  if (puVar24 != &local_c0) {
    *puVar22 = *local_b8;
    *(byte ***)(puVar24[1] + 8) = local_b8[1];
    *(undefined1 *)(puVar24[1] + 0x10) = *(undefined1 *)(local_b8 + 2);
  }
  *(long *)(param_1 + 0x440) = *(long *)(param_1 + 0x440) + 0x10;
LAB_7101b05f8c:
  pppbVar7 = local_b8;
  local_c0 = &PTR_FUN_710523d9e8;
  local_b8 = (byte ***)0x0;
  if (pppbVar7 == (byte ***)0x0) {
    return;
  }
  FUN_710392eb40((ulong)pppbVar7);
  return;
}

