// addr:      71035d0e30
// offset:    0x35d0e30
// name:      FUN_71035d0e30
// mangled:   
// signature: undefined __cdecl FUN_71035d0e30(long * param_1, long * param_2, long * * * * * * * * * * param_3, long * * * * * param_4, long * * * * * param_5, byte * * * * param_6, byte * * * * param_7, undefined8 * param_8)


/* WARNING: Removing unreachable block (ram,0x0071035d104c) */
/* WARNING: Removing unreachable block (ram,0x0071035d2574) */
/* WARNING: Removing unreachable block (ram,0x0071035d1058) */
/* WARNING: Removing unreachable block (ram,0x0071035d1060) */
/* WARNING: Removing unreachable block (ram,0x0071035d1068) */
/* WARNING: Removing unreachable block (ram,0x0071035d2578) */
/* WARNING: Removing unreachable block (ram,0x0071035d2580) */
/* WARNING: Removing unreachable block (ram,0x0071035d2598) */
/* WARNING: Removing unreachable block (ram,0x0071035d25a4) */
/* WARNING: Removing unreachable block (ram,0x0071035d25c4) */
/* WARNING: Removing unreachable block (ram,0x0071035d25d8) */
/* WARNING: Removing unreachable block (ram,0x0071035d25dc) */
/* WARNING: Removing unreachable block (ram,0x0071035d25f4) */
/* WARNING: Removing unreachable block (ram,0x0071035d25fc) */
/* WARNING: Removing unreachable block (ram,0x0071035d106c) */

void FUN_71035d0e30(long *param_1,long *param_2,long **********param_3,long *****param_4,
                   long *****param_5,byte ****param_6,byte ****param_7,undefined8 *param_8)

