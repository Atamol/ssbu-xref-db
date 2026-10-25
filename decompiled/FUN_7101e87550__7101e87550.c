// addr:      7101e87550
// offset:    0x1e87550
// name:      FUN_7101e87550
// mangled:   
// signature: undefined __cdecl FUN_7101e87550(long param_1, undefined8 param_2, long * * * * * * * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101e87550(long param_1,undefined8 param_2,long ***************param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong uVar7;
  uint *puVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  long *plVar9;
  int *piVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined **local_60;
  long *local_58;
  
  lVar15 = *(long *)(param_1 + 0x80);
  if (*(char *)(lVar15 + 0x110) == '\0') {
    return;
  }
  if ((*(char *)(lVar15 + 0x113) != '\0') && (*(int *)(lVar15 + 0x98) == 3)) {
    plVar6 = *(long **)(*(long *)(lVar15 + 0x28) + 8);
    if (plVar6 == (long *)0x0) {
      return;
    }
    uVar7 = (**(code **)(*plVar6 + 0x130))();
    if ((uVar7 & 1) == 0) {
      return;
    }
    plVar6 = *(long **)(lVar15 + 0x28);
    plVar16 = (long *)plVar6[1];
    if (plVar16 == (long *)0x0) {
      return;
    }
    if ((char)plVar6[2] != '\0') {
      plVar18 = *(long **)(*plVar6 + 0x80);
      plVar6 = (long *)(*plVar6 + 0x88);
      if (plVar18 != plVar6) {
        do {
          while( true ) {
            uVar7 = (**(code **)(*(long *)plVar18[0xd] + 0x148))();
            if (((uVar7 & 1) != 0) &&
               (uVar7 = (**(code **)(*plVar16 + 0x120))(plVar16,plVar18[0xd]), (uVar7 & 1) != 0)) {
              (**(code **)(*(long *)plVar18[0xd] + 0x178))();
              (**(code **)(*(long *)plVar18[0xd] + 0x140))((long *)plVar18[0xd],0);
            }
            plVar9 = (long *)plVar18[1];
            if ((long *)plVar18[1] == (long *)0x0) break;
            do {
              plVar18 = plVar9;
              plVar9 = (long *)*plVar18;
            } while ((long *)*plVar18 != (long *)0x0);
LAB_7101e87668:
            if (plVar18 == plVar6) goto LAB_7101e87680;
          }
          plVar9 = plVar18 + 2;
          plVar12 = (long *)*plVar9;
          if ((long *)*plVar12 != plVar18) {
            do {
              lVar13 = *plVar9;
              plVar9 = (long *)(lVar13 + 0x10);
              plVar18 = (long *)*plVar9;
            } while (*plVar18 != lVar13);
            goto LAB_7101e87668;
          }
          plVar18 = plVar12;
        } while (plVar12 != plVar6);
LAB_7101e87680:
        plVar16 = *(long **)(*(long *)(lVar15 + 0x28) + 8);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x007101e876b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar16 + 0x178))(plVar16);
    return;
  }
  if (*(char *)(lVar15 + 0x111) == '\0') goto LAB_7101e883a4;
  plVar6 = *(long **)(*(long *)(lVar15 + 0x28) + 8);
  if (plVar6 == (long *)0x0) {
    fVar19 = 0.0;
  }
  else {
    fVar19 = (float)(**(code **)(*plVar6 + 0x1b0))();
    param_2 = extraout_x1;
  }
  fVar19 = fVar19 + *(float *)(lVar15 + 0x10c);
  iVar1 = *(int *)(lVar15 + 0x98);
  *(float *)(lVar15 + 0x10c) = fVar19;
  if (iVar1 == 3) {
LAB_7101e8825c:
    if (*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x69) != '\0') {
      FUN_71032e5b10(*(long *)(DAT_710532f7c8 + 8),param_2,(long ****)param_3,param_4,param_5,
                     param_6,param_7,param_8);
    }
    goto LAB_7101e88274;
  }
  if (iVar1 == 2) {
    plVar6 = *(long **)(*(long *)(lVar15 + 0x28) + 8);
    if (plVar6 == (long *)0x0) {
      fVar20 = 0.0;
    }
    else {
      fVar20 = (float)(**(code **)(*plVar6 + 0x1a8))();
    }
    if ((fVar19 < fVar20 + -1.0) ||
       (lVar13 = *(long *)(DAT_710532f7c8 + 8), *(char *)(lVar13 + 0x69) != '\0'))
    goto LAB_7101e88274;
    param_3 = (long ***************)0xfffffffe;
    if (*(int *)(lVar15 + 0x9c) == 2) {
      param_4 = (byte ****)0x1;
    }
    else {
LAB_7101e87d18:
      param_4 = (byte ****)0x0;
    }
    param_5 = (long ****)0x0;
    param_6 = 0;
    FUN_71032e4d70(lVar13,1,param_3,param_4,0,0,param_7,param_8);
    cVar2 = *(char *)(lVar15 + 0x111);
    goto joined_r0x007101e880f0;
  }
  if (iVar1 != 1) goto LAB_7101e88274;
  iVar1 = *(int *)(lVar15 + 0xb8);
  if (iVar1 == 3) {
    lVar13 = *(long *)(*(long *)(lVar15 + 0xa8) + 8);
    if (*(long **)(lVar13 + 0xe8) != (long *)0x0) {
      uVar7 = (**(code **)(**(long **)(lVar13 + 0xe8) + 0x38))();
      if ((uVar7 & 1) == 0) {
        (**(code **)(**(long **)(lVar13 + 0xe8) + 0x30))();
      }
      uVar7 = (**(code **)(**(long **)(lVar13 + 0xe8) + 0x40))();
      if (((uVar7 & 1) == 0) || (*(int *)(lVar13 + 0xd8) != 5)) goto LAB_7101e88274;
    }
    if ((*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x6a) != '\0') &&
       (*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x6b) == '\0')) {
      plVar6 = *(long **)(lVar15 + 0x28);
      plVar16 = (long *)plVar6[1];
      if (plVar16 != (long *)0x0) {
        if ((char)plVar6[2] != '\0') {
          plVar18 = *(long **)(*plVar6 + 0x80);
          plVar6 = (long *)(*plVar6 + 0x88);
          if (plVar18 != plVar6) {
            do {
              uVar7 = (**(code **)(*(long *)plVar18[0xd] + 0x148))();
              if (((uVar7 & 1) != 0) &&
                 (uVar7 = (**(code **)(*plVar16 + 0x120))(plVar16,plVar18[0xd]), (uVar7 & 1) != 0))
              {
                (**(code **)(*(long *)plVar18[0xd] + 0x178))();
                (**(code **)(*(long *)plVar18[0xd] + 0x140))((long *)plVar18[0xd],0);
              }
              plVar9 = (long *)plVar18[1];
              if ((long *)plVar18[1] == (long *)0x0) {
                plVar9 = plVar18 + 2;
                plVar12 = (long *)*plVar9;
                if ((long *)*plVar12 != plVar18) {
                  do {
                    lVar13 = *plVar9;
                    plVar9 = (long *)(lVar13 + 0x10);
                    plVar12 = (long *)*plVar9;
                  } while (*plVar12 != lVar13);
                }
              }
              else {
                do {
                  plVar12 = plVar9;
                  plVar9 = (long *)*plVar12;
                } while ((long *)*plVar12 != (long *)0x0);
              }
              plVar18 = plVar12;
            } while (plVar12 != plVar6);
            plVar16 = *(long **)(*(long *)(lVar15 + 0x28) + 8);
          }
        }
        (**(code **)(*plVar16 + 0x168))(0x3f800000,plVar16);
        cVar2 = *(char *)(lVar15 + 0x111);
        goto joined_r0x007101e880f0;
      }
    }
