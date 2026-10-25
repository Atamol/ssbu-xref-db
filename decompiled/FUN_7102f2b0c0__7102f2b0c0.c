// addr:      7102f2b0c0
// offset:    0x2f2b0c0
// name:      FUN_7102f2b0c0
// mangled:   
// signature: undefined __cdecl FUN_7102f2b0c0(int param_1, ulong * param_2, ulong param_3, long * * * * param_4, byte * * * * param_5, long * * * * param_6, undefined8 param_7, long * * * param_8, long * * * param_9)


void FUN_7102f2b0c0(int param_1,ulong *param_2,ulong param_3,long ****param_4,byte ****param_5,
                   long ****param_6,undefined8 param_7,long ***param_8,long ***param_9)

{
  byte ***pppbVar1;
  long ***ppplVar2;
  undefined8 *puVar3;
  long ***ppplVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long ****pppplVar8;
  long *plVar9;
  ulong *puVar10;
  byte ****ppppbVar11;
  int iVar12;
  long ****extraout_x1;
  long ****extraout_x1_00;
  long ****extraout_x1_01;
  long ****extraout_x1_02;
  long ****extraout_x1_03;
  long ****extraout_x1_04;
  long ****extraout_x1_05;
  long ****extraout_x1_06;
  long ****extraout_x1_07;
  long ****extraout_x1_08;
  long ****extraout_x1_09;
  long ****extraout_x1_10;
  char *pcVar13;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 uVar14;
  undefined8 extraout_x1_21;
  long *********ppppppppplVar15;
  byte ****ppppbVar16;
  long ****pppplVar17;
  long ****pppplVar18;
  undefined4 uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  ulong *puVar26;
  uint *puVar27;
  ulong uVar28;
  long lVar29;
  int iVar30;
  undefined8 local_90;
  ulong local_88;
  ulong local_80;
  undefined4 local_64;
  
  uVar5 = *(uint *)(param_3 + 8);
  if (uVar5 < 0x16c) {
    iVar30 = (&DAT_710454a7f0)[(long)(int)uVar5 * 0x12];
  }
  else {
    iVar30 = 0;
  }
  uVar28 = *(ulong *)(param_3 + 0x30);
  if (uVar5 < 0x16c) {
    iVar12 = (&DAT_710454a7ec)[(long)(int)uVar5 * 0x12];
  }
  else {
    iVar12 = -1;
  }
  ppppbVar16 = param_5;
  pppplVar17 = param_6;
  uVar7 = FUN_71032b24e0(*(long *)(DAT_710532f730 + 8) + 0x170,iVar12);
  lVar23 = DAT_710532f730;
  pppplVar8 = (long ****)
              FUN_710325c7c0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x278),uVar28,uVar7);
  FUN_7103256240((undefined4 *)&local_90,*(long *)(*(long *)(lVar23 + 8) + 0x278),pppplVar8,
                 ppppbVar16,pppplVar17,param_7,param_8,param_9);
  iVar12 = (int)local_90;
  pppplVar18 = extraout_x1;
  if (local_88 != 0) {
    local_80 = local_88;
    FUN_710392eb40(local_88);
    pppplVar18 = extraout_x1_00;
  }
  if (((ulong)param_5 & 1) == 0) {
    uVar19 = 1;
    if ((*(byte *)(param_3 + 0xd8) & 0x10) != 0) {
      uVar19 = 2;
    }
  }
  else {
    uVar19 = 2;
  }
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = param_3;
  param_2[3] = 0;
  *param_2 = (ulong)(iVar12 == 2) | (ulong)(iVar30 == 2) << 0x20;
  *(undefined4 *)(param_2 + 1) = uVar19;
  *(undefined1 *)(param_2 + 6) = 0;
  lVar29 = *(long *)(param_3 + 0x310);
  lVar23 = *(long *)(param_3 + 0x318);
  iVar30 = 0;
  if (*(uint *)(param_3 + 8) < 0x16c) {
    iVar30 = (&DAT_710454a7f0)[(long)(int)*(uint *)(param_3 + 8) * 0x12];
  }
  ppplVar2 = param_4[1];
  ppplVar4 = param_4[2];
  if (iVar12 == 2) {
    for (; ppplVar2 != ppplVar4; ppplVar2 = ppplVar2 + 2) {
      if (((ulong)*ppplVar2 & 0xffffffffff) != 0) {
        for (plVar20 = *(long **)(lVar29 + 0xd0); plVar20 != *(long **)(lVar29 + 0xd8);
            plVar20 = plVar20 + 2) {
          if ((*(uint *)(plVar20 + 1) < 2) &&
             (lVar25 = *plVar20, ((ulong)*ppplVar2 & 0xffffffffff) == *(ulong *)(lVar25 + 0x68))) {
            if (lVar25 != 0) {
              *(undefined1 *)(lVar25 + 0x110) = 1;
              FUN_71025e9d50((long *)(lVar25 + 0x108),pppplVar18,pppplVar8,ppppbVar16,pppplVar17,
                             param_7,param_8,param_9);
              if ((*(char *)(lVar25 + 0xe0) != '\0') && (*(long *)(lVar25 + 200) != 0)) {
                *(undefined2 *)(*(long *)(lVar25 + 200) + 0x30) = 0;
              }
              if (*(long *)(lVar25 + 0xd8) != 0) {
                *(undefined1 *)(*(long *)(lVar25 + 0xd8) + 0x21) = 0;
              }
              if (*(char *)(lVar25 + 0xe0) != '\0') {
                *(undefined1 *)(*(long *)(lVar25 + 0xb0) + 0x10) = 1;
              }
              pppplVar18 = extraout_x1_01;
              if ((long ***)((ulong)ppplVar2[1] & 0xffffffffff) != (long ***)0x0) {
                puVar3 = *(undefined8 **)(lVar29 + 0x100);
                goto joined_r0x007102f2b284;
              }
            }
            break;
          }
        }
      }
LAB_7102f2b300:
    }
    ppplVar4 = param_4[8];
    for (ppplVar2 = param_4[7]; ppplVar2 != ppplVar4; ppplVar2 = ppplVar2 + 2) {
      if (((ulong)*ppplVar2 & 0xffffffffff) != 0) {
        for (plVar20 = *(long **)(lVar29 + 0xd0); plVar20 != *(long **)(lVar29 + 0xd8);
            plVar20 = plVar20 + 2) {
          if ((*(uint *)(plVar20 + 1) < 2) &&
             (lVar25 = *plVar20, ((ulong)*ppplVar2 & 0xffffffffff) == *(ulong *)(lVar25 + 0x68))) {
            if (lVar25 != 0) {
              *(undefined1 *)(lVar25 + 0x110) = 1;
              FUN_71025e9d50((long *)(lVar25 + 0x108),pppplVar18,pppplVar8,ppppbVar16,pppplVar17,
                             param_7,param_8,param_9);
              if ((*(char *)(lVar25 + 0xe0) != '\0') && (*(long *)(lVar25 + 200) != 0)) {
                *(undefined2 *)(*(long *)(lVar25 + 200) + 0x30) = 0;
              }
              if (*(long *)(lVar25 + 0xd8) != 0) {
                *(undefined1 *)(*(long *)(lVar25 + 0xd8) + 0x21) = 0;
              }
              if (*(char *)(lVar25 + 0xe0) != '\0') {
                *(undefined1 *)(*(long *)(lVar25 + 0xb0) + 0x10) = 1;
              }
              pppplVar18 = extraout_x1_03;
              if ((long ***)((ulong)ppplVar2[1] & 0xffffffffff) != (long ***)0x0) {
                puVar3 = *(undefined8 **)(lVar29 + 0x100);
                goto joined_r0x007102f2b374;
              }
            }
            break;
          }
        }
      }
LAB_7102f2b3f0:
    }
    ppplVar4 = param_4[5];
    for (ppplVar2 = param_4[4]; ppplVar2 != ppplVar4; ppplVar2 = ppplVar2 + 2) {
      if (((ulong)*ppplVar2 & 0xffffffffff) != 0) {
        for (plVar20 = *(long **)(lVar29 + 0xd0); plVar20 != *(long **)(lVar29 + 0xd8);
            plVar20 = plVar20 + 2) {
          if ((*(uint *)(plVar20 + 1) < 2) &&
             (lVar25 = *plVar20, ((ulong)*ppplVar2 & 0xffffffffff) == *(ulong *)(lVar25 + 0x68))) {
            if (lVar25 != 0) {
              *(undefined1 *)(lVar25 + 0x110) = 0;
              FUN_71025e9d50((long *)(lVar25 + 0x108),pppplVar18,pppplVar8,ppppbVar16,pppplVar17,
                             param_7,param_8,param_9);
              if ((*(char *)(lVar25 + 0xe0) != '\0') && (*(long *)(lVar25 + 200) != 0)) {
                *(undefined2 *)(*(long *)(lVar25 + 200) + 0x30) = 0x101;
              }
              if (*(long *)(lVar25 + 0xd8) != 0) {
                *(undefined1 *)(*(long *)(lVar25 + 0xd8) + 0x21) = 1;
              }
              pppplVar18 = extraout_x1_05;
              if (*(char *)(lVar25 + 0xe0) != '\0') {
                *(undefined1 *)(*(long *)(lVar25 + 0xb0) + 0x10) = 0;
              }
            }
            break;
          }
        }
      }
    }
    FUN_71025f7350(*(long *)(lVar23 + 0x10),(byte *)"light_fes");
    FUN_7102633910(lVar23,(long *********)"render_param_fes",pppplVar8,ppppbVar16,pppplVar17,param_7
                   ,param_8,param_9);
    if (iVar30 == 2) {
      FUN_7102633a10(lVar23,(long *********)"B_chara_fes",1,ppppbVar16,pppplVar17,param_7,param_8,
                     param_9);
      pcVar13 = "B_loupe_fes";
      FUN_7102653da0(&local_90,lVar23 + 0x80,(byte *)"B_loupe_fes");
      if ((int)local_90 != -1) {
        lVar29 = *(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1d0);
        uVar28 = *(ulong *)(lVar23 + 8);
        plVar20 = (long *)(lVar29 + 0x58);
        plVar9 = plVar20;
        if ((long *)*plVar20 != (long *)0x0) {
          plVar22 = (long *)*plVar20;
          plVar9 = (long *)(lVar29 + 0x58);
          do {
            while (plVar21 = plVar22, uVar28 < (ulong)plVar21[4]) {
              plVar22 = (long *)*plVar21;
              plVar9 = plVar21;
              if ((long *)*plVar21 == (long *)0x0) goto LAB_7102f2bc34;
            }
            if (uVar28 <= (ulong)plVar21[4]) break;
            plVar9 = plVar21 + 1;
            plVar22 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
LAB_7102f2bc34:
        *(int *)(*(long *)(*plVar9 + 0x28) + 0x2d0) = (int)local_90;
        if ((*(ulong *)(lVar29 + 0x20) == uVar28) && (*(int *)(lVar29 + 0x38) < 3)) {
          if ((long *)*plVar20 != (long *)0x0) {
            plVar9 = (long *)(lVar29 + 0x58);
            plVar22 = (long *)*plVar20;
            do {
              while (uVar28 < (ulong)plVar22[4]) {
                plVar21 = (long *)*plVar22;
                plVar20 = plVar22;
                plVar9 = plVar22;
                plVar22 = plVar21;
                if (plVar21 == (long *)0x0) goto LAB_7102f2bf3c;
              }
              plVar20 = plVar9;
              if (uVar28 <= (ulong)plVar22[4]) break;
              plVar9 = plVar22 + 1;
              plVar22 = (long *)*plVar9;
              plVar20 = plVar9;
            } while (plVar22 != (long *)0x0);
          }
          goto LAB_7102f2bf3c;
        }
        goto LAB_7102f2bf5c;
      }
      goto LAB_7102f2bba0;
    }
    if (iVar30 == 1) {
      FUN_7102633a10(lVar23,(long *********)"E_chara_fes",1,ppppbVar16,pppplVar17,param_7,param_8,
                     param_9);
      if (((ulong)param_6 & 1) == 0) {
        pcVar13 = "E_loupe_fes";
        FUN_7102653da0(&local_90,lVar23 + 0x80,(byte *)"E_loupe_fes");
        if ((int)local_90 != -1) {
          lVar29 = *(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1d0);
          uVar28 = *(ulong *)(lVar23 + 8);
          plVar20 = (long *)(lVar29 + 0x58);
          plVar9 = plVar20;
          if ((long *)*plVar20 != (long *)0x0) {
            plVar22 = (long *)*plVar20;
            plVar9 = (long *)(lVar29 + 0x58);
            do {
              while (plVar21 = plVar22, uVar28 < (ulong)plVar21[4]) {
                plVar22 = (long *)*plVar21;
                plVar9 = plVar21;
                if ((long *)*plVar21 == (long *)0x0) goto LAB_7102f2bed4;
              }
              if (uVar28 <= (ulong)plVar21[4]) break;
              plVar9 = plVar21 + 1;
              plVar22 = (long *)*plVar9;
            } while ((long *)*plVar9 != (long *)0x0);
          }
LAB_7102f2bed4:
          *(int *)(*(long *)(*plVar9 + 0x28) + 0x2d0) = (int)local_90;
          if ((*(ulong *)(lVar29 + 0x20) == uVar28) && (*(int *)(lVar29 + 0x38) < 3)) {
            if ((long *)*plVar20 != (long *)0x0) {
              plVar9 = (long *)(lVar29 + 0x58);
              plVar22 = (long *)*plVar20;
              do {
                while (uVar28 < (ulong)plVar22[4]) {
                  plVar21 = (long *)*plVar22;
                  plVar20 = plVar22;
                  plVar9 = plVar22;
                  plVar22 = plVar21;
                  if (plVar21 == (long *)0x0) goto LAB_7102f2bf3c;
                }
                plVar20 = plVar9;
                if (uVar28 <= (ulong)plVar22[4]) break;
                plVar9 = plVar22 + 1;
                plVar22 = (long *)*plVar9;
                plVar20 = plVar9;
              } while (plVar22 != (long *)0x0);
            }
            goto LAB_7102f2bf3c;
          }
          goto LAB_7102f2bf5c;
        }
LAB_7102f2bba0:
        uVar24 = local_90._4_4_;
      }
      else {
        pcVar13 = "EX_loupe_fes";
        FUN_7102653da0(&local_90,lVar23 + 0x80,(byte *)"EX_loupe_fes");
        if ((int)local_90 == -1) goto LAB_7102f2bba0;
        lVar29 = *(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1d0);
        uVar28 = *(ulong *)(lVar23 + 8);
        plVar20 = (long *)(lVar29 + 0x58);
        plVar9 = plVar20;
        if ((long *)*plVar20 != (long *)0x0) {
          plVar22 = (long *)*plVar20;
          plVar9 = (long *)(lVar29 + 0x58);
          do {
            while (plVar21 = plVar22, uVar28 < (ulong)plVar21[4]) {
              plVar22 = (long *)*plVar21;
              plVar9 = plVar21;
              if ((long *)*plVar21 == (long *)0x0) goto LAB_7102f2bdf4;
            }
            if (uVar28 <= (ulong)plVar21[4]) break;
            plVar9 = plVar21 + 1;
            plVar22 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
LAB_7102f2bdf4:
        *(int *)(*(long *)(*plVar9 + 0x28) + 0x2d0) = (int)local_90;
        if ((*(ulong *)(lVar29 + 0x20) == uVar28) && (*(int *)(lVar29 + 0x38) < 3)) {
          if ((long *)*plVar20 != (long *)0x0) {
            plVar9 = (long *)(lVar29 + 0x58);
            plVar22 = (long *)*plVar20;
            do {
              while (uVar28 < (ulong)plVar22[4]) {
                plVar21 = (long *)*plVar22;
                plVar20 = plVar22;
                plVar9 = plVar22;
                plVar22 = plVar21;
                if (plVar21 == (long *)0x0) goto LAB_7102f2bf3c;
              }
              plVar20 = plVar9;
              if (uVar28 <= (ulong)plVar22[4]) break;
              plVar9 = plVar22 + 1;
              plVar22 = (long *)*plVar9;
              plVar20 = plVar9;
            } while (plVar22 != (long *)0x0);
          }
LAB_7102f2bf3c:
          plVar9 = *(long **)(*(long *)(*plVar20 + 0x28) + 0x300);
          if (plVar9 == (long *)0x0) {
LAB_7102f2c6f0:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          (**(code **)(*plVar9 + 0x30))(plVar9,*(long *)(*plVar20 + 0x28) + 0x2d0);
        }
LAB_7102f2bf5c:
        uVar24 = local_90._4_4_;
        uVar5 = *(uint *)(lVar23 + 0x38);
        *(uint *)(lVar23 + 0x38) = local_90._4_4_;
        if (local_90._4_4_ != 0xffffff) {
          FUN_7103540a00(DAT_7105332f20,local_90._4_4_);
        }
        if (uVar5 != 0xffffff) {
          FUN_7103540b10(DAT_7105332f20,uVar5,(long *********)pcVar13,ppppbVar16,pppplVar17,param_7,
                         param_8,param_9);
        }
      }
      if (uVar24 != 0xffffff) {
        FUN_7103540b10(DAT_7105332f20,uVar24,(long *********)pcVar13,ppppbVar16,pppplVar17,param_7,
                       param_8,param_9);
        local_90 = (long ***)CONCAT44(0xffffff,(int)local_90);
      }
    }
    else if (iVar30 == 0) {
      FUN_7102633a10(lVar23,(long *********)"chara_fes",1,ppppbVar16,pppplVar17,param_7,param_8,
                     param_9);
      pcVar13 = "loupe_01";
      FUN_7102653da0(&local_90,lVar23 + 0x80,(byte *)"loupe_01");
      if ((int)local_90 != -1) {
        lVar29 = *(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1d0);
        uVar28 = *(ulong *)(lVar23 + 8);
        plVar20 = (long *)(lVar29 + 0x58);
        plVar9 = plVar20;
        if ((long *)*plVar20 != (long *)0x0) {
          plVar22 = (long *)*plVar20;
          plVar9 = (long *)(lVar29 + 0x58);
          do {
            while (plVar21 = plVar22, uVar28 < (ulong)plVar21[4]) {
              plVar22 = (long *)*plVar21;
              plVar9 = plVar21;
              if ((long *)*plVar21 == (long *)0x0) goto LAB_7102f2bd14;
            }
            if (uVar28 <= (ulong)plVar21[4]) break;
            plVar9 = plVar21 + 1;
            plVar22 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
LAB_7102f2bd14:
        *(int *)(*(long *)(*plVar9 + 0x28) + 0x2d0) = (int)local_90;
        if ((*(ulong *)(lVar29 + 0x20) == uVar28) && (*(int *)(lVar29 + 0x38) < 3)) {
          if ((long *)*plVar20 != (long *)0x0) {
            plVar9 = (long *)(lVar29 + 0x58);
            plVar22 = (long *)*plVar20;
            do {
              while (uVar28 < (ulong)plVar22[4]) {
                plVar21 = (long *)*plVar22;
                plVar20 = plVar22;
                plVar9 = plVar22;
                plVar22 = plVar21;
                if (plVar21 == (long *)0x0) goto LAB_7102f2bf3c;
              }
              plVar20 = plVar9;
              if (uVar28 <= (ulong)plVar22[4]) break;
              plVar9 = plVar22 + 1;
              plVar22 = (long *)*plVar9;
              plVar20 = plVar9;
            } while (plVar22 != (long *)0x0);
          }
          goto LAB_7102f2bf3c;
        }
        goto LAB_7102f2bf5c;
      }
      goto LAB_7102f2bba0;
    }
    ppppppppplVar15 = (long *********)0x1;
    FUN_7102633b90(lVar23,(long *********)"stage_fes",1,ppppbVar16,pppplVar17,param_7,param_8,
                   param_9);
    FUN_7102633800(lVar23,(long *********)"reflection_cubemap_fes",ppppppppplVar15,ppppbVar16,
                   pppplVar17,param_7,param_8,param_9);
    pcVar13 = "color_grading_lut_fes";
  }
  else {
    for (; ppplVar2 != ppplVar4; ppplVar2 = ppplVar2 + 2) {
      if (((ulong)*ppplVar2 & 0xffffffffff) != 0) {
        for (plVar20 = *(long **)(lVar29 + 0xd0); plVar20 != *(long **)(lVar29 + 0xd8);
            plVar20 = plVar20 + 2) {
          if ((*(uint *)(plVar20 + 1) < 2) &&
             (lVar25 = *plVar20, ((ulong)*ppplVar2 & 0xffffffffff) == *(ulong *)(lVar25 + 0x68))) {
            if (lVar25 != 0) {
              *(undefined1 *)(lVar25 + 0x110) = 1;
              FUN_71025e9d50((long *)(lVar25 + 0x108),pppplVar18,pppplVar8,ppppbVar16,pppplVar17,
                             param_7,param_8,param_9);
              if ((*(char *)(lVar25 + 0xe0) != '\0') && (*(long *)(lVar25 + 200) != 0)) {
                *(undefined2 *)(*(long *)(lVar25 + 200) + 0x30) = 0;
              }
              if (*(long *)(lVar25 + 0xd8) != 0) {
                *(undefined1 *)(*(long *)(lVar25 + 0xd8) + 0x21) = 0;
              }
              if (*(char *)(lVar25 + 0xe0) != '\0') {
                *(undefined1 *)(*(long *)(lVar25 + 0xb0) + 0x10) = 1;
              }
              pppplVar18 = extraout_x1_06;
              if ((long ***)((ulong)ppplVar2[1] & 0xffffffffff) != (long ***)0x0) {
                puVar3 = *(undefined8 **)(lVar29 + 0x100);
                goto joined_r0x007102f2b5d4;
              }
            }
            break;
          }
        }
      }
LAB_7102f2b650:
    }
    ppplVar4 = param_4[5];
    for (ppplVar2 = param_4[4]; ppplVar2 != ppplVar4; ppplVar2 = ppplVar2 + 2) {
      if (((ulong)*ppplVar2 & 0xffffffffff) != 0) {
        for (plVar20 = *(long **)(lVar29 + 0xd0); plVar20 != *(long **)(lVar29 + 0xd8);
            plVar20 = plVar20 + 2) {
          if ((*(uint *)(plVar20 + 1) < 2) &&
             (lVar25 = *plVar20, ((ulong)*ppplVar2 & 0xffffffffff) == *(ulong *)(lVar25 + 0x68))) {
            if (lVar25 != 0) {
              *(undefined1 *)(lVar25 + 0x110) = 1;
              FUN_71025e9d50((long *)(lVar25 + 0x108),pppplVar18,pppplVar8,ppppbVar16,pppplVar17,
                             param_7,param_8,param_9);
              if ((*(char *)(lVar25 + 0xe0) != '\0') && (*(long *)(lVar25 + 200) != 0)) {
                *(undefined2 *)(*(long *)(lVar25 + 200) + 0x30) = 0;
              }
              if (*(long *)(lVar25 + 0xd8) != 0) {
                *(undefined1 *)(*(long *)(lVar25 + 0xd8) + 0x21) = 0;
              }
              if (*(char *)(lVar25 + 0xe0) != '\0') {
                *(undefined1 *)(*(long *)(lVar25 + 0xb0) + 0x10) = 1;
              }
              pppplVar18 = extraout_x1_08;
              if ((long ***)((ulong)ppplVar2[1] & 0xffffffffff) != (long ***)0x0) {
                puVar3 = *(undefined8 **)(lVar29 + 0x100);
                goto joined_r0x007102f2b6c4;
              }
            }
            break;
          }
        }
      }
LAB_7102f2b740:
    }
    ppplVar4 = param_4[8];
    for (ppplVar2 = param_4[7]; ppplVar2 != ppplVar4; ppplVar2 = ppplVar2 + 2) {
      if (((ulong)*ppplVar2 & 0xffffffffff) != 0) {
        for (plVar20 = *(long **)(lVar29 + 0xd0); plVar20 != *(long **)(lVar29 + 0xd8);
            plVar20 = plVar20 + 2) {
          if ((*(uint *)(plVar20 + 1) < 2) &&
             (lVar25 = *plVar20, ((ulong)*ppplVar2 & 0xffffffffff) == *(ulong *)(lVar25 + 0x68))) {
            if (lVar25 != 0) {
              *(undefined1 *)(lVar25 + 0x110) = 0;
              FUN_71025e9d50((long *)(lVar25 + 0x108),pppplVar18,pppplVar8,ppppbVar16,pppplVar17,
                             param_7,param_8,param_9);
              if ((*(char *)(lVar25 + 0xe0) != '\0') && (*(long *)(lVar25 + 200) != 0)) {
                *(undefined2 *)(*(long *)(lVar25 + 200) + 0x30) = 0x101;
              }
              if (*(long *)(lVar25 + 0xd8) != 0) {
                *(undefined1 *)(*(long *)(lVar25 + 0xd8) + 0x21) = 1;
              }
              pppplVar18 = extraout_x1_10;
              if (*(char *)(lVar25 + 0xe0) != '\0') {
                *(undefined1 *)(*(long *)(lVar25 + 0xb0) + 0x10) = 0;
              }
            }
            break;
          }
        }
      }
    }
    FUN_71025f7350(*(long *)(lVar23 + 0x10),(byte *)"light_daytime");
    FUN_7102633910(lVar23,(long *********)"render_param_daytime",pppplVar8,ppppbVar16,pppplVar17,
                   param_7,param_8,param_9);
    if (iVar30 == 2) {
      FUN_7102633a10(lVar23,(long *********)"B_chara_daytime",1,ppppbVar16,pppplVar17,param_7,
                     param_8,param_9);
      pcVar13 = "B_loupe_daytime";
      FUN_7102653da0(&local_90,lVar23 + 0x80,(byte *)"B_loupe_daytime");
      if ((int)local_90 != -1) {
        lVar29 = *(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1d0);
        uVar28 = *(ulong *)(lVar23 + 8);
        plVar20 = (long *)(lVar29 + 0x58);
        plVar9 = plVar20;
        if ((long *)*plVar20 != (long *)0x0) {
          plVar22 = (long *)*plVar20;
          plVar9 = (long *)(lVar29 + 0x58);
          do {
            while (plVar21 = plVar22, uVar28 < (ulong)plVar21[4]) {
              plVar22 = (long *)*plVar21;
              plVar9 = plVar21;
              if ((long *)*plVar21 == (long *)0x0) goto LAB_7102f2bca4;
            }
            if (uVar28 <= (ulong)plVar21[4]) break;
            plVar9 = plVar21 + 1;
            plVar22 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
LAB_7102f2bca4:
        *(int *)(*(long *)(*plVar9 + 0x28) + 0x2d0) = (int)local_90;
        if ((*(ulong *)(lVar29 + 0x20) == uVar28) && (*(int *)(lVar29 + 0x38) < 3)) {
          if ((long *)*plVar20 != (long *)0x0) {
            plVar9 = (long *)(lVar29 + 0x58);
            plVar22 = (long *)*plVar20;
            do {
              while (uVar28 < (ulong)plVar22[4]) {
                plVar21 = (long *)*plVar22;
                plVar20 = plVar22;
                plVar9 = plVar22;
                plVar22 = plVar21;
                if (plVar21 == (long *)0x0) goto LAB_7102f2c058;
              }
              plVar20 = plVar9;
              if (uVar28 <= (ulong)plVar22[4]) break;
              plVar9 = plVar22 + 1;
              plVar22 = (long *)*plVar9;
              plVar20 = plVar9;
            } while (plVar22 != (long *)0x0);
          }
          goto LAB_7102f2c058;
        }
        goto LAB_7102f2c078;
      }
      goto LAB_7102f2bc28;
    }
    if (iVar30 == 1) {
      FUN_7102633a10(lVar23,(long *********)"E_chara_daytime",1,ppppbVar16,pppplVar17,param_7,
                     param_8,param_9);
      if (((ulong)param_6 & 1) == 0) {
        pcVar13 = "E_loupe_daytime";
        FUN_7102653da0(&local_90,lVar23 + 0x80,(byte *)"E_loupe_daytime");
        if ((int)local_90 != -1) {
          lVar29 = *(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1d0);
          uVar28 = *(ulong *)(lVar23 + 8);
          plVar20 = (long *)(lVar29 + 0x58);
          plVar9 = plVar20;
          if ((long *)*plVar20 != (long *)0x0) {
            plVar22 = (long *)*plVar20;
            plVar9 = (long *)(lVar29 + 0x58);
            do {
              while (plVar21 = plVar22, uVar28 < (ulong)plVar21[4]) {
                plVar22 = (long *)*plVar21;
                plVar9 = plVar21;
                if ((long *)*plVar21 == (long *)0x0) goto LAB_7102f2bff0;
              }
              if (uVar28 <= (ulong)plVar21[4]) break;
              plVar9 = plVar21 + 1;
              plVar22 = (long *)*plVar9;
            } while ((long *)*plVar9 != (long *)0x0);
          }
LAB_7102f2bff0:
          *(int *)(*(long *)(*plVar9 + 0x28) + 0x2d0) = (int)local_90;
          if ((*(ulong *)(lVar29 + 0x20) == uVar28) && (*(int *)(lVar29 + 0x38) < 3)) {
            if ((long *)*plVar20 != (long *)0x0) {
              plVar9 = (long *)(lVar29 + 0x58);
              plVar22 = (long *)*plVar20;
              do {
                while (uVar28 < (ulong)plVar22[4]) {
                  plVar21 = (long *)*plVar22;
                  plVar20 = plVar22;
                  plVar9 = plVar22;
                  plVar22 = plVar21;
                  if (plVar21 == (long *)0x0) goto LAB_7102f2c058;
                }
                plVar20 = plVar9;
                if (uVar28 <= (ulong)plVar22[4]) break;
                plVar9 = plVar22 + 1;
                plVar22 = (long *)*plVar9;
                plVar20 = plVar9;
              } while (plVar22 != (long *)0x0);
            }
            goto LAB_7102f2c058;
          }
          goto LAB_7102f2c078;
        }
LAB_7102f2bc28:
        uVar24 = local_90._4_4_;
      }
      else {
        pcVar13 = "EX_loupe_daytime";
        FUN_7102653da0(&local_90,lVar23 + 0x80,(byte *)"EX_loupe_daytime");
        if ((int)local_90 == -1) goto LAB_7102f2bc28;
        lVar29 = *(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1d0);
        uVar28 = *(ulong *)(lVar23 + 8);
        plVar20 = (long *)(lVar29 + 0x58);
        plVar9 = plVar20;
        if ((long *)*plVar20 != (long *)0x0) {
          plVar22 = (long *)*plVar20;
          plVar9 = (long *)(lVar29 + 0x58);
          do {
            while (plVar21 = plVar22, uVar28 < (ulong)plVar21[4]) {
              plVar22 = (long *)*plVar21;
              plVar9 = plVar21;
              if ((long *)*plVar21 == (long *)0x0) goto LAB_7102f2be64;
            }
            if (uVar28 <= (ulong)plVar21[4]) break;
            plVar9 = plVar21 + 1;
            plVar22 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
LAB_7102f2be64:
        *(int *)(*(long *)(*plVar9 + 0x28) + 0x2d0) = (int)local_90;
        if ((*(ulong *)(lVar29 + 0x20) == uVar28) && (*(int *)(lVar29 + 0x38) < 3)) {
          if ((long *)*plVar20 != (long *)0x0) {
            plVar9 = (long *)(lVar29 + 0x58);
            plVar22 = (long *)*plVar20;
            do {
              while (uVar28 < (ulong)plVar22[4]) {
                plVar21 = (long *)*plVar22;
                plVar20 = plVar22;
                plVar9 = plVar22;
                plVar22 = plVar21;
                if (plVar21 == (long *)0x0) goto LAB_7102f2c058;
              }
              plVar20 = plVar9;
              if (uVar28 <= (ulong)plVar22[4]) break;
              plVar9 = plVar22 + 1;
              plVar22 = (long *)*plVar9;
              plVar20 = plVar9;
            } while (plVar22 != (long *)0x0);
          }
LAB_7102f2c058:
          plVar9 = *(long **)(*(long *)(*plVar20 + 0x28) + 0x300);
          if (plVar9 == (long *)0x0) goto LAB_7102f2c6f0;
          (**(code **)(*plVar9 + 0x30))(plVar9,*(long *)(*plVar20 + 0x28) + 0x2d0);
        }
LAB_7102f2c078:
        uVar24 = local_90._4_4_;
        uVar5 = *(uint *)(lVar23 + 0x38);
        *(uint *)(lVar23 + 0x38) = local_90._4_4_;
        if (local_90._4_4_ != 0xffffff) {
          FUN_7103540a00(DAT_7105332f20,local_90._4_4_);
        }
        if (uVar5 != 0xffffff) {
          FUN_7103540b10(DAT_7105332f20,uVar5,(long *********)pcVar13,ppppbVar16,pppplVar17,param_7,
                         param_8,param_9);
        }
      }
      if (uVar24 != 0xffffff) {
        FUN_7103540b10(DAT_7105332f20,uVar24,(long *********)pcVar13,ppppbVar16,pppplVar17,param_7,
                       param_8,param_9);
        local_90 = (long ***)CONCAT44(0xffffff,(int)local_90);
      }
    }
    else if (iVar30 == 0) {
      FUN_7102633a10(lVar23,(long *********)"chara_daytime",1,ppppbVar16,pppplVar17,param_7,param_8,
                     param_9);
      pcVar13 = "loupe_00";
      FUN_7102653da0(&local_90,lVar23 + 0x80,(byte *)"loupe_00");
      if ((int)local_90 != -1) {
        lVar29 = *(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1d0);
        uVar28 = *(ulong *)(lVar23 + 8);
        plVar20 = (long *)(lVar29 + 0x58);
        plVar9 = plVar20;
        if ((long *)*plVar20 != (long *)0x0) {
          plVar22 = (long *)*plVar20;
          plVar9 = (long *)(lVar29 + 0x58);
          do {
            while (plVar21 = plVar22, uVar28 < (ulong)plVar21[4]) {
              plVar22 = (long *)*plVar21;
              plVar9 = plVar21;
              if ((long *)*plVar21 == (long *)0x0) goto LAB_7102f2bd84;
            }
            if (uVar28 <= (ulong)plVar21[4]) break;
            plVar9 = plVar21 + 1;
            plVar22 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
LAB_7102f2bd84:
        *(int *)(*(long *)(*plVar9 + 0x28) + 0x2d0) = (int)local_90;
        if ((*(ulong *)(lVar29 + 0x20) == uVar28) && (*(int *)(lVar29 + 0x38) < 3)) {
          if ((long *)*plVar20 != (long *)0x0) {
            plVar9 = (long *)(lVar29 + 0x58);
            plVar22 = (long *)*plVar20;
            do {
              while (uVar28 < (ulong)plVar22[4]) {
                plVar21 = (long *)*plVar22;
                plVar20 = plVar22;
                plVar9 = plVar22;
                plVar22 = plVar21;
                if (plVar21 == (long *)0x0) goto LAB_7102f2c058;
              }
              plVar20 = plVar9;
              if (uVar28 <= (ulong)plVar22[4]) break;
              plVar9 = plVar22 + 1;
              plVar22 = (long *)*plVar9;
              plVar20 = plVar9;
            } while (plVar22 != (long *)0x0);
          }
          goto LAB_7102f2c058;
        }
        goto LAB_7102f2c078;
      }
      goto LAB_7102f2bc28;
    }
    ppppppppplVar15 = (long *********)0x1;
    FUN_7102633b90(lVar23,(long *********)"stage_daytime",1,ppppbVar16,pppplVar17,param_7,param_8,
                   param_9);
    FUN_7102633800(lVar23,(long *********)"reflection_cubemap_daytime",ppppppppplVar15,ppppbVar16,
                   pppplVar17,param_7,param_8,param_9);
    pcVar13 = "color_grading_lut_daytime";
  }
  FUN_7102633cf0(lVar23,(long *********)pcVar13,ppppppppplVar15,ppppbVar16,pppplVar17,param_7,
                 param_8,param_9);
  puVar10 = (ulong *)FUN_710392e290(0x10,0x48,(long ****)ppppppppplVar15,ppppbVar16,pppplVar17,
                                    param_7,param_8,param_9);
  if (puVar10 == (ulong *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_90 = (long ***)&DAT_00000048;
      pppplVar18 = (long ****)&local_90;
      uVar28 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar28 & 1) != 0) &&
         (puVar10 = (ulong *)FUN_710392e290(0x10,0x48,pppplVar18,ppppbVar16,pppplVar17,param_7,
                                            param_8,param_9), puVar10 != (ulong *)0x0))
      goto LAB_7102f2c168;
    }
    puVar10 = (ulong *)0x0;
  }
LAB_7102f2c168:
  ppppbVar16 = (byte ****)(ulong)(uint)*param_2;
  pppplVar18 = param_4;
  FUN_7102f24c00(param_1,puVar10,param_3,param_4,ppppbVar16,pppplVar17,param_7,param_8,param_9);
  puVar26 = (ulong *)param_2[3];
  param_2[3] = (ulong)puVar10;
  if (puVar26 != (ulong *)0x0) {
    FUN_7102f24fb0(puVar26,extraout_x1_11,pppplVar18,ppppbVar16,pppplVar17,param_7,param_8,param_9);
    FUN_710392eb40((ulong)puVar26);
  }
  puVar27 = *(uint **)(param_3 + 0x340);
  ppppbVar11 = (byte ****)
               FUN_710392e290(0x10,0x30,pppplVar18,ppppbVar16,pppplVar17,param_7,param_8,param_9);
  if (ppppbVar11 == (byte ****)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_90 = (long ***)&DAT_00000030;
      pppplVar18 = (long ****)&local_90;
      uVar28 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar28 & 1) != 0) &&
         (ppppbVar11 = (byte ****)
                       FUN_710392e290(0x10,0x30,pppplVar18,ppppbVar16,pppplVar17,param_7,param_8,
                                      param_9), ppppbVar11 != (byte ****)0x0)) goto LAB_7102f2c1fc;
    }
    ppppbVar11 = (byte ****)0x0;
  }
LAB_7102f2c1fc:
  uVar28 = *param_2;
  *(undefined8 *)((long)ppppbVar11 + 0xc) = 0x3f80000000000000;
  *(undefined1 **)((long)ppppbVar11 + 0x1c) = &DAT_3f8000003f800000;
  *(undefined1 **)((long)ppppbVar11 + 0x14) = &DAT_3f8000003f800000;
  *(undefined1 **)((long)ppppbVar11 + 0x24) = &DAT_3f8000003f800000;
  *(int *)(ppppbVar11 + 1) = (int)uVar28;
  *ppppbVar11 = (byte ***)param_4;
  lVar23 = 0x90;
  if ((int)uVar28 != 0) {
    lVar23 = 0xa8;
  }
  *(undefined4 *)((long)ppppbVar11 + 0x2c) = 0x3f800000;
  uVar6 = (int)((ulong)(((long *)((long)param_4 + lVar23))[1] - *(long *)((long)param_4 + lVar23))
               >> 3) * -0x55555555;
  uVar5 = *puVar27 ^ *puVar27 << 0xb;
  *puVar27 = puVar27[1];
  uVar24 = puVar27[3];
  uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar24 ^ uVar24 >> 0x13;
  puVar27[1] = puVar27[2];
  puVar27[2] = uVar24;
  uVar24 = 0;
  if (uVar6 != 0) {
    uVar24 = uVar5 / uVar6;
  }
  puVar27[3] = uVar5;
  uVar5 = uVar5 - uVar24 * uVar6;
  *(uint *)((long)ppppbVar11 + 0xc) = uVar5;
  pppbVar1 = *ppppbVar11 + 0x12;
  if (*(int *)(ppppbVar11 + 1) != 0) {
    pppbVar1 = *ppppbVar11 + 0x15;
  }
  uVar19 = *(undefined4 *)(*pppbVar1 + (ulong)uVar5 * 3 + 1);
  ppppbVar11[2] = (byte ***)(*pppbVar1)[(ulong)uVar5 * 3];
  *(undefined4 *)(ppppbVar11 + 3) = uVar19;
  *(undefined4 *)((long)ppppbVar11 + 0x1c) = 0x3f800000;
  uVar19 = *(undefined4 *)((long)*pppbVar1 + (ulong)uVar5 * 0x18 + 0x14);
  ppppbVar11[4] = *(byte ****)((long)*pppbVar1 + (ulong)uVar5 * 0x18 + 0xc);
  *(undefined4 *)(ppppbVar11 + 5) = uVar19;
  *(undefined4 *)((long)ppppbVar11 + 0x2c) = 0x3f800000;
  uVar28 = param_2[4];
  param_2[4] = (ulong)ppppbVar11;
  if (uVar28 != 0) {
    FUN_710392eb40(uVar28);
    ppppbVar11 = (byte ****)param_2[4];
  }
  plVar20 = (long *)FUN_710392e290(0x10,0x80,pppplVar18,ppppbVar16,pppplVar17,param_7,param_8,
                                   param_9);
  if (plVar20 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_90 = (long ***)&DAT_00000080;
      pppplVar18 = (long ****)&local_90;
      uVar28 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar28 & 1) != 0) &&
         (plVar20 = (long *)FUN_710392e290(0x10,0x80,pppplVar18,ppppbVar16,pppplVar17,param_7,
                                           param_8,param_9), plVar20 != (long *)0x0))
      goto LAB_7102f2c340;
    }
    plVar20 = (long *)0x0;
  }
LAB_7102f2c340:
  pppplVar18 = (long ****)(ulong)(uint)*param_2;
  uVar28 = (ulong)*(byte *)((long)param_2 + 4);
  FUN_7102f2e1a0(plVar20,param_3,param_4,ppppbVar11,pppplVar18,uVar28,param_8,param_9);
  uVar7 = param_2[5];
  param_2[5] = (ulong)plVar20;
  uVar14 = extraout_x1_12;
  if (uVar7 != 0) {
    FUN_7102f2edb0(uVar7);
    FUN_710392eb40(uVar7);
    uVar14 = extraout_x1_13;
  }
  if ((int)param_2[1] == 2) {
    puVar27 = *(uint **)(param_2[2] + 0x340);
    uVar5 = *puVar27;
    uVar6 = *(uint *)(param_2[5] + 0x48);
    *puVar27 = puVar27[1];
    uVar24 = puVar27[3];
    uVar5 = uVar5 ^ uVar5 << 0xb;
    uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar24 ^ uVar24 >> 0x13;
    puVar27[1] = puVar27[2];
    puVar27[2] = uVar24;
    puVar27[3] = uVar5;
    uVar24 = 0;
    if (uVar6 != 0) {
      uVar24 = uVar5 / uVar6;
    }
    FUN_7102f31160(param_2[5],(ulong)(uVar5 - uVar24 * uVar6),param_4,ppppbVar11,pppplVar18,uVar28,
                   param_8,param_9);
    uVar14 = extraout_x1_14;
  }
  if (iVar30 - 1U < 2) {
    plVar22 = *(long **)(*(long *)(param_2[2] + 0x310) + 0xd8);
    plVar9 = *(long **)(*(long *)(param_2[2] + 0x310) + 0xd0);
    for (plVar20 = plVar9; plVar20 != plVar22; plVar20 = plVar20 + 2) {
      if ((*(uint *)(plVar20 + 1) < 2) &&
         (lVar23 = *plVar20, *(long *)(lVar23 + 0x68) == 0x12bf759851)) goto LAB_7102f2c424;
    }
    lVar23 = 0;
LAB_7102f2c424:
    if (iVar30 != 2) {
      plVar20 = plVar9;
      if (lVar23 != 0) {
        *(undefined1 *)(lVar23 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar23 + 0x108),uVar14,param_4,ppppbVar11,pppplVar18,uVar28,param_8,
                       param_9);
        plVar9 = *(long **)(*(long *)(param_2[2] + 0x310) + 0xd0);
        plVar22 = *(long **)(*(long *)(param_2[2] + 0x310) + 0xd8);
        plVar20 = plVar9;
        uVar14 = extraout_x1_15;
      }
      for (; plVar21 = plVar20, plVar9 != plVar22; plVar9 = plVar9 + 2) {
        if ((*(uint *)(plVar9 + 1) < 2) &&
           (lVar23 = *plVar9, *(long *)(lVar23 + 0x68) == 0x266f5311ff)) {
          if (lVar23 != 0) {
            *(undefined1 *)(lVar23 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar23 + 0x108),uVar14,param_4,ppppbVar11,pppplVar18,uVar28,
                           param_8,param_9);
            plVar20 = *(long **)(*(long *)(param_2[2] + 0x310) + 0xd0);
            plVar22 = *(long **)(*(long *)(param_2[2] + 0x310) + 0xd8);
            plVar21 = plVar20;
            uVar14 = extraout_x1_17;
          }
          break;
        }
      }
      do {
        if (plVar20 == plVar22) goto joined_r0x007102f2c5fc;
        if ((*(uint *)(plVar20 + 1) < 2) &&
           (lVar23 = *plVar20, *(long *)(lVar23 + 0x68) == 0x16a59ef17e)) {
          if (lVar23 != 0) {
            *(undefined1 *)(lVar23 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar23 + 0x108),uVar14,param_4,ppppbVar11,pppplVar18,uVar28,
                           param_8,param_9);
            plVar21 = *(long **)(*(long *)(param_2[2] + 0x310) + 0xd0);
            plVar22 = *(long **)(*(long *)(param_2[2] + 0x310) + 0xd8);
            uVar14 = extraout_x1_19;
          }
          goto joined_r0x007102f2c5fc;
        }
        plVar20 = plVar20 + 2;
      } while( true );
    }
    if (lVar23 != 0) {
      if ((int)*param_2 == 0) {
        *(undefined1 *)(lVar23 + 0x110) = 1;
      }
      else {
        *(undefined1 *)(lVar23 + 0x110) = 0;
      }
      FUN_71025e9d50((long *)(lVar23 + 0x108),uVar14,param_4,ppppbVar11,pppplVar18,uVar28,param_8,
                     param_9);
      uVar14 = extraout_x1_16;
    }
    for (plVar20 = *(long **)(*(long *)(param_2[2] + 0x310) + 0xd0);
        plVar20 != *(long **)(*(long *)(param_2[2] + 0x310) + 0xd8); plVar20 = plVar20 + 2) {
      if ((*(uint *)(plVar20 + 1) < 2) &&
         (lVar23 = *plVar20, *(long *)(lVar23 + 0x68) == 0x266f5311ff)) {
        if (lVar23 != 0) {
          if ((int)*param_2 == 0) {
            *(undefined1 *)(lVar23 + 0x110) = 1;
            FUN_71025e9d50((long *)(lVar23 + 0x108),uVar14,param_4,ppppbVar11,pppplVar18,uVar28,
                           param_8,param_9);
            uVar14 = extraout_x1_21;
          }
          else {
            *(undefined1 *)(lVar23 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar23 + 0x108),uVar14,param_4,ppppbVar11,pppplVar18,uVar28,
                           param_8,param_9);
            uVar14 = extraout_x1_18;
          }
        }
        break;
      }
    }
    for (plVar20 = *(long **)(*(long *)(param_2[2] + 0x310) + 0xd0);
        plVar20 != *(long **)(*(long *)(param_2[2] + 0x310) + 0xd8); plVar20 = plVar20 + 2) {
      if ((*(uint *)(plVar20 + 1) < 2) &&
         (lVar23 = *plVar20, *(long *)(lVar23 + 0x68) == 0x16a59ef17e)) {
        if (lVar23 != 0) {
          if ((int)*param_2 == 1) {
            *(undefined1 *)(lVar23 + 0x110) = 1;
          }
          else {
            *(undefined1 *)(lVar23 + 0x110) = 0;
          }
          FUN_71025e9d50((long *)(lVar23 + 0x108),uVar14,param_4,ppppbVar11,pppplVar18,uVar28,
                         param_8,param_9);
          uVar14 = extraout_x1_20;
        }
        break;
      }
    }
    for (plVar20 = *(long **)(*(long *)(param_2[2] + 0x310) + 0xd0);
        plVar20 != *(long **)(*(long *)(param_2[2] + 0x310) + 0xd8); plVar20 = plVar20 + 2) {
      if ((*(uint *)(plVar20 + 1) < 2) &&
         (lVar23 = *plVar20, *(long *)(lVar23 + 0x68) == 0x22d25f1862)) {
        if (lVar23 == 0) {
          return;
        }
        plVar20 = (long *)(lVar23 + 0x108);
        if ((int)*param_2 != 1) goto LAB_7102f2c6b4;
        *(undefined1 *)(lVar23 + 0x110) = 1;
        goto LAB_7102f2c6b8;
      }
    }
  }
  return;
