// addr:      71017ad770
// offset:    0x17ad770
// name:      FUN_71017ad770
// mangled:   
// signature: undefined __cdecl FUN_71017ad770(undefined8 param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, byte * * * * param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x0071017ada2c) */
/* WARNING: Removing unreachable block (ram,0x0071017ade8c) */
/* WARNING: Removing unreachable block (ram,0x0071017adfdc) */
/* WARNING: Type propagation algorithm not settling */

void FUN_71017ad770(undefined8 param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,byte ****param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  uint *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  void *__dest;
  uint *extraout_x1;
  uint *extraout_x1_00;
  uint *extraout_x1_01;
  uint *puVar12;
  uint *extraout_x1_02;
  uint *extraout_x1_03;
  uint *extraout_x1_04;
  long ****pppplVar13;
  Uid *pUVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  long **pplVar19;
  code *pcVar20;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  long *plVar24;
  long lVar25;
  byte *pbVar26;
  long lVar27;
  undefined4 *puVar28;
  uint uVar29;
  long lVar30;
  undefined8 *puVar31;
  ulong uVar32;
  ulong *puVar33;
  long *plVar34;
  long **********__n;
  undefined8 *puVar35;
  uint uVar36;
  uint *puVar37;
  uint *puVar38;
  void *__src;
  undefined8 *local_3e0;
  ulong local_3d8;
  undefined8 local_3b0;
  undefined4 local_3a8;
  byte local_3a4 [4];
  long local_3a0;
  undefined8 local_2a0;
  byte local_298 [28];
  undefined8 local_27c;
  undefined8 local_270;
  undefined7 uStack_268;
  undefined1 local_261;
  undefined7 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  long alStack_190 [4];
  long *local_170;
  long alStack_160 [4];
  long *local_140;
  long alStack_130 [4];
  long *local_110;
  long alStack_100 [4];
  long *local_e0;
  long alStack_d0 [4];
  long *local_b0;
  long ***local_a0;
  ulong *puStack_98;
  long ****local_80;
  ulong local_70 [2];
  
  if (((DAT_71053144d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_71053144d8), iVar7 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  uVar36 = (uint)DAT_710530a96c._3_1_;
  uVar8 = FUN_71032b23e0(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x178) + 8),0xd56784f97
                        );
  plVar15 = *(long **)(*DAT_7105314510 + 0x298);
  if (((DAT_71053144d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_71053144d8), iVar7 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  bVar1 = DAT_710530a987;
  if (DAT_71053050f0 < 0x4090000) {
    if ((DAT_71053050f0 != 0x2030100) && (DAT_71053050f0 != 0x4040000)) goto LAB_71017ad848;
  }
  else if ((DAT_71053050f0 != 0x4090000) &&
          ((DAT_71053050f0 != 0x5040000 && (DAT_71053050f0 != 0x7010200)))) {
LAB_71017ad848:
    if (uVar36 - 3 < 5) {
      lVar30 = *(long *)(DAT_710532f730 + 8);
      uVar9 = FUN_71032b1e40(*(long *)(lVar30 + 0x178),uVar8);
      if ((int)uVar9 < 0) {
        param_3 = (undefined **)0x0;
      }
      else {
        uVar9 = FUN_71032b1e40(*(long *)(lVar30 + 0x178),uVar8);
        param_3 = (undefined **)
                  (ulong)((1 << (ulong)((uint)uVar9 & 0x1f) &
                          *(uint *)((long)&DAT_710530a9b0 + (uVar9 >> 5 & 0x7ffffff) * 4)) != 0);
      }
      FUN_71017a9c20(0x710530e2b0,bVar1,(long **********)param_3,param_4,param_5,param_6,param_7,
                     param_8);
    }
  }
  if (DAT_710530a987 - 1 < 10) {
    uVar21 = 3;
LAB_71017ad8f4:
    bVar4 = (uVar8 & 0xffffffffff) != 0;
    bVar5 = uVar8 >> 0x38 == 0x69;
    local_3e0 = &DAT_710530e2b8;
    local_3d8 = 0x69ffff0000000000;
    uVar9 = 0;
    do {
      if (2 < uVar9) goto LAB_71017aefb8;
      puVar33 = &DAT_710530a7c0 + uVar9 * 4;
      param_3 = (undefined **)*puVar33;
      uVar16 = local_3d8;
      if ((((ulong)param_3 & 0xff00000000000000) == 0x6900000000000000 &&
           ((ulong)param_3 & 0xffffffffff) != 0) &&
         (((&DAT_710530a7b8)[uVar9 * 4] & 0xff00000000000000) == 0x6900000000000000 &&
          ((&DAT_710530a7b8)[uVar9 * 4] & 0xffffffffff) != 0)) {
        iVar7 = (&DAT_710530a7c8)[uVar9 * 8];
        if (iVar7 == 2) {
          puVar31 = &DAT_710530e2e8;
        }
        else {
          puVar31 = local_3e0;
          if (iVar7 == 1) {
            puVar31 = &DAT_710530e2d0;
          }
        }
        lVar30 = FUN_71017a9500((ulong *)*puVar31,(ulong *)puVar31[1],(ulong)param_3);
        if (lVar30 != puVar31[1]) {
          param_3 = (undefined **)0x0;
          puVar31[1] = lVar30;
        }
        if (iVar7 == 0) {
          uVar32 = *puVar33;
          uVar10 = FUN_71032b23e0(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x178) + 8),
                                  0xd56784f97);
          if (((((uVar32 & 0xff00000000000000) == 0x6900000000000000) &&
               ((uVar32 & 0xffffffffff) != 0)) &&
              ((uVar10 & 0xff00000000000000) == 0x6900000000000000)) &&
             ((uVar10 & 0xffffffffff) != 0)) {
            if (((uVar10 ^ uVar32) & 0xffffffffff) == 0) {
LAB_71017adae0:
              DAT_710530e300 = 1;
            }
          }
          else if (((uVar10 & 0xffffffffff) != 0 &&
                   (uVar10 & 0xff00000000000000) == 0x6900000000000000) ==
                   ((uVar32 & 0xff00000000000000) == 0x6900000000000000 &&
                   (uVar32 & 0xffffffffff) != 0)) goto LAB_71017adae0;
        }
        if (uVar36 == 5) {
          if ((DAT_710530e2d0 == DAT_710530e2d8) && (DAT_710530e2e8 == DAT_710530e2f0)) {
            param_3 = (undefined **)&DAT_710530a9b0;
            DAT_710530e2b0 = 0x69ffff0000000000;
            DAT_710530e2d8 = DAT_710530e2d0;
            DAT_710530e2f0 = DAT_710530e2e8;
            DAT_710530e2c0 = DAT_710530e2b8;
            FUN_71017a91b0(0x710530e2b0,0,0x710530a9b0,param_4,param_5,param_6,param_7,param_8);
            FUN_71017a91b0(0x710530e2b0,1,0x710530a9b0,param_4,param_5,param_6,param_7,param_8);
            FUN_71017a91b0(0x710530e2b0,2,0x710530a9b0,param_4,param_5,param_6,param_7,param_8);
          }
        }
        else {
          iVar7 = (&DAT_710530a7c8)[uVar9 * 8];
          plVar11 = &DAT_710530e2d0;
          if (iVar7 != 1) {
            plVar11 = &DAT_710530e2b8;
          }
          plVar18 = &DAT_710530e2e8;
          if (iVar7 != 2) {
            plVar18 = plVar11;
          }
          if (*plVar18 == plVar18[1]) {
            puVar31 = &DAT_710530e2b8;
            DAT_710530e2b0 = 0x69ffff0000000000;
            if (iVar7 == 2) {
              puVar31 = &DAT_710530e2e8;
            }
            else if (iVar7 == 1) {
              puVar31 = &DAT_710530e2d0;
            }
            puVar31[1] = *puVar31;
            param_3 = (undefined **)&DAT_710530a9b0;
            FUN_71017a91b0(0x710530e2b0,iVar7,0x710530a9b0,param_4,param_5,param_6,param_7,param_8);
          }
          if ((uVar36 == 3) && (uVar16 = *puVar33, (byte)(DAT_710530a987 - 1) < 10 && uVar9 != 0)) {
            uVar16 = local_3d8;
          }
        }
      }
      local_3d8 = uVar16;
      uVar16 = *puVar33;
      if ((uVar16 & 0xff00000000000000) == 0x6900000000000000 && (uVar16 & 0xffffffffff) != 0) {
        if ((bVar5 && bVar4) && (((uVar8 ^ uVar16) & 0xffffffffff) == 0)) goto LAB_71017adc9c;
      }
      else if (!bVar5 || !bVar4) {
LAB_71017adc9c:
        if ((((&DAT_710530a828)[uVar9 * 8] != (&DAT_710530a830)[uVar9 * 8]) &&
            (puVar23 = (uint *)((long)&DAT_710530a8f8 + uVar9 * 0x30 + 4), *puVar23 != 0)) &&
           ((plVar11 = *(long **)(*(long *)(DAT_710532f7d0 + 8) + 0x18), plVar11 == (long *)0x0 ||
            (uVar16 = (**(code **)(*plVar11 + 0x50))(), (uVar16 & 1) == 0)))) {
          lVar30 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
          puVar12 = (uint *)0x0;
          if (((*(long *)(lVar30 + 0x9ff8) == 0) ||
              (uVar6 = FUN_71016f6340(lVar30 + 0xa010,*(long *)(lVar30 + 0x9ff8)),
              puVar12 = extraout_x1, (~uVar6 & 0xff) == 0)) ||
             ((uint)*(byte *)(lVar30 + uVar9 * 0x108 + 0x247e1) == (uVar6 & 0xff))) {
            puVar2 = DAT_710530e328;
            uVar6 = *puVar23;
            puVar38 = DAT_710530e320;
            if (DAT_710530e320 != DAT_710530e328) {
              uVar29 = *DAT_710530e320;
              while (uVar29 != uVar6) {
                puVar38 = (uint *)((long)puVar38 + 4);
                if (DAT_710530e328 == puVar38) goto LAB_71017adea0;
                uVar29 = *puVar38;
              }
            }
            if ((puVar38 != DAT_710530e328) && (puVar22 = puVar38 + 1, puVar22 != DAT_710530e328)) {
              uVar16 = (long)DAT_710530e328 + (-8 - (long)puVar38);
              if (((uint)uVar16 >> 2 & 1) == 0) {
                puVar37 = puVar38;
                if (*puVar22 != uVar6) {
                  puVar37 = puVar38 + 1;
                  *puVar38 = *puVar22;
                }
                puVar22 = puVar38 + 2;
                puVar38 = puVar37;
              }
              if (3 < uVar16) {
                uVar16 = (long)puVar2 + (-8 - (long)puVar22);
                if (((uint)uVar16 >> 3 & 1) == 0) {
                  puVar37 = puVar38;
                  if (*puVar22 != uVar6) {
                    puVar37 = puVar38 + 1;
                    *puVar38 = *puVar22;
                  }
                  puVar38 = puVar37;
                  if (puVar22[1] != uVar6) {
                    puVar38 = puVar37 + 1;
                    *puVar37 = puVar22[1];
                  }
                  puVar22 = puVar22 + 2;
                }
                if (7 < uVar16) {
                  do {
                    puVar37 = puVar38;
                    if (*puVar22 != uVar6) {
                      puVar37 = puVar38 + 1;
                      *puVar38 = *puVar22;
                    }
                    puVar38 = puVar37;
                    if (puVar22[1] != uVar6) {
                      puVar38 = puVar37 + 1;
                      *puVar37 = puVar22[1];
                    }
                    puVar37 = puVar38;
                    if (puVar22[2] != uVar6) {
                      puVar37 = puVar38 + 1;
                      *puVar38 = puVar22[2];
                    }
                    puVar38 = puVar37;
                    if (puVar22[3] != uVar6) {
                      puVar38 = puVar37 + 1;
                      *puVar37 = puVar22[3];
                    }
                    puVar22 = puVar22 + 4;
                  } while (puVar22 != puVar2);
                }
              }
            }
            if (DAT_710530e328 != puVar38) {
              param_3 = (undefined **)0x0;
              puVar12 = DAT_710530e328;
              DAT_710530e328 = puVar38;
            }
LAB_71017adea0:
            puVar2 = DAT_710530e340;
            uVar6 = *puVar23;
            puVar38 = DAT_710530e338;
            if (DAT_710530e338 != DAT_710530e340) {
              uVar29 = *DAT_710530e338;
              while (uVar29 != uVar6) {
                puVar38 = (uint *)((long)puVar38 + 4);
                if (DAT_710530e340 == puVar38) goto LAB_71017adff0;
                uVar29 = *puVar38;
              }
            }
            if ((puVar38 != DAT_710530e340) && (puVar22 = puVar38 + 1, puVar22 != DAT_710530e340)) {
              uVar16 = (long)DAT_710530e340 + (-8 - (long)puVar38);
              if (((uint)uVar16 >> 2 & 1) == 0) {
                puVar37 = puVar38;
                if (*puVar22 != uVar6) {
                  puVar37 = puVar38 + 1;
                  *puVar38 = *puVar22;
                }
                puVar22 = puVar38 + 2;
                puVar38 = puVar37;
              }
              if (3 < uVar16) {
                uVar16 = (long)puVar2 + (-8 - (long)puVar22);
                if (((uint)uVar16 >> 3 & 1) == 0) {
                  puVar37 = puVar38;
                  if (*puVar22 != uVar6) {
                    puVar37 = puVar38 + 1;
                    *puVar38 = *puVar22;
                  }
                  puVar38 = puVar37;
                  if (puVar22[1] != uVar6) {
                    puVar38 = puVar37 + 1;
                    *puVar37 = puVar22[1];
                  }
                  puVar22 = puVar22 + 2;
                }
                if (7 < uVar16) {
                  do {
                    puVar37 = puVar38;
                    if (*puVar22 != uVar6) {
                      puVar37 = puVar38 + 1;
                      *puVar38 = *puVar22;
                    }
                    puVar38 = puVar37;
                    if (puVar22[1] != uVar6) {
                      puVar38 = puVar37 + 1;
                      *puVar37 = puVar22[1];
                    }
                    puVar37 = puVar38;
                    if (puVar22[2] != uVar6) {
                      puVar37 = puVar38 + 1;
                      *puVar38 = puVar22[2];
                    }
                    puVar38 = puVar37;
                    if (puVar22[3] != uVar6) {
                      puVar38 = puVar37 + 1;
                      *puVar37 = puVar22[3];
                    }
                    puVar22 = puVar22 + 4;
                  } while (puVar22 != puVar2);
                }
              }
            }
            if (DAT_710530e340 != puVar38) {
              param_3 = (undefined **)0x0;
              puVar12 = DAT_710530e340;
              DAT_710530e340 = puVar38;
            }
LAB_71017adff0:
            uVar6 = *puVar23;
            if (DAT_710530e350 != DAT_710530e358) {
              uVar29 = *DAT_710530e350;
              puVar38 = DAT_710530e350;
              while (uVar29 != uVar6) {
                puVar38 = puVar38 + 1;
                if (DAT_710530e358 == puVar38) goto LAB_71017ae074;
                uVar29 = *puVar38;
              }
              if (puVar38 != DAT_710530e358) {
                puVar12 = puVar38 + 1;
                param_3 = (undefined **)((long)DAT_710530e358 - (long)puVar12);
                lVar30 = (long)param_3 >> 2;
                if ((long **********)param_3 != (long **********)0x0) {
                  memmove(puVar38,puVar12,(size_t)param_3);
                  puVar12 = extraout_x1_00;
                }
                DAT_710530e358 = puVar38 + lVar30;
                uVar6 = *puVar23;
              }
            }
LAB_71017ae074:
            if (DAT_710530e368 != DAT_710530e370) {
              uVar29 = *DAT_710530e368;
              puVar23 = DAT_710530e368;
              while (uVar29 != uVar6) {
                puVar23 = puVar23 + 1;
                if (DAT_710530e370 == puVar23) goto LAB_71017ae0dc;
                uVar29 = *puVar23;
              }
              if (puVar23 != DAT_710530e370) {
                puVar12 = puVar23 + 1;
                param_3 = (undefined **)((long)DAT_710530e370 - (long)puVar12);
                lVar30 = (long)param_3 >> 2;
                if ((long **********)param_3 != (long **********)0x0) {
                  memmove(puVar23,puVar12,(size_t)param_3);
                  puVar12 = extraout_x1_01;
                }
                DAT_710530e370 = puVar23 + lVar30;
              }
            }
LAB_71017ae0dc:
            if (DAT_710530e320 == DAT_710530e328) {
              puVar31 = *(undefined8 **)(*DAT_7105314510 + 0x298);
              plVar11 = (long *)*puVar31;
              lVar30 = plVar11[3];
              lVar17 = plVar11[4];
              if (lVar30 == lVar17) {
                if (*plVar11 == plVar11[1]) goto LAB_71017ae208;
                lVar25 = plVar11[1] - *plVar11;
                lVar27 = 0x32198;
              }
              else {
                lVar25 = lVar17 - lVar30;
                lVar27 = 0x198;
              }
              uVar16 = 0;
              if (lVar27 != 0) {
                uVar16 = lVar25 / lVar27;
              }
              if (0 < (int)uVar16) {
                lVar25 = 0;
                uVar10 = 0;
                if (lVar30 != lVar17) goto LAB_71017ae18c;
LAB_71017ae1c0:
                lVar30 = *plVar11;
                if (lVar30 == plVar11[1]) goto LAB_71017ae200;
                if ((ulong)((plVar11[1] - lVar30) / 0x32198) <= uVar10) goto LAB_71017ae200;
                uVar6 = *(uint *)(lVar30 + uVar10 * 0x32198);
                puVar12 = (uint *)(ulong)uVar6;
                if (uVar6 == 0) goto LAB_71017ae200;
                do {
                  FUN_71017aa510(&DAT_710530e320,(int)puVar12,(long ****)param_3,param_4,param_5,
                                 param_6,param_7,param_8);
                  puVar12 = extraout_x1_02;
LAB_71017ae200:
                  while( true ) {
                    if ((uVar16 & 0xffffffff) - 1 == uVar10) goto LAB_71017ae208;
                    plVar11 = (long *)*puVar31;
                    lVar30 = plVar11[3];
                    lVar17 = plVar11[4];
                    uVar10 = uVar10 + 1;
                    lVar25 = lVar25 + 0x198;
                    if (lVar30 == lVar17) goto LAB_71017ae1c0;
LAB_71017ae18c:
                    uVar32 = (lVar17 - lVar30 >> 3) * -0x505050505050505;
                    if (uVar32 < uVar10 || uVar32 - uVar10 == 0) goto LAB_71017ae1c0;
                    puVar12 = (uint *)(ulong)*(uint *)(lVar30 + lVar25);
                    if (*(uint *)(lVar30 + lVar25) != 0) break;
                    puVar12 = (uint *)0x0;
                  }
                } while( true );
              }
            }
LAB_71017ae208:
            if (DAT_710530e350 == DAT_710530e358) {
              FUN_7101ebc290(&DAT_710530e350,puVar12,(long ****)param_3,param_4,param_5,param_6,
                             param_7,param_8);
              puVar12 = DAT_710530e350;
              param_3 = (undefined **)((long)DAT_710530e358 - (long)(DAT_710530e350 + 1));
              lVar30 = (long)param_3 >> 2;
              if ((long **********)param_3 != (long **********)0x0) {
                memmove(DAT_710530e350,DAT_710530e350 + 1,(size_t)param_3);
              }
              puVar12 = puVar12 + lVar30;
              DAT_710530e358 = puVar12;
              if (DAT_710530e350 != puVar12) {
                FUN_7101ebc6e0(DAT_710530e350,puVar12);
                puVar12 = extraout_x1_03;
              }
            }
            if (DAT_710530e338 == DAT_710530e340) {
              FUN_71017aa680(0x710530e320,puVar12,param_3,param_4,param_5,param_6,param_7,param_8);
              puVar12 = extraout_x1_04;
            }
            if (DAT_710530e368 == DAT_710530e370) {
              FUN_71017aa7f0(0x710530e320,puVar12,(long ****)param_3,param_4,param_5,param_6,param_7
                             ,param_8);
            }
            puVar23 = (uint *)((long)&DAT_710530a8f8 + uVar9 * 0x30 + 4);
            uVar6 = *puVar23;
            lVar30 = *plVar15;
            iVar7 = **(int **)**(undefined8 **)(*DAT_7105314510 + 0x1f8) + 1;
            **(int **)**(undefined8 **)(*DAT_7105314510 + 0x1f8) = iVar7;
            puVar12 = *(uint **)(lVar30 + 200);
            if (puVar12 == *(uint **)(lVar30 + 0xd0)) {
              __src = *(void **)(lVar30 + 0xc0);
              __n = (long **********)((long)puVar12 - (long)__src);
              uVar16 = ((long)__n >> 2) + 1;
              if (uVar16 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar17 = (long)*(uint **)(lVar30 + 0xd0) - (long)__src;
              if ((ulong)(lVar17 >> 2) < 0x1fffffffffffffff) {
                uVar10 = lVar17 >> 1;
                if (uVar16 <= uVar10) {
                  uVar16 = uVar10;
                }
                if (uVar16 != 0) {
                  if (uVar16 >> 0x3e == 0) goto LAB_71017ae35c;
                  goto LAB_71017aefb8;
                }
LAB_71017ae3bc:
                __dest = (void *)0x0;
              }
              else {
                uVar16 = 0x3fffffffffffffff;
LAB_71017ae35c:
                lVar17 = uVar16 * 4;
                if (lVar17 == 0) {
                  lVar17 = 1;
                }
                __dest = (void *)FUN_710392e290(0x10,lVar17,(long ****)param_3,param_4,param_5,
                                                param_6,param_7,param_8);
                if (__dest == (void *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_a0 = (long ***)((ulong)local_a0 & 0xffffffff00000000);
                    local_3b0._0_4_ = (undefined4)lVar17;
                    local_3b0._4_4_ = (uint)((ulong)lVar17 >> 0x20);
                    param_3 = (undefined **)&local_3b0;
                    uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
                    if (((uVar10 & 1) != 0) &&
                       (__dest = (void *)FUN_710392e290(0x10,lVar17,(long ****)param_3,param_4,
                                                        param_5,param_6,param_7,param_8),
                       __dest != (void *)0x0)) goto LAB_71017ae3c0;
                  }
                  goto LAB_71017ae3bc;
                }
              }
LAB_71017ae3c0:
              puVar12 = (uint *)((long)__dest + ((long)__n >> 2) * 4);
              *puVar12 = uVar6;
              if (0 < (long)__n) {
                memcpy(__dest,__src,(size_t)__n);
                param_3 = (undefined **)__n;
              }
              *(void **)(lVar30 + 0xc0) = __dest;
              *(uint **)(lVar30 + 200) = puVar12 + 1;
              *(void **)(lVar30 + 0xd0) = (void *)((long)__dest + uVar16 * 4);
              if (__src != (void *)0x0) {
                FUN_710392eb40((ulong)__src);
              }
            }
            else {
              *puVar12 = uVar6;
              *(long *)(lVar30 + 200) = *(long *)(lVar30 + 200) + 4;
            }
            plVar11 = (long *)(lVar30 + 0xe0);
            plVar34 = (long *)*plVar11;
            plVar18 = plVar11;
            if (plVar34 == (long *)0x0) {
LAB_71017ae45c:
              lVar17 = *plVar11;
            }
            else {
              plVar11 = (long *)(lVar30 + 0xe0);
              do {
                while (plVar18 = plVar34, *(uint *)((long)plVar18 + 0x1c) <= uVar6) {
                  if (uVar6 <= *(uint *)((long)plVar18 + 0x1c)) goto LAB_71017ae45c;
                  plVar11 = plVar18 + 1;
                  plVar34 = (long *)*plVar11;
                  if ((long *)*plVar11 == (long *)0x0) goto LAB_71017ae45c;
                }
                plVar11 = plVar18;
                plVar34 = (long *)*plVar18;
              } while ((long *)*plVar18 != (long *)0x0);
              lVar17 = *plVar18;
            }
            if (lVar17 == 0) {
              plVar34 = (long *)FUN_710392e290(0x10,0x28,(long ****)param_3,param_4,param_5,param_6,
                                               param_7,param_8);
              if (plVar34 == (long *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_a0 = (long ***)((ulong)local_a0 & 0xffffffff00000000);
                  local_3b0._0_4_ = 0x28;
                  local_3b0._4_4_ = 0;
                  param_3 = (undefined **)&local_3b0;
                  uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
                  if (((uVar16 & 1) != 0) &&
                     (plVar34 = (long *)FUN_710392e290(0x10,0x28,(long ****)param_3,param_4,param_5,
                                                       param_6,param_7,param_8),
                     plVar34 != (long *)0x0)) goto LAB_71017ae4c0;
                }
                plVar34 = (long *)0x0;
              }
LAB_71017ae4c0:
              *(uint *)((long)plVar34 + 0x1c) = uVar6;
              *(int *)(plVar34 + 4) = iVar7;
              *plVar34 = 0;
              plVar34[1] = 0;
              plVar34[2] = (long)plVar18;
              *plVar11 = (long)plVar34;
              if (**(long **)(lVar30 + 0xd8) != 0) {
                *(long *)(lVar30 + 0xd8) = **(long **)(lVar30 + 0xd8);
                plVar34 = (long *)*plVar11;
              }
              std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                        (*(long **)(lVar30 + 0xe0),plVar34);
              *(long *)(lVar30 + 0xe8) = *(long *)(lVar30 + 0xe8) + 1;
            }
            plVar11 = (long *)*plVar15;
            if (plVar11[0xb] != 0) {
              plVar34 = plVar11 + 10;
              plVar24 = (long *)*plVar34;
              plVar18 = plVar34;
              if (plVar24 != (long *)0x0) {
                do {
                  bVar3 = *(uint *)((long)plVar24 + 0x1c) < uVar6;
                  if (!bVar3) {
                    plVar18 = plVar24;
                  }
                  plVar24 = (long *)plVar24[bVar3];
                } while (plVar24 != (long *)0x0);
                if (((plVar18 != plVar34) && (*(uint *)((long)plVar18 + 0x1c) <= uVar6)) &&
                   (uVar16 = (ulong)(int)plVar18[4], (int)plVar18[4] != -1)) {
                  lVar30 = plVar11[3];
                  if (lVar30 == plVar11[4]) {
                    lVar30 = *plVar11;
                    if (lVar30 != plVar11[1]) {
                      uVar10 = (plVar11[1] - lVar30 >> 3) * 0x5adbe6e3d89936fb;
                      if (uVar10 < uVar16 || uVar10 - uVar16 == 0) goto LAB_71017aefc4;
                      if (*(short *)(lVar30 + uVar16 * 0x32198 + 4) == 2) {
                        lVar30 = lVar30 + uVar16 * 0x32198;
                        goto LAB_71017ae5a8;
                      }
                    }
                  }
                  else {
                    uVar10 = (plVar11[4] - lVar30 >> 3) * -0x505050505050505;
                    if (uVar10 < uVar16 || uVar10 - uVar16 == 0) {
LAB_71017aefc4:
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_out_of_range();
                    }
                    lVar30 = lVar30 + uVar16 * 0x198;
LAB_71017ae5a8:
                    *(int *)(lVar30 + 0x14c) = iVar7;
                  }
                }
              }
            }
            uVar6 = *puVar23;
            puVar35 = *(undefined8 **)(*DAT_7105314510 + 0x298);
            puVar31 = *(undefined8 **)(*DAT_7105314510 + 0x238);
            bVar3 = FUN_71017cf490(puVar35,uVar6);
            if (bVar3) {
              local_3b0._0_4_ = 0;
              memset(&local_3a8,0,0x10a);
              local_27c = 1;
              local_270 = 0xd9ffff0000000000;
              uStack_260 = 0;
              uStack_268 = 0;
              local_261 = 0;
              param_3 = (undefined **)&local_3b0;
              local_228 = 0;
              uStack_220 = 0;
              local_238 = 0;
              uStack_230 = 0;
              local_248 = 0;
              uStack_240 = 0;
              local_258 = 0;
              uStack_250 = 0;
              uVar16 = FUN_71017ceba0(puVar35,uVar6,(undefined4 *)param_3);
              if ((local_3a0 != 0) && ((uVar16 & 1) != 0)) {
                lVar30 = *(long *)*puVar31;
                uVar16 = 0;
                do {
                  plVar11 = (long *)(lVar30 + 0xb40 + uVar16 * 8);
                  uVar6 = (uint)uVar16;
                  if (*plVar11 == local_3a0) {
                    iVar7 = *(int *)(lVar30 + (uVar16 & 0xffffffff) * 4 + 0xe10) + 1;
                    if (uVar6 == 0) goto LAB_71017ae7d8;
                    goto LAB_71017ae794;
                  }
                  uVar10 = uVar16;
                  if (plVar11[1] == local_3a0) {
LAB_71017ae778:
                    uVar16 = (ulong)((int)uVar10 + 1);
LAB_71017ae788:
                    iVar7 = *(int *)(lVar30 + uVar16 * 4 + 0xe10) + 1;
                    goto LAB_71017ae794;
                  }
                  uVar29 = uVar6;
                  if (plVar11[2] == local_3a0) {
LAB_71017ae784:
                    uVar16 = (ulong)(uVar29 + 2);
                    goto LAB_71017ae788;
                  }
                  if (plVar11[3] == local_3a0) {
                    uVar16 = (ulong)(uVar6 + 3);
                    goto LAB_71017ae788;
                  }
                  uVar29 = uVar6 + 3;
                  uVar10 = (ulong)uVar29;
                  if (plVar11[4] == local_3a0) goto LAB_71017ae778;
                  if (plVar11[5] == local_3a0) goto LAB_71017ae784;
                  if (plVar11[6] == local_3a0) {
                    uVar16 = (ulong)(uVar6 + 6);
                    goto LAB_71017ae788;
                  }
                  if (plVar11[7] == local_3a0) {
                    uVar10 = (ulong)(uVar6 + 6);
                    goto LAB_71017ae778;
                  }
                  if (plVar11[8] == local_3a0) {
                    uVar29 = uVar6 + 6;
                    goto LAB_71017ae784;
                  }
                  uVar16 = uVar16 + 9;
                } while (plVar11 + 9 != (long *)(lVar30 + 0xe10));
                uVar16 = 0x59;
                iVar7 = 1;
LAB_71017ae794:
                lVar17 = (uVar16 & 0xffffffff) + 1;
                puVar31 = (undefined8 *)(lVar30 + (uVar16 & 0xffffffff) * 8 + 0xb40);
                puVar28 = (undefined4 *)(lVar30 + (uVar16 & 0xffffffff) * 4 + 0xe10);
                do {
                  *puVar31 = puVar31[-1];
                  lVar17 = lVar17 + -1;
                  *puVar28 = puVar28[-1];
                  puVar31 = puVar31 + -1;
                  puVar28 = puVar28 + -1;
                } while (1 < lVar17);
LAB_71017ae7d8:
                *(long *)(lVar30 + 0xb40) = local_3a0;
                *(int *)(lVar30 + 0xe10) = iVar7;
              }
            }
          }
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar21);
    if (((local_3d8 & 0xff00000000000000) == 0x6900000000000000) &&
       ((local_3d8 & 0xffffffffff) != 0)) {
      DAT_710530e2b0 = local_3d8;
    }
  }
  else if (-1 < DAT_710530a968) {
    uVar21 = DAT_710530a968 + 1;
    goto LAB_71017ad8f4;
  }
  lVar30 = *plVar15;
  puVar33 = (ulong *)(lVar30 + 0xa0);
  if (*puVar33 != 0) {
    FUN_71017ce2a0(puVar33);
  }
  if (*(long *)(lVar30 + 0xc0) == *(long *)(lVar30 + 200)) {
    return;
  }
  local_298[0] = 0;
  local_170 = (long *)0x0;
  local_140 = (long *)0x0;
  local_110 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_b0 = (long *)0x0;
  local_3a4[0] = 0;
  local_3b0._0_4_ = 2;
  for (uVar8 = 0; "save:/save_data/stage"[uVar8] != 0; uVar8 = uVar8 + 2) {
    bVar1 = "save:/save_data/stage"[uVar8 + 1];
    local_3a4[uVar8] = "save:/save_data/stage"[uVar8];
    if (bVar1 == 0) {
      uVar8 = uVar8 + 1;
      break;
    }
    local_3a4[uVar8 + 1] = bVar1;
  }
  uVar36 = 0x811c9dc5;
  *(undefined1 *)(((ulong)&local_3b0 | 0xc) + (uVar8 & 0xffffffff)) = 0;
  local_3a8 = (undefined4)uVar8;
  uVar21 = (uint)local_3a4[0];
  local_3b0._4_4_ = uVar36;
  if (local_3a4[0] != 0) {
    pbVar26 = (byte *)((ulong)&local_3b0 | 0xd);
    do {
      local_3b0._4_4_ = local_3b0._4_4_ * 0x89 ^ uVar21;
      uVar21 = (uint)*pbVar26;
      pbVar26 = pbVar26 + 1;
    } while (uVar21 != 0);
  }
  for (uVar8 = 0; "stage"[uVar8] != 0; uVar8 = uVar8 + 2) {
    bVar1 = "stage"[uVar8 + 1];
    local_298[uVar8] = "stage"[uVar8];
    if (bVar1 == 0) {
      uVar8 = uVar8 + 1;
      break;
    }
    local_298[uVar8 + 1] = bVar1;
  }
  local_298[uVar8 & 0xffffffff] = 0;
  uVar21 = (uint)local_298[0];
  if (local_298[0] != 0) {
    pbVar26 = local_298;
    do {
      pbVar26 = pbVar26 + 1;
      uVar36 = uVar36 * 0x89 ^ uVar21;
      uVar21 = (uint)*pbVar26;
    } while (uVar21 != 0);
  }
  local_2a0 = CONCAT44((int)uVar8,uVar36);
  local_a0 = (long ***)&DAT_710509f808;
  puStack_98 = puVar33;
  local_80 = &local_a0;
  FUN_71003cb050((long *)&local_a0,alStack_190);
  if (&local_a0 == local_80) {
    pplVar19 = (*local_80)[4];
LAB_71017ae9a4:
    (*(code *)pplVar19)();
  }
  else if (local_80 != (long ****)0x0) {
    pplVar19 = (*local_80)[5];
    goto LAB_71017ae9a4;
  }
  local_a0 = (long ***)&DAT_710509f850;
  puStack_98 = puVar33;
  local_80 = &local_a0;
  FUN_71003cb050((long *)&local_a0,alStack_130);
  if (&local_a0 == local_80) {
    pplVar19 = (*local_80)[4];
LAB_71017ae9f0:
    (*(code *)pplVar19)();
  }
  else if (local_80 != (long ****)0x0) {
    pplVar19 = (*local_80)[5];
    goto LAB_71017ae9f0;
  }
  plVar15 = (long *)FUN_710392e290(0x10,0x4d0,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8);
  if (plVar15 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70[0] = local_70[0] & 0xffffffff00000000;
      local_a0 = (long ***)0x4d0;
      pppplVar13 = &local_a0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_70);
      if (((uVar8 & 1) != 0) &&
         (plVar15 = (long *)FUN_710392e290(0x10,0x4d0,pppplVar13,param_4,param_5,param_6,param_7,
                                           param_8), plVar15 != (long *)0x0)) goto LAB_71017aea54;
    }
    plVar15 = (long *)0x0;
  }
LAB_71017aea54:
  *plVar15 = lVar30 + 0xa8;
  FUN_71017ca070((undefined4 *)(plVar15 + 2),(undefined4 *)&local_3b0);
  plVar15[0x94] = (long)FUN_71017ca360;
  plVar15[0x95] = (long)FUN_710143c880;
  plVar15[0x91] = (long)FUN_71017ca350;
  plVar15[0x69] = (long)FUN_71017ca380;
  plVar15[0x6b] = (long)FUN_71017ca390;
  plVar15[0x6d] = (long)FUN_71017ca660;
  plVar15[0x6f] = (long)FUN_71017ca720;
  plVar15[0x71] = (long)FUN_71017ca970;
  plVar15[0x73] = (long)FUN_71017cad50;
  plVar15[0x75] = (long)FUN_71017cb170;
  plVar15[0x77] = (long)FUN_71017cb9d0;
  plVar15[0x79] = (long)FUN_71017cc7e0;
  plVar15[0x7b] = (long)FUN_71017ccaa0;
  plVar15[100] = (long)plVar15;
  plVar15[0x68] = 0;
  plVar15[0x67] = 0;
  plVar15[0x90] = 0;
  plVar15[0x8f] = 0;
  plVar15[0x8e] = 0;
  plVar15[0x8d] = 0;
  plVar15[0x8c] = 0;
  plVar15[0x8b] = 0;
  plVar15[0x93] = (long)plVar15;
  plVar15[0x92] = 0;
  *(undefined2 *)(plVar15 + 0x99) = 0;
  plVar15[0x98] = 0;
  plVar15[0x97] = 0;
  plVar15[0x96] = 0;
  plVar15[0x6a] = 0;
  plVar15[0x6c] = 0;
  plVar15[0x6e] = 0;
  plVar15[0x70] = 0;
  plVar15[0x72] = 0;
  plVar15[0x74] = 0;
  plVar15[0x76] = 0;
  plVar15[0x78] = 0;
  plVar15[0x7a] = 0;
  plVar15[0x7c] = 0;
  plVar15[0x7d] = (long)FUN_71017ccfb0;
  plVar15[0x7e] = 0;
  plVar15[0x66] = 0;
  plVar15[0x65] = 0;
  *(undefined8 *)((long)plVar15 + 0x43c) = 0;
  *(undefined8 *)((long)plVar15 + 0x434) = 0;
  *(undefined8 *)((long)plVar15 + 0x42c) = 0;
  *(undefined8 *)((long)plVar15 + 0x424) = 0;
  *(undefined8 *)((long)plVar15 + 0x41c) = 0;
  *(undefined8 *)((long)plVar15 + 0x414) = 0;
  *(undefined8 *)((long)plVar15 + 0x40c) = 0;
  *(undefined8 *)((long)plVar15 + 0x3fc) = 0;
  *(undefined4 *)((long)plVar15 + 0x444) = 0;
  *(undefined8 *)((long)plVar15 + 0x404) = 0;
  *(undefined4 *)(plVar15 + 0x89) = 0xffffffff;
  *(undefined4 *)((long)plVar15 + 0x44c) = 0;
  *(undefined4 *)(plVar15 + 0x8a) = 0xffffffff;
  *(undefined1 *)((long)plVar15 + 0x454) = 0;
  *(undefined4 *)(plVar15 + 0x7f) = 0;
  FUN_71017ccff0(plVar15 + 100);
  local_a0 = (long ***)0x0;
  local_70[0] = 0;
  pUVar14 = (Uid *)*DAT_710593b580;
  iVar7 = *(int *)(pUVar14 + 0x7300);
  if (iVar7 != -1) {
    if (*(ulong *)(pUVar14 + 0x72c0) <= (ulong)(long)iVar7) goto LAB_71017aefb8;
    pUVar14 = pUVar14 + (long)iVar7 * 0xcc0 + 0xcc0;
  }
  iVar7 = nn::fs::GetSaveDataSize((long *)&local_a0,(long *)local_70,pUVar14);
  uVar8 = local_70[0];
  if (iVar7 != 0) {
    nn::err::ShowError(iVar7);
    uVar8 = 0;
  }
  plVar15[0x97] = uVar8 - 0x80000;
  uVar8 = *puVar33;
  *puVar33 = (ulong)plVar15;
  if (uVar8 != 0) {
    uVar9 = *(ulong *)(uVar8 + 0x470);
    if (uVar9 != 0) {
      *(ulong *)(uVar8 + 0x478) = uVar9;
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar8 + 0x458);
    if (uVar9 != 0) {
      *(ulong *)(uVar8 + 0x460) = uVar9;
      FUN_710392eb40(uVar9);
    }
    plVar15 = *(long **)(uVar8 + 0x310);
    if ((long *)(uVar8 + 0x2f0) == plVar15) {
      pcVar20 = *(code **)(*plVar15 + 0x20);
LAB_71017aeca4:
      (*pcVar20)();
    }
    else if (plVar15 != (long *)0x0) {
      pcVar20 = *(code **)(*plVar15 + 0x28);
      goto LAB_71017aeca4;
    }
    plVar15 = *(long **)(uVar8 + 0x2e0);
    if ((long *)(uVar8 + 0x2c0) == plVar15) {
      pcVar20 = *(code **)(*plVar15 + 0x20);
LAB_71017aecd0:
      (*pcVar20)();
    }
    else if (plVar15 != (long *)0x0) {
      pcVar20 = *(code **)(*plVar15 + 0x28);
      goto LAB_71017aecd0;
    }
    plVar15 = *(long **)(uVar8 + 0x2b0);
    if ((long *)(uVar8 + 0x290) == plVar15) {
      pcVar20 = *(code **)(*plVar15 + 0x20);
LAB_71017aecfc:
      (*pcVar20)();
    }
    else if (plVar15 != (long *)0x0) {
      pcVar20 = *(code **)(*plVar15 + 0x28);
      goto LAB_71017aecfc;
    }
    plVar15 = *(long **)(uVar8 + 0x280);
    if ((long *)(uVar8 + 0x260) == plVar15) {
      pcVar20 = *(code **)(*plVar15 + 0x20);
LAB_71017aed28:
      (*pcVar20)();
    }
    else if (plVar15 != (long *)0x0) {
      pcVar20 = *(code **)(*plVar15 + 0x28);
      goto LAB_71017aed28;
    }
    plVar15 = *(long **)(uVar8 + 0x250);
    if ((long *)(uVar8 + 0x230) == plVar15) {
      pcVar20 = *(code **)(*plVar15 + 0x20);
LAB_71017aed54:
      (*pcVar20)();
    }
    else if (plVar15 != (long *)0x0) {
      pcVar20 = *(code **)(*plVar15 + 0x28);
      goto LAB_71017aed54;
    }
    FUN_710392eb40(uVar8);
    plVar15 = (long *)*puVar33;
  }
  *(undefined1 *)((long)plVar15 + 0x4c9) = 1;
  FUN_71017cff70((long)plVar15,(long *)(lVar30 + 0xc0),(long ****)pUVar14,param_4,param_5,param_6,
                 param_7,param_8);
  if (*(int *)((long)plVar15 + 0x444) < 0x12) {
    uVar36 = *(int *)((long)plVar15 + 0x444) + 1;
    *(uint *)((long)plVar15 + 0x444) = uVar36;
    if (0x12 < uVar36) {
LAB_71017aefb8:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)((long)plVar15 + (long)(int)uVar36 * 4 + 0x3f8) = 10;
    if (*(int *)((long)plVar15 + 0x444) < 0x12) {
      uVar36 = *(int *)((long)plVar15 + 0x444) + 1;
      *(uint *)((long)plVar15 + 0x444) = uVar36;
      if (0x12 < uVar36) goto LAB_71017aefb8;
      *(undefined4 *)((long)plVar15 + (long)(int)uVar36 * 4 + 0x3f8) = 7;
      if (*(int *)((long)plVar15 + 0x444) < 0x12) {
        uVar36 = *(int *)((long)plVar15 + 0x444) + 1;
        *(uint *)((long)plVar15 + 0x444) = uVar36;
        if (0x12 < uVar36) goto LAB_71017aefb8;
        *(undefined4 *)((long)plVar15 + (long)(int)uVar36 * 4 + 0x3f8) = 6;
        if (*(int *)((long)plVar15 + 0x444) < 0x12) {
          uVar36 = *(int *)((long)plVar15 + 0x444) + 1;
          *(uint *)((long)plVar15 + 0x444) = uVar36;
          if (0x12 < uVar36) goto LAB_71017aefb8;
          *(undefined4 *)((long)plVar15 + (long)(int)uVar36 * 4 + 0x3f8) = 3;
        }
      }
    }
  }
  FUN_71017ccff0(plVar15 + 100);
  *(undefined2 *)(lVar30 + 0xf0) = 0x101;
  if (alStack_d0 == local_b0) {
    pcVar20 = *(code **)(*local_b0 + 0x20);
LAB_71017aee54:
    (*pcVar20)();
  }
  else if (local_b0 != (long *)0x0) {
    pcVar20 = *(code **)(*local_b0 + 0x28);
    goto LAB_71017aee54;
  }
  if (alStack_100 == local_e0) {
    pcVar20 = *(code **)(*local_e0 + 0x20);
LAB_71017aee84:
    (*pcVar20)();
  }
  else if (local_e0 != (long *)0x0) {
    pcVar20 = *(code **)(*local_e0 + 0x28);
    goto LAB_71017aee84;
  }
  if (alStack_130 == local_110) {
    pcVar20 = *(code **)(*local_110 + 0x20);
LAB_71017aeeb4:
    (*pcVar20)();
  }
  else if (local_110 != (long *)0x0) {
    pcVar20 = *(code **)(*local_110 + 0x28);
    goto LAB_71017aeeb4;
  }
  if (alStack_160 == local_140) {
    pcVar20 = *(code **)(*local_140 + 0x20);
  }
  else {
    if (local_140 == (long *)0x0) goto LAB_71017aeee8;
    pcVar20 = *(code **)(*local_140 + 0x28);
  }
  (*pcVar20)();
LAB_71017aeee8:
  if (alStack_190 == local_170) {
    pcVar20 = *(code **)(*local_170 + 0x20);
  }
  else {
    if (local_170 == (long *)0x0) {
      return;
    }
    pcVar20 = *(code **)(*local_170 + 0x28);
  }
  (*pcVar20)();
  return;
}

