// addr:      7101bdc040
// offset:    0x1bdc040
// name:      FUN_7101bdc040
// mangled:   
// signature: undefined __cdecl FUN_7101bdc040(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101bdc040(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  int iVar9;
  byte ****ppppbVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined4 local_198 [4];
  long local_188;
  int local_180;
  undefined4 local_158 [2];
  undefined **local_150;
  long local_148;
  undefined8 local_140;
  undefined1 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined **local_118;
  undefined **local_110;
  undefined **local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined **local_d8;
  ulong local_d0;
  undefined **local_c8;
  undefined **local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined **local_88;
  long *local_80;
  
  if (*(int *)(param_1 + 300) == 0) {
    if (*(undefined8 **)(param_1 + 0x18) != *(undefined8 **)(param_1 + 0x10)) {
      FUN_71037760f0(*(long *)**(undefined8 **)**(undefined8 **)(param_1 + 0x10),1);
      plVar7 = *(long **)(param_1 + 0x180);
      if ((ulong)(long)(int)((ulong)(plVar7[0x31] - plVar7[0x30]) >> 3) <=
          (ulong)((*(long *)(param_1 + 0x1a0) - *(long *)(param_1 + 0x198) >> 5) *
                 -0x70a3d70a3d70a3d7)) {
        plVar7 = *(long **)(param_1 + 0x178);
      }
                    /* WARNING: Could not recover jumptable at 0x007101bdc164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x60))(plVar7,1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  uVar5 = (**(code **)(**(long **)(param_1 + 0x180) + 0x78))();
  if ((((uVar5 & 1) != 0) && (*(char *)(*(long *)(param_1 + 0x180) + 0x280) != '\0')) ||
     ((uVar5 = (**(code **)(**(long **)(param_1 + 0x178) + 0x78))(), (uVar5 & 1) != 0 &&
      (*(char *)(*(long *)(param_1 + 0x178) + 0x316) != '\0')))) {
    lVar15 = *(long *)(*(long *)(param_1 + 0x168) + 0x80);
    if (*(char *)(lVar15 + 0xc9) == '\0') {
      iVar9 = 4;
    }
    else {
      iVar9 = 0;
    }
    param_3 = (long *********)0x0;
    FUN_7103771be0((long *)(lVar15 + 0x2260),iVar9,0);
    *(undefined4 *)(lVar15 + 0x2270) = *(undefined4 *)(*(long *)(lVar15 + 0x2260) + 0x25c);
  }
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x168) + 0x80) + 0x2270) != 0) {
    if (*(int *)(*(long *)(param_1 + 400) + 0x25c) != -1) {
      uVar5 = FUN_7101bdcec0(param_1);
      if ((uVar5 & 1) == 0) {
        return;
      }
      lVar15 = *(long *)(DAT_710532f8d0 + 8);
      if ((ulong)(*(long *)(lVar15 + 0x48) - *(long *)(lVar15 + 0x40) >> 3) < 6) {
        uVar5 = 0;
        cVar2 = *(char *)(lVar15 + 0x191);
      }
      else {
        uVar5 = *(ulong *)(*(long *)(lVar15 + 0x40) + 0x28);
        cVar2 = *(char *)(lVar15 + 0x191);
      }
      if ((((cVar2 == '\0') &&
           (uVar6 = FUN_7103313f20(lVar15,uVar5,(long ****)&DAT_00000004,param_4,param_5,param_6,
                                   param_7,param_8), (uVar6 & 1) != 0)) &&
          (FUN_71024076d0(local_198,uVar5), local_188 != 0)) &&
         ((DAT_7106dd53a8 == '\x01' && (local_180 == DAT_7106dd53ac)))) {
        piVar11 = (int *)(local_188 + 0x38);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar3) {
            *piVar11 = *piVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined4 *)(param_1 + 0x1c4) = 3;
      return;
    }
    if ((*(long **)(param_1 + 0x180) == (long *)0x0) ||
       (uVar5 = (**(code **)(**(long **)(param_1 + 0x180) + 0x68))(), (uVar5 & 1) == 0)) {
      if ((*(long **)(param_1 + 0x178) != (long *)0x0) &&
         (uVar5 = (**(code **)(**(long **)(param_1 + 0x178) + 0x68))(), (uVar5 & 1) != 0)) {
        iVar9 = *(int *)(*(long *)(param_1 + 0x178) + 0x2b4);
        goto joined_r0x007101bdc3e0;
      }
    }
    else {
      iVar9 = *(int *)(*(long *)(param_1 + 0x180) + 0x25c);
joined_r0x007101bdc3e0:
      if (-1 < iVar9) {
        if (*(int *)(param_1 + 0x1b8) != 0) {
          lVar15 = *(long *)(param_1 + 0x198);
          uVar6 = (*(long *)(param_1 + 0x1a0) - lVar15 >> 5) * -0x70a3d70a3d70a3d7;
          uVar5 = (long)*(int *)(param_1 + 0x1b8) - 1;
          if (uVar5 <= uVar6 && uVar6 - uVar5 != 0) {
            if (*(short *)(lVar15 + uVar5 * 800 + 0x10) == *(short *)(param_1 + 0x1b0)) {
              if ((*(char *)(lVar15 + uVar5 * 800 + 0xa8) == '\x02') &&
                 (*(char *)(lVar15 + uVar5 * 800 + 8) == '\0')) {
                return;
              }
              lVar15 = lVar15 + uVar5 * 800;
              if (((*(byte *)(lVar15 + 5) ^ *(byte *)(lVar15 + 4)) & 0x3f) == 0) {
                return;
              }
            }
            if (*(uint *)(param_1 + 0x124) < 0x13) {
              *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x124) * 4 + 0xd8) = 4;
              return;
            }
            goto LAB_7101bdce90;
          }
          goto LAB_7101bdce9c;
        }
        if (*(uint *)(param_1 + 0x124) < 0x13) {
          *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x124) * 4 + 0xd8) = 3;
          return;
        }
        goto LAB_7101bdce90;
      }
    }
    if (*(int *)(param_1 + 0x1b4) != 2) {
      if (*(int *)(param_1 + 0x1b4) != 1) {
        return;
      }
      FUN_7101bd7a40(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8);
      return;
    }
    iVar9 = *(int *)(param_1 + 0x1bc);
    iVar14 = *(int *)(*(long *)(param_1 + 0x188) + 0x254);
    if (iVar9 == iVar14) {
      iVar14 = 2;
    }
    else {
      if ((-1 < iVar14) && (0 < *(int *)(param_1 + 0x1b8))) {
        if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10)) {
LAB_7101bdceac:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        lVar15 = **(long **)**(undefined8 **)(param_1 + 0x10);
        if (*(long *)(*(long *)(lVar15 + 0x10) + 8) == 0) {
          return;
        }
        uVar6 = (long)*(int *)(param_1 + 0x1b8) - 1;
        lVar12 = *(long *)(param_1 + 0x198);
        uVar5 = (*(long *)(param_1 + 0x1a0) - lVar12 >> 5) * -0x70a3d70a3d70a3d7;
        if (uVar5 < uVar6 || uVar5 - uVar6 == 0) {
LAB_7101bdce9c:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        FUN_7103776910(&local_118,lVar15 + 8,(long ****)"set_txt_room_sel_name",param_3,param_4,
                       param_5,param_6,param_7,param_8);
        ppuVar16 = local_110;
        if (*local_110 == (undefined *)0x0) goto LAB_7101bdc6b0;
        if (((*(char *)(lVar12 + uVar6 * 800 + 0x318) == '\0') ||
            (*(short *)(lVar12 + uVar6 * 800 + 0x10) != *(short *)(param_1 + 0x1b0))) ||
           ((int)(uint)*(byte *)(lVar12 + uVar6 * 800 + 0xaa) <= iVar14)) {
          if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10))
          goto LAB_7101bdceac;
          lVar15 = **(long **)**(undefined8 **)(param_1 + 0x10);
          if (*(long *)(*(long *)(lVar15 + 0x10) + 8) != 0) {
            FUN_71037780e0(&local_c8,lVar15 + 8,(long ****)"room_member_name_off",param_3,param_4,
                           param_5,param_6,param_7,param_8);
            ppuVar4 = local_c0;
            if (*local_c0 == (undefined *)0x0) {
              local_c8 = &PTR_FUN_710523d9e8;
              local_c0 = (undefined **)0x0;
              if (ppuVar4 == (undefined **)0x0) goto LAB_7101bdc6b0;
            }
            else if (local_c0[1] != (undefined *)0x0) {
              FUN_710377aee0(0x3f800000,(long)&local_c8);
            }
            local_c0 = (undefined **)0x0;
            local_c8 = &PTR_FUN_710523d9e8;
            FUN_710392eb40((ulong)ppuVar4);
          }
LAB_7101bdc6b0:
          local_118 = &PTR_FUN_710523d9a8;
          local_110 = (undefined **)0x0;
          if (ppuVar16 == (undefined **)0x0) goto LAB_7101bdc6c8;
        }
        else {
          if (iVar14 == 0) {
            lVar15 = lVar12 + uVar6 * 800 + 0x60;
            plVar7 = (long *)local_110[2];
          }
          else {
            if (6 < iVar14 - 1U) goto LAB_7101bdce90;
            lVar15 = lVar12 + uVar6 * 800 + (ulong)(iVar14 - 1U) * 0x48 + 0x120;
            plVar7 = (long *)local_110[2];
          }
          if (plVar7 != (long *)0x0) {
            param_3 = (long *********)&DAT_ffffffff;
            param_4 = (byte ****)0x1;
            FUN_71037a2270(plVar7,(ushort *)(lVar15 + 0x20),0xffffffff,1);
          }
          *(int *)(param_1 + 0x1bc) = iVar14;
          if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10))
          goto LAB_7101bdceac;
          lVar15 = **(long **)**(undefined8 **)(param_1 + 0x10);
          if (*(long *)(*(long *)(lVar15 + 0x10) + 8) != 0) {
            FUN_71037780e0(&local_c8,lVar15 + 8,(long ****)"room_member_name_on",param_3,param_4,
                           param_5,param_6,param_7,param_8);
            ppuVar4 = local_c0;
            if (*local_c0 == (undefined *)0x0) {
              local_c8 = &PTR_FUN_710523d9e8;
              local_c0 = (undefined **)0x0;
              if (ppuVar4 == (undefined **)0x0) goto LAB_7101bdc6c0;
            }
            else if (local_c0[1] != (undefined *)0x0) {
              FUN_710377aee0(0x3f800000,(long)&local_c8);
            }
            local_c0 = (undefined **)0x0;
            local_c8 = &PTR_FUN_710523d9e8;
            FUN_710392eb40((ulong)ppuVar4);
          }
        }
LAB_7101bdc6c0:
        local_110 = (undefined **)0x0;
        local_118 = &PTR_FUN_710523d9a8;
        FUN_710392eb40((ulong)ppuVar16);
      }
LAB_7101bdc6c8:
      lVar15 = *(long *)(DAT_710532f8d0 + 8);
      if ((ulong)(*(long *)(lVar15 + 0x48) - *(long *)(lVar15 + 0x40) >> 3) < 2) {
        uVar5 = 0;
        if (*(char *)(lVar15 + 0x191) == '\0') goto LAB_7101bdc704;
LAB_7101bdc774:
        local_b0 = 0x87650000000000;
        local_a0 = 0xffffffffffffffff;
        uStack_98 = 0;
        local_c8 = (undefined **)((ulong)local_c8 & 0xffffffff00000000);
        local_90 = 0;
      }
      else {
        uVar5 = *(ulong *)(*(long *)(lVar15 + 0x40) + 8);
        if (*(char *)(lVar15 + 0x191) != '\0') goto LAB_7101bdc774;
LAB_7101bdc704:
        param_3 = (long *********)&DAT_00000004;
        uVar6 = FUN_7103313f20(lVar15,uVar5,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7
                               ,param_8);
        if ((uVar6 & 1) == 0) goto LAB_7101bdc774;
        FUN_71024076d0((undefined4 *)&local_c8,uVar5);
        if (((local_b8 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_b0 == DAT_7106dd53ac)) {
          piVar11 = (int *)(local_b8 + 0x38);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar3) {
              *piVar11 = *piVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      local_c0 = &PTR_FUN_7104f73d50;
      local_b8 = 0;
      local_a8 = 0;
      iVar14 = *(int *)(param_1 + 0x1b4);
    }
    if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10)) goto LAB_7101bdce94;
    lVar15 = *(long *)**(undefined8 **)**(undefined8 **)(param_1 + 0x10);
    if ((**(uint **)(DAT_710593b988 + 8) >>
         (ulong)(*(uint *)(*(long *)(lVar15 + 0x600) + 0x494) & 0x1f) < 2) &&
       (((uVar5 = (**(code **)(**(long **)(param_1 + 0x178) + 0x78))(), (uVar5 & 1) != 0 ||
         (uVar5 = (**(code **)(**(long **)(param_1 + 0x180) + 0x78))(), (uVar5 & 1) != 0)) ||
        ((0 < *(int *)(param_1 + 0x1b8) &&
         (((*(char *)(*(long *)(param_1 + 0x188) + 0x280) != '\0' ||
           (*(int *)(*(long *)(param_1 + 0x188) + 0x25c) != -1)) ||
          ((lVar15 = *(long *)(lVar15 + 0x600), *(char *)(lVar15 + 0x4aa) != '\0' &&
           ((iVar9 == 0 && ((*(uint *)(lVar15 + 0x1a0) >> 1 & 1) != 0)))))))))))) {
      *(undefined4 *)(param_1 + 0x1b4) = 1;
    }
    if (iVar14 == *(int *)(param_1 + 0x1b4)) {
      return;
    }
    uVar5 = (**(code **)(**(long **)(param_1 + 0x178) + 0x68))();
    if ((uVar5 & 1) == 0) {
      uVar5 = (**(code **)(**(long **)(param_1 + 0x180) + 0x68))();
      if ((uVar5 & 1) != 0) {
        if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10))
        goto LAB_7101bdce94;
        lVar15 = **(long **)**(undefined8 **)(param_1 + 0x10);
        plVar7 = *(long **)(param_1 + 0x180);
        if (*(long *)(*(long *)(lVar15 + 0x10) + 8) != 0) {
          lVar12 = plVar7[0x30];
          lVar13 = plVar7[0x31];
          if (0 < (int)((ulong)(lVar13 - lVar12) >> 3)) {
            uVar5 = 0;
            do {
              if ((long)uVar5 < (long)(int)((ulong)(lVar13 - lVar12) >> 3)) {
                if ((ulong)(lVar13 - lVar12 >> 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_out_of_range();
                }
                ppppbVar10 = *(byte *****)(*(long *)(lVar12 + uVar5 * 8) + 0x88);
                if (ppppbVar10 != (byte ****)0x0) {
                  FUN_7103776640(&local_88,lVar15 + 8,ppppbVar10,param_3,param_4,param_5,param_6,
                                 param_7,param_8);
                  plVar7 = local_80;
                  if (local_80[1] != 0) {
                    FUN_71037780e0(&local_118,(long)&local_88,(long ****)"selected_off",param_3,
                                   param_4,param_5,param_6,param_7,param_8);
                    ppuVar16 = local_110;
                    if (*local_110 == (undefined *)0x0) {
                      local_118 = &PTR_FUN_710523d9e8;
                      local_110 = (undefined **)0x0;
                      if (ppuVar16 != (undefined **)0x0) goto LAB_7101bdcb48;
                    }
                    else {
                      if (local_110[1] != (undefined *)0x0) {
                        FUN_710377aee0(0x3f800000,(long)&local_118);
                      }
LAB_7101bdcb48:
                      local_110 = (undefined **)0x0;
                      local_118 = &PTR_FUN_710523d9e8;
                      FUN_710392eb40((ulong)ppuVar16);
                    }
                    FUN_7103776640(&local_d8,(long)&local_88,(byte ****)"set_parts_cursor_dec",
                                   param_3,param_4,param_5,param_6,param_7,param_8);
                    uVar6 = local_d0;
                    if (*(long *)(local_d0 + 8) != 0) {
                      FUN_71037780e0(&local_118,(long)&local_d8,(long ****)"select_off",param_3,
                                     param_4,param_5,param_6,param_7,param_8);
                      ppuVar16 = local_110;
                      if (*local_110 == (undefined *)0x0) {
                        local_118 = &PTR_FUN_710523d9e8;
                        local_110 = (undefined **)0x0;
                        if (ppuVar16 == (undefined **)0x0) goto LAB_7101bdcbbc;
                      }
                      else if (local_110[1] != (undefined *)0x0) {
                        FUN_710377aee0(0x3f800000,(long)&local_118);
                      }
                      local_110 = (undefined **)0x0;
                      local_118 = &PTR_FUN_710523d9e8;
                      FUN_710392eb40((ulong)ppuVar16);
                    }
LAB_7101bdcbbc:
                    local_d8 = &PTR_FUN_710523d988;
                    local_d0 = 0;
                    if (uVar6 != 0) {
                      uVar8 = *(ulong *)(uVar6 + 0x18);
                      *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
                      *(undefined8 *)(uVar6 + 0x18) = 0;
                      if (uVar8 != 0) {
                        FUN_710392eb40(uVar8);
                      }
                      FUN_710392eb40(uVar6);
                    }
                  }
                  local_88 = &PTR_FUN_710523d988;
                  local_80 = (long *)0x0;
                  if (plVar7 != (long *)0x0) {
                    uVar6 = plVar7[3];
                    plVar7[2] = (long)&PTR_FUN_710523d9a8;
                    plVar7[3] = 0;
                    if (uVar6 != 0) {
                      FUN_710392eb40(uVar6);
                    }
                    FUN_710392eb40((ulong)plVar7);
                  }
                  plVar7 = *(long **)(param_1 + 0x180);
                }
              }
              lVar12 = plVar7[0x30];
              lVar13 = plVar7[0x31];
              uVar5 = uVar5 + 1;
            } while ((long)uVar5 < (long)(int)((ulong)(lVar13 - lVar12) >> 3));
          }
        }
        (**(code **)(*plVar7 + 0x70))(plVar7,1);
      }
    }
    else {
      lVar15 = *(long *)(param_1 + 0x178);
      local_110 = (undefined **)0x0;
      local_108 = (undefined **)0x0;
      local_118 = (undefined **)0x0;
      FUN_71019bb740((ulong *)&local_118,*(long *)(lVar15 + 0x170) - *(long *)(lVar15 + 0x168) >> 3,
                     (long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      plVar1 = *(long **)(lVar15 + 0x170);
      ppuVar16 = local_110;
      for (plVar7 = *(long **)(lVar15 + 0x168); ppuVar4 = local_118, local_110 = ppuVar16,
          plVar7 != plVar1; plVar7 = plVar7 + 1) {
        if (ppuVar16 == local_108) {
          FUN_71019bb8f0((long *)&local_118,(undefined8 *)(*plVar7 + 8),(long ****)param_3,param_4,
                         param_5,param_6,param_7,param_8);
        }
        else {
          FUN_7103776390(ppuVar16,(undefined8 *)(*plVar7 + 8),(long ****)param_3,param_4,param_5,
                         param_6,param_7,param_8);
          local_110 = local_110 + 2;
        }
        ppuVar16 = local_110;
      }
      for (; ppuVar4 != ppuVar16; ppuVar4 = ppuVar4 + 2) {
        if (*(long *)(ppuVar4[1] + 8) != 0) {
          FUN_71037780e0(&local_88,(long)ppuVar4,(long ****)"selected_off",param_3,param_4,param_5,
                         param_6,param_7,param_8);
          plVar7 = local_80;
          if (*local_80 == 0) {
            local_88 = &PTR_FUN_710523d9e8;
            local_80 = (long *)0x0;
            if (plVar7 != (long *)0x0) goto LAB_7101bdc958;
          }
          else {
            if (local_80[1] != 0) {
              FUN_710377aee0(0x3f800000,(long)&local_88);
            }
LAB_7101bdc958:
            local_80 = (long *)0x0;
            local_88 = &PTR_FUN_710523d9e8;
            FUN_710392eb40((ulong)plVar7);
          }
          FUN_7103776640(&local_d8,(long)ppuVar4,(byte ****)"set_parts_cursor_dec",param_3,param_4,
                         param_5,param_6,param_7,param_8);
          uVar5 = local_d0;
          if (*(long *)(local_d0 + 8) != 0) {
            FUN_71037780e0(&local_88,(long)&local_d8,(long ****)"select_off",param_3,param_4,param_5
                           ,param_6,param_7,param_8);
            plVar7 = local_80;
            if (*local_80 == 0) {
              local_88 = &PTR_FUN_710523d9e8;
              local_80 = (long *)0x0;
              if (plVar7 == (long *)0x0) goto LAB_7101bdc9c4;
            }
            else if (local_80[1] != 0) {
              FUN_710377aee0(0x3f800000,(long)&local_88);
            }
            local_80 = (long *)0x0;
            local_88 = &PTR_FUN_710523d9e8;
            FUN_710392eb40((ulong)plVar7);
          }
LAB_7101bdc9c4:
          local_d8 = &PTR_FUN_710523d988;
          local_d0 = 0;
          if (uVar5 != 0) {
            uVar6 = *(ulong *)(uVar5 + 0x18);
            *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar5 + 0x18) = 0;
            if (uVar6 != 0) {
              FUN_710392eb40(uVar6);
            }
            FUN_710392eb40(uVar5);
          }
        }
      }
      (**(code **)(**(long **)(param_1 + 0x178) + 0x70))(*(long **)(param_1 + 0x178),1);
      ppuVar4 = local_118;
      ppuVar16 = local_110;
      if (local_118 != (undefined **)0x0) {
        while (ppuVar16 != ppuVar4) {
          ppuVar16 = ppuVar16 + -2;
          (**(code **)*ppuVar16)(ppuVar16);
        }
        local_110 = ppuVar4;
        if (local_118 != (undefined **)0x0) {
          FUN_710392eb40((ulong)local_118);
        }
      }
    }
    lVar15 = *(long *)(DAT_710532f8d0 + 8);
    if ((ulong)(*(long *)(lVar15 + 0x48) - *(long *)(lVar15 + 0x40) >> 3) < 2) {
      uVar5 = 0;
      if (*(char *)(lVar15 + 0x191) == '\0') goto LAB_7101bdcc7c;
LAB_7101bdccec:
      local_100 = 0x87650000000000;
      local_f0 = 0xffffffffffffffff;
      uStack_e8 = 0;
      local_118 = (undefined **)((ulong)local_118 & 0xffffffff00000000);
      local_e0 = 0;
    }
    else {
      uVar5 = *(ulong *)(*(long *)(lVar15 + 0x40) + 8);
      if (*(char *)(lVar15 + 0x191) != '\0') goto LAB_7101bdccec;
LAB_7101bdcc7c:
      param_3 = (long *********)&DAT_00000004;
      uVar6 = FUN_7103313f20(lVar15,uVar5,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                             param_8);
      if ((uVar6 & 1) == 0) goto LAB_7101bdccec;
      FUN_71024076d0((undefined4 *)&local_118,uVar5);
      if (((local_108 != (undefined **)0x0) && (DAT_7106dd53a8 == '\x01')) &&
         ((int)local_100 == DAT_7106dd53ac)) {
        local_108 = local_108 + 7;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(local_108,0x10);
          if (bVar3) {
            *(int *)local_108 = *(int *)local_108 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    local_110 = &PTR_FUN_7104f73d50;
    local_108 = (undefined **)0x0;
    local_f8 = 0;
    (**(code **)(**(long **)(param_1 + 0x188) + 0x70))(*(long **)(param_1 + 0x188),0);
    if (*(undefined8 **)(param_1 + 0x18) != *(undefined8 **)(param_1 + 0x10)) {
      lVar15 = **(long **)**(undefined8 **)(param_1 + 0x10);
      if (*(long *)(*(long *)(lVar15 + 0x10) + 8) == 0) {
        return;
      }
      FUN_71037780e0(&local_88,lVar15 + 8,(long ****)"room_member_name_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      plVar7 = local_80;
      if (*local_80 == 0) {
        if (local_80 == (long *)0x0) {
          return;
        }
      }
      else if (local_80[1] != 0) {
        FUN_710377aee0(0x3f800000,(long)&local_88);
      }
      local_80 = (long *)0x0;
      local_88 = &PTR_FUN_710523d9e8;
      FUN_710392eb40((ulong)plVar7);
      return;
    }
LAB_7101bdce94:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar15 = *(long *)(DAT_710532f8d0 + 8);
  if ((ulong)(*(long *)(lVar15 + 0x48) - *(long *)(lVar15 + 0x40) >> 3) < 4) {
    uVar5 = 0;
    if (*(char *)(lVar15 + 0x191) == '\0') goto LAB_7101bdc2e8;
LAB_7101bdc358:
    local_140 = 0x87650000000000;
    local_130 = 0xffffffffffffffff;
    uStack_128 = 0;
    local_158[0] = 0;
    local_120 = 0;
  }
  else {
    uVar5 = *(ulong *)(*(long *)(lVar15 + 0x40) + 0x18);
    if (*(char *)(lVar15 + 0x191) != '\0') goto LAB_7101bdc358;
LAB_7101bdc2e8:
    uVar6 = FUN_7103313f20(lVar15,uVar5,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                           param_8);
    if ((uVar6 & 1) == 0) goto LAB_7101bdc358;
    FUN_71024076d0(local_158,uVar5);
    if (((local_148 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_140 == DAT_7106dd53ac)) {
      piVar11 = (int *)(local_148 + 0x38);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = *piVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  local_150 = &PTR_FUN_7104f73d50;
  local_148 = 0;
  local_138 = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 1;
  if (1 < *(uint *)(param_1 + 0x128)) {
    if (0x12 < *(uint *)(param_1 + 0x124)) {
LAB_7101bdce90:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x124) * 4 + 0xd8) = 1;
  }
  return;
}

