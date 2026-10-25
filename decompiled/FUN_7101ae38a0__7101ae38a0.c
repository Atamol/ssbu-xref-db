// addr:      7101ae38a0
// offset:    0x1ae38a0
// name:      FUN_7101ae38a0
// mangled:   
// signature: undefined __cdecl FUN_7101ae38a0(long param_1, uint param_2, long param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ae38a0(long param_1,uint param_2,long param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 uVar11;
  undefined8 extraout_x1_05;
  long ****pppplVar12;
  long *********ppppppppplVar13;
  ulong *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long *plVar20;
  long *plVar21;
  long ***local_310;
  ulong local_308;
  undefined **local_300;
  ulong local_2f8;
  long ***local_2f0;
  ulong local_2e8;
  undefined **local_2e0;
  ulong local_2d8;
  undefined8 auStack_258 [24];
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined6 uStack_178;
  undefined2 local_172;
  undefined6 uStack_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined **local_c0;
  undefined8 *local_b8;
  undefined **local_b0;
  undefined8 *local_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined **local_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_64;
  
  FUN_71037780e0(&local_2e0,param_3,(long ****)"turn_loop",param_3,param_4,param_5,param_6,param_7,
                 param_8);
  uVar17 = local_2d8;
  if (*(long **)(local_2d8 + 8) == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = (**(code **)(**(long **)(local_2d8 + 8) + 0x148))();
    uVar9 = uVar9 & 0xffffffff;
  }
  local_2e0 = &PTR_FUN_710523d9e8;
  local_2d8 = 0;
  if (uVar17 != 0) {
    FUN_710392eb40(uVar17);
  }
  if ((uVar9 & 1) == 0) {
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x710432a87b);
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x71043beebf);
  }
  if (1999 < param_2) {
LAB_7101ae4568:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar10 = (long *)(param_1 + 0x23758);
  puVar18 = (undefined8 *)(*(long *)(param_1 + 0x148) + (long)(int)param_2 * 0x20);
  local_98 = (undefined **)*puVar18;
  local_90 = puVar18[1];
  local_88 = puVar18[2];
  uStack_80 = puVar18[3];
  puVar1 = (ulong *)(param_1 + 0x23750);
  uVar17 = *(ulong *)(param_1 + 0x23770);
  lVar16 = *plVar10;
  lVar2 = *(long *)(param_1 + 0x23760);
  plVar21 = (long *)(lVar16 + (uVar17 >> 7 & 0x1fffffffffffff8));
  if (lVar2 == lVar16) {
    ppppppppplVar13 = (long *********)0x0;
  }
  else {
    ppppppppplVar13 = (long *********)(*plVar21 + (uVar17 & 0x3ff) * 4);
  }
  uVar9 = uVar17 + *(long *)(param_1 + 0x23778);
  plVar20 = plVar21;
LAB_7101ae39e8:
  if (lVar2 != lVar16) {
    if (ppppppppplVar13 !=
        (long *********)(*(long *)(lVar16 + (uVar9 >> 7 & 0x1fffffffffffff8)) + (uVar9 & 0x3ff) * 4)
       ) goto LAB_7101ae3a14;
LAB_7101ae3a54:
    uVar7 = *(uint *)(*plVar21 + (uVar17 & 0x3ff) * 4);
    if (uVar7 < 0x80) {
      lVar15 = (long)(int)uVar7;
      lVar16 = param_1 + lVar15 * 0x278;
      *(undefined4 *)(lVar16 + 0xfb50) = 1;
      *(undefined8 *)(lVar16 + 0xfb70) = uStack_80;
      *(undefined8 *)(lVar16 + 0xfb68) = local_88;
      *(ulong *)(lVar16 + 0xfb60) = local_90;
      *(undefined ***)(lVar16 + 0xfb58) = local_98;
      if (*(long *)(lVar16 + 0xfb78) != 0) {
        *(undefined1 *)(*(long *)(lVar16 + 0xfb78) + 0x74) = 1;
      }
      pppplVar12 = (long ****)0x248;
      memset(&local_2e0,0,0x248);
      FUN_71004f5770(auStack_258);
      local_168 = 0;
      uStack_170 = 0;
      local_180 = 0;
      uStack_178 = 0;
      local_172 = 0;
      local_190 = 0;
      uStack_188 = 0;
      local_198 = 0;
      local_c8 = 0;
      local_d0 = 0;
      local_d8 = 0;
      local_e0 = 0;
      local_e8 = 0;
      local_f0 = 0;
      local_f8 = 0;
      local_100 = 0;
      local_108 = 0;
      local_110 = 0;
      local_118 = 0;
      local_120 = 0;
      local_128 = 0;
      local_130 = 0;
      local_138 = 0;
      local_160 = 0;
      local_c0 = &PTR_FUN_710523da28;
      local_148 = 0;
      uStack_140 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_b8 = (undefined8 *)
                 FUN_710392e290(0x10,0x10,pppplVar12,param_4,param_5,param_6,param_7,param_8);
      if (local_b8 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_300 = (undefined **)((ulong)local_300 & 0xffffffff00000000);
          local_2f0 = (long ***)&DAT_00000010;
          pppplVar12 = &local_2f0;
          uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
          if (((uVar17 & 1) != 0) &&
             (local_b8 = (undefined8 *)
                         FUN_710392e290(0x10,0x10,pppplVar12,param_4,param_5,param_6,param_7,param_8
                                       ), local_b8 != (undefined8 *)0x0)) goto LAB_7101ae3ba4;
        }
        local_b8 = (undefined8 *)0x0;
      }
LAB_7101ae3ba4:
      *local_b8 = 0;
      local_b8[1] = 0;
      local_b0 = &PTR_FUN_710523da28;
      local_a8 = (undefined8 *)
                 FUN_710392e290(0x10,0x10,pppplVar12,param_4,param_5,param_6,param_7,param_8);
      if (local_a8 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_300 = (undefined **)((ulong)local_300 & 0xffffffff00000000);
          local_2f0 = (long ***)&DAT_00000010;
          pppplVar12 = &local_2f0;
          uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
          if (((uVar17 & 1) != 0) &&
             (local_a8 = (undefined8 *)
                         FUN_710392e290(0x10,0x10,pppplVar12,param_4,param_5,param_6,param_7,param_8
                                       ), local_a8 != (undefined8 *)0x0)) goto LAB_7101ae3c08;
        }
        local_a8 = (undefined8 *)0x0;
      }
LAB_7101ae3c08:
      lVar16 = param_1 + lVar15 * 0x278;
      *local_a8 = 0;
      local_a8[1] = 0;
      ppppppppplVar13 = (long *********)0x220;
      memcpy((void *)(lVar16 + 0xfb80),&local_2e0,0x220);
      puVar18 = local_b8;
      uVar11 = extraout_x1;
      if ((undefined ***)(lVar16 + 0xfda0) != &local_c0) {
        lVar16 = param_1 + lVar15 * 0x278;
        local_b8 = (undefined8 *)0x0;
        puVar19 = *(undefined8 **)(lVar16 + 0xfda8);
        *(undefined8 **)(lVar16 + 0xfda8) = puVar18;
        if (puVar19 != (undefined8 *)0x0) {
          plVar21 = (long *)puVar19[1];
          *puVar19 = 0;
          puVar19[1] = 0;
          if (plVar21 != (long *)0x0) {
            plVar20 = plVar21 + 1;
            do {
              lVar16 = *plVar20;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar6) {
                *plVar20 = lVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
              std::__shared_weak_count::__release_weak();
            }
            plVar21 = (long *)puVar19[1];
            if (plVar21 != (long *)0x0) {
              plVar20 = plVar21 + 1;
              do {
                lVar16 = *plVar20;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                if (bVar6) {
                  *plVar20 = lVar16 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar16 == 0) {
                (**(code **)(*plVar21 + 0x10))(plVar21);
                std::__shared_weak_count::__release_weak();
              }
            }
          }
          FUN_710392eb40((ulong)puVar19);
          uVar11 = extraout_x1_00;
        }
      }
      puVar18 = local_a8;
      if ((undefined ***)(param_1 + lVar15 * 0x278 + 0xfdb0) != &local_b0) {
        lVar16 = param_1 + lVar15 * 0x278;
        local_a8 = (undefined8 *)0x0;
        puVar19 = *(undefined8 **)(lVar16 + 0xfdb8);
        *(undefined8 **)(lVar16 + 0xfdb8) = puVar18;
        if (puVar19 != (undefined8 *)0x0) {
          plVar21 = (long *)puVar19[1];
          *puVar19 = 0;
          puVar19[1] = 0;
          if (plVar21 != (long *)0x0) {
            plVar20 = plVar21 + 1;
            do {
              lVar16 = *plVar20;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar6) {
                *plVar20 = lVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
              std::__shared_weak_count::__release_weak();
            }
            plVar21 = (long *)puVar19[1];
            if (plVar21 != (long *)0x0) {
              plVar20 = plVar21 + 1;
              do {
                lVar16 = *plVar20;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                if (bVar6) {
                  *plVar20 = lVar16 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar16 == 0) {
                (**(code **)(*plVar21 + 0x10))(plVar21);
                std::__shared_weak_count::__release_weak();
              }
            }
          }
          FUN_710392eb40((ulong)puVar19);
          uVar11 = extraout_x1_01;
        }
      }
      puVar18 = local_a8;
      lVar16 = param_1 + lVar15 * 0x278;
      *(undefined1 *)(lVar16 + 0xfdc2) = local_9e;
      *(undefined2 *)(lVar16 + 0xfdc0) = local_a0;
      local_b0 = &PTR_FUN_710523da28;
      local_a8 = (undefined8 *)0x0;
      if (puVar18 != (undefined8 *)0x0) {
        plVar21 = (long *)puVar18[1];
        *puVar18 = 0;
        puVar18[1] = 0;
        if (plVar21 != (long *)0x0) {
          plVar20 = plVar21 + 1;
          do {
            lVar16 = *plVar20;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar6) {
              *plVar20 = lVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
            std::__shared_weak_count::__release_weak();
          }
          plVar21 = (long *)puVar18[1];
          if (plVar21 != (long *)0x0) {
            plVar20 = plVar21 + 1;
            do {
              lVar16 = *plVar20;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar6) {
                *plVar20 = lVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
        FUN_710392eb40((ulong)puVar18);
        uVar11 = extraout_x1_02;
      }
      puVar18 = local_b8;
      local_c0 = &PTR_FUN_710523da28;
      local_b8 = (undefined8 *)0x0;
      if (puVar18 != (undefined8 *)0x0) {
        plVar21 = (long *)puVar18[1];
        *puVar18 = 0;
        puVar18[1] = 0;
        if (plVar21 != (long *)0x0) {
          plVar20 = plVar21 + 1;
          do {
            lVar16 = *plVar20;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar6) {
              *plVar20 = lVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
            std::__shared_weak_count::__release_weak();
          }
          plVar21 = (long *)puVar18[1];
          if (plVar21 != (long *)0x0) {
            plVar20 = plVar21 + 1;
            do {
              lVar16 = *plVar20;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar6) {
                *plVar20 = lVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
        FUN_710392eb40((ulong)puVar18);
        uVar11 = extraout_x1_03;
      }
      puVar14 = (ulong *)*plVar10;
      uVar17 = *(long *)(param_1 + 0x23770) + 1;
      lVar16 = *(long *)(param_1 + 0x23778) + -1;
      *(ulong *)(param_1 + 0x23770) = uVar17;
      *(long *)(param_1 + 0x23778) = lVar16;
      if (0x7ff < uVar17) {
        if (*puVar14 != 0) {
          FUN_710392eb40(*puVar14);
          puVar14 = (ulong *)*plVar10;
          uVar17 = *(ulong *)(param_1 + 0x23770);
          lVar16 = *(long *)(param_1 + 0x23778);
          uVar11 = extraout_x1_04;
        }
        puVar14 = puVar14 + 1;
        uVar17 = uVar17 - 0x400;
        *plVar10 = (long)puVar14;
        *(ulong *)(param_1 + 0x23770) = uVar17;
      }
      lVar2 = *(long *)(param_1 + 0x23760) - (long)puVar14;
      uVar9 = 0;
      if (lVar2 != 0) {
        uVar9 = lVar2 * 0x80 - 1;
      }
      uVar17 = lVar16 + uVar17;
      if (uVar9 == uVar17) {
        FUN_7101432380(puVar1,uVar11,(long ****)ppppppppplVar13,param_4,param_5,param_6,param_7,
                       param_8);
        puVar14 = (ulong *)*plVar10;
        uVar17 = *(long *)(param_1 + 0x23770) + *(long *)(param_1 + 0x23778);
      }
      goto LAB_7101ae3fac;
    }
    goto LAB_7101ae4568;
  }
  if (ppppppppplVar13 == (long *********)0x0) goto LAB_7101ae3a54;
LAB_7101ae3a14:
  uVar7 = *(uint *)ppppppppplVar13;
  if (0x7f < uVar7) goto LAB_7101ae4568;
  lVar15 = (long)(int)uVar7;
  bVar6 = FUN_7101aee7b0((char *)(param_1 + lVar15 * 0x278 + 0xfb58),(char *)&local_98);
  if (!bVar6) goto code_r0x007101ae3a3c;
  FUN_7101ae45a0((long)puVar1,plVar20,ppppppppplVar13);
  puVar14 = (ulong *)*plVar10;
  lVar16 = *(long *)(param_1 + 0x23760) - (long)puVar14;
  uVar9 = 0;
  if (lVar16 != 0) {
    uVar9 = lVar16 * 0x80 - 1;
  }
  uVar17 = *(long *)(param_1 + 0x23778) + *(long *)(param_1 + 0x23770);
  if (uVar9 == uVar17) {
    FUN_7101432380(puVar1,extraout_x1_05,(long ****)ppppppppplVar13,param_4,param_5,param_6,param_7,
                   param_8);
    puVar14 = (ulong *)*plVar10;
    uVar17 = *(long *)(param_1 + 0x23770) + *(long *)(param_1 + 0x23778);
  }
LAB_7101ae3fac:
  *(uint *)(*(long *)((long)puVar14 + (uVar17 >> 7 & 0x1fffffffffffff8)) + (uVar17 & 0x3ff) * 4) =
       uVar7;
  *(long *)(param_1 + 0x23778) = *(long *)(param_1 + 0x23778) + 1;
  FUN_7103776640(&local_2e0,param_3,(byte ****)"set_parts_text_scroll",ppppppppplVar13,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_98,(long)&local_2e0,(long ****)"set_txt_main",ppppppppplVar13,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_2f0,(long)&local_2e0,(long ****)"set_txt_mask",ppppppppplVar13,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_300,param_3,(long ****)"set_txt_time",ppppppppplVar13,param_4,param_5,
                 param_6,param_7,param_8);
  lVar16 = param_1 + lVar15 * 0x278;
  if (**(long **)(lVar16 + 0xfda8) == 0) {
    FUN_71037780e0(&local_310,param_3,(long ****)"turn_on",ppppppppplVar13,param_4,param_5,param_6,
                   param_7,param_8);
    uVar17 = local_308;
    if (*(long **)(local_308 + 8) == (long *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)(**(long **)(local_308 + 8) + 0x148))();
      uVar9 = uVar9 & 0xffffffff;
    }
    local_310 = (long ***)&PTR_FUN_710523d9e8;
    local_308 = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    if ((uVar9 & 1) == 0) {
      FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x71043beebf);
    }
    FUN_7103776910(&local_310,param_3,(long ****)"set_rep_pic_cap",ppppppppplVar13,param_4,param_5,
                   param_6,param_7,param_8);
    uVar17 = local_308;
    FUN_7103779650(local_308);
    local_310 = (long ***)&PTR_FUN_710523d9a8;
    local_308 = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    if (*(long **)(local_90 + 0x10) != (long *)0x0) {
      ppppppppplVar13 = (long *********)0x0;
      param_4 = (byte ****)0x0;
      local_310 = (long ***)((ulong)local_310 & 0xffffffff00000000);
      FUN_71037a2270(*(long **)(local_90 + 0x10),(ushort *)&local_310,0,0);
    }
    if (*(long **)(local_2e8 + 0x10) != (long *)0x0) {
      ppppppppplVar13 = (long *********)0x0;
      param_4 = (byte ****)0x0;
      local_310 = (long ***)((ulong)local_310 & 0xffffffff00000000);
      FUN_71037a2270(*(long **)(local_2e8 + 0x10),(ushort *)&local_310,0,0);
    }
    if (*(long **)(local_2f8 + 0x10) != (long *)0x0) {
      ppppppppplVar13 = (long *********)0x0;
      param_4 = (byte ****)0x0;
      local_310 = (long ***)((ulong)local_310 & 0xffffffff00000000);
      FUN_71037a2270(*(long **)(local_2f8 + 0x10),(ushort *)&local_310,0,0);
    }
    plVar10 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar13,param_4,param_5,param_6,
                                     param_7,param_8);
    if (plVar10 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_310 = (long ***)&DAT_00000008;
        pppplVar12 = &local_310;
        uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar17 & 1) != 0) &&
           (plVar10 = (long *)FUN_710392e290(0x10,8,pppplVar12,param_4,param_5,param_6,param_7,
                                             param_8), plVar10 != (long *)0x0)) goto LAB_7101ae428c;
      }
      plVar10 = (long *)0x0;
    }
LAB_7101ae428c:
    *plVar10 = 0;
    lVar16 = *(long *)(*(long *)(param_3 + 8) + 8);
    if ((lVar16 == 0) || (*(long *)(lVar16 + 0x60) == 0)) {
      *plVar10 = 0;
    }
    else {
      plVar21 = (long *)FUN_7103796f20(*(long *)(lVar16 + 0x60),*(long *)(lVar16 + 0x18) + 0xb0);
      *plVar10 = (long)plVar21;
      if (plVar21 != (long *)0x0) {
        (**(code **)(*plVar21 + 0x208))(plVar21,0);
        uVar17 = (**(code **)(*plVar21 + 0x200))(plVar21);
        if ((uVar17 & 1) == 0) {
          uVar7 = 1;
        }
        else {
          uVar7 = (**(code **)(*plVar21 + 0x210))(plVar21);
          uVar7 = uVar7 ^ 1;
        }
        (**(code **)(*plVar21 + 0x388))(plVar21,uVar7 & 1,0);
      }
    }
    FUN_710392eb40((ulong)plVar10);
    uVar17 = local_2f8;
    goto LAB_7101ae449c;
  }
  FUN_71037780e0(&local_310,param_3,(long ****)"turn_off",ppppppppplVar13,param_4,param_5,param_6,
                 param_7,param_8);
  uVar17 = local_308;
  if (*(long **)(local_308 + 8) == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = (**(code **)(**(long **)(local_308 + 8) + 0x148))();
    uVar9 = uVar9 & 0xffffffff;
  }
  local_310 = (long ***)&PTR_FUN_710523d9e8;
  local_308 = 0;
  if (uVar17 != 0) {
    FUN_710392eb40(uVar17);
  }
  if ((uVar9 & 1) == 0) {
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x7104433949);
  }
  FUN_7103776910(&local_310,param_3,(long ****)"set_rep_pic_cap",ppppppppplVar13,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103779480((long)&local_310,lVar16 + 0xfda0,ppppppppplVar13,param_4,param_5,param_6,param_7,
                 param_8);
  uVar17 = local_308;
  local_310 = (long ***)&PTR_FUN_710523d9a8;
  local_308 = 0;
  if (uVar17 != 0) {
    FUN_710392eb40(uVar17);
  }
  if (*(long *)(local_2d8 + 8) != 0) {
    puVar18 = *(undefined8 **)(*(long *)(local_2d8 + 8) + 0x78);
    if (((DAT_710593ba40 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_710593ba40), iVar8 != 0)) {
      if (((DAT_710593ba48 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_710593ba48), iVar8 != 0))
      {
        DAT_710593ba50 = 0;
        __cxa_guard_release(&DAT_710593ba48);
      }
      DAT_710593ba58 = &DAT_710593ba50;
      __cxa_guard_release(&DAT_710593ba40);
    }
    if (puVar18 != (undefined8 *)0x0) {
      for (puVar19 = (undefined8 *)(**(code **)*puVar18)(puVar18); puVar19 != (undefined8 *)0x0;
          puVar19 = (undefined8 *)*puVar19) {
        if ((undefined8 **)puVar19 == &DAT_710593ba58) {
          *(undefined1 *)(puVar18 + 0xc) = 1;
          break;
        }
      }
    }
  }
  FUN_710377a310((long)&local_98,1);
  FUN_710377a310((long)&local_2f0,1);
  uVar3 = *(uint *)(param_1 + lVar15 * 0x278 + 0xfc00);
  uVar4 = uVar3 % 0x3c;
  uVar7 = uVar3 / 0x3c;
  if (0x3e6 < uVar3 / 0x3c) {
    uVar7 = 999;
  }
  if (0x3e6 < uVar4) {
    uVar4 = 999;
  }
  pppplVar12 = (long ****)(ulong)(uVar4 + uVar7 * 1000);
  FUN_710377a310((long)&local_300,1);
  plVar10 = (long *)FUN_710392e290(0x10,8,pppplVar12,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_310 = (long ***)&DAT_00000008;
      pppplVar12 = &local_310;
      uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar17 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,8,pppplVar12,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_7101ae43dc;
    }
    plVar10 = (long *)0x0;
  }
