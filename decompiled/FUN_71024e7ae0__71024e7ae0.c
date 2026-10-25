// addr:      71024e7ae0
// offset:    0x24e7ae0
// name:      FUN_71024e7ae0
// mangled:   
// signature: undefined __cdecl FUN_71024e7ae0(undefined8 * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, undefined * param_5, long * param_6, long * * * param_7, long * * * param_8)


void FUN_71024e7ae0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   undefined *param_5,long *param_6,long ***param_7,long ***param_8)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  long ********pppppppplVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 uVar12;
  long *********ppppppppplVar13;
  char *pcVar14;
  code *pcVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  ulong uVar27;
  int *piVar28;
  long lVar29;
  undefined1 auVar30 [16];
  long local_e0;
  long *plStack_d8;
  long ***local_d0;
  long *local_c8;
  byte ***local_c0;
  long *local_b8;
  long ********local_b0;
  long *local_a8;
  uint local_a0 [2];
  ulong local_98;
  long *local_90;
  uint local_88 [2];
  long ********local_80;
  long *local_78;
  uint local_70 [4];
  
  *param_1 = &PTR_FUN_71050c06c0;
  ppppppppplVar13 = (long *********)&DAT_00000168;
  memset(param_1 + 1,0,0x168);
  lVar29 = 0;
  *(undefined1 *)(param_1 + 0x2e) = 1;
  pcVar15 = (code *)param_5;
  do {
    lVar18 = DAT_7105332f20;
    uVar3 = *(uint *)(*DAT_710532a860 + lVar29 * 4 + 0x3ccc0);
    uVar27 = (ulong)uVar3;
    if (uVar3 != 0xffffff) {
      if (uVar3 < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        lVar16 = *(long *)(lVar18 + 0x40);
        if ((*(byte *)(lVar16 + uVar27 * 0x48 + 8) & 1) == 0) {
          std::recursive_mutex::unlock();
          FUN_7103540d50(lVar18,uVar3,ppppppppplVar13,param_4,(long ****)pcVar15,param_6,param_7,
                         param_8);
        }
        else {
          FUN_71035432d0((int *)(lVar16 + uVar27 * 0x48));
          std::recursive_mutex::unlock();
        }
      }
      lVar18 = DAT_7105332f20;
      if (uVar3 < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        piVar28 = (int *)(*(long *)(lVar18 + 0x40) + uVar27 * 0x48);
        bVar4 = *(byte *)(piVar28 + 2);
        std::recursive_mutex::unlock();
        bVar7 = false;
        if (((bVar4 & 1) != 0) && (piVar28 != (int *)0x0)) {
          iVar8 = -1;
          if (*piVar28 != 0xffffff) {
            iVar8 = FUN_7103543080((long)piVar28);
          }
          bVar7 = iVar8 == 3;
        }
      }
      else {
        bVar7 = false;
      }
      lVar18 = DAT_7105332f20;
      if (uVar3 < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        lVar16 = *(long *)(lVar18 + 0x40);
        if ((*(byte *)(lVar16 + uVar27 * 0x48 + 8) & 1) != 0) {
          FUN_710353f5a0(lVar18,(int *)(lVar16 + uVar27 * 0x48),(long ****)ppppppppplVar13,param_4,
                         (long ****)pcVar15,param_6,param_7,param_8);
        }
        std::recursive_mutex::unlock();
        lVar18 = DAT_7105332f20;
      }
      DAT_7105332f20 = lVar18;
      if (bVar7) {
        uVar3 = *(uint *)(*DAT_710532a860 + lVar29 * 4 + 0x3ccc0);
        local_88[0] = uVar3;
        if ((uVar3 != 0xffffff) && (uVar3 < *(uint *)(lVar18 + 0x48))) {
          std::recursive_mutex::lock();
          if ((*(byte *)(*(long *)(lVar18 + 0x40) + (ulong)uVar3 * 0x48 + 8) & 1) == 0) {
            std::recursive_mutex::unlock();
            FUN_7103540d50(lVar18,uVar3,ppppppppplVar13,param_4,(long ****)pcVar15,param_6,param_7,
                           param_8);
          }
          else {
            FUN_71035432d0((int *)(*(long *)(lVar18 + 0x40) + (ulong)uVar3 * 0x48));
            std::recursive_mutex::unlock();
          }
        }
        pcVar14 = "model.numdlb";
        FUN_710353e1d0((uint *)&local_80,local_88,(byte *)"model.numdlb");
        uVar3 = (uint)local_80;
        uVar27 = (ulong)local_80 & 0xffffffff;
        if ((uint)local_80 != 0xffffff) {
          FUN_7103540b10(DAT_7105332f20,(uint)local_80,(long *********)pcVar14,param_4,
                         (long ****)pcVar15,param_6,param_7,param_8);
        }
        if ((uVar3 == 0xffffff) ||
           (lVar18 = **(long **)(DAT_7105332f20 + 0x78),
           *(uint *)(*(long *)(lVar18 + 0x40) + 4) <= uVar3)) {
          local_80 = (long ********)0x0;
        }
        else {
          local_80 = (long ********)
                     (*(ulong *)(*(long *)(lVar18 + 0x60) + uVar27 * 0x20) & 0xffffffffff);
        }
        lVar18 = (*(long **)(DAT_7105332f20 + 0x78))[1];
        param_4 = (byte ****)&DAT_00000008;
        pcVar15 = FUN_7103542240;
        puVar9 = bsearch(&local_80,*(void **)(lVar18 + 0x20),
                         (ulong)*(uint *)(*(long *)(lVar18 + 8) + 8),8,FUN_7103542240);
        local_70[0] = 0xffffff;
        if (puVar9 != (undefined8 *)0x0) {
          uVar3 = (uint)((ulong)*puVar9 >> 0x20);
          uVar17 = uVar3 >> 8;
          if ((uVar17 != 0xffffff) &&
             (uVar2 = *(uint *)(*(long *)(lVar18 + 8) + 4), local_70[0] = uVar3 >> 8,
             uVar2 < uVar17 || uVar2 == local_70[0])) {
            local_70[0] = 0xffffff;
          }
        }
        ppppppppplVar13 = (long *********)&DAT_00000009;
        FUN_71035c2890(&local_80,local_70,(long *********)&DAT_00000009,param_4,(long ****)pcVar15,
                       param_6,param_7,param_8);
        plVar25 = local_78;
        pppppppplVar6 = local_80;
        local_80 = (long ********)0x0;
        local_78 = (long *)0x0;
        param_1[lVar29 * 2 + 1] = pppppppplVar6;
        plVar24 = param_1 + lVar29 * 2 + 2;
        plVar20 = (long *)*plVar24;
        *plVar24 = (long)plVar25;
        if (plVar20 != (long *)0x0) {
          plVar25 = plVar20 + 1;
          do {
            lVar18 = *plVar25;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
            if (bVar7) {
              *plVar25 = lVar18 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
            std::__shared_weak_count::__release_weak();
            if (local_78 != (long *)0x0) {
              plVar25 = local_78 + 1;
              do {
                lVar18 = *plVar25;
                cVar5 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar7) {
                  *plVar25 = lVar18 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar18 == 0) {
                (**(code **)(*local_78 + 0x10))(local_78);
                std::__shared_weak_count::__release_weak();
              }
            }
          }
        }
        lVar18 = DAT_7105332f20;
        uVar27 = (ulong)local_88[0];
        if (local_88[0] != 0xffffff) {
          if (local_88[0] < *(uint *)(DAT_7105332f20 + 0x48)) {
            std::recursive_mutex::lock();
            lVar16 = *(long *)(lVar18 + 0x40);
            if ((*(byte *)(lVar16 + uVar27 * 0x48 + 8) & 1) != 0) {
              FUN_710353f5a0(lVar18,(int *)(lVar16 + uVar27 * 0x48),(long ****)ppppppppplVar13,
                             param_4,(long ****)pcVar15,param_6,param_7,param_8);
            }
            std::recursive_mutex::unlock();
          }
          local_88[0] = 0xffffff;
        }
        puVar9 = param_1 + lVar29 * 2 + 9;
        *puVar9 = 0;
        plVar25 = param_1 + lVar29 * 2 + 10;
        plVar20 = (long *)*plVar25;
        *plVar25 = 0;
        if (plVar20 != (long *)0x0) {
          plVar19 = plVar20 + 1;
          do {
            lVar18 = *plVar19;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar7) {
              *plVar19 = lVar18 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
            std::__shared_weak_count::__release_weak();
          }
        }
        plVar19 = param_1 + lVar29 * 2 + 0x11;
        *plVar19 = 0;
        plVar20 = param_1 + lVar29 * 2 + 0x12;
        plVar21 = (long *)*plVar20;
        *plVar20 = 0;
        if (plVar21 != (long *)0x0) {
          plVar26 = plVar21 + 1;
          do {
            lVar18 = *plVar26;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar7) {
              *plVar26 = lVar18 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
            std::__shared_weak_count::__release_weak();
          }
        }
        plVar21 = param_1 + lVar29 * 2 + 0x19;
        *plVar21 = 0;
        plVar26 = param_1 + lVar29 * 2 + 0x1a;
        plVar22 = (long *)*plVar26;
        *plVar26 = 0;
        if (plVar22 != (long *)0x0) {
          plVar23 = plVar22 + 1;
          do {
            lVar18 = *plVar23;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar7) {
              *plVar23 = lVar18 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
            std::__shared_weak_count::__release_weak();
          }
        }
        plVar22 = (long *)param_1[lVar29 * 2 + 0x22];
        param_1[lVar29 * 2 + 0x21] = 0;
        param_1[lVar29 * 2 + 0x22] = 0;
        if (plVar22 != (long *)0x0) {
          plVar23 = plVar22 + 1;
          do {
            lVar18 = *plVar23;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar7) {
              *plVar23 = lVar18 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
            std::__shared_weak_count::__release_weak();
          }
        }
        lVar16 = lVar29 * 4;
        *(undefined4 *)((long)param_1 + lVar16 + 0x14c) = 0;
        *(undefined4 *)((long)param_1 + lVar16 + 0x15c) = 0;
        *(undefined1 *)((long)param_1 + lVar29 + 0x16c) = 0;
        lVar18 = DAT_7105332f20;
        uVar3 = *(uint *)(*DAT_710532a860 + lVar16 + 0x3ccd0);
        uVar27 = (ulong)uVar3;
        if (uVar3 != 0xffffff) {
          if (uVar3 < *(uint *)(DAT_7105332f20 + 0x48)) {
            std::recursive_mutex::lock();
            lVar16 = *(long *)(lVar18 + 0x40);
            if ((*(byte *)(lVar16 + uVar27 * 0x48 + 8) & 1) == 0) {
              std::recursive_mutex::unlock();
              FUN_7103540d50(lVar18,uVar3,ppppppppplVar13,param_4,(long ****)pcVar15,param_6,param_7
                             ,param_8);
            }
            else {
              FUN_71035432d0((int *)(lVar16 + uVar27 * 0x48));
              std::recursive_mutex::unlock();
            }
          }
          lVar18 = DAT_7105332f20;
          if (uVar3 < *(uint *)(DAT_7105332f20 + 0x48)) {
            std::recursive_mutex::lock();
            piVar28 = (int *)(*(long *)(lVar18 + 0x40) + uVar27 * 0x48);
            bVar4 = *(byte *)(piVar28 + 2);
            std::recursive_mutex::unlock();
            bVar7 = false;
            if (((bVar4 & 1) != 0) && (piVar28 != (int *)0x0)) {
              iVar8 = -1;
              if (*piVar28 != 0xffffff) {
                iVar8 = FUN_7103543080((long)piVar28);
              }
              bVar7 = iVar8 == 3;
            }
          }
          else {
            bVar7 = false;
          }
          lVar18 = DAT_7105332f20;
          if (uVar3 < *(uint *)(DAT_7105332f20 + 0x48)) {
            std::recursive_mutex::lock();
            lVar16 = *(long *)(lVar18 + 0x40);
            if ((*(byte *)(lVar16 + uVar27 * 0x48 + 8) & 1) != 0) {
              FUN_710353f5a0(lVar18,(int *)(lVar16 + uVar27 * 0x48),(long ****)ppppppppplVar13,
                             param_4,(long ****)pcVar15,param_6,param_7,param_8);
            }
            std::recursive_mutex::unlock();
          }
          if (bVar7) {
            puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar13,param_4,(long ****)pcVar15
                                     ,param_6,param_7,param_8);
            if (puVar10 == (undefined8 *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_70[0] = 0;
                local_80 = (long ********)&DAT_00000030;
                ppppppppplVar13 = &local_80;
                uVar27 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_70);
                if (((uVar27 & 1) != 0) &&
                   (puVar10 = (undefined8 *)
                              FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar13,param_4,
                                             (long ****)pcVar15,param_6,param_7,param_8),
                   puVar10 != (undefined8 *)0x0)) goto LAB_71024e8178;
              }
              puVar10 = (undefined8 *)0x0;
            }
LAB_71024e8178:
            *puVar10 = &PTR_FUN_7105239200;
            puVar10[3] = 0;
            puVar10[4] = 0;
            *(undefined4 *)(puVar10 + 5) = 0x3f800000;
            puVar10[1] = 0;
            puVar10[2] = 0;
            puVar11 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar13,param_4,(long ****)pcVar15
                                     ,param_6,param_7,param_8);
            if (puVar11 == (undefined8 *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_70[0] = 0;
                local_80 = (long ********)&SUB_00000020;
                ppppppppplVar13 = &local_80;
                uVar27 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_70);
                if (((uVar27 & 1) != 0) &&
                   (puVar11 = (undefined8 *)
                              FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar13,param_4,
                                             (long ****)pcVar15,param_6,param_7,param_8),
                   puVar11 != (undefined8 *)0x0)) goto LAB_71024e81e8;
              }
              puVar11 = (undefined8 *)0x0;
            }
