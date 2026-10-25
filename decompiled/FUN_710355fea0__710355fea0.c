// addr:      710355fea0
// offset:    0x355fea0
// name:      FUN_710355fea0
// mangled:   
// signature: undefined4 __cdecl FUN_710355fea0(long param_1, int param_2, uint * param_3, undefined8 param_4, undefined8 param_5, ulong param_6, long * * * param_7, long * * * param_8)


undefined4
FUN_710355fea0(long param_1,int param_2,uint *param_3,undefined8 param_4,undefined8 param_5,
              ulong param_6,long ***param_7,long ***param_8)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  ulong uVar13;
  size_t sVar14;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  long *********__nmemb;
  int iVar15;
  code *pcVar16;
  uint uVar17;
  byte ****ppppbVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  byte **ppbVar22;
  long *plVar23;
  long *plVar24;
  long ********pppppppplVar25;
  uint uVar26;
  uint uVar27;
  byte ****ppppbVar28;
  int *piVar29;
  long lVar30;
  long *********ppppppppplVar31;
  byte ****ppppbVar32;
  ulong *puVar33;
  long *plVar34;
  byte *pbVar35;
  long lVar37;
  undefined1 *puVar38;
  byte ****ppppbVar39;
  long lVar40;
  char *pcVar41;
  byte *pbVar42;
  ulong uVar43;
  uint uVar44;
  uint uVar45;
  undefined4 uVar46;
  byte ****ppppbVar47;
  long lVar48;
  uint uVar49;
  undefined **ppuVar50;
  int *piVar51;
  char *pcVar52;
  byte ***pppbVar53;
  long *********ppppppppplVar54;
  long *plVar55;
  int *piVar56;
  long *********ppppppppplVar57;
  int *piVar58;
  uint *puVar59;
  float fVar60;
  undefined1 auVar61 [16];
  byte ****local_308;
  long ********local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  byte local_298;
  undefined8 local_290;
  void *local_288;
  undefined2 local_1d0;
  undefined **local_1c8;
  byte ***local_1c0;
  byte **local_1b8;
  byte *local_1b0;
  ulong local_c8;
  long *local_c0;
  byte *local_b8;
  uint local_b0 [2];
  uint local_a8 [2];
  byte ***local_a0;
  long *local_98;
  byte ***local_88;
  long *local_80;
  void *local_78;
  uint local_70 [4];
  byte *pbVar36;
  
  piVar29 = (int *)(param_1 + 0x18000);
  std::mutex::lock();
  puVar12 = (ulong *)(param_1 + 0x193b0);
  puVar21 = (undefined8 *)(param_1 + 0x193b8);
  ppppbVar28 = (byte ****)*puVar21;
  ppppbVar47 = (byte ****)(long)param_2;
  if (ppppbVar28 != (byte ****)0x0) {
    puVar38 = (undefined1 *)((long)ppppbVar28 + -1);
    if (((ulong)puVar38 & (ulong)ppppbVar28) == 0) {
      ppppbVar18 = (byte ****)((ulong)puVar38 & (ulong)ppppbVar47);
    }
    else {
      ppppbVar18 = ppppbVar47;
      if (ppppbVar28 <= ppppbVar47) {
        uVar9 = 0;
        if (ppppbVar28 != (byte ****)0x0) {
          uVar9 = (ulong)ppppbVar47 / (ulong)ppppbVar28;
        }
        ppppbVar18 = (byte ****)((long)ppppbVar47 - uVar9 * (long)ppppbVar28);
      }
    }
    plVar34 = *(long **)(*puVar12 + (long)ppppbVar18 * 8);
    if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)) {
      if (((ulong)puVar38 & (ulong)ppppbVar28) == 0) {
        do {
          ppppbVar28 = (byte ****)plVar34[1];
          if (ppppbVar28 != ppppbVar47 &&
              (byte ****)((ulong)ppppbVar28 & (ulong)puVar38) != ppppbVar18) break;
          if ((ppppbVar28 == ppppbVar47) && (plVar23 = plVar34 + 2, (int)*plVar23 == param_2))
          goto LAB_71035604d8;
          plVar34 = (long *)*plVar34;
        } while (plVar34 != (long *)0x0);
      }
      else {
        do {
          ppppbVar39 = (byte ****)plVar34[1];
          if (ppppbVar39 == ppppbVar47) {
            plVar23 = plVar34 + 2;
            if ((int)*plVar23 == param_2) {
LAB_71035604d8:
              piVar29[(long)*(int *)((long)plVar23 + 4) * 0x2a + 0x26] =
                   piVar29[(long)*(int *)((long)plVar23 + 4) * 0x2a + 0x26] + 1;
              *(undefined1 *)(piVar29 + (long)*(int *)((long)plVar23 + 4) * 0x2a + 0x28) = 0;
              std::mutex::unlock();
              return 1;
            }
          }
          else {
            if (ppppbVar28 <= ppppbVar39) {
              uVar9 = 0;
              if (ppppbVar28 != (byte ****)0x0) {
                uVar9 = (ulong)ppppbVar39 / (ulong)ppppbVar28;
              }
              ppppbVar39 = (byte ****)((long)ppppbVar39 - uVar9 * (long)ppppbVar28);
            }
            if (ppppbVar39 != ppppbVar18) break;
          }
          plVar34 = (long *)*plVar34;
        } while (plVar34 != (long *)0x0);
      }
    }
  }
  uVar7 = *param_3;
  uVar9 = (ulong)uVar7;
  uVar8 = 0xffffff;
  lVar48 = *(long *)(*(long *)(DAT_7105332f20 + 0x78) + 8);
  if (uVar7 == 0xffffff) {
LAB_7103560124:
    uVar9 = 0;
  }
  else {
    if (uVar7 < *(uint *)(*(long *)(lVar48 + 8) + 4)) {
      uVar8 = uVar7;
      if (*(long *)(lVar48 + 0x28) != 0) {
        uVar8 = *(uint *)(*(long *)(lVar48 + 0x28) + uVar9 * 4);
      }
      if (((uVar8 == 0xffffff) || (*(uint *)(*(long *)(lVar48 + 8) + 8) <= uVar8)) ||
         (lVar48 = *(long *)(lVar48 + 0x30) + (ulong)uVar8 * 0x20, lVar48 == 0)) {
        uVar8 = 0xffffff;
      }
      else {
        uVar8 = 0xffffff;
        if ((*(byte *)(lVar48 + 0xf) >> 6 & 1) != 0) {
          uVar9 = FUN_710353eb80(uVar7);
          uVar19 = uVar9 >> 0x28;
          lVar48 = *(long *)(*(long *)(DAT_7105332f20 + 0x78) + 8);
          uVar7 = (uint)(uVar9 >> 0x20);
          uVar8 = uVar7 >> 8;
          if (uVar8 == 0xffffff) {
            local_2d0 = (long ********)(uVar9 & 0xffffffffff);
            puVar10 = bsearch(&local_2d0,*(void **)(lVar48 + 0x10),(ulong)**(uint **)(lVar48 + 8),8,
                              FUN_7103542240);
            if ((puVar10 != (ulong *)0x0) && (*puVar10 >> 0x28 != 0xffffff)) {
              lVar48 = *(long *)(lVar48 + 0x18) + (*puVar10 >> 0x28) * 0x20;
joined_r0x0071035600a0:
              while (lVar48 != 0) {
                FUN_710353e790((uint *)&local_2d0,uVar9);
                lVar48 = DAT_7105332f20;
                lVar40 = *(long *)(*(long *)(DAT_7105332f20 + 0x78) + 8);
                if ((uint)local_2d0 != 0xffffff) {
                  lVar20 = *(long *)(lVar40 + 8);
                  if ((uint)local_2d0 < *(uint *)(lVar20 + 4)) {
                    uVar7 = (uint)local_2d0;
                    if (*(long *)(lVar40 + 0x28) != 0) {
                      uVar7 = *(uint *)(*(long *)(lVar40 + 0x28) +
                                       ((ulong)local_2d0 & 0xffffffff) * 4);
                    }
                    if (((uVar7 == 0xffffff) || (*(uint *)(lVar20 + 8) <= uVar7)) ||
                       ((lVar30 = *(long *)(lVar40 + 0x30) + (ulong)uVar7 * 0x20, lVar30 == 0 ||
                        (((*(byte *)(lVar30 + 0xf) >> 6 & 1) == 0 &&
                         ((uint)local_2d0 < *(uint *)(lVar20 + 4))))))) {
                      uVar7 = (uint)local_2d0;
                      if (*(long *)(lVar40 + 0x28) != 0) {
                        uVar7 = *(uint *)(*(long *)(lVar40 + 0x28) +
                                         ((ulong)local_2d0 & 0xffffffff) * 4);
                      }
                      if ((((uVar7 != 0xffffff) && (uVar7 < *(uint *)(lVar20 + 8))) &&
                          (lVar20 = *(long *)(lVar40 + 0x30) + (ulong)uVar7 * 0x20, lVar20 != 0)) &&
                         ((*(ulong *)(lVar20 + 0x18) & 0xffffffffff) == 0x3262bd895)) {
                        uVar9 = FUN_710353ea90((uint)local_2d0);
                        uVar8 = (uint)uVar9;
                        if (uVar8 != 0xffffff) {
                          FUN_7103540a00(lVar48,uVar8);
                        }
                        goto LAB_7103561500;
                      }
                    }
                  }
                }
                uVar19 = uVar9 >> 0x28;
                uVar43 = 0xffffffffffffffff;
                uVar7 = (uint)(uVar9 >> 0x20);
                uVar8 = uVar7 >> 8;
                if (uVar8 != 0xffffff) {
                  uVar45 = *(uint *)(*(long *)(lVar40 + 8) + 4);
                  uVar43 = 0xffffffffffffffff;
                  if (uVar8 <= uVar45 && uVar45 != uVar7 >> 8) {
                    if (*(long *)(lVar40 + 0x28) != 0) {
                      uVar7 = *(uint *)(*(long *)(lVar40 + 0x28) + uVar19 * 4);
                      uVar19 = (ulong)uVar7;
                      uVar43 = 0xffffffffffffffff;
                      if (uVar7 == 0xffffff) goto LAB_71035606f0;
                    }
                    uVar43 = 0xffffffffffffffff;
                    if ((uint)uVar19 < *(uint *)(*(long *)(lVar40 + 8) + 8)) {
                      puVar10 = (ulong *)(*(long *)(lVar40 + 0x30) + uVar19 * 0x20);
                      if (puVar10 == (ulong *)0x0) {
                        uVar43 = 0xffffffffffffffff;
                      }
                      else {
                        uVar19 = *puVar10;
                        uVar7 = (uint)(uVar19 >> 0x20);
                        uVar8 = uVar7 >> 8;
                        uVar43 = 0xffffffffffffffff;
                        if (uVar8 != 0xffffff && (uVar8 <= uVar45 && uVar45 != uVar7 >> 8)) {
                          uVar43 = uVar19 & 0xffffff0000000000 | uVar9 & 0xffffffffff;
                        }
                      }
                    }
                  }
                }
LAB_71035606f0:
                uVar9 = uVar43 >> 0x28;
                uVar7 = (uint)(uVar43 >> 0x20);
                uVar8 = uVar7 >> 8;
                if (uVar8 == 0xffffff) {
                  local_2d0 = (long ********)(uVar43 & 0xffffffffff);
                  puVar10 = bsearch(&local_2d0,*(void **)(lVar40 + 0x10),
                                    (ulong)**(uint **)(lVar40 + 8),8,FUN_7103542240);
                  if ((puVar10 == (ulong *)0x0) || (uVar9 = *puVar10 >> 0x28, uVar9 == 0xffffff))
                  break;
                  lVar48 = *(long *)(lVar40 + 0x18);
                }
                else {
                  uVar45 = *(uint *)(*(long *)(lVar40 + 8) + 4);
                  if (((uVar45 < uVar8 || uVar45 == uVar7 >> 8) ||
                      ((*(long *)(lVar40 + 0x28) != 0 &&
                       (uVar7 = *(uint *)(*(long *)(lVar40 + 0x28) + uVar9 * 4),
                       uVar9 = (ulong)uVar7, uVar7 == 0xffffff)))) ||
                     (*(uint *)(*(long *)(lVar40 + 8) + 8) <= (uint)uVar9)) break;
                  lVar48 = *(long *)(lVar40 + 0x30);
                }
                lVar48 = lVar48 + uVar9 * 0x20;
                uVar9 = uVar43;
              }
            }
LAB_71035614fc:
            uVar8 = 0xffffff;
          }
          else {
            uVar45 = *(uint *)(*(long *)(lVar48 + 8) + 4);
            if (uVar45 < uVar8 || uVar45 == uVar7 >> 8) goto LAB_71035614fc;
            if (*(long *)(lVar48 + 0x28) == 0) {
LAB_7103560578:
              if ((uint)uVar19 < *(uint *)(*(long *)(lVar48 + 8) + 8)) {
                lVar48 = *(long *)(lVar48 + 0x30) + uVar19 * 0x20;
                goto joined_r0x0071035600a0;
              }
              goto LAB_71035614fc;
            }
            uVar7 = *(uint *)(*(long *)(lVar48 + 0x28) + uVar19 * 4);
            uVar19 = (ulong)uVar7;
            uVar8 = 0xffffff;
            if (uVar7 != 0xffffff) goto LAB_7103560578;
          }
LAB_7103561500:
          uVar9 = (ulong)*param_3;
        }
      }
      lVar48 = *(long *)(*(long *)(DAT_7105332f20 + 0x78) + 8);
      if ((int)uVar9 == 0xffffff) goto LAB_7103560124;
    }
    else {
      lVar48 = *(long *)(*(long *)(DAT_7105332f20 + 0x78) + 8);
      uVar8 = 0xffffff;
    }
    uVar7 = (uint)uVar9;
    if (*(uint *)(*(long *)(lVar48 + 8) + 4) <= uVar7) goto LAB_7103560124;
    if (*(long *)(lVar48 + 0x28) != 0) {
      uVar7 = *(uint *)(*(long *)(lVar48 + 0x28) + uVar9 * 4);
    }
    if (((uVar7 == 0xffffff) || (*(uint *)(*(long *)(lVar48 + 8) + 8) <= uVar7)) ||
       (puVar10 = (ulong *)(*(long *)(lVar48 + 0x30) + (ulong)uVar7 * 0x20), puVar10 == (ulong *)0x0
       )) goto LAB_7103560124;
    uVar9 = *puVar10 & 0xffffffffff;
  }
  uVar19 = uVar9 >> 0x20;
  uVar7 = (int)(uVar9 >> 0x20) + 1;
  uVar45 = ~(uint)uVar9;
  if (uVar7 < 0x100) {
    uVar19 = (ulong)uVar7;
    uVar45 = (&DAT_7104754084)[uVar9 & 0xff ^ 0xd0] ^ uVar45 >> 8;
  }
  uVar7 = (int)uVar19 + 5;
  if (uVar7 < 0x100) {
    uVar45 = (&DAT_7104754084)[uVar45 & 0xff ^ 0x74] ^ uVar45 >> 8;
    uVar45 = (&DAT_7104754084)[uVar45 & 0xff ^ 0x72] ^ uVar45 >> 8;
    uVar45 = (&DAT_7104754084)[uVar45 & 0xff ^ 0x61] ^ uVar45 >> 8;
    uVar45 = (&DAT_7104754084)[uVar45 & 0xff ^ 0x69] ^ uVar45 >> 8;
    uVar45 = (&DAT_7104754084)[uVar45 & 0xff ^ 0x6c] ^ uVar45 >> 8;
    uVar19 = (ulong)uVar7;
  }
  local_2d0 = (long ********)((ulong)~uVar45 | (uVar19 & 0xff) << 0x20);
  __nmemb = (long *********)(ulong)*(uint *)(*(long *)(lVar48 + 8) + 8);
  pcVar16 = FUN_7103542240;
  ppppbVar28 = (byte ****)&DAT_00000008;
  puVar11 = bsearch(&local_2d0,*(void **)(lVar48 + 0x20),(size_t)__nmemb,8,FUN_7103542240);
  if (puVar11 == (undefined8 *)0x0) {
    uVar7 = 0xffffff;
    if (uVar8 != 0xffffff) goto LAB_7103560258;
LAB_710356024c:
    if (uVar7 != 0xffffff) goto LAB_7103560258;
LAB_7103560aec:
    std::mutex::unlock();
    uVar46 = 0;
    goto LAB_71035614b8;
  }
  uVar45 = (uint)((ulong)*puVar11 >> 0x20);
  uVar26 = uVar45 >> 8;
  uVar7 = 0xffffff;
  if ((uVar26 != 0xffffff) &&
     (uVar49 = *(uint *)(*(long *)(lVar48 + 8) + 4), uVar7 = uVar45 >> 8,
     uVar49 < uVar26 || uVar49 == uVar7)) {
    uVar7 = 0xffffff;
  }
  if (uVar8 == 0xffffff) goto LAB_710356024c;
