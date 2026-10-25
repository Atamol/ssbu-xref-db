// addr:      7102f89ed0
// offset:    0x2f89ed0
// name:      FUN_7102f89ed0
// mangled:   
// signature: undefined __cdecl FUN_7102f89ed0(undefined8 param_1, long param_2, ulong param_3, undefined * * param_4, byte * * * * param_5, long * * * * param_6, undefined8 param_7, undefined8 param_8, undefined1 * param_9)


void FUN_7102f89ed0(undefined8 param_1,long param_2,ulong param_3,undefined **param_4,
                   byte ****param_5,long ****param_6,undefined8 param_7,undefined8 param_8,
                   undefined1 *param_9)

{
  ulong *puVar1;
  int *piVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  byte *pbVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar12;
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
  ulong uVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  int *piVar20;
  float fVar21;
  undefined1 auVar22 [16];
  char *local_f0;
  undefined8 *puStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  char *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  
  plVar9 = lib::Singleton<app::FighterManager>::instance_;
  if ((*(long *)(param_2 + 0xcad0) == 0) && (*(char *)(param_2 + 0xcd90) != '\0')) {
    plVar19 = (long *)(param_2 + 0xce90);
    do {
      lVar15 = *plVar19;
      if ((lVar15 != 0) && (*(long *)(lVar15 + 0x38) != 0)) {
        if (((DAT_71053144d8 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), param_3 = extraout_x1_10, iVar5 != 0)) {
          FUN_7101764000();
          param_4 = &PTR_LOOP_7104f17000;
          FUN_71000001c0();
          __cxa_guard_release(&DAT_71053144d8);
          param_3 = extraout_x1_11;
        }
        auVar22._8_8_ = param_3;
        auVar22._0_8_ = &DAT_710532f420;
        if (DAT_71052c518a == '\0') {
          auVar22 = (**(code **)(**(long **)(*(long *)(lVar15 + 0x38) + 0x130) + 0x138))();
          param_3 = auVar22._8_8_;
          if (auVar22._0_8_ == 0) goto LAB_7102f8aaf0;
        }
        param_3 = auVar22._8_8_;
        lVar15 = auVar22._0_8_;
        if ((*(long *)(lVar15 + 0x10) != 0) && (lVar8 = *plVar9, 0 < *(int *)(lVar8 + 0xa0))) {
          iVar5 = 0;
          do {
            iVar7 = iVar5;
            if (*(long *)(lVar8 + 0x20) == 0) {
LAB_7102f8a6b8:
              if (*(long *)(lVar8 + 0x28) != 0) {
                if (iVar7 == 0) {
                  lVar16 = 1;
                  goto LAB_7102f8a760;
                }
                iVar7 = iVar7 + -1;
              }
              if (*(long *)(lVar8 + 0x30) != 0) {
                if (iVar7 == 0) {
                  lVar16 = 2;
                  goto LAB_7102f8a760;
                }
                iVar7 = iVar7 + -1;
              }
              if (*(long *)(lVar8 + 0x38) != 0) {
                if (iVar7 == 0) {
                  lVar16 = 3;
                  goto LAB_7102f8a760;
                }
                iVar7 = iVar7 + -1;
              }
              if (*(long *)(lVar8 + 0x40) != 0) {
                if (iVar7 == 0) {
                  lVar16 = 4;
                  goto LAB_7102f8a760;
                }
                iVar7 = iVar7 + -1;
              }
              if (*(long *)(lVar8 + 0x48) != 0) {
                if (iVar7 == 0) {
                  lVar16 = 5;
                  goto LAB_7102f8a760;
                }
                iVar7 = iVar7 + -1;
              }
              if (*(long *)(lVar8 + 0x50) != 0) {
                if (iVar7 == 0) {
                  lVar16 = 6;
                  goto LAB_7102f8a760;
                }
                iVar7 = iVar7 + -1;
              }
              if ((iVar7 == 0) && (*(long *)(lVar8 + 0x58) != 0)) {
                lVar16 = 7;
                goto LAB_7102f8a760;
              }
            }
            else {
              if (iVar5 != 0) {
                iVar7 = iVar5 + -1;
                goto LAB_7102f8a6b8;
              }
              lVar16 = 0;
LAB_7102f8a760:
              lVar8 = *(long *)(lVar8 + lVar16 * 8 + 0x20);
              if ((lVar8 != 0) && (*(char *)(lVar8 + 0x5920) == '\x06')) {
                if ((ulong)*(byte *)(lVar8 + 0x5918) < *(ulong *)(lVar8 + 0x4150)) {
                  lVar16 = lVar8 + (ulong)*(byte *)(lVar8 + 0x5918) * 8;
                  plVar10 = *(long **)(lVar16 + 0x4160);
                  if ((plVar10 == (long *)0x0) ||
                     (uVar13 = (**(code **)(*plVar10 + 0x518))(), (uVar13 & 1) == 0))
                  goto LAB_7102f8a7c0;
                  lVar16 = *(long *)(lVar16 + 0x4160);
                }
                else {
LAB_7102f8a7c0:
                  lVar16 = 0;
                }
                FUN_71003a9ab0(&local_b0,lVar16);
                param_3 = extraout_x1_12;
                if (local_a8 != (undefined8 *)0x0) {
                  auVar22 = (**(code **)*local_a8)();
                  param_3 = auVar22._8_8_;
                  if ((auVar22._0_8_ & 1) == 0) {
                    if (((*(long *)(lVar8 + 0x4150) == 0) ||
                        (*(long **)(lVar8 + 0x4160) == (long *)0x0)) ||
                       (uVar13 = (**(code **)(**(long **)(lVar8 + 0x4160) + 0x518))(),
                       (uVar13 & 1) == 0)) {
                      lVar16 = 0;
                    }
                    else {
                      lVar16 = *(long *)(lVar8 + 0x4160);
                    }
                    FUN_71003a9ab0(&local_b0,lVar16);
                    puVar4 = local_a8;
                    if ((local_a8 != (undefined8 *)0x0) &&
                       (uVar13 = (**(code **)*local_a8)(local_a8), (uVar13 & 1) == 0)) {
                      lVar16 = puVar4[4];
                      plVar10 = *(long **)(lVar16 + 0xb0);
                      uVar6 = (**(code **)(*plVar10 + 0x150))(plVar10,0);
                      plVar10 = *(long **)(lVar16 + 0xb0);
                      iVar7 = (**(code **)(*plVar10 + 0x158))(plVar10,0);
                      if (((uVar6 | 2) != 3) && (iVar7 == 0)) {
                        param_3 = extraout_x1_13;
                        for (lVar16 = *(long *)(lVar15 + 8); lVar15 != lVar16;
                            lVar16 = *(long *)(lVar16 + 8)) {
                          iVar7 = 0x50000000;
                          if (*(long *)(lVar8 + 0x4150) != 0) {
                            iVar7 = 0x50000000;
                            if (*(long **)(lVar8 + 0x4160) != (long *)0x0) {
                              auVar22 = (**(code **)(**(long **)(lVar8 + 0x4160) + 0x518))();
                              param_3 = auVar22._8_8_;
                              iVar7 = 0x50000000;
                              if ((auVar22._0_8_ & 1) != 0) {
                                iVar7 = *(int *)(*(long *)(lVar8 + 0x4160) + 8);
                              }
                            }
                          }
                          if (iVar7 == *(int *)(lVar16 + 0x14)) goto LAB_7102f8ab00;
                        }
                      }
                    }
                    if (((*(ulong *)(lVar8 + 0x4150) < 2) ||
                        (*(long **)(lVar8 + 0x4168) == (long *)0x0)) ||
                       (uVar13 = (**(code **)(**(long **)(lVar8 + 0x4168) + 0x518))(),
                       (uVar13 & 1) == 0)) {
                      lVar16 = 0;
                    }
                    else {
                      lVar16 = *(long *)(lVar8 + 0x4168);
                    }
                    FUN_71003a9ab0(&local_b0,lVar16);
                    puVar4 = local_a8;
                    if ((local_a8 != (undefined8 *)0x0) &&
                       (uVar13 = (**(code **)*local_a8)(local_a8), (uVar13 & 1) == 0)) {
                      lVar16 = puVar4[4];
                      plVar10 = *(long **)(lVar16 + 0xb0);
                      uVar6 = (**(code **)(*plVar10 + 0x150))(plVar10,0);
                      plVar10 = *(long **)(lVar16 + 0xb0);
                      iVar7 = (**(code **)(*plVar10 + 0x158))(plVar10,0);
                      if ((uVar6 | 2) != 3 && iVar7 == 0) {
                        param_3 = extraout_x1_14;
                        for (lVar16 = *(long *)(lVar15 + 8); lVar15 != lVar16;
                            lVar16 = *(long *)(lVar16 + 8)) {
                          iVar7 = 0x50000000;
                          if (1 < *(ulong *)(lVar8 + 0x4150)) {
                            iVar7 = 0x50000000;
                            if (*(long **)(lVar8 + 0x4168) != (long *)0x0) {
                              auVar22 = (**(code **)(**(long **)(lVar8 + 0x4168) + 0x518))();
                              param_3 = auVar22._8_8_;
                              iVar7 = 0x50000000;
                              if ((auVar22._0_8_ & 1) != 0) {
                                iVar7 = *(int *)(*(long *)(lVar8 + 0x4168) + 8);
                              }
                            }
                          }
                          if (iVar7 == *(int *)(lVar16 + 0x14)) goto LAB_7102f8ab00;
                        }
                      }
                    }
                    if (((*(ulong *)(lVar8 + 0x4150) < 3) ||
                        (*(long **)(lVar8 + 0x4170) == (long *)0x0)) ||
                       (uVar13 = (**(code **)(**(long **)(lVar8 + 0x4170) + 0x518))(),
                       (uVar13 & 1) == 0)) {
                      lVar16 = 0;
                    }
                    else {
                      lVar16 = *(long *)(lVar8 + 0x4170);
                    }
                    FUN_71003a9ab0(&local_b0,lVar16);
                    puVar4 = local_a8;
                    param_3 = extraout_x1_15;
                    if (local_a8 != (undefined8 *)0x0) {
                      auVar22 = (**(code **)*local_a8)(local_a8);
                      param_3 = auVar22._8_8_;
                      if ((auVar22._0_8_ & 1) == 0) {
                        lVar16 = puVar4[4];
                        plVar10 = *(long **)(lVar16 + 0xb0);
                        uVar6 = (**(code **)(*plVar10 + 0x150))(plVar10,0);
                        plVar10 = *(long **)(lVar16 + 0xb0);
                        iVar7 = (**(code **)(*plVar10 + 0x158))(plVar10,0);
                        param_3 = extraout_x1_16;
                        if ((uVar6 | 2) != 3 && iVar7 == 0) {
                          for (lVar16 = *(long *)(lVar15 + 8); lVar15 != lVar16;
                              lVar16 = *(long *)(lVar16 + 8)) {
                            iVar7 = 0x50000000;
                            if (2 < *(ulong *)(lVar8 + 0x4150)) {
                              iVar7 = 0x50000000;
                              if (*(long **)(lVar8 + 0x4170) != (long *)0x0) {
                                auVar22 = (**(code **)(**(long **)(lVar8 + 0x4170) + 0x518))();
                                param_3 = auVar22._8_8_;
                                iVar7 = 0x50000000;
                                if ((auVar22._0_8_ & 1) != 0) {
                                  iVar7 = *(int *)(*(long *)(lVar8 + 0x4170) + 8);
                                }
                              }
                            }
                            if (iVar7 == *(int *)(lVar16 + 0x14)) goto LAB_7102f8ab00;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            lVar8 = *plVar9;
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(lVar8 + 0xa0));
        }
      }
LAB_7102f8aaf0:
      plVar19 = plVar19 + 1;
    } while (plVar19 != (long *)(param_2 + 0xcea8));
  }
LAB_7102f89f10:
  if ((*(int *)(param_2 + 0xf28) == 4) || (lVar15 = *(long *)(param_2 + 0xcad0), lVar15 == 0)) {
    uVar6 = *(uint *)(param_2 + 0xcd94);
  }
  else {
    fVar21 = 0.0;
    if ((*(char *)(lVar15 + 0xe0) != '\0') && (fVar21 = 0.0, *(long *)(lVar15 + 200) != 0)) {
      fVar21 = *(float *)(*(long *)(lVar15 + 200) + 0x3c);
    }
    if (*(float *)(param_2 + 0xcdb0) <= fVar21) {
      uVar6 = 0;
    }
    else {
      lVar15 = 0;
      switch(*(undefined4 *)(param_2 + 0xcd98)) {
      case 0:
        lVar15 = 1;
        if (*(int *)(param_2 + 0xf50) == 1) {
          lVar15 = 2;
        }
        break;
      case 1:
        break;
      case 2:
        lVar15 = 3;
        break;
      case 3:
        lVar15 = 4;
        break;
      case 4:
        lVar15 = 6;
        break;
      case 5:
        lVar15 = 5;
        break;
      case 6:
        lVar15 = 7;
        break;
      case 7:
        lVar15 = 8;
        break;
      default:
        uVar6 = 8;
        if (*(int *)(param_2 + 0xf28) != 5) {
          uVar6 = 9;
        }
        goto LAB_7102f89f94;
      }
      uVar6 = (&DAT_710455be88)[lVar15];
    }
  }
LAB_7102f89f94:
  if (*(uint *)(param_2 + 0xcf0c) == uVar6) goto LAB_7102f8a3bc;
  if (0x1a < uVar6) {
LAB_7102f8ab30:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pbVar11 = *(byte **)((ulong)uVar6 * 8 + 0x710515b108);
  uVar12 = 0;
  if (pbVar11 != (byte *)0x0) {
    FUN_71025f7350(*(long *)(*(long *)(param_2 + 0x318) + 0x10),pbVar11);
    *(undefined4 *)(*(long *)(*(long *)(param_2 + 0x318) + 0x10) + 0x48) = 0;
    uVar12 = extraout_x1;
  }
  *(uint *)(param_2 + 0xcf0c) = uVar6;
  lVar15 = *(long *)(param_2 + 0xce78);
  if (lVar15 != 0) {
    *(bool *)(lVar15 + 0x110) = uVar6 == 0;
    FUN_71025e9d50((long *)(lVar15 + 0x108),uVar12,(long ****)param_4,param_5,param_6,param_7,
                   param_8,param_9);
    uVar12 = extraout_x1_00;
  }
  lVar15 = *(long *)(param_2 + 0xce80);
  if (lVar15 != 0) {
    if (uVar6 - 1 < 8) {
      *(undefined1 *)(lVar15 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar15 + 0x108),uVar12,(long ****)param_4,param_5,param_6,param_7,
                     param_8,param_9);
      lVar15 = *(long *)(param_2 + 0xce80);
      uVar12 = extraout_x1_02;
      if (lVar15 != 0) {
        if ((*(char *)(lVar15 + 0xe0) != '\0') && (*(long *)(lVar15 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar15 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(lVar15 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar15 + 0xd8) + 0x21) = 1;
        }
        if (*(char *)(lVar15 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar15 + 0xb0) + 0x10) = 0;
        }
        lVar15 = *(long *)(param_2 + 0xce80);
        if (lVar15 != 0) {
          *(byte *)(lVar15 + 0x118) = *(byte *)(lVar15 + 0x118) | 1;
        }
      }
    }
    else {
      *(byte *)(lVar15 + 0x118) = *(byte *)(lVar15 + 0x118) | 1;
      lVar8 = *(long *)(param_2 + 0xce80);
      lVar15 = 0;
      if (lVar8 != 0) {
        *(undefined1 *)(lVar8 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar8 + 0x108),uVar12,(long ****)param_4,param_5,param_6,param_7,
                       param_8,param_9);
        lVar15 = *(long *)(param_2 + 0xce80);
      }
      FUN_710260fdd0(0,lVar15,1);
      lVar15 = *(long *)(param_2 + 0xce80);
      uVar12 = extraout_x1_01;
      if (lVar15 != 0) {
        if ((*(char *)(lVar15 + 0xe0) != '\0') && (*(long *)(lVar15 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar15 + 200) + 0x30) = 0;
        }
        if (*(long *)(lVar15 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar15 + 0xd8) + 0x21) = 0;
        }
        if (*(char *)(lVar15 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar15 + 0xb0) + 0x10) = 1;
        }
      }
    }
  }
  lVar15 = *(long *)(param_2 + 0xce88);
  plVar9 = (long *)(param_2 + 0xce88);
  if (lVar15 == 0) {
LAB_7102f8a218:
    lVar15 = *(long *)(param_2 + 0x318);
    if (uVar6 - 10 < 7) {
      FUN_7102633800(lVar15,(long *********)"reflection_cubemap_beamshadow",param_4,param_5,param_6,
                     param_7,param_8,param_9);
      FUN_7102633a10(*(long *)(param_2 + 0x318),(long *********)"chara_beamshadow",1,param_5,param_6
                     ,param_7,param_8,param_9);
      param_4 = (undefined **)0x1;
      FUN_7102633b90(*(long *)(param_2 + 0x318),(long *********)"stage_beamshadow",1,param_5,param_6
                     ,param_7,param_8,param_9);
      puVar3 = DAT_710532ebd8;
      param_3 = extraout_x1_05;
      for (puVar1 = DAT_710532ebd0; puVar1 != puVar3; puVar1 = puVar1 + 1) {
        if ((*puVar1 & 0xffffffffff) != 0) {
          for (plVar9 = *(long **)(*(long *)(param_2 + 0x310) + 0xd0);
              plVar9 != *(long **)(*(long *)(param_2 + 0x310) + 0xd8); plVar9 = plVar9 + 2) {
            if ((*(uint *)(plVar9 + 1) < 2) &&
               (lVar15 = *plVar9, (*puVar1 & 0xffffffffff) == *(ulong *)(lVar15 + 0x68))) {
              if ((lVar15 != 0) && (*(char *)(lVar15 + 0xe0) != '\0')) {
                param_4 = (undefined **)0x1;
                local_b0 = "chara_beamshadow";
                FUN_71026527b0(*(undefined8 **)(lVar15 + 0xb8),&local_b0,(long *********)0x1,param_5
                               ,param_6,param_7,param_8,param_9);
                param_3 = extraout_x1_06;
              }
              break;
            }
          }
        }
      }
      goto LAB_7102f8a3bc;
    }
  }
  else {
    if (7 < uVar6 - 1) {
      *(undefined1 *)(lVar15 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar15 + 0x108),uVar12,(long ****)param_4,param_5,param_6,param_7,
                     param_8,param_9);
      lVar15 = *plVar9;
      if (lVar15 != 0) {
        if ((*(char *)(lVar15 + 0xe0) != '\0') && (*(long *)(lVar15 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar15 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(lVar15 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar15 + 0xd8) + 0x21) = 1;
        }
        if (*(char *)(lVar15 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar15 + 0xb0) + 0x10) = 0;
        }
        lVar15 = *plVar9;
        if (lVar15 != 0) {
          *(byte *)(lVar15 + 0x118) = *(byte *)(lVar15 + 0x118) | 1;
        }
      }
      goto LAB_7102f8a218;
    }
    *(byte *)(lVar15 + 0x118) = *(byte *)(lVar15 + 0x118) | 1;
    lVar8 = *plVar9;
    lVar15 = 0;
    if (lVar8 != 0) {
      *(undefined1 *)(lVar8 + 0x110) = 1;
      FUN_71025e9d50((long *)(lVar8 + 0x108),uVar12,(long ****)param_4,param_5,param_6,param_7,
                     param_8,param_9);
      lVar15 = *plVar9;
    }
    FUN_710260fdd0(0,lVar15,1);
    lVar15 = *plVar9;
    if (lVar15 != 0) {
      if ((*(char *)(lVar15 + 0xe0) != '\0') && (*(long *)(lVar15 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar15 + 200) + 0x30) = 0;
      }
      if (*(long *)(lVar15 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar15 + 0xd8) + 0x21) = 0;
      }
      if (*(char *)(lVar15 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar15 + 0xb0) + 0x10) = 1;
      }
    }
    lVar15 = *(long *)(param_2 + 0x318);
  }
  FUN_7102633800(lVar15,(long *********)"reflection_cubemap",param_4,param_5,param_6,param_7,param_8
                 ,param_9);
  FUN_7102633a10(*(long *)(param_2 + 0x318),(long *********)"chara",1,param_5,param_6,param_7,
                 param_8,param_9);
  param_4 = (undefined **)0x1;
  FUN_7102633b90(*(long *)(param_2 + 0x318),(long *********)"stage",1,param_5,param_6,param_7,
                 param_8,param_9);
  puVar3 = DAT_710532ebd8;
  param_3 = extraout_x1_03;
  for (puVar1 = DAT_710532ebd0; puVar1 != puVar3; puVar1 = puVar1 + 1) {
    if ((*puVar1 & 0xffffffffff) != 0) {
      for (plVar9 = *(long **)(*(long *)(param_2 + 0x310) + 0xd0);
          plVar9 != *(long **)(*(long *)(param_2 + 0x310) + 0xd8); plVar9 = plVar9 + 2) {
        if ((*(uint *)(plVar9 + 1) < 2) &&
           (lVar15 = *plVar9, (*puVar1 & 0xffffffffff) == *(ulong *)(lVar15 + 0x68))) {
          if ((lVar15 != 0) && (*(char *)(lVar15 + 0xe0) != '\0')) {
            param_4 = (undefined **)0x1;
            local_b0 = "chara";
            FUN_71026527b0(*(undefined8 **)(lVar15 + 0xb8),&local_b0,(long *********)0x1,param_5,
                           param_6,param_7,param_8,param_9);
            param_3 = extraout_x1_04;
          }
          break;
        }
      }
    }
  }
LAB_7102f8a3bc:
  lVar15 = *(long *)(param_2 + 0xce88);
  if ((lVar15 != 0) && (*(char *)(lVar15 + 0x110) != '\0')) {
    local_c0 = *(undefined8 *)(*DAT_71052b8f00 + 0xeb0);
    puStack_e8 = (undefined8 *)0x0;
    local_f0 = (char *)0x3f800000;
    uStack_d8 = 0;
    local_e0 = 0x3f80000000000000;
    uStack_c8 = 0x3f800000;
    local_d0 = 0;
    local_b8 = 0x3f80000000000000;
    (**(code **)(**(long **)(lVar15 + 0x90) + 0x148))(*(long **)(lVar15 + 0x90),&local_f0);
    lVar15 = *(long *)(lVar15 + 0xd8);
    param_3 = extraout_x1_07;
    if (lVar15 != 0) {
      local_98 = uStack_d8;
      local_a0 = local_e0;
      local_a8 = puStack_e8;
      local_b0 = local_f0;
      local_78 = local_b8;
      local_80 = local_c0;
      local_88 = uStack_c8;
      local_90 = local_d0;
      if (*(char *)(*(long *)(lVar15 + 8) + 0xa8) != '\0') {
        plVar9 = *(long **)(*(long *)(lVar15 + 8) + 0x48);
        (**(code **)(*plVar9 + 0x20))(plVar9,&local_b0);
        param_3 = extraout_x1_08;
      }
      *(undefined1 *)(lVar15 + 0x20) = 1;
    }
  }
  if (*(char *)(param_2 + 53000) == '\0') {
    piVar20 = (int *)(param_2 + 0xcb0c);
    do {
      uVar6 = piVar20[-1];
      uVar13 = (ulong)uVar6;
      if (uVar6 != 0xffffffff) {
        if (0x41 < uVar6) goto LAB_7102f8ab30;
        param_3 = (ulong)*(uint *)(&DAT_710455bfa0 + uVar13 * 0xc);
        if (*(uint *)(&DAT_710455bfa0 + uVar13 * 0xc) != 0xffffffff) {
          uVar17 = (ulong)*(uint *)(&DAT_710455bfa4 + uVar13 * 0xc);
          uVar18 = *(long *)(param_2 + 0xcaf0) - *(long *)(param_2 + 0xcae8) >> 5;
          if (uVar17 < uVar18) {
            if ((*piVar20 == 1) &&
               (uVar17 = (ulong)*(uint *)(&DAT_710455bfa8 + uVar13 * 0xc), uVar18 <= uVar17)) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            plVar9 = *(long **)(**(long **)(param_2 + 0xcae0) + 8);
            if (plVar9 != (long *)0x0) {
              param_4 = (undefined **)
                        (ulong)*(uint *)(*(long *)(param_2 + 0xcae8) + uVar17 * 0x20 + 8);
              pcVar14 = *(code **)(*plVar9 + 0x58);
LAB_7102f8a564:
              (*pcVar14)();
              param_3 = extraout_x1_09;
            }
          }
          else {
            plVar9 = *(long **)(**(long **)(param_2 + 0xcae0) + 8);
            if (plVar9 != (long *)0x0) {
              pcVar14 = *(code **)(*plVar9 + 0x58);
              param_4 = (undefined **)&DAT_ffffffff;
              goto LAB_7102f8a564;
            }
          }
        }
      }
      piVar2 = piVar20 + 1;
      piVar20[-1] = -1;
      piVar20[0] = 0;
      piVar20 = piVar20 + 2;
    } while (piVar2 != (int *)(param_2 + 0xcc08));
  }
  FUN_71025de7b0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
LAB_7102f8ab00:
  FUN_7102f91de0(param_2 + 0xf10,param_3,(long ****)param_4,param_5,param_6,param_7,param_8,param_9)
  ;
  *(undefined1 *)(param_2 + 53000) = 1;
  FUN_7102624c20(*(undefined4 *)(param_2 + 0xcf10),*(undefined4 *)(param_2 + 0xcf14),
                 *(long *)(param_2 + 0x308));
  param_3 = extraout_x1_17;
  goto LAB_7102f89f10;
}

