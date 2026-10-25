// addr:      71030f7f00
// offset:    0x30f7f00
// name:      FUN_71030f7f00
// mangled:   
// signature: undefined __cdecl FUN_71030f7f00(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)


void FUN_71030f7f00(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,long ***param_7,long ***param_8)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 *puVar5;
  int *piVar6;
  short sVar7;
  int iVar8;
  long ****pppplVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  int iVar14;
  ulong uVar15;
  undefined *puVar16;
  ulong uVar17;
  uint uVar18;
  byte *pbVar19;
  long *plVar20;
  uint uVar21;
  long *plVar22;
  long lVar23;
  int *piVar24;
  long lVar25;
  int iVar26;
  undefined4 uVar27;
  long ***local_80;
  undefined8 uStack_78;
  long ***local_70;
  undefined8 uStack_68;
  
  plVar11 = *(long **)(*(long *)(*(long *)(param_1 + 8) + 0x300) + 0x18);
  plVar13 = (long *)*plVar11;
  do {
    if (plVar13 == (long *)plVar11[1]) goto LAB_71030f7fa8;
    lVar25 = *plVar13;
    plVar13 = plVar13 + 1;
  } while ((*(ulong *)(lVar25 + 0xa0) & 0xffffffffff) != 0x85eabd500);
  if (*(long *)(lVar25 + 0x130) != 0) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    param_3 = "IPP0001";
    puVar10 = (undefined8 *)**(undefined8 **)(lVar25 + 0x130);
    puVar5 = (undefined8 *)(*(undefined8 **)(lVar25 + 0x130))[1];
    if (DAT_71052c51ba == '\0') {
      FUN_71025f55b0(puVar10,puVar5,"IPP0001");
    }
    else {
      FUN_71025f5420(puVar10,puVar5,"IPP0001");
    }
  }