LAB_7101e88274:
    cVar2 = *(char *)(lVar15 + 0x111);
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 1) {
        if (*(int *)(lVar15 + 0xbc) == 2) {
          for (plVar6 = *(long **)(*(long *)(*(long *)(DAT_71053263a8 + 8) + 0xd0) + 0x60);
              plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
            if (*(char *)plVar6[8] != '\0') {
              if (*(long *)plVar6[0xe] == 0) goto LAB_7101e87b14;
              FUN_71037a3510(*(uint **)(*(long *)plVar6[0xe] + 8),param_2,(long *********)param_3,
                             param_4,param_5,param_6,param_7,param_8);
              if ((((*(long *)plVar6[0xe] == 0) ||
                   (piVar10 = *(int **)(*(long *)plVar6[0xe] + 8), *(long *)(piVar10 + 6) != 0)) ||
                  (*piVar10 != 0xffffff)) ||
                 ((param_2 = extraout_x1_02, *(long *)(piVar10 + 0x18) != 0 &&
                  (*(int *)(*(long *)(piVar10 + 0x18) + 0x18) != 3)))) goto LAB_7101e87b14;
            }
          }
          uVar5 = 3;
LAB_7101e87b10:
          *(undefined4 *)(lVar15 + 0xbc) = uVar5;
        }
        else if (*(int *)(lVar15 + 0xbc) == 1) {
          uVar4 = **(uint **)(*(long *)(DAT_71053263a8 + 8) + 0xd0);
          if (((uVar4 != 0xffffff) && (uVar4 < *(uint *)(DAT_7105332f20 + 0x18))) &&
             (*(char *)(*(long *)(DAT_7105332f20 + 8) + (ulong)uVar4 * 8 + 4) != '\0')) {
            uVar4 = *(uint *)(*(long *)(DAT_7105332f20 + 8) + (ulong)uVar4 * 8);
            if ((uVar4 != 0xffffff) && (uVar4 < *(uint *)(DAT_7105332f20 + 0x1c))) {
              plVar6 = (long *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar4 * 0x18);
              if ((*(char *)((long)plVar6 + 0xc) != '\0') &&
                 (((plVar6 != (long *)0x0 &&
                   (*(char *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar4 * 0x18 + 0xd) ==
                    '\x03')) && (*plVar6 != 0)))) {
                lVar17 = *(long *)(DAT_71053263a8 + 8);
                FUN_7101ea0d20(*(uint **)(lVar17 + 0xd0),param_2,param_3,param_4,param_5,param_6,
                               param_7,param_8);
                lVar13 = *(long *)(lVar17 + 0xd0);
                uVar4 = FUN_7101ea2d60(lVar13);
                *(uint *)(lVar17 + 0xd8) = uVar4;
                FUN_7101ea0a90(lVar13,extraout_x1_00,param_3,param_4,param_5,param_6,param_7,param_8
                              );
                uVar5 = 2;
                goto LAB_7101e87b10;
              }
            }
          }
        }
LAB_7101e87b14:
        iVar1 = *(int *)(lVar15 + 0xbc);
        plVar6 = *(long **)(*(long *)(lVar15 + 0x28) + 8);
        if ((plVar6 != (long *)0x0) && (uVar7 = (**(code **)(*plVar6 + 0x130))(), (uVar7 & 1) != 0))
        {
          plVar6 = *(long **)(*(long *)(lVar15 + 0x28) + 8);
          fVar19 = 0.0;
          if (plVar6 == (long *)0x0) {
            fVar20 = 0.0;
          }
          else {
            fVar20 = (float)(**(code **)(*plVar6 + 0x198))();
            plVar6 = *(long **)(*(long *)(lVar15 + 0x28) + 8);
            if (plVar6 != (long *)0x0) {
              fVar19 = (float)(**(code **)(*plVar6 + 0x1a8))();
            }
          }
          if ((fVar19 * 0.5 <= fVar20) &&
             (plVar6 = *(long **)(*(long *)(lVar15 + 0x28) + 8), plVar6 != (long *)0x0)) {
            fVar19 = (float)(**(code **)(*plVar6 + 0x1a8))();
            plVar6 = *(long **)(*(long *)(lVar15 + 0x28) + 8);
            if (plVar6 != (long *)0x0) {
              uVar7 = (**(code **)(*plVar6 + 0x148))();
              if ((uVar7 & 1) == 0) {
                plVar6 = *(long **)(lVar15 + 0x28);
                if ((char)plVar6[2] != '\0') {
                  plVar18 = *(long **)(*plVar6 + 0x80);
                  plVar16 = (long *)(*plVar6 + 0x88);
                  if (plVar18 != plVar16) {
                    plVar6 = (long *)plVar6[1];
                    do {
                      uVar7 = (**(code **)(*(long *)plVar18[0xd] + 0x148))();
                      if (((uVar7 & 1) != 0) &&
                         (uVar7 = (**(code **)(*plVar6 + 0x120))(plVar6,plVar18[0xd]),
                         (uVar7 & 1) != 0)) {
                        (**(code **)(*(long *)plVar18[0xd] + 0x178))();
                        (**(code **)(*(long *)plVar18[0xd] + 0x140))((long *)plVar18[0xd],0);
                      }
                      plVar9 = (long *)plVar18[1];
                      if ((long *)plVar18[1] == (long *)0x0) {
                        plVar9 = plVar18 + 2;
                        plVar12 = (long *)*plVar9;
                        if ((long *)*plVar12 != plVar18) {
                          do {
                            lVar13 = *plVar9;
                            plVar9 = (long *)(lVar13 + 0x10);
                            plVar12 = (long *)*plVar9;
                          } while (*plVar12 != lVar13);
                        }
                      }
                      else {
                        do {
                          plVar12 = plVar9;
                          plVar9 = (long *)*plVar12;
                        } while ((long *)*plVar12 != (long *)0x0);
                      }
                      plVar18 = plVar12;
                    } while (plVar12 != plVar16);
                    plVar6 = *(long **)(lVar15 + 0x28);
                  }
                }
                (**(code **)(*(long *)plVar6[1] + 0x178))();
              }
              (**(code **)(**(long **)(*(long *)(lVar15 + 0x28) + 8) + 0x1a0))(fVar19 * 0.5);
              plVar6 = *(long **)(lVar15 + 0x28);
              plVar16 = (long *)plVar6[1];
              if (plVar16 != (long *)0x0) {
                if ((char)plVar6[2] != '\0') {
                  plVar18 = *(long **)(*plVar6 + 0x80);
                  plVar6 = (long *)(*plVar6 + 0x88);
                  if (plVar18 != plVar6) {
                    do {
                      uVar7 = (**(code **)(*(long *)plVar18[0xd] + 0x148))();
                      if (((uVar7 & 1) != 0) &&
                         (uVar7 = (**(code **)(*plVar16 + 0x120))(plVar16,plVar18[0xd]),
                         (uVar7 & 1) != 0)) {
                        (**(code **)(*(long *)plVar18[0xd] + 0x178))();
                        (**(code **)(*(long *)plVar18[0xd] + 0x140))((long *)plVar18[0xd],0);
                      }
                      plVar9 = (long *)plVar18[1];
                      if ((long *)plVar18[1] == (long *)0x0) {
                        plVar9 = plVar18 + 2;
                        plVar12 = (long *)*plVar9;
                        if ((long *)*plVar12 != plVar18) {
                          do {
                            lVar13 = *plVar9;
                            plVar9 = (long *)(lVar13 + 0x10);
                            plVar12 = (long *)*plVar9;
                          } while (*plVar12 != lVar13);
                        }
                      }
                      else {
                        do {
                          plVar12 = plVar9;
                          plVar9 = (long *)*plVar12;
                        } while ((long *)*plVar12 != (long *)0x0);
                      }
                      plVar18 = plVar12;
                    } while (plVar12 != plVar6);
                    plVar16 = *(long **)(*(long *)(lVar15 + 0x28) + 8);
                  }
                }
                (**(code **)(*plVar16 + 0x178))(plVar16);
              }
            }
          }
        }
        plVar6 = *(long **)(*(long *)(lVar15 + 0x28) + 8);
        if (plVar6 == (long *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar6 + 0x130))();
        }
        lVar13 = *(long *)(*(long *)(lVar15 + 0xa8) + 8);
        plVar6 = *(long **)(lVar13 + 0xe8);
        if ((((plVar6 != (long *)0x0) && (*(char *)(lVar13 + 0x112) == '\0')) &&
            (plVar6 != (long *)0x0)) &&
           (((iVar1 == 0 || iVar1 == 3) && (uVar4 & 1) == 0 && (*(int *)(lVar13 + 0xd8) == 3)))) {
          if (*(char *)(lVar13 + 0x110) == '\0') {
            if (*(char *)(lVar13 + 0x112) == '\0') {
              (**(code **)(*plVar6 + 0xa0))(plVar6,0);
              (**(code **)(**(long **)(lVar13 + 0xe8) + 0x18))();
              *(undefined1 *)(lVar13 + 0x112) = 1;
            }
            *(undefined1 *)(lVar13 + 0x113) = 0;
          }
          *(undefined4 *)(lVar15 + 0xb8) = 2;
          FUN_71037760f0(*(long *)**(undefined8 **)(lVar15 + 8),1);
          lVar13 = DAT_71053263a8;
          uVar7 = *(ulong *)(lVar15 + 0xb0) & 0xff0000ffffffffff;
          if (uVar7 == 0x6f00000d626d0438) {
            if (((**(long **)(lVar15 + 0x70) != 0) && (**(long **)(lVar15 + 0x80) != 0)) &&
               (**(long **)(lVar15 + 0x90) != 0)) {
              puVar11 = *(undefined8 **)(lVar15 + 0xc0);
LAB_7101e88180:
              *puVar11 = 0;
              *(undefined1 *)(puVar11 + 1) = 1;
              lVar13 = **(long **)(lVar15 + 0x70);
              if (lVar13 != 0) {
                *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) | 1;
              }
              lVar13 = **(long **)(lVar15 + 0x80);
              if (lVar13 != 0) {
                *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) | 1;
              }
              lVar13 = **(long **)(lVar15 + 0x90);
              if (lVar13 != 0) {
                *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) | 1;
              }
            }
          }
          else if (uVar7 == 0x6f00000da797711a) {
            if (((**(long **)(lVar15 + 0x70) != 0) && (**(long **)(lVar15 + 0x80) != 0)) &&
               (**(long **)(lVar15 + 0x90) != 0)) {
              puVar11 = *(undefined8 **)(lVar15 + 200);
              goto LAB_7101e88180;
            }
          }
          else {
            uVar7 = *(ulong *)(lVar15 + 0xb0) & 0xff0000ffffffffff;
            if (uVar7 == 0x6f0000154e5ea4fa) {
              if (((**(long **)(lVar15 + 0x70) != 0) && (**(long **)(lVar15 + 0x80) != 0)) &&
                 (**(long **)(lVar15 + 0x90) != 0)) {
                puVar11 = *(undefined8 **)(lVar15 + 0xd0);
                goto LAB_7101e88180;
              }
            }
            else if ((uVar7 == 0x6f00000f127c83e4) && (*(char *)(lVar15 + 0x108) != '\0')) {
              lVar17 = *(long *)(DAT_71053263a8 + 8);
              if ((*(long *)(lVar17 + 0xe0) != 0) &&
                 ((lVar14 = *(long *)(*(long *)(*(long *)**(undefined8 **)
                                                           (*(long *)(lVar17 + 0xe0) + 0x80) + 0x10)
                                     + 8), lVar14 != 0 &&
                  (lVar14 = *(long *)(lVar14 + 0x18), lVar14 != 0)))) {
                *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) | 1;
                lVar17 = *(long *)(lVar13 + 8);
              }
              FUN_7101ea02b0(lVar17,extraout_x1_06,param_3,param_4,param_5,param_6,param_7,param_8);
            }
          }
          FUN_7103778760(*(long *)(**(long **)(lVar15 + 0x18) + 0x10),0x71043cfb52);
          *(undefined1 *)(lVar15 + 0x115) = 0;
          param_2 = extraout_x1_07;
          goto LAB_7101e8825c;
        }
      }
      goto LAB_7101e88274;
    }
    cVar2 = *(char *)(*(long *)(*(long *)(lVar15 + 0xa8) + 8) + 0x113);
    lVar13 = *(long *)(*(long *)**(undefined8 **)(lVar15 + 8) + 0x600);
    if (*(char *)(lVar15 + 0x112) == '\0') {
      if ((*(char *)(lVar13 + 0x4aa) != '\0') && ((*(byte *)(lVar13 + 0x1a8) >> 1 & 1) != 0)) {
        lVar13 = *(long *)(*(long *)(lVar15 + 0x60) + 8);
        if (lVar13 != 0) {
          lVar13 = *(long *)(lVar13 + 0x18);
          if (lVar13 != 0) {
            *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) | 1;
          }
          *(undefined1 *)(lVar15 + 0x112) = 1;
        }
        FUN_710377aee0((ulong)*(uint *)(lVar15 + 0x40),lVar15 + 0x30);
        param_2 = extraout_x1_01;
      }