{
  long *plVar1;
  long *plVar2;
  undefined1 *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  ulong *puVar7;
  int iVar8;
  long *********ppppppppplVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 extraout_x1;
  long ****pppplVar12;
  long **********pppppppppplVar13;
  undefined **ppuVar14;
  byte ****ppppbVar15;
  uint uVar16;
  long lVar17;
  long *****ppppplVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  undefined8 *puVar23;
  ulong uVar24;
  undefined8 uVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long lVar30;
  long *plVar31;
  void *pvVar32;
  long ***ppplVar33;
  long *********ppppppppplVar34;
  undefined **ppuVar35;
  ulong uVar36;
  ulong uVar37;
  ulong *puVar38;
  long local_1d8;
  long *local_1d0;
  undefined1 *local_1c8;
  long *local_1c0;
  undefined **local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 *local_198;
  long *local_190;
  undefined1 *local_188;
  long *local_180;
  undefined **local_178;
  long local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 *local_158;
  long *local_150;
  long *********local_148;
  undefined **local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined2 local_11c;
  long local_118;
  ulong local_110;
  ulong *local_108;
  long local_100;
  undefined4 local_f8;
  undefined1 local_f3;
  ushort local_f0;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined1 local_dc;
  undefined8 local_d8;
  long *local_d0;
  undefined8 uStack_c8;
  undefined1 *local_c0;
  long *local_b8;
  undefined1 *local_b0;
  long *local_a8;
  undefined1 *local_a0;
  long *local_98;
  undefined4 local_8c;
  long ***local_88;
  undefined **local_80;
  long *local_78;
  long local_70;
  
  local_1d8 = *param_2;
  local_1d0 = (long *)param_2[1];
  if (local_1d0 != (long *)0x0) {
    plVar26 = local_1d0 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar6) {
        *plVar26 = *plVar26 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar21 = *(long *)(local_1d8 + 0x440);
  lVar17 = *(long *)(local_1d8 + 0x448);
  if (lVar17 != 0) {
    plVar26 = (long *)(lVar17 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar6) {
        *plVar26 = *plVar26 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar26 = (long *)param_1[0x89];
  param_1[0x88] = lVar21;
  param_1[0x89] = lVar17;
  if (plVar26 == (long *)0x0) {
LAB_71035d0ec0:
    lVar17 = param_1[0x90];
  }
  else {
    plVar11 = plVar26 + 1;
    do {
      lVar17 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 != 0) goto LAB_71035d0ec0;
    (**(code **)(*plVar26 + 0x10))(plVar26);
    std::__shared_weak_count::__release_weak();
    lVar17 = param_1[0x90];
  }
  if ((lVar17 == 0) && (plVar26 = *(long **)(local_1d8 + 0x480), plVar26 != (long *)0x0)) {
    ppppplVar18 = (long *****)param_1[0x88];
    lVar17 = *plVar26;
    lVar21 = plVar26[1];
    plVar11 = (long *)FUN_710392e290(0x10,0x20,(long ****)param_3,(byte ****)param_4,
                                     (long ****)param_5,param_6,param_7,param_8);
    if (plVar11 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_88 = (long ***)((ulong)local_88 & 0xffffffff00000000);
        local_148 = (long *********)&SUB_00000020;
        param_3 = &local_148;
        uVar36 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
        if (((uVar36 & 1) != 0) &&
           (plVar11 = (long *)FUN_710392e290(0x10,0x20,(long ****)param_3,(byte ****)param_4,
                                             (long ****)param_5,param_6,param_7,param_8),
           plVar11 != (long *)0x0)) goto LAB_71035d110c;
      }
      plVar11 = (long *)0x0;
    }
LAB_71035d110c:
    plVar11[2] = 0;
    plVar11[3] = 0;
    *plVar11 = 0;
    plVar11[1] = 0;
    if (lVar21 - lVar17 != 0) {
      uVar36 = (lVar21 - lVar17 >> 4) * 0x6db6db6db6db6db7;
      FUN_71035f9320(plVar11,uVar36,(long ****)param_3,(byte ****)param_4,(long ****)param_5,param_6
                     ,param_7,param_8);
      uVar10 = 0;
      do {
        lVar17 = *plVar26;
        plVar31 = (long *)(lVar17 + uVar10 * 0x70);
        plVar19 = (long *)*plVar11;
        iVar8 = (int)uVar10;
        if ((undefined1 *)*plVar31 != (undefined1 *)0x0) {
          param_4 = ppppplVar18;
          if (iVar8 == 2) {
            param_3 = (long **********)0x0;
            FUN_7103603250(&local_c0,(undefined1 *)*plVar19,(long *****)0x0,ppppplVar18,
                           (long ****)param_5,param_6,param_7,param_8);
            lVar21 = *plVar11;
            uVar24 = (plVar11[1] - lVar21 >> 4) * 0x6db6db6db6db6db7;
            if (uVar10 <= uVar24 && uVar24 - uVar10 != 0) {
              if (local_b8 != (long *)0x0) {
                plVar27 = local_b8 + 1;
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                  if (bVar6) {
                    *plVar27 = *plVar27 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              lVar20 = lVar21 + uVar10 * 0x70;
              *(undefined1 **)(lVar21 + uVar10 * 0x70) = local_c0;
              plVar27 = *(long **)(lVar20 + 8);
              *(long **)(lVar20 + 8) = local_b8;
              if (plVar27 != (long *)0x0) {
                plVar29 = plVar27 + 1;
                do {
                  lVar21 = *plVar29;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                  if (bVar6) {
                    *plVar29 = lVar21 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar21 == 0) {
                  (**(code **)(*plVar27 + 0x10))(plVar27);
                  std::__shared_weak_count::__release_weak();
                }
              }
              plVar27 = *(long **)(*(long *)(local_c0 + 0x40) + 0x90);
              if (((plVar27 != (long *)0x0) &&
                  (*plVar27 == *(long *)(*(long *)(local_c0 + 0x40) + 0x98))) &&
                 ((int)plVar11[3] != 2)) {
                *local_c0 = 0;
              }
            }
            if (local_b8 != (long *)0x0) {
              plVar27 = local_b8 + 1;
              do {
                lVar21 = *plVar27;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar6) {
                  *plVar27 = lVar21 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar21 == 0) {
                (**(code **)(*local_b8 + 0x10))(local_b8);
                std::__shared_weak_count::__release_weak();
              }
            }
            lVar20 = ((long *)*plVar11)[0x1c];
            lVar21 = *(long *)*plVar11;
            uVar25 = *(undefined8 *)(lVar21 + 0x1c0);
            lVar21 = *(long *)(lVar21 + 0x1c8);
            if (lVar21 != 0) {
              plVar27 = (long *)(lVar21 + 8);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar6) {
                  *plVar27 = *plVar27 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            plVar27 = *(long **)(lVar20 + 0x1c8);
            *(undefined8 *)(lVar20 + 0x1c0) = uVar25;
            *(long *)(lVar20 + 0x1c8) = lVar21;
            if (plVar27 == (long *)0x0) goto LAB_71035d14c8;
            plVar29 = plVar27 + 1;
            do {
              lVar21 = *plVar29;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar6) {
                *plVar29 = lVar21 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
LAB_71035d14c4:
            if (lVar21 != 0) goto LAB_71035d14c8;
            (**(code **)(*plVar27 + 0x10))(plVar27);
            std::__shared_weak_count::__release_weak();
            lVar21 = *plVar31;
          }
          else {
            if (iVar8 == 1) {
              param_3 = (long **********)plVar19[1];
              FUN_71035f9fe0(&local_b0,*plVar19,(long *)param_3,(byte ****)ppppplVar18,
                             (long ****)param_5,param_6,param_7,param_8);
              lVar21 = *plVar11;
              uVar24 = (plVar11[1] - lVar21 >> 4) * 0x6db6db6db6db6db7;
              if (uVar10 <= uVar24 && uVar24 - uVar10 != 0) {
                if (local_a8 != (long *)0x0) {
                  plVar27 = local_a8 + 1;
                  do {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                    if (bVar6) {
                      *plVar27 = *plVar27 + 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                }
                lVar20 = lVar21 + uVar10 * 0x70;
                *(undefined1 **)(lVar21 + uVar10 * 0x70) = local_b0;
                plVar27 = *(long **)(lVar20 + 8);
                *(long **)(lVar20 + 8) = local_a8;
                if (plVar27 != (long *)0x0) {
                  plVar29 = plVar27 + 1;
                  do {
                    lVar21 = *plVar29;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                    if (bVar6) {
                      *plVar29 = lVar21 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (lVar21 == 0) {
                    (**(code **)(*plVar27 + 0x10))(plVar27);
                    std::__shared_weak_count::__release_weak();
                  }
                }
                plVar27 = *(long **)(*(long *)(local_b0 + 0x40) + 0x90);
                if (((plVar27 != (long *)0x0) &&
                    (*plVar27 == *(long *)(*(long *)(local_b0 + 0x40) + 0x98))) &&
                   ((int)plVar11[3] != 1)) {
                  *local_b0 = 0;
                }
              }
              if (local_a8 != (long *)0x0) {
                plVar29 = local_a8 + 1;
                do {
                  lVar21 = *plVar29;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                  if (bVar6) {
                    *plVar29 = lVar21 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  plVar27 = local_a8;
                } while (cVar5 != '\0');
                goto LAB_71035d14c4;
              }
            }
            else if (iVar8 == 0) {
              param_3 = (long **********)0x17f;
              FUN_7103603250(&local_a0,(undefined1 *)*plVar31,(long *****)0x17f,ppppplVar18,
                             (long ****)param_5,param_6,param_7,param_8);
              lVar21 = *plVar11;
              uVar24 = (plVar11[1] - lVar21 >> 4) * 0x6db6db6db6db6db7;
              if (uVar10 <= uVar24 && uVar24 - uVar10 != 0) {
                if (local_98 != (long *)0x0) {
                  plVar27 = local_98 + 1;
                  do {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                    if (bVar6) {
                      *plVar27 = *plVar27 + 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                }
                lVar20 = lVar21 + uVar10 * 0x70;
                *(undefined1 **)(lVar21 + uVar10 * 0x70) = local_a0;
                plVar27 = *(long **)(lVar20 + 8);
                *(long **)(lVar20 + 8) = local_98;
                if (plVar27 != (long *)0x0) {
                  plVar29 = plVar27 + 1;
                  do {
                    lVar21 = *plVar29;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                    if (bVar6) {
                      *plVar29 = lVar21 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (lVar21 == 0) {
                    (**(code **)(*plVar27 + 0x10))(plVar27);
                    std::__shared_weak_count::__release_weak();
                  }
                }
                plVar27 = *(long **)(*(long *)(local_a0 + 0x40) + 0x90);
                if (((plVar27 != (long *)0x0) &&
                    (*plVar27 == *(long *)(*(long *)(local_a0 + 0x40) + 0x98))) &&
                   ((int)plVar11[3] != 0)) {
                  *local_a0 = 0;
                }
              }
              if (local_98 != (long *)0x0) {
                plVar29 = local_98 + 1;
                do {
                  lVar21 = *plVar29;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                  if (bVar6) {
                    *plVar29 = lVar21 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  plVar27 = local_98;
                } while (cVar5 != '\0');
                goto LAB_71035d14c4;
              }
            }
LAB_71035d14c8:
            lVar21 = *plVar31;
          }
          if (lVar21 != 0) {
            lVar20 = plVar19[uVar10 * 0xe];
            if (((*(long **)(lVar20 + 0x68) != (long *)0x0) &&
                (**(long **)(lVar20 + 0x68) == *(long *)(lVar20 + 0x70))) &&
               (*(long *)(lVar20 + 0x60) != 0)) {
              FUN_71036013c0(*(long *)(lVar20 + 0x60),*(long *)(lVar21 + 0x40));
            }
            uVar24 = *(ulong *)(lVar21 + 0xf8);
            if ((int)uVar24 != 0) {
              uVar37 = 0;
              plVar31 = (long *)(lVar21 + 0x80);
              do {
                if (*plVar31 != 0) {
                  param_3 = (long **********)(uVar37 & 0xffffffff);
                  FUN_71035fb5c0(lVar20,*plVar31 + 0x40,(uint)uVar37,(byte ****)param_4,
                                 (long ****)param_5,param_6,param_7,param_8);
                }
                uVar37 = uVar37 + 1;
                plVar31 = plVar31 + 4;
              } while ((uVar24 & 0xffffffff) != uVar37);
            }
          }
        }
        if (iVar8 == 2) {
          FUN_71035f90a0(*plVar11 + uVar10 * 0x70,*plVar11);
        }
        else if (iVar8 == 0) {
          lVar21 = *(long *)(lVar17 + uVar10 * 0x70 + 0x10);
          if (lVar21 != 0) {
            param_3 = (long **********)(*plVar11 + uVar10 * 0x70);
            param_4 = (long *****)(ulong)*(uint *)(lVar21 + 0x28);
            param_6 = (byte ****)(ulong)*(byte *)(lVar21 + 0x20);
            param_5 = ppppplVar18;
            FUN_7103635820(&local_148,DAT_7105338e40,(long *)param_3,(byte ****)param_4,
                           (long ****)ppppplVar18,param_6,param_7,param_8);
            ppuVar35 = local_140;
            if (local_140 != (undefined **)0x0) {
              ppuVar14 = local_140 + 1;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
                if (bVar6) {
                  *ppuVar14 = *ppuVar14 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            if (local_148 != (long *********)0x0) {
              lVar21 = *plVar11;
              if (local_140 != (undefined **)0x0) {
                ppuVar14 = local_140 + 1;
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
                  if (bVar6) {
                    *ppuVar14 = *ppuVar14 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              *(long **********)(lVar21 + uVar10 * 0x70 + 0x10) = local_148;
              lVar21 = lVar21 + uVar10 * 0x70;
              plVar31 = *(long **)(lVar21 + 0x18);
              *(undefined ***)(lVar21 + 0x18) = local_140;
              if (plVar31 != (long *)0x0) {
                plVar27 = plVar31 + 1;
                do {
                  lVar21 = *plVar27;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                  if (bVar6) {
                    *plVar27 = lVar21 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar21 == 0) {
                  (**(code **)(*plVar31 + 0x10))(plVar31);
                  std::__shared_weak_count::__release_weak();
                }
              }
              if ((int)plVar11[3] != 0) {
                *(undefined1 *)**(undefined8 **)(*plVar11 + uVar10 * 0x70 + 0x10) = 0;
              }
              FUN_7103636730(DAT_7105338e40,(long *)(*plVar11 + uVar10 * 0x70 + 0x10),
                             (long ****)param_3,(byte ****)param_4,(long ****)param_5,param_6,
                             param_7,param_8);
            }
            if (ppuVar35 != (undefined **)0x0) {
              ppuVar14 = ppuVar35 + 1;
              do {
                puVar22 = *ppuVar14;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
                if (bVar6) {
                  *ppuVar14 = puVar22 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (puVar22 == (undefined *)0x0) {
                (**(code **)(*ppuVar35 + 0x10))(ppuVar35);
                std::__shared_weak_count::__release_weak();
              }
            }
            if (local_140 != (undefined **)0x0) {
              ppuVar35 = local_140 + 1;
              do {
                puVar22 = *ppuVar35;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppuVar35,0x10);
                if (bVar6) {
                  *ppuVar35 = puVar22 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (puVar22 == (undefined *)0x0) {
                (**(code **)(*local_140 + 0x10))(local_140);
                std::__shared_weak_count::__release_weak();
              }
            }
          }
          if (*(long *)(lVar17 + uVar10 * 0x70 + 0x20) != 0) {
            plVar31 = (long *)(*plVar11 + uVar10 * 0x70);
            lVar21 = *plVar31;
            plVar31 = (long *)plVar31[1];
            if (plVar31 != (long *)0x0) {
              plVar27 = plVar31 + 1;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar6) {
                  *plVar27 = *plVar27 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            lVar20 = *(long *)(*(long *)(lVar21 + 0x40) + 0x68);
            plVar27 = (long *)FUN_710392e290(0x10,0xd0,(long ****)param_3,(byte ****)param_4,
                                             (long ****)param_5,param_6,param_7,param_8);
            if (plVar27 == (long *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_8c = 0;
                local_148 = (long *********)&DAT_000000d0;
                pppppppppplVar13 = &local_148;
                uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_8c);
                if (((uVar24 & 1) != 0) &&
                   (plVar27 = (long *)FUN_710392e290(0x10,0xd0,(long ****)pppppppppplVar13,
                                                     (byte ****)param_4,(long ****)param_5,param_6,
                                                     param_7,param_8), plVar27 != (long *)0x0))
                goto LAB_71035d1738;
              }
              plVar27 = (long *)0x0;
            }
LAB_71035d1738:
            plVar29 = plVar27 + 1;
            *plVar29 = 0;
            *plVar27 = (long)&PTR_FUN_71052339a0;
            plVar27[2] = 0;
            puVar38 = (ulong *)(plVar27 + 4);
            *puVar38 = 0;
            plVar27[5] = (long)&PTR_FUN_7105232ce8;
            plVar27[6] = 0;
            plVar27[7] = 0;
            plVar27[8] = 0;
            plVar27[0xb] = 0;
            plVar27[0xc] = 0;
            param_3 = (long **********)&DAT_00000040;
            *(undefined1 *)(plVar27 + 0x16) = 0;
            *(undefined4 *)((long)plVar27 + 0xb4) = 0;
            plVar27[9] = (long)&PTR_FUN_7105231690;
            plVar27[10] = 0;
            plVar27[0x18] = 0;
            plVar27[0x19] = 0;
            local_140 = (undefined **)0x0;
            uStack_134 = 0;
            local_138 = 0;
            uStack_12c = 0;
            uStack_130 = 0;
            local_148 = (long *********)&PTR_FUN_71052321b8;
            uStack_120 = 0xffffffff;
            local_11c = 1;
            uStack_128 = 0;
            local_124 = 0;
            local_118 = 0;
            local_110 = 0;
            local_108 = (ulong *)0x0;
            local_100 = 0;
            local_f8 = 0x3f800000;
            local_f0 = 0x100;
            local_d8 = 0;
            local_d0 = (long *)0x0;
            uStack_c8 = 0;
            local_dc = 0;
            local_ec = 0;
            uStack_e4 = 0;
            FUN_710388e7f0(&local_88,lVar20,0x40,(byte ****)param_4,(long ****)param_5,param_6,
                           param_7,param_8);
            ppuVar14 = local_80;
            ppuVar35 = local_140;
            local_80 = (undefined **)0x0;
            local_78 = (long *)0x0;
            local_70 = 0;
            if (ppuVar14 == (undefined **)0x0) {
              puVar23 = (undefined8 *)0x0;
              uVar25 = 0;
            }
            else {
              puVar23 = (undefined8 *)ppuVar14[1];
              uVar25 = *puVar23;
            }
            local_140 = ppuVar14;
            plVar28 = (long *)CONCAT44(uStack_134,local_138);
            local_138 = SUB84(puVar23,0);
            uStack_134 = (undefined4)((ulong)puVar23 >> 0x20);
            lVar20 = CONCAT44(uStack_12c,uStack_130);
            uStack_130 = (undefined4)uVar25;
            uStack_12c = (undefined4)((ulong)uVar25 >> 0x20);
            if (((plVar28 != (long *)0x0) && (ppuVar35 != (undefined **)0x0)) &&
               (*plVar28 == lVar20)) {
              (**(code **)((long)*ppuVar35 + 8))();
            }
            plVar2 = local_d0;
            uStack_128 = 0;
            local_124 = 0;
            local_88 = (long ***)&PTR_FUN_71052321b8;
            local_d8 = *(undefined8 *)(lVar21 + 0x1d0);
            plVar28 = *(long **)(lVar21 + 0x1d8);
            if (plVar28 != (long *)0x0) {
              plVar1 = (long *)((long)plVar28 + 8);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *plVar1 = *plVar1 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            if (local_d0 != (long *)0x0) {
              plVar1 = local_d0 + 1;
              do {
                lVar21 = *plVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *plVar1 = lVar21 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar21 == 0) {
                lVar21 = *local_d0;
                local_d0 = plVar28;
                (**(code **)(lVar21 + 0x10))(plVar2);
                std::__shared_weak_count::__release_weak();
                plVar28 = local_d0;
              }
            }
            local_d0 = plVar28;
            uStack_120 = 1;
            local_11c = 1;
            puVar7 = local_108;
            if (local_100 != 0) {
              while (puVar7 != (ulong *)0x0) {
                uVar24 = *puVar7;
                if ((*(byte *)(puVar7 + 2) & 1) != 0) {
                  pvVar32 = (void *)puVar7[4];
                  nu::VirtualFreeHook(pvVar32);
                  FUN_710392eb40((ulong)pvVar32);
                }
                FUN_710392eb40((ulong)puVar7);
                puVar7 = (ulong *)uVar24;
              }
              local_108 = (ulong *)0x0;
              if (local_110 != 0) {
                uVar24 = local_110 & 7;
                if (local_110 - 1 < 7) {
                  lVar21 = 0;
                }
                else {
                  lVar21 = 0;
                  do {
                    lVar20 = lVar21 * 8;
                    lVar21 = lVar21 + 8;
                    *(undefined8 *)(local_118 + lVar20) = 0;
                    *(undefined8 *)(local_118 + lVar20 + 8) = 0;
                    *(undefined8 *)(local_118 + lVar20 + 0x10) = 0;
                    *(undefined8 *)(local_118 + lVar20 + 0x18) = 0;
                    *(undefined8 *)(local_118 + lVar20 + 0x20) = 0;
                    *(undefined8 *)(local_118 + lVar20 + 0x28) = 0;
                    *(undefined8 *)(local_118 + lVar20 + 0x30) = 0;
                    *(undefined8 *)(local_118 + lVar20 + 0x38) = 0;
                  } while (local_110 - uVar24 != lVar21);
                }
                if (uVar24 != 0) {
                  lVar21 = lVar21 << 3;
                  lVar20 = -uVar24;
                  do {
                    *(undefined8 *)(local_118 + lVar21) = 0;
                    lVar21 = lVar21 + 8;
                    lVar20 = lVar20 + 1;
                  } while (lVar20 != 0);
                }
              }
              local_100 = 0;
            }
            local_f0 = local_f0 & 0xff00;
            FUN_7103647390(puVar38,(long)&local_148,(long *****)param_3,(byte ****)param_4,
                           (long ****)param_5,param_6,param_7,param_8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar6) {
                *plVar29 = *plVar29 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            lVar21 = *plVar11;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar6) {
                *plVar29 = *plVar29 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            plVar28 = *(long **)(lVar21 + 0x28);
            *(ulong **)(lVar21 + 0x20) = puVar38;
            *(long **)(lVar21 + 0x28) = plVar27;
            if (plVar28 != (long *)0x0) {
              plVar2 = plVar28 + 1;
              do {
                lVar21 = *plVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar6) {
                  *plVar2 = lVar21 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar21 == 0) {
                (**(code **)(*plVar28 + 0x10))(plVar28);
                std::__shared_weak_count::__release_weak();
              }
            }
            iVar4 = (int)plVar11[3];
            if ((iVar4 != 0) != (bool)(char)plVar27[0x16]) {
              *(bool *)(plVar27 + 0x16) = iVar4 != 0;
              *(bool *)plVar27[4] = iVar4 != 0;
            }
            do {
              lVar21 = *plVar29;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar6) {
                *plVar29 = lVar21 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar21 == 0) {
              (**(code **)(*plVar27 + 0x10))(plVar27);
              std::__shared_weak_count::__release_weak();
            }
            FUN_71035fa800(&local_148);
            do {
              lVar21 = *plVar29;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar6) {
                *plVar29 = lVar21 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar21 == 0) {
              (**(code **)(*plVar27 + 0x10))(plVar27);
              std::__shared_weak_count::__release_weak();
            }
            if (plVar31 != (long *)0x0) {
              plVar27 = plVar31 + 1;
              do {
                lVar21 = *plVar27;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar6) {
                  *plVar27 = lVar21 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar21 == 0) {
                (**(code **)(*plVar31 + 0x10))(plVar31);
                std::__shared_weak_count::__release_weak();
              }
            }
          }
          plVar31 = (long *)(lVar17 + uVar10 * 0x70 + 0x30);
          if (*plVar31 != 0) {
            param_3 = (long **********)0x13e;
            FUN_7103603250(&local_158,*(undefined1 **)*plVar11,(long *****)0x13e,param_4,
                           (long ****)param_5,param_6,param_7,param_8);
            lVar21 = *plVar11;
            if (local_150 != (long *)0x0) {
              plVar27 = local_150 + 1;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar6) {
                  *plVar27 = *plVar27 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            lVar20 = lVar21 + uVar10 * 0x70;
            *(undefined1 **)(lVar21 + uVar10 * 0x70 + 0x30) = local_158;
            plVar27 = *(long **)(lVar20 + 0x38);
            *(long **)(lVar20 + 0x38) = local_150;
            if (plVar27 != (long *)0x0) {
              plVar29 = plVar27 + 1;
              do {
                lVar21 = *plVar29;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                if (bVar6) {
                  *plVar29 = lVar21 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar21 == 0) {
                (**(code **)(*plVar27 + 0x10))(plVar27);
                std::__shared_weak_count::__release_weak();
              }
            }
            plVar27 = *(long **)(*(long *)(local_158 + 0x40) + 0x90);
            if (((plVar27 != (long *)0x0) &&
                (*plVar27 == *(long *)(*(long *)(local_158 + 0x40) + 0x98))) &&
               ((int)plVar11[3] != 0)) {
              *local_158 = 0;
            }
            if (local_150 != (long *)0x0) {
              plVar27 = local_150 + 1;
              do {
                lVar21 = *plVar27;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar6) {
                  *plVar27 = lVar21 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar21 == 0) {
                (**(code **)(*local_150 + 0x10))(local_150);
                std::__shared_weak_count::__release_weak();
              }
            }
            lVar21 = *plVar31;
            if (lVar21 != 0) {
              lVar20 = plVar19[uVar10 * 0xe + 6];
              if (((*(long **)(lVar20 + 0x68) != (long *)0x0) &&
                  (**(long **)(lVar20 + 0x68) == *(long *)(lVar20 + 0x70))) &&
                 (*(long *)(lVar20 + 0x60) != 0)) {
                FUN_71036013c0(*(long *)(lVar20 + 0x60),*(long *)(lVar21 + 0x40));
              }
              uVar24 = *(ulong *)(lVar21 + 0xf8);
              if ((int)uVar24 != 0) {
                uVar37 = 0;
                plVar31 = (long *)(lVar21 + 0x80);
                do {
                  if (*plVar31 != 0) {
                    param_3 = (long **********)(uVar37 & 0xffffffff);
                    FUN_71035fb5c0(lVar20,*plVar31 + 0x40,(uint)uVar37,(byte ****)param_4,
                                   (long ****)param_5,param_6,param_7,param_8);
                  }
                  uVar37 = uVar37 + 1;
                  plVar31 = plVar31 + 4;
                } while ((uVar24 & 0xffffffff) != uVar37);
              }
            }
          }
          plVar31 = (long *)(lVar17 + uVar10 * 0x70 + 0x40);
          if (*plVar31 != 0) {
            if (*(char *)(ppppplVar18 + 9) == '\x05') {
              plVar27 = (long *)(*plVar11 + uVar10 * 0x70);
              lVar21 = *plVar27;
              plVar27 = (long *)plVar27[1];
              if (plVar27 != (long *)0x0) {
                plVar29 = plVar27 + 1;
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                  if (bVar6) {
                    *plVar29 = *plVar29 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              lVar21 = *(long *)(lVar21 + 0x40);
              local_170 = *(long *)(lVar21 + 0x68);
              local_168 = *(undefined8 *)(lVar21 + 0x70);
              uStack_160 = *(undefined8 *)(lVar21 + 0x78);
              local_178 = &PTR_FUN_7105232bb0;
              FUN_71035f9a90(&local_148,(long)&local_178,"item_silhouette_opaque",
                             (byte ****)&DAT_00000040,(long ****)param_5,param_6,param_7,param_8);
              if (plVar27 != (long *)0x0) {
                plVar29 = plVar27 + 1;
                do {
                  lVar21 = *plVar29;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                  if (bVar6) {
                    *plVar29 = lVar21 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar21 == 0) {
                  (**(code **)(*plVar27 + 0x10))(plVar27);
                  std::__shared_weak_count::__release_weak();
                }
              }
              puVar23 = (undefined8 *)(*plVar11 + uVar10 * 0x70);
              puVar3 = (undefined1 *)*puVar23;
              plVar27 = (long *)puVar23[1];
              if (plVar27 != (long *)0x0) {
                plVar29 = plVar27 + 1;
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                  if (bVar6) {
                    *plVar29 = *plVar29 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              ppppbVar15 = (byte ****)0x1;
              FUN_7103604df0(&local_188,puVar3,(long *****)&local_148,(byte ****)0x1,
                             (long ****)param_5,param_6,param_7,param_8);
              lVar21 = *plVar11;
              if (local_180 != (long *)0x0) {
                plVar29 = local_180 + 1;
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                  if (bVar6) {
                    *plVar29 = *plVar29 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              lVar20 = lVar21 + uVar10 * 0x70;
              *(undefined1 **)(lVar21 + uVar10 * 0x70 + 0x40) = local_188;
              plVar29 = *(long **)(lVar20 + 0x48);
              *(long **)(lVar20 + 0x48) = local_180;
              if (plVar29 != (long *)0x0) {
                plVar28 = plVar29 + 1;
                do {
                  lVar21 = *plVar28;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                  if (bVar6) {
                    *plVar28 = lVar21 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar21 == 0) {
                  (**(code **)(*plVar29 + 0x10))(plVar29);
                  std::__shared_weak_count::__release_weak();
                }
              }
              plVar29 = *(long **)(*(long *)(local_188 + 0x40) + 0x90);
              if (((plVar29 != (long *)0x0) &&
                  (*plVar29 == *(long *)(*(long *)(local_188 + 0x40) + 0x98))) &&
                 ((int)plVar11[3] != 0)) {
                *local_188 = 0;
              }
              if (local_180 != (long *)0x0) {
                plVar29 = local_180 + 1;
                do {
                  lVar21 = *plVar29;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                  if (bVar6) {
                    *plVar29 = lVar21 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar21 == 0) {
                  (**(code **)(*local_180 + 0x10))(local_180);
                  std::__shared_weak_count::__release_weak();
                }
              }
              if (plVar27 != (long *)0x0) {
                plVar29 = plVar27 + 1;
                do {
                  lVar21 = *plVar29;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                  if (bVar6) {
                    *plVar29 = lVar21 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar21 == 0) {
                  (**(code **)(*plVar27 + 0x10))(plVar27);
                  std::__shared_weak_count::__release_weak();
                }
              }
              lVar21 = *plVar31;
              if (lVar21 != 0) {
                lVar20 = plVar19[uVar10 * 0xe + 8];
                if (((*(long **)(lVar20 + 0x68) != (long *)0x0) &&
                    (**(long **)(lVar20 + 0x68) == *(long *)(lVar20 + 0x70))) &&
                   (*(long *)(lVar20 + 0x60) != 0)) {
                  FUN_71036013c0(*(long *)(lVar20 + 0x60),*(long *)(lVar21 + 0x40));
                }
                uVar24 = *(ulong *)(lVar21 + 0xf8);
                if ((int)uVar24 != 0) {
                  uVar37 = 0;
                  plVar31 = (long *)(lVar21 + 0x80);
                  do {
                    if (*plVar31 != 0) {
                      FUN_71035fb5c0(lVar20,*plVar31 + 0x40,(uint)uVar37,ppppbVar15,
                                     (long ****)param_5,param_6,param_7,param_8);
                    }
                    uVar37 = uVar37 + 1;
                    plVar31 = plVar31 + 4;
                  } while ((uVar24 & 0xffffffff) != uVar37);
                }
              }
              local_148 = (long *********)&PTR_FUN_71052321b8;
              if ((((long *)CONCAT44(uStack_134,local_138) != (long *)0x0) &&
                  (*(long *)CONCAT44(uStack_134,local_138) == CONCAT44(uStack_12c,uStack_130))) &&
                 (local_140 != (undefined **)0x0)) {
                (**(code **)(*local_140 + 8))();
              }
              plVar31 = (long *)(*plVar11 + uVar10 * 0x70);
              lVar21 = *plVar31;
              plVar31 = (long *)plVar31[1];
              if (plVar31 == (long *)0x0) {
                FUN_71035f9e10(&local_148,*(long *)(*(long *)(lVar21 + 0x40) + 0x68),
                               *(char *)((long)ppppplVar18 + 0x4b),ppppbVar15,(long ****)param_5,
                               param_6,param_7,param_8);
              }
              else {
                plVar27 = plVar31 + 1;
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                  if (bVar6) {
                    *plVar27 = *plVar27 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                FUN_71035f9e10(&local_148,*(long *)(*(long *)(lVar21 + 0x40) + 0x68),
                               *(char *)((long)ppppplVar18 + 0x4b),ppppbVar15,(long ****)param_5,
                               param_6,param_7,param_8);
                plVar27 = plVar31 + 1;
                do {
                  lVar21 = *plVar27;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                  if (bVar6) {
                    *plVar27 = lVar21 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar21 == 0) {
                  (**(code **)(*plVar31 + 0x10))(plVar31);
                  std::__shared_weak_count::__release_weak();
                }
              }
              puVar23 = (undefined8 *)(*plVar11 + uVar10 * 0x70);
              puVar3 = (undefined1 *)*puVar23;
              plVar31 = (long *)puVar23[1];
              if (plVar31 != (long *)0x0) {
                plVar27 = plVar31 + 1;
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                  if (bVar6) {
                    *plVar27 = *plVar27 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              param_3 = &local_148;
              param_4 = (long *****)0x1;
              FUN_7103604df0(&local_198,puVar3,(long *****)param_3,(byte ****)0x1,(long ****)param_5
                             ,param_6,param_7,param_8);
              lVar21 = *plVar11;
              if (local_190 != (long *)0x0) {
                plVar27 = local_190 + 1;
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                  if (bVar6) {
                    *plVar27 = *plVar27 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              lVar20 = lVar21 + uVar10 * 0x70;
              *(undefined1 **)(lVar21 + uVar10 * 0x70 + 0x50) = local_198;
              plVar27 = *(long **)(lVar20 + 0x58);
              *(long **)(lVar20 + 0x58) = local_190;
              if (plVar27 != (long *)0x0) {
                plVar29 = plVar27 + 1;
                do {
                  lVar21 = *plVar29;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                  if (bVar6) {
                    *plVar29 = lVar21 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar21 == 0) {
                  (**(code **)(*plVar27 + 0x10))(plVar27);
                  std::__shared_weak_count::__release_weak();
                }
              }
              plVar27 = *(long **)(*(long *)(local_198 + 0x40) + 0x90);
              if (((plVar27 != (long *)0x0) &&
                  (*plVar27 == *(long *)(*(long *)(local_198 + 0x40) + 0x98))) &&
                 ((int)plVar11[3] != 0)) {
                *local_198 = 0;
              }
              if (local_190 != (long *)0x0) {
                plVar27 = local_190 + 1;
                do {
                  lVar21 = *plVar27;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                  if (bVar6) {
                    *plVar27 = lVar21 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar21 == 0) {
                  (**(code **)(*local_190 + 0x10))(local_190);
                  std::__shared_weak_count::__release_weak();
                }
              }
              if (plVar31 != (long *)0x0) {
                plVar27 = plVar31 + 1;
                do {
                  lVar21 = *plVar27;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                  if (bVar6) {
                    *plVar27 = lVar21 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar21 == 0) {
                  (**(code **)(*plVar31 + 0x10))(plVar31);
                  std::__shared_weak_count::__release_weak();
                }
              }
              lVar17 = *(long *)(lVar17 + uVar10 * 0x70 + 0x50);
              if (lVar17 != 0) {
                lVar21 = plVar19[uVar10 * 0xe + 10];
                if (((*(long **)(lVar21 + 0x68) != (long *)0x0) &&
                    (**(long **)(lVar21 + 0x68) == *(long *)(lVar21 + 0x70))) &&
                   (*(long *)(lVar21 + 0x60) != 0)) {
                  FUN_71036013c0(*(long *)(lVar21 + 0x60),*(long *)(lVar17 + 0x40));
                }
                uVar10 = *(ulong *)(lVar17 + 0xf8);
                if ((int)uVar10 != 0) {
                  uVar24 = 0;
                  plVar19 = (long *)(lVar17 + 0x80);
                  do {
                    if (*plVar19 != 0) {
                      param_3 = (long **********)(uVar24 & 0xffffffff);
                      FUN_71035fb5c0(lVar21,*plVar19 + 0x40,(uint)uVar24,(byte ****)param_4,
                                     (long ****)param_5,param_6,param_7,param_8);
                    }
                    uVar24 = uVar24 + 1;
                    plVar19 = plVar19 + 4;
                  } while ((uVar10 & 0xffffffff) != uVar24);
                }
              }
              local_148 = (long *********)&PTR_FUN_71052321b8;
              if ((((long *)CONCAT44(uStack_134,local_138) != (long *)0x0) &&
                  (*(long *)CONCAT44(uStack_134,local_138) == CONCAT44(uStack_12c,uStack_130))) &&
                 (local_140 != (undefined **)0x0)) {
                (**(code **)(*local_140 + 8))();
              }
            }
            else if (*(char *)((long)ppppplVar18 + 0x4c) == '\x01') {
              lVar21 = 0;
              do {
                plVar31 = (long *)(*plVar11 + uVar10 * 0x70);
                lVar20 = *plVar31;
                plVar31 = (long *)plVar31[1];
                if (plVar31 != (long *)0x0) {
                  plVar27 = plVar31 + 1;
                  do {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                    if (bVar6) {
                      *plVar27 = *plVar27 + 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                }
                lVar20 = *(long *)(lVar20 + 0x40);
                local_1b0 = *(undefined8 *)(lVar20 + 0x68);
                local_1a8 = *(undefined8 *)(lVar20 + 0x70);
                uStack_1a0 = *(undefined8 *)(lVar20 + 0x78);
                local_1b8 = &PTR_FUN_7105232bb0;
                FUN_71035f9a90(&local_148,(long)&local_1b8,"depth_only_a_sort",
                               (byte ****)&DAT_00000140,(long ****)param_5,param_6,param_7,param_8);
                if (plVar31 != (long *)0x0) {
                  plVar27 = plVar31 + 1;
                  do {
                    lVar20 = *plVar27;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                    if (bVar6) {
                      *plVar27 = lVar20 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (lVar20 == 0) {
                    (**(code **)(*plVar31 + 0x10))(plVar31);
                    std::__shared_weak_count::__release_weak();
                  }
                }
                puVar23 = (undefined8 *)(*plVar11 + uVar10 * 0x70);
                puVar3 = (undefined1 *)*puVar23;
                plVar31 = (long *)puVar23[1];
                if (plVar31 != (long *)0x0) {
                  plVar27 = plVar31 + 1;
                  do {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                    if (bVar6) {
                      *plVar27 = *plVar27 + 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                }
                param_3 = &local_148;
                param_4 = (long *****)0x1;
                FUN_7103604df0(&local_1c8,puVar3,(long *****)param_3,(byte ****)0x1,
                               (long ****)param_5,param_6,param_7,param_8);
                lVar20 = *plVar11;
                if (local_1c0 != (long *)0x0) {
                  plVar27 = local_1c0 + 1;
                  do {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                    if (bVar6) {
                      *plVar27 = *plVar27 + 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                }
                lVar30 = lVar20 + uVar10 * 0x70 + lVar21 * 0x10;
                *(undefined1 **)(lVar20 + uVar10 * 0x70 + lVar21 * 0x10 + 0x40) = local_1c8;
                plVar27 = *(long **)(lVar30 + 0x48);
                *(long **)(lVar30 + 0x48) = local_1c0;
                if (plVar27 != (long *)0x0) {
                  plVar29 = plVar27 + 1;
                  do {
                    lVar20 = *plVar29;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                    if (bVar6) {
                      *plVar29 = lVar20 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (lVar20 == 0) {
                    (**(code **)(*plVar27 + 0x10))(plVar27);
                    std::__shared_weak_count::__release_weak();
                  }
                }
                plVar27 = *(long **)(*(long *)(local_1c8 + 0x40) + 0x90);
                if (((plVar27 != (long *)0x0) &&
                    (*plVar27 == *(long *)(*(long *)(local_1c8 + 0x40) + 0x98))) &&
                   ((int)plVar11[3] != 0)) {
                  *local_1c8 = 0;
                }
                if (local_1c0 != (long *)0x0) {
                  plVar27 = local_1c0 + 1;
                  do {
                    lVar20 = *plVar27;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                    if (bVar6) {
                      *plVar27 = lVar20 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (lVar20 == 0) {
                    (**(code **)(*local_1c0 + 0x10))(local_1c0);
                    std::__shared_weak_count::__release_weak();
                  }
                }
                if (plVar31 != (long *)0x0) {
                  plVar27 = plVar31 + 1;
                  do {
                    lVar20 = *plVar27;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                    if (bVar6) {
                      *plVar27 = lVar20 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (lVar20 == 0) {
                    (**(code **)(*plVar31 + 0x10))(plVar31);
                    std::__shared_weak_count::__release_weak();
                  }
                }
                lVar20 = *(long *)(lVar17 + uVar10 * 0x70 + lVar21 * 0x10 + 0x40);
                if (lVar20 != 0) {
                  lVar30 = plVar19[uVar10 * 0xe + lVar21 * 2 + 8];
                  if (((*(long **)(lVar30 + 0x68) != (long *)0x0) &&
                      (**(long **)(lVar30 + 0x68) == *(long *)(lVar30 + 0x70))) &&
                     (*(long *)(lVar30 + 0x60) != 0)) {
                    FUN_71036013c0(*(long *)(lVar30 + 0x60),*(long *)(lVar20 + 0x40));
                  }
                  uVar24 = *(ulong *)(lVar20 + 0xf8);
                  if ((int)uVar24 != 0) {
                    uVar37 = 0;
                    plVar31 = (long *)(lVar20 + 0x80);
                    do {
                      if (*plVar31 != 0) {
                        param_3 = (long **********)(uVar37 & 0xffffffff);
                        FUN_71035fb5c0(lVar30,*plVar31 + 0x40,(uint)uVar37,(byte ****)param_4,
                                       (long ****)param_5,param_6,param_7,param_8);
                      }
                      uVar37 = uVar37 + 1;
                      plVar31 = plVar31 + 4;
                    } while ((uVar24 & 0xffffffff) != uVar37);
                  }
                }
                local_148 = (long *********)&PTR_FUN_71052321b8;
                if ((((long *)CONCAT44(uStack_134,local_138) != (long *)0x0) &&
                    (*(long *)CONCAT44(uStack_134,local_138) == CONCAT44(uStack_12c,uStack_130))) &&
                   (local_140 != (undefined **)0x0)) {
                  (**(code **)(*local_140 + 8))();
                }
                lVar21 = lVar21 + 1;
              } while (lVar21 != 2);
            }
          }
        }
        uVar10 = (ulong)(iVar8 + 1);
      } while (uVar10 < uVar36);
    }
    puVar23 = (undefined8 *)param_1[0x90];
    param_1[0x90] = (long)plVar11;
    if (puVar23 != (undefined8 *)0x0) {
      FUN_71035f9810(puVar23);
      FUN_710392eb40((ulong)puVar23);
    }
    plVar26 = (long *)(**(long **)(local_1d8 + 0x480) +
                      (ulong)*(uint *)(*(long **)(local_1d8 + 0x480) + 3) * 0x70);
    lVar17 = *plVar26;
    plVar26 = (long *)plVar26[1];
    if (plVar26 == (long *)0x0) {
      lVar17 = *(long *)(*(long *)(lVar17 + 0x40) + 0x68);
      uVar16 = *(uint *)(lVar17 + 0x40);
      FUN_710388e720(&local_148,uVar16 ^ (int)uVar16 >> 0x1f,lVar17 + 0x48);
    }
    else {
      plVar11 = plVar26 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar17 = *(long *)(*(long *)(lVar17 + 0x40) + 0x68);
      uVar16 = *(uint *)(lVar17 + 0x40);
      FUN_710388e720(&local_148,uVar16 ^ (int)uVar16 >> 0x1f,lVar17 + 0x48);
      do {
        lVar17 = *plVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar26 = (long *)(*(long *)param_1[0x90] + (ulong)*(uint *)((long *)param_1[0x90] + 3) * 0x70);
    lVar17 = *plVar26;
    plVar26 = (long *)plVar26[1];
    if (plVar26 == (long *)0x0) {
      lVar17 = *(long *)(*(long *)(lVar17 + 0x40) + 0x68);
      uVar16 = *(uint *)(lVar17 + 0x40);
      param_3 = (long **********)(lVar17 + 0x48);
      FUN_710388e720(&local_88,uVar16 ^ (int)uVar16 >> 0x1f,(long)param_3);
    }
    else {
      plVar11 = plVar26 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar17 = *(long *)(*(long *)(lVar17 + 0x40) + 0x68);
      uVar16 = *(uint *)(lVar17 + 0x40);
      param_3 = (long **********)(lVar17 + 0x48);
      FUN_710388e720(&local_88,uVar16 ^ (int)uVar16 >> 0x1f,(long)param_3);
      do {
        lVar17 = *plVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
        std::__shared_weak_count::__release_weak();
      }
    }
    *(undefined4 *)(local_80 + 0x3b) = *(undefined4 *)(local_140 + 0x3b);
    if (local_80 != local_140) {
      param_3 = (long **********)local_140[4];
      FUN_71035dc5a0(local_80 + 3,(undefined8 *)local_140[3],param_3,(byte ****)param_4,
                     (long ****)param_5,param_6,param_7,param_8);
    }
  }
  FUN_71035dcc30(param_1,&local_1d8,param_3,(byte ****)param_4,(long ****)param_5,param_6,param_7,
                 param_8);
  (**(code **)(*param_1 + 0x4b0))(param_1,**(undefined8 **)(local_1d8 + 0x488));
  FUN_71035dcfd0(param_1,extraout_x1,(long ****)param_3,(byte ****)param_4,(long ****)param_5,
                 param_6,param_7,param_8);
  if ((char)param_1[0xfa] == '\0') goto LAB_71035d28c4;
  lVar17 = *(long *)(*(long *)(**(long **)param_1[0x90] + 0x40) + 0x68);
  uVar16 = *(uint *)(lVar17 + 0x18);
  pppplVar12 = (long ****)(lVar17 + 0x20);
  FUN_7103662550(&local_178,uVar16 ^ (int)uVar16 >> 0x1f,(long)pppplVar12);
  lVar21 = local_170;
  lVar17 = *(long *)(local_170 + 0x30) - *(long *)(local_170 + 0x28);
  if (lVar17 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = 0;
    uVar24 = lVar17 >> 5;
    uVar36 = 0;
    uVar10 = 1;
    do {
      if (uVar24 <= uVar36) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      uVar16 = *(int *)(*(long *)(*(long *)(local_170 + 0x28) + uVar36 * 0x20 + 8) + 0x4c) + uVar16;
      bVar6 = uVar10 < uVar24;
      uVar36 = uVar10;
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (bVar6);
  }
  local_140 = (undefined **)(ulong)(uVar16 << 4);
  local_148 = (long *********)0x0;
  uStack_134 = 0x5f6b6e69;
  uStack_130 = 0x74726576;
  uStack_12c = 0x635f7865;
  uStack_128 = 0x726f6c6f;
  local_124 = 0x7065725f;
  uStack_120 = 0x6563616c;
  local_f3 = 0x19;
  local_11c = 100;
  local_138 = 4;
  if (uVar16 == 0) {
    ppppppppplVar34 = (long *********)0x0;
    ppppppppplVar9 = (long *********)0x0;
  }
  else {
    uVar36 = (ulong)uVar16;
    ppplVar33 = (long ***)(uVar36 << 4);
    ppppppppplVar9 =
         (long *********)
         FUN_710392e290(0x10,ppplVar33,pppplVar12,(byte ****)param_4,(long ****)param_5,param_6,
                        param_7,param_8);
    if (ppppppppplVar9 == (long *********)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b8 = (undefined **)((ulong)local_1b8 & 0xffffffff00000000);
        pppplVar12 = &local_88;
        local_88 = ppplVar33;
        uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b8);
        if (((uVar10 & 1) != 0) &&
           (ppppppppplVar9 =
                 (long *********)
                 FUN_710392e290(0x10,ppplVar33,pppplVar12,(byte ****)param_4,(long ****)param_5,
                                param_6,param_7,param_8), ppppppppplVar9 != (long *********)0x0))
        goto LAB_71035d1044;
      }
      ppppppppplVar9 = (long *********)0x0;
    }
LAB_71035d1044:
    uVar10 = uVar36 & 3;
    uVar24 = uVar36;
    ppppppppplVar34 = ppppppppplVar9;
    if ((uVar16 & 3) != 0) {
      lVar17 = -uVar10;
      do {
        *ppppppppplVar34 = (long ********)0x0;
        ppppppppplVar34[1] = (long ********)0x0;
        lVar17 = lVar17 + 1;
        ppppppppplVar34 = ppppppppplVar34 + 2;
      } while (lVar17 != 0);
      uVar24 = uVar36 - uVar10;
      ppppppppplVar34 = ppppppppplVar9 + uVar10 * 2;
    }
    if (2 < uVar36 - 1) {
      do {
        *ppppppppplVar34 = (long ********)0x0;
        ppppppppplVar34[1] = (long ********)0x0;
        uVar24 = uVar24 - 4;
        ppppppppplVar34[6] = (long ********)0x0;
        ppppppppplVar34[7] = (long ********)0x0;
        ppppppppplVar34[4] = (long ********)0x0;
        ppppppppplVar34[5] = (long ********)0x0;
        ppppppppplVar34[2] = (long ********)0x0;
        ppppppppplVar34[3] = (long ********)0x0;
        ppppppppplVar34 = ppppppppplVar34 + 8;
      } while (uVar24 != 0);
    }
    ppppppppplVar34 = ppppppppplVar9 + uVar36 * 2;
  }
  if (0 < (long)ppppppppplVar34 - (long)ppppppppplVar9) {
    lVar17 = ((ulong)((long)ppppppppplVar34 - (long)ppppppppplVar9) >> 4) + 1;
    ppppppppplVar34 = ppppppppplVar9;
    do {
      lVar17 = lVar17 + -1;
      *ppppppppplVar34 = (long ********)0xbf800000;
      ppppppppplVar34[1] = (long ********)0x0;
      ppppppppplVar34 = ppppppppplVar34 + 2;
    } while (1 < lVar17);
  }
  local_148 = ppppppppplVar9;
  iVar8 = FUN_710392e1f0(&local_1b8,0x10,(long ****)0xf20,(byte ****)param_4,(long ****)param_5,
                         param_6,param_7,param_8);
  if ((iVar8 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_88 = (long ***)0xf20;
    uVar36 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_88);
    if ((uVar36 & 1) != 0) {
      FUN_710392e1f0(&local_1b8,0x10,(long ****)0xf20,(byte ****)param_4,(long ****)param_5,param_6,
                     param_7,param_8);
    }
  }
  ppuVar14 = local_1b8;
  nu::VirtualAllocHook(0xf20,0x10,local_1b8);
  ppuVar35 = local_1b8;
  FUN_71037c3a70(local_1b8);
  *(undefined4 *)(ppuVar35 + 2) = 0;
  *(undefined1 *)((long)ppuVar35 + 0x14) = 0;
  ppuVar35[0x1e3] = (undefined *)0x0;
  *ppuVar35 = (undefined *)&PTR_thunk_FUN_71037d83e0_7105243798;
  if (ppuVar35 == (undefined **)0x0) {
    plVar26 = (long *)0x0;
    lVar17 = 0;
  }
  else {
    plVar26 = (long *)ppuVar35[1];
    lVar17 = *plVar26;
  }
  FUN_71037dc9a0((int *)&local_1b8,(long)ppuVar35,&local_148,ppuVar14,(byte ****)param_4,
                 (long ****)param_5,param_6,param_7,param_8);
  lVar20 = *(long *)(lVar21 + 0x360);
  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_78 = (long *)0x0;
  local_70 = 0;
  local_88 = (long ***)&PTR_FUN_7105231af0;
  local_80 = (undefined **)0x0;
  if ((plVar26 != (long *)0x0) && (*plVar26 == lVar17)) {
    local_80 = ppuVar35;
    local_78 = (long *)ppuVar35[1];
    local_70 = *local_78;
    lVar17 = 0;
    plVar26 = (long *)0x0;
    ppuVar35 = (undefined **)0x0;
  }
  FUN_71035e9cc0((uint *)(*(long *)(lVar21 + 0x358) + (lVar20 + -1) * 0x28),(long)&local_88);
  local_88 = (long ***)&PTR_FUN_7105231af0;
  if (((local_78 != (long *)0x0) && (*local_78 == local_70)) && (local_80 != (undefined **)0x0)) {
    (**(code **)(*local_80 + 8))();
  }
  if (((plVar26 != (long *)0x0) && (ppuVar35 != (undefined **)0x0)) && (*plVar26 == lVar17)) {
    (**(code **)(*ppuVar35 + 8))(ppuVar35);
  }
  if (ppppppppplVar9 != (long *********)0x0) {
    FUN_710392eb40((ulong)ppppppppplVar9);
  }
LAB_71035d28c4:
  lVar17 = *param_2;
  lVar21 = param_2[1];
  if (lVar21 != 0) {
    plVar26 = (long *)(lVar21 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar6) {
        *plVar26 = *plVar26 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar26 = (long *)param_1[0x101];
  param_1[0x100] = lVar17;
  param_1[0x101] = lVar21;
  if (plVar26 != (long *)0x0) {
    plVar11 = plVar26 + 1;
    do {
      lVar17 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_1d0 != (long *)0x0) {
    plVar26 = local_1d0 + 1;
    do {
      lVar17 = *plVar26;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar6) {
        *plVar26 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*local_1d0 + 0x10))(local_1d0);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