LAB_71024e81e8:
            *puVar11 = &DAT_7105239240;
            puVar11[1] = 0;
            puVar11[2] = 0;
            puVar11[3] = puVar10;
            *puVar9 = puVar10;
            plVar22 = (long *)*plVar25;
            *plVar25 = (long)puVar11;
            if (plVar22 != (long *)0x0) {
              plVar23 = plVar22 + 1;
              do {
                lVar18 = *plVar23;
                cVar5 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                if (bVar7) {
                  *plVar23 = lVar18 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar18 == 0) {
                (**(code **)(*plVar22 + 0x10))(plVar22);
                std::__shared_weak_count::__release_weak();
              }
            }
            puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,200,(long ****)ppppppppplVar13,param_4,(long ****)pcVar15,
                                     param_6,param_7,param_8);
            uVar12 = extraout_x1;
            if (puVar10 == (undefined8 *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_70[0] = 0;
                local_80 = (long ********)&DAT_000000c8;
                ppppppppplVar13 = &local_80;
                auVar30 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_70);
                uVar12 = auVar30._8_8_;
                if (((auVar30._0_8_ & 1) != 0) &&
                   (puVar10 = (undefined8 *)
                              FUN_710392e290(0x10,200,(long ****)ppppppppplVar13,param_4,
                                             (long ****)pcVar15,param_6,param_7,param_8),
                   uVar12 = extraout_x1_00, puVar10 != (undefined8 *)0x0)) goto LAB_71024e829c;
              }
              puVar10 = (undefined8 *)0x0;
            }
