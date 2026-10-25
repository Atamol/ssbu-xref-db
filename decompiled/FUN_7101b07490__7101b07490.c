// addr:      7101b07490
// offset:    0x1b07490
// name:      FUN_7101b07490
// mangled:   
// signature: undefined __cdecl FUN_7101b07490(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b07490(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long ********pppppppplVar5;
  long ********pppppppplVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  int *piVar13;
  undefined4 uVar14;
  ulong uVar15;
  long ********pppppppplVar16;
  undefined8 *puVar17;
  undefined1 auVar18 [16];
  undefined4 local_120 [2];
  undefined **local_118;
  long local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0 [2];
  undefined **local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long ********local_a0;
  long ********local_98;
  long ********pppppppplStack_90;
  undefined **local_88;
  ulong local_80;
  
  if (*(int *)(param_1 + 0x264) == 0) {
    FUN_7101b0a6a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    *(undefined4 *)(*(long *)(param_1 + 0x400) + 0x2a8) = 0xffffffff;
    param_3 = (long *********)0x1;
    FUN_7103781810(*(long *)(param_1 + 0x400),0,1);
    FUN_7103763c70(&local_a0,extraout_x1,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    *(undefined1 *)((long)local_98 + 0x4aa) = 0;
    (**(code **)(**(long **)(param_1 + 0x400) + 0x18))(*(long **)(param_1 + 0x400),&local_a0);
    pppppppplVar16 = local_98;
    local_a0 = (long ********)&PTR_FUN_710523d7d8;
    local_98 = (long ********)0x0;
    if (pppppppplVar16 != (long ********)0x0) {
      FUN_710392eb40((ulong)pppppppplVar16);
    }
    FUN_7101b0a030(param_1,1,param_3,param_4,param_5,param_6,param_7,param_8);
    lVar8 = *(long *)(param_1 + 0x400);
    local_98 = (long ********)0x0;
    pppppppplStack_90 = (long ********)0x0;
    local_a0 = (long ********)0x0;
    FUN_71019bb740((ulong *)&local_a0,*(long *)(lVar8 + 0x170) - *(long *)(lVar8 + 0x168) >> 3,
                   (long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    plVar2 = *(long **)(lVar8 + 0x170);
    pppppppplVar16 = local_98;
    for (plVar12 = *(long **)(lVar8 + 0x168); pppppppplVar5 = local_a0, pppppppplVar6 = local_a0,
        local_98 = pppppppplVar16, plVar12 != plVar2; plVar12 = plVar12 + 1) {
      if (pppppppplVar16 == pppppppplStack_90) {
        FUN_71019bb8f0((long *)&local_a0,(undefined8 *)(*plVar12 + 8),(long ****)param_3,param_4,
                       param_5,param_6,param_7,param_8);
      }
      else {
        FUN_7103776390(pppppppplVar16,(undefined8 *)(*plVar12 + 8),(long ****)param_3,param_4,
                       param_5,param_6,param_7,param_8);
        local_98 = local_98 + 2;
      }
      pppppppplVar16 = local_98;
    }
    for (; local_a0 = pppppppplVar6, pppppppplVar5 != pppppppplVar16;
        pppppppplVar5 = pppppppplVar5 + 2) {
      FUN_7103776640(&local_88,(long)pppppppplVar5,(byte ****)"set_parts_text_scroll",param_3,
                     param_4,param_5,param_6,param_7,param_8);
      if (*(long *)(local_80 + 8) != 0) {
        puVar17 = *(undefined8 **)(*(long *)(local_80 + 8) + 0x78);
        if (((DAT_710593ba40 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(&DAT_710593ba40), iVar7 != 0)) {
          if (((DAT_710593ba48 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(&DAT_710593ba48), iVar7 != 0)) {
            DAT_710593ba50 = 0;
            __cxa_guard_release(&DAT_710593ba48);
          }
          DAT_710593ba58 = &DAT_710593ba50;
          __cxa_guard_release(&DAT_710593ba40);
        }
        if (puVar17 != (undefined8 *)0x0) {
          for (puVar11 = (undefined8 *)(**(code **)*puVar17)(puVar17); puVar11 != (undefined8 *)0x0;
              puVar11 = (undefined8 *)*puVar11) {
            if ((undefined8 **)puVar11 == &DAT_710593ba58) {
              lVar8 = puVar17[3];
              *(undefined4 *)(puVar17 + 0xb) = *(undefined4 *)((long)puVar17 + 0x54);
              if (lVar8 != 0) {
                *(undefined4 *)(lVar8 + 0x30) = *(undefined4 *)((long)puVar17 + 0x54);
                *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 0x10;
              }
              lVar8 = puVar17[4];
              if (lVar8 != 0) {
                *(undefined4 *)(lVar8 + 0x30) = *(undefined4 *)(puVar17 + 0xb);
                *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 0x10;
              }
              if ((long *)puVar17[5] != (long *)0x0) {
                (**(code **)(*(long *)puVar17[5] + 0x180))(0);
              }
              plVar12 = (long *)puVar17[6];
              if (plVar12 != (long *)0x0) {
                if (*(char *)((long)puVar17 + 99) == '\0') {
                  (**(code **)(*plVar12 + 0x180))(0);
                }
                else {
                  (**(code **)(*plVar12 + 400))();
                }
              }
              *(undefined2 *)((long)puVar17 + 100) = 0;
              break;
            }
          }
        }
      }
      uVar15 = local_80;
      FUN_7103778950(*(long *)(local_80 + 8));
      local_88 = &PTR_FUN_710523d988;
      local_80 = 0;
      if (uVar15 != 0) {
        uVar9 = *(ulong *)(uVar15 + 0x18);
        *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar15 + 0x18) = 0;
        if (uVar9 != 0) {
          FUN_710392eb40(uVar9);
        }
        FUN_710392eb40(uVar15);
      }
      pppppppplVar6 = local_a0;
    }
    pppppppplVar16 = local_98;
    if (pppppppplVar6 != (long ********)0x0) {
      while (pppppppplVar16 != pppppppplVar6) {
        pppppppplVar16 = pppppppplVar16 + -2;
        (*(code *)**pppppppplVar16)(pppppppplVar16);
      }
      local_98 = pppppppplVar6;
      if (local_a0 != (long ********)0x0) {
        FUN_710392eb40((ulong)local_a0);
      }
    }
    *(undefined4 *)(param_1 + 0x504) = 300;
    *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(*(long *)(param_1 + 0x400) + 0x260);
    (**(code **)(**(long **)(param_1 + 0x3f0) + 0x70))(*(long **)(param_1 + 0x3f0),1);
    (**(code **)(**(long **)(param_1 + 0x3f8) + 0x70))(*(long **)(param_1 + 0x3f8),1);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x3d8),0x71044124df);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x3d8),0x71042805dd);
    if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10)) goto LAB_7101b080b0;
    FUN_71037760f0(*(long *)**(undefined8 **)**(undefined8 **)(param_1 + 0x10),1);
    *(undefined1 *)(*(long *)(param_1 + 0x518) + 0x4aa) = 0;
    lVar8 = *(long *)(*(long *)(param_1 + 0x3d8) + 8);
    if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x18), lVar8 != 0)) {
      *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 1;
    }
    goto LAB_7101b07b74;
  }
  if ((*(int *)(*(long *)(param_1 + 0x3f0) + 0x25c) == -1) &&
     (*(char *)(*(long *)(param_1 + 0x3f0) + 0x280) == '\0')) {
    iVar7 = *(int *)(*(long *)(param_1 + 0x3f8) + 0x25c);
    if (iVar7 == 1) {
      if (DAT_71052c35b8 == (long *)0x0) {
        plVar12 = (long *)FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,
                                         param_8);
        uVar10 = extraout_x1_00;
        if (plVar12 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_88 = (undefined **)((ulong)local_88 & 0xffffffff00000000);
            local_a0 = (long ********)&DAT_00000008;
            param_3 = &local_a0;
            auVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
            uVar10 = auVar18._8_8_;
            if (((auVar18._0_8_ & 1) != 0) &&
               (plVar12 = (long *)FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,
                                                 param_7,param_8), uVar10 = extraout_x1_01,
               plVar12 != (long *)0x0)) goto LAB_7101b077c4;
          }
          plVar12 = (long *)0x0;
        }