LAB_7101ae43dc:
  *plVar10 = 0;
  lVar16 = *(long *)(*(long *)(param_3 + 8) + 8);
  if ((lVar16 == 0) || (*(long *)(lVar16 + 0x60) == 0)) {
    *plVar10 = 0;
  }
  else {
    plVar21 = (long *)FUN_7103796f20(*(long *)(lVar16 + 0x60),*(long *)(lVar16 + 0x18) + 0xb0);
    *plVar10 = (long)plVar21;
    if (plVar21 != (long *)0x0) {
      uVar7 = 1;
      (**(code **)(*plVar21 + 0x208))(plVar21,1);
      uVar17 = (**(code **)(*plVar21 + 0x200))(plVar21);
      if ((uVar17 & 1) != 0) {
        uVar7 = (**(code **)(*plVar21 + 0x210))(plVar21);
        uVar7 = uVar7 ^ 1;
      }
      (**(code **)(*plVar21 + 0x388))(plVar21,uVar7 & 1,0);
    }
  }
  FUN_710392eb40((ulong)plVar10);
  uVar17 = local_2f8;
LAB_7101ae449c:
  local_300 = &PTR_FUN_710523d9a8;
  local_2f8 = 0;
  if (uVar17 != 0) {
    FUN_710392eb40(uVar17);
  }
  uVar17 = local_2e8;
  local_2f0 = (long ***)&PTR_FUN_710523d9a8;
  local_2e8 = 0;
  if (uVar17 != 0) {
    FUN_710392eb40(uVar17);
  }
  uVar17 = local_90;
  local_98 = &PTR_FUN_710523d9a8;
  local_90 = 0;
  if (uVar17 != 0) {
    FUN_710392eb40(uVar17);
  }
  uVar17 = local_2d8;
  local_2e0 = &PTR_FUN_710523d988;
  local_2d8 = 0;
  if (uVar17 != 0) {
    uVar9 = *(ulong *)(uVar17 + 0x18);
    *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar17 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar17);
  }
  return;
code_r0x007101ae3a3c:
  ppppppppplVar13 = (long *********)((long)ppppppppplVar13 + 4);
  if ((long)ppppppppplVar13 - *plVar20 == 0x1000) {
    plVar20 = plVar20 + 1;
    ppppppppplVar13 = (long *********)*plVar20;
  }
  goto LAB_7101ae39e8;
}