joined_r0x007102f2b5d4:
  if (puVar3 == *(undefined8 **)(lVar29 + 0x108)) goto LAB_7102f2b650;
  if ((*(int *)(puVar3 + 1) == 0) &&
     (pppplVar18 = (long ****)*puVar3,
     pppplVar18[1] == (long ***)((ulong)ppplVar2[1] & 0xffffffffff))) {
    if (pppplVar18 != (long ****)0x0) {
      FUN_71025eaba0(lVar25 + 0x60,pppplVar18,pppplVar8,ppppbVar16,pppplVar17,param_7,param_8,
                     param_9);
      pppplVar18 = extraout_x1_07;
    }
    goto LAB_7102f2b650;
  }
  puVar3 = puVar3 + 2;
  goto joined_r0x007102f2b5d4;
joined_r0x007102f2b6c4:
  if (puVar3 == *(undefined8 **)(lVar29 + 0x108)) goto LAB_7102f2b740;
  if ((*(int *)(puVar3 + 1) == 0) &&
     (pppplVar18 = (long ****)*puVar3,
     pppplVar18[1] == (long ***)((ulong)ppplVar2[1] & 0xffffffffff))) {
    if (pppplVar18 != (long ****)0x0) {
      FUN_71025eaba0(lVar25 + 0x60,pppplVar18,pppplVar8,ppppbVar16,pppplVar17,param_7,param_8,
                     param_9);
      pppplVar18 = extraout_x1_09;
    }
    goto LAB_7102f2b740;
  }
  puVar3 = puVar3 + 2;
  goto joined_r0x007102f2b6c4;
