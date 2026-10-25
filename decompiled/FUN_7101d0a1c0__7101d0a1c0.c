// addr:      7101d0a1c0
// offset:    0x1d0a1c0
// name:      FUN_7101d0a1c0
// mangled:   
// signature: undefined __cdecl FUN_7101d0a1c0(long param_1, ulong param_2, ulong param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d0a1c0(long param_1,ulong param_2,ulong param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  long *plVar9;
  long *******ppppppplVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  long ******pppppplVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long *******ppppppplVar22;
  long *unaff_x21;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long lVar26;
  long ****pppplVar27;
  ulong uVar28;
  long *plVar29;
  ulong uVar30;
  long ******local_b8;
  long ******local_b0;
  long local_a8;
  long local_a0;
  long *local_98;
  long local_90;
  long local_88;
  long local_80;
  
  uVar21 = param_3 & 0xffffffff;
  FUN_7101d0ae40(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar14 = *(long *)(DAT_7105329740 + 8) + (param_2 & 0xffffffff) * 0x18;
  lVar17 = *(long *)(lVar14 + 8);
  if (uVar21 < (ulong)(*(long *)(lVar14 + 0x10) - lVar17 >> 4)) {
    plVar2 = (long *)(lVar17 + uVar21 * 0x10);
    lVar14 = *plVar2;
    plVar2 = (long *)plVar2[1];
    if (plVar2 != (long *)0x0) {
      plVar24 = plVar2 + 1;
      do {
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar11) {
          *plVar24 = *plVar24 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    bVar11 = *(int *)(lVar14 + 4) != 0;
    lVar17 = 0x38;
    if (bVar11) {
      lVar17 = 0x10;
    }
    lVar19 = 0x40;
    if (bVar11) {
      lVar19 = 0x18;
    }
    lVar4 = 2;
    if (bVar11) {
      lVar4 = 4;
    }
    uVar16 = (uint)param_2;
    if ((int)(*(long *)(lVar14 + lVar19) - *(long *)(lVar14 + lVar17) >> lVar4) != 0) {
      lVar17 = param_1 + 0xc0;
      unaff_x21 = (long *)(param_1 + 0xd8);
      lVar19 = param_1 + 0xf0;
      lVar4 = param_1 + 0x108;
      lVar1 = param_1 + 0x120;
      uVar30 = (ulong)(int)param_3;
      if (uVar16 < 5) {
        uVar28 = 0;
        do {
          local_a0 = lVar17;
          local_98 = unaff_x21;
          local_90 = lVar19;
          local_88 = lVar4;
          local_80 = lVar1;
          lVar26 = *(long *)(&local_a0)[(int)uVar16];
          uVar18 = (((long *)(&local_a0)[(int)uVar16])[1] - lVar26 >> 5) * 0x4ec4ec4ec4ec4ec5;
          if (uVar18 < uVar30 || uVar18 - uVar30 == 0) goto LAB_7101d0adfc;
          lVar26 = lVar26 + uVar30 * 0x1a0;
          FUN_7103778430(*(long *)(lVar26 + 0x100) + 8,"replay_icon_anim_%d",uVar28 & 0xffffffff,
                         param_4,param_5,param_6,param_7,param_8);
          if (3 < uVar28) goto LAB_7101d0ae08;
          lVar26 = *(long *)(lVar26 + 0x100);
          *(undefined1 *)(lVar26 + uVar28 + 0x4c) = 1;
          FUN_7103778430(lVar26 + 8,"icon_reset_%d",uVar28 & 0xffffffff,param_4,param_5,param_6,
                         param_7,param_8);
          bVar11 = *(int *)(lVar14 + 4) != 0;
          lVar26 = 0x38;
          if (bVar11) {
            lVar26 = 0x10;
          }
          lVar20 = 0x40;
          if (bVar11) {
            lVar20 = 0x18;
          }
          lVar5 = 2;
          if (bVar11) {
            lVar5 = 4;
          }
          uVar28 = uVar28 + 1;
        } while (uVar28 < (*(long *)(lVar14 + lVar20) - *(long *)(lVar14 + lVar26) >> lVar5 &
                          0xffffffffU));
      }
      else {
        uVar28 = 0;
        do {
          local_a0 = lVar17;
          local_98 = unaff_x21;
          local_90 = lVar19;
          local_88 = lVar4;
          local_80 = lVar1;
          if (((DAT_7105325d40 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(&DAT_7105325d40), iVar13 != 0)) {
            DAT_7105325d28 = 0;
            DAT_7105325d30 = 0;
            DAT_7105325d38 = 0;
            FUN_71000001c0();
            __cxa_guard_release(&DAT_7105325d40);
          }
          uVar18 = (DAT_7105325d30 - DAT_7105325d28 >> 5) * 0x4ec4ec4ec4ec4ec5;
          if (uVar18 < uVar30 || uVar18 - uVar30 == 0) goto LAB_7101d0adfc;
          lVar26 = DAT_7105325d28 + uVar30 * 0x1a0;
          FUN_7103778430(*(long *)(lVar26 + 0x100) + 8,"replay_icon_anim_%d",uVar28 & 0xffffffff,
                         param_4,param_5,param_6,param_7,param_8);
          if (3 < uVar28) goto LAB_7101d0ae08;
          lVar26 = *(long *)(lVar26 + 0x100);
          *(undefined1 *)(lVar26 + uVar28 + 0x4c) = 1;
          FUN_7103778430(lVar26 + 8,"icon_reset_%d",uVar28 & 0xffffffff,param_4,param_5,param_6,
                         param_7,param_8);
          bVar11 = *(int *)(lVar14 + 4) != 0;
          lVar26 = 0x38;
          if (bVar11) {
            lVar26 = 0x10;
          }
          lVar20 = 0x40;
          if (bVar11) {
            lVar20 = 0x18;
          }
          lVar5 = 2;
          if (bVar11) {
            lVar5 = 4;
          }
          uVar28 = uVar28 + 1;
        } while (uVar28 < (*(long *)(lVar14 + lVar20) - *(long *)(lVar14 + lVar26) >> lVar5 &
                          0xffffffffU));
      }
    }
    iVar13 = *(int *)(lVar14 + 0x50);
    uVar12 = FUN_710239d150(*(long *)(DAT_7105329740 + 8),iVar13);
    lVar17 = *(long *)(DAT_7105329740 + 8);
    uVar8 = *(int *)(lVar17 + 4) - 1;
    if ((int)uVar12 <= (int)uVar8) {
      uVar8 = uVar12;
    }
    uVar3 = 0;
    if (-1 < (int)uVar12) {
      uVar3 = uVar8;
    }
    if (4 < uVar3) {
LAB_7101d0ae08:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar19 = lVar17 + (long)(int)uVar3 * 0x18;
    plVar24 = *(long **)(lVar19 + 8);
    plVar29 = *(long **)(lVar19 + 0x10);
    if (plVar24 == plVar29) {
      unaff_x21 = (long *)&DAT_ffffffff;
    }
    else {
      do {
        lVar17 = *plVar24;
        plVar23 = (long *)plVar24[1];
        if (plVar23 != (long *)0x0) {
          plVar25 = plVar23 + 1;
          do {
            cVar7 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
            if (bVar11) {
              *plVar25 = *plVar25 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        uVar30 = FUN_71023976c0(lVar17,iVar13);
        bVar11 = (int)uVar30 != -1;
        if (bVar11) {
          unaff_x21 = (long *)(ulong)*(uint *)(lVar17 + 8);
        }
        if (plVar23 != (long *)0x0) {
          plVar25 = plVar23 + 1;
          do {
            lVar17 = *plVar25;
            cVar7 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
            if (bVar6) {
              *plVar25 = lVar17 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*plVar23 + 0x10))(plVar23);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (bVar11) goto LAB_7101d0a5ac;
        plVar24 = plVar24 + 2;
      } while (plVar24 != plVar29);
      unaff_x21 = (long *)&DAT_ffffffff;
LAB_7101d0a5ac:
      lVar17 = *(long *)(DAT_7105329740 + 8);
    }
    lVar17 = lVar17 + (ulong)uVar3 * 0x18;
    lVar19 = *(long *)(lVar17 + 8);
    if (((ulong)unaff_x21 & 0xffffffff) < (ulong)(*(long *)(lVar17 + 0x10) - lVar19 >> 4)) {
      plVar24 = (long *)(lVar19 + ((ulong)unaff_x21 & 0xffffffff) * 0x10);
      lVar17 = *plVar24;
      plVar24 = (long *)plVar24[1];
      if (plVar24 == (long *)0x0) {
        uVar30 = FUN_71023976c0(lVar17,iVar13);
        pppplVar27 = (long ****)(uVar30 & 0xffffffff);
      }
      else {
        plVar29 = plVar24 + 1;
        do {
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar11) {
            *plVar29 = *plVar29 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        uVar30 = FUN_71023976c0(lVar17,iVar13);
        pppplVar27 = (long ****)(uVar30 & 0xffffffff);
        plVar29 = plVar24 + 1;
        do {
          lVar17 = *plVar29;
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar11) {
            *plVar29 = lVar17 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          std::__shared_weak_count::__release_weak();
        }
      }
      lVar17 = param_1 + 0xc0;
      local_a0 = lVar17;
      plVar24 = (long *)(param_1 + 0xd8);
      lVar19 = param_1 + 0xf0;
      local_98 = plVar24;
      local_90 = lVar19;
      lVar4 = param_1 + 0x108;
      lVar1 = param_1 + 0x120;
      local_88 = lVar4;
      local_80 = lVar1;
      if (uVar3 < 5) {
        plVar29 = (long *)(&local_a0)[(int)uVar3];
      }
      else if ((DAT_7105325d40 & 1) == 0) {
        iVar13 = __cxa_guard_acquire(&DAT_7105325d40);
        plVar29 = &DAT_7105325d28;
        if (iVar13 != 0) {
          DAT_7105325d28 = 0;
          DAT_7105325d30 = 0;
          DAT_7105325d38 = 0;
          FUN_71000001c0();
          __cxa_guard_release(&DAT_7105325d40);
        }
      }
      else {
        plVar29 = &DAT_7105325d28;
      }
      uVar28 = (plVar29[1] - *plVar29 >> 5) * 0x4ec4ec4ec4ec4ec5;
      uVar30 = (ulong)(int)unaff_x21;
      if (uVar28 < uVar30 || uVar28 - uVar30 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      lVar26 = *plVar29 + uVar30 * 0x1a0;
      FUN_7103778430(*(long *)(lVar26 + 0x100) + 8,"replay_icon_anim_%d",pppplVar27,param_4,param_5,
                     param_6,param_7,param_8);
      if (3 < (uint)pppplVar27) goto LAB_7101d0ae08;
      lVar26 = *(long *)(lVar26 + 0x100);
      *(undefined1 *)(lVar26 + (int)(uint)pppplVar27 + 0x4c) = 1;
      FUN_7103778430(lVar26 + 8,"icon_reset_%d",pppplVar27,param_4,param_5,param_6,param_7,param_8);
      iVar13 = *(int *)(lVar14 + 4);
      bVar11 = iVar13 != 0;
      lVar26 = 0x38;
      if (bVar11) {
        lVar26 = 0x10;
      }
      lVar20 = 0x40;
      if (bVar11) {
        lVar20 = 0x18;
      }
      lVar5 = 2;
      if (bVar11) {
        lVar5 = 4;
      }
      if ((int)(*(long *)(lVar14 + lVar20) - *(long *)(lVar14 + lVar26) >> lVar5) != 0) {
        uVar30 = 0;
        do {
          if (iVar13 == 0) {
            if ((ulong)(*(long *)(lVar14 + 0x40) - *(long *)(lVar14 + 0x38) >> 2) <= uVar30) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            iVar13 = *(int *)(*(long *)(lVar14 + 0x38) + uVar30 * 4);
          }
          else {
            if ((ulong)(*(long *)(lVar14 + 0x18) - *(long *)(lVar14 + 0x10) >> 4) <= uVar30) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            plVar29 = (long *)(*(long *)(lVar14 + 0x10) + uVar30 * 0x10);
            lVar26 = *plVar29;
            plVar29 = (long *)plVar29[1];
            if (plVar29 == (long *)0x0) {
              iVar13 = *(int *)(lVar26 + 0x50);
            }
            else {
              plVar23 = plVar29 + 1;
              do {
                cVar7 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                if (bVar11) {
                  *plVar23 = *plVar23 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              iVar13 = *(int *)(lVar26 + 0x50);
              do {
                lVar26 = *plVar23;
                cVar7 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                if (bVar11) {
                  *plVar23 = lVar26 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (lVar26 == 0) {
                (**(code **)(*plVar29 + 0x10))(plVar29);
                std::__shared_weak_count::__release_weak();
              }
            }
          }
          uVar18 = (*(long *)(param_1 + 0xb0) - *(long *)(param_1 + 0xa8) >> 4) *
                   -0x5555555555555555;
          uVar28 = (ulong)iVar13;
          if (uVar18 < uVar28 || uVar18 - uVar28 == 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 0xa8) + uVar28 * 0x30 + 8),
                         0x710439d642);
          iVar13 = *(int *)(lVar14 + 4);
          bVar11 = iVar13 != 0;
          lVar26 = 0x38;
          if (bVar11) {
            lVar26 = 0x10;
          }
          lVar20 = 0x40;
          if (bVar11) {
            lVar20 = 0x18;
          }
          lVar5 = 2;
          if (bVar11) {
            lVar5 = 4;
          }
          uVar30 = uVar30 + 1;
        } while (uVar30 < (*(long *)(lVar14 + lVar20) - *(long *)(lVar14 + lVar26) >> lVar5 &
                          0xffffffffU));
      }
      local_b8 = (long ******)&local_b8;
      local_b0 = (long ******)&local_b8;
      local_a8 = 0;
      lVar14 = *(long *)(DAT_7105329740 + 8) + (param_2 & 0xffffffff) * 0x18;
      lVar26 = *(long *)(lVar14 + 8);
      if (uVar21 < (ulong)(*(long *)(lVar14 + 0x10) - lVar26 >> 4)) {
        plVar29 = (long *)(lVar26 + uVar21 * 0x10);
        lVar14 = *plVar29;
        plVar29 = (long *)plVar29[1];
        if (plVar29 != (long *)0x0) {
          plVar23 = plVar29 + 1;
          do {
            cVar7 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar11) {
              *plVar23 = *plVar23 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        lVar26 = *(long *)(lVar14 + 0x10);
        lVar20 = *(long *)(lVar14 + 0x18);
        if ((int)((ulong)(lVar20 - lVar26) >> 4) != 0) {
          uVar21 = 0;
          do {
            if ((ulong)(lVar20 - lVar26 >> 4) <= uVar21) {
LAB_7101d0adfc:
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            plVar23 = (long *)(lVar26 + uVar21 * 0x10);
            lVar26 = *plVar23;
            plVar23 = (long *)plVar23[1];
            if (plVar23 != (long *)0x0) {
              plVar25 = plVar23 + 1;
              do {
                cVar7 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar11) {
                  *plVar25 = *plVar25 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
            FUN_7102397840(&local_a0,lVar26,pppplVar27,param_4,param_5,param_6,param_7,param_8);
            FUN_7101d09580((long *)&local_b8,&local_a0);
            if (local_90 != 0) {
              *(undefined8 *)(*local_98 + 8) = *(undefined8 *)(local_a0 + 8);
              **(long **)(local_a0 + 8) = *local_98;
              local_90 = 0;
              plVar25 = local_98;
              while (plVar9 = plVar25, plVar9 != &local_a0) {
                plVar25 = (long *)plVar9[1];
                if (plVar9 != (long *)0x0) {
                  FUN_710392eb40((ulong)plVar9);
                }
              }
            }
            if (plVar23 != (long *)0x0) {
              plVar25 = plVar23 + 1;
              do {
                lVar26 = *plVar25;
                cVar7 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar11) {
                  *plVar25 = lVar26 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (lVar26 == 0) {
                (**(code **)(*plVar23 + 0x10))(plVar23);
                std::__shared_weak_count::__release_weak();
              }
            }
            lVar26 = *(long *)(lVar14 + 0x10);
            lVar20 = *(long *)(lVar14 + 0x18);
            uVar21 = uVar21 + 1;
          } while (uVar21 < ((ulong)(lVar20 - lVar26) >> 4 & 0xffffffff));
        }
        local_a0 = lVar17;
        local_98 = plVar24;
        local_90 = lVar19;
        local_88 = lVar4;
        local_80 = lVar1;
        if (uVar16 < 5) {
          plVar23 = (long *)(&local_a0)[(int)uVar16];
        }
        else if ((DAT_7105325d40 & 1) == 0) {
          iVar13 = __cxa_guard_acquire(&DAT_7105325d40);
          plVar23 = &DAT_7105325d28;
          if (iVar13 != 0) {
            DAT_7105325d28 = 0;
            DAT_7105325d30 = 0;
            DAT_7105325d38 = 0;
            FUN_71000001c0();
            __cxa_guard_release(&DAT_7105325d40);
          }
        }
        else {
          plVar23 = &DAT_7105325d28;
        }
        uVar21 = (ulong)(int)param_3;
        uVar30 = (plVar23[1] - *plVar23 >> 5) * 0x4ec4ec4ec4ec4ec5;
        if (uVar30 < uVar21 || uVar30 - uVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        lVar14 = *plVar23 + uVar21 * 0x1a0;
        FUN_7103778300(0x3f800000,*(long *)(*(long *)(lVar14 + 0xf8) + 0x10),0x710437c785);
        FUN_7103778300(0x3f800000,*(long *)(*(long *)(lVar14 + 0x100) + 0x10),0x710437c785);
        FUN_7103778300(0x3f800000,*(long *)(*(long *)(lVar14 + 0xf8) + 0x10),0x7104433394);
        FUN_7103778300(0x3f800000,*(long *)(*(long *)(lVar14 + 0x100) + 0x10),0x7104433394);
        if (&local_b8 != (long *******)local_b0) {
          ppppppplVar22 = (long *******)local_b0;
          do {
            pppppplVar15 = ppppppplVar22[2];
            uVar16 = *(uint *)((long)pppppplVar15 + 4);
            uVar21 = (ulong)*(int *)(pppppplVar15 + 1);
            uVar30 = FUN_71023976c0((long)pppppplVar15,*(int *)(pppppplVar15 + 10));
            local_a0 = lVar17;
            local_98 = plVar24;
            local_90 = lVar19;
            local_88 = lVar4;
            local_80 = lVar1;
            if (uVar16 < 5) {
              plVar23 = (long *)(&local_a0)[(int)uVar16];
            }
            else {
              plVar23 = &DAT_7105325d28;
              if (((DAT_7105325d40 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(&DAT_7105325d40), iVar13 != 0)) {
                DAT_7105325d28 = 0;
                DAT_7105325d30 = 0;
                DAT_7105325d38 = 0;
                FUN_71000001c0();
                __cxa_guard_release(&DAT_7105325d40);
              }
            }
            uVar28 = (plVar23[1] - *plVar23 >> 5) * 0x4ec4ec4ec4ec4ec5;
            if (uVar28 < uVar21 || uVar28 - uVar21 == 0) goto LAB_7101d0ae04;
            lVar14 = *plVar23 + uVar21 * 0x1a0;
            FUN_7103778300(0x3f800000,*(long *)(*(long *)(lVar14 + 0xf8) + 0x10),0x710437c785);
            FUN_7103778300(0x3f800000,*(long *)(*(long *)(lVar14 + 0x100) + 0x10),0x710437c785);
            if ((int)uVar30 < 0) {
              FUN_7103778300(0x3f800000,*(long *)(*(long *)(lVar14 + 0xf8) + 0x10),0x7104433394);
              FUN_7103778300(0x3f800000,*(long *)(*(long *)(lVar14 + 0x100) + 0x10),0x7104433394);
            }
            else {
              FUN_7103778430(*(long *)(lVar14 + 0xf8) + 8,"replay_winner_%d",uVar30 & 0xffffffff,
                             param_4,param_5,param_6,param_7,param_8);
              FUN_7103778430(*(long *)(lVar14 + 0x100) + 8,"replay_winner_%d",uVar30 & 0xffffffff,
                             param_4,param_5,param_6,param_7,param_8);
            }
            ppppppplVar22 = (long *******)ppppppplVar22[1];
          } while (&local_b8 != ppppppplVar22);
        }
        if (plVar29 != (long *)0x0) {
          plVar24 = plVar29 + 1;
          do {
            lVar14 = *plVar24;
            cVar7 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar11) {
              *plVar24 = lVar14 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar29 + 0x10))(plVar29);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_a8 != 0) {
          (*local_b0)[1] = (long ****)local_b8[1];
          *local_b8[1] = (long ****)*local_b0;
          local_a8 = 0;
          ppppppplVar22 = (long *******)local_b0;
          while (ppppppplVar10 = ppppppplVar22, ppppppplVar10 != &local_b8) {
            ppppppplVar22 = (long *******)ppppppplVar10[1];
            if (ppppppplVar10 != (long *******)0x0) {
              FUN_710392eb40((ulong)ppppppplVar10);
            }
          }
        }
        if (plVar2 != (long *)0x0) {
          plVar24 = plVar2 + 1;
          do {
            lVar14 = *plVar24;
            cVar7 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar11) {
              *plVar24 = lVar14 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
            std::__shared_weak_count::__release_weak();
          }
        }
        return;
      }
    }
  }
LAB_7101d0ae04:
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}

