// addr:      7101d65e20
// offset:    0x1d65e20
// name:      FUN_7101d65e20
// mangled:   
// signature: undefined __cdecl FUN_7101d65e20(uint param_1, long param_2, ulong param_3, ulong param_4, long * * * * param_5, long * param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d65e20(uint param_1,long param_2,ulong param_3,ulong param_4,long ****param_5,
                   long *param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined ***pppuVar10;
  ulong uVar11;
  long ****pppplVar12;
  long *********ppppppppplVar13;
  ulong uVar14;
  byte ****ppppbVar15;
  long ****pppplVar16;
  long *plVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  byte *pbVar22;
  uint uVar23;
  long *plVar24;
  undefined **local_e0;
  long *local_d8 [8];
  undefined **local_98;
  undefined8 *local_90;
  undefined **local_88;
  long *local_80;
  long ***local_78;
  undefined4 local_6c [3];
  
  uVar18 = ~(uint)param_4 & 1;
  uVar14 = param_4;
  pppplVar16 = param_5;
  plVar17 = param_6;
  if (param_1 != 0) {
    uVar23 = 0;
    do {
      uVar23 = uVar23 + 1;
      uVar14 = (ulong)uVar23;
      FUN_7103776910(&local_e0,param_2,(long ****)"set_rep_%d_%02d",(ulong)uVar18,uVar14,pppplVar16,
                     plVar17,param_7,param_8);
      plVar24 = local_d8[0];
      lVar19 = *local_d8[0];
      if (lVar19 != 0) {
        *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
      }
      local_e0 = &PTR_FUN_710523d9a8;
      local_d8[0] = (long *)0x0;
      if (plVar24 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar24);
      }
    } while (param_1 != uVar23);
  }
  uVar11 = (ulong)uVar18;
  FUN_7103776910(&local_88,param_2,(long ****)"set_txt_item_%02d",uVar11,uVar14,pppplVar16,plVar17,
                 param_7,param_8);
  lVar19 = *local_80;
  if (lVar19 != 0) {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
  }
  if ((param_3 & 1) == 0) {
    lVar19 = *local_80;
    if (lVar19 != 0) {
      *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) | 1;
    }
    uVar18 = 7;
    if ((param_4 & 1) == 0) {
      uVar18 = 8;
    }
    FUN_71003a4ca0((uint *)&local_e0,"mel_result_item_unit_%02d",(ulong)uVar18,uVar11,uVar14,
                   pppplVar16,plVar17,param_7,param_8);
    FUN_710377a280((long)&local_88,(byte *)local_d8,1);
    plVar17 = local_80;
  }
  else {
    lVar19 = 0x3720;
    if ((param_4 & 1) == 0) {
      lVar19 = 0x3730;
    }
    uVar14 = *(ulong *)((long)param_5 + lVar19);
    if ((int)uVar14 != 0) {
      lVar20 = *(long *)(DAT_710532f730 + 8);
      uVar23 = param_1 >> 1;
      uVar11 = 0;
      lVar19 = lVar20 + 0x160;
      do {
        uVar6 = uVar23;
        if (uVar23 <= uVar11) {
          uVar6 = uVar23 * 3;
        }
        ppppbVar15 = (byte ****)(ulong)(uVar6 - (int)uVar11);
        pppplVar12 = (long ****)(ulong)uVar18;
        FUN_7103776910(&local_e0,param_2,(long ****)"set_rep_%d_%02d",pppplVar12,ppppbVar15,
                       pppplVar16,plVar17,param_7,param_8);
        lVar21 = *local_d8[0];
        if (lVar21 != 0) {
          *(byte *)(lVar21 + 0x58) = *(byte *)(lVar21 + 0x58) | 1;
        }
        local_98 = &PTR_FUN_710523da08;
        puVar7 = (undefined8 *)
                 FUN_710392e290(0x10,0x10,pppplVar12,ppppbVar15,pppplVar16,plVar17,param_7,param_8);
        if (puVar7 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_6c[0] = 0;
            local_78 = (long ***)&DAT_00000010;
            pppplVar12 = &local_78;
            uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
            if (((uVar8 & 1) != 0) &&
               (puVar7 = (undefined8 *)
                         FUN_710392e290(0x10,0x10,pppplVar12,ppppbVar15,pppplVar16,plVar17,param_7,
                                        param_8), puVar7 != (undefined8 *)0x0)) goto LAB_7101d65fd8;
          }
          puVar7 = (undefined8 *)0x0;
        }
LAB_7101d65fd8:
        *puVar7 = 0;
        puVar7[1] = 0;
        local_90 = puVar7;
        if ((param_4 & 1) == 0) {
          puVar9 = FUN_7103263e20(lVar19,(int)*(char *)((long)param_5 + uVar11 + 0x1fb0));
          lVar21 = *(long *)(lVar20 + 0x168);
          uVar6 = FUN_71032632a0(lVar21,(ulong)puVar9);
          uVar8 = 0x11b1ccb807;
          if ((uVar6 & 1) == 0) {
            bVar5 = FUN_7103264990(lVar19,(ulong)puVar9);
            uVar8 = 0x13b28d453e;
            if (bVar5) goto LAB_7101d66158;
            bVar5 = FUN_7103264ab0(lVar19,(ulong)puVar9);
            uVar8 = 0x13b3e567a6;
            if (bVar5) goto LAB_7101d66158;
          }
          else {
LAB_7101d66158:
            puVar9 = FUN_71032631a0(lVar21,uVar8);
          }
          ppppppppplVar13 = (long *********)(long)*(char *)((long)param_5 + uVar11 + 0x2398);
          ppppbVar15 = (byte ****)0x2;
          pppuVar10 = (undefined ***)
                      FUN_710323f330(param_6,(ulong)puVar9,(ulong)ppppppppplVar13,2,pppplVar16,
                                     plVar17,param_7,param_8);
          if (&local_98 != pppuVar10) {
            puVar2 = *pppuVar10[1];
            puVar3 = pppuVar10[1][1];
            if (puVar3 != (undefined *)0x0) {
              plVar24 = (long *)(puVar3 + 8);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                if (bVar5) {
                  *plVar24 = *plVar24 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            plVar24 = (long *)local_90[1];
            *local_90 = puVar2;
            local_90[1] = puVar3;
            if (plVar24 != (long *)0x0) {
              plVar1 = plVar24 + 1;
              do {
                lVar21 = *plVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *plVar1 = lVar21 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              goto LAB_7101d662cc;
            }
          }
        }
        else {
          pbVar22 = (byte *)((long)param_5 + uVar11 * 2 + 0x71);
          uVar6 = (uint)(char)*pbVar22;
          if ((uVar6 >> 6 & 1) == 0) {
            if ((int)uVar6 < 0) {
              pppplVar12 = (long ****)
                           FUN_710327fb30(*(long *)(*(long *)(lVar20 + 0x268) + 8),0xe346ef289);
              ppppppppplVar13 = (long *********)0x16;
              pppuVar10 = (undefined ***)
                          FUN_710323f8d0(param_6,pppplVar12,(long ****)0x16,ppppbVar15,pppplVar16,
                                         plVar17,param_7,param_8);
              if (&local_98 != pppuVar10) {
                puVar2 = *pppuVar10[1];
                puVar3 = pppuVar10[1][1];
                if (puVar3 != (undefined *)0x0) {
                  plVar24 = (long *)(puVar3 + 8);
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                    if (bVar5) {
                      *plVar24 = *plVar24 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                plVar24 = (long *)local_90[1];
                *local_90 = puVar2;
                local_90[1] = puVar3;
                if (plVar24 != (long *)0x0) {
                  plVar1 = plVar24 + 1;
                  do {
                    lVar21 = *plVar1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar5) {
                      *plVar1 = lVar21 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  goto LAB_7101d662cc;
                }
              }
              goto LAB_7101d662e8;
            }
            puVar9 = FUN_7103263e20(lVar19,(int)*(char *)((long)param_5 + uVar11 * 2 + 0x70));
            lVar21 = *(long *)(lVar20 + 0x168);
            uVar6 = FUN_71032632a0(lVar21,(ulong)puVar9);
            uVar8 = 0x11b1ccb807;
            if ((uVar6 & 1) == 0) {
              bVar5 = FUN_7103264990(lVar19,(ulong)puVar9);
              uVar8 = 0x13b28d453e;
              if (bVar5) goto LAB_7101d66068;
              bVar5 = FUN_7103264ab0(lVar19,(ulong)puVar9);
              uVar8 = 0x13b3e567a6;
              if (bVar5) goto LAB_7101d66068;
            }
            else {
LAB_7101d66068:
              puVar9 = FUN_71032631a0(lVar21,uVar8);
            }
            ppppppppplVar13 = (long *********)(ulong)(*pbVar22 & 0x3f);
            ppppbVar15 = (byte ****)0x2;
            pppuVar10 = (undefined ***)
                        FUN_710323f330(param_6,(ulong)puVar9,(ulong)ppppppppplVar13,2,pppplVar16,
                                       plVar17,param_7,param_8);
            if (&local_98 != pppuVar10) {
              puVar2 = *pppuVar10[1];
              puVar3 = pppuVar10[1][1];
              if (puVar3 != (undefined *)0x0) {
                plVar24 = (long *)(puVar3 + 8);
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                  if (bVar5) {
                    *plVar24 = *plVar24 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              plVar24 = (long *)local_90[1];
              *local_90 = puVar2;
              local_90[1] = puVar3;
              if (plVar24 == (long *)0x0) goto LAB_7101d662e8;
              plVar1 = plVar24 + 1;
              do {
                lVar21 = *plVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *plVar1 = lVar21 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
LAB_7101d662cc:
              if (lVar21 == 0) {
                (**(code **)(*plVar24 + 0x10))(plVar24);
                std::__shared_weak_count::__release_weak();
              }
            }
          }
          else {
            pppplVar12 = (long ****)
                         FUN_710327fb30(*(long *)(*(long *)(lVar20 + 0x268) + 8),0x13c0a8f157);
            ppppppppplVar13 = (long *********)0x16;
            pppuVar10 = (undefined ***)
                        FUN_710323f8d0(param_6,pppplVar12,(long ****)0x16,ppppbVar15,pppplVar16,
                                       plVar17,param_7,param_8);
            if (&local_98 != pppuVar10) {
              puVar2 = *pppuVar10[1];
              puVar3 = pppuVar10[1][1];
              if (puVar3 != (undefined *)0x0) {
                plVar24 = (long *)(puVar3 + 8);
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                  if (bVar5) {
                    *plVar24 = *plVar24 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              plVar24 = (long *)local_90[1];
              *local_90 = puVar2;
              local_90[1] = puVar3;
              if (plVar24 != (long *)0x0) {
                plVar1 = plVar24 + 1;
                do {
                  lVar21 = *plVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar5) {
                    *plVar1 = lVar21 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                goto LAB_7101d662cc;
              }
            }
          }
        }
LAB_7101d662e8:
        plVar24 = local_d8[0];
        FUN_7103778b80((long)local_d8[0],(long)&local_98,ppppppppplVar13,ppppbVar15,pppplVar16,
                       plVar17,param_7,param_8);
        puVar7 = local_90;
        local_98 = &PTR_FUN_710523da08;
        local_90 = (undefined8 *)0x0;
        if (puVar7 != (undefined8 *)0x0) {
          plVar24 = (long *)puVar7[1];
          *puVar7 = 0;
          puVar7[1] = 0;
          if (plVar24 != (long *)0x0) {
            plVar1 = plVar24 + 1;
            do {
              lVar21 = *plVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar21 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar21 == 0) {
              (**(code **)(*plVar24 + 0x10))(plVar24);
              std::__shared_weak_count::__release_weak();
              plVar24 = (long *)puVar7[1];
            }
            else {
              plVar24 = (long *)puVar7[1];
            }
            if (plVar24 != (long *)0x0) {
              plVar1 = plVar24 + 1;
              do {
                lVar21 = *plVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *plVar1 = lVar21 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar21 == 0) {
                (**(code **)(*plVar24 + 0x10))(plVar24);
                std::__shared_weak_count::__release_weak();
              }
            }
          }
          FUN_710392eb40((ulong)puVar7);
          plVar24 = local_d8[0];
        }
        local_e0 = &PTR_FUN_710523d9a8;
        local_d8[0] = (long *)0x0;
        if (plVar24 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar24);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != (uVar14 & 0xffffffff));
    }
    plVar17 = local_80;
    if (local_80 == (long *)0x0) {
      return;
    }
  }
  local_80 = (long *)0x0;
  local_88 = &PTR_FUN_710523d9a8;
  FUN_710392eb40((ulong)plVar17);
  return;
}