LAB_7101e87a88:
      bVar3 = 0;
    }
    else if (*(char *)(lVar13 + 0x4aa) == '\0') {
LAB_7101e87a00:
      plVar6 = *(long **)(*(long *)(lVar15 + 0x38) + 8);
      if (plVar6 != (long *)0x0) {
        auVar22 = (**(code **)(*plVar6 + 0x138))();
        param_2 = auVar22._8_8_;
        if ((auVar22._0_8_ & 1) == 0) goto LAB_7101e87a88;
      }
LAB_7101e87a1c:
      lVar13 = *(long *)(*(long *)(lVar15 + 0x60) + 8);
      if (lVar13 == 0) goto LAB_7101e87a88;
      lVar13 = *(long *)(lVar13 + 0x18);
      if (lVar13 != 0) {
        *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) & 0xfe;
      }
      bVar3 = 0;
      *(undefined1 *)(lVar15 + 0x112) = 0;
    }
    else {
      if ((*(byte *)(lVar13 + 0x1ac) >> 1 & 1) == 0) {
        if ((*(byte *)(lVar13 + 0x1a8) >> 1 & 1) == 0) goto LAB_7101e87a00;
        goto LAB_7101e87a1c;
      }
      bVar3 = 1;
    }
    lVar13 = *(long *)(*(long *)(**(long **)(lVar15 + 0x18) + 0x10) + 8);
    if ((lVar13 == 0) ||
       (plVar6 = (long *)FUN_71037964b0(lVar13,0x71043cfb52), param_2 = extraout_x1_03,
       plVar6 == (long *)0x0)) {
LAB_7101e87bac:
      if (*(char *)(lVar15 + 0x115) == '\0') {
        FUN_7103778760(*(long *)(**(long **)(lVar15 + 0x18) + 0x10),0x71042d6998);
        *(undefined1 *)(lVar15 + 0x115) = 1;
        param_2 = extraout_x1_04;
      }
    }
    else {
      auVar22 = (**(code **)(*plVar6 + 0x138))();
      param_2 = auVar22._8_8_;
      if ((auVar22._0_8_ & 1) != 0) goto LAB_7101e87bac;
    }
    if ((bool)(cVar2 == '\0' & (bVar3 ^ 1))) goto LAB_7101e88274;
    lVar13 = *(long *)(*(long *)(lVar15 + 0x60) + 8);
    if (lVar13 != 0) {
      lVar13 = *(long *)(lVar13 + 0x18);
      if (lVar13 != 0) {
        *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) & 0xfe;
      }
      *(undefined1 *)(lVar15 + 0x112) = 0;
    }
    FUN_7101e86080(lVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    lVar13 = *(long *)(*(long *)(lVar15 + 0xa8) + 8);
    if ((((*(long **)(lVar13 + 0xe8) != (long *)0x0) && (*(int *)(lVar13 + 0xd8) == 3)) &&
        (*(char *)(lVar13 + 0x110) == '\0')) && (*(char *)(lVar13 + 0x112) != '\0')) {
      (**(code **)(**(long **)(lVar13 + 0xe8) + 0x10))();
      *(undefined1 *)(lVar13 + 0x112) = 0;
      lVar13 = *(long *)(*(long *)(lVar15 + 0xa8) + 8);
    }
    if (*(char *)(lVar13 + 0x111) != '\0') {
      FUN_7103776910(&local_60,lVar13 + 0xf0,(long ****)"set_rep_movie",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      plVar6 = local_58;
      lVar17 = *local_58;
      if (lVar17 != 0) {
        *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) & 0xfe;
      }
      FUN_7103779650((long)local_58);
      *(undefined1 *)(lVar13 + 0x111) = 0;
      local_60 = &PTR_FUN_710523d9a8;
      local_58 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar6);
      }
    }
    if ((*(char *)(lVar13 + 0x112) != '\0') && (*(long **)(lVar13 + 0xe8) != (long *)0x0)) {
      (**(code **)(**(long **)(lVar13 + 0xe8) + 0x20))();
      *(undefined2 *)(lVar13 + 0x112) = 0x100;
    }
    *(undefined1 *)(lVar13 + 0x110) = 1;
    *(undefined4 *)(lVar15 + 0xb8) = 3;
    FUN_71037760f0(*(long *)**(undefined8 **)(lVar15 + 8),0);
    if (*(char *)(lVar15 + 0x108) == '\0') {
      if (*(char *)(lVar15 + 0x113) == '\0') goto LAB_7101e88274;
      FUN_71032e5e60(*(long *)(DAT_710532f7c8 + 8),extraout_x1_05,(long ****)param_3,param_4,param_5
                     ,param_6,param_7,param_8);
      cVar2 = *(char *)(lVar15 + 0x111);
    }
    else {
      if (cVar2 != '\0') {
        lVar13 = *(long *)(DAT_710532f7c8 + 8);
        param_3 = (long ***************)0x2;
        goto LAB_7101e87d18;
      }
      if (*(char *)(lVar15 + 0x113) != '\0') {
        FUN_71032e5e60(*(long *)(DAT_710532f7c8 + 8),extraout_x1_05,(long ****)param_3,param_4,
                       param_5,param_6,param_7,param_8);
      }
      lVar13 = *(long *)(DAT_71053263a8 + 8);
      lVar17 = *(long *)(lVar13 + 0xe0);
      if (((lVar17 != 0) &&
          (lVar17 = *(long *)(*(long *)(*(long *)**(undefined8 **)(lVar17 + 0x80) + 0x10) + 8),
          lVar17 != 0)) && (lVar17 = *(long *)(lVar17 + 0x18), lVar17 != 0)) {
        *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) & 0xfe;
      }
      *(undefined1 *)(lVar13 + 200) = 0;
      *(undefined1 *)(lVar15 + 0x108) = 0;
      cVar2 = *(char *)(lVar15 + 0x111);
    }
  }