LAB_71030f7fa8:
  lVar25 = *(long *)(*(long *)(param_1 + 8) + 0x308);
  uVar3 = *(undefined8 *)(lVar25 + 0xf8);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(lVar25 + 0x100);
  *(undefined8 *)(param_1 + 0x1c) = uVar3;
  uVar17 = 0;
  do {
    if ((uVar17 | 1) != 0x23) {
      lVar25 = *(long *)(*(long *)(param_1 + 8) + 0x310);
      pbVar19 = (&PTR_s_dyr_StgPirates00_set_7105172ed0)[uVar17 * 5];
      if (uVar17 - 0x15 < 7) {
        plVar13 = *(long **)(lVar25 + 0xd0);
        if (plVar13 != *(long **)(lVar25 + 0xd8)) {
          uVar21 = (uint)*pbVar19;
          if (*pbVar19 == 0) {
            uVar15 = 0;
            uVar12 = 0;
          }
          else {
            uVar12 = 0;
            uVar18 = 0xffffffff;
            do {
              pbVar19 = pbVar19 + 1;
              uVar2 = uVar21 + 0x20;
              if (0x19 < uVar21 - 0x41) {
                uVar2 = uVar21;
              }
              uVar18 = (&DAT_7104754084)[(uVar2 ^ uVar18) & 0xff] ^ uVar18 >> 8;
              uVar21 = (uint)*pbVar19;
              uVar12 = uVar12 + 0x100000000;
            } while (uVar21 != 0);
            uVar15 = (ulong)~uVar18;
            uVar12 = uVar12 & 0xff00000000;
          }
          do {
            if ((*(uint *)(plVar13 + 1) < 2) && ((uVar12 | uVar15) == *(ulong *)(*plVar13 + 0x68)))
            {
              pppplVar9 = FUN_710262fb80(lVar25,plVar13,(long *********)param_3,param_4,param_5,
                                         param_6,param_7,param_8);
              goto LAB_71030f8134;
            }
            plVar13 = plVar13 + 2;
          } while (*(long **)(lVar25 + 0xd8) != plVar13);
        }
      }
      else {
        uVar21 = (uint)*pbVar19;
        if (*pbVar19 != 0) {
          plVar13 = *(long **)(lVar25 + 0xd0);
          if (plVar13 != *(long **)(lVar25 + 0xd8)) {
            uVar12 = 0;
            uVar18 = 0xffffffff;
            do {
              pbVar19 = pbVar19 + 1;
              uVar2 = uVar21 + 0x20;
              if (0x19 < uVar21 - 0x41) {
                uVar2 = uVar21;
              }
              uVar18 = (&DAT_7104754084)[(uVar2 ^ uVar18) & 0xff] ^ uVar18 >> 8;
              uVar21 = (uint)*pbVar19;
              uVar12 = uVar12 + 0x100000000;
            } while (uVar21 != 0);
            do {
              if ((*(uint *)(plVar13 + 1) < 2) &&
                 (pppplVar9 = (long ****)*plVar13,
                 (long ***)(uVar12 & 0xff00000000 | (ulong)~uVar18) == pppplVar9[0xd]))
              goto LAB_71030f8134;
              plVar13 = plVar13 + 2;
            } while (*(long **)(lVar25 + 0xd8) != plVar13);
          }
        }
      }
    }
    pppplVar9 = (long ****)0x0;
LAB_71030f8134:
    uVar12 = uVar17 + 1;
    lVar25 = param_1 + (ulong)(uint)(&DAT_7105172ec8)[uVar17 * 10] * 0x98;
    puVar16 = (&PTR_DAT_7105172ee0)[uVar17 * 5];
    uVar27 = (&DAT_7105172ee8)[uVar17 * 10];
    *(long *****)(lVar25 + 0x308) = pppplVar9;
    *(undefined **)(lVar25 + 0x310) = puVar16;
    *(undefined4 *)(lVar25 + 0x318) = uVar27;
    uVar17 = uVar12;
  } while (uVar12 != 0x24);
  lVar25 = param_1 + 0x1268;
  FUN_71030f09e0(lVar25,"dyr_StgPirates00K_set",(long ****)"chara",param_4,param_5,param_6,param_7,
                 param_8);
  FUN_71030f09e0(lVar25,"dyr_StgPirates00K_123_set",(long ****)"chara_123",param_4,param_5,param_6,
                 param_7,param_8);
  FUN_71030f09e0(lVar25,"dyr_StgPirates00K_t_set",(long ****)"chara_t",param_4,param_5,param_6,
                 param_7,param_8);
  FUN_71030f09e0(lVar25,"dyr_StgPirates00K_z_set",(long ****)"chara_z",param_4,param_5,param_6,
                 param_7,param_8);
  lVar25 = param_1 + 0x1008;
  FUN_71030f0c00(lVar25,"dyr_StgPirates00R_set",(long ****)"chara",param_4,param_5,param_6,param_7,
                 param_8);
  FUN_71030f0c00(lVar25,"dyr_StgPirates00R_123_set",(long ****)"chara_123",param_4,param_5,param_6,
                 param_7,param_8);
  FUN_71030f0c00(lVar25,"dyr_StgPirates00R_t_set",(long ****)"chara_t",param_4,param_5,param_6,
                 param_7,param_8);
  lVar25 = *(long *)(param_1 + 8);
  plVar11 = *(long **)(*(long *)(lVar25 + 0x300) + 0x18);
  plVar13 = (long *)*plVar11;
  plVar11 = (long *)plVar11[1];
  plVar20 = plVar13;
  if (plVar13 != plVar11) {
    do {
      plVar22 = plVar20 + 1;
      if ((*(ulong *)(*plVar20 + 0x98) & 0xffffffffff) == 0x15b5ac5511) {
        plVar20 = *(long **)(*plVar20 + 0x110);
        if ((plVar20 != (long *)0x0) && (*plVar20 != plVar20[1])) {
          *(long **)(param_1 + 0x1860) = plVar20;
          plVar11 = *(long **)(*(long *)(lVar25 + 0x300) + 0x18);
          plVar13 = (long *)*plVar11;
          plVar11 = (long *)plVar11[1];
        }
        break;
      }
      plVar20 = plVar22;
    } while (plVar11 != plVar22);
    plVar20 = plVar13;
    if (plVar13 != plVar11) {
      do {
        plVar22 = plVar20 + 1;
        if ((*(ulong *)(*plVar20 + 0x98) & 0xffffffffff) == 0x1a53d50963) {
          plVar20 = *(long **)(*plVar20 + 0x110);
          if ((plVar20 != (long *)0x0) && (*plVar20 != plVar20[1])) {
            *(long **)(param_1 + 0x1870) = plVar20;
            plVar11 = *(long **)(*(long *)(lVar25 + 0x300) + 0x18);
            plVar13 = (long *)*plVar11;
            plVar11 = (long *)plVar11[1];
          }
          break;
        }
        plVar20 = plVar22;
      } while (plVar11 != plVar22);
      plVar20 = plVar13;
      if (plVar13 != plVar11) {
        do {
          plVar22 = plVar20 + 1;
          if ((*(ulong *)(*plVar20 + 0x98) & 0xffffffffff) == 0x1a5193b73a) {
            plVar20 = *(long **)(*plVar20 + 0x110);
            if ((plVar20 != (long *)0x0) && (*plVar20 != plVar20[1])) {
              *(long **)(param_1 + 0x1880) = plVar20;
              plVar11 = *(long **)(*(long *)(lVar25 + 0x300) + 0x18);
              plVar13 = (long *)*plVar11;
              plVar11 = (long *)plVar11[1];
            }
            break;
          }
          plVar20 = plVar22;
        } while (plVar11 != plVar22);
        plVar20 = plVar13;
        if (plVar13 != plVar11) {
          do {
            plVar22 = plVar20 + 1;
            if ((*(ulong *)(*plVar20 + 0x98) & 0xffffffffff) == 0x1a5051dd0d) {
              plVar20 = *(long **)(*plVar20 + 0x110);
              if ((plVar20 != (long *)0x0) && (*plVar20 != plVar20[1])) {
                *(long **)(param_1 + 0x1890) = plVar20;
                plVar11 = *(long **)(*(long *)(lVar25 + 0x300) + 0x18);
                plVar13 = (long *)*plVar11;
                plVar11 = (long *)plVar11[1];
              }
              break;
            }
            plVar20 = plVar22;
          } while (plVar11 != plVar22);
          plVar20 = plVar13;
          if (plVar13 != plVar11) {
            do {
              plVar22 = plVar20 + 1;
              if ((*(ulong *)(*plVar20 + 0x98) & 0xffffffffff) == 0x15e53c8952) {
                plVar20 = *(long **)(*plVar20 + 0x110);
                if ((plVar20 != (long *)0x0) && (*plVar20 != plVar20[1])) {
                  *(long **)(param_1 + 0x18d0) = plVar20;
                  plVar11 = *(long **)(*(long *)(lVar25 + 0x300) + 0x18);
                  plVar13 = (long *)*plVar11;
                  plVar11 = (long *)plVar11[1];
                }
                break;
              }
              plVar20 = plVar22;
            } while (plVar11 != plVar22);
            plVar20 = plVar13;
            if (plVar13 != plVar11) {
              do {
                plVar22 = plVar20 + 1;
                if ((*(ulong *)(*plVar20 + 0x98) & 0xffffffffff) == 0x1a4244f7ce) {
                  plVar20 = *(long **)(*plVar20 + 0x110);
                  if ((plVar20 != (long *)0x0) && (*plVar20 != plVar20[1])) {
                    *(long **)(param_1 + 0x18a0) = plVar20;
                    plVar11 = *(long **)(*(long *)(lVar25 + 0x300) + 0x18);
                    plVar13 = (long *)*plVar11;
                    plVar11 = (long *)plVar11[1];
                  }
                  break;
                }
                plVar20 = plVar22;
              } while (plVar11 != plVar22);
              plVar20 = plVar13;
              if (plVar13 != plVar11) {
                do {
                  plVar22 = plVar20 + 1;
                  if ((*(ulong *)(*plVar20 + 0x98) & 0xffffffffff) == 0x1a40024997) {
                    plVar20 = *(long **)(*plVar20 + 0x110);
                    if ((plVar20 != (long *)0x0) && (*plVar20 != plVar20[1])) {
                      *(long **)(param_1 + 0x18b0) = plVar20;
                      plVar13 = *(long **)(*(long *)(lVar25 + 0x300) + 0x18);
                      plVar11 = (long *)plVar13[1];
                      plVar13 = (long *)*plVar13;
                    }
                    break;
                  }
                  plVar20 = plVar22;
                } while (plVar11 != plVar22);
                do {
                  if (plVar13 == plVar11) goto LAB_71030f84f8;
                  lVar23 = *plVar13;
                  plVar13 = plVar13 + 1;
                } while ((*(ulong *)(lVar23 + 0x98) & 0xffffffffff) != 0x1a43869df9);
                plVar13 = *(long **)(lVar23 + 0x110);
                if ((plVar13 != (long *)0x0) && (*plVar13 != plVar13[1])) {
                  *(long **)(param_1 + 0x18c0) = plVar13;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_71030f84f8:
  lVar23 = *(long *)(*(long *)(lVar25 + 0x318) + 0x10);
  FUN_71025f7350(lVar23,(byte *)"light00");
  *(undefined **)(param_1 + 0x1ce0) = &DAT_710455cc38;
  *(undefined4 *)(param_1 + 0x1ce8) = 9;
  lVar25 = *(long *)(param_1 + 8);
  *(long *)(param_1 + 0x1cd8) = lVar23;
  plVar13 = *(long **)(*(long *)(*(long *)(*(long *)(lVar25 + 800) + 0x48) + 800) + 0x40);
  piVar4 = (int *)*plVar13;
  piVar6 = (int *)plVar13[1];
  if ((long)piVar6 - (long)piVar4 == 0) {
LAB_71030f85bc:
    uVar17 = 0xffffffff;
  }
  else {
    piVar24 = piVar4;
    for (piVar1 = piVar4;
        (piVar1 != piVar6 &&
        ((*piVar1 != 0 ||
         (piVar24 = piVar1, (*(ulong *)(piVar1 + 2) & 0xffffffffff) != 0x183aacbfeb))));
        piVar1 = piVar1 + 0x1c) {
      piVar24 = piVar6;
    }
    uVar17 = ((long)piVar24 - (long)piVar4 >> 4) * 0x6db6db6db6db6db7;
    if ((ulong)(((long)piVar6 - (long)piVar4 >> 4) * 0x6db6db6db6db6db7) <= uVar17)
    goto LAB_71030f85bc;
  }
  *(int *)(param_1 + 0x1964) = (int)uVar17;
  plVar13 = *(long **)(*(long *)(*(long *)(*(long *)(lVar25 + 800) + 0x48) + 800) + 0x40);
  piVar4 = (int *)*plVar13;
  piVar6 = (int *)plVar13[1];
  if ((long)piVar6 - (long)piVar4 == 0) {
LAB_71030f8644:
    uVar17 = 0xffffffff;
  }
  else {
    piVar24 = piVar4;
    for (piVar1 = piVar4;
        (piVar1 != piVar6 &&
        ((*piVar1 != 0 ||
         (piVar24 = piVar1, (*(ulong *)(piVar1 + 2) & 0xffffffffff) != 0x145e170ee8))));
        piVar1 = piVar1 + 0x1c) {
      piVar24 = piVar6;
    }
    uVar17 = ((long)piVar24 - (long)piVar4 >> 4) * 0x6db6db6db6db6db7;
    if ((ulong)(((long)piVar6 - (long)piVar4 >> 4) * 0x6db6db6db6db6db7) <= uVar17)
    goto LAB_71030f8644;
  }
  *(int *)(param_1 + 0x19b4) = (int)uVar17;
  plVar13 = *(long **)(*(long *)(*(long *)(*(long *)(lVar25 + 800) + 0x48) + 800) + 0x40);
  piVar4 = (int *)*plVar13;
  piVar6 = (int *)plVar13[1];
  if ((long)piVar6 - (long)piVar4 == 0) {
LAB_71030f86cc:
    uVar17 = 0xffffffff;
  }
  else {
    piVar24 = piVar4;
    for (piVar1 = piVar4;
        (piVar1 != piVar6 &&
        ((*piVar1 != 0 ||
         (piVar24 = piVar1, (*(ulong *)(piVar1 + 2) & 0xffffffffff) != 0x138d42e7a4))));
        piVar1 = piVar1 + 0x1c) {
      piVar24 = piVar6;
    }
    uVar17 = ((long)piVar24 - (long)piVar4 >> 4) * 0x6db6db6db6db6db7;
    if ((ulong)(((long)piVar6 - (long)piVar4 >> 4) * 0x6db6db6db6db6db7) <= uVar17)
    goto LAB_71030f86cc;
  }
  *(int *)(param_1 + 0x1a04) = (int)uVar17;
  plVar13 = *(long **)(*(long *)(*(long *)(*(long *)(lVar25 + 800) + 0x48) + 800) + 0x40);
  piVar4 = (int *)*plVar13;
  piVar6 = (int *)plVar13[1];
  if ((long)piVar6 - (long)piVar4 == 0) {
LAB_71030f8754:
    uVar17 = 0xffffffff;
  }
  else {
    piVar24 = piVar4;
    for (piVar1 = piVar4;
        (piVar1 != piVar6 &&
        ((*piVar1 != 0 ||
         (piVar24 = piVar1, (*(ulong *)(piVar1 + 2) & 0xffffffffff) != 0x1612162b54))));
        piVar1 = piVar1 + 0x1c) {
      piVar24 = piVar6;
    }
    uVar17 = ((long)piVar24 - (long)piVar4 >> 4) * 0x6db6db6db6db6db7;
    if ((ulong)(((long)piVar6 - (long)piVar4 >> 4) * 0x6db6db6db6db6db7) <= uVar17)
    goto LAB_71030f8754;
  }
  *(int *)(param_1 + 0x1a54) = (int)uVar17;
  plVar13 = *(long **)(*(long *)(*(long *)(*(long *)(lVar25 + 800) + 0x48) + 800) + 0x40);
  piVar4 = (int *)*plVar13;
  piVar6 = (int *)plVar13[1];
  if ((long)piVar6 - (long)piVar4 == 0) {
LAB_71030f87dc:
    uVar17 = 0xffffffff;
  }
  else {
    piVar24 = piVar4;
    for (piVar1 = piVar4;
        (piVar1 != piVar6 &&
        ((*piVar1 != 0 ||
         (piVar24 = piVar1, (*(ulong *)(piVar1 + 2) & 0xffffffffff) != 0x189805216d))));
        piVar1 = piVar1 + 0x1c) {
      piVar24 = piVar6;
    }
    uVar17 = ((long)piVar24 - (long)piVar4 >> 4) * 0x6db6db6db6db6db7;
    if ((ulong)(((long)piVar6 - (long)piVar4 >> 4) * 0x6db6db6db6db6db7) <= uVar17)
    goto LAB_71030f87dc;
  }
  *(int *)(param_1 + 0x1aa4) = (int)uVar17;
  plVar13 = *(long **)(*(long *)(*(long *)(*(long *)(lVar25 + 800) + 0x48) + 800) + 0x40);
  piVar4 = (int *)*plVar13;
  piVar6 = (int *)plVar13[1];
  if ((long)piVar6 - (long)piVar4 == 0) {
LAB_71030f8864:
    uVar17 = 0xffffffff;
  }
  else {
    piVar24 = piVar4;
    for (piVar1 = piVar4;
        (piVar1 != piVar6 &&
        ((*piVar1 != 0 ||
         (piVar24 = piVar1, (*(ulong *)(piVar1 + 2) & 0xffffffffff) != 0x14c1c9bea3))));
        piVar1 = piVar1 + 0x1c) {
      piVar24 = piVar6;
    }
    uVar17 = ((long)piVar24 - (long)piVar4 >> 4) * 0x6db6db6db6db6db7;
    if ((ulong)(((long)piVar6 - (long)piVar4 >> 4) * 0x6db6db6db6db6db7) <= uVar17)
    goto LAB_71030f8864;
  }
  *(int *)(param_1 + 0x1af4) = (int)uVar17;
  plVar13 = *(long **)(*(long *)(*(long *)(*(long *)(lVar25 + 800) + 0x48) + 800) + 0x40);
  piVar4 = (int *)*plVar13;
  piVar6 = (int *)plVar13[1];
  if ((long)piVar6 - (long)piVar4 == 0) {
LAB_71030f88ec:
    uVar17 = 0xffffffff;
  }
  else {
    piVar24 = piVar4;
    for (piVar1 = piVar4;
        (piVar1 != piVar6 &&
        ((*piVar1 != 0 ||
         (piVar24 = piVar1, (*(ulong *)(piVar1 + 2) & 0xffffffffff) != 0x10b7df533b))));
        piVar1 = piVar1 + 0x1c) {
      piVar24 = piVar6;
    }
    uVar17 = ((long)piVar24 - (long)piVar4 >> 4) * 0x6db6db6db6db6db7;
    if ((ulong)(((long)piVar6 - (long)piVar4 >> 4) * 0x6db6db6db6db6db7) <= uVar17)
    goto LAB_71030f88ec;
  }
  *(int *)(param_1 + 0x1b44) = (int)uVar17;
  plVar13 = *(long **)(*(long *)(*(long *)(*(long *)(lVar25 + 800) + 0x48) + 800) + 0x40);
  piVar4 = (int *)*plVar13;
  piVar6 = (int *)plVar13[1];
  if ((long)piVar6 - (long)piVar4 == 0) {
LAB_71030f8974:
    uVar17 = 0xffffffff;
  }
  else {
    piVar24 = piVar4;
    for (piVar1 = piVar4;
        (piVar1 != piVar6 &&
        ((*piVar1 != 0 ||
         (piVar24 = piVar1, (*(ulong *)(piVar1 + 2) & 0xffffffffff) != 0x1a082f3680))));
        piVar1 = piVar1 + 0x1c) {
      piVar24 = piVar6;
    }
    uVar17 = ((long)piVar24 - (long)piVar4 >> 4) * 0x6db6db6db6db6db7;
    if ((ulong)(((long)piVar6 - (long)piVar4 >> 4) * 0x6db6db6db6db6db7) <= uVar17)
    goto LAB_71030f8974;
  }
  *(int *)(param_1 + 0x1b94) = (int)uVar17;
  plVar13 = *(long **)(*(long *)(*(long *)(*(long *)(lVar25 + 800) + 0x48) + 800) + 0x40);
  piVar4 = (int *)*plVar13;
  piVar6 = (int *)plVar13[1];
  if ((long)piVar6 - (long)piVar4 == 0) {
LAB_71030f89fc:
    uVar17 = 0xffffffff;
  }
  else {
    piVar24 = piVar4;
    for (piVar1 = piVar4;
        (piVar1 != piVar6 &&
        ((*piVar1 != 0 ||
         (piVar24 = piVar1, (*(ulong *)(piVar1 + 2) & 0xffffffffff) != 0x15a0dc1145))));
        piVar1 = piVar1 + 0x1c) {
      piVar24 = piVar6;
    }
    uVar17 = ((long)piVar24 - (long)piVar4 >> 4) * 0x6db6db6db6db6db7;
    if ((ulong)(((long)piVar6 - (long)piVar4 >> 4) * 0x6db6db6db6db6db7) <= uVar17)
    goto LAB_71030f89fc;
  }
  *(int *)(param_1 + 0x1be4) = (int)uVar17;
  plVar13 = *(long **)(*(long *)(*(long *)(*(long *)(lVar25 + 800) + 0x48) + 800) + 0x40);
  piVar4 = (int *)*plVar13;
  piVar6 = (int *)plVar13[1];
  if ((long)piVar6 - (long)piVar4 == 0) {
LAB_71030f8a84:
    uVar17 = 0xffffffff;
  }
  else {
    piVar24 = piVar4;
    for (piVar1 = piVar4;
        (piVar1 != piVar6 &&
        ((*piVar1 != 0 ||
         (piVar24 = piVar1, (*(ulong *)(piVar1 + 2) & 0xffffffffff) != 0x192d372942))));
        piVar1 = piVar1 + 0x1c) {
      piVar24 = piVar6;
    }
    uVar17 = ((long)piVar24 - (long)piVar4 >> 4) * 0x6db6db6db6db6db7;
    if ((ulong)(((long)piVar6 - (long)piVar4 >> 4) * 0x6db6db6db6db6db7) <= uVar17)
    goto LAB_71030f8a84;
  }
  *(int *)(param_1 + 0x1c34) = (int)uVar17;
  plVar13 = *(long **)(*(long *)(*(long *)(*(long *)(lVar25 + 800) + 0x48) + 800) + 0x40);
  piVar4 = (int *)*plVar13;
  piVar6 = (int *)plVar13[1];
  if ((long)piVar6 - (long)piVar4 != 0) {
    piVar24 = piVar4;
    for (piVar1 = piVar4;
        (piVar1 != piVar6 &&
        ((*piVar1 != 0 ||
         (piVar24 = piVar1, (*(ulong *)(piVar1 + 2) & 0xffffffffff) != 0x1636be0536))));
        piVar1 = piVar1 + 0x1c) {
      piVar24 = piVar6;
    }
    uVar17 = ((long)piVar24 - (long)piVar4 >> 4) * 0x6db6db6db6db6db7;
    if (uVar17 < (ulong)(((long)piVar6 - (long)piVar4 >> 4) * 0x6db6db6db6db6db7))
    goto LAB_71030f8b10;
  }
  uVar17 = 0xffffffff;
LAB_71030f8b10:
  *(int *)(param_1 + 0x1c84) = (int)uVar17;
  uVar27 = *(undefined4 *)(*(long *)(lVar25 + 0x308) + 0x124);
  local_70 = (long ***)CONCAT44(uVar27,0xc2200000);
  local_80 = (long ***)CONCAT44(*(undefined4 *)(*(long *)(lVar25 + 0x308) + 0x120),0x41c80000);
  uStack_78 = 0;
  uStack_68 = 0;
  FUN_710317e570(param_1 + 0x30,&local_70,&local_80);
  local_70 = (long ***)CONCAT44(uVar27,0x42200000);
  uStack_78 = 0;
  local_80 = (long ***)0x40a0000042c80000;
  uStack_68 = 0;
  FUN_710317e570(param_1 + 0x80,&local_70,&local_80);
  local_70 = (long ***)CONCAT44(uVar27,0xc2be0000);
  uStack_78 = 0;
  local_80 = (long ***)0x420c000042480000;
  uStack_68 = 0;
  FUN_710317e570(param_1 + 0xd0,&local_70,&local_80);
  uStack_78 = 0;
  local_80 = (long ***)0x41a0000041a00000;
  uStack_68 = 0;
  local_70 = (long ***)0xc1a00000c1a00000;
  FUN_710317e570(param_1 + 0x120,&local_70,&local_80);
  pppplVar9 = &local_80;
  uStack_78 = 0;
  local_80 = (long ***)0x41f0000041f00000;
  uStack_68 = 0;
  local_70 = (long ***)0xc1f00000c1f00000;
  FUN_710317e570(param_1 + 0x170,&local_70,pppplVar9);
  *(long *)(param_1 + 0x1d18) = param_1 + 0x80;
  plVar13 = *(long **)(param_1 + 0x18d0);
  *(long *)(param_1 + 0x1d08) = param_1 + 0x30;
  *(long *)(param_1 + 0x1d28) = param_1 + 0xd0;
  *(long *)(param_1 + 0x1d38) = param_1 + 0x120;
  *(long *)(param_1 + 0x1d48) = param_1 + 0x170;
  if (plVar13 != (long *)0x0) {
    plVar11 = (long *)*plVar13;
    plVar20 = (long *)plVar13[1];
    iVar8 = (int)((ulong)((long)plVar20 - (long)plVar11) >> 3);
    if (iVar8 != 0) {
      iVar26 = 0;
      if (plVar11 != plVar20) goto LAB_71030f8c94;
LAB_71030f8d58:
      iVar26 = iVar26 + 1;
      if (iVar26 != iVar8) {
        plVar11 = (long *)*plVar13;
        plVar20 = (long *)plVar13[1];
        if (plVar11 != plVar20) {
LAB_71030f8c94:
          iVar14 = 0;
          do {
            if (iVar26 == iVar14) {
              lVar25 = *plVar11;
              if (lVar25 != 0) {
                lVar23 = *(long *)(lVar25 + 0x60);
                if (lVar23 != 0) {
                  sVar7 = *(short *)(lVar23 + 8) + -1;
                  *(short *)(lVar23 + 8) = sVar7;
                  if ((sVar7 < 1) && (*(long **)(lVar25 + 0x60) != (long *)0x0)) {
                    (**(code **)(**(long **)(lVar25 + 0x60) + 8))();
                  }
                  *(undefined8 *)(lVar25 + 0x60) = 0;
                }
                puVar10 = (undefined8 *)
                          FUN_710392e290(0x10,0x28,pppplVar9,param_4,param_5,param_6,param_7,param_8
                                        );
                if (puVar10 == (undefined8 *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_80 = (long ***)((ulong)local_80 & 0xffffffff00000000);
                    local_70 = (long ***)&DAT_00000028;
                    pppplVar9 = &local_70;
                    uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
                    if (((uVar17 & 1) != 0) &&
                       (puVar10 = (undefined8 *)
                                  FUN_710392e290(0x10,0x28,pppplVar9,param_4,param_5,param_6,param_7
                                                 ,param_8), puVar10 != (undefined8 *)0x0))
                    goto LAB_71030f8d44;
                  }
                  puVar10 = (undefined8 *)0x0;
                }
LAB_71030f8d44:
                *(undefined4 *)(puVar10 + 1) = 1;
                *puVar10 = &DAT_7105173478;
                puVar10[4] = 0;
                puVar10[2] = param_1 + 0x3e88;
                puVar10[3] = FUN_71030ec0d0;
                *(undefined8 **)(lVar25 + 0x60) = puVar10;
              }
              break;
            }
            plVar11 = plVar11 + 1;
            iVar14 = iVar14 + 1;
          } while (plVar20 != plVar11);
        }
        goto LAB_71030f8d58;
      }
    }
  }
  plVar13 = *(long **)(*(long *)(param_1 + 8) + 0x338);
  *(undefined4 *)(param_1 + 0x1d60) = 0xffffffff;
  *(long **)(param_1 + 0x1d58) = plVar13;
  *(long **)(param_1 + 0x1d78) = plVar13;
  if (plVar13 == (long *)0x0) {
    *(undefined4 *)(param_1 + 0x1d80) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x1d98) = 0;
    uVar27 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1da0) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x1db8) = 0;
    *(undefined4 *)(param_1 + 0x1dc0) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x1dd8) = 0;
  }
  else {
    local_70 = (long ***)0x0;
    if (*(long *)(*plVar13 + 8) == 0) {
      uVar27 = 0xffffffff;
    }
    else {
      pppplVar9 = (long ****)0x0;
      uVar27 = FUN_7102405040(*(long *)(*plVar13 + 8),&local_70,0,param_4,param_5,param_6,param_7,
                              param_8);
    }
    *(undefined4 *)(param_1 + 0x1d80) = uVar27;
    *(long **)(param_1 + 0x1d98) = plVar13;
    local_70 = (long ***)0x0;
    if (*(long *)(*plVar13 + 8) == 0) {
      uVar27 = 0xffffffff;
    }
    else {
      pppplVar9 = (long ****)0x0;
      uVar27 = FUN_7102405040(*(long *)(*plVar13 + 8),&local_70,0,param_4,param_5,param_6,param_7,
                              param_8);
    }
    *(undefined4 *)(param_1 + 0x1da0) = uVar27;
    *(long **)(param_1 + 0x1db8) = plVar13;
    local_70 = (long ***)0x0;
    if (*(long *)(*plVar13 + 8) == 0) {
      uVar27 = 0xffffffff;
    }
    else {
      pppplVar9 = (long ****)0x0;
      uVar27 = FUN_7102405040(*(long *)(*plVar13 + 8),&local_70,0,param_4,param_5,param_6,param_7,
                              param_8);
    }
    *(undefined4 *)(param_1 + 0x1dc0) = uVar27;
    *(long **)(param_1 + 0x1dd8) = plVar13;
    local_70 = (long ***)0x0;
    if (*(long *)(*plVar13 + 8) == 0) {
      uVar27 = 0xffffffff;
    }
    else {
      pppplVar9 = (long ****)0x0;
      uVar27 = FUN_7102405040(*(long *)(*plVar13 + 8),&local_70,0,param_4,param_5,param_6,param_7,
                              param_8);
    }
  }
  *(undefined4 *)(param_1 + 0x1de0) = uVar27;
  *(long **)(param_1 + 0x1df8) = plVar13;
  *(undefined4 *)(param_1 + 0x1e00) = 0xffffffff;
  plVar13 = (long *)FUN_710392e290(0x10,0x28,pppplVar9,param_4,param_5,param_6,param_7,param_8);
  if (plVar13 == (long *)0x0) {
    local_80 = (long ***)((ulong)local_80 & 0xffffffff00000000);
    local_70 = (long ***)&DAT_00000028;
    pppplVar9 = &local_70;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
    plVar13 = (long *)FUN_710392e290(0x10,0x28,pppplVar9,param_4,param_5,param_6,param_7,param_8);
  }
  *plVar13 = param_1;
  *(undefined1 *)(plVar13 + 1) = 0;
  *(undefined2 *)((long)plVar13 + 0x24) = 0;
  *(undefined8 *)((long)plVar13 + 0x1c) = 0;
  *(undefined8 *)((long)plVar13 + 0x12) = 0;
  *(undefined8 *)((long)plVar13 + 0xc) = 0;
  uVar17 = *(ulong *)(param_1 + 0x4960);
  *(long **)(param_1 + 0x4960) = plVar13;
  if (uVar17 != 0) {
    FUN_710392eb40(uVar17);
  }
  return;
}