joined_r0x007102f2b284:
  if (puVar3 == *(undefined8 **)(lVar29 + 0x108)) goto LAB_7102f2b300;
  if ((*(int *)(puVar3 + 1) == 0) &&
     (pppplVar18 = (long ****)*puVar3,
     pppplVar18[1] == (long ***)((ulong)ppplVar2[1] & 0xffffffffff))) {
    if (pppplVar18 != (long ****)0x0) {
      FUN_71025eaba0(lVar25 + 0x60,pppplVar18,pppplVar8,ppppbVar16,pppplVar17,param_7,param_8,
                     param_9);
      pppplVar18 = extraout_x1_02;
    }
    goto LAB_7102f2b300;
  }
  puVar3 = puVar3 + 2;
  goto joined_r0x007102f2b284;
joined_r0x007102f2b374:
  if (puVar3 == *(undefined8 **)(lVar29 + 0x108)) goto LAB_7102f2b3f0;
  if ((*(int *)(puVar3 + 1) == 0) &&
     (pppplVar18 = (long ****)*puVar3,
     pppplVar18[1] == (long ***)((ulong)ppplVar2[1] & 0xffffffffff))) {
    if (pppplVar18 != (long ****)0x0) {
      FUN_71025eaba0(lVar25 + 0x60,pppplVar18,pppplVar8,ppppbVar16,pppplVar17,param_7,param_8,
                     param_9);
      pppplVar18 = extraout_x1_04;
    }
    goto LAB_7102f2b3f0;
  }
  puVar3 = puVar3 + 2;
  goto joined_r0x007102f2b374;
joined_r0x007102f2c5fc:
  while( true ) {
    if (plVar21 == plVar22) {
      return;
    }
    if ((*(uint *)(plVar21 + 1) < 2) &&
       (lVar23 = *plVar21, *(long *)(lVar23 + 0x68) == 0x22d25f1862)) break;
    plVar21 = plVar21 + 2;
  }
  if (lVar23 == 0) {
    return;
  }
  plVar20 = (long *)(lVar23 + 0x108);
LAB_7102f2c6b4:
  *(undefined1 *)(lVar23 + 0x110) = 0;
LAB_7102f2c6b8:
  FUN_71025e9d50(plVar20,uVar14,param_4,ppppbVar11,pppplVar18,uVar28,param_8,param_9);
  return;
}