joined_r0x007101e880f0:
  if (((cVar2 == '\0') ||
      (((**(long **)(lVar15 + 0x28) != 0 &&
        (plVar6 = (long *)(*(long **)(lVar15 + 0x28))[1], plVar6 != (long *)0x0)) &&
       (uVar7 = (**(code **)(*plVar6 + 0x138))(), (uVar7 & 1) != 0)))) &&
     ((*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x6a) != '\0' &&
      (*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x6b) == '\0')))) {
    plVar6 = *(long **)(*(long *)(lVar15 + 0x28) + 8);
    if (plVar6 == (long *)0x0) {
      uVar21 = 0;
    }
    else {
      uVar21 = (**(code **)(*plVar6 + 0x198))();
    }
    FUN_710377b010(uVar21,lVar15 + 0x20);
    plVar6 = *(long **)(*(long *)(lVar15 + 0x28) + 8);
    uVar21 = extraout_x1_08;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x140))(plVar6,0);
      uVar21 = extraout_x1_09;
    }
    *(undefined1 *)(lVar15 + 0x111) = 0;
    if (*(char *)(lVar15 + 0x108) != '\0') {
      if ((*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x69) != '\0') &&
         (*(char *)(lVar15 + 0x113) == '\0')) {
        FUN_71032e5b10(*(long *)(DAT_710532f7c8 + 8),uVar21,(long ****)param_3,param_4,param_5,
                       param_6,param_7,param_8);
        uVar21 = extraout_x1_10;
      }
      lVar13 = *(long *)(DAT_71053263a8 + 8);
      lVar17 = *(long *)(lVar13 + 0xe0);
      if (((lVar17 != 0) &&
          (lVar17 = *(long *)(*(long *)(*(long *)**(undefined8 **)(lVar17 + 0x80) + 0x10) + 8),
          lVar17 != 0)) && (lVar17 = *(long *)(lVar17 + 0x18), lVar17 != 0)) {
        *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) & 0xfe;
      }
      *(undefined1 *)(lVar13 + 200) = 0;
      *(undefined1 *)(lVar15 + 0x108) = 0;
    }
    if (*(char *)(lVar15 + 0x110) != '\0') {
      FUN_7103775fa0((long *)**(undefined8 **)(lVar15 + 8),uVar21,(long ****)param_3,param_4,param_5
                     ,param_6,param_7,param_8);
      FUN_7103775fa0((long *)**(undefined8 **)(lVar15 + 0x10),extraout_x1_11,(long ****)param_3,
                     param_4,param_5,param_6,param_7,param_8);
      FUN_7103775fa0((long *)**(undefined8 **)(lVar15 + 0x18),extraout_x1_12,(long ****)param_3,
                     param_4,param_5,param_6,param_7,param_8);
      *(undefined1 *)(lVar15 + 0x110) = 0;
    }
  }
