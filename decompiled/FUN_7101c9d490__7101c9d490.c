// addr:      7101c9d490
// offset:    0x1c9d490
// name:      FUN_7101c9d490
// mangled:   
// signature: undefined __cdecl FUN_7101c9d490(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c9d490(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  ushort uVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  byte bVar9;
  uint uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  byte ****ppppbVar16;
  long ****pppplVar17;
  undefined8 uVar18;
  ushort uVar19;
  char *pcVar20;
  int *piVar21;
  int *piVar22;
  int *piVar23;
  uint uVar24;
  long *plVar25;
  uint uVar26;
  char *pcVar27;
  undefined4 local_198 [2];
  undefined **local_190;
  long local_188;
  undefined8 local_180;
  undefined1 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined **local_158;
  ulong local_150;
  undefined4 local_148 [2];
  undefined **local_140;
  long local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined4 local_108 [2];
  undefined **local_100;
  long local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 local_c8 [4];
  long local_b8;
  int local_b0;
  undefined **local_88;
  long *local_80;
  
  plVar1 = (long *)(param_1 + 0x168);
  if (*(int *)(param_1 + 0x10c) == 0) {
    (**(code **)(**(long **)(param_1 + 0x130) + 0x70))(*(long **)(param_1 + 0x130),0);
    (**(code **)(**(long **)(param_1 + 0x130) + 0x60))(*(long **)(param_1 + 0x130),0);
    FUN_7101ca10c0(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8);
    pcVar20 = *(char **)(param_1 + 0x180);
    pcVar2 = *(char **)(param_1 + 0x188);
    pcVar27 = pcVar20;
    if (pcVar20 != pcVar2) {
      cVar4 = *pcVar20;
      while ((pcVar27 = pcVar20, cVar4 != '\x06' &&
             (pcVar20 = pcVar20 + 1, pcVar27 = pcVar2, pcVar2 != pcVar20))) {
        cVar4 = *pcVar20;
      }
    }
    uVar26 = (uint)((ulong)(*(long *)(param_1 + 0x230) - *(long *)(param_1 + 0x228)) >> 2);
    if (0 < (int)uVar26) {
      uVar24 = 0;
      do {
        FUN_7103771d60(&local_88,*plVar1,(long ****)(ulong)uVar24,param_4,param_5,param_6,param_7,
                       param_8);
        plVar11 = local_80;
        plVar25 = (long *)*local_80;
        if (plVar25 != (long *)0x0) {
          (**(code **)(*plVar25 + 0x1f8))(plVar25,pcVar27 != pcVar2);
          uVar12 = (**(code **)(*plVar25 + 0x200))(plVar25);
          if ((uVar12 & 1) == 0) {
            uVar10 = 1;
          }
          else {
            uVar10 = (**(code **)(*plVar25 + 0x210))(plVar25);
            uVar10 = uVar10 ^ 1;
          }
          (**(code **)(*plVar25 + 0x388))(plVar25,uVar10 & 1,0);
        }
        local_88 = &PTR_FUN_710523d9c8;
        local_80 = (long *)0x0;
        if (plVar11 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar11);
        }
        uVar24 = uVar24 + 1;
      } while (uVar26 != uVar24);
    }
    pppplVar17 = (long ****)0x0;
    *(undefined4 *)(param_1 + 0x264) = 0;
    FUN_7101c9f350(param_1,*(ushort *)(param_1 + 0x254),0,param_4,param_5,param_6,param_7,param_8);
    piVar21 = *(int **)(param_1 + 0x228);
    piVar22 = *(int **)(param_1 + 0x230);
    if (piVar22 != piVar21) {
      iVar3 = *piVar21;
      piVar23 = piVar21;
      while (iVar3 != 0x21e) {
        piVar23 = piVar23 + 1;
        if (piVar22 == piVar23) goto LAB_7101c9dbf4;
        iVar3 = *piVar23;
      }
      if (piVar23 != piVar22) {
        pppplVar17 = (long ****)((ulong)((long)piVar23 - (long)piVar21) >> 2);
        FUN_7103771d60(&local_88,*plVar1,pppplVar17,param_4,param_5,param_6,param_7,param_8);
        plVar11 = local_80;
        if ((long *)*local_80 == (long *)0x0) {
          bVar9 = 0;
        }
        else {
          bVar9 = (**(code **)(*(long *)*local_80 + 0x2f8))();
          bVar9 = bVar9 & 1;
        }
        *(byte *)(param_1 + 0x260) = bVar9;
        local_88 = &PTR_FUN_710523d9c8;
        local_80 = (long *)0x0;
        if (plVar11 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar11);
        }
      }
    }
