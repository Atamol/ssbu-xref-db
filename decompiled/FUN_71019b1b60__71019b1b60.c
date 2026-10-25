// addr:      71019b1b60
// offset:    0x19b1b60
// name:      FUN_71019b1b60
// mangled:   
// signature: undefined __cdecl FUN_71019b1b60(long param_1, uint param_2, long param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71019b1b60(long param_1,uint param_2,long param_3,ulong param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined ***pppuVar11;
  long ****pppplVar12;
  long *********ppppppppplVar13;
  ulong uVar14;
  byte ****ppppbVar15;
  long ****pppplVar16;
  long lVar17;
  long ***ppplVar18;
  long lVar19;
  uint uVar20;
  long *plVar21;
  undefined **local_a0;
  undefined8 *local_98;
  undefined **local_90;
  long *local_88;
  undefined **local_80;
  long *local_78;
  long ***local_70;
  undefined4 local_64;
  
  uVar2 = ~(uint)param_4 & 1;
  uVar14 = param_4;
  pppplVar16 = param_5;
  if (param_2 != 0) {
    uVar20 = 0;
    do {
      uVar20 = uVar20 + 1;
      uVar14 = (ulong)uVar20;
      FUN_7103776910(&local_80,param_3,(long ****)"set_rep_%d_%02d",(ulong)uVar2,uVar14,pppplVar16,
                     param_6,param_7,param_8);
      plVar21 = local_78;
      lVar17 = *local_78;
      if (lVar17 != 0) {
        *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) & 0xfe;
      }
      local_80 = &PTR_FUN_710523d9a8;
      local_78 = (long *)0x0;
      if (plVar21 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar21);
      }
    } while (param_2 != uVar20);
  }
  FUN_7103776910(&local_80,param_3,(long ****)"set_txt_item_%02d",(ulong)uVar2,uVar14,pppplVar16,
                 param_6,param_7,param_8);
  lVar17 = *local_78;
  if (lVar17 != 0) {
    *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) & 0xfe;
  }
  pppplVar12 = param_5 + 0xe;
  if ((param_4 & 1) == 0) {
    pppplVar12 = param_5 + 0xf;
  }
  ppplVar18 = *pppplVar12;
  plVar21 = local_78;
  if ((int)ppplVar18 != 0) {
    lVar17 = *(long *)(DAT_710532f730 + 8);
    uVar20 = param_2 >> 1;
    uVar14 = 0;
    do {
      uVar7 = uVar20;
      if (uVar20 <= uVar14) {
        uVar7 = uVar20 * 3;
      }
      ppppbVar15 = (byte ****)(ulong)(uVar7 - (int)uVar14);
      pppplVar12 = (long ****)(ulong)uVar2;
      FUN_7103776910(&local_90,param_3,(long ****)"set_rep_%d_%02d",pppplVar12,ppppbVar15,pppplVar16
                     ,param_6,param_7,param_8);
      lVar19 = *local_88;
      if (lVar19 != 0) {
        *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) | 1;
      }
      local_a0 = &PTR_FUN_710523da08;
      puVar8 = (undefined8 *)
               FUN_710392e290(0x10,0x10,pppplVar12,ppppbVar15,pppplVar16,param_6,param_7,param_8);
      if (puVar8 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_64 = 0;
          local_70 = (long ***)&DAT_00000010;
          pppplVar12 = &local_70;
          uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
          if (((uVar9 & 1) != 0) &&
             (puVar8 = (undefined8 *)
                       FUN_710392e290(0x10,0x10,pppplVar12,ppppbVar15,pppplVar16,param_6,param_7,
                                      param_8), puVar8 != (undefined8 *)0x0)) goto LAB_71019b1d0c;
        }
        puVar8 = (undefined8 *)0x0;
      }