LAB_71024e829c:
            puVar10[1] = 0;
            puVar10[2] = 0;
            *puVar10 = &PTR_FUN_7104f76000;
            FUN_710367adf0(puVar10 + 3,uVar12,(long ****)ppppppppplVar13,param_4,(long ****)pcVar15,
                           param_6,param_7,param_8);
            *plVar19 = (long)(puVar10 + 3);
            plVar22 = (long *)*plVar20;
            *plVar20 = (long)puVar10;
            if (plVar22 != (long *)0x0) {
              plVar23 = plVar22 + 1;
              do {
                lVar18 = *plVar23;
                cVar5 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                if (bVar7) {
                  *plVar23 = lVar18 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar18 == 0) {
                (**(code **)(*plVar22 + 0x10))(plVar22);
                std::__shared_weak_count::__release_weak();
              }
            }
            puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0xa8,(long ****)ppppppppplVar13,param_4,(long ****)pcVar15
                                     ,param_6,param_7,param_8);
            uVar12 = extraout_x1_01;
            if (puVar10 == (undefined8 *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_70[0] = 0;
                local_80 = (long ********)&DAT_000000a8;
                ppppppppplVar13 = &local_80;
                auVar30 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_70);
                uVar12 = auVar30._8_8_;
                if (((auVar30._0_8_ & 1) != 0) &&
                   (puVar10 = (undefined8 *)
                              FUN_710392e290(0x10,0xa8,(long ****)ppppppppplVar13,param_4,
                                             (long ****)pcVar15,param_6,param_7,param_8),
                   uVar12 = extraout_x1_02, puVar10 != (undefined8 *)0x0)) goto LAB_71024e835c;
              }
              puVar10 = (undefined8 *)0x0;
            }
