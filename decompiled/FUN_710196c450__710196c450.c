// addr:      710196c450
// offset:    0x196c450
// name:      FUN_710196c450
// mangled:   
// signature: long * __cdecl FUN_710196c450(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


long * FUN_710196c450(long param_1,undefined8 param_2,char *param_3,byte ****param_4,
                     long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 extraout_x1;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined **ppuVar11;
  long lVar12;
  byte bVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined8 local_1d0;
  ulong local_1c8;
  undefined8 local_d0;
  ushort local_c8 [18];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined1 local_84;
  
  lVar17 = *(long *)(param_1 + 0xf0);
  lVar18 = *(long *)(lVar17 + 0x80);
  plVar5 = (long *)(lVar18 + 0x10);
  if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)*plVar5) goto LAB_710196cfc0;
  lVar12 = *(long *)**(undefined8 **)*plVar5;
  if (*(char *)(lVar12 + 0x18) != '\0') {
    lVar12 = *(long *)(*(long *)(lVar12 + 0x10) + 8);
    if ((lVar12 != 0) &&
       (plVar5 = (long *)FUN_71037964b0(lVar12,0x710428ff7d), param_2 = extraout_x1,
       plVar5 != (long *)0x0)) {
      auVar19 = (**(code **)(*plVar5 + 0x138))();
      param_2 = auVar19._8_8_;
      plVar5 = auVar19._0_8_;
      if (((ulong)plVar5 & 1) == 0) goto LAB_710196c60c;
      lVar17 = *(long *)(param_1 + 0xf0);
      lVar18 = *(long *)(lVar17 + 0x80);
    }
    if (*(undefined8 **)(lVar18 + 0x18) == *(undefined8 **)(lVar18 + 0x10)) goto LAB_710196cfc0;
    plVar5 = (long *)**(undefined8 **)**(undefined8 **)(lVar18 + 0x10);
    if ((char)plVar5[3] != '\0') {
      FUN_7103775fa0(plVar5,param_2,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    }
    plVar5 = *(long **)(lVar18 + 0x110);
    *(undefined1 *)(lVar18 + 0x13c) = 0;
    if (plVar5[1] != 0) {
      FUN_7103778300(0x3f800000,(long)plVar5,0x71043e091b);
      lVar12 = *(long *)(*(long *)(lVar18 + 0x120) + 8);
      if (lVar12 != 0) {
        puVar15 = *(undefined8 **)(lVar12 + 0x78);
        if (((DAT_710593ba40 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&DAT_710593ba40), iVar4 != 0)) {
          if (((DAT_710593ba48 & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(&DAT_710593ba48), iVar4 != 0)) {
            DAT_710593ba50 = 0;
            __cxa_guard_release(&DAT_710593ba48);
          }
          DAT_710593ba58 = &DAT_710593ba50;
          __cxa_guard_release(&DAT_710593ba40);
        }
        if (puVar15 != (undefined8 *)0x0) {
          for (puVar6 = (undefined8 *)(**(code **)*puVar15)(puVar15); puVar6 != (undefined8 *)0x0;
              puVar6 = (undefined8 *)*puVar6) {
            if ((undefined8 **)puVar6 == &DAT_710593ba58) {
              lVar12 = puVar15[3];
              *(undefined4 *)(puVar15 + 0xb) = *(undefined4 *)((long)puVar15 + 0x54);
              if (lVar12 != 0) {
                *(undefined4 *)(lVar12 + 0x30) = *(undefined4 *)((long)puVar15 + 0x54);
                *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 0x10;
              }
              lVar12 = puVar15[4];
              if (lVar12 != 0) {
                *(undefined4 *)(lVar12 + 0x30) = *(undefined4 *)(puVar15 + 0xb);
                *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 0x10;
              }
              if ((long *)puVar15[5] != (long *)0x0) {
                (**(code **)(*(long *)puVar15[5] + 0x180))(0);
              }
              plVar5 = (long *)puVar15[6];
              if (plVar5 != (long *)0x0) {
                if (*(char *)((long)puVar15 + 99) == '\0') {
                  (**(code **)(*plVar5 + 0x180))(0);
                }
                else {
                  (**(code **)(*plVar5 + 400))();
                }
              }
              *(undefined2 *)((long)puVar15 + 100) = 0;
              break;
            }
          }
        }
      }
      plVar5 = (long *)FUN_7103778950(*(long *)(*(long *)(lVar18 + 0x120) + 8));
    }
    *(undefined1 *)(lVar17 + 0x70) = 1;
  }
LAB_710196c60c:
  if (*(int *)(param_1 + 0xcc) == 0) {
    iVar4 = *(int *)(param_1 + 0xd0);
    if (iVar4 != 4) {
      iVar7 = *(int *)(*(long *)(DAT_7105329d78 + 8) + 0x700);
      ppuVar11 = (undefined **)param_3;
      if (iVar7 != 0) {
        lVar17 = *(long *)(*(long *)(param_1 + 0xe8) + 0x80);
        uVar14 = *(long *)(lVar17 + 0x140) - *(long *)(lVar17 + 0x138);
        if (1 < (ulong)((long)uVar14 >> 2)) {
          if (1 < (int)(uVar14 >> 2)) {
            uVar8 = 1;
            do {
              if ((ulong)((long)uVar14 >> 2) <= uVar8) goto LAB_710196cfc0;
              if (*(int *)(*(long *)(lVar17 + 0x138) + uVar8 * 4) == iVar7) goto LAB_710196ccc0;
              uVar8 = uVar8 + 1;
            } while ((long)uVar8 < (long)(uVar14 * 0x40000000) >> 0x20);
          }
          uVar8 = 0;
LAB_710196ccc0:
          param_4 = (byte ****)0x1;
          ppuVar11 = (undefined **)0x0;
          FUN_7103783c10((long *)(lVar17 + 0xf8),(int)uVar8,0,1,param_5,param_6,param_7,param_8);
        }
      }
      lVar17 = *(long *)(param_1 + 0xe8);
      lVar18 = *(long *)(lVar17 + 0x80);
      if (*(undefined8 **)(lVar18 + 0x18) == *(undefined8 **)(lVar18 + 0x10)) {
LAB_710196cfc0:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      puVar15 = (undefined8 *)**(undefined8 **)(lVar18 + 0x10);
      plVar5 = *(long **)*puVar15;
      if ((char)plVar5[3] == '\0') {
        uVar3 = *(uint *)(lVar18 + 8);
        ppuVar11 = (undefined **)(ulong)uVar3;
        if ((int)uVar3 < 0x500000) {
          if ((int)uVar3 < 0x250000) {
            if ((int)uVar3 < 0x200000) {
              if ((int)uVar3 < 0x150000) {
                if ((int)uVar3 < 0x100000) {
                  if ((int)uVar3 < 0xfe000) {
                    if ((int)uVar3 < 0x50000) {
                      if ((int)uVar3 < 0x10000) {
                        iVar7 = 3;
                        if (0 < (int)uVar3) {
                          iVar7 = 0;
                        }
                      }
                      else {
                        iVar7 = 1;
                      }
                    }
                    else {
                      iVar7 = 2;
                    }
                  }
                  else {
                    iVar7 = 8;
                  }
                }
                else {
                  iVar7 = 4;
                }
              }
              else {
                iVar7 = 6;
              }
            }
            else {
              iVar7 = 5;
            }
          }
          else {
            iVar7 = 7;
          }
        }
        else {
          iVar7 = 9;
        }
        FUN_7103775dc0(plVar5,iVar7,(long ****)ppuVar11,param_4,param_5,param_6,param_7,param_8);
      }
      puVar6 = (undefined8 *)0x0;
      if ((long *)**(undefined8 **)(lVar18 + 0x40) != (long *)0x0) {
        param_4 = (byte ****)(ulong)(iVar4 == 3);
        ppuVar11 = (undefined **)&DAT_71043cdb7b;
        FUN_7103375650((long *)**(undefined8 **)(lVar18 + 0x40),"IS_BACK_SETUP",&DAT_71043cdb7b);
        puVar6 = (undefined8 *)**(undefined8 **)(lVar18 + 0x40);
      }
      FUN_7103376980(puVar6);
      if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0))
      {
        FUN_7101764000();
        ppuVar11 = &PTR_LOOP_7104f17000;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      uVar3 = DAT_7105307b68._4_4_;
      FUN_7103776640(&local_1d0,*(long *)*puVar15 + 8,(byte ****)"set_btn_keyhelp_00",ppuVar11,
                     param_4,param_5,param_6,param_7,param_8);
      uVar14 = local_1c8;
      if ((uVar3 < 7) && ((1 << (ulong)(uVar3 & 0x1f) & 0x58U) != 0)) {
        if ((*(long *)(local_1c8 + 8) == 0) ||
           (lVar12 = *(long *)(*(long *)(local_1c8 + 8) + 0x18), lVar12 == 0)) goto LAB_710196ce64;
        bVar13 = *(byte *)(lVar12 + 0x58) & 0xfe;
      }
      else {
        if ((*(long *)(local_1c8 + 8) == 0) ||
           (lVar12 = *(long *)(*(long *)(local_1c8 + 8) + 0x18), lVar12 == 0)) goto LAB_710196ce64;
        bVar13 = *(byte *)(lVar12 + 0x58) | 1;
      }
      *(byte *)(lVar12 + 0x58) = bVar13;
LAB_710196ce64:
      *(undefined4 *)(lVar18 + 0xe4) = 0;
      *(undefined8 *)(lVar18 + 0xe8) = 0xffffffff;
      *(undefined4 *)(lVar18 + 0xf0) = 0xffffffff;
      *(undefined8 *)(lVar18 + 0x58) = 0;
      *(undefined8 *)(lVar18 + 0x60) = 0;
      *(undefined8 *)(lVar18 + 0xdc) = 0;
      *(undefined8 *)(lVar18 + 0xd4) = 0;
      *(undefined8 *)(lVar18 + 0xcc) = 0;
      *(undefined8 *)(lVar18 + 0xc4) = 0;
      *(undefined8 *)(lVar18 + 0xbc) = 0;
      *(undefined8 *)(lVar18 + 0xb4) = 0;
      *(undefined8 *)(lVar18 + 0xac) = 0;
      *(undefined8 *)(lVar18 + 0xa4) = 0;
      *(undefined8 *)(lVar18 + 0x9c) = 0;
      *(undefined1 *)(lVar18 + 0xf4) = 0;
      *(undefined4 *)(lVar18 + 0x98) = 1;
      plVar5 = (long *)FUN_7101eaa4a0((long *)(lVar18 + 0x50));
      local_1d0 = &PTR_FUN_710523d988;
      local_1c8 = 0;
      if (uVar14 != 0) {
        uVar8 = *(ulong *)(uVar14 + 0x18);
        *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar14 + 0x18) = 0;
        if (uVar8 != 0) {
          FUN_710392eb40(uVar8);
        }
        plVar5 = (long *)FUN_710392eb40(uVar14);
      }
      *(undefined1 *)(lVar17 + 0x70) = 0;
      return plVar5;
    }
    plVar16 = *(long **)(*(long *)(*(long *)(param_1 + 0xe8) + 0x80) + 0x40);
    if (plVar16 != (long *)0x0) {
      lVar12 = *(long *)*plVar16;
      *(undefined4 *)((long *)*plVar16 + 2) = 0;
      plVar5 = *(long **)(lVar12 + 0x10);
      *plVar5 = lVar12;
      *(undefined4 *)(plVar5 + 1) = 0x48;
      lVar17 = *(long *)(lVar12 + 0x10);
      *(long *)(lVar12 + 0x10) = lVar17 + 0x10;
      lVar18 = *(long *)(*(long *)(lVar12 + 0x18) + 200);
      *(long *)(lVar12 + 0x10) = lVar17;
      if (lVar18 == lVar12) {
        lVar17 = *(long *)(*(long *)(lVar12 + 0x18) + 0x40);
        if (*(uint *)(lVar17 + 0xc) < 2) {
          plVar5 = (long *)(*(long *)(lVar17 + 0x18) +
                           ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar17 + 0xb) & 0x3f)) &
                           2) * 0x20);
          do {
            if (((int)plVar5[3] == 0x13) && (plVar10 = plVar5, plVar5[2] == 2)) break;
            piVar1 = (int *)((long)plVar5 + 0x1c);
            plVar5 = plVar5 + (long)*piVar1 * 4;
            plVar10 = &DAT_7104862960;
          } while (*piVar1 != 0);
        }
        else {
          plVar10 = (long *)(*(long *)(lVar17 + 0x10) + 0x10);
        }
        param_3 = "reset_flag_open_subwindow_hand";
        uVar3 = FUN_71038f4d40(lVar12,plVar10,"reset_flag_open_subwindow_hand");
      }
      else {
        FUN_71038f4b20(lVar12,"reset_flag_open_subwindow_hand");
        uVar3 = FUN_71038f4fc0(lVar12,-2);
      }
      plVar5 = (long *)(ulong)uVar3;
      puVar15 = (undefined8 *)(*(long *)(lVar12 + 0x10) + -0x10);
      if ((puVar15 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar12 + 0x10) + -8) & 0xf) != 6)) {
        *(undefined8 **)(lVar12 + 0x10) = puVar15;
      }
      else {
        uVar3 = FUN_7103377130(plVar16,0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
        ;
        plVar5 = (long *)(ulong)uVar3;
      }
    }
  }
  plVar10 = (long *)(param_1 + 0xe8);
  plVar16 = *(long **)(*(long *)(*plVar10 + 0x80) + 0x40);
  if (plVar16 != (long *)0x0) {
    lVar12 = *(long *)*plVar16;
    *(undefined4 *)((long *)*plVar16 + 2) = 0;
    plVar5 = *(long **)(lVar12 + 0x10);
    *plVar5 = lVar12;
    *(undefined4 *)(plVar5 + 1) = 0x48;
    lVar17 = *(long *)(lVar12 + 0x10);
    *(long *)(lVar12 + 0x10) = lVar17 + 0x10;
    lVar18 = *(long *)(*(long *)(lVar12 + 0x18) + 200);
    *(long *)(lVar12 + 0x10) = lVar17;
    if (lVar18 == lVar12) {
      lVar17 = *(long *)(*(long *)(lVar12 + 0x18) + 0x40);
      if (*(uint *)(lVar17 + 0xc) < 2) {
        plVar5 = (long *)(*(long *)(lVar17 + 0x18) +
                         ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar17 + 0xb) & 0x3f)) & 2
                         ) * 0x20);
        do {
          if (((int)plVar5[3] == 0x13) && (plVar9 = plVar5, plVar5[2] == 2)) break;
          piVar1 = (int *)((long)plVar5 + 0x1c);
          plVar5 = plVar5 + (long)*piVar1 * 4;
          plVar9 = &DAT_7104862960;
        } while (*piVar1 != 0);
      }
      else {
        plVar9 = (long *)(*(long *)(lVar17 + 0x10) + 0x10);
      }
      param_3 = "get_flag_open_subwindow_hand";
      uVar3 = FUN_71038f4d40(lVar12,plVar9,"get_flag_open_subwindow_hand");
    }
    else {
      FUN_71038f4b20(lVar12,"get_flag_open_subwindow_hand");
      uVar3 = FUN_71038f4fc0(lVar12,-2);
    }
    plVar5 = (long *)(ulong)uVar3;
    puVar15 = (undefined8 *)(*(long *)(lVar12 + 0x10) + -0x10);
    if ((puVar15 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar12 + 0x10) + -8) & 0xf) != 6)) {
      *(undefined8 **)(lVar12 + 0x10) = puVar15;
    }
    else {
      uVar3 = FUN_7103377130(plVar16,1,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      plVar5 = (long *)(ulong)uVar3;
      if (uVar3 != 0) {
        local_1d0 = (undefined **)((ulong)*(uint *)(*(long *)(DAT_7105329d78 + 8) + 0x750) << 0x20);
        plVar5 = (long *)FUN_7101ebb710(*(long *)(param_1 + 0xf8),(undefined4 *)&local_1d0,param_3,
                                        param_4,param_5,param_6,param_7,param_8);
        if (0x11 < *(int *)(param_1 + 0xc4)) {
          return plVar5;
        }
        uVar3 = *(int *)(param_1 + 0xc4) + 1;
        *(uint *)(param_1 + 0xc4) = uVar3;
        if (uVar3 < 0x13) {
          *(undefined4 *)(param_1 + (long)(int)uVar3 * 4 + 0x78) = 4;
          return plVar5;
        }
        goto LAB_710196cfc4;
      }
    }
  }
  if (*(int *)(*(long *)(*plVar10 + 0x80) + 0xe8) == 0) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0)) {
      FUN_7101764000();
      ppuVar11 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
      param_3 = (char *)ppuVar11;
    }
    plVar5 = (long *)(**(code **)(*(long *)*plVar10 + 0x20))();
    uVar3 = (uint)plVar5;
    if (uVar3 != 0xffffffff) {
      puVar15 = &DAT_7105339830;
      if ((((9 < uVar3) || (*(char *)(DAT_71053398b0 + 8) == '\0')) ||
          (puVar15 = (undefined8 *)(&DAT_7105339860)[(int)uVar3], puVar15 != (undefined8 *)0x0)) &&
         (uVar2 = *(int *)(puVar15[2] + 0x9c) - 1, uVar2 < 7)) {
        DAT_7105307b68._4_4_ = *(uint *)(&DAT_7104753de0 + (long)(int)uVar2 * 4);
      }
      DAT_7105307b68._0_4_ = uVar3;
      if (DAT_710593ba90 != (long *)0x0) {
        *(uint *)(*DAT_710593ba90 + 0x3ac) = DAT_7105307b68._4_4_;
      }
      if (DAT_710532f7f0 != 0) {
        plVar5 = (long *)FUN_7101afe3e0(*(long *)(*(long *)(*(long *)(DAT_710532f7f0 + 8) + 8) +
                                                 0x80),DAT_7105307b68._4_4_,(long ****)param_3,
                                        param_4,param_5,param_6,param_7,param_8);
      }
    }
    plVar16 = *(long **)(*(long *)(*plVar10 + 0x80) + 0x40);
    if (plVar16 != (long *)0x0) {
      lVar12 = *(long *)*plVar16;
      *(undefined4 *)((long *)*plVar16 + 2) = 0;
      plVar5 = *(long **)(lVar12 + 0x10);
      *plVar5 = lVar12;
      *(undefined4 *)(plVar5 + 1) = 0x48;
      lVar17 = *(long *)(lVar12 + 0x10);
      *(long *)(lVar12 + 0x10) = lVar17 + 0x10;
      lVar18 = *(long *)(*(long *)(lVar12 + 0x18) + 200);
      *(long *)(lVar12 + 0x10) = lVar17;
      if (lVar18 == lVar12) {
        lVar17 = *(long *)(*(long *)(lVar12 + 0x18) + 0x40);
        if (*(uint *)(lVar17 + 0xc) < 2) {
          plVar5 = (long *)(*(long *)(lVar17 + 0x18) +
                           ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar17 + 0xb) & 0x3f)) &
                           2) * 0x20);
          do {
            if (((int)plVar5[3] == 0x13) && (plVar9 = plVar5, plVar5[2] == 2)) break;
            piVar1 = (int *)((long)plVar5 + 0x1c);
            plVar5 = plVar5 + (long)*piVar1 * 4;
            plVar9 = &DAT_7104862960;
          } while (*piVar1 != 0);
        }
        else {
          plVar9 = (long *)(*(long *)(lVar17 + 0x10) + 0x10);
        }
        param_3 = "is_cancelled";
        uVar3 = FUN_71038f4d40(lVar12,plVar9,"is_cancelled");
      }
      else {
        FUN_71038f4b20(lVar12,"is_cancelled");
        uVar3 = FUN_71038f4fc0(lVar12,-2);
      }
      plVar5 = (long *)(ulong)uVar3;
      puVar15 = (undefined8 *)(*(long *)(lVar12 + 0x10) + -0x10);
      if ((puVar15 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar12 + 0x10) + -8) & 0xf) != 6)) {
        *(undefined8 **)(lVar12 + 0x10) = puVar15;
      }
      else {
        uVar3 = FUN_7103377130(plVar16,1,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
        ;
        plVar5 = (long *)(ulong)uVar3;
        if (uVar3 != 0) {
          *(undefined4 *)(param_1 + 0x100) = 2;
          if (*(uint *)(param_1 + 0xc4) < 0x13) {
            *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xc4) * 4 + 0x78) = 1;
            return plVar5;
          }
          goto LAB_710196cfc4;
        }
      }
    }
    lVar17 = DAT_7105329d78;
    lVar18 = *(long *)(DAT_7105329d78 + 8);
    *(undefined1 *)(lVar18 + 0xab8) = 1;
    *(undefined4 *)(lVar18 + 0xab9) = 0;
    *(undefined8 *)(lVar18 + 0xae8) = 0;
    *(undefined8 *)(lVar18 + 0xae0) = 0;
    *(undefined8 *)(lVar18 + 0xad8) = 0;
    *(undefined8 *)(lVar18 + 0xad0) = 0;
    *(undefined8 *)(lVar18 + 0xac8) = 0;
    *(undefined8 *)(lVar18 + 0xac0) = 0;
    lVar18 = *(long *)(lVar17 + 8);
    lVar17 = *(long *)(*plVar10 + 0x80);
    iVar4 = *(int *)(*(long *)(lVar17 + 0xf8) + 0x2a4);
    if (iVar4 < 1) {
      *(undefined8 *)(lVar18 + 0x700) = 0x100000000;
      *(undefined8 *)(lVar18 + 0x710) = 0xd9ffff168003485a;
      *(undefined4 *)(lVar18 + 0x708) = 0;
      *(undefined2 *)(lVar18 + 0x71c) = 1;
      *(undefined2 *)(lVar18 + 0x728) = 0;
      *(undefined4 *)(lVar18 + 0x718) = 0x42f00000;
      *(undefined8 *)(lVar18 + 0x720) = 0;
      if (0x12 < *(uint *)(param_1 + 0xc4)) goto LAB_710196cfc4;
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xc4) * 4 + 0x78) = 3;
    }
    else {
      puVar15 = *(undefined8 **)(*DAT_7105314510 + 0x298);
      local_d0 = 0;
      local_c8[0] = 0;
      local_98 = 0xd9ffff0000000000;
      if ((ulong)(*(long *)(lVar17 + 0x140) - *(long *)(lVar17 + 0x138) >> 2) <= (ulong)(long)iVar4)
      {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      uVar3 = *(uint *)(*(long *)(lVar17 + 0x138) + (long)iVar4 * 4);
      plVar5 = (long *)FUN_71017cefa0(puVar15,uVar3,&local_d0);
      if (((ulong)plVar5 & 1) != 0) {
        *(uint *)(lVar18 + 0x700) = uVar3;
        *(undefined2 *)(lVar18 + 0x728) = 0;
        *(undefined8 *)(lVar18 + 0x720) = 0;
        FUN_7101748070((uint *)(lVar18 + 0x720),local_c8);
        *(undefined4 *)(lVar18 + 0x704) = local_a4;
        *(undefined4 *)(lVar18 + 0x708) = local_a0;
        *(undefined8 *)(lVar18 + 0x710) = local_98;
        *(undefined4 *)(lVar18 + 0x718) = local_88;
        *(undefined1 *)(lVar18 + 0x71c) = local_84;
        plVar5 = (long *)FUN_71017cee10(puVar15,uVar3,&local_1d0);
        *(bool *)(lVar18 + 0x71d) = local_1d0._4_1_ == '\x01';
      }
      *(undefined4 *)(param_1 + 0x100) = 1;
      if (0x12 < *(uint *)(param_1 + 0xc4)) {
LAB_710196cfc4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xc4) * 4 + 0x78) = 1;
    }
  }
  return plVar5;
}