LAB_7101c9dbf4:
    FUN_7101ca1830(param_1,*(uint *)(param_1 + 0x264),pppplVar17,param_4,param_5,param_6,param_7,
                   param_8);
    FUN_7103771a80(plVar1,*(int *)(param_1 + 0x264),0);
    (**(code **)(**(long **)(param_1 + 0x168) + 0x70))(*(long **)(param_1 + 0x168),1);
    return;
  }
  plVar11 = (long *)*plVar1;
  if ((char)plVar11[0x50] != '\0') {
    (**(code **)(*plVar11 + 0x70))(plVar11,0);
    FUN_7101c9f130(param_1,*(ushort *)(param_1 + 0x254),param_3,param_4,param_5,param_6,param_7,
                   param_8);
    uVar26 = (uint)((ulong)(*(long *)(param_1 + 0x230) - *(long *)(param_1 + 0x228)) >> 2);
    if (0 < (int)uVar26) {
      uVar24 = 0;
      do {
        FUN_7103771d60(&local_88,*plVar1,(long ****)(ulong)uVar24,param_4,param_5,param_6,param_7,
                       param_8);
        plVar11 = local_80;
        plVar25 = (long *)*local_80;
        if (plVar25 != (long *)0x0) {
          (**(code **)(*plVar25 + 0x1f8))(plVar25,0);
          uVar12 = (**(code **)(*plVar25 + 0x200))(plVar25);
          if ((uVar12 & 1) == 0) {
            uVar10 = 1;
          }
          else {
            uVar10 = (**(code **)(*plVar25 + 0x210))(plVar25);
            uVar10 = uVar10 ^ 1;
          }
          (**(code **)(*plVar25 + 0x388))(plVar25,uVar10 & 1,0);
        }
        local_88 = &PTR_FUN_710523d9c8;
        local_80 = (long *)0x0;
        if (plVar11 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar11);
        }
        uVar24 = uVar24 + 1;
      } while (uVar26 != uVar24);
    }
    if (0 < *(int *)(param_1 + 0x104)) {
      *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + -1;
    }
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x120),0x7104433246);
    lVar13 = *(long *)(DAT_710532f8d0 + 8);
    if ((ulong)(*(long *)(lVar13 + 0x48) - *(long *)(lVar13 + 0x40) >> 3) < 4) {
      uVar12 = 0;
      cVar4 = *(char *)(lVar13 + 0x191);
    }
    else {
      uVar12 = *(ulong *)(*(long *)(lVar13 + 0x40) + 0x18);
      cVar4 = *(char *)(lVar13 + 0x191);
    }
    if (cVar4 != '\0') {
      return;
    }
    uVar14 = FUN_7103313f20(lVar13,uVar12,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                            param_8);
    if ((uVar14 & 1) == 0) {
      return;
    }
    FUN_71024076d0(local_c8,uVar12);
    if (local_b8 == 0) {
      return;
    }
    if (DAT_7106dd53a8 != '\x01') {
      return;
    }
    if (local_b0 != DAT_7106dd53ac) {
      return;
    }
    piVar21 = (int *)(local_b8 + 0x38);
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar21,0x10);
      if (bVar6) {
        *piVar21 = *piVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    return;
  }
  if (*(int *)(param_1 + 0x264) == *(int *)((long)plVar11 + 0x254)) goto LAB_7101c9d968;
  lVar13 = *(long *)(DAT_710532f8d0 + 8);
  if ((ulong)(*(long *)(lVar13 + 0x48) - *(long *)(lVar13 + 0x40) >> 3) < 2) {
    uVar12 = 0;
    if (*(char *)(lVar13 + 0x191) == '\0') goto LAB_7101c9d8b0;
LAB_7101c9d920:
    local_f0 = 0x87650000000000;
    local_e0 = 0xffffffffffffffff;
    uStack_d8 = 0;
    local_108[0] = 0;
    local_d0 = 0;
  }
  else {
    uVar12 = *(ulong *)(*(long *)(lVar13 + 0x40) + 8);
    if (*(char *)(lVar13 + 0x191) != '\0') goto LAB_7101c9d920;
LAB_7101c9d8b0:
    param_3 = 4;
    uVar14 = FUN_7103313f20(lVar13,uVar12,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                            param_8);
    if ((uVar14 & 1) == 0) goto LAB_7101c9d920;
    FUN_71024076d0(local_108,uVar12);
    if (((local_f8 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_f0 == DAT_7106dd53ac)) {
      piVar21 = (int *)(local_f8 + 0x38);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar6) {
          *piVar21 = *piVar21 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  local_100 = &PTR_FUN_7104f73d50;
  local_f8 = 0;
  local_e8 = 0;
  uVar26 = *(uint *)(*(long *)(param_1 + 0x168) + 0x254);
  *(uint *)(param_1 + 0x264) = uVar26;
  FUN_7101ca1830(param_1,uVar26,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101c9d968:
  uVar12 = *(long *)(param_1 + 0x230) - *(long *)(param_1 + 0x228);
  if ((int)(uVar12 >> 2) < 1) {
    return;
  }
  uVar14 = 0;
  bVar6 = false;
  do {
    pppplVar17 = (long ****)(uVar14 & 0xffffffff);
    FUN_7103771d60(&local_88,*plVar1,pppplVar17,param_4,param_5,param_6,param_7,param_8);
    plVar11 = local_80;
    if ((long *)*local_80 == (long *)0x0) {
      bVar9 = 0;
    }
    else {
      bVar9 = (**(code **)(*(long *)*local_80 + 0x2f8))();
    }
    if ((ulong)(*(long *)(param_1 + 0x230) - *(long *)(param_1 + 0x228) >> 2) <= uVar14) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    uVar26 = *(uint *)(*(long *)(param_1 + 0x228) + uVar14 * 4);
    if (uVar26 == 0x21e) {
      if (*(byte *)(param_1 + 0x260) != (bVar9 & 1)) {
        if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
          pppplVar17 = (long ****)&DAT_00000004;
          uVar12 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x106a2070e6,
                                  (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8);
          if ((uVar12 & 1) != 0) {
            FUN_71024076d0(local_148,0x106a2070e6);
            if (((local_138 != 0) && (DAT_7106dd53a8 == '\x01')) &&
               ((int)local_130 == DAT_7106dd53ac)) {
              piVar21 = (int *)(local_138 + 0x38);
              do {
                cVar4 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar21,0x10);
                if (bVar7) {
                  *piVar21 = *piVar21 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
LAB_7101c9dc74:
            local_140 = &PTR_FUN_7104f73d50;
            local_138 = 0;
            local_128 = 0;
            uVar5 = *(ushort *)(param_1 + 0x254);
            uVar19 = uVar5 & (*(ushort *)(param_1 + 0x240) ^ 0xffff);
            if ((bVar9 & 1) == 0) {
              uVar19 = *(ushort *)(param_1 + 0x240) | uVar5;
            }
            *(byte *)(param_1 + 0x260) = bVar9 & 1;
            if (uVar19 != uVar5) {
              *(ushort *)(param_1 + 0x254) = uVar19;
              FUN_7101c9f130(param_1,uVar19,pppplVar17,param_4,param_5,param_6,param_7,param_8);
              FUN_7101ca1830(param_1,*(uint *)(param_1 + 0x264),pppplVar17,param_4,param_5,param_6,
                             param_7,param_8);
            }
            plVar1 = local_80;
            local_88 = &PTR_FUN_710523d9c8;
            local_80 = (long *)0x0;
            if (plVar1 != (long *)0x0) {
              FUN_710392eb40((ulong)plVar1);
            }
LAB_7101c9dccc:
            if (!bVar6) {
              return;
            }
            if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
               (uVar12 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x106a2070e6,
                                        (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                                        param_8), (uVar12 & 1) != 0)) {
              FUN_71024076d0(local_198,0x106a2070e6);
              if (((local_188 != 0) && (DAT_7106dd53a8 == '\x01')) &&
                 ((int)local_180 == DAT_7106dd53ac)) {
                piVar21 = (int *)(local_188 + 0x38);
                do {
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar21,0x10);
                  if (bVar6) {
                    *piVar21 = *piVar21 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
            }
            else {
              local_180 = 0x87650000000000;
              local_170 = 0xffffffffffffffff;
              uStack_168 = 0;
              local_198[0] = 0;
              local_160 = 0;
            }
            local_190 = &PTR_FUN_7104f73d50;
            local_188 = 0;
            local_178 = 0;
            uVar18 = 0;
            FUN_7101c9f350(param_1,*(ushort *)(param_1 + 0x254),0,param_4,param_5,param_6,param_7,
                           param_8);
            FUN_7101ca1830(param_1,*(uint *)(param_1 + 0x264),uVar18,param_4,param_5,param_6,param_7
                           ,param_8);
            return;
          }
        }
        local_130 = 0x87650000000000;
        local_120 = 0xffffffffffffffff;
        uStack_118 = 0;
        local_148[0] = 0;
        local_110 = 0;
        goto LAB_7101c9dc74;
      }
LAB_7101c9da38:
      local_88 = &PTR_FUN_710523d9c8;
      local_80 = (long *)0x0;
      if (plVar11 != (long *)0x0) goto LAB_7101c9db2c;
    }
    else {
      if (((bVar9 ^ (uVar26 & (*(ushort *)(param_1 + 0x254) ^ 0xffffffff)) == 0) & 1) == 0)
      goto LAB_7101c9da38;
      if ((bVar9 & 1) == 0) {
        if (*plVar11 == 0) {
          ppppbVar16 = (byte ****)&DAT_7104867c2e;
        }
        else {
          ppppbVar16 = *(byte *****)(*plVar11 + 0x88);
        }
        FUN_7103776640(&local_158,param_1 + 0x118,ppppbVar16,pppplVar17,param_4,param_5,param_6,
                       param_7,param_8);
        uVar8 = local_150;
        FUN_7103778300(0x3f800000,local_150,0x71044016e5);
        local_158 = &PTR_FUN_710523d988;
        local_150 = 0;
        if (uVar8 != 0) {
          uVar15 = *(ulong *)(uVar8 + 0x18);
          *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar8 + 0x18) = 0;
          if (uVar15 != 0) {
            FUN_710392eb40(uVar15);
          }
          FUN_710392eb40(uVar8);
        }
        uVar19 = *(ushort *)(param_1 + 0x254) & ((ushort)uVar26 ^ 0xffff);
      }
      else {
        if (*plVar11 == 0) {
          ppppbVar16 = (byte ****)&DAT_7104867c2e;
        }
        else {
          ppppbVar16 = *(byte *****)(*plVar11 + 0x88);
        }
        FUN_7103776640(&local_158,param_1 + 0x118,ppppbVar16,pppplVar17,param_4,param_5,param_6,
                       param_7,param_8);
        uVar8 = local_150;
        FUN_7103778300(0x3f800000,local_150,0x7104270082);
        local_158 = &PTR_FUN_710523d988;
        local_150 = 0;
        if (uVar8 != 0) {
          uVar15 = *(ulong *)(uVar8 + 0x18);
          *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar8 + 0x18) = 0;
          if (uVar15 != 0) {
            FUN_710392eb40(uVar15);
          }
          FUN_710392eb40(uVar8);
        }
        uVar19 = *(ushort *)(param_1 + 0x254) | (ushort)uVar26;
      }
      *(ushort *)(param_1 + 0x254) = uVar19;
      bVar6 = true;
LAB_7101c9db2c:
      local_80 = (long *)0x0;
      local_88 = &PTR_FUN_710523d9c8;
      FUN_710392eb40((ulong)plVar11);
    }
    uVar14 = uVar14 + 1;
    if ((long)(uVar12 * 0x40000000) >> 0x20 <= (long)uVar14) goto LAB_7101c9dccc;
  } while( true );
}

