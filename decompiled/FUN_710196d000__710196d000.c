// addr:      710196d000
// offset:    0x196d000
// name:      FUN_710196d000
// mangled:   
// signature: long * __cdecl FUN_710196d000(long * param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


long * FUN_710196d000(long *param_1,undefined8 param_2,char *param_3,byte ****param_4,
                     long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 extraout_x1;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined **ppuVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 auVar19 [16];
  undefined4 local_38;
  undefined4 uStack_34;
  
  lVar15 = param_1[0x1d];
  puVar17 = *(undefined8 **)(*(long *)(lVar15 + 0x80) + 0x10);
  puVar18 = *(undefined8 **)(*(long *)(lVar15 + 0x80) + 0x18);
  if (puVar18 == puVar17) goto LAB_710196d96c;
  plVar9 = param_1;
  if (*(char *)(**(long **)*puVar17 + 0x18) != '\0') {
    lVar8 = *(long *)(*(long *)(**(long **)*puVar17 + 0x10) + 8);
    if ((lVar8 != 0) &&
       (plVar9 = (long *)FUN_71037964b0(lVar8,0x710428ff7d), param_2 = extraout_x1,
       plVar9 != (long *)0x0)) {
      auVar19 = (**(code **)(*plVar9 + 0x138))();
      param_2 = auVar19._8_8_;
      plVar9 = auVar19._0_8_;
      if (((ulong)plVar9 & 1) == 0) goto LAB_710196d0a8;
      lVar15 = param_1[0x1d];
      puVar17 = *(undefined8 **)(*(long *)(lVar15 + 0x80) + 0x10);
      puVar18 = *(undefined8 **)(*(long *)(lVar15 + 0x80) + 0x18);
    }
    if (puVar18 == puVar17) goto LAB_710196d96c;
    plVar9 = (long *)**(undefined8 **)*puVar17;
    if ((char)plVar9[3] != '\0') {
      plVar9 = (long *)FUN_7103775fa0(plVar9,param_2,(long ****)param_3,param_4,param_5,param_6,
                                      param_7,param_8);
    }
    *(undefined1 *)(lVar15 + 0x70) = 1;
  }
LAB_710196d0a8:
  if (*(int *)((long)param_1 + 0xcc) == 0) {
    if ((int)param_1[0x1a] != 4) {
      cVar3 = *(char *)((long)param_1 + 0x104);
      *(undefined1 *)((long)param_1 + 0x104) = 0;
      lVar15 = *(long *)(DAT_7105329d78 + 8);
      lVar8 = param_1[0x1e];
      lVar16 = *(long *)(lVar8 + 0x80);
      uVar2 = *(undefined4 *)(lVar15 + 0x708);
      uVar10 = *(ulong *)(lVar15 + 0x710);
      *(undefined4 *)(lVar16 + 0xf8) = *(undefined4 *)(lVar15 + 0x704);
      *(undefined4 *)(lVar16 + 0xfc) = uVar2;
      *(ulong *)(lVar16 + 0x100) = uVar10;
      FUN_7101ebadf0(0.55,lVar16 + 0x108,uVar10,param_3,param_4,param_5,param_6,param_7,param_8);
      if ((long *)**(undefined8 **)(lVar16 + 0x40) != (long *)0x0) {
        uVar6 = 0;
        if (cVar3 != '\0') {
          uVar6 = 2;
        }
        param_4 = (byte ****)(ulong)uVar6;
        FUN_7103375650((long *)**(undefined8 **)(lVar16 + 0x40),"INIT_MENU_SELECT_ID",
                       &DAT_71042b2a84);
      }
      if (*(undefined8 **)(lVar16 + 0x18) != *(undefined8 **)(lVar16 + 0x10)) {
        plVar9 = (long *)**(undefined8 **)**(undefined8 **)(lVar16 + 0x10);
        if ((char)plVar9[3] == '\0') {
          uVar6 = *(uint *)(lVar16 + 8);
          if ((int)uVar6 < 0x500000) {
            if ((int)uVar6 < 0x250000) {
              if ((int)uVar6 < 0x200000) {
                if ((int)uVar6 < 0x150000) {
                  if ((int)uVar6 < 0x100000) {
                    if ((int)uVar6 < 0xfe000) {
                      if ((int)uVar6 < 0x50000) {
                        if ((int)uVar6 < 0x10000) {
                          iVar7 = 3;
                          if (0 < (int)uVar6) {
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
          FUN_7103775dc0(plVar9,iVar7,(long ****)(ulong)uVar6,param_4,param_5,param_6,param_7,
                         param_8);
        }
        FUN_7103376980((undefined8 *)**(undefined8 **)(lVar16 + 0x40));
        *(undefined4 *)(lVar16 + 0xdc) = 0;
        *(undefined8 *)(lVar16 + 0xe0) = 0xffffffff;
        *(undefined4 *)(lVar16 + 0xe8) = 0xffffffff;
        *(undefined8 *)(lVar16 + 0x50) = 0;
        *(undefined8 *)(lVar16 + 0x58) = 0;
        *(undefined8 *)(lVar16 + 0xd4) = 0;
        *(undefined8 *)(lVar16 + 0xcc) = 0;
        *(undefined8 *)(lVar16 + 0xc4) = 0;
        *(undefined8 *)(lVar16 + 0xbc) = 0;
        *(undefined8 *)(lVar16 + 0xb4) = 0;
        *(undefined8 *)(lVar16 + 0xac) = 0;
        *(undefined8 *)(lVar16 + 0xa4) = 0;
        *(undefined8 *)(lVar16 + 0x9c) = 0;
        *(undefined8 *)(lVar16 + 0x94) = 0;
        *(undefined1 *)(lVar16 + 0xec) = 0;
        *(undefined4 *)(lVar16 + 0x90) = 1;
        plVar9 = (long *)FUN_7101eb9cd0((long *)(lVar16 + 0x48));
        *(undefined1 *)(lVar8 + 0x70) = 0;
        return plVar9;
      }
LAB_710196d96c:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    plVar14 = *(long **)(*(long *)(param_1[0x1e] + 0x80) + 0x40);
    if (plVar14 != (long *)0x0) {
      lVar16 = *(long *)*plVar14;
      *(undefined4 *)((long *)*plVar14 + 2) = 0;
      plVar9 = *(long **)(lVar16 + 0x10);
      *plVar9 = lVar16;
      *(undefined4 *)(plVar9 + 1) = 0x48;
      lVar15 = *(long *)(lVar16 + 0x10);
      *(long *)(lVar16 + 0x10) = lVar15 + 0x10;
      lVar8 = *(long *)(*(long *)(lVar16 + 0x18) + 200);
      *(long *)(lVar16 + 0x10) = lVar15;
      if (lVar8 == lVar16) {
        lVar15 = *(long *)(*(long *)(lVar16 + 0x18) + 0x40);
        if (*(uint *)(lVar15 + 0xc) < 2) {
          plVar9 = (long *)(*(long *)(lVar15 + 0x18) +
                           ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar15 + 0xb) & 0x3f)) &
                           2) * 0x20);
          do {
            if (((int)plVar9[3] == 0x13) && (plVar12 = plVar9, plVar9[2] == 2)) break;
            piVar1 = (int *)((long)plVar9 + 0x1c);
            plVar9 = plVar9 + (long)*piVar1 * 4;
            plVar12 = &DAT_7104862960;
          } while (*piVar1 != 0);
        }
        else {
          plVar12 = (long *)(*(long *)(lVar15 + 0x10) + 0x10);
        }
        param_3 = "reset_flag_open_subwindow_wallpaper";
        uVar6 = FUN_71038f4d40(lVar16,plVar12,"reset_flag_open_subwindow_wallpaper");
      }
      else {
        FUN_71038f4b20(lVar16,"reset_flag_open_subwindow_wallpaper");
        uVar6 = FUN_71038f4fc0(lVar16,-2);
      }
      plVar9 = (long *)(ulong)uVar6;
      puVar17 = (undefined8 *)(*(long *)(lVar16 + 0x10) + -0x10);
      if ((puVar17 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar16 + 0x10) + -8) & 0xf) != 6)) {
        *(undefined8 **)(lVar16 + 0x10) = puVar17;
      }
      else {
        uVar6 = FUN_7103377130(plVar14,0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
        ;
        plVar9 = (long *)(ulong)uVar6;
      }
    }
  }
  plVar12 = param_1 + 0x1e;
  plVar14 = *(long **)(*(long *)(*plVar12 + 0x80) + 0x40);
  if (plVar14 != (long *)0x0) {
    lVar16 = *(long *)*plVar14;
    *(undefined4 *)((long *)*plVar14 + 2) = 0;
    plVar9 = *(long **)(lVar16 + 0x10);
    *plVar9 = lVar16;
    *(undefined4 *)(plVar9 + 1) = 0x48;
    lVar15 = *(long *)(lVar16 + 0x10);
    *(long *)(lVar16 + 0x10) = lVar15 + 0x10;
    lVar8 = *(long *)(*(long *)(lVar16 + 0x18) + 200);
    *(long *)(lVar16 + 0x10) = lVar15;
    if (lVar8 == lVar16) {
      lVar15 = *(long *)(*(long *)(lVar16 + 0x18) + 0x40);
      if (*(uint *)(lVar15 + 0xc) < 2) {
        plVar9 = (long *)(*(long *)(lVar15 + 0x18) +
                         ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar15 + 0xb) & 0x3f)) & 2
                         ) * 0x20);
        do {
          if (((int)plVar9[3] == 0x13) && (plVar11 = plVar9, plVar9[2] == 2)) break;
          piVar1 = (int *)((long)plVar9 + 0x1c);
          plVar9 = plVar9 + (long)*piVar1 * 4;
          plVar11 = &DAT_7104862960;
        } while (*piVar1 != 0);
      }
      else {
        plVar11 = (long *)(*(long *)(lVar15 + 0x10) + 0x10);
      }
      param_3 = "get_flag_open_subwindow_wallpaper";
      uVar6 = FUN_71038f4d40(lVar16,plVar11,"get_flag_open_subwindow_wallpaper");
    }
    else {
      FUN_71038f4b20(lVar16,"get_flag_open_subwindow_wallpaper");
      uVar6 = FUN_71038f4fc0(lVar16,-2);
    }
    plVar9 = (long *)(ulong)uVar6;
    puVar17 = (undefined8 *)(*(long *)(lVar16 + 0x10) + -0x10);
    if ((puVar17 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar16 + 0x10) + -8) & 0xf) != 6)) {
      *(undefined8 **)(lVar16 + 0x10) = puVar17;
    }
    else {
      uVar6 = FUN_7103377130(plVar14,1,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      plVar9 = (long *)(ulong)uVar6;
      if (uVar6 != 0) {
        uStack_34 = *(undefined4 *)(*(long *)(param_1[0x1e] + 0x80) + 0xfc);
        *(undefined4 *)(*(long *)(DAT_7105329d78 + 8) + 0x708) = uStack_34;
        local_38 = 1;
        plVar9 = (long *)FUN_7101ebb710(param_1[0x1f],&local_38,param_3,param_4,param_5,param_6,
                                        param_7,param_8);
        if (0x11 < *(int *)((long)param_1 + 0xc4)) {
          return plVar9;
        }
        uVar6 = *(int *)((long)param_1 + 0xc4) + 1;
        *(uint *)((long)param_1 + 0xc4) = uVar6;
        if (uVar6 < 0x13) {
          *(undefined4 *)((long)param_1 + (long)(int)uVar6 * 4 + 0x78) = 4;
          return plVar9;
        }
        goto LAB_710196d970;
      }
    }
  }
  if (*(int *)(*(long *)(*plVar12 + 0x80) + 0xe0) == 0) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_71053144d8), iVar7 != 0)) {
      FUN_7101764000();
      ppuVar13 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
      param_3 = (char *)ppuVar13;
    }
    plVar9 = (long *)(**(code **)(*(long *)*plVar12 + 0x20))();
    uVar6 = (uint)plVar9;
    if (uVar6 != 0xffffffff) {
      puVar17 = &DAT_7105339830;
      if ((((9 < uVar6) || (*(char *)(DAT_71053398b0 + 8) == '\0')) ||
          (puVar17 = (undefined8 *)(&DAT_7105339860)[(int)uVar6], puVar17 != (undefined8 *)0x0)) &&
         (uVar4 = *(int *)(puVar17[2] + 0x9c) - 1, uVar4 < 7)) {
        DAT_7105307b68._4_4_ = *(uint *)(&DAT_7104753de0 + (long)(int)uVar4 * 4);
      }
      DAT_7105307b68._0_4_ = uVar6;
      if (DAT_710593ba90 != (long *)0x0) {
        *(uint *)(*DAT_710593ba90 + 0x3ac) = DAT_7105307b68._4_4_;
      }
      if (DAT_710532f7f0 != 0) {
        plVar9 = (long *)FUN_7101afe3e0(*(long *)(*(long *)(*(long *)(DAT_710532f7f0 + 8) + 8) +
                                                 0x80),DAT_7105307b68._4_4_,(long ****)param_3,
                                        param_4,param_5,param_6,param_7,param_8);
      }
    }
    plVar14 = *(long **)(*(long *)(*plVar12 + 0x80) + 0x40);
    if (plVar14 != (long *)0x0) {
      lVar16 = *(long *)*plVar14;
      *(undefined4 *)((long *)*plVar14 + 2) = 0;
      plVar9 = *(long **)(lVar16 + 0x10);
      *plVar9 = lVar16;
      *(undefined4 *)(plVar9 + 1) = 0x48;
      lVar15 = *(long *)(lVar16 + 0x10);
      *(long *)(lVar16 + 0x10) = lVar15 + 0x10;
      lVar8 = *(long *)(*(long *)(lVar16 + 0x18) + 200);
      *(long *)(lVar16 + 0x10) = lVar15;
      if (lVar8 == lVar16) {
        lVar15 = *(long *)(*(long *)(lVar16 + 0x18) + 0x40);
        if (*(uint *)(lVar15 + 0xc) < 2) {
          plVar9 = (long *)(*(long *)(lVar15 + 0x18) +
                           ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar15 + 0xb) & 0x3f)) &
                           2) * 0x20);
          do {
            if (((int)plVar9[3] == 0x13) && (plVar11 = plVar9, plVar9[2] == 2)) break;
            piVar1 = (int *)((long)plVar9 + 0x1c);
            plVar9 = plVar9 + (long)*piVar1 * 4;
            plVar11 = &DAT_7104862960;
          } while (*piVar1 != 0);
        }
        else {
          plVar11 = (long *)(*(long *)(lVar15 + 0x10) + 0x10);
        }
        param_3 = "is_cancelled";
        uVar6 = FUN_71038f4d40(lVar16,plVar11,"is_cancelled");
      }
      else {
        FUN_71038f4b20(lVar16,"is_cancelled");
        uVar6 = FUN_71038f4fc0(lVar16,-2);
      }
      plVar9 = (long *)(ulong)uVar6;
      puVar17 = (undefined8 *)(*(long *)(lVar16 + 0x10) + -0x10);
      if ((puVar17 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar16 + 0x10) + -8) & 0xf) != 6)) {
        *(undefined8 **)(lVar16 + 0x10) = puVar17;
      }
      else {
        uVar6 = FUN_7103377130(plVar14,1,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
        ;
        lVar15 = DAT_710532f8d0;
        plVar9 = (long *)(ulong)uVar6;
        if (uVar6 != 0) {
          if (*(char *)((long)param_1 + 0x105) != '\0') {
            plVar9 = (long *)FUN_7103313c50(*(ulong **)(DAT_710532f8d0 + 8));
            lVar8 = *(long *)(lVar15 + 8);
            if (*(char *)(lVar8 + 0x22) != '\0') {
              plVar9 = (long *)FUN_71023eea60(0x3f800000,DAT_7105329f38,2,0);
              *(undefined1 *)(lVar8 + 0x22) = 0;
              lVar8 = *(long *)(lVar15 + 8);
            }
            if (*(char *)(lVar8 + 0x23) != '\0') {
              *(undefined1 *)(lVar8 + 0x23) = 0;
              plVar9 = (long *)FUN_71023eea60(0x3f800000,DAT_7105329f38,2,0);
            }
          }
          *(undefined1 *)((long)param_1 + 0x105) = 0;
          if (*(uint *)((long)param_1 + 0xc4) < 0x13) {
            *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0xc4) * 4 + 0x78) =
                 2;
            return plVar9;
          }
          goto LAB_710196d970;
        }
      }
    }
    plVar14 = *(long **)(*(long *)(*plVar12 + 0x80) + 0x40);
    if (plVar14 == (long *)0x0) {
      bVar5 = false;
    }
    else {
      lVar16 = *(long *)*plVar14;
      *(undefined4 *)((long *)*plVar14 + 2) = 0;
      plVar9 = *(long **)(lVar16 + 0x10);
      *plVar9 = lVar16;
      *(undefined4 *)(plVar9 + 1) = 0x48;
      lVar15 = *(long *)(lVar16 + 0x10);
      *(long *)(lVar16 + 0x10) = lVar15 + 0x10;
      lVar8 = *(long *)(*(long *)(lVar16 + 0x18) + 200);
      *(long *)(lVar16 + 0x10) = lVar15;
      if (lVar8 == lVar16) {
        lVar15 = *(long *)(*(long *)(lVar16 + 0x18) + 0x40);
        if (*(uint *)(lVar15 + 0xc) < 2) {
          plVar9 = (long *)(*(long *)(lVar15 + 0x18) +
                           ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar15 + 0xb) & 0x3f)) &
                           2) * 0x20);
          do {
            if (((int)plVar9[3] == 0x13) && (plVar12 = plVar9, plVar9[2] == 2)) break;
            piVar1 = (int *)((long)plVar9 + 0x1c);
            plVar9 = plVar9 + (long)*piVar1 * 4;
            plVar12 = &DAT_7104862960;
          } while (*piVar1 != 0);
        }
        else {
          plVar12 = (long *)(*(long *)(lVar15 + 0x10) + 0x10);
        }
        param_3 = "is_next_bgm_select";
        uVar6 = FUN_71038f4d40(lVar16,plVar12,"is_next_bgm_select");
      }
      else {
        FUN_71038f4b20(lVar16,"is_next_bgm_select");
        uVar6 = FUN_71038f4fc0(lVar16,-2);
      }
      plVar9 = (long *)(ulong)uVar6;
      puVar17 = (undefined8 *)(*(long *)(lVar16 + 0x10) + -0x10);
      if ((puVar17 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar16 + 0x10) + -8) & 0xf) != 6)) {
        bVar5 = false;
        *(undefined8 **)(lVar16 + 0x10) = puVar17;
      }
      else {
        uVar6 = FUN_7103377130(plVar14,1,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
        ;
        plVar9 = (long *)(ulong)uVar6;
        bVar5 = uVar6 != 0;
      }
    }
    lVar15 = *(long *)(param_1[0x1e] + 0x80);
    lVar8 = *(long *)(DAT_7105329d78 + 8);
    *(undefined4 *)(lVar8 + 0x704) = *(undefined4 *)(lVar15 + 0xf8);
    *(undefined4 *)(lVar8 + 0x708) = *(undefined4 *)(lVar15 + 0xfc);
    *(undefined8 *)(lVar8 + 0x710) = *(undefined8 *)(lVar15 + 0x100);
    if (bVar5) {
      *(undefined4 *)(param_1 + 0x20) = 3;
      if (0x12 < *(uint *)((long)param_1 + 0xc4)) {
LAB_710196d970:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0xc4) * 4 + 0x78) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x20) = 1;
      if (0x12 < *(uint *)((long)param_1 + 0xc4)) goto LAB_710196d970;
      *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0xc4) * 4 + 0x78) = 1;
    }
  }
  return plVar9;
}