LAB_71024e835c:
            puVar10[1] = 0;
            puVar10[2] = 0;
            *puVar10 = &PTR_FUN_71050c0538;
            FUN_7103680c00(puVar10 + 3,uVar12,(long ****)ppppppppplVar13,param_4,(long ****)pcVar15,
                           param_6,param_7,param_8);
            *plVar21 = (long)(puVar10 + 3);
            plVar22 = (long *)*plVar26;
            *plVar26 = (long)puVar10;
            if (plVar22 != (long *)0x0) {
              plVar23 = plVar22 + 1;
              do {
                lVar18 = *plVar23;
                cVar5 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                if (bVar7) {
                  *plVar23 = lVar18 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar18 == 0) {
                (**(code **)(*plVar22 + 0x10))(plVar22);
                std::__shared_weak_count::__release_weak();
              }
            }
            plVar22 = param_1 + lVar29 * 2 + 0x21;
            puVar10 = param_1 + lVar29 * 2 + 0x22;
            puVar11 = (undefined8 *)
                      FUN_710392e290(0x10,0xa8,(long ****)ppppppppplVar13,param_4,(long ****)pcVar15
                                     ,param_6,param_7,param_8);
            uVar12 = extraout_x1_03;
            if (puVar11 == (undefined8 *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_70[0] = 0;
                local_80 = (long ********)&DAT_000000a8;
                ppppppppplVar13 = &local_80;
                auVar30 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_70);
                uVar12 = auVar30._8_8_;
                if (((auVar30._0_8_ & 1) != 0) &&
                   (puVar11 = (undefined8 *)
                              FUN_710392e290(0x10,0xa8,(long ****)ppppppppplVar13,param_4,
                                             (long ****)pcVar15,param_6,param_7,param_8),
                   uVar12 = extraout_x1_04, puVar11 != (undefined8 *)0x0)) goto LAB_71024e8424;
              }
              puVar11 = (undefined8 *)0x0;
            }