LAB_7103560258:
  if (*piVar29 == -1) {
    local_308 = (byte ****)0x0;
  }
  else {
    piVar29 = (int *)(param_1 + 0x180a8);
    if (*piVar29 == -1) {
      local_308 = (byte ****)0x1;
    }
    else {
      piVar29 = (int *)(param_1 + 0x18150);
      if (*piVar29 == -1) {
        local_308 = (byte ****)0x2;
      }
      else {
        piVar29 = (int *)(param_1 + 0x181f8);
        if (*piVar29 == -1) {
          local_308 = (byte ****)0x3;
        }
        else {
          piVar29 = (int *)(param_1 + 0x182a0);
          if (*piVar29 == -1) {
            local_308 = (byte ****)&DAT_00000004;
          }
          else {
            piVar29 = (int *)(param_1 + 0x18348);
            if (*piVar29 == -1) {
              local_308 = (byte ****)0x5;
            }
            else {
              piVar29 = (int *)(param_1 + 0x183f0);
              if (*piVar29 == -1) {
                local_308 = (byte ****)0x6;
              }
              else {
                piVar29 = (int *)(param_1 + 0x18498);
                if (*piVar29 == -1) {
                  local_308 = (byte ****)&DAT_00000007;
                }
                else {
                  piVar29 = (int *)(param_1 + 0x18540);
                  if (*piVar29 == -1) {
                    local_308 = (byte ****)&DAT_00000008;
                  }
                  else {
                    piVar29 = (int *)(param_1 + 0x185e8);
                    if (*piVar29 == -1) {
                      local_308 = (byte ****)&DAT_00000009;
                    }
                    else {
                      piVar29 = (int *)(param_1 + 0x18690);
                      if (*piVar29 == -1) {
                        local_308 = (byte ****)0xa;
                      }
                      else {
                        piVar29 = (int *)(param_1 + 0x18738);
                        if (*piVar29 == -1) {
                          local_308 = (byte ****)0xb;
                        }
                        else {
                          piVar29 = (int *)(param_1 + 0x187e0);
                          if (*piVar29 == -1) {
                            local_308 = (byte ****)&DAT_0000000c;
                          }
                          else {
                            piVar29 = (int *)(param_1 + 0x18888);
                            if (*piVar29 == -1) {
                              local_308 = (byte ****)&DAT_0000000d;
                            }
                            else {
                              piVar29 = (int *)(param_1 + 0x18930);
                              if (*piVar29 == -1) {
                                local_308 = (byte ****)&DAT_0000000e;
                              }
                              else {
                                piVar29 = (int *)(param_1 + 0x189d8);
                                if (*piVar29 == -1) {
                                  local_308 = (byte ****)&DAT_0000000f;
                                }
                                else {
                                  piVar29 = (int *)(param_1 + 0x18a80);
                                  if (*piVar29 == -1) {
                                    local_308 = (byte ****)&DAT_00000010;
                                  }
                                  else {
                                    piVar29 = (int *)(param_1 + 0x18b28);
                                    if (*piVar29 == -1) {
                                      local_308 = (byte ****)&DAT_00000011;
                                    }
                                    else {
                                      piVar29 = (int *)(param_1 + 0x18bd0);
                                      if (*piVar29 == -1) {
                                        local_308 = (byte ****)&DAT_00000012;
                                      }
                                      else {
                                        piVar29 = (int *)(param_1 + 0x18c78);
                                        if (*piVar29 == -1) {
                                          local_308 = (byte ****)&DAT_00000013;
                                        }
                                        else {
                                          piVar29 = (int *)(param_1 + 0x18d20);
                                          if (*piVar29 == -1) {
                                            local_308 = (byte ****)&DAT_00000014;
                                          }
                                          else {
                                            piVar29 = (int *)(param_1 + 0x18dc8);
                                            if (*piVar29 == -1) {
                                              local_308 = (byte ****)&DAT_00000015;
                                            }
                                            else {
                                              piVar29 = (int *)(param_1 + 0x18e70);
                                              if (*piVar29 == -1) {
                                                local_308 = (byte ****)0x16;
                                              }
                                              else {
                                                piVar29 = (int *)(param_1 + 0x18f18);
                                                if (*piVar29 == -1) {
                                                  local_308 = (byte ****)0x17;
                                                }
                                                else {
                                                  piVar29 = (int *)(param_1 + 0x18fc0);
                                                  if (*piVar29 == -1) {
                                                    local_308 = (byte ****)&SUB_00000018;
                                                  }
                                                  else {
                                                    piVar29 = (int *)(param_1 + 0x19068);
                                                    if (*piVar29 == -1) {
                                                      local_308 = (byte ****)&DAT_00000019;
                                                    }
                                                    else {
                                                      piVar29 = (int *)(param_1 + 0x19110);
                                                      if (*piVar29 == -1) {
                                                        local_308 = (byte ****)&DAT_0000001a;
                                                      }
                                                      else {
                                                        piVar29 = (int *)(param_1 + 0x191b8);
                                                        if (*piVar29 == -1) {
                                                          local_308 = (byte ****)&DAT_0000001b;
                                                        }
                                                        else {
                                                          piVar29 = (int *)(param_1 + 0x19260);
                                                          if (*piVar29 == -1) {
                                                            local_308 = (byte ****)&DAT_0000001c;
                                                          }
                                                          else {
                                                            piVar29 = (int *)(param_1 + 0x19308);
                                                            if (*piVar29 != -1) {
                                                              std::mutex::unlock();
                                                              uVar46 = 0;
                                                              goto LAB_71035614b8;
                                                            }
                                                            local_308 = (byte ****)&DAT_0000001d;
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *piVar29 = param_2;
  puVar59 = (uint *)(param_1 + (long)local_308 * 0xa8 + 0x1802c);
  uVar45 = *puVar59;
  *puVar59 = uVar8;
  if (uVar8 != 0xffffff) {
    FUN_7103540a00(DAT_7105332f20,uVar8);
  }
  if (uVar45 != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,uVar45,__nmemb,ppppbVar28,(long ****)pcVar16,param_6,param_7,
                   param_8);
  }
  lVar48 = DAT_7105332f20;
  uVar45 = *param_3;
  if (uVar45 == 0xffffff) {
LAB_7103560880:
    uVar9 = 0;
  }
  else {
    lVar40 = *(long *)(*(long *)(DAT_7105332f20 + 0x78) + 8);
    if (*(uint *)(*(long *)(lVar40 + 8) + 4) <= uVar45) goto LAB_7103560880;
    if (*(long *)(lVar40 + 0x28) != 0) {
      uVar45 = *(uint *)(*(long *)(lVar40 + 0x28) + (ulong)uVar45 * 4);
    }
    if ((uVar45 == 0xffffff) || (*(uint *)(*(long *)(lVar40 + 8) + 8) <= uVar45))
    goto LAB_7103560880;
    puVar10 = (ulong *)(*(long *)(lVar40 + 0x30) + (ulong)uVar45 * 0x20);
    uVar9 = 0;
    if (puVar10 != (ulong *)0x0) {
      uVar9 = *puVar10 & 0xffffffffff;
    }
  }
  lVar40 = param_1 + (long)local_308 * 0xa8;
  *(ulong *)(lVar40 + 0x18008) = uVar9;
  piVar58 = (int *)(lVar40 + 0x18098);
  *piVar58 = *piVar58 + 1;
  uVar45 = *puVar59;
  if (uVar45 == 0xffffff) {
    std::mutex::unlock();
  }
  else {
    if ((uVar45 < *(uint *)(lVar48 + 0x18)) &&
       (*(char *)(*(long *)(lVar48 + 8) + (ulong)uVar45 * 8 + 4) != '\0')) {
      uVar45 = *(uint *)(*(long *)(lVar48 + 8) + (ulong)uVar45 * 8);
      if ((uVar45 == 0xffffff) || (*(uint *)(lVar48 + 0x1c) <= uVar45)) goto LAB_71035609a8;
      puVar11 = (undefined8 *)(*(long *)(lVar48 + 0x10) + (ulong)uVar45 * 0x18);
      pcVar41 = (char *)0x0;
      if ((*(char *)((long)puVar11 + 0xc) != '\0') && (puVar11 != (undefined8 *)0x0)) {
        pcVar41 = (char *)*puVar11;
      }
    }
    else {
LAB_71035609a8:
      pcVar41 = (char *)0x0;
    }
    *(char **)(param_1 + (long)local_308 * 0xa8 + 0x18010) = pcVar41;
    if ((((*pcVar41 != 'E') || (pcVar41[1] != 'F')) || (pcVar41[2] != 'F')) || (pcVar41[3] != 'N'))
    goto LAB_7103560ad4;
    if (*(short *)(pcVar41 + 8) < 1) goto LAB_71035608c8;
    puVar10 = (ulong *)(param_1 + 0x193d8);
    iVar15 = (int)local_308;
    if (-1 < *(short *)(pcVar41 + 0xe)) {
      ppppppppplVar54 = (long *********)(pcVar41 + (long)(int)*(short *)(pcVar41 + 0xe) * 0x1000);
      if (*(short *)((long)ppppppppplVar54 + 10) == 0x16) {
        std::mutex::unlock();
        std::mutex::lock();
        pcVar16 = (code *)(ulong)*(byte *)(param_1 + 0x194b8);
        param_6 = 0;
        ppppbVar28 = local_308;
        bVar6 = FUN_71000a4d90(*(long *)(param_1 + 0x194d0),(long *)(param_1 + 0x194d8),
                               (long)ppppppppplVar54,iVar15,*(byte *)(param_1 + 0x194b8),0);
        std::mutex::unlock();
        std::mutex::lock();
        __nmemb = ppppppppplVar54;
        if (bVar6) {
          *(int *)(param_1 + (long)local_308 * 0xa8 + 0x18004) = iVar15;
          lVar48 = *(long *)(*(long *)(*(long *)(param_1 + 0x194d0) + 0x98) + (long)local_308 * 8);
          if (lVar48 == 0) {
            lVar40 = 0;
          }
          else {
            lVar40 = 0;
            if (*(char *)(lVar48 + 9) != '\0') {
              lVar40 = lVar48;
            }
          }
          __nmemb = (long *********)0x0;
          FUN_710009ab70(lVar40,FUN_71035b9360,0);
          goto LAB_7103561540;
        }
      }
LAB_7103560ad4:
      *piVar29 = -1;
      *piVar58 = *piVar58 + -1;
      goto LAB_7103560aec;
    }
LAB_7103561540:
    ppppbVar39 = (byte ****)*puVar21;
    ppppbVar18 = local_308;
    if (ppppbVar39 == (byte ****)0x0) {
LAB_71035615f4:
      plVar34 = (long *)FUN_710392e290(0x10,0x18,(long ****)__nmemb,ppppbVar28,(long ****)pcVar16,
                                       param_6,param_7,param_8);
      if (plVar34 == (long *)0x0) {
        local_1c8 = (undefined **)((ulong)local_1c8 & 0xffffffff00000000);
        local_2d0 = (long ********)&SUB_00000018;
        __nmemb = &local_2d0;
        (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c8);
        plVar34 = (long *)FUN_710392e290(0x10,0x18,(long ****)__nmemb,ppppbVar28,(long ****)pcVar16,
                                         param_6,param_7,param_8);
      }
      *(int *)(plVar34 + 2) = param_2;
      *(int *)((long)plVar34 + 0x14) = iVar15;
      *plVar34 = 0;
      plVar34[1] = (long)ppppbVar47;
      fVar60 = (float)(*(long *)(param_1 + 0x193c8) + 1);
      if ((ppppbVar39 == (byte ****)0x0) ||
         (*(float *)(param_1 + 0x193d0) * (float)ppppbVar39 < fVar60)) {
        if (ppppbVar39 < (byte ****)0x3) {
          uVar9 = 1;
        }
        else {
          uVar9 = (ulong)(((ulong)((long)ppppbVar39 + -1) & (ulong)ppppbVar39) != 0);
        }
        uVar19 = (ulong)(fVar60 / *(float *)(param_1 + 0x193d0));
        uVar9 = uVar9 | (long)ppppbVar39 << 1;
        if (uVar19 <= uVar9) {
          uVar19 = uVar9;
        }
        FUN_710268b080(puVar12,uVar19,(long ****)__nmemb,ppppbVar28,(long ****)pcVar16,param_6,
                       param_7,param_8);
        ppppbVar39 = (byte ****)*puVar21;
        if (((ulong)((long)ppppbVar39 + -1) & (ulong)ppppbVar39) == 0) {
          ppppbVar18 = (byte ****)((ulong)((long)ppppbVar39 + -1) & (ulong)ppppbVar47);
        }
        else {
          ppppbVar18 = ppppbVar47;
          if (ppppbVar39 <= ppppbVar47) {
            uVar9 = 0;
            if (ppppbVar39 != (byte ****)0x0) {
              uVar9 = (ulong)ppppbVar47 / (ulong)ppppbVar39;
            }
            ppppbVar18 = (byte ****)((long)ppppbVar47 - uVar9 * (long)ppppbVar39);
          }
        }
      }
      uVar9 = *puVar12;
      plVar23 = *(long **)(uVar9 + (long)ppppbVar18 * 8);
      if (plVar23 == (long *)0x0) {
        plVar23 = (long *)(param_1 + 0x193c0);
        *plVar34 = *plVar23;
        *plVar23 = (long)plVar34;
        *(long **)(uVar9 + (long)ppppbVar18 * 8) = plVar23;
        if (*plVar34 != 0) {
          ppppbVar47 = *(byte *****)(*plVar34 + 8);
          if (((ulong)((long)ppppbVar39 + -1) & (ulong)ppppbVar39) == 0) {
            ppppbVar47 = (byte ****)((ulong)ppppbVar47 & (ulong)((long)ppppbVar39 + -1));
          }
          else if (ppppbVar39 <= ppppbVar47) {
            uVar9 = 0;
            if (ppppbVar39 != (byte ****)0x0) {
              uVar9 = (ulong)ppppbVar47 / (ulong)ppppbVar39;
            }
            ppppbVar47 = (byte ****)((long)ppppbVar47 - uVar9 * (long)ppppbVar39);
          }
          plVar23 = (long *)(*puVar12 + (long)ppppbVar47 * 8);
          goto LAB_7103561768;
        }
      }
      else {
        *plVar34 = *plVar23;
LAB_7103561768:
        *plVar23 = (long)plVar34;
      }
      *(long *)(param_1 + 0x193c8) = *(long *)(param_1 + 0x193c8) + 1;
    }
    else {
      puVar38 = (undefined1 *)((long)ppppbVar39 + -1);
      if (((ulong)puVar38 & (ulong)ppppbVar39) == 0) {
        ppppbVar18 = (byte ****)((ulong)puVar38 & (ulong)ppppbVar47);
      }
      else {
        ppppbVar18 = ppppbVar47;
        if (ppppbVar39 <= ppppbVar47) {
          uVar9 = 0;
          if (ppppbVar39 != (byte ****)0x0) {
            uVar9 = (ulong)ppppbVar47 / (ulong)ppppbVar39;
          }
          ppppbVar18 = (byte ****)((long)ppppbVar47 - uVar9 * (long)ppppbVar39);
        }
      }
      plVar34 = *(long **)(*puVar12 + (long)ppppbVar18 * 8);
      if (plVar34 == (long *)0x0) goto LAB_71035615f4;
      if (((ulong)puVar38 & (ulong)ppppbVar39) == 0) {
        do {
          plVar34 = (long *)*plVar34;
          if ((plVar34 == (long *)0x0) ||
             ((byte ****)plVar34[1] != ppppbVar47 &&
              (byte ****)((ulong)plVar34[1] & (ulong)puVar38) != ppppbVar18)) goto LAB_71035615f4;
        } while ((int)plVar34[2] != param_2);
      }
      else {
        do {
          plVar34 = (long *)*plVar34;
          if (plVar34 == (long *)0x0) goto LAB_71035615f4;
          ppppbVar32 = (byte ****)plVar34[1];
          if (ppppbVar32 != ppppbVar47) {
            if (ppppbVar39 <= ppppbVar32) {
              uVar9 = 0;
              if (ppppbVar39 != (byte ****)0x0) {
                uVar9 = (ulong)ppppbVar32 / (ulong)ppppbVar39;
              }
              ppppbVar32 = (byte ****)((long)ppppbVar32 - uVar9 * (long)ppppbVar39);
            }
            if (ppppbVar32 != ppppbVar18) goto LAB_71035615f4;
          }
        } while (*(int *)(plVar34 + 2) != param_2);
      }
    }
    lVar48 = param_1 + (long)local_308 * 0xa8;
    pcVar52 = pcVar41 + 0x10;
    *(char **)(lVar48 + 0x18018) = pcVar52;
    pcVar52 = pcVar52 + (long)*(short *)(pcVar41 + 8) * 0x10;
    *(char **)(lVar48 + 0x18020) = pcVar52;
    sVar4 = *(short *)(pcVar41 + 0xc);
    *(long *)(lVar48 + 0x18088) = (long)(pcVar52 + (long)sVar4 * 4);
    pbVar42 = (byte *)(pcVar52 + (long)sVar4 * 4 + *(short *)(pcVar41 + 10));
    plVar34 = (long *)(lVar48 + 0x18068);
    uVar9 = (ulong)*(short *)(pcVar41 + 8);
    uVar19 = *(long *)(lVar48 + 0x18070) - *plVar34 >> 3;
    if (uVar19 < uVar9) {
      FUN_7103562fc0(plVar34,uVar9 - uVar19,(long ****)__nmemb,ppppbVar28,(long ****)pcVar16,param_6
                     ,param_7,param_8);
    }
    else if (uVar19 != uVar9) {
      *(long *)(lVar48 + 0x18070) = *plVar34 + uVar9 * 8;
    }
    if (0 < *(short *)(pcVar41 + 8)) {
      lVar40 = 0;
      plVar23 = (long *)(param_1 + 0x193e8);
      do {
        *(byte **)(*plVar34 + lVar40 * 8) = pbVar42;
        sVar14 = strlen((char *)pbVar42);
        if ((int)sVar14 == 0) {
          uVar9 = 0;
        }
        else {
          uVar45 = 0xffffffff;
          pbVar36 = pbVar42;
          do {
            pbVar35 = pbVar36 + 1;
            bVar3 = *pbVar36;
            uVar26 = bVar3 + 0x20;
            if (0x19 < bVar3 - 0x41) {
              uVar26 = (uint)bVar3;
            }
            uVar45 = (&DAT_7104754084)[(uVar26 ^ uVar45) & 0xff] ^ uVar45 >> 8;
            pbVar36 = pbVar35;
          } while (pbVar35 < pbVar42 + (sVar14 & 0xffffffff));
          uVar9 = (ulong)~uVar45;
        }
        ppppbVar39 = *(byte *****)(param_1 + 0x193e0);
        ppppbVar47 = (byte ****)(uVar9 | (sVar14 & 0xff) << 0x20);
        ppppbVar18 = local_308;
        if (ppppbVar39 == (byte ****)0x0) {
LAB_7103561950:
          plVar24 = (long *)FUN_710392e290(0x10,0x20,(long ****)__nmemb,ppppbVar28,
                                           (long ****)pcVar16,param_6,param_7,param_8);
          if (plVar24 == (long *)0x0) {
            local_1c8 = (undefined **)((ulong)local_1c8 & 0xffffffff00000000);
            local_2d0 = (long ********)&SUB_00000020;
            __nmemb = &local_2d0;
            (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c8);
            plVar24 = (long *)FUN_710392e290(0x10,0x20,(long ****)__nmemb,ppppbVar28,
                                             (long ****)pcVar16,param_6,param_7,param_8);
          }
          plVar24[1] = (long)ppppbVar47;
          plVar24[2] = (long)ppppbVar47;
          *(int *)(plVar24 + 3) = param_2;
          *(int *)((long)plVar24 + 0x1c) = (int)lVar40;
          *plVar24 = 0;
          fVar60 = (float)(*(long *)(param_1 + 0x193f0) + 1);
          if ((ppppbVar39 == (byte ****)0x0) ||
             (*(float *)(param_1 + 0x193f8) * (float)ppppbVar39 < fVar60)) {
            if (ppppbVar39 < (byte ****)0x3) {
              uVar9 = 1;
            }
            else {
              uVar9 = (ulong)(((ulong)((long)ppppbVar39 + -1) & (ulong)ppppbVar39) != 0);
            }
            uVar9 = uVar9 | (long)ppppbVar39 << 1;
            uVar19 = (ulong)(fVar60 / *(float *)(param_1 + 0x193f8));
            if (uVar19 <= uVar9) {
              uVar19 = uVar9;
            }
            if (uVar19 - 1 == 0) {
              uVar19 = 2;
            }
            else if ((uVar19 - 1 & uVar19) != 0) {
              uVar19 = std::__next_prime(uVar19);
            }
            uVar9 = *(ulong *)(param_1 + 0x193e0);
            if (uVar9 < uVar19) {
LAB_7103561a40:
              FUN_7103563190(puVar10,uVar19,(long ****)__nmemb,ppppbVar28,(long ****)pcVar16,param_6
                             ,param_7,param_8);
            }
            else if (uVar19 < uVar9) {
              uVar43 = (ulong)((float)*(ulong *)(param_1 + 0x193f0) / *(float *)(param_1 + 0x193f8))
              ;
              if (uVar9 < 3 || (uVar9 - 1 & uVar9) != 0) {
                uVar43 = std::__next_prime(uVar43);
              }
              else if (1 < uVar43) {
                uVar43 = 1L << (-LZCOUNT(uVar43 - 1) & 0x3fU);
              }
              if (uVar43 <= uVar19) {
                uVar43 = uVar19;
              }
              uVar19 = uVar43;
              if (uVar43 < uVar9) goto LAB_7103561a40;
            }
            ppppbVar39 = *(byte *****)(param_1 + 0x193e0);
            if (((ulong)((long)ppppbVar39 + -1) & (ulong)ppppbVar39) == 0) {
              ppppbVar18 = (byte ****)((ulong)((long)ppppbVar39 + -1) & (ulong)ppppbVar47);
            }
            else {
              ppppbVar18 = ppppbVar47;
              if (ppppbVar39 <= ppppbVar47) {
                uVar9 = 0;
                if (ppppbVar39 != (byte ****)0x0) {
                  uVar9 = (ulong)ppppbVar47 / (ulong)ppppbVar39;
                }
                ppppbVar18 = (byte ****)((long)ppppbVar47 - uVar9 * (long)ppppbVar39);
              }
            }
          }
          uVar9 = *puVar10;
          plVar55 = *(long **)(uVar9 + (long)ppppbVar18 * 8);
          if (plVar55 == (long *)0x0) {
            *plVar24 = *plVar23;
            *plVar23 = (long)plVar24;
            *(long **)(uVar9 + (long)ppppbVar18 * 8) = plVar23;
            if (*plVar24 != 0) {
              ppppbVar47 = *(byte *****)(*plVar24 + 8);
              if (((ulong)((long)ppppbVar39 + -1) & (ulong)ppppbVar39) == 0) {
                ppppbVar47 = (byte ****)((ulong)ppppbVar47 & (ulong)((long)ppppbVar39 + -1));
              }
              else if (ppppbVar39 <= ppppbVar47) {
                uVar9 = 0;
                if (ppppbVar39 != (byte ****)0x0) {
                  uVar9 = (ulong)ppppbVar47 / (ulong)ppppbVar39;
                }
                ppppbVar47 = (byte ****)((long)ppppbVar47 - uVar9 * (long)ppppbVar39);
              }
              plVar55 = (long *)(*puVar10 + (long)ppppbVar47 * 8);
              goto LAB_7103561b58;
            }
          }
          else {
            *plVar24 = *plVar55;
LAB_7103561b58:
            *plVar55 = (long)plVar24;
          }
          *(long *)(param_1 + 0x193f0) = *(long *)(param_1 + 0x193f0) + 1;
        }
        else {
          puVar38 = (undefined1 *)((long)ppppbVar39 + -1);
          if (((ulong)puVar38 & (ulong)ppppbVar39) == 0) {
            ppppbVar18 = (byte ****)((ulong)puVar38 & (ulong)ppppbVar47);
          }
          else {
            ppppbVar18 = ppppbVar47;
            if (ppppbVar39 <= ppppbVar47) {
              uVar9 = 0;
              if (ppppbVar39 != (byte ****)0x0) {
                uVar9 = (ulong)ppppbVar47 / (ulong)ppppbVar39;
              }
              ppppbVar18 = (byte ****)((long)ppppbVar47 - uVar9 * (long)ppppbVar39);
            }
          }
          plVar24 = *(long **)(*puVar10 + (long)ppppbVar18 * 8);
          if (plVar24 == (long *)0x0) goto LAB_7103561950;
          if (((ulong)puVar38 & (ulong)ppppbVar39) == 0) {
            do {
              plVar24 = (long *)*plVar24;
              if ((plVar24 == (long *)0x0) ||
                 ((byte ****)plVar24[1] != ppppbVar47 &&
                  (byte ****)((ulong)plVar24[1] & (ulong)puVar38) != ppppbVar18))
              goto LAB_7103561950;
            } while ((byte ****)plVar24[2] != ppppbVar47);
          }
          else {
            do {
              plVar24 = (long *)*plVar24;
              if (plVar24 == (long *)0x0) goto LAB_7103561950;
              ppppbVar32 = (byte ****)plVar24[1];
              if (ppppbVar32 != ppppbVar47) {
                if (ppppbVar39 <= ppppbVar32) {
                  uVar9 = 0;
                  if (ppppbVar39 != (byte ****)0x0) {
                    uVar9 = (ulong)ppppbVar32 / (ulong)ppppbVar39;
                  }
                  ppppbVar32 = (byte ****)((long)ppppbVar32 - uVar9 * (long)ppppbVar39);
                }
                if (ppppbVar32 != ppppbVar18) goto LAB_7103561950;
              }
            } while ((byte ****)plVar24[2] != ppppbVar47);
          }
        }
        pbVar36 = pbVar42 + 1;
        do {
          pbVar42 = pbVar36 + 1;
          bVar3 = *pbVar36;
          pbVar36 = pbVar42;
        } while (bVar3 != 0);
        lVar40 = lVar40 + 1;
      } while (lVar40 < *(short *)(pcVar41 + 8));
    }
    std::mutex::unlock();
    plVar34 = (long *)(param_1 + (long)local_308 * 0xa8 + 0x18080);
    *plVar34 = (long)pbVar42;
    if (0 < *(short *)(pcVar41 + 10)) {
      lVar40 = param_1 + (long)local_308 * 0xa8;
      *(int *)(lVar40 + 0x18030) = (int)*(short *)(pcVar41 + 10);
      plVar23 = (long *)(lVar40 + 0x18038);
      uVar9 = (ulong)*(short *)(pcVar41 + 10);
      plVar24 = (long *)(lVar40 + 0x18040);
      lVar20 = *plVar23;
      piVar58 = (int *)*plVar24;
      lVar30 = (long)piVar58 - lVar20 >> 5;
      lVar40 = lVar30 * 0xfc0fc0fc0fc0fc1 - uVar9;
      if ((ulong)(lVar30 * 0xfc0fc0fc0fc0fc1) < uVar9) {
        plVar55 = (long *)(param_1 + (long)local_308 * 0xa8 + 0x18048);
        lVar37 = *plVar55;
        if ((ulong)((lVar37 - (long)piVar58 >> 5) * 0xfc0fc0fc0fc0fc1) <
            uVar9 + lVar30 * -0xfc0fc0fc0fc0fc1) {
          if (*(short *)(pcVar41 + 10) < 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar20 = lVar37 - lVar20 >> 5;
          if ((ulong)(lVar20 * 0xfc0fc0fc0fc0fc1) < 0xfc0fc0fc0fc0f) {
            uVar43 = lVar20 * 0x1f81f81f81f81f82;
            uVar19 = uVar9;
            if (uVar9 <= uVar43) {
              uVar19 = uVar43;
            }
            uVar43 = extraout_x1;
            if (uVar19 != 0) goto LAB_7103562044;
LAB_71035620a0:
            lVar20 = 0;
          }
          else {
            uVar19 = 0x1f81f81f81f81f;
LAB_7103562044:
            pppppppplVar25 = (long ********)(uVar19 * 0x820);
            if (pppppppplVar25 == (long ********)0x0) {
              pppppppplVar25 = (long ********)0x1;
            }
            lVar20 = FUN_710392e290(0x10,pppppppplVar25,(long ****)__nmemb,ppppbVar28,
                                    (long ****)pcVar16,param_6,param_7,param_8);
            uVar43 = extraout_x1_01;
            if (lVar20 == 0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_1c8 = (undefined **)((ulong)local_1c8 & 0xffffffff00000000);
                __nmemb = &local_2d0;
                local_2d0 = pppppppplVar25;
                auVar61 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c8);
                uVar43 = auVar61._8_8_;
                if (((auVar61._0_8_ & 1) != 0) &&
                   (lVar20 = FUN_710392e290(0x10,pppppppplVar25,(long ****)__nmemb,ppppbVar28,
                                            (long ****)pcVar16,param_6,param_7,param_8),
                   uVar43 = extraout_x1_02, lVar20 != 0)) goto LAB_71035620a4;
              }
              goto LAB_71035620a0;
            }
          }
LAB_71035620a4:
          puVar11 = (undefined8 *)(lVar20 + lVar30 * 0x20);
          puVar21 = puVar11;
          do {
            *(undefined4 *)(puVar21 + 1) = 0xffffff;
            puVar21[0x1f] = 0;
            puVar21[0x20] = 0;
            lVar40 = lVar40 + 1;
            puVar21[0x14] = 0;
            puVar21[0x24] = 0;
            puVar21[0x34] = 0;
            puVar21[0x50] = 0;
            puVar21[0x4f] = 0;
            puVar21[0x4e] = 0;
            puVar21[0x4d] = 0;
            puVar21[0x4c] = 0;
            puVar21[0x4b] = 0;
            puVar21[0x4a] = 0;
            puVar21[0x49] = 0;
            puVar21[0x48] = 0;
            puVar21[0x47] = 0;
            puVar21[0x46] = 0;
            puVar21[0x45] = 0;
            puVar21[0x44] = 0;
            puVar21[0x60] = 0;
            puVar21[0x5f] = 0;
            puVar21[0x5e] = 0;
            puVar21[0x5d] = 0;
            puVar21[0x5c] = 0;
            puVar21[0x5b] = 0;
            puVar21[0x5a] = 0;
            puVar21[0x59] = 0;
            puVar21[0x58] = 0;
            puVar21[0x57] = 0;
            puVar21[0x56] = 0;
            puVar21[0x55] = 0;
            puVar21[0x54] = 0;
            puVar21[0x70] = 0;
            puVar21[0x6f] = 0;
            puVar21[0x6e] = 0;
            puVar21[0x6d] = 0;
            puVar21[0x6c] = 0;
            puVar21[0x6b] = 0;
            puVar21[0x6a] = 0;
            puVar21[0x69] = 0;
            puVar21[0x68] = 0;
            puVar21[0x67] = 0;
            puVar21[0x66] = 0;
            puVar21[0x65] = 0;
            puVar21[100] = 0;
            puVar21[0x80] = 0;
            puVar21[0x7f] = 0;
            puVar21[0x7e] = 0;
            puVar21[0x7d] = 0;
            puVar21[0x7c] = 0;
            puVar21[0x7b] = 0;
            puVar21[0x7a] = 0;
            puVar21[0x79] = 0;
            puVar21[0x78] = 0;
            puVar21[0x77] = 0;
            puVar21[0x76] = 0;
            puVar21[0x75] = 0;
            puVar21[0x74] = 0;
            puVar21[0x90] = 0;
            puVar21[0x8f] = 0;
            puVar21[0x8e] = 0;
            puVar21[0x8d] = 0;
            puVar21[0x8c] = 0;
            puVar21[0x8b] = 0;
            puVar21[0x8a] = 0;
            puVar21[0x89] = 0;
            puVar21[0x88] = 0;
            puVar21[0x87] = 0;
            puVar21[0x86] = 0;
            puVar21[0x85] = 0;
            puVar21[0x84] = 0;
            puVar21[0xa0] = 0;
            puVar21[0x9f] = 0;
            puVar21[0x9e] = 0;
            puVar21[0x9d] = 0;
            puVar21[0x9c] = 0;
            puVar21[0x9b] = 0;
            puVar21[0x9a] = 0;
            puVar21[0x99] = 0;
            puVar21[0x98] = 0;
            puVar21[0x97] = 0;
            puVar21[0x96] = 0;
            puVar21[0x95] = 0;
            puVar21[0x94] = 0;
            puVar21[0xb0] = 0;
            puVar21[0xaf] = 0;
            puVar21[0xae] = 0;
            puVar21[0xad] = 0;
            puVar21[0xac] = 0;
            puVar21[0xab] = 0;
            puVar21[0xaa] = 0;
            puVar21[0xa9] = 0;
            puVar21[0xa8] = 0;
            puVar21[0xa7] = 0;
            puVar21[0xa6] = 0;
            puVar21[0xa5] = 0;
            puVar21[0xa4] = 0;
            puVar21[0xc0] = 0;
            puVar21[0xbf] = 0;
            puVar21[0xbe] = 0;
            puVar21[0xbd] = 0;
            puVar21[0xbc] = 0;
            puVar21[0xbb] = 0;
            puVar21[0xba] = 0;
            puVar21[0xb9] = 0;
            puVar21[0xb8] = 0;
            puVar21[0xb7] = 0;
            puVar21[0xb6] = 0;
            puVar21[0xb5] = 0;
            puVar21[0xb4] = 0;
            puVar21[0xd0] = 0;
            puVar21[0xcf] = 0;
            puVar21[0xce] = 0;
            puVar21[0xcd] = 0;
            puVar21[0xcc] = 0;
            puVar21[0xcb] = 0;
            puVar21[0xca] = 0;
            puVar21[0xc9] = 0;
            puVar21[200] = 0;
            puVar21[199] = 0;
            puVar21[0xc6] = 0;
            puVar21[0xc5] = 0;
            puVar21[0xc4] = 0;
            puVar21[0xe0] = 0;
            puVar21[0xdf] = 0;
            puVar21[0xde] = 0;
            puVar21[0xdd] = 0;
            puVar21[0xdc] = 0;
            puVar21[0xdb] = 0;
            puVar21[0xda] = 0;
            puVar21[0xd9] = 0;
            puVar21[0xd8] = 0;
            puVar21[0xd7] = 0;
            puVar21[0xd6] = 0;
            puVar21[0xd5] = 0;
            puVar21[0xd4] = 0;
            puVar21[0xf0] = 0;
            puVar21[0xef] = 0;
            puVar21[0xee] = 0;
            puVar21[0xed] = 0;
            puVar21[0xec] = 0;
            puVar21[0xeb] = 0;
            puVar21[0xea] = 0;
            puVar21[0xe9] = 0;
            puVar21[0xe8] = 0;
            puVar21[0xe7] = 0;
            puVar21[0xe6] = 0;
            puVar21[0xe5] = 0;
            puVar21[0xe4] = 0;
            puVar21[0x100] = 0;
            puVar21[0xff] = 0;
            puVar21[0xfe] = 0;
            puVar21[0xfd] = 0;
            puVar21[0xfc] = 0;
            puVar21[0xfb] = 0;
            puVar21[0xfa] = 0;
            puVar21[0xf9] = 0;
            puVar21[0xf8] = 0;
            puVar21[0xf7] = 0;
            puVar21[0xf6] = 0;
            puVar21[0xf5] = 0;
            puVar21[0xf4] = 0;
            *puVar21 = 0;
            puVar21[2] = 0;
            puVar21[0x1d] = 0;
            puVar21[0x1e] = 0;
            puVar21[0x1b] = 0;
            puVar21[0x1c] = 0;
            puVar21[0x19] = 0;
            puVar21[0x1a] = 0;
            puVar21[0x17] = 0;
            puVar21[0x18] = 0;
            puVar21[0x15] = 0;
            puVar21[0x16] = 0;
            puVar21[0x2f] = 0;
            puVar21[0x30] = 0;
            puVar21[0x2d] = 0;
            puVar21[0x2e] = 0;
            puVar21[0x2b] = 0;
            puVar21[0x2c] = 0;
            puVar21[0x29] = 0;
            puVar21[0x2a] = 0;
            puVar21[0x27] = 0;
            puVar21[0x28] = 0;
            puVar21[0x25] = 0;
            puVar21[0x26] = 0;
            puVar21[0x3f] = 0;
            puVar21[0x40] = 0;
            puVar21[0x3d] = 0;
            puVar21[0x3e] = 0;
            puVar21[0x3b] = 0;
            puVar21[0x3c] = 0;
            puVar21[0x39] = 0;
            puVar21[0x3a] = 0;
            puVar21[0x37] = 0;
            puVar21[0x38] = 0;
            puVar21[0x35] = 0;
            puVar21[0x36] = 0;
            puVar21[0xf] = 0;
            puVar21[0x10] = 0;
            puVar21[0xd] = 0;
            puVar21[0xe] = 0;
            puVar21[0xb] = 0;
            puVar21[0xc] = 0;
            puVar21[9] = 0;
            puVar21[10] = 0;
            puVar21[7] = 0;
            puVar21[8] = 0;
            puVar21[5] = 0;
            puVar21[6] = 0;
            puVar21[3] = 0;
            puVar21[4] = 0;
            puVar21 = puVar21 + 0x104;
          } while (lVar40 != 0);
          piVar58 = (int *)*plVar23;
          piVar51 = (int *)*plVar24;
          piVar56 = piVar58;
          puVar21 = puVar11;
          if (piVar51 != piVar58) {
            do {
              piVar56 = piVar51 + -0x208;
              puVar11 = puVar21 + -0x104;
              *puVar11 = *(undefined8 *)piVar56;
              *(uint *)(puVar21 + -0x103) = 0xffffff;
              uVar45 = piVar51[-0x206];
              *(uint *)(puVar21 + -0x103) = uVar45;
              if (uVar45 != 0xffffff) {
                FUN_7103540a00(DAT_7105332f20,uVar45);
              }
              puVar21[-0x102] = *(undefined8 *)(piVar51 + -0x204);
              lVar40 = *(long *)(piVar51 + -0x202);
              puVar21[-0x101] = lVar40;
              if (lVar40 != 0) {
                plVar1 = (long *)(lVar40 + 8);
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar6) {
                    *plVar1 = *plVar1 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              FUN_710355fc90((long)(puVar21 + -0x100),(long)(piVar51 + -0x200),(long ****)__nmemb,
                             ppppbVar28,(long ****)pcVar16,param_6,param_7,param_8);
              piVar51 = piVar56;
              puVar21 = puVar11;
            } while (piVar56 != piVar58);
            piVar58 = (int *)*plVar24;
            uVar43 = extraout_x1_03;
            piVar56 = (int *)*plVar23;
          }
          *plVar23 = (long)puVar11;
          *plVar24 = lVar20 + uVar9 * 0x820;
          *plVar55 = lVar20 + uVar19 * 0x820;
          while (piVar58 != piVar56) {
            piVar51 = piVar58 + -0x208;
            FUN_710356cc60(piVar51,uVar43,__nmemb,ppppbVar28,(long ****)pcVar16,param_6,param_7,
                           param_8);
            FUN_710355a680((long)(piVar58 + -0x200));
            plVar24 = *(long **)(piVar58 + -0x202);
            if (plVar24 != (long *)0x0) {
              plVar55 = plVar24 + 1;
              do {
                lVar40 = *plVar55;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar55,0x10);
                if (bVar6) {
                  *plVar55 = lVar40 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar40 == 0) {
                (**(code **)(*plVar24 + 0x10))(plVar24);
                std::__shared_weak_count::__release_weak();
              }
            }
            puVar59 = (uint *)(piVar58 + -0x206);
            uVar45 = *puVar59;
            uVar43 = (ulong)uVar45;
            piVar58 = piVar51;
            if (uVar45 != 0xffffff) {
              FUN_7103540b10(DAT_7105332f20,uVar45,__nmemb,ppppbVar28,(long ****)pcVar16,param_6,
                             param_7,param_8);
              *puVar59 = 0xffffff;
              uVar43 = extraout_x1_04;
            }
          }
          if (piVar56 != (int *)0x0) {
            FUN_710392eb40((ulong)piVar56);
          }
        }
        else {
          do {
            piVar58[2] = 0xffffff;
            piVar58[0x3e] = 0;
            piVar58[0x3f] = 0;
            piVar58[0x40] = 0;
            piVar58[0x41] = 0;
            lVar40 = lVar40 + 1;
            piVar58[0x28] = 0;
            piVar58[0x29] = 0;
            piVar58[0x48] = 0;
            piVar58[0x49] = 0;
            piVar58[0x68] = 0;
            piVar58[0x69] = 0;
            piVar58[0xa0] = 0;
            piVar58[0xa1] = 0;
            piVar58[0x9e] = 0;
            piVar58[0x9f] = 0;
            piVar58[0x9c] = 0;
            piVar58[0x9d] = 0;
            piVar58[0x9a] = 0;
            piVar58[0x9b] = 0;
            piVar58[0x98] = 0;
            piVar58[0x99] = 0;
            piVar58[0x96] = 0;
            piVar58[0x97] = 0;
            piVar58[0x94] = 0;
            piVar58[0x95] = 0;
            piVar58[0x92] = 0;
            piVar58[0x93] = 0;
            piVar58[0x90] = 0;
            piVar58[0x91] = 0;
            piVar58[0x8e] = 0;
            piVar58[0x8f] = 0;
            piVar58[0x8c] = 0;
            piVar58[0x8d] = 0;
            piVar58[0x8a] = 0;
            piVar58[0x8b] = 0;
            piVar58[0x88] = 0;
            piVar58[0x89] = 0;
            piVar58[0xc0] = 0;
            piVar58[0xc1] = 0;
            piVar58[0xbe] = 0;
            piVar58[0xbf] = 0;
            piVar58[0xbc] = 0;
            piVar58[0xbd] = 0;
            piVar58[0xba] = 0;
            piVar58[0xbb] = 0;
            piVar58[0xb8] = 0;
            piVar58[0xb9] = 0;
            piVar58[0xb6] = 0;
            piVar58[0xb7] = 0;
            piVar58[0xb4] = 0;
            piVar58[0xb5] = 0;
            piVar58[0xb2] = 0;
            piVar58[0xb3] = 0;
            piVar58[0xb0] = 0;
            piVar58[0xb1] = 0;
            piVar58[0xae] = 0;
            piVar58[0xaf] = 0;
            piVar58[0xac] = 0;
            piVar58[0xad] = 0;
            piVar58[0xaa] = 0;
            piVar58[0xab] = 0;
            piVar58[0xa8] = 0;
            piVar58[0xa9] = 0;
            piVar58[0xe0] = 0;
            piVar58[0xe1] = 0;
            piVar58[0xde] = 0;
            piVar58[0xdf] = 0;
            piVar58[0xdc] = 0;
            piVar58[0xdd] = 0;
            piVar58[0xda] = 0;
            piVar58[0xdb] = 0;
            piVar58[0xd8] = 0;
            piVar58[0xd9] = 0;
            piVar58[0xd6] = 0;
            piVar58[0xd7] = 0;
            piVar58[0xd4] = 0;
            piVar58[0xd5] = 0;
            piVar58[0xd2] = 0;
            piVar58[0xd3] = 0;
            piVar58[0xd0] = 0;
            piVar58[0xd1] = 0;
            piVar58[0xce] = 0;
            piVar58[0xcf] = 0;
            piVar58[0xcc] = 0;
            piVar58[0xcd] = 0;
            piVar58[0xca] = 0;
            piVar58[0xcb] = 0;
            piVar58[200] = 0;
            piVar58[0xc9] = 0;
            piVar58[0x100] = 0;
            piVar58[0x101] = 0;
            piVar58[0xfe] = 0;
            piVar58[0xff] = 0;
            piVar58[0xfc] = 0;
            piVar58[0xfd] = 0;
            piVar58[0xfa] = 0;
            piVar58[0xfb] = 0;
            piVar58[0xf8] = 0;
            piVar58[0xf9] = 0;
            piVar58[0xf6] = 0;
            piVar58[0xf7] = 0;
            piVar58[0xf4] = 0;
            piVar58[0xf5] = 0;
            piVar58[0xf2] = 0;
            piVar58[0xf3] = 0;
            piVar58[0xf0] = 0;
            piVar58[0xf1] = 0;
            piVar58[0xee] = 0;
            piVar58[0xef] = 0;
            piVar58[0xec] = 0;
            piVar58[0xed] = 0;
            piVar58[0xea] = 0;
            piVar58[0xeb] = 0;
            piVar58[0xe8] = 0;
            piVar58[0xe9] = 0;
            piVar58[0x120] = 0;
            piVar58[0x121] = 0;
            piVar58[0x11e] = 0;
            piVar58[0x11f] = 0;
            piVar58[0x11c] = 0;
            piVar58[0x11d] = 0;
            piVar58[0x11a] = 0;
            piVar58[0x11b] = 0;
            piVar58[0x118] = 0;
            piVar58[0x119] = 0;
            piVar58[0x116] = 0;
            piVar58[0x117] = 0;
            piVar58[0x114] = 0;
            piVar58[0x115] = 0;
            piVar58[0x112] = 0;
            piVar58[0x113] = 0;
            piVar58[0x110] = 0;
            piVar58[0x111] = 0;
            piVar58[0x10e] = 0;
            piVar58[0x10f] = 0;
            piVar58[0x10c] = 0;
            piVar58[0x10d] = 0;
            piVar58[0x10a] = 0;
            piVar58[0x10b] = 0;
            piVar58[0x108] = 0;
            piVar58[0x109] = 0;
            piVar58[0x140] = 0;
            piVar58[0x141] = 0;
            piVar58[0x13e] = 0;
            piVar58[0x13f] = 0;
            piVar58[0x13c] = 0;
            piVar58[0x13d] = 0;
            piVar58[0x13a] = 0;
            piVar58[0x13b] = 0;
            piVar58[0x138] = 0;
            piVar58[0x139] = 0;
            piVar58[0x136] = 0;
            piVar58[0x137] = 0;
            piVar58[0x134] = 0;
            piVar58[0x135] = 0;
            piVar58[0x132] = 0;
            piVar58[0x133] = 0;
            piVar58[0x130] = 0;
            piVar58[0x131] = 0;
            piVar58[0x12e] = 0;
            piVar58[0x12f] = 0;
            piVar58[300] = 0;
            piVar58[0x12d] = 0;
            piVar58[0x12a] = 0;
            piVar58[299] = 0;
            piVar58[0x128] = 0;
            piVar58[0x129] = 0;
            piVar58[0x160] = 0;
            piVar58[0x161] = 0;
            piVar58[0x15e] = 0;
            piVar58[0x15f] = 0;
            piVar58[0x15c] = 0;
            piVar58[0x15d] = 0;
            piVar58[0x15a] = 0;
            piVar58[0x15b] = 0;
            piVar58[0x158] = 0;
            piVar58[0x159] = 0;
            piVar58[0x156] = 0;
            piVar58[0x157] = 0;
            piVar58[0x154] = 0;
            piVar58[0x155] = 0;
            piVar58[0x152] = 0;
            piVar58[0x153] = 0;
            piVar58[0x150] = 0;
            piVar58[0x151] = 0;
            piVar58[0x14e] = 0;
            piVar58[0x14f] = 0;
            piVar58[0x14c] = 0;
            piVar58[0x14d] = 0;
            piVar58[0x14a] = 0;
            piVar58[0x14b] = 0;
            piVar58[0x148] = 0;
            piVar58[0x149] = 0;
            piVar58[0x180] = 0;
            piVar58[0x181] = 0;
            piVar58[0x17e] = 0;
            piVar58[0x17f] = 0;
            piVar58[0x17c] = 0;
            piVar58[0x17d] = 0;
            piVar58[0x17a] = 0;
            piVar58[0x17b] = 0;
            piVar58[0x178] = 0;
            piVar58[0x179] = 0;
            piVar58[0x176] = 0;
            piVar58[0x177] = 0;
            piVar58[0x174] = 0;
            piVar58[0x175] = 0;
            piVar58[0x172] = 0;
            piVar58[0x173] = 0;
            piVar58[0x170] = 0;
            piVar58[0x171] = 0;
            piVar58[0x16e] = 0;
            piVar58[0x16f] = 0;
            piVar58[0x16c] = 0;
            piVar58[0x16d] = 0;
            piVar58[0x16a] = 0;
            piVar58[0x16b] = 0;
            piVar58[0x168] = 0;
            piVar58[0x169] = 0;
            piVar58[0x1a0] = 0;
            piVar58[0x1a1] = 0;
            piVar58[0x19e] = 0;
            piVar58[0x19f] = 0;
            piVar58[0x19c] = 0;
            piVar58[0x19d] = 0;
            piVar58[0x19a] = 0;
            piVar58[0x19b] = 0;
            piVar58[0x198] = 0;
            piVar58[0x199] = 0;
            piVar58[0x196] = 0;
            piVar58[0x197] = 0;
            piVar58[0x194] = 0;
            piVar58[0x195] = 0;
            piVar58[0x192] = 0;
            piVar58[0x193] = 0;
            piVar58[400] = 0;
            piVar58[0x191] = 0;
            piVar58[0x18e] = 0;
            piVar58[399] = 0;
            piVar58[0x18c] = 0;
            piVar58[0x18d] = 0;
            piVar58[0x18a] = 0;
            piVar58[0x18b] = 0;
            piVar58[0x188] = 0;
            piVar58[0x189] = 0;
            piVar58[0x1c0] = 0;
            piVar58[0x1c1] = 0;
            piVar58[0x1be] = 0;
            piVar58[0x1bf] = 0;
            piVar58[0x1bc] = 0;
            piVar58[0x1bd] = 0;
            piVar58[0x1ba] = 0;
            piVar58[0x1bb] = 0;
            piVar58[0x1b8] = 0;
            piVar58[0x1b9] = 0;
            piVar58[0x1b6] = 0;
            piVar58[0x1b7] = 0;
            piVar58[0x1b4] = 0;
            piVar58[0x1b5] = 0;
            piVar58[0x1b2] = 0;
            piVar58[0x1b3] = 0;
            piVar58[0x1b0] = 0;
            piVar58[0x1b1] = 0;
            piVar58[0x1ae] = 0;
            piVar58[0x1af] = 0;
            piVar58[0x1ac] = 0;
            piVar58[0x1ad] = 0;
            piVar58[0x1aa] = 0;
            piVar58[0x1ab] = 0;
            piVar58[0x1a8] = 0;
            piVar58[0x1a9] = 0;
            piVar58[0x1e0] = 0;
            piVar58[0x1e1] = 0;
            piVar58[0x1de] = 0;
            piVar58[0x1df] = 0;
            piVar58[0x1dc] = 0;
            piVar58[0x1dd] = 0;
            piVar58[0x1da] = 0;
            piVar58[0x1db] = 0;
            piVar58[0x1d8] = 0;
            piVar58[0x1d9] = 0;
            piVar58[0x1d6] = 0;
            piVar58[0x1d7] = 0;
            piVar58[0x1d4] = 0;
            piVar58[0x1d5] = 0;
            piVar58[0x1d2] = 0;
            piVar58[0x1d3] = 0;
            piVar58[0x1d0] = 0;
            piVar58[0x1d1] = 0;
            piVar58[0x1ce] = 0;
            piVar58[0x1cf] = 0;
            piVar58[0x1cc] = 0;
            piVar58[0x1cd] = 0;
            piVar58[0x1ca] = 0;
            piVar58[0x1cb] = 0;
            piVar58[0x1c8] = 0;
            piVar58[0x1c9] = 0;
            piVar58[0x200] = 0;
            piVar58[0x201] = 0;
            piVar58[0x1fe] = 0;
            piVar58[0x1ff] = 0;
            piVar58[0x1fc] = 0;
            piVar58[0x1fd] = 0;
            piVar58[0x1fa] = 0;
            piVar58[0x1fb] = 0;
            piVar58[0x1f8] = 0;
            piVar58[0x1f9] = 0;
            piVar58[0x1f6] = 0;
            piVar58[0x1f7] = 0;
            piVar58[500] = 0;
            piVar58[0x1f5] = 0;
            piVar58[0x1f2] = 0;
            piVar58[499] = 0;
            piVar58[0x1f0] = 0;
            piVar58[0x1f1] = 0;
            piVar58[0x1ee] = 0;
            piVar58[0x1ef] = 0;
            piVar58[0x1ec] = 0;
            piVar58[0x1ed] = 0;
            piVar58[0x1ea] = 0;
            piVar58[0x1eb] = 0;
            piVar58[0x1e8] = 0;
            piVar58[0x1e9] = 0;
            piVar58[0] = 0;
            piVar58[1] = 0;
            piVar58[4] = 0;
            piVar58[5] = 0;
            piVar58[0x3a] = 0;
            piVar58[0x3b] = 0;
            piVar58[0x3c] = 0;
            piVar58[0x3d] = 0;
            piVar58[0x36] = 0;
            piVar58[0x37] = 0;
            piVar58[0x38] = 0;
            piVar58[0x39] = 0;
            piVar58[0x32] = 0;
            piVar58[0x33] = 0;
            piVar58[0x34] = 0;
            piVar58[0x35] = 0;
            piVar58[0x2e] = 0;
            piVar58[0x2f] = 0;
            piVar58[0x30] = 0;
            piVar58[0x31] = 0;
            piVar58[0x2a] = 0;
            piVar58[0x2b] = 0;
            piVar58[0x2c] = 0;
            piVar58[0x2d] = 0;
            piVar58[0x5e] = 0;
            piVar58[0x5f] = 0;
            piVar58[0x60] = 0;
            piVar58[0x61] = 0;
            piVar58[0x5a] = 0;
            piVar58[0x5b] = 0;
            piVar58[0x5c] = 0;
            piVar58[0x5d] = 0;
            piVar58[0x56] = 0;
            piVar58[0x57] = 0;
            piVar58[0x58] = 0;
            piVar58[0x59] = 0;
            piVar58[0x52] = 0;
            piVar58[0x53] = 0;
            piVar58[0x54] = 0;
            piVar58[0x55] = 0;
            piVar58[0x4e] = 0;
            piVar58[0x4f] = 0;
            piVar58[0x50] = 0;
            piVar58[0x51] = 0;
            piVar58[0x4a] = 0;
            piVar58[0x4b] = 0;
            piVar58[0x4c] = 0;
            piVar58[0x4d] = 0;
            piVar58[0x7e] = 0;
            piVar58[0x7f] = 0;
            piVar58[0x80] = 0;
            piVar58[0x81] = 0;
            piVar58[0x7a] = 0;
            piVar58[0x7b] = 0;
            piVar58[0x7c] = 0;
            piVar58[0x7d] = 0;
            piVar58[0x76] = 0;
            piVar58[0x77] = 0;
            piVar58[0x78] = 0;
            piVar58[0x79] = 0;
            piVar58[0x72] = 0;
            piVar58[0x73] = 0;
            piVar58[0x74] = 0;
            piVar58[0x75] = 0;
            piVar58[0x6e] = 0;
            piVar58[0x6f] = 0;
            piVar58[0x70] = 0;
            piVar58[0x71] = 0;
            piVar58[0x6a] = 0;
            piVar58[0x6b] = 0;
            piVar58[0x6c] = 0;
            piVar58[0x6d] = 0;
            piVar58[0x1e] = 0;
            piVar58[0x1f] = 0;
            piVar58[0x20] = 0;
            piVar58[0x21] = 0;
            piVar58[0x1a] = 0;
            piVar58[0x1b] = 0;
            piVar58[0x1c] = 0;
            piVar58[0x1d] = 0;
            piVar58[0x16] = 0;
            piVar58[0x17] = 0;
            piVar58[0x18] = 0;
            piVar58[0x19] = 0;
            piVar58[0x12] = 0;
            piVar58[0x13] = 0;
            piVar58[0x14] = 0;
            piVar58[0x15] = 0;
            piVar58[0xe] = 0;
            piVar58[0xf] = 0;
            piVar58[0x10] = 0;
            piVar58[0x11] = 0;
            piVar58[10] = 0;
            piVar58[0xb] = 0;
            piVar58[0xc] = 0;
            piVar58[0xd] = 0;
            piVar58[6] = 0;
            piVar58[7] = 0;
            piVar58[8] = 0;
            piVar58[9] = 0;
            piVar58 = (int *)(*plVar24 + 0x820);
            *plVar24 = (long)piVar58;
          } while (lVar40 != 0);
        }
      }
      else if (lVar40 != 0) {
        piVar51 = (int *)(lVar20 + uVar9 * 0x820);
        uVar9 = extraout_x1;
        while (piVar51 != piVar58) {
          piVar56 = piVar58 + -0x208;
          FUN_710356cc60(piVar56,uVar9,__nmemb,ppppbVar28,(long ****)pcVar16,param_6,param_7,param_8
                        );
          FUN_710355a680((long)(piVar58 + -0x200));
          plVar55 = *(long **)(piVar58 + -0x202);
          if (plVar55 != (long *)0x0) {
            plVar1 = plVar55 + 1;
            do {
              lVar40 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar40 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar40 == 0) {
              (**(code **)(*plVar55 + 0x10))(plVar55);
              std::__shared_weak_count::__release_weak();
            }
          }
          puVar59 = (uint *)(piVar58 + -0x206);
          uVar45 = *puVar59;
          uVar9 = (ulong)uVar45;
          piVar58 = piVar56;
          if (uVar45 != 0xffffff) {
            FUN_7103540b10(DAT_7105332f20,uVar45,__nmemb,ppppbVar28,(long ****)pcVar16,param_6,
                           param_7,param_8);
            *puVar59 = 0xffffff;
            uVar9 = extraout_x1_00;
          }
        }
        *plVar24 = (long)piVar51;
      }
      pcVar52 = (char *)*plVar34;
      if (0 < *(short *)(pcVar41 + 10)) {
        lVar40 = 0;
        do {
          strncpy((char *)&local_1c8,pcVar52,0xff);
          bVar3 = *(byte *)(*(long *)(lVar48 + 0x18088) + lVar40);
          uVar45 = (uint)bVar3;
          if (bVar3 == 0) {
            uVar45 = *(uint *)(param_1 + 0x19484);
          }
          local_1d0 = 0;
          local_2d0 = (long ********)((ulong)local_2d0 & 0xffffffffffffff00);
          FUN_710147f330((long)&local_2d0,"model/%s/c00",&local_1c8,ppppbVar28,pcVar16,param_6,
                         param_7,param_8);
          uVar26 = *param_3;
          lVar20 = *(long *)(*(long *)(DAT_7105332f20 + 0x78) + 8);
          if (uVar26 == 0xffffff) {
            uVar9 = 0;
          }
          else {
            if (uVar26 < *(uint *)(*(long *)(lVar20 + 8) + 4)) {
              if (*(long *)(lVar20 + 0x28) != 0) {
                uVar26 = *(uint *)(*(long *)(lVar20 + 0x28) + (ulong)uVar26 * 4);
              }
              if (((uVar26 != 0xffffff) && (uVar26 < *(uint *)(*(long *)(lVar20 + 8) + 8))) &&
                 (puVar12 = (ulong *)(*(long *)(lVar20 + 0x30) + (ulong)uVar26 * 0x20),
                 puVar12 != (ulong *)0x0)) {
                uVar9 = *puVar12 & 0xffffffffff;
                goto LAB_7103562bec;
              }
            }
            uVar9 = 0;
          }
LAB_7103562bec:
          uVar17 = (uint)(uVar9 >> 0x20);
          uVar26 = uVar17 + 1;
          uVar49 = ~(uint)uVar9;
          if (uVar26 < 0x100) {
            uVar49 = (&DAT_7104754084)[uVar9 & 0xff ^ 0xd0] ^ uVar49 >> 8;
            uVar17 = uVar26;
          }
          uVar44 = (uint)(byte)local_2d0;
          uVar26 = uVar49;
          if ((byte)local_2d0 == 0) {
            lVar30 = 0;
          }
          else {
            lVar30 = 0;
            do {
              uVar27 = uVar44 + 0x20;
              if (0x19 < uVar44 - 0x41) {
                uVar27 = uVar44;
              }
              uVar26 = (&DAT_7104754084)[(uVar27 ^ uVar26) & 0xff] ^ uVar26 >> 8;
              uVar44 = (uint)*(byte *)(((ulong)&local_2d0 | 1) + lVar30);
              lVar30 = lVar30 + 1;
            } while (uVar44 != 0);
          }
          uVar44 = uVar17 + (int)lVar30;
          if (0xff < uVar44) {
            uVar44 = uVar17;
            uVar26 = uVar49;
          }
          local_88 = (byte ***)((ulong)~uVar26 | ((ulong)uVar44 & 0xff) << 0x20);
          __nmemb = (long *********)(ulong)*(uint *)(*(long *)(lVar20 + 8) + 8);
          ppppbVar28 = (byte ****)&DAT_00000008;
          pcVar16 = FUN_7103542240;
          puVar21 = bsearch(&local_88,*(void **)(lVar20 + 0x20),(size_t)__nmemb,8,FUN_7103542240);
          if (puVar21 == (undefined8 *)0x0) {
LAB_7103562e00:
            *(undefined4 *)(*plVar23 + lVar40 * 0x820) = 0xffffffff;
          }
          else {
            uVar49 = (uint)((ulong)*puVar21 >> 0x20);
            uVar17 = uVar49 >> 8;
            if ((uVar17 == 0xffffff) ||
               (uVar27 = *(uint *)(*(long *)(lVar20 + 8) + 4),
               uVar27 < uVar17 || uVar27 == uVar49 >> 8)) goto LAB_7103562e00;
            uVar44 = uVar44 & 0xff;
            uVar49 = uVar44 + 1;
            uVar17 = uVar26;
            uVar27 = uVar44;
            if (uVar49 < 0x100) {
              uVar17 = (&DAT_7104754084)[uVar26 & 0xff ^ 0x2f] ^ uVar26 >> 8;
              uVar27 = uVar49;
            }
            if (uVar27 + 0xc < 0x100) {
              uVar17 = (&DAT_7104754084)[uVar17 & 0xff ^ 0x6d] ^ uVar17 >> 8;
              uVar17 = (&DAT_7104754084)[uVar17 & 0xff ^ 0x6f] ^ uVar17 >> 8;
              uVar17 = (&DAT_7104754084)[uVar17 & 0xff ^ 100] ^ uVar17 >> 8;
              uVar17 = (&DAT_7104754084)[uVar17 & 0xff ^ 0x65] ^ uVar17 >> 8;
              uVar17 = (&DAT_7104754084)[uVar17 & 0xff ^ 0x6c] ^ uVar17 >> 8;
              uVar17 = (&DAT_7104754084)[uVar17 & 0xff ^ 0x2e] ^ uVar17 >> 8;
              uVar17 = (&DAT_7104754084)[uVar17 & 0xff ^ 0x6e] ^ uVar17 >> 8;
              uVar17 = (&DAT_7104754084)[uVar17 & 0xff ^ 0x75] ^ uVar17 >> 8;
              uVar17 = (&DAT_7104754084)[uVar17 & 0xff ^ 0x6d] ^ uVar17 >> 8;
              uVar17 = (&DAT_7104754084)[uVar17 & 0xff ^ 100] ^ uVar17 >> 8;
              uVar17 = (&DAT_7104754084)[uVar17 & 0xff ^ 0x6c] ^ uVar17 >> 8;
              uVar17 = (&DAT_7104754084)[uVar17 & 0xff ^ 0x62] ^ uVar17 >> 8;
              uVar27 = uVar27 + 0xc;
            }
            lVar20 = *(long *)(*(long *)(DAT_7105332f20 + 0x78) + 8);
            local_88 = (byte ***)((ulong)~uVar17 | ((ulong)uVar27 & 0xff) << 0x20);
            ppppbVar28 = (byte ****)&DAT_00000008;
            pcVar16 = FUN_7103542240;
            puVar21 = bsearch(&local_88,*(void **)(lVar20 + 0x20),
                              (ulong)*(uint *)(*(long *)(lVar20 + 8) + 8),8,FUN_7103542240);
            local_70[0] = 0xffffff;
            if (puVar21 != (undefined8 *)0x0) {
              uVar17 = (uint)((ulong)*puVar21 >> 0x20);
              uVar27 = uVar17 >> 8;
              if ((uVar27 != 0xffffff) &&
                 (uVar2 = *(uint *)(*(long *)(lVar20 + 8) + 4), local_70[0] = uVar17 >> 8,
                 uVar2 < uVar27 || uVar2 == local_70[0])) {
                local_70[0] = 0xffffff;
              }
            }
            __nmemb = (long *********)0x6;
            FUN_71035c2890(&local_c8,local_70,(long *********)0x6,ppppbVar28,(long ****)pcVar16,
                           param_6,param_7,param_8);
            uVar9 = local_c8;
            if (local_c8 != 0) {
              if (uVar49 < 0x100) {
                uVar26 = (&DAT_7104754084)[uVar26 & 0xff ^ 0x2f] ^ uVar26 >> 8;
                uVar44 = uVar49;
              }
              if (uVar44 + 0xc < 0x100) {
                uVar26 = (&DAT_7104754084)[uVar26 & 0xff ^ 0x6d] ^ uVar26 >> 8;
                uVar26 = (&DAT_7104754084)[uVar26 & 0xff ^ 0x6f] ^ uVar26 >> 8;
                uVar26 = (&DAT_7104754084)[uVar26 & 0xff ^ 100] ^ uVar26 >> 8;
                uVar26 = (&DAT_7104754084)[uVar26 & 0xff ^ 0x65] ^ uVar26 >> 8;
                uVar26 = (&DAT_7104754084)[uVar26 & 0xff ^ 0x6c] ^ uVar26 >> 8;
                uVar26 = (&DAT_7104754084)[uVar26 & 0xff ^ 0x2e] ^ uVar26 >> 8;
                uVar26 = (&DAT_7104754084)[uVar26 & 0xff ^ 0x6e] ^ uVar26 >> 8;
                uVar26 = (&DAT_7104754084)[uVar26 & 0xff ^ 0x75] ^ uVar26 >> 8;
                uVar26 = (&DAT_7104754084)[uVar26 & 0xff ^ 0x61] ^ uVar26 >> 8;
                uVar26 = (&DAT_7104754084)[uVar26 & 0xff ^ 0x6e] ^ uVar26 >> 8;
                uVar26 = (&DAT_7104754084)[uVar26 & 0xff ^ 0x6d] ^ uVar26 >> 8;
                uVar26 = (&DAT_7104754084)[uVar26 & 0xff ^ 0x62] ^ uVar26 >> 8;
                uVar44 = uVar44 + 0xc;
              }
              lVar30 = *(long *)(*(long *)(DAT_7105332f20 + 0x78) + 8);
              local_88 = (byte ***)((ulong)~uVar26 | ((ulong)uVar44 & 0xff) << 0x20);
              __nmemb = (long *********)(ulong)*(uint *)(*(long *)(lVar30 + 8) + 8);
              ppppbVar28 = (byte ****)&DAT_00000008;
              pcVar16 = FUN_7103542240;
              puVar21 = bsearch(&local_88,*(void **)(lVar30 + 0x20),(size_t)__nmemb,8,FUN_7103542240
                               );
              lVar20 = DAT_7105332f20;
              uVar26 = 0xffffff;
              if (puVar21 != (undefined8 *)0x0) {
                uVar49 = (uint)((ulong)*puVar21 >> 0x20);
                uVar17 = uVar49 >> 8;
                if ((uVar17 != 0xffffff) &&
                   (uVar44 = *(uint *)(*(long *)(lVar30 + 8) + 4), uVar26 = uVar49 >> 8,
                   uVar44 < uVar17 || uVar44 == uVar26)) {
                  uVar26 = 0xffffff;
                }
              }
              local_a8[0] = 0xffffff;
              if (uVar26 == 0xffffff) {
LAB_710356285c:
                local_a8[0] = 0xffffff;
              }
              else {
                lVar30 = (*(long **)(DAT_7105332f20 + 0x78))[1];
                if ((*(uint *)(*(long *)(lVar30 + 8) + 4) <= uVar26) ||
                   ((((*(long *)(lVar30 + 0x28) != 0 &&
                      (uVar26 = *(uint *)(*(long *)(lVar30 + 0x28) + (ulong)uVar26 * 4),
                      uVar26 == 0xffffff)) || (*(uint *)(*(long *)(lVar30 + 8) + 8) <= uVar26)) ||
                    ((puVar12 = (ulong *)(*(long *)(lVar30 + 0x30) + (ulong)uVar26 * 0x20),
                     puVar12 == (ulong *)0x0 || (uVar19 = *puVar12 & 0xffffffffff, uVar19 == 0))))))
                goto LAB_710356285c;
                lVar37 = **(long **)(DAT_7105332f20 + 0x78);
                lVar30 = *(long *)(lVar37 + 0x50);
                uVar13 = (ulong)*(uint *)(lVar30 + 4);
                uVar43 = 0;
                if (uVar13 != 0) {
                  uVar43 = uVar19 / uVar13;
                }
                lVar30 = lVar30 + (uVar19 - uVar43 * uVar13) * 8;
                uVar26 = *(uint *)(lVar30 + 0xc);
                uVar43 = (ulong)uVar26;
                puVar12 = (ulong *)(*(long *)(lVar37 + 0x58) + (ulong)*(uint *)(lVar30 + 8) * 8);
                puVar10 = puVar12 + uVar43;
                puVar33 = puVar12;
                if (uVar26 != 0) {
                  do {
                    uVar13 = uVar43;
                    if ((long)uVar43 < 0) {
                      uVar13 = uVar43 + 1;
                    }
                    uVar13 = (long)uVar13 >> 1;
                    puVar12 = puVar33 + uVar13 + 1;
                    uVar43 = uVar43 + ~uVar13;
                    if (uVar19 <= (puVar33[uVar13] & 0xffffffffff)) {
                      puVar12 = puVar33;
                      uVar43 = uVar13;
                    }
                    puVar33 = puVar12;
                  } while (uVar43 != 0);
                }
                if (puVar12 == puVar10) goto LAB_710356285c;
                uVar43 = *puVar12;
                uVar26 = (uint)(uVar43 >> 0x28);
                if ((uVar43 & 0xffffffffff) != uVar19 || uVar26 == 0xffffff) goto LAB_710356285c;
                std::recursive_mutex::lock();
                puVar59 = FUN_71035404b0(lVar20,uVar43 & 0xffffff0000000000 | uVar19);
                std::recursive_mutex::unlock();
                local_a8[0] = 0xffffff;
                if (puVar59 != (uint *)0x0) {
                  local_a8[0] = uVar26;
                }
                if ((local_a8[0] == 0xffffff) ||
                   (*(char *)(*(long *)(lVar20 + 8) + (ulong)local_a8[0] * 8 + 4) == '\0'))
                goto LAB_710356285c;
              }
              lVar20 = *plVar23;
              puVar12 = (ulong *)(lVar20 + lVar40 * 0x820 + 0x10);
              if (local_c0 != (long *)0x0) {
                plVar34 = local_c0 + 1;
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar34,0x10);
                  if (bVar6) {
                    *plVar34 = *plVar34 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              *puVar12 = uVar9;
              plVar24 = (long *)(lVar20 + lVar40 * 0x820 + 0x18);
              plVar34 = (long *)*plVar24;
              *plVar24 = (long)local_c0;
              if (plVar34 != (long *)0x0) {
                plVar55 = plVar34 + 1;
                do {
                  lVar30 = *plVar55;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar55,0x10);
                  if (bVar6) {
                    *plVar55 = lVar30 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar30 == 0) {
                  (**(code **)(*plVar34 + 0x10))(plVar34);
                  std::__shared_weak_count::__release_weak();
                }
              }
              uVar49 = local_a8[0];
              ppppppppplVar54 = (long *********)(lVar20 + lVar40 * 0x820 + 8);
              uVar26 = *(uint *)ppppppppplVar54;
              *(uint *)ppppppppplVar54 = local_a8[0];
              if (local_a8[0] != 0xffffff) {
                FUN_7103540a00(DAT_7105332f20,local_a8[0]);
              }
              if (uVar26 != 0xffffff) {
                FUN_7103540b10(DAT_7105332f20,uVar26,__nmemb,ppppbVar28,(long ****)pcVar16,param_6,
                               param_7,param_8);
              }
              puVar59 = (uint *)(lVar20 + lVar40 * 0x820);
              *puVar59 = uVar45;
              if (0 < (int)uVar45) {
                lVar30 = 0;
                do {
                  local_a0 = (byte ***)*puVar12;
                  local_98 = (long *)*plVar24;
                  if (local_98 != (long *)0x0) {
                    plVar34 = local_98 + 1;
                    do {
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar34,0x10);
                      if (bVar6) {
                        *plVar34 = *plVar34 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                  }
                  FUN_71035c2e50(&local_88,&local_a0,(long ****)__nmemb,ppppbVar28,
                                 (long ****)pcVar16,param_6,param_7,param_8);
                  if (local_98 != (long *)0x0) {
                    plVar34 = local_98 + 1;
                    do {
                      lVar37 = *plVar34;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar34,0x10);
                      if (bVar6) {
                        *plVar34 = lVar37 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (lVar37 == 0) {
                      (**(code **)(*local_98 + 0x10))(local_98);
                      std::__shared_weak_count::__release_weak();
                    }
                  }
                  __nmemb = ppppppppplVar54;
                  FUN_710356c120((undefined8 *)(lVar20 + lVar40 * 0x820 + lVar30 * 0x80 + 0x20),
                                 &local_88,(long ****)ppppppppplVar54,ppppbVar28,(long ****)pcVar16,
                                 param_6,param_7,param_8);
                  if (local_80 != (long *)0x0) {
                    plVar34 = local_80 + 1;
                    do {
                      lVar37 = *plVar34;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar34,0x10);
                      if (bVar6) {
                        *plVar34 = lVar37 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (lVar37 == 0) {
                      (**(code **)(*local_80 + 0x10))(local_80);
                      std::__shared_weak_count::__release_weak();
                    }
                  }
                  lVar30 = lVar30 + 1;
                  uVar49 = local_a8[0];
                } while (lVar30 < (int)*puVar59);
              }
              *(undefined4 *)(lVar20 + lVar40 * 0x820 + 4) = 0;
              if (uVar49 != 0xffffff) {
                FUN_7103540b10(DAT_7105332f20,uVar49,__nmemb,ppppbVar28,(long ****)pcVar16,param_6,
                               param_7,param_8);
                local_a8[0] = 0xffffff;
              }
            }
            if (local_c0 != (long *)0x0) {
              plVar34 = local_c0 + 1;
              do {
                lVar20 = *plVar34;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar34,0x10);
                if (bVar6) {
                  *plVar34 = lVar20 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar20 == 0) {
                (**(code **)(*local_c0 + 0x10))(local_c0);
                std::__shared_weak_count::__release_weak();
              }
            }
          }
          sVar14 = strlen(pcVar52);
          pcVar52 = pcVar52 + sVar14 + 1;
          lVar40 = lVar40 + 1;
        } while (lVar40 < *(short *)(pcVar41 + 10));
      }
      lVar48 = param_1 + (long)local_308 * 0xa8;
      plVar34 = (long *)(lVar48 + 0x18050);
      plVar23 = (long *)(lVar48 + 0x18058);
      uVar9 = (ulong)*(short *)(pcVar41 + 0xc);
      uVar19 = *plVar23 - *plVar34 >> 3;
      if (uVar19 < uVar9) {
        FUN_7103562fc0(plVar34,uVar9 - uVar19,(long ****)__nmemb,ppppbVar28,(long ****)pcVar16,
                       param_6,param_7,param_8);
      }
      else if (uVar19 != uVar9) {
        *plVar23 = *plVar34 + uVar9 * 8;
      }
      if (0 < *(short *)(pcVar41 + 0xc)) {
        lVar48 = 0;
        do {
          *(char **)(*plVar34 + lVar48 * 8) = pcVar52;
          sVar14 = strlen(pcVar52);
          pcVar52 = pcVar52 + sVar14 + 1;
          lVar48 = lVar48 + 1;
        } while (lVar48 < *(short *)(pcVar41 + 0xc));
      }
    }
  }
LAB_71035608c8:
  lVar48 = DAT_7105336db8;
  if ((uVar7 == 0xffffff) || (DAT_7105336db8 == 0)) {
    *(undefined8 *)(param_1 + (long)local_308 * 0xa8 + 0x18090) = 0;
  }
  else {
    lVar40 = *(long *)(*(long *)(DAT_7105332f20 + 0x78) + 8);
    if (uVar7 < *(uint *)(*(long *)(lVar40 + 8) + 4)) {
      uVar45 = uVar7;
      if (*(long *)(lVar40 + 0x28) != 0) {
        uVar45 = *(uint *)(*(long *)(lVar40 + 0x28) + (ulong)uVar7 * 4);
      }
      if ((uVar45 == 0xffffff) || (*(uint *)(*(long *)(lVar40 + 8) + 8) <= uVar45))
      goto LAB_7103560b14;
      puVar12 = (ulong *)(*(long *)(lVar40 + 0x30) + (ulong)uVar45 * 0x20);
      uVar9 = 0;
      if (puVar12 != (ulong *)0x0) {
        uVar9 = *puVar12 & 0xffffffffff;
      }
    }
    else {
LAB_7103560b14:
      uVar9 = 0;
    }
    *(ulong *)(param_1 + (long)local_308 * 0xa8 + 0x18090) = uVar9;
    std::mutex::lock();
    lVar40 = *(long *)(*(long *)(DAT_7105332f20 + 0x78) + 8);
    if (uVar7 < *(uint *)(*(long *)(lVar40 + 8) + 4)) {
      uVar45 = uVar7;
      if (*(long *)(lVar40 + 0x28) != 0) {
        uVar45 = *(uint *)(*(long *)(lVar40 + 0x28) + (ulong)uVar7 * 4);
      }
      if ((((uVar45 != 0xffffff) && (uVar45 < *(uint *)(*(long *)(lVar40 + 8) + 8))) &&
          (lVar40 = *(long *)(lVar40 + 0x30) + (ulong)uVar45 * 0x20, lVar40 != 0)) &&
         ((*(byte *)(lVar40 + 0xf) >> 6 & 1) != 0)) {
        FUN_71035b6200((ulong *)&local_88,(ulong)piVar29,(long ****)__nmemb,ppppbVar28,
                       (long ****)pcVar16,param_6,param_7,param_8);
        local_98 = (long *)((ulong)local_98 & 0xffffffffffffff00);
        local_a0 = (byte ***)CONCAT62(local_a0._2_6_,1);
        uVar9 = FUN_710353eb80(uVar7);
        uVar19 = uVar9 >> 0x28;
        lVar40 = *(long *)(*(long *)(DAT_7105332f20 + 0x78) + 8);
        uVar7 = (uint)(uVar9 >> 0x20);
        uVar45 = uVar7 >> 8;
        if (uVar45 == 0xffffff) {
          local_2d0 = (long ********)(uVar9 & 0xffffffffff);
          pcVar16 = FUN_7103542240;
          __nmemb = (long *********)(ulong)**(uint **)(lVar40 + 8);
          ppppbVar28 = (byte ****)&DAT_00000008;
          puVar12 = bsearch(&local_2d0,*(void **)(lVar40 + 0x10),(size_t)__nmemb,8,FUN_7103542240);
          if ((puVar12 != (ulong *)0x0) && (*puVar12 >> 0x28 != 0xffffff)) {
            lVar40 = *(long *)(lVar40 + 0x18) + (*puVar12 >> 0x28) * 0x20;
joined_r0x007103560c70:
            if (lVar40 != 0) {
              puVar12 = (ulong *)(lVar48 + 0x88);
              plVar34 = (long *)(lVar48 + 0x98);
              do {
                FUN_710353e790(local_a8,uVar9);
                lVar40 = DAT_7105332f20;
                if (local_a8[0] != 0xffffff) {
                  lVar20 = *(long *)(*(long *)(DAT_7105332f20 + 0x78) + 8);
                  lVar30 = *(long *)(lVar20 + 8);
                  if (local_a8[0] < *(uint *)(lVar30 + 4)) {
                    uVar7 = local_a8[0];
                    if (*(long *)(lVar20 + 0x28) != 0) {
                      uVar7 = *(uint *)(*(long *)(lVar20 + 0x28) + (ulong)local_a8[0] * 4);
                    }
                    if ((((uVar7 == 0xffffff) || (*(uint *)(lVar30 + 8) <= uVar7)) ||
                        (lVar37 = *(long *)(lVar20 + 0x30) + (ulong)uVar7 * 0x20, lVar37 == 0)) ||
                       (((*(byte *)(lVar37 + 0xf) >> 6 & 1) == 0 &&
                        (local_a8[0] < *(uint *)(lVar30 + 4))))) {
                      uVar7 = local_a8[0];
                      if (*(long *)(lVar20 + 0x28) != 0) {
                        uVar7 = *(uint *)(*(long *)(lVar20 + 0x28) + (ulong)local_a8[0] * 4);
                      }
                      if (((uVar7 != 0xffffff) && (uVar7 < *(uint *)(lVar30 + 8))) &&
                         ((lVar20 = *(long *)(lVar20 + 0x30) + (ulong)uVar7 * 0x20, lVar20 != 0 &&
                          ((*(ulong *)(lVar20 + 0x18) & 0xffffffffff) == 0x65c156dbc)))) {
                        uVar19 = FUN_710353ea90(local_a8[0]);
                        uVar7 = (uint)uVar19;
                        local_b0[0] = uVar7;
                        if (uVar7 == 0xffffff) {
                          pppbVar53 = (byte ***)0x0;
                          __nmemb = (long *********)0x0;
                          local_c8 = 0;
                          local_c0 = (long *)0x0;
                          local_b8 = (byte *)0x0;
                        }
                        else {
                          FUN_7103540a00(lVar40,uVar7);
                          if ((uVar7 < *(uint *)(DAT_7105332f20 + 0x18)) &&
                             (*(char *)(*(long *)(DAT_7105332f20 + 8) + (uVar19 & 0xffffffff) * 8 +
                                       4) != '\0')) {
                            uVar45 = *(uint *)(*(long *)(DAT_7105332f20 + 8) +
                                              (uVar19 & 0xffffffff) * 8);
                            if ((uVar45 == 0xffffff) || (*(uint *)(DAT_7105332f20 + 0x1c) <= uVar45)
                               ) goto LAB_7103560e28;
                            puVar21 = (undefined8 *)
                                      (*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar45 * 0x18);
                            pppbVar53 = (byte ***)0x0;
                            if ((*(char *)((long)puVar21 + 0xc) != '\0') &&
                               (puVar21 != (undefined8 *)0x0)) {
                              pppbVar53 = (byte ***)*puVar21;
                            }
                          }
                          else {
LAB_7103560e28:
                            pppbVar53 = (byte ***)0x0;
                          }
                          local_c8 = 0;
                          local_c0 = (long *)0x0;
                          local_b8 = (byte *)0x0;
                          lVar40 = **(long **)(DAT_7105332f20 + 0x78);
                          if (uVar7 < *(uint *)(*(long *)(lVar40 + 0x40) + 4)) {
                            uVar45 = (uint)((ulong)*(undefined8 *)
                                                    (*(long *)(lVar40 + 0x60) +
                                                    (uVar19 & 0xffffffff) * 0x20) >> 0x20);
                            uVar26 = uVar45 >> 8;
                            if ((uVar26 != 0xffffff) &&
                               (uVar49 = *(uint *)(*(long *)(lVar40 + 0x40) + 8),
                               uVar45 = uVar45 >> 8, uVar26 <= uVar49 && uVar49 != uVar45)) {
                              lVar20 = FUN_7103541e10(lVar40,*(long *)(lVar40 + 0x90) +
                                                             ((ulong)*(uint *)(*(long *)(lVar40 + 
                                                  0x68) + (ulong)uVar45 * 8 + 4) & 0xffffff) * 0x10,
                                                  *(int *)(*(long *)(DAT_7105332f20 + 0x10) +
                                                           (ulong)*(uint *)(*(long *)(DAT_7105332f20
                                                                                     + 8) +
                                                                           (uVar19 & 0xffffffff) * 8
                                                                           ) * 0x18 + 0x10));
                              __nmemb = (long *********)
                                        (ulong)*(uint *)(*(long *)(lVar40 + 0xa0) +
                                                         (ulong)*(uint *)(lVar20 + 4) * 0x10 + 8);
                              goto LAB_7103560ed4;
                            }
                          }
                          __nmemb = (long *********)0x0;
                        }
LAB_7103560ed4:
                        ppppbVar28 = &local_a0;
                        pppbVar53 = FUN_71037ce870(&local_c8,pppbVar53,(long)__nmemb,ppppbVar28,
                                                   (long ****)pcVar16,param_6,(ulong)param_7,
                                                   (ulong)param_8);
                        if (pppbVar53 != (byte ***)0x0) {
                          local_2d0 = (long ********)CONCAT44(local_2d0._4_4_,0xffff);
                          local_290 = 0;
                          local_288 = (void *)0x0;
                          local_2c8 = 0;
                          local_2a0 = 0;
                          local_298 = 0;
                          local_2b0 = 0;
                          uStack_2a8 = 0;
                          local_2c0 = 0;
                          uStack_2b8 = 0;
                          (*(code *)(*pppbVar53)[0x13])(pppbVar53,&local_2d0);
                          if ((local_298 & 1) != 0) {
                            nu::VirtualFreeHook(local_288);
                            FUN_710392eb40((ulong)local_288);
                          }
                          ppbVar22 = pppbVar53[1];
                          if (ppbVar22 != (byte **)0x0) {
                            pbVar42 = (byte *)((ulong)&local_c8 | 1);
                            if ((local_c8 & 1) != 0) {
                              pbVar42 = local_b8;
                            }
                            local_1b0 = *ppbVar22;
                            uVar45 = (uint)*pbVar42;
                            if (*pbVar42 == 0) {
                              uVar43 = 0;
                              uVar19 = 0;
                            }
                            else {
                              uVar19 = 0;
                              uVar26 = 0xffffffff;
                              do {
                                pbVar42 = pbVar42 + 1;
                                uVar49 = uVar45 + 0x20;
                                if (0x19 < uVar45 - 0x41) {
                                  uVar49 = uVar45;
                                }
                                uVar26 = (&DAT_7104754084)[(uVar49 ^ uVar26) & 0xff] ^ uVar26 >> 8;
                                uVar45 = (uint)*pbVar42;
                                uVar19 = uVar19 + 0x100000000;
                              } while (uVar45 != 0);
                              uVar43 = (ulong)~uVar26;
                              uVar19 = uVar19 & 0xff00000000;
                            }
                            ppppppppplVar54 = (long *********)(uVar19 | uVar43);
                            ppuVar50 = &PTR_FUN_71052318d0;
                            ppppbVar28 = &local_88;
                            pcVar16 = (code *)local_b0;
                            local_1c8 = &PTR_FUN_71052318d0;
                            __nmemb = ppppppppplVar54;
                            local_1c0 = pppbVar53;
                            local_1b8 = ppbVar22;
                            bVar6 = FUN_710371f400(*(long **)(lVar48 + 0x80),(long)&local_1c8,
                                                   ppppppppplVar54,ppppbVar28,(long ****)pcVar16,
                                                   param_6,param_7,param_8);
                            local_1c8 = &PTR_FUN_71052318d0;
                            if (((local_1b8 != (byte **)0x0) && (*local_1b8 == local_1b0)) &&
                               (local_1c0 != (byte ***)0x0)) {
                              (*(code *)(*local_1c0)[1])();
                            }
                            if (bVar6) {
                              ppppppppplVar57 = *(long **********)(lVar48 + 0x90);
                              if (ppppppppplVar57 != (long *********)0x0) {
                                uVar19 = (long)ppppppppplVar57 - 1;
                                if ((uVar19 & (ulong)ppppppppplVar57) == 0) {
                                  ppuVar50 = (undefined **)(uVar19 & (ulong)ppppppppplVar54);
                                }
                                else {
                                  ppuVar50 = (undefined **)ppppppppplVar54;
                                  if (ppppppppplVar57 <= ppppppppplVar54) {
                                    uVar43 = 0;
                                    if (ppppppppplVar57 != (long *********)0x0) {
                                      uVar43 = (ulong)ppppppppplVar54 / (ulong)ppppppppplVar57;
                                    }
                                    ppuVar50 = (undefined **)
                                               ((long)ppppppppplVar54 -
                                               uVar43 * (long)ppppppppplVar57);
                                  }
                                }
                                plVar23 = *(long **)(*puVar12 + (long)ppuVar50 * 8);
                                if (plVar23 != (long *)0x0) {
                                  if ((uVar19 & (ulong)ppppppppplVar57) == 0) {
                                    do {
                                      plVar23 = (long *)*plVar23;
                                      if ((plVar23 == (long *)0x0) ||
                                         ((long *********)plVar23[1] != ppppppppplVar54 &&
                                          (long *********)((ulong)plVar23[1] & uVar19) !=
                                          (long *********)ppuVar50)) goto LAB_71035610f8;
                                    } while ((long *********)plVar23[2] != ppppppppplVar54);
                                  }
                                  else {
                                    do {
                                      plVar23 = (long *)*plVar23;
                                      if (plVar23 == (long *)0x0) goto LAB_71035610f8;
                                      ppppppppplVar31 = (long *********)plVar23[1];
                                      if (ppppppppplVar31 != ppppppppplVar54) {
                                        if (ppppppppplVar57 <= ppppppppplVar31) {
                                          uVar19 = 0;
                                          if (ppppppppplVar57 != (long *********)0x0) {
                                            uVar19 = (ulong)ppppppppplVar31 / (ulong)ppppppppplVar57
                                            ;
                                          }
                                          ppppppppplVar31 =
                                               (long *********)
                                               ((long)ppppppppplVar31 -
                                               uVar19 * (long)ppppppppplVar57);
                                        }
                                        if (ppppppppplVar31 != (long *********)ppuVar50)
                                        goto LAB_71035610f8;
                                      }
                                    } while ((long *********)plVar23[2] != ppppppppplVar54);
                                  }
                                  goto LAB_710356131c;
                                }
                              }
LAB_71035610f8:
                              plVar23 = (long *)FUN_710392e290(0x10,0x20,(long ****)__nmemb,
                                                               ppppbVar28,(long ****)pcVar16,param_6
                                                               ,param_7,param_8);
                              if (plVar23 == (long *)0x0) {
                                if (DAT_7105332f00 != (long *)0x0) {
                                  local_70[0] = 0;
                                  local_2d0 = (long ********)&SUB_00000020;
                                  __nmemb = &local_2d0;
                                  uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))
                                                     (DAT_7105332f00,local_70);
                                  if (((uVar19 & 1) != 0) &&
                                     (plVar23 = (long *)FUN_710392e290(0x10,0x20,(long ****)__nmemb,
                                                                       ppppbVar28,(long ****)pcVar16
                                                                       ,param_6,param_7,param_8),
                                     plVar23 != (long *)0x0)) goto LAB_7103561154;
                                }
                                plVar23 = (long *)0x0;
                              }
LAB_7103561154:
                              plVar23[2] = (long)ppppppppplVar54;
                              plVar23[3] = (long)piVar29;
                              *plVar23 = 0;
                              plVar23[1] = (long)ppppppppplVar54;
                              fVar60 = (float)(*(long *)(lVar48 + 0xa0) + 1);
                              if ((ppppppppplVar57 == (long *********)0x0) ||
                                 (*(float *)(lVar48 + 0xa8) * (float)ppppppppplVar57 < fVar60)) {
                                if (ppppppppplVar57 < (long *********)0x3) {
                                  uVar19 = 1;
                                }
                                else {
                                  uVar19 = (ulong)(((long)ppppppppplVar57 - 1U &
                                                   (ulong)ppppppppplVar57) != 0);
                                }
                                uVar19 = uVar19 | (long)ppppppppplVar57 << 1;
                                uVar43 = (ulong)(fVar60 / *(float *)(lVar48 + 0xa8));
                                if (uVar43 <= uVar19) {
                                  uVar43 = uVar19;
                                }
                                if (uVar43 - 1 == 0) {
                                  uVar43 = 2;
                                }
                                else if ((uVar43 - 1 & uVar43) != 0) {
                                  uVar43 = std::__next_prime(uVar43);
                                }
                                uVar19 = *(ulong *)(lVar48 + 0x90);
                                if (uVar19 < uVar43) {
LAB_71035611f0:
                                  FUN_71035b6410(puVar12,uVar43,(long ****)__nmemb,ppppbVar28,
                                                 (long ****)pcVar16,param_6,param_7,param_8);
                                }
                                else if (uVar43 < uVar19) {
                                  uVar13 = (ulong)((float)*(ulong *)(lVar48 + 0xa0) /
                                                  *(float *)(lVar48 + 0xa8));
                                  if (uVar19 < 3 || (uVar19 - 1 & uVar19) != 0) {
                                    uVar13 = std::__next_prime(uVar13);
                                  }
                                  else if (1 < uVar13) {
                                    uVar13 = 1L << (-LZCOUNT(uVar13 - 1) & 0x3fU);
                                  }
                                  if (uVar13 <= uVar43) {
                                    uVar13 = uVar43;
                                  }
                                  uVar43 = uVar13;
                                  if (uVar13 < uVar19) goto LAB_71035611f0;
                                }
                                ppppppppplVar57 = *(long **********)(lVar48 + 0x90);
                                if (((long)ppppppppplVar57 - 1U & (ulong)ppppppppplVar57) == 0) {
                                  ppuVar50 = (undefined **)
                                             ((long)ppppppppplVar57 - 1U & (ulong)ppppppppplVar54);
                                }
                                else {
                                  ppuVar50 = (undefined **)ppppppppplVar54;
                                  if (ppppppppplVar57 <= ppppppppplVar54) {
                                    uVar19 = 0;
                                    if (ppppppppplVar57 != (long *********)0x0) {
                                      uVar19 = (ulong)ppppppppplVar54 / (ulong)ppppppppplVar57;
                                    }
                                    ppuVar50 = (undefined **)
                                               ((long)ppppppppplVar54 -
                                               uVar19 * (long)ppppppppplVar57);
                                  }
                                }
                              }
                              uVar19 = *puVar12;
                              plVar24 = *(long **)(uVar19 + (long)ppuVar50 * 8);
                              if (plVar24 == (long *)0x0) {
                                *plVar23 = *plVar34;
                                *plVar34 = (long)plVar23;
                                *(long **)(uVar19 + (long)ppuVar50 * 8) = plVar34;
                                if (*plVar23 != 0) {
                                  ppppppppplVar54 = *(long **********)(*plVar23 + 8);
                                  if (((long)ppppppppplVar57 - 1U & (ulong)ppppppppplVar57) == 0) {
                                    ppppppppplVar54 =
                                         (long *********)
                                         ((ulong)ppppppppplVar54 & (long)ppppppppplVar57 - 1U);
                                  }
                                  else if (ppppppppplVar57 <= ppppppppplVar54) {
                                    uVar19 = 0;
                                    if (ppppppppplVar57 != (long *********)0x0) {
                                      uVar19 = (ulong)ppppppppplVar54 / (ulong)ppppppppplVar57;
                                    }
                                    ppppppppplVar54 =
                                         (long *********)
                                         ((long)ppppppppplVar54 - uVar19 * (long)ppppppppplVar57);
                                  }
                                  plVar24 = (long *)(*puVar12 + (long)ppppppppplVar54 * 8);
                                  goto LAB_7103561308;
                                }
                              }
                              else {
                                *plVar23 = *plVar24;
LAB_7103561308:
                                *plVar24 = (long)plVar23;
                              }
                              *(long *)(lVar48 + 0xa0) = *(long *)(lVar48 + 0xa0) + 1;
                            }
                          }
                        }
LAB_710356131c:
                        pbVar42 = local_b8;
                        if ((local_c8 & 1) != 0) {
                          nu::VirtualFreeHook(local_b8);
                          FUN_710392eb40((ulong)pbVar42);
                        }
                        if (uVar7 != 0xffffff) {
                          FUN_7103540b10(DAT_7105332f20,uVar7,__nmemb,ppppbVar28,(long ****)pcVar16,
                                         param_6,param_7,param_8);
                          local_b0[0] = 0xffffff;
                        }
                      }
                    }
                  }
                }
                lVar40 = *(long *)(*(long *)(DAT_7105332f20 + 0x78) + 8);
                uVar43 = uVar9 >> 0x28;
                uVar7 = (uint)(uVar9 >> 0x20);
                uVar45 = uVar7 >> 8;
                uVar19 = 0xffffffffffffffff;
                if (uVar45 != 0xffffff) {
                  uVar26 = *(uint *)(*(long *)(lVar40 + 8) + 4);
                  uVar19 = 0xffffffffffffffff;
                  if (uVar45 <= uVar26 && uVar26 != uVar7 >> 8) {
                    if (*(long *)(lVar40 + 0x28) != 0) {
                      uVar7 = *(uint *)(*(long *)(lVar40 + 0x28) + uVar43 * 4);
                      uVar43 = (ulong)uVar7;
                      uVar19 = 0xffffffffffffffff;
                      if (uVar7 == 0xffffff) goto LAB_71035613f4;
                    }
                    uVar19 = 0xffffffffffffffff;
                    if ((uint)uVar43 < *(uint *)(*(long *)(lVar40 + 8) + 8)) {
                      puVar10 = (ulong *)(*(long *)(lVar40 + 0x30) + uVar43 * 0x20);
                      if (puVar10 == (ulong *)0x0) {
                        uVar19 = 0xffffffffffffffff;
                      }
                      else {
                        uVar43 = *puVar10;
                        uVar7 = (uint)(uVar43 >> 0x20);
                        uVar45 = uVar7 >> 8;
                        uVar19 = 0xffffffffffffffff;
                        if (uVar45 != 0xffffff && (uVar45 <= uVar26 && uVar26 != uVar7 >> 8)) {
                          uVar19 = uVar43 & 0xffffff0000000000 | uVar9 & 0xffffffffff;
                        }
                      }
                    }
                  }
                }
LAB_71035613f4:
                uVar9 = uVar19;
                uVar19 = uVar9 >> 0x28;
                uVar7 = (uint)(uVar9 >> 0x20);
                uVar45 = uVar7 >> 8;
                if (uVar45 == 0xffffff) {
                  local_2d0 = (long ********)(uVar9 & 0xffffffffff);
                  __nmemb = (long *********)(ulong)**(uint **)(lVar40 + 8);
                  ppppbVar28 = (byte ****)&DAT_00000008;
                  pcVar16 = FUN_7103542240;
                  puVar10 = bsearch(&local_2d0,*(void **)(lVar40 + 0x10),(size_t)__nmemb,8,
                                    FUN_7103542240);
                  if ((puVar10 == (ulong *)0x0) || (uVar19 = *puVar10 >> 0x28, uVar19 == 0xffffff))
                  break;
                  lVar40 = *(long *)(lVar40 + 0x18);
                }
                else {
                  uVar26 = *(uint *)(*(long *)(lVar40 + 8) + 4);
                  if ((uVar26 < uVar45 || uVar26 == uVar7 >> 8) ||
                     (((*(long *)(lVar40 + 0x28) != 0 &&
                       (uVar7 = *(uint *)(*(long *)(lVar40 + 0x28) + uVar19 * 4),
                       uVar19 = (ulong)uVar7, uVar7 == 0xffffff)) ||
                      (*(uint *)(*(long *)(lVar40 + 8) + 8) <= (uint)uVar19)))) break;
                  lVar40 = *(long *)(lVar40 + 0x30);
                }
              } while (lVar40 + uVar19 * 0x20 != 0);
            }
          }
        }
        else {
          uVar26 = *(uint *)(*(long *)(lVar40 + 8) + 4);
          if (((uVar45 <= uVar26 && uVar26 != uVar7 >> 8) &&
              ((*(long *)(lVar40 + 0x28) == 0 ||
               (uVar7 = *(uint *)(*(long *)(lVar40 + 0x28) + uVar19 * 4), uVar19 = (ulong)uVar7,
               uVar7 != 0xffffff)))) && ((uint)uVar19 < *(uint *)(*(long *)(lVar40 + 8) + 8))) {
            lVar40 = *(long *)(lVar40 + 0x30) + uVar19 * 0x20;
            goto joined_r0x007103560c70;
          }
        }
        if (((ulong)local_88 & 1) != 0) {
          nu::VirtualFreeHook(local_78);
          FUN_710392eb40((ulong)local_78);
        }
      }
    }
    std::mutex::unlock();
  }
  uVar46 = 1;
LAB_71035614b8:
  if (uVar8 != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,uVar8,__nmemb,ppppbVar28,(long ****)pcVar16,param_6,param_7,
                   param_8);
  }
  return uVar46;
}