LAB_71019b1d0c:
      *puVar8 = 0;
      puVar8[1] = 0;
      local_98 = puVar8;
      if ((param_4 & 1) == 0) {
        puVar10 = FUN_7103263e20(lVar17 + 0x160,(int)*(char *)((long)param_5 + uVar14 + 0x8c));
        lVar19 = *(long *)(lVar17 + 0x168);
        uVar7 = FUN_71032632a0(lVar19,(ulong)puVar10);
        if ((uVar7 & 1) != 0) {
          puVar10 = FUN_71032631a0(lVar19,0x11b1ccb807);
        }
        ppppppppplVar13 = (long *********)(long)*(char *)((long)param_5 + uVar14 + 0x474);
        ppppbVar15 = (byte ****)0x2;
        pppuVar11 = (undefined ***)
                    FUN_710323f330(*(long **)(param_1 + 0xe8),(ulong)puVar10,(ulong)ppppppppplVar13,
                                   2,pppplVar16,param_6,param_7,param_8);
        if (&local_a0 != pppuVar11) {
          puVar3 = *pppuVar11[1];
          puVar4 = pppuVar11[1][1];
          if (puVar4 != (undefined *)0x0) {
            plVar21 = (long *)(puVar4 + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar6) {
                *plVar21 = *plVar21 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          plVar21 = (long *)local_98[1];
          *local_98 = puVar3;
          local_98[1] = puVar4;
          if (plVar21 != (long *)0x0) {
            plVar1 = plVar21 + 1;
            do {
              lVar19 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar19 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            goto LAB_71019b1f9c;
          }
        }
      }
      else {
        uVar7 = (uint)*(char *)((long)param_5 + uVar14 * 2 + 0x85d);
        if ((uVar7 >> 6 & 1) == 0) {
          if ((int)uVar7 < 0) {
            pppplVar12 = (long ****)
                         FUN_710327fb30(*(long *)(*(long *)(lVar17 + 0x268) + 8),0xe346ef289);
            ppppppppplVar13 = (long *********)0x16;
            pppuVar11 = (undefined ***)
                        FUN_710323f8d0(*(long **)(param_1 + 0xe8),pppplVar12,(long ****)0x16,
                                       ppppbVar15,pppplVar16,param_6,param_7,param_8);
            if (&local_a0 != pppuVar11) {
              puVar3 = *pppuVar11[1];
              puVar4 = pppuVar11[1][1];
              if (puVar4 != (undefined *)0x0) {
                plVar21 = (long *)(puVar4 + 8);
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                  if (bVar6) {
                    *plVar21 = *plVar21 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              plVar21 = (long *)local_98[1];
              *local_98 = puVar3;
              local_98[1] = puVar4;
              if (plVar21 != (long *)0x0) {
                plVar1 = plVar21 + 1;
                do {
                  lVar19 = *plVar1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar6) {
                    *plVar1 = lVar19 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                goto LAB_71019b1f9c;
              }
            }
          }
          else {
            puVar10 = FUN_7103263e20(lVar17 + 0x160,
                                     (int)*(char *)((long)param_5 + uVar14 * 2 + 0x85c));
            lVar19 = *(long *)(lVar17 + 0x168);
            uVar7 = FUN_71032632a0(lVar19,(ulong)puVar10);
            if ((uVar7 & 1) != 0) {
              puVar10 = FUN_71032631a0(lVar19,0x11b1ccb807);
            }
            ppppppppplVar13 =
                 (long *********)(ulong)(*(byte *)((long)param_5 + uVar14 * 2 + 0x85d) & 0x3f);
            ppppbVar15 = (byte ****)0x2;
            pppuVar11 = (undefined ***)
                        FUN_710323f330(*(long **)(param_1 + 0xe8),(ulong)puVar10,
                                       (ulong)ppppppppplVar13,2,pppplVar16,param_6,param_7,param_8);
            if (&local_a0 != pppuVar11) {
              puVar3 = *pppuVar11[1];
              puVar4 = pppuVar11[1][1];
              if (puVar4 != (undefined *)0x0) {
                plVar21 = (long *)(puVar4 + 8);
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                  if (bVar6) {
                    *plVar21 = *plVar21 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              plVar21 = (long *)local_98[1];
              *local_98 = puVar3;
              local_98[1] = puVar4;
              if (plVar21 != (long *)0x0) {
                plVar1 = plVar21 + 1;
                do {
                  lVar19 = *plVar1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar6) {
                    *plVar1 = lVar19 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
LAB_71019b1f9c:
                if (lVar19 == 0) {
                  (**(code **)(*plVar21 + 0x10))(plVar21);
                  std::__shared_weak_count::__release_weak();
                }
              }
            }
          }
        }
        else {
          pppplVar12 = (long ****)
                       FUN_710327fb30(*(long *)(*(long *)(lVar17 + 0x268) + 8),0x13c0a8f157);
          ppppppppplVar13 = (long *********)0x16;
          pppuVar11 = (undefined ***)
                      FUN_710323f8d0(*(long **)(param_1 + 0xe8),pppplVar12,(long ****)0x16,
                                     ppppbVar15,pppplVar16,param_6,param_7,param_8);
          if (&local_a0 != pppuVar11) {
            puVar3 = *pppuVar11[1];
            puVar4 = pppuVar11[1][1];
            if (puVar4 != (undefined *)0x0) {
              plVar21 = (long *)(puVar4 + 8);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                if (bVar6) {
                  *plVar21 = *plVar21 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            plVar21 = (long *)local_98[1];
            *local_98 = puVar3;
            local_98[1] = puVar4;
            if (plVar21 != (long *)0x0) {
              plVar1 = plVar21 + 1;
              do {
                lVar19 = *plVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *plVar1 = lVar19 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              goto LAB_71019b1f9c;
            }
          }
        }
      }
      plVar21 = local_88;
      FUN_7103778b80((long)local_88,(long)&local_a0,ppppppppplVar13,ppppbVar15,pppplVar16,param_6,
                     param_7,param_8);
      puVar8 = local_98;
      local_a0 = &PTR_FUN_710523da08;
      local_98 = (undefined8 *)0x0;
      if (puVar8 != (undefined8 *)0x0) {
        plVar21 = (long *)puVar8[1];
        *puVar8 = 0;
        puVar8[1] = 0;
        if (plVar21 != (long *)0x0) {
          plVar1 = plVar21 + 1;
          do {
            lVar19 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar19 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar19 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
            std::__shared_weak_count::__release_weak();
            plVar21 = (long *)puVar8[1];
          }
          else {
            plVar21 = (long *)puVar8[1];
          }
          if (plVar21 != (long *)0x0) {
            plVar1 = plVar21 + 1;
            do {
              lVar19 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar19 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar19 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
        FUN_710392eb40((ulong)puVar8);
        plVar21 = local_88;
      }
      local_90 = &PTR_FUN_710523d9a8;
      local_88 = (long *)0x0;
      if (plVar21 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar21);
      }
      uVar14 = uVar14 + 1;
      plVar21 = local_78;
    } while (uVar14 != ((ulong)ppplVar18 & 0xffffffff));
  }
  local_80 = &PTR_FUN_710523d9a8;
  local_78 = (long *)0x0;
  if (plVar21 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar21);
  }
  return;
}

