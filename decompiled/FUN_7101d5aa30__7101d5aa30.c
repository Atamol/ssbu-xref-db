// addr:      7101d5aa30
// offset:    0x1d5aa30
// name:      FUN_7101d5aa30
// mangled:   
// signature: undefined __cdecl FUN_7101d5aa30(int * param_1, uint param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d5aa30(int *param_1,uint param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  int *piVar2;
  undefined ***pppuVar3;
  int iVar4;
  char cVar5;
  long ***ppplVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  undefined2 *puVar14;
  ulong uVar15;
  undefined **ppuVar16;
  int iVar17;
  long **pplVar18;
  char *pcVar19;
  byte *pbVar20;
  char *pcVar21;
  uint uVar22;
  int iVar23;
  ulong uVar24;
  long *plVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined **local_168;
  ulong local_160;
  undefined **local_158;
  long *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined2 local_fc;
  undefined4 local_b0;
  undefined4 uStack_ac;
  
  uVar11 = param_1[2];
  if (uVar11 == param_2) {
    return;
  }
  ppuVar16 = (undefined **)(ulong)param_2;
  piVar2 = param_1 + 4;
  param_1[2] = param_2;
  if ((param_2 == 1) && ((uVar11 | 1) == 3)) {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 6),0x7104401889);
    if ((*(ulong *)(param_1 + 0x20) & 0xff0000ffffffffff) == 0xc1000011cf2812f7) {
      lVar13 = *(long *)(param_1 + 6);
      pcVar19 = "ptn_01_back_for_duckhunt";
    }
    else {
      if ((*(ulong *)(param_1 + 0x20) & 0xff0000ffffffffff) != 0xc100000ede098ba4)
      goto LAB_7101d5ab9c;
      lVar13 = *(long *)(param_1 + 6);
      pcVar19 = "ptn_01_back_for_banjokazooie";
    }
    FUN_7103778300(0x3f800000,lVar13,(long)pcVar19);
    iVar12 = param_1[2];
  }
  else {
    FUN_7103778430((long)piVar2,"ptn_%02d",ppuVar16,param_4,param_5,param_6,param_7,param_8);
    if ((*(ulong *)(param_1 + 0x20) & 0xff0000ffffffffff) == 0xc1000011cf2812f7) {
      uVar22 = param_1[2];
      pcVar19 = "ptn_%02d_for_duckhunt";
    }
    else {
      if ((*(ulong *)(param_1 + 0x20) & 0xff0000ffffffffff) != 0xc100000ede098ba4)
      goto LAB_7101d5ab9c;
      uVar22 = param_1[2];
      pcVar19 = "ptn_%02d_for_banjokazooie";
    }
    ppuVar16 = (undefined **)(ulong)uVar22;
    FUN_7103778430((long)piVar2,pcVar19,ppuVar16,param_4,param_5,param_6,param_7,param_8);
LAB_7101d5ab9c:
    iVar12 = param_1[2];
  }
  if ((uVar11 != 0) || (iVar12 != 1)) {
    if (iVar12 == 3) {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 6),0x710435babd);
    }
    goto LAB_7101d5b448;
  }
  iVar12 = param_1[1];
  if (iVar12 == -1) goto LAB_7101d5b448;
  puVar14 = FUN_7101465a30();
  if (*(char *)((long)puVar14 + 5) == '\0') {
    lVar13 = *(long *)(param_1 + 6);
    if (iVar12 != *(int *)(puVar14 + 0x24)) goto LAB_7101d5abd4;
LAB_7101d5ab64:
    pcVar19 = "panel_move_00";
  }
  else {
    lVar13 = *(long *)(param_1 + 6);
    if (*(int *)(puVar14 + 0x26) == (int)*(char *)(puVar14 + (long)iVar12 * 0x1c30 + 0x38))
    goto LAB_7101d5ab64;
LAB_7101d5abd4:
    pcVar19 = "panel_move_01";
  }
  FUN_7103778300(0x3f800000,lVar13,(long)pcVar19);
  FUN_7103776640(&local_168,(long)piVar2,(byte ****)"set_parts_tag",ppuVar16,param_4,param_5,param_6
                 ,param_7,param_8);
  uVar24 = local_160;
  if ((*(long *)(local_160 + 8) != 0) &&
     (lVar13 = *(long *)(*(long *)(local_160 + 8) + 0x18), lVar13 != 0)) {
    *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) & 0xfe;
  }
  FUN_7103776910(&local_110,(long)piVar2,(long ****)"set_fxui_card",ppuVar16,param_4,param_5,param_6
                 ,param_7,param_8);
  ppplVar6 = local_108;
  pplVar18 = *local_108;
  if (pplVar18 != (long **)0x0) {
    *(byte *)(pplVar18 + 0xb) = *(byte *)(pplVar18 + 0xb) & 0xfe;
  }
  local_110 = &PTR_FUN_710523d9a8;
  local_108 = (long ***)0x0;
  if (ppplVar6 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar6);
  }
  if (param_1[1] != -1) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_71053144d8), iVar12 != 0))
    {
      FUN_7101764000();
      ppuVar16 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    param_1[0x3e] = 0;
    uVar24 = local_160;
    if ((uint)param_1[1] < 8) {
      if (((DAT_71053144d8 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(&DAT_71053144d8), iVar12 != 0)) {
        FUN_7101764000();
        ppuVar16 = &PTR_LOOP_7104f17000;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      if ((DAT_71052cc5d8 == '\x10') || (DAT_71052cc5d8 == '\x0e')) {
        plVar25 = *(long **)(*DAT_7105314510 + 0x68);
        if ((uint)param_1[1] < 8) {
          uVar11 = (&DAT_7105313f78)[(long)param_1[1] * 0x2c];
        }
        else {
          uVar11 = 0;
        }
        uVar11 = FUN_71017d1480(*plVar25,0x15,uVar11);
        if ((uint)param_1[1] < 8) {
          ppuVar16 = (undefined **)(ulong)(uint)(&DAT_7105313f7c)[(long)param_1[1] * 0x2c];
        }
        else {
          ppuVar16 = (undefined **)0x0;
        }
        iVar12 = FUN_71017d1480(*plVar25,0x15,(uint)ppuVar16);
        param_1[0x3e] = 1;
        pcVar19 = *(char **)(*(long *)(DAT_71052c3600 + 8) + 0x10);
        if ((*pcVar19 == '\f') && (iVar23 = *(int *)(pcVar19 + 1) + -1, 0 < *(int *)(pcVar19 + 1)))
        {
          lVar13 = *(long *)(*(long *)(DAT_71052c3600 + 8) + 8);
          iVar17 = 0;
          pcVar21 = "";
          do {
            iVar4 = iVar23 + iVar17;
            if (iVar4 < 0) {
              iVar4 = iVar4 + 1;
            }
            iVar4 = iVar4 >> 1;
            puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pcVar19 + 5) +
                             (long)iVar4 * 8);
            uVar24 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
            if (uVar24 == 0x1cac4a9d26) {
              uVar22 = puVar1[1];
              if ((int)uVar22 < 0) goto LAB_7101d5aed0;
              pcVar21 = pcVar19 + (int)uVar22;
              break;
            }
            iVar7 = iVar4 + -1;
            if (uVar24 < 0x1cac4a9d27) {
              iVar17 = iVar4 + 1;
              iVar7 = iVar23;
            }
            iVar23 = iVar7;
          } while (iVar17 <= iVar23);
        }
        else {
LAB_7101d5aed0:
          pcVar21 = "";
        }
        cVar5 = *pcVar21;
joined_r0x007101d5aee0:
        if (cVar5 == '\b') {
          fVar26 = *(float *)(pcVar21 + 1);
        }
        else {
          fVar26 = 0.0;
        }
        fVar26 = fVar26 * 60.0;
        if (fVar26 <= 1.0) {
          fVar26 = 1.0;
        }
        iVar23 = param_1[0x3e];
      }
      else {
        fVar26 = 1.0;
        if ((uint)param_1[1] < 8) {
          if (((DAT_71053144d8 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(&DAT_71053144d8), iVar12 != 0)) {
            FUN_7101764000();
            ppuVar16 = &PTR_LOOP_7104f17000;
            FUN_71000001c0();
            __cxa_guard_release(&DAT_71053144d8);
          }
          if (DAT_71052cc5d8 == '%') {
            FUN_71017a6d60(&local_110,param_1[1]);
            fVar27 = (float)NEON_ucvtf(uStack_ac);
            fVar26 = (float)NEON_ucvtf(local_b0);
            param_1[0x3e] = 2;
            pcVar19 = *(char **)(*(long *)(DAT_71052c3600 + 8) + 0x10);
            if ((*pcVar19 == '\f') &&
               (iVar12 = *(int *)(pcVar19 + 1) + -1, 0 < *(int *)(pcVar19 + 1))) {
              lVar13 = *(long *)(*(long *)(DAT_71052c3600 + 8) + 8);
              iVar23 = 0;
              pcVar21 = "";
              do {
                iVar17 = iVar12 + iVar23;
                if (iVar17 < 0) {
                  iVar17 = iVar17 + 1;
                }
                iVar17 = iVar17 >> 1;
                puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pcVar19 + 5) +
                                 (long)iVar17 * 8);
                uVar24 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
                if (uVar24 == 0x21524683db) {
                  uVar24 = (ulong)(int)puVar1[1];
                  pcVar21 = "";
                  if ((uVar24 & 0x80000000) == 0) {
                    pcVar21 = pcVar19 + uVar24;
                  }
                  break;
                }
                iVar4 = iVar17 + -1;
                if (uVar24 < 0x21524683dc) {
                  iVar23 = iVar17 + 1;
                  iVar4 = iVar12;
                }
                iVar12 = iVar4;
              } while (iVar23 <= iVar12);
            }
            else {
              pcVar21 = "";
            }
            uVar11 = (uint)(fVar26 / 100.0);
            cVar5 = *pcVar21;
            iVar12 = (int)(fVar27 / 100.0);
            goto joined_r0x007101d5aee0;
          }
        }
        uVar11 = 0;
        iVar12 = 0;
        iVar23 = param_1[0x3e];
      }
      uVar24 = local_160;
      if (iVar23 != 0) {
        iVar17 = 1;
        if (iVar23 != 1) {
          iVar17 = 2;
        }
        param_1[0x30] = (int)(float)uVar11;
        param_1[0x2f] = iVar12;
        FUN_7103778630((ulong)(uint)(float)iVar17,*(long *)(param_1 + 6),0x71042f866d);
        local_108 = (long ***)((ulong)local_108 & 0xffffffffffffff00);
        local_110 = (undefined **)0x0;
        if (param_1[0x3e] == 2) {
          FUN_7103776640(&local_158,(long)piVar2,(byte ****)"set_parts_lct_competitio",ppuVar16,
                         param_4,param_5,param_6,param_7,param_8);
          plVar25 = local_150;
          pppuVar3 = (undefined ***)(param_1 + 0x3a);
          if (pppuVar3 != &local_158) {
            local_150 = (long *)0x0;
            uVar24 = *(ulong *)(param_1 + 0x3c);
            *(long **)(param_1 + 0x3c) = plVar25;
            if (uVar24 != 0) {
              uVar15 = *(ulong *)(uVar24 + 0x18);
              *(undefined ***)(uVar24 + 0x10) = &PTR_FUN_710523d9a8;
              *(undefined8 *)(uVar24 + 0x18) = 0;
              if (uVar15 != 0) {
                FUN_710392eb40(uVar15);
              }
              FUN_710392eb40(uVar24);
            }
          }
          plVar25 = local_150;
          local_158 = &PTR_FUN_710523d988;
          local_150 = (long *)0x0;
          if (plVar25 != (long *)0x0) {
            uVar24 = plVar25[3];
            plVar25[2] = (long)&PTR_FUN_710523d9a8;
            plVar25[3] = 0;
            if (uVar24 != 0) {
              FUN_710392eb40(uVar24);
            }
            FUN_710392eb40((ulong)plVar25);
          }
          if (*param_1 == 0) {
            FUN_710062dc20((uint *)&local_110,"set_txt_scr_02");
            FUN_7103776910(&local_158,(long)pppuVar3,(long ****)&local_108,ppuVar16,param_4,param_5,
                           param_6,param_7,param_8);
            plVar25 = local_150;
            if ((undefined ***)(param_1 + 0x36) != &local_158) {
              local_150 = (long *)0x0;
              uVar24 = *(ulong *)(param_1 + 0x38);
              *(long **)(param_1 + 0x38) = plVar25;
              if (uVar24 != 0) {
                FUN_710392eb40(uVar24);
              }
            }
            plVar25 = local_150;
            local_158 = &PTR_FUN_710523d9a8;
            local_150 = (long *)0x0;
            if (plVar25 != (long *)0x0) {
              FUN_710392eb40((ulong)plVar25);
            }
            plVar25 = *(long **)(*(long *)(param_1 + 0x38) + 0x10);
            if (plVar25 != (long *)0x0) {
              local_128 = 0;
              uStack_120 = 0;
              local_138 = 0;
              uStack_130 = 0;
              param_5 = (long ****)0x0;
              param_6 = 0;
              local_148 = 0;
              uStack_140 = 0;
              local_158 = (undefined **)0x0;
              local_150 = (long *)0x0;
              uVar11 = FUN_71037ad940((long)&local_158,0x20,0,(int)(float)param_1[0x30],0,0);
              param_4 = 0;
              FUN_71037a2270(plVar25,(ushort *)&local_158,uVar11,0);
            }
            ppuVar16 = (undefined **)0x0;
            FUN_710062dc20((uint *)&local_110,"set_txt_scr_%02d");
          }
          else {
            ppuVar16 = (undefined **)0x1;
            FUN_710062dc20((uint *)&local_110,"set_txt_scr_%02d");
          }
          FUN_7103776910(&local_158,(long)pppuVar3,(long ****)&local_108,ppuVar16,param_4,param_5,
                         param_6,param_7,param_8);
          if ((undefined ***)(param_1 + 0x32) != &local_158) {
LAB_7101d5b178:
            plVar25 = local_150;
            local_150 = (long *)0x0;
            uVar24 = *(ulong *)(param_1 + 0x34);
            *(long **)(param_1 + 0x34) = plVar25;
            if (uVar24 != 0) {
              FUN_710392eb40(uVar24);
            }
          }
LAB_7101d5b190:
          plVar25 = local_150;
          local_158 = &PTR_FUN_710523d9a8;
          local_150 = (long *)0x0;
          if (plVar25 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar25);
          }
        }
        else if (param_1[0x3e] == 1) {
          local_108 = (long ***)&DAT_5f7073675f747874;
          local_100 = 0x6e756f63;
          uVar22 = 0x74;
          local_fc = 0x74;
          uVar11 = 0x811c9dc5;
          pbVar20 = (byte *)((long)&local_108 + 1);
          do {
            uVar11 = uVar11 * 0x89 ^ uVar22;
            uVar22 = (uint)*pbVar20;
            pbVar20 = pbVar20 + 1;
          } while (uVar22 != 0);
          local_110 = (undefined **)CONCAT44(0xd,uVar11);
          FUN_7103776910(&local_158,(long)piVar2,(long ****)&local_108,ppuVar16,param_4,param_5,
                         param_6,param_7,param_8);
          if ((undefined ***)(param_1 + 0x32) != &local_158) goto LAB_7101d5b178;
          goto LAB_7101d5b190;
        }
        plVar25 = *(long **)(*(long *)(param_1 + 0x34) + 0x10);
        if (plVar25 != (long *)0x0) {
          local_128 = 0;
          uStack_120 = 0;
          local_138 = 0;
          uStack_130 = 0;
          param_5 = (long ****)0x0;
          param_6 = 0;
          local_148 = 0;
          uStack_140 = 0;
          local_158 = (undefined **)0x0;
          local_150 = (long *)0x0;
          uVar11 = FUN_71037ad940((long)&local_158,0x20,0,(int)(float)param_1[0x30],0,0);
          ppuVar16 = (undefined **)(ulong)uVar11;
          param_4 = 0;
          FUN_71037a2270(plVar25,(ushort *)&local_158,uVar11,0);
        }
        puVar14 = FUN_7101465a30();
        if (*(char *)((long)puVar14 + 5) == '\x01') {
          lVar13 = (long)param_1[1] * 0x1c30 + 0x45;
LAB_7101d5b224:
          uVar11 = (uint)(ushort)puVar14[lVar13];
        }
        else {
          if (*(char *)((long)puVar14 + 5) == '\0') {
            lVar13 = (long)param_1[1] * 0x1c30 + 0x44;
            goto LAB_7101d5b224;
          }
          uVar11 = 0;
        }
        if (param_1[0x3e] == 1) {
          if (uVar11 - 1 < 0x12) {
            uVar11 = *(uint *)(&DAT_71045456d0 + (long)(short)(uVar11 - 1) * 4);
          }
          else {
            uVar11 = 0x41a00000;
          }
          FUN_7103778630((ulong)uVar11,*(long *)(param_1 + 6),0x710434a6c2);
        }
        else {
          if (uVar11 - 2 < 0x11) {
            ppuVar16 = (undefined **)
                       (ulong)*(uint *)(&DAT_7104545720 + (long)(short)(uVar11 - 2) * 4);
          }
          else {
            ppuVar16 = (undefined **)0x1;
          }
          local_150 = (long *)((ulong)local_150 & 0xffffffffffffff00);
          local_158 = (undefined **)0x0;
          FUN_710062dc20((uint *)&local_158,"type_%dp");
          FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x3c),(long)&local_150);
        }
        fVar27 = (float)NEON_ucvtf(param_1[0x2f]);
        fVar27 = fVar27 - (float)param_1[0x30];
        if (fVar27 <= 0.0) {
          if (0.0 <= fVar27) {
            if (param_1[0x3e] == 1) {
              FUN_7103776910(&local_158,(long)piVar2,(long ****)"gsp_arrow",ppuVar16,param_4,param_5
                             ,param_6,param_7,param_8);
              plVar25 = local_150;
              lVar13 = *local_150;
              if (lVar13 != 0) {
                *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) & 0xfe;
              }
              local_158 = &PTR_FUN_710523d9a8;
              local_150 = (long *)0x0;
              if (plVar25 != (long *)0x0) {
                FUN_710392eb40((ulong)plVar25);
              }
            }
            else {
              FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x3c),0x71044530a1);
            }
            iVar12 = 3;
          }
          else {
            if (param_1[0x3e] == 1) {
              lVar13 = *(long *)(param_1 + 6);
              pcVar19 = "gsp_down";
            }
            else {
              FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x3c),0x71042a3361);
              lVar13 = *(long *)(param_1 + 0x3c);
              pcVar19 = "color_down";
            }
            FUN_7103778300(0x3f800000,lVar13,(long)pcVar19);
            iVar12 = 2;
          }
        }
        else {
          if (param_1[0x3e] == 1) {
            lVar13 = *(long *)(param_1 + 6);
            pcVar19 = "gsp_up";
          }
          else {
            FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x3c),0x71043f0c94);
            lVar13 = *(long *)(param_1 + 0x3c);
            pcVar19 = "color_up";
          }
          FUN_7103778300(0x3f800000,lVar13,(long)pcVar19);
          iVar12 = 1;
        }
        param_1[0x2d] = iVar12;
        fVar28 = ABS(fVar27 / fVar26);
        bVar8 = false;
        bVar9 = true;
        bVar10 = false;
        if (fVar28 < 0.25) {
          bVar8 = false;
          bVar9 = false;
          bVar10 = true;
          if (!NAN(fVar28)) {
            bVar8 = fVar28 < 1e-05;
            bVar9 = fVar28 == 1e-05;
            bVar10 = false;
          }
        }
        fVar28 = (float)((uint)fVar27 & 0x80000000 ^ 0x3e800000);
        if (bVar9 || bVar8 != bVar10) {
          fVar28 = fVar27 / fVar26;
        }
        param_1[0x2e] = (int)fVar28;
        uVar24 = local_160;
      }
    }
  }
  local_168 = &PTR_FUN_710523d988;
  local_160 = 0;
  if (uVar24 != 0) {
    uVar15 = *(ulong *)(uVar24 + 0x18);
    *(undefined ***)(uVar24 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar24 + 0x18) = 0;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
    FUN_710392eb40(uVar24);
  }
LAB_7101d5b448:
  FUN_7103776910(&local_110,(long)piVar2,(long ****)"set_fxui_rankflash",ppuVar16,param_4,param_5,
                 param_6,param_7,param_8);
  ppplVar6 = local_108;
  pplVar18 = *local_108;
  if (pplVar18 != (long **)0x0) {
    *(byte *)(pplVar18 + 0xb) = *(byte *)(pplVar18 + 0xb) & 0xfe;
  }
  local_110 = &PTR_FUN_710523d9a8;
  local_108 = (long ***)0x0;
  if (ppplVar6 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar6);
  }
  return;
}

