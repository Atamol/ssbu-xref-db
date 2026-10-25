// addr:      7101d07780
// offset:    0x1d07780
// name:      FUN_7101d07780
// mangled:   
// signature: undefined __cdecl FUN_7101d07780(long param_1, uint param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101d07780(long param_1,uint param_2,undefined **param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ******pppppplVar1;
  long ******pppppplVar2;
  long ******pppppplVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  long *********ppppppppplVar11;
  byte ****ppppbVar12;
  uint uVar13;
  long lVar14;
  long *******ppppppplVar15;
  long *plVar16;
  long *******ppppppplVar17;
  long *****ppppplVar18;
  long **pplVar19;
  long ********pppppppplVar20;
  long ********pppppppplVar21;
  long ***ppplVar22;
  long *plVar23;
  ulong uVar24;
  long *plVar25;
  long ********pppppppplVar26;
  ulong uVar27;
  long ********pppppppplVar28;
  long local_110;
  long *plStack_108;
  long ********local_100;
  long ********local_f8;
  long ********local_e8;
  long ********pppppppplStack_e0;
  long ********local_d8;
  long ********pppppppplStack_d0;
  long ***local_c8;
  long ***local_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long ********local_a0;
  long ********local_98;
  undefined **local_88;
  ulong local_80;
  
  uVar13 = *(uint *)(param_1 + 0x138);
  if (0 < (int)uVar13) {
    uVar27 = 0;
    do {
      local_c8 = (long ***)(param_1 + 0xc0);
      local_c0 = (long ***)(param_1 + 0xd8);
      local_b8 = param_1 + 0xf0;
      lStack_b0 = param_1 + 0x108;
      local_a8 = param_1 + 0x120;
      if (uVar27 < 5) {
        ppplVar22 = (&local_c8)[uVar27];
      }
      else if ((DAT_7105325d40 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_7105325d40);
        ppplVar22 = (long ***)&DAT_7105325d28;
        if (iVar7 != 0) {
          param_3 = &PTR_LOOP_7104f17000;
          DAT_7105325d28 = 0;
          DAT_7105325d30 = 0;
          DAT_7105325d38 = 0;
          FUN_71000001c0();
          __cxa_guard_release(&DAT_7105325d40);
        }
      }
      else {
        ppplVar22 = (long ***)&DAT_7105325d28;
      }
      if (ppplVar22[1] != *ppplVar22) {
        uVar24 = 0;
        do {
          lVar8 = *(long *)(DAT_7105329740 + 8) + uVar27 * 0x18;
          lVar14 = *(long *)(lVar8 + 8);
          if ((ulong)(*(long *)(lVar8 + 0x10) - lVar14 >> 4) <= (uVar24 & 0xffffffff))
          goto LAB_7101d083b8;
          plVar25 = (long *)(lVar14 + (uVar24 & 0xffffffff) * 0x10);
          pppppppplVar21 = (long ********)*plVar25;
          pppppppplVar20 = (long ********)plVar25[1];
          local_100 = pppppppplVar21;
          if (pppppppplVar20 == (long ********)0x0) {
            plVar25 = *(long **)(param_1 + 0x78);
            pplVar19 = *ppplVar22 + uVar24 * 0x34;
            local_f8 = (long ********)0x0;
            FUN_7101d08510((long *)&local_c8,(long *)&local_100,(long ****)param_3,param_4,param_5,
                           param_6,param_7,param_8);
            bVar5 = true;
          }
          else {
            pppppppplVar26 = pppppppplVar20 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppppppplVar26,0x10);
              if (bVar5) {
                *pppppppplVar26 = (long *******)((long)*pppppppplVar26 + 1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            pplVar19 = *ppplVar22 + uVar24 * 0x34;
            plVar25 = *(long **)(param_1 + 0x78);
            pppppppplVar26 = pppppppplVar20 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppppppplVar26,0x10);
              if (bVar5) {
                *pppppppplVar26 = (long *******)((long)*pppppppplVar26 + 1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppppppplVar26,0x10);
              if (bVar5) {
                *pppppppplVar26 = (long *******)((long)*pppppppplVar26 + 1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            local_f8 = pppppppplVar20;
            FUN_7101d08510((long *)&local_c8,(long *)&local_100,(long ****)param_3,param_4,param_5,
                           param_6,param_7,param_8);
            do {
              ppppppplVar15 = *pppppppplVar26;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppppppplVar26,0x10);
              if (bVar5) {
                *pppppppplVar26 = (long *******)((long)ppppppplVar15 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (ppppppplVar15 == (long *******)0x0) {
              (*(code *)(*pppppppplVar20)[2])(pppppppplVar20);
              std::__shared_weak_count::__release_weak();
            }
            bVar5 = false;
          }
          ppppbVar12 = (byte ****)0x2;
          FUN_7101d0e590((long *)&local_a0,plVar25,&local_c8,(byte ****)0x2,param_5,param_6,param_7,
                         param_8);
          if (local_c8 != (long ***)0x0) {
            local_c0 = local_c8;
            FUN_710392eb40((ulong)local_c8);
          }
          uVar9 = FUN_71023976c0((long)pppppppplVar21,*(int *)(pppppppplVar21 + 10));
          param_4 = (byte ****)(uVar9 & 0xffffffff);
          if (!bVar5) {
            pppppppplVar26 = pppppppplVar20 + 1;
            do {
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pppppppplVar26,0x10);
              if (bVar6) {
                *pppppppplVar26 = (long *******)((long)*pppppppplVar26 + 1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          local_d8 = pppppppplVar21;
          pppppppplStack_d0 = pppppppplVar20;
          FUN_7101d08850((long *)&local_c8,(long *)(param_1 + 0xa8),(long ****)&local_d8,ppppbVar12,
                         param_5,param_6,param_7,param_8);
          param_3 = (undefined **)&local_a0;
          param_5 = &local_c8;
          FUN_7101d0d9c0((long)pplVar19,4,(long *********)param_3,param_4,param_5,param_6,param_7,
                         param_8);
          if (local_c8 != (long ***)0x0) {
            local_c0 = local_c8;
            FUN_710392eb40((ulong)local_c8);
          }
          pppppppplVar21 = local_a0;
          if (!bVar5) {
            pppppppplVar26 = pppppppplVar20 + 1;
            do {
              ppppppplVar15 = *pppppppplVar26;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pppppppplVar26,0x10);
              if (bVar6) {
                *pppppppplVar26 = (long *******)((long)ppppppplVar15 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (ppppppplVar15 == (long *******)0x0) {
              (*(code *)(*pppppppplVar20)[2])(pppppppplVar20);
              std::__shared_weak_count::__release_weak();
              pppppppplVar21 = local_a0;
            }
          }
          local_a0 = pppppppplVar21;
          if (pppppppplVar21 != (long ********)0x0) {
            while (local_98 != pppppppplVar21) {
              pppppppplVar26 = (long ********)((long)local_98 + 0xfffffffffffffff0);
              (*(code *)**pppppppplVar26)(pppppppplVar26);
              local_98 = pppppppplVar26;
            }
            local_98 = pppppppplVar21;
            if (local_a0 != (long ********)0x0) {
              FUN_710392eb40((ulong)local_a0);
            }
          }
          if (!bVar5) {
            pppppppplVar21 = pppppppplVar20 + 1;
            do {
              ppppppplVar15 = *pppppppplVar21;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppppppplVar21,0x10);
              if (bVar5) {
                *pppppppplVar21 = (long *******)((long)ppppppplVar15 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (ppppppplVar15 == (long *******)0x0) {
              (*(code *)(*pppppppplVar20)[2])(pppppppplVar20);
              std::__shared_weak_count::__release_weak();
            }
            do {
              ppppppplVar15 = *pppppppplVar21;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppppppplVar21,0x10);
              if (bVar5) {
                *pppppppplVar21 = (long *******)((long)ppppppplVar15 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (ppppppplVar15 == (long *******)0x0) {
              (*(code *)(*pppppppplVar20)[2])(pppppppplVar20);
              std::__shared_weak_count::__release_weak();
            }
          }
          uVar9 = ((long)ppplVar22[1] - (long)*ppplVar22 >> 5) * 0x4ec4ec4ec4ec4ec5;
          uVar24 = uVar24 + 1;
        } while (uVar24 <= uVar9 && uVar9 - uVar24 != 0);
      }
      uVar13 = *(uint *)(param_1 + 0x138);
      uVar27 = uVar27 + 1;
    } while ((long)uVar27 < (long)(int)uVar13);
  }
  local_c8 = (long ***)(param_1 + 0xc0U);
  local_c0 = (long ***)(param_1 + 0xd8U);
  local_b8 = param_1 + 0xf0;
  lStack_b0 = param_1 + 0x108;
  local_a8 = param_1 + 0x120;
  if (uVar13 < 5) {
    ppplVar22 = (&local_c8)[(int)uVar13];
  }
  else if ((DAT_7105325d40 & 1) == 0) {
    iVar7 = __cxa_guard_acquire(&DAT_7105325d40);
    ppplVar22 = (long ***)&DAT_7105325d28;
    if (iVar7 != 0) {
      param_3 = &PTR_LOOP_7104f17000;
      DAT_7105325d28 = 0;
      DAT_7105325d30 = 0;
      DAT_7105325d38 = 0;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_7105325d40);
    }
  }
  else {
    ppplVar22 = (long ***)&DAT_7105325d28;
  }
  if (ppplVar22[1] != *ppplVar22) {
    uVar27 = 0;
    do {
      lVar8 = *(long *)(DAT_7105329740 + 8) + (ulong)*(uint *)(param_1 + 0x138) * 0x18;
      lVar14 = *(long *)(lVar8 + 8);
      if ((ulong)(*(long *)(lVar8 + 0x10) - lVar14 >> 4) <= (uVar27 & 0xffffffff))
      goto LAB_7101d083b8;
      plVar25 = (long *)(lVar14 + (uVar27 & 0xffffffff) * 0x10);
      pppppppplVar21 = (long ********)*plVar25;
      pppppppplVar20 = (long ********)plVar25[1];
      if (pppppppplVar20 != (long ********)0x0) {
        pppppppplVar26 = pppppppplVar20 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppppplVar26,0x10);
          if (bVar5) {
            *pppppppplVar26 = (long *******)((long)*pppppppplVar26 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uVar13 = param_2;
      if (2 < param_2) {
        if (param_2 == 3) {
          uVar13 = 2;
          if (*(int *)(pppppppplVar21 + 10) != -1) {
            uVar13 = 3;
          }
        }
        else {
          uVar13 = 1;
        }
      }
      pplVar19 = *ppplVar22;
      plVar25 = *(long **)(param_1 + 0x78);
      local_100 = pppppppplVar21;
      if (pppppppplVar20 == (long ********)0x0) {
        local_f8 = (long ********)0x0;
        FUN_7101d08510((long *)&local_c8,(long *)&local_100,(long ****)param_3,param_4,param_5,
                       param_6,param_7,param_8);
      }
      else {
        pppppppplVar26 = pppppppplVar20 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppppplVar26,0x10);
          if (bVar5) {
            *pppppppplVar26 = (long *******)((long)*pppppppplVar26 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppppplVar26,0x10);
          if (bVar5) {
            *pppppppplVar26 = (long *******)((long)*pppppppplVar26 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        local_f8 = pppppppplVar20;
        FUN_7101d08510((long *)&local_c8,(long *)&local_100,(long ****)param_3,param_4,param_5,
                       param_6,param_7,param_8);
        do {
          ppppppplVar15 = *pppppppplVar26;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppppplVar26,0x10);
          if (bVar5) {
            *pppppppplVar26 = (long *******)((long)ppppppplVar15 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (ppppppplVar15 == (long *******)0x0) {
          (*(code *)(*pppppppplVar20)[2])(pppppppplVar20);
          std::__shared_weak_count::__release_weak();
        }
      }
      ppppbVar12 = (byte ****)0x2;
      FUN_7101d0e590((long *)&local_a0,plVar25,&local_c8,(byte ****)0x2,param_5,param_6,param_7,
                     param_8);
      if (local_c8 != (long ***)0x0) {
        local_c0 = local_c8;
        FUN_710392eb40((ulong)local_c8);
      }
      uVar24 = FUN_71023976c0((long)pppppppplVar21,*(int *)(pppppppplVar21 + 10));
      param_4 = (byte ****)(uVar24 & 0xffffffff);
      if (pppppppplVar20 != (long ********)0x0) {
        pppppppplVar26 = pppppppplVar20 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppppplVar26,0x10);
          if (bVar5) {
            *pppppppplVar26 = (long *******)((long)*pppppppplVar26 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      local_e8 = pppppppplVar21;
      pppppppplStack_e0 = pppppppplVar20;
      FUN_7101d08850((long *)&local_c8,(long *)(param_1 + 0xa8),(long ****)&local_e8,ppppbVar12,
                     param_5,param_6,param_7,param_8);
      param_3 = (undefined **)&local_a0;
      param_5 = &local_c8;
      FUN_7101d0d9c0((long)(pplVar19 + uVar27 * 0x34),uVar13,(long *********)param_3,param_4,param_5
                     ,param_6,param_7,param_8);
      if (local_c8 != (long ***)0x0) {
        local_c0 = local_c8;
        FUN_710392eb40((ulong)local_c8);
      }
      pppppppplVar26 = local_a0;
      if (pppppppplVar20 != (long ********)0x0) {
        pppppppplVar28 = pppppppplVar20 + 1;
        do {
          ppppppplVar15 = *pppppppplVar28;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppppplVar28,0x10);
          if (bVar5) {
            *pppppppplVar28 = (long *******)((long)ppppppplVar15 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (ppppppplVar15 == (long *******)0x0) {
          (*(code *)(*pppppppplVar20)[2])(pppppppplVar20);
          std::__shared_weak_count::__release_weak();
          pppppppplVar26 = local_a0;
        }
      }
      local_a0 = pppppppplVar26;
      if (pppppppplVar26 != (long ********)0x0) {
        while (local_98 != pppppppplVar26) {
          pppppppplVar28 = (long ********)((long)local_98 + 0xfffffffffffffff0);
          (*(code *)**pppppppplVar28)(pppppppplVar28);
          local_98 = pppppppplVar28;
        }
        local_98 = pppppppplVar26;
        if (local_a0 != (long ********)0x0) {
          FUN_710392eb40((ulong)local_a0);
        }
      }
      if (pppppppplVar20 == (long ********)0x0) {
LAB_7101d07dd4:
        if (uVar13 == 2) goto LAB_7101d07ddc;
LAB_7101d07eb0:
        if (pppppppplVar20 != (long ********)0x0) {
          pppppppplVar26 = pppppppplVar20 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppppppplVar26,0x10);
            if (bVar5) {
              *pppppppplVar26 = (long *******)((long)*pppppppplVar26 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          FUN_7101d08bf0(param_1,(long)pppppppplVar21,(long ****)param_3,param_4,param_5,param_6,
                         param_7,param_8);
          do {
            ppppppplVar15 = *pppppppplVar26;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppppppplVar26,0x10);
            if (bVar5) {
              *pppppppplVar26 = (long *******)((long)ppppppplVar15 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (ppppppplVar15 == (long *******)0x0) {
            (*(code *)(*pppppppplVar20)[2])(pppppppplVar20);
            std::__shared_weak_count::__release_weak();
          }
          goto LAB_7101d07f00;
        }
        FUN_7101d08bf0(param_1,(long)pppppppplVar21,(long ****)param_3,param_4,param_5,param_6,
                       param_7,param_8);
      }
      else {
        pppppppplVar26 = pppppppplVar20 + 1;
        do {
          ppppppplVar15 = *pppppppplVar26;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppppplVar26,0x10);
          if (bVar5) {
            *pppppppplVar26 = (long *******)((long)ppppppplVar15 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (ppppppplVar15 != (long *******)0x0) goto LAB_7101d07dd4;
        (*(code *)(*pppppppplVar20)[2])(pppppppplVar20);
        std::__shared_weak_count::__release_weak();
        if (uVar13 != 2) goto LAB_7101d07eb0;
LAB_7101d07ddc:
        ppppppplVar15 = pppppppplVar21[2];
        ppppppplVar17 = pppppppplVar21[3];
        if ((int)((ulong)((long)ppppppplVar17 - (long)ppppppplVar15) >> 4) != 0) {
          uVar24 = 0;
          do {
            if ((ulong)((long)ppppppplVar17 - (long)ppppppplVar15 >> 4) <= uVar24) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            pppppplVar2 = ppppppplVar15[uVar24 * 2];
            pppppplVar3 = (ppppppplVar15 + uVar24 * 2)[1];
            if (pppppplVar3 == (long ******)0x0) {
              FUN_7101d08bf0(param_1,(long)pppppplVar2,(long ****)param_3,param_4,param_5,param_6,
                             param_7,param_8);
            }
            else {
              pppppplVar1 = pppppplVar3 + 1;
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(pppppplVar1,0x10);
                if (bVar5) {
                  *pppppplVar1 = (long *****)((long)*pppppplVar1 + 1);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              FUN_7101d08bf0(param_1,(long)pppppplVar2,(long ****)param_3,param_4,param_5,param_6,
                             param_7,param_8);
              pppppplVar2 = pppppplVar3 + 1;
              do {
                ppppplVar18 = *pppppplVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(pppppplVar2,0x10);
                if (bVar5) {
                  *pppppplVar2 = (long *****)((long)ppppplVar18 + -1);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (ppppplVar18 == (long *****)0x0) {
                (*(code *)(*pppppplVar3)[2])(pppppplVar3);
                std::__shared_weak_count::__release_weak();
              }
            }
            ppppppplVar15 = pppppppplVar21[2];
            ppppppplVar17 = pppppppplVar21[3];
            uVar24 = uVar24 + 1;
          } while (uVar24 < ((ulong)((long)ppppppplVar17 - (long)ppppppplVar15) >> 4 & 0xffffffff));
        }
        if (pppppppplVar20 != (long ********)0x0) {
LAB_7101d07f00:
          do {
            pppppppplVar21 = pppppppplVar20 + 1;
            ppppppplVar15 = *pppppppplVar21;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppppppplVar21,0x10);
            if (bVar5) {
              *pppppppplVar21 = (long *******)((long)ppppppplVar15 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (ppppppplVar15 == (long *******)0x0) {
            (*(code *)(*pppppppplVar20)[2])(pppppppplVar20);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
      uVar24 = ((long)ppplVar22[1] - (long)*ppplVar22 >> 5) * 0x4ec4ec4ec4ec4ec5;
      uVar27 = uVar27 + 1;
    } while (uVar27 <= uVar24 && uVar24 - uVar27 != 0);
  }
  uVar13 = *(uint *)(param_1 + 0x138);
  if (uVar13 == *(int *)(*(long *)(DAT_7105329740 + 8) + 4) - 1U) {
    lVar8 = *(long *)(DAT_7105329740 + 8) + (ulong)uVar13 * 0x18;
    plVar25 = *(long **)(lVar8 + 8);
    if (*(long **)(lVar8 + 0x10) == plVar25) {
LAB_7101d083b8:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    lVar8 = *plVar25;
    plVar25 = (long *)plVar25[1];
    if (plVar25 != (long *)0x0) {
      plVar23 = plVar25 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar5) {
          *plVar23 = *plVar23 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      uVar13 = *(uint *)(param_1 + 0x138);
    }
    local_a8 = param_1 + 0x120;
    local_c8 = (long ***)(param_1 + 0xc0U);
    local_c0 = (long ***)(param_1 + 0xd8U);
    local_b8 = param_1 + 0xf0;
    lStack_b0 = param_1 + 0x108;
    if (uVar13 < 5) {
      ppplVar22 = (&local_c8)[(int)uVar13];
    }
    else if ((DAT_7105325d40 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_7105325d40);
      ppplVar22 = (long ***)&DAT_7105325d28;
      if (iVar7 != 0) {
        param_3 = &PTR_LOOP_7104f17000;
        DAT_7105325d28 = 0;
        DAT_7105325d30 = 0;
        DAT_7105325d38 = 0;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_7105325d40);
      }
    }
    else {
      ppplVar22 = (long ***)&DAT_7105325d28;
    }
    pplVar19 = *ppplVar22;
    if (ppplVar22[1] == pplVar19) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    plVar23 = *(long **)(param_1 + 0x78);
    if (plVar25 != (long *)0x0) {
      plVar16 = plVar25 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *plVar16 = *plVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_110 = lVar8;
    plStack_108 = plVar25;
    FUN_7101d08510((long *)&local_100,&local_110,(long ****)param_3,param_4,param_5,param_6,param_7,
                   param_8);
    plVar16 = pplVar19[0x20];
    param_3 = (undefined **)&local_100;
    param_4 = (byte ****)0x1;
    FUN_7101d0e590((long *)&local_a0,plVar23,(long ****)param_3,(byte ****)0x1,param_5,param_6,
                   param_7,param_8);
    if (local_98 != local_a0) {
      lVar8 = 0;
      uVar27 = 0;
      do {
        lVar14 = (long)local_a0 + lVar8;
        ppppppppplVar11 = (long *********)(uVar27 & 0xffffffff);
        FUN_7103776910(&local_c8,(long)(plVar16 + 1),(long ****)"set_rep_player_%d",ppppppppplVar11,
                       param_4,param_5,param_6,param_7,param_8);
        ppplVar22 = local_c0;
        FUN_7103778b80((long)local_c0,lVar14,ppppppppplVar11,param_4,param_5,param_6,param_7,param_8
                      );
        param_3 = (undefined **)(uVar27 & 0xffffffff);
        FUN_7103776910(&local_88,(long)(plVar16 + 1),(long ****)"set_rep_finalimg_%d",param_3,
                       param_4,param_5,param_6,param_7,param_8);
        uVar24 = local_80;
        FUN_7103778b80(local_80,lVar14,(long *********)param_3,param_4,param_5,param_6,param_7,
                       param_8);
        local_88 = &PTR_FUN_710523d9a8;
        local_80 = 0;
        if (uVar24 != 0) {
          FUN_710392eb40(uVar24);
        }
        local_c8 = (long ***)&PTR_FUN_710523d9a8;
        local_c0 = (long ***)0x0;
        if (ppplVar22 != (long ***)0x0) {
          FUN_710392eb40((ulong)ppplVar22);
        }
        uVar27 = uVar27 + 1;
        lVar8 = lVar8 + 0x10;
      } while (uVar27 < (ulong)((long)local_98 - (long)local_a0 >> 4));
    }
    pppppppplVar21 = local_f8;
    if (local_100 == local_f8) {
      uVar13 = 0;
      pppppppplVar21 = local_100;
      if (local_f8 == local_100) goto LAB_7101d083b8;
    }
    else {
      uVar13 = 0;
      pppppppplVar20 = local_100;
      do {
        FUN_7102398db0((uint *)&local_c8,(long)*pppppppplVar20,0);
        param_3 = (undefined **)(ulong)uVar13;
        FUN_7103776910(&local_88,(long)(plVar16 + 1),(long ****)"set_txt_name_%d",param_3,param_4,
                       param_5,param_6,param_7,param_8);
        uVar27 = local_80;
        if (*(long **)(local_80 + 0x10) != (long *)0x0) {
          param_4 = (byte ****)0x1;
          param_3 = (undefined **)&DAT_ffffffff;
          FUN_71037a2270(*(long **)(local_80 + 0x10),(ushort *)&local_c0,0xffffffff,1);
        }
        local_88 = &PTR_FUN_710523d9a8;
        local_80 = 0;
        if (uVar27 != 0) {
          FUN_710392eb40(uVar27);
        }
        pppppppplVar20 = pppppppplVar20 + 1;
        uVar13 = uVar13 + 1;
      } while (pppppppplVar21 != pppppppplVar20);
      pppppppplVar21 = local_f8;
      if (local_f8 == local_100) goto LAB_7101d083b8;
    }
    if ((1 < *(uint *)((long)*local_100 + 0x814)) && (*(int *)(*local_100 + 0x3f) == 2)) {
      if (local_100 != pppppppplVar21) {
        pppppppplVar20 = local_100;
        do {
          FUN_7102398db0((uint *)&local_c8,(long)*pppppppplVar20,1);
          param_3 = (undefined **)(ulong)uVar13;
          FUN_7103776910(&local_88,(long)(plVar16 + 1),(long ****)"set_txt_name_%d",param_3,param_4,
                         param_5,param_6,param_7,param_8);
          uVar27 = local_80;
          if (*(long **)(local_80 + 0x10) != (long *)0x0) {
            param_4 = (byte ****)0x1;
            param_3 = (undefined **)&DAT_ffffffff;
            FUN_71037a2270(*(long **)(local_80 + 0x10),(ushort *)&local_c0,0xffffffff,1);
          }
          local_88 = &PTR_FUN_710523d9a8;
          local_80 = 0;
          if (uVar27 != 0) {
            FUN_710392eb40(uVar27);
          }
          pppppppplVar20 = pppppppplVar20 + 1;
          uVar13 = uVar13 + 1;
        } while (pppppppplVar21 != pppppppplVar20);
      }
      FUN_7103778300(0x3f800000,plVar16[2],0x7104454c9f);
    }
    pppppppplVar21 = local_a0;
    if (local_a0 != (long ********)0x0) {
      while (local_98 != pppppppplVar21) {
        pppppppplVar20 = (long ********)((long)local_98 + 0xfffffffffffffff0);
        (*(code *)**pppppppplVar20)(pppppppplVar20);
        local_98 = pppppppplVar20;
      }
      if (local_a0 != (long ********)0x0) {
        FUN_710392eb40((ulong)local_a0);
      }
    }
    if (local_100 != (long ********)0x0) {
      local_f8 = local_100;
      FUN_710392eb40((ulong)local_100);
    }
    if (plVar25 != (long *)0x0) {
      plVar23 = plVar25 + 1;
      do {
        lVar8 = *plVar23;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar5) {
          *plVar23 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
        std::__shared_weak_count::__release_weak();
      }
      do {
        lVar8 = *plVar23;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar5) {
          *plVar23 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (*(char *)(*(long *)(param_1 + 0x88) + 0xc1) != '\0') goto LAB_7101d083fc;
  uVar13 = *(uint *)(param_1 + 0x138);
  FUN_7103776910(&local_c8,**(long **)(*(long *)(param_1 + 0x88) + 0x80) + 8,
                 (long ****)"set_txt_tnmt_progress",param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  iVar7 = *(int *)(*(long *)(DAT_7105329740 + 8) + 4);
  if (iVar7 - 1U == uVar13) {
    pcVar10 = "mel_tournament_chart_round_final";
LAB_7101d08398:
    FUN_710377a120((long)&local_c8,pcVar10,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    if ((uVar13 != 0) && (iVar7 - 2U <= uVar13)) {
      pcVar10 = "mel_tournament_chart_round_title_semifinal";
      goto LAB_7101d08398;
    }
    FUN_710377a280((long)&local_c8,(byte *)"mel_tournament_chart_round_title",1);
  }
  ppplVar22 = local_c0;
  local_c8 = (long ***)&PTR_FUN_710523d9a8;
  local_c0 = (long ***)0x0;
  if (ppplVar22 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar22);
  }
LAB_7101d083fc:
  if (param_2 == 0) {
    lVar14 = *(long *)(param_1 + 0xb0);
    for (lVar8 = *(long *)(param_1 + 0xa8); lVar8 != lVar14; lVar8 = lVar8 + 0x30) {
      *(undefined4 *)(lVar8 + 0x24) = 0;
      FUN_7103778300(0x3f800000,*(long *)(lVar8 + 8),0x71044017b0);
    }
  }
  return;
}