LAB_7101e883a4:
  if (*(long *)(lVar15 + 0xa8) != 0) {
    FUN_7103399350(*(long **)(*(long *)(lVar15 + 0xa8) + 8));
    lVar13 = DAT_71053263a8;
    uVar7 = *(ulong *)(lVar15 + 0xb0) & 0xff0000ffffffffff;
    if (uVar7 == 0x6f00000d626d0438) {
      plVar6 = *(long **)(*(long *)(*(long *)(lVar15 + 0xa8) + 8) + 0xe8);
      if (plVar6 == (long *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar6 + 0x78))();
      }
      puVar8 = *(uint **)(lVar15 + 0xc0);
    }
    else if (uVar7 == 0x6f00000da797711a) {
      plVar6 = *(long **)(*(long *)(*(long *)(lVar15 + 0xa8) + 8) + 0xe8);
      if (plVar6 == (long *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar6 + 0x78))();
      }
      puVar8 = *(uint **)(lVar15 + 200);
    }
    else {
      uVar7 = *(ulong *)(lVar15 + 0xb0) & 0xff0000ffffffffff;
      if (uVar7 != 0x6f0000154e5ea4fa) {
        if (uVar7 != 0x6f00000f127c83e4) {
          return;
        }
        if (*(char *)(lVar15 + 0x108) == '\0') {
          return;
        }
        if (*(char *)(lVar15 + 0x111) == '\0') {
          return;
        }
        if (*(int *)(lVar15 + 0x98) != 1) {
          return;
        }
        if (*(int *)(lVar15 + 0xb8) != 2) {
          return;
        }
        plVar6 = *(long **)(*(long *)(*(long *)(lVar15 + 0xa8) + 8) + 0xe8);
        if (plVar6 == (long *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar6 + 0x78))();
        }
        FUN_7101ea03c0(*(long **)(lVar13 + 8),uVar5);
        return;
      }
      plVar6 = *(long **)(*(long *)(*(long *)(lVar15 + 0xa8) + 8) + 0xe8);
      if (plVar6 == (long *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar6 + 0x78))();
      }
      puVar8 = *(uint **)(lVar15 + 0xd0);
    }
    FUN_710339d150(puVar8,uVar7,(ulong)param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}