LAB_7101b077c4:
        FUN_710143e850(plVar12,uVar10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
        DAT_71052c35b8 = plVar12;
      }
      lVar8 = *DAT_71052c35b8;
      *(undefined8 *)(lVar8 + 400) = 0;
      uVar10 = (**(code **)(*(long *)(DAT_71052c50f0 + 0x588) + 0x18))(DAT_71052c50f0 + 0x588);
      *(undefined8 *)(lVar8 + 0x198) = uVar10;
      if (0x12 < *(uint *)(lVar8 + 0xf4)) goto LAB_7101b080b4;
      *(undefined4 *)(lVar8 + (long)(int)*(uint *)(lVar8 + 0xf4) * 4 + 0xa8) = 1;
      *(undefined4 *)(lVar8 + 0x108) = 0;
      if (0x12 < *(uint *)(param_1 + 0x25c)) goto LAB_7101b080b4;
      lVar8 = param_1 + (long)(int)*(uint *)(param_1 + 0x25c) * 4;
      uVar14 = 0x18;
    }
    else {
      if (iVar7 != 0) goto LAB_7101b07b74;
      lVar8 = *(long *)(DAT_710532f8d0 + 8);
      if ((ulong)(*(long *)(lVar8 + 0x48) - *(long *)(lVar8 + 0x40) >> 3) < 3) {
        uVar15 = 0;
        if (*(char *)(lVar8 + 0x191) == '\0') goto LAB_7101b07834;
LAB_7101b078a4:
        local_108 = 0x87650000000000;
        local_f8 = 0xffffffffffffffff;
        uStack_f0 = 0;
        local_120[0] = 0;
        local_e8 = 0;
      }
      else {
        uVar15 = *(ulong *)(*(long *)(lVar8 + 0x40) + 0x10);
        if (*(char *)(lVar8 + 0x191) != '\0') goto LAB_7101b078a4;
LAB_7101b07834:
        param_3 = (long *********)&DAT_00000004;
        uVar9 = FUN_7103313f20(lVar8,uVar15,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7
                               ,param_8);
        if ((uVar9 & 1) == 0) goto LAB_7101b078a4;
        FUN_71024076d0(local_120,uVar15);
        if (((local_110 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_108 == DAT_7106dd53ac))
        {
          piVar13 = (int *)(local_110 + 0x38);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar4) {
              *piVar13 = *piVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
      local_118 = &PTR_FUN_7104f73d50;
      local_110 = 0;
      local_100 = 0;
      if ((DAT_710532f858 == 0) || (0x11 < *(int *)(param_1 + 0x25c))) goto LAB_7101b07b74;
      uVar1 = *(int *)(param_1 + 0x25c) + 1;
      *(uint *)(param_1 + 0x25c) = uVar1;
      if (0x12 < uVar1) goto LAB_7101b080b4;
      lVar8 = param_1 + (long)(int)uVar1 * 4;
      uVar14 = 0x14;
    }
  }
  else {
    lVar8 = *(long *)(DAT_710532f8d0 + 8);
    if ((ulong)(*(long *)(lVar8 + 0x48) - *(long *)(lVar8 + 0x40) >> 3) < 3) {
      uVar15 = 0;
      if (*(char *)(lVar8 + 0x191) == '\0') goto LAB_7101b0762c;
LAB_7101b0769c:
      local_c8 = 0x87650000000000;
      local_b8 = 0xffffffffffffffff;
      uStack_b0 = 0;
      local_e0[0] = 0;
      local_a8 = 0;
    }
    else {
      uVar15 = *(ulong *)(*(long *)(lVar8 + 0x40) + 0x10);
      if (*(char *)(lVar8 + 0x191) != '\0') goto LAB_7101b0769c;
LAB_7101b0762c:
      param_3 = (long *********)&DAT_00000004;
      uVar9 = FUN_7103313f20(lVar8,uVar15,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                             param_8);
      if ((uVar9 & 1) == 0) goto LAB_7101b0769c;
      FUN_71024076d0(local_e0,uVar15);
      if (((local_d0 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_c8 == DAT_7106dd53ac)) {
        piVar13 = (int *)(local_d0 + 0x38);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar4) {
            *piVar13 = *piVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    local_d8 = &PTR_FUN_7104f73d50;
    local_d0 = 0;
    local_c0 = 0;
    if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10)) {
LAB_7101b080b0:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    FUN_71037760f0(*(long *)**(undefined8 **)**(undefined8 **)(param_1 + 0x10),0);
    if (0x12 < *(uint *)(param_1 + 0x25c)) {
LAB_7101b080b4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar8 = param_1 + (long)(int)*(uint *)(param_1 + 0x25c) * 4;
    uVar14 = 0x17;
  }
  *(undefined4 *)(lVar8 + 0x210) = uVar14;
LAB_7101b07b74:
  lVar8 = *(long *)(param_1 + 0x400);
  if (*(float *)(param_1 + 0x508) == *(float *)(lVar8 + 0x260)) {
    iVar7 = *(int *)(param_1 + 0x504) + -1;
    if ((0 < *(int *)(param_1 + 0x504)) && (*(int *)(param_1 + 0x504) = iVar7, iVar7 == 0)) {
      local_98 = (long ********)0x0;
      pppppppplStack_90 = (long ********)0x0;
      local_a0 = (long ********)0x0;
      FUN_71019bb740((ulong *)&local_a0,*(long *)(lVar8 + 0x170) - *(long *)(lVar8 + 0x168) >> 3,
                     (long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      plVar2 = *(long **)(lVar8 + 0x170);
      pppppppplVar16 = local_98;
      for (plVar12 = *(long **)(lVar8 + 0x168); pppppppplVar5 = local_a0, pppppppplVar6 = local_a0,
          local_98 = pppppppplVar16, plVar12 != plVar2; plVar12 = plVar12 + 1) {
        if (pppppppplVar16 == pppppppplStack_90) {
          FUN_71019bb8f0((long *)&local_a0,(undefined8 *)(*plVar12 + 8),(long ****)param_3,param_4,
                         param_5,param_6,param_7,param_8);
        }
        else {
          FUN_7103776390(pppppppplVar16,(undefined8 *)(*plVar12 + 8),(long ****)param_3,param_4,
                         param_5,param_6,param_7,param_8);
          local_98 = local_98 + 2;
        }
        pppppppplVar16 = local_98;
      }
      for (; local_a0 = pppppppplVar6, pppppppplVar5 != pppppppplVar16;
          pppppppplVar5 = pppppppplVar5 + 2) {
        FUN_7103776640(&local_88,(long)pppppppplVar5,(byte ****)"set_parts_text_scroll",param_3,
                       param_4,param_5,param_6,param_7,param_8);
        uVar15 = local_80;
        if (*(long *)(local_80 + 8) != 0) {
          puVar17 = *(undefined8 **)(*(long *)(local_80 + 8) + 0x78);
          if (((DAT_710593ba40 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(&DAT_710593ba40), iVar7 != 0)) {
            if (((DAT_710593ba48 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&DAT_710593ba48), iVar7 != 0)) {
              DAT_710593ba50 = 0;
              __cxa_guard_release(&DAT_710593ba48);
            }
            DAT_710593ba58 = &DAT_710593ba50;
            __cxa_guard_release(&DAT_710593ba40);
          }
          uVar15 = local_80;
          if (puVar17 != (undefined8 *)0x0) {
            for (puVar11 = (undefined8 *)(**(code **)*puVar17)(puVar17); uVar15 = local_80,
                puVar11 != (undefined8 *)0x0; puVar11 = (undefined8 *)*puVar11) {
              if ((undefined8 **)puVar11 == &DAT_710593ba58) {
                lVar8 = puVar17[3];
                *(undefined4 *)(puVar17 + 0xb) = *(undefined4 *)((long)puVar17 + 0x54);
                if (lVar8 != 0) {
                  *(undefined4 *)(lVar8 + 0x30) = *(undefined4 *)((long)puVar17 + 0x54);
                  *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 0x10;
                }
                lVar8 = puVar17[4];
                if (lVar8 != 0) {
                  *(undefined4 *)(lVar8 + 0x30) = *(undefined4 *)(puVar17 + 0xb);
                  *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 0x10;
                }
                if ((long *)puVar17[5] != (long *)0x0) {
                  (**(code **)(*(long *)puVar17[5] + 0x180))(0);
                }
                plVar12 = (long *)puVar17[6];
                if (plVar12 != (long *)0x0) {
                  if (*(char *)((long)puVar17 + 99) == '\0') {
                    (**(code **)(*plVar12 + 0x180))(0);
                  }
                  else {
                    (**(code **)(*plVar12 + 400))();
                  }
                }
                *(undefined2 *)((long)puVar17 + 100) = 1;
                uVar15 = local_80;
                break;
              }
            }
          }
        }
        local_88 = &PTR_FUN_710523d988;
        local_80 = 0;
        if (uVar15 != 0) {
          uVar9 = *(ulong *)(uVar15 + 0x18);
          *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar15 + 0x18) = 0;
          if (uVar9 != 0) {
            FUN_710392eb40(uVar9);
          }
          FUN_710392eb40(uVar15);
        }
        pppppppplVar6 = local_a0;
      }
      pppppppplVar16 = local_98;
      if (pppppppplVar6 != (long ********)0x0) {
        while (pppppppplVar16 != pppppppplVar6) {
          pppppppplVar16 = pppppppplVar16 + -2;
          (*(code *)**pppppppplVar16)(pppppppplVar16);
        }
        if (local_a0 != (long ********)0x0) {
          local_98 = pppppppplVar6;
          FUN_710392eb40((ulong)local_a0);
        }
      }
    }
  }
  else {
    *(float *)(param_1 + 0x508) = *(float *)(lVar8 + 0x260);
    if (*(int *)(param_1 + 0x504) < 1) {
      local_98 = (long ********)0x0;
      pppppppplStack_90 = (long ********)0x0;
      local_a0 = (long ********)0x0;
      FUN_71019bb740((ulong *)&local_a0,*(long *)(lVar8 + 0x170) - *(long *)(lVar8 + 0x168) >> 3,
                     (long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      plVar2 = *(long **)(lVar8 + 0x170);
      pppppppplVar16 = local_98;
      for (plVar12 = *(long **)(lVar8 + 0x168); pppppppplVar5 = local_a0, pppppppplVar6 = local_a0,
          local_98 = pppppppplVar16, plVar12 != plVar2; plVar12 = plVar12 + 1) {
        if (pppppppplVar16 == pppppppplStack_90) {
          FUN_71019bb8f0((long *)&local_a0,(undefined8 *)(*plVar12 + 8),(long ****)param_3,param_4,
                         param_5,param_6,param_7,param_8);
        }
        else {
          FUN_7103776390(pppppppplVar16,(undefined8 *)(*plVar12 + 8),(long ****)param_3,param_4,
                         param_5,param_6,param_7,param_8);
          local_98 = local_98 + 2;
        }
        pppppppplVar16 = local_98;
      }
      for (; local_a0 = pppppppplVar6, pppppppplVar5 != pppppppplVar16;
          pppppppplVar5 = pppppppplVar5 + 2) {
        FUN_7103776640(&local_88,(long)pppppppplVar5,(byte ****)"set_parts_text_scroll",param_3,
                       param_4,param_5,param_6,param_7,param_8);
        if (*(long *)(local_80 + 8) != 0) {
          puVar17 = *(undefined8 **)(*(long *)(local_80 + 8) + 0x78);
          if (((DAT_710593ba40 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(&DAT_710593ba40), iVar7 != 0)) {
            if (((DAT_710593ba48 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&DAT_710593ba48), iVar7 != 0)) {
              DAT_710593ba50 = 0;
              __cxa_guard_release(&DAT_710593ba48);
            }
            DAT_710593ba58 = &DAT_710593ba50;
            __cxa_guard_release(&DAT_710593ba40);
          }
          if (puVar17 != (undefined8 *)0x0) {
            for (puVar11 = (undefined8 *)(**(code **)*puVar17)(puVar17);
                puVar11 != (undefined8 *)0x0; puVar11 = (undefined8 *)*puVar11) {
              if ((undefined8 **)puVar11 == &DAT_710593ba58) {
                lVar8 = puVar17[3];
                *(undefined4 *)(puVar17 + 0xb) = *(undefined4 *)((long)puVar17 + 0x54);
                if (lVar8 != 0) {
                  *(undefined4 *)(lVar8 + 0x30) = *(undefined4 *)((long)puVar17 + 0x54);
                  *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 0x10;
                }
                lVar8 = puVar17[4];
                if (lVar8 != 0) {
                  *(undefined4 *)(lVar8 + 0x30) = *(undefined4 *)(puVar17 + 0xb);
                  *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 0x10;
                }
                if ((long *)puVar17[5] != (long *)0x0) {
                  (**(code **)(*(long *)puVar17[5] + 0x180))(0);
                }
                plVar12 = (long *)puVar17[6];
                if (plVar12 != (long *)0x0) {
                  if (*(char *)((long)puVar17 + 99) == '\0') {
                    (**(code **)(*plVar12 + 0x180))(0);
                  }
                  else {
                    (**(code **)(*plVar12 + 400))();
                  }
                }
                *(undefined2 *)((long)puVar17 + 100) = 0;
                break;
              }
            }
          }
        }
        uVar15 = local_80;
        FUN_7103778950(*(long *)(local_80 + 8));
        local_88 = &PTR_FUN_710523d988;
        local_80 = 0;
        if (uVar15 != 0) {
          uVar9 = *(ulong *)(uVar15 + 0x18);
          *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar15 + 0x18) = 0;
          if (uVar9 != 0) {
            FUN_710392eb40(uVar9);
          }
          FUN_710392eb40(uVar15);
        }
        pppppppplVar6 = local_a0;
      }
      pppppppplVar16 = local_98;
      if (pppppppplVar6 != (long ********)0x0) {
        while (pppppppplVar16 != pppppppplVar6) {
          pppppppplVar16 = pppppppplVar16 + -2;
          (*(code *)**pppppppplVar16)(pppppppplVar16);
        }
        if (local_a0 != (long ********)0x0) {
          local_98 = pppppppplVar6;
          FUN_710392eb40((ulong)local_a0);
        }
      }
      *(undefined4 *)(param_1 + 0x504) = 300;
    }
  }
  return;
}