LAB_71024e8424:
            puVar11[1] = 0;
            puVar11[2] = 0;
            *puVar11 = &PTR_FUN_71050c0570;
            FUN_710367c690(puVar11 + 3,uVar12,(long ****)ppppppppplVar13,param_4,(long ****)pcVar15,
                           param_6,param_7,param_8);
            *plVar22 = (long)(puVar11 + 3);
            plVar23 = (long *)*puVar10;
            *puVar10 = puVar11;
            if (plVar23 != (long *)0x0) {
              plVar1 = plVar23 + 1;
              do {
                lVar18 = *plVar1;
                cVar5 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar7) {
                  *plVar1 = lVar18 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar18 == 0) {
                (**(code **)(*plVar23 + 0x10))(plVar23);
                std::__shared_weak_count::__release_weak();
              }
            }
            local_98 = param_1[lVar29 * 2 + 1];
            local_90 = (long *)*plVar24;
            if (local_90 != (long *)0x0) {
              plVar24 = local_90 + 1;
              do {
                cVar5 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                if (bVar7) {
                  *plVar24 = *plVar24 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            lVar18 = DAT_7105332f20;
            uVar3 = *(uint *)(*DAT_710532a860 + lVar29 * 4 + 0x3ccd0);
            local_a0[0] = uVar3;
            if ((uVar3 != 0xffffff) && (uVar3 < *(uint *)(DAT_7105332f20 + 0x48))) {
              std::recursive_mutex::lock();
              lVar16 = *(long *)(lVar18 + 0x40);
              if ((*(byte *)(lVar16 + (ulong)uVar3 * 0x48 + 8) & 1) == 0) {
                std::recursive_mutex::unlock();
                FUN_7103540d50(lVar18,uVar3,ppppppppplVar13,param_4,(long ****)pcVar15,param_6,
                               param_7,param_8);
              }
              else {
                FUN_71035432d0((int *)(lVar16 + (ulong)uVar3 * 0x48));
                std::recursive_mutex::unlock();
              }
            }
            local_b0 = (long ********)*puVar9;
            local_a8 = (long *)*plVar25;
            if (local_a8 != (long *)0x0) {
              plVar24 = local_a8 + 1;
              do {
                cVar5 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                if (bVar7) {
                  *plVar24 = *plVar24 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            local_c0 = (byte ***)*plVar19;
            local_b8 = (long *)*plVar20;
            if (local_b8 != (long *)0x0) {
              plVar24 = local_b8 + 1;
              do {
                cVar5 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                if (bVar7) {
                  *plVar24 = *plVar24 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            local_d0 = (long ***)*plVar21;
            local_c8 = (long *)*plVar26;
            if (local_c8 != (long *)0x0) {
              plVar24 = local_c8 + 1;
              do {
                cVar5 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                if (bVar7) {
                  *plVar24 = *plVar24 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            local_e0 = *plVar22;
            plVar24 = (long *)*puVar10;
            plStack_d8 = plVar24;
            if (plVar24 == (long *)0x0) {
              ppppppppplVar13 = &local_b0;
              param_4 = &local_c0;
              pcVar15 = (code *)&local_d0;
              param_6 = &local_e0;
              FUN_71024cc230((long *)&local_98,local_a0,ppppppppplVar13,param_4,(long ****)pcVar15,
                             param_6,param_7,param_8);
            }
            else {
              plVar23 = plVar24 + 1;
              do {
                cVar5 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                if (bVar7) {
                  *plVar23 = *plVar23 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              ppppppppplVar13 = &local_b0;
              param_4 = &local_c0;
              pcVar15 = (code *)&local_d0;
              param_6 = &local_e0;
              FUN_71024cc230((long *)&local_98,local_a0,ppppppppplVar13,param_4,(long ****)pcVar15,
                             param_6,param_7,param_8);
              do {
                lVar18 = *plVar23;
                cVar5 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                if (bVar7) {
                  *plVar23 = lVar18 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar18 == 0) {
                (**(code **)(*plVar24 + 0x10))(plVar24);
                std::__shared_weak_count::__release_weak();
              }
            }
            if (local_c8 != (long *)0x0) {
              plVar24 = local_c8 + 1;
              do {
                lVar18 = *plVar24;
                cVar5 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                if (bVar7) {
                  *plVar24 = lVar18 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar18 == 0) {
                (**(code **)(*local_c8 + 0x10))(local_c8);
                std::__shared_weak_count::__release_weak();
              }
            }
            if (local_b8 != (long *)0x0) {
              plVar24 = local_b8 + 1;
              do {
                lVar18 = *plVar24;
                cVar5 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                if (bVar7) {
                  *plVar24 = lVar18 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar18 == 0) {
                (**(code **)(*local_b8 + 0x10))(local_b8);
                std::__shared_weak_count::__release_weak();
              }
            }
            if (local_a8 != (long *)0x0) {
              plVar24 = local_a8 + 1;
              do {
                lVar18 = *plVar24;
                cVar5 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                if (bVar7) {
                  *plVar24 = lVar18 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar18 == 0) {
                (**(code **)(*local_a8 + 0x10))(local_a8);
                std::__shared_weak_count::__release_weak();
              }
            }
            lVar18 = DAT_7105332f20;
            uVar27 = (ulong)local_a0[0];
            if (local_a0[0] != 0xffffff) {
              if (local_a0[0] < *(uint *)(DAT_7105332f20 + 0x48)) {
                std::recursive_mutex::lock();
                lVar16 = *(long *)(lVar18 + 0x40);
                if ((*(byte *)(lVar16 + uVar27 * 0x48 + 8) & 1) != 0) {
                  FUN_710353f5a0(lVar18,(int *)(lVar16 + uVar27 * 0x48),(long ****)ppppppppplVar13,
                                 param_4,(long ****)pcVar15,param_6,param_7,param_8);
                }
                std::recursive_mutex::unlock();
              }
              local_a0[0] = 0xffffff;
            }
            if (local_90 != (long *)0x0) {
              plVar24 = local_90 + 1;
              do {
                lVar18 = *plVar24;
                cVar5 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                if (bVar7) {
                  *plVar24 = lVar18 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar18 == 0) {
                (**(code **)(*local_90 + 0x10))(local_90);
                std::__shared_weak_count::__release_weak();
              }
            }
            uVar27 = (**(code **)(*(long *)*puVar9 + 0x28))();
            if ((uVar27 & 1) != 0) {
              *puVar9 = 0;
              plVar24 = (long *)*plVar25;
              *plVar25 = 0;
              if (plVar24 == (long *)0x0) {
                *puVar9 = 0;
                param_1[lVar29 * 2 + 10] = 0;
              }
              else {
                plVar23 = plVar24 + 1;
                do {
                  lVar18 = *plVar23;
                  cVar5 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                  if (bVar7) {
                    *plVar23 = lVar18 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar18 == 0) {
                  (**(code **)(*plVar24 + 0x10))(plVar24);
                  std::__shared_weak_count::__release_weak();
                }
                plVar25 = (long *)*plVar25;
                *puVar9 = 0;
                param_1[lVar29 * 2 + 10] = 0;
                if (plVar25 != (long *)0x0) {
                  plVar24 = plVar25 + 1;
                  do {
                    lVar18 = *plVar24;
                    cVar5 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                    if (bVar7) {
                      *plVar24 = lVar18 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (lVar18 == 0) {
                    (**(code **)(*plVar25 + 0x10))(plVar25);
                    std::__shared_weak_count::__release_weak();
                  }
                }
              }
            }
            if (*(char *)(*plVar19 + 0xa8) == '\0') {
              *plVar19 = 0;
              plVar25 = (long *)*plVar20;
              *plVar20 = 0;
              if (plVar25 == (long *)0x0) {
                *plVar19 = 0;
                param_1[lVar29 * 2 + 0x12] = 0;
              }
              else {
                plVar24 = plVar25 + 1;
                do {
                  lVar18 = *plVar24;
                  cVar5 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                  if (bVar7) {
                    *plVar24 = lVar18 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar18 == 0) {
                  (**(code **)(*plVar25 + 0x10))(plVar25);
                  std::__shared_weak_count::__release_weak();
                }
                plVar20 = (long *)*plVar20;
                *plVar19 = 0;
                param_1[lVar29 * 2 + 0x12] = 0;
                if (plVar20 != (long *)0x0) {
                  plVar25 = plVar20 + 1;
                  do {
                    lVar18 = *plVar25;
                    cVar5 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                    if (bVar7) {
                      *plVar25 = lVar18 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (lVar18 == 0) {
                    (**(code **)(*plVar20 + 0x10))(plVar20);
                    std::__shared_weak_count::__release_weak();
                  }
                }
              }
            }
            if (*(char *)(*plVar21 + 0x88) == '\0') {
              *plVar21 = 0;
              plVar25 = (long *)*plVar26;
              *plVar26 = 0;
              if (plVar25 == (long *)0x0) {
                *plVar21 = 0;
                param_1[lVar29 * 2 + 0x1a] = 0;
              }
              else {
                plVar24 = plVar25 + 1;
                do {
                  lVar18 = *plVar24;
                  cVar5 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                  if (bVar7) {
                    *plVar24 = lVar18 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar18 == 0) {
                  (**(code **)(*plVar25 + 0x10))(plVar25);
                  std::__shared_weak_count::__release_weak();
                }
                plVar26 = (long *)*plVar26;
                *plVar21 = 0;
                param_1[lVar29 * 2 + 0x1a] = 0;
                if (plVar26 != (long *)0x0) {
                  plVar25 = plVar26 + 1;
                  do {
                    lVar18 = *plVar25;
                    cVar5 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                    if (bVar7) {
                      *plVar25 = lVar18 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (lVar18 == 0) {
                    (**(code **)(*plVar26 + 0x10))(plVar26);
                    std::__shared_weak_count::__release_weak();
                  }
                }
              }
            }
            if (*(char *)(*plVar22 + 0x88) == '\0') {
              *plVar22 = 0;
              plVar25 = (long *)*puVar10;
              *puVar10 = 0;
              if (plVar25 == (long *)0x0) {
                *plVar22 = 0;
                param_1[lVar29 * 2 + 0x22] = 0;
              }
              else {
                plVar24 = plVar25 + 1;
                do {
                  lVar18 = *plVar24;
                  cVar5 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                  if (bVar7) {
                    *plVar24 = lVar18 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar18 == 0) {
                  (**(code **)(*plVar25 + 0x10))(plVar25);
                  std::__shared_weak_count::__release_weak();
                }
                plVar25 = (long *)*puVar10;
                *plVar22 = 0;
                param_1[lVar29 * 2 + 0x22] = 0;
                if (plVar25 != (long *)0x0) {
                  plVar24 = plVar25 + 1;
                  do {
                    lVar18 = *plVar24;
                    cVar5 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                    if (bVar7) {
                      *plVar24 = lVar18 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (lVar18 == 0) {
                    (**(code **)(*plVar25 + 0x10))(plVar25);
                    std::__shared_weak_count::__release_weak();
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar29 = lVar29 + 1;
    if (lVar29 == 4) {
      return;
    }
  } while( true );
}

