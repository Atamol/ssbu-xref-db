// addr:      7101ce0600
// offset:    0x1ce0600
// name:      FUN_7101ce0600
// mangled:   
// signature: undefined __cdecl FUN_7101ce0600(long param_1)


void FUN_7101ce0600(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  size_t __n;
  undefined **ppuVar6;
  bool bVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined **ppuVar11;
  ulong uVar12;
  int *piVar13;
  long ****pppplVar14;
  byte ****ppppbVar15;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined ***pppuVar16;
  int *piVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  uint uVar24;
  long *plVar25;
  long lVar26;
  long lVar27;
  undefined4 *puVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined4 local_160 [4];
  long local_150;
  undefined8 local_148;
  undefined1 local_140 [32];
  undefined4 local_120 [4];
  long local_110;
  undefined8 local_108;
  long ***local_e0;
  undefined8 uStack_d8;
  undefined2 local_d0;
  undefined4 local_cc;
  undefined2 local_c8;
  undefined8 local_88;
  ulong local_80;
  uint local_78;
  undefined4 uStack_74;
  undefined5 uStack_70;
  undefined **local_60;
  undefined **local_58;
  
  lVar27 = DAT_710532f8f8;
  local_cc = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_e0 = (long ***)0x0;
  uStack_d8 = 0;
  uStack_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  uStack_74 = 0;
  uVar9 = FUN_710334e560(*(long *)(DAT_710532f8f8 + 8),(int *)(param_1 + 0x288),&local_e0);
  if ((int)uVar9 != 3) {
    return;
  }
  if (*(ulong *)(param_1 + 0x290) == 0) {
    uVar8 = 0xffff;
  }
  else {
    uVar8 = FUN_710334c7d0(*(long *)(lVar27 + 8),*(ulong *)(param_1 + 0x290),
                           *(int *)(param_1 + 0x288));
  }
  lVar27 = *(long *)(DAT_7105325cc8 + 8);
  if (local_78 == 0) {
    uVar23 = FUN_7101cd3060(lVar27,(long)local_e0,1);
    if ((uVar23 & 1) == 0) {
      switch(uVar8) {
      case 0:
        *(int *)(lVar27 + 0x2690) = *(int *)(lVar27 + 0x2690) + 1;
        break;
      case 1:
        *(int *)(lVar27 + 0x2680) = *(int *)(lVar27 + 0x2680) + 1;
        break;
      case 2:
        *(int *)(lVar27 + 0x269c) = *(int *)(lVar27 + 0x269c) + 1;
        break;
      case 3:
        *(int *)(lVar27 + 0x26a8) = *(int *)(lVar27 + 0x26a8) + 1;
        break;
      case 4:
        *(int *)(lVar27 + 0x26b4) = *(int *)(lVar27 + 0x26b4) + 1;
      }
    }
    ppppbVar15 = (byte ****)0x0;
    FUN_7101cd2890(*(long *)(DAT_7105325cb8 + 8),(long)local_e0,3,0);
    lVar27 = *(long *)(DAT_710532f8f8 + 8);
    plVar10 = (long *)(lVar27 + 0x100);
    plVar18 = *(long **)(lVar27 + 0xf8);
joined_r0x007101ce0700:
    if (plVar18 != plVar10) {
      do {
        if ((*(long *)(lVar27 + 0x108) != 0) && (plVar20 = (long *)*plVar10, plVar20 != (long *)0x0)
           ) {
          iVar5 = (int)plVar18[4];
          plVar25 = plVar10;
          do {
            if (iVar5 <= (int)plVar20[4]) {
              plVar25 = plVar20;
            }
            plVar20 = (long *)plVar20[(int)plVar20[4] < iVar5];
          } while (plVar20 != (long *)0x0);
          if (((plVar25 != plVar10) && ((int)plVar25[4] <= iVar5)) && ((int)plVar18[5] == 2)) {
            plVar20 = plVar18 + 10;
            plVar25 = (long *)*plVar20;
            if (plVar25 != (long *)0x0) {
              uVar23 = *(ulong *)(param_1 + 0x290);
              plVar19 = plVar20;
              do {
                if ((ulong)plVar25[4] >= uVar23) {
                  plVar19 = plVar25;
                }
                plVar25 = (long *)plVar25[(ulong)plVar25[4] < uVar23];
              } while (plVar25 != (long *)0x0);
              if ((plVar19 != plVar20) && ((ulong)plVar19[4] <= uVar23)) {
                plVar19[9] = plVar19[9] + 1;
                *(undefined4 *)(plVar19 + 10) = 1;
              }
            }
          }
        }
        plVar20 = (long *)plVar18[1];
        if ((long *)plVar18[1] == (long *)0x0) {
          plVar20 = plVar18 + 2;
          bVar7 = *(long **)*plVar20 == plVar18;
          plVar18 = (long *)*plVar20;
          if (bVar7) goto joined_r0x007101ce0700;
          do {
            lVar21 = *plVar20;
            plVar20 = (long *)(lVar21 + 0x10);
            plVar18 = (long *)*plVar20;
          } while (*plVar18 != lVar21);
        }
        else {
          do {
            plVar18 = plVar20;
            plVar20 = (long *)*plVar18;
          } while ((long *)*plVar18 != (long *)0x0);
        }
        if (plVar18 == plVar10) break;
      } while( true );
    }
    local_80 = local_80 + 1;
    uVar24 = 1;
    goto LAB_7101ce0990;
  }
  if (*(uint *)(lVar27 + 0xb8) != 0) {
    if ((*(uint *)(lVar27 + 0xb8) & 0xfffffffe) == 2) {
      uVar24 = *(uint *)(lVar27 + 0x266c);
      if (*(uint *)(lVar27 + 0x2668) == uVar24) goto switchD_7101ce0f3c_default;
    }
    else {
      uVar24 = *(uint *)(lVar27 + 0x266c);
    }
    if (3 < uVar24) goto LAB_7101ce1040;
    lVar21 = lVar27 + (ulong)uVar24 * 0x968;
    uVar23 = *(ulong *)(lVar21 + 0xa28);
    if (uVar23 < 100) {
      uVar1 = uVar24 + 2;
      if (3 < uVar1) goto LAB_7101ce1040;
      lVar22 = lVar27 + (ulong)uVar1 * 0x968;
      uVar12 = *(ulong *)(lVar22 + 0xa28);
      if (uVar12 < 100) {
        piVar17 = (int *)(lVar27 + (ulong)uVar24 * 0x968 + 200);
        piVar3 = piVar17 + uVar23 * 6;
        if ((uVar23 * 0x18 != 0) &&
           ((*piVar17 != 1 || (*(long ****)(lVar27 + (ulong)uVar24 * 0x968 + 0xd0) != local_e0)))) {
          lVar26 = uVar23 * 0x18 + -0x18;
          do {
            piVar13 = piVar17;
            piVar17 = piVar3;
            if (lVar26 == 0) break;
            piVar17 = piVar13 + 6;
            lVar26 = lVar26 + -0x18;
          } while ((piVar13[6] != 1) || (*(long ****)(piVar13 + 8) != local_e0));
        }
        if (piVar3 == piVar17) {
          if (99 < uVar12) {
LAB_7101ce1040:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          lVar21 = lVar27 + (ulong)uVar1 * 0x968 + uVar12 * 0x18;
          plVar10 = (long *)(lVar22 + 0xa28);
          *(undefined4 *)(lVar21 + 200) = 1;
          *(long ****)(lVar21 + 0xd0) = local_e0;
          *(undefined4 *)(lVar21 + 0xd8) = 1;
          *plVar10 = *plVar10 + 1;
          uVar24 = *(uint *)(lVar27 + 0x266c);
          if (3 < uVar24) goto LAB_7101ce1040;
          if (*(ulong *)(lVar27 + (ulong)uVar24 * 0x968 + 0xa28) < 100) {
            if (3 < uVar24 + 2) goto LAB_7101ce1040;
            if (*(ulong *)(lVar27 + (ulong)(uVar24 + 2) * 0x968 + 0xa28) < 100)
            goto switchD_7101ce0f3c_default;
          }
          if ((~uVar24 & 1) != *(uint *)(lVar27 + 0x2668)) {
            *(uint *)(lVar27 + 0x266c) = ~uVar24 & 1;
          }
        }
        else {
          puVar2 = (ulong *)(lVar21 + 0xa28);
          __n = (long)piVar3 - (long)(piVar17 + 6);
          if (__n != 0) {
            memmove(piVar17,piVar17 + 6,__n);
            uVar23 = *puVar2;
          }
          *puVar2 = uVar23 - 1;
          switch(uVar8) {
          case 0:
            iVar5 = *(int *)(lVar27 + 0x2690) + -1;
            if (*(int *)(lVar27 + 0x2690) == 0 || iVar5 == 0) {
              iVar5 = 0;
            }
            *(int *)(lVar27 + 0x2690) = iVar5;
            break;
          case 1:
            iVar5 = *(int *)(lVar27 + 0x2680) + -1;
            if (*(int *)(lVar27 + 0x2680) == 0 || iVar5 == 0) {
              iVar5 = 0;
            }
            *(int *)(lVar27 + 0x2680) = iVar5;
            break;
          case 2:
            iVar5 = *(int *)(lVar27 + 0x269c) + -1;
            if (*(int *)(lVar27 + 0x269c) == 0 || iVar5 == 0) {
              iVar5 = 0;
            }
            *(int *)(lVar27 + 0x269c) = iVar5;
            break;
          case 3:
            iVar5 = *(int *)(lVar27 + 0x26a8) + -1;
            if (*(int *)(lVar27 + 0x26a8) == 0 || iVar5 == 0) {
              iVar5 = 0;
            }
            *(int *)(lVar27 + 0x26a8) = iVar5;
            break;
          case 4:
            iVar5 = *(int *)(lVar27 + 0x26b4) + -1;
            if (*(int *)(lVar27 + 0x26b4) == 0 || iVar5 == 0) {
              iVar5 = 0;
            }
            *(int *)(lVar27 + 0x26b4) = iVar5;
          }
        }
      }
    }
  }
switchD_7101ce0f3c_default:
  ppppbVar15 = (byte ****)0x0;
  FUN_7101cd2890(*(long *)(DAT_7105325cb8 + 8),(long)local_e0,4,0);
  lVar27 = *(long *)(DAT_710532f8f8 + 8);
  plVar10 = (long *)(lVar27 + 0x100);
  plVar18 = *(long **)(lVar27 + 0xf8);
  while (plVar18 != plVar10) {
    if ((*(long *)(lVar27 + 0x108) != 0) && (plVar20 = (long *)*plVar10, plVar20 != (long *)0x0)) {
      iVar5 = (int)plVar18[4];
      plVar25 = plVar10;
      do {
        if (iVar5 <= (int)plVar20[4]) {
          plVar25 = plVar20;
        }
        plVar20 = (long *)plVar20[(int)plVar20[4] < iVar5];
      } while (plVar20 != (long *)0x0);
      if (((plVar25 != plVar10) && ((int)plVar25[4] <= iVar5)) && ((int)plVar18[5] == 2)) {
        plVar20 = plVar18 + 10;
        plVar25 = (long *)*plVar20;
        if (plVar25 != (long *)0x0) {
          uVar23 = *(ulong *)(param_1 + 0x290);
          plVar19 = plVar20;
          do {
            if ((ulong)plVar25[4] >= uVar23) {
              plVar19 = plVar25;
            }
            plVar25 = (long *)plVar25[(ulong)plVar25[4] < uVar23];
          } while (plVar25 != (long *)0x0);
          if ((plVar19 != plVar20) && ((ulong)plVar19[4] <= uVar23)) {
            lVar21 = plVar19[9] + -1;
            if (plVar19[9] == 0 || lVar21 == 0) {
              lVar21 = 0;
            }
            plVar19[9] = lVar21;
            *(undefined4 *)(plVar19 + 10) = 0;
          }
        }
      }
    }
    plVar20 = (long *)plVar18[1];
    if ((long *)plVar18[1] == (long *)0x0) {
      plVar20 = plVar18 + 2;
      bVar7 = *(long **)*plVar20 != plVar18;
      plVar18 = (long *)*plVar20;
      if (bVar7) {
        do {
          lVar21 = *plVar20;
          plVar20 = (long *)(lVar21 + 0x10);
          plVar18 = (long *)*plVar20;
        } while (*plVar18 != lVar21);
      }
    }
    else {
      do {
        plVar18 = plVar20;
        plVar20 = (long *)*plVar18;
      } while ((long *)*plVar18 != (long *)0x0);
    }
  }
  bVar7 = local_80 == 0;
  local_80 = local_80 - 1;
  if (bVar7 || local_80 == 0) {
    local_80 = 0;
  }
  uVar24 = 0;
LAB_7101ce0990:
  lVar27 = param_1 + 0x250;
  pppplVar14 = &local_e0;
  local_78 = uVar24;
  FUN_7101ce1320(lVar27,(ulong)uVar24,pppplVar14,ppppbVar15,in_x4,in_x5,in_x6,in_x7);
  FUN_7103776910(&local_60,lVar27,(long ****)"set_fxui_like_00",pppplVar14,ppppbVar15,in_x4,in_x5,
                 in_x6,in_x7);
  ppuVar6 = local_58;
  if (uVar24 == 0) {
    FUN_710377aa20((long *)*local_58,0);
    lVar21 = (long)*local_58;
    if (lVar21 == 0) {
      plVar10 = (long *)0x0;
    }
    else {
      *(byte *)(lVar21 + 0x58) = *(byte *)(lVar21 + 0x58) & 0xfe;
      plVar10 = (long *)*local_58;
    }
    FUN_710377acb0(plVar10,1,pppplVar14,ppppbVar15,in_x4,in_x5,in_x6,in_x7);
  }
  else {
    plVar10 = FUN_710377aae0((long *)*local_58);
    if (plVar10 != (long *)0x0) {
      *(undefined1 *)((long)plVar10 + 0x13a) = 1;
    }
    lVar21 = (long)*local_58;
    if (lVar21 != 0) {
      *(byte *)(lVar21 + 0x58) = *(byte *)(lVar21 + 0x58) | 1;
    }
  }
  local_60 = &PTR_FUN_710523d9a8;
  local_58 = (undefined **)0x0;
  FUN_710392eb40((ulong)ppuVar6);
  puVar30 = *(undefined8 **)(param_1 + 0x310);
  puVar29 = *(undefined8 **)(param_1 + 0x318);
  if (uVar24 == 0) {
    while (puVar29 != puVar30) {
      puVar29 = puVar29 + -2;
      (**(code **)*puVar29)(puVar29);
    }
    *(undefined8 **)(param_1 + 0x318) = puVar30;
    FUN_7103776910(&local_60,lVar27,(long ****)"set_txt_num_like",pppplVar14,ppppbVar15,in_x4,in_x5,
                   in_x6,in_x7);
    uVar24 = (uint)local_80;
    if (0xf423e < local_80) {
      uVar24 = 999999;
    }
    ppppbVar15 = (byte ****)(ulong)uVar24;
    FUN_710377a280((long)&local_60,(byte *)"mnu_share_detail_good_n",1);
    ppuVar6 = local_58;
    local_60 = &PTR_FUN_710523d9a8;
    local_58 = (undefined **)0x0;
    if (ppuVar6 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar6);
    }
    FUN_7103778760(*(long *)(param_1 + 600),0x71042f8426);
    lVar27 = *(long *)(DAT_710532f8d0 + 8);
    if ((ulong)(*(long *)(lVar27 + 0x48) - *(long *)(lVar27 + 0x40) >> 3) < 4) {
      uVar23 = 0;
      cVar4 = *(char *)(lVar27 + 0x191);
    }
    else {
      uVar23 = *(ulong *)(*(long *)(lVar27 + 0x40) + 0x18);
      cVar4 = *(char *)(lVar27 + 0x191);
    }
    if ((cVar4 == '\0') &&
       (uVar12 = FUN_7103313f20(lVar27,uVar23,(long ****)&DAT_00000004,ppppbVar15,in_x4,in_x5,in_x6,
                                in_x7), (uVar12 & 1) != 0)) {
      FUN_71024076d0(local_160,uVar23);
      plVar10 = &local_150;
      puVar28 = local_160;
      if (((local_150 != 0) && (puVar28 = local_160, DAT_7106dd53a8 == '\x01')) &&
         (puVar28 = local_160, (int)local_148 == DAT_7106dd53ac)) {
        piVar17 = (int *)(local_150 + 0x38);
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar7) {
            *piVar17 = *piVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          puVar28 = local_160;
        } while (cVar4 != '\0');
      }
    }
    else {
      plVar10 = &local_150;
      puVar28 = local_160;
    }
  }
  else {
    if (puVar30 != puVar29) {
      FUN_710377b140((long)(puVar29 + -2));
      puVar30 = *(undefined8 **)(param_1 + 0x310);
      puVar29 = *(undefined8 **)(param_1 + 0x318);
      while (puVar29 != puVar30) {
        puVar29 = puVar29 + -2;
        (**(code **)*puVar29)(puVar29);
      }
    }
    plVar10 = (long *)(param_1 + 0x310);
    *(undefined8 **)(param_1 + 0x318) = puVar30;
    FUN_71037780e0(&local_60,lVar27,(long ****)"like_push",pppplVar14,ppppbVar15,in_x4,in_x5,in_x6,
                   in_x7);
    ppuVar6 = local_58;
    pppuVar16 = *(undefined ****)(param_1 + 0x318);
    if (pppuVar16 < *(undefined ****)(param_1 + 800)) {
      *pppuVar16 = &PTR_FUN_710523d9e8;
      pppuVar16[1] = (undefined **)0x0;
      if (pppuVar16 != &local_60) {
        local_58 = (undefined **)0x0;
        ppuVar11 = pppuVar16[1];
        pppuVar16[1] = ppuVar6;
        if (ppuVar11 != (undefined **)0x0) {
          FUN_710392eb40((ulong)ppuVar11);
        }
      }
      *(long *)(param_1 + 0x318) = *(long *)(param_1 + 0x318) + 0x10;
    }
    else {
      FUN_7101b09e60(plVar10,&local_60,pppplVar14,ppppbVar15,in_x4,in_x5,in_x6,in_x7);
    }
    ppuVar6 = local_58;
    local_60 = &PTR_FUN_710523d9e8;
    local_58 = (undefined **)0x0;
    if (ppuVar6 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar6);
    }
    FUN_71037780e0(&local_60,lVar27,(long ****)"like_push_count",pppplVar14,ppppbVar15,in_x4,in_x5,
                   in_x6,in_x7);
    ppuVar6 = local_58;
    pppuVar16 = *(undefined ****)(param_1 + 0x318);
    if (pppuVar16 < *(undefined ****)(param_1 + 800)) {
      *pppuVar16 = &PTR_FUN_710523d9e8;
      pppuVar16[1] = (undefined **)0x0;
      if (pppuVar16 != &local_60) {
        local_58 = (undefined **)0x0;
        ppuVar11 = pppuVar16[1];
        pppuVar16[1] = ppuVar6;
        if (ppuVar11 != (undefined **)0x0) {
          FUN_710392eb40((ulong)ppuVar11);
        }
      }
      *(long *)(param_1 + 0x318) = *(long *)(param_1 + 0x318) + 0x10;
    }
    else {
      FUN_7101b09e60(plVar10,&local_60,pppplVar14,ppppbVar15,in_x4,in_x5,in_x6,in_x7);
    }
    ppuVar6 = local_58;
    local_60 = &PTR_FUN_710523d9e8;
    local_58 = (undefined **)0x0;
    if (ppuVar6 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar6);
    }
    FUN_710377aee0(0x3f800000,*plVar10);
    if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
       (uVar23 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x147b458ea1,(long ****)&DAT_00000004,
                                ppppbVar15,in_x4,in_x5,in_x6,in_x7), (uVar23 & 1) != 0)) {
      FUN_71024076d0((undefined4 *)(local_140 + 0x20),0x147b458ea1);
      plVar10 = &local_110;
      puVar28 = (undefined4 *)(local_140 + 0x20);
      if (local_110 != 0) {
        if ((DAT_7106dd53a8 == '\x01') && ((int)local_108 == DAT_7106dd53ac)) {
          piVar17 = (int *)(local_110 + 0x38);
          do {
            puVar28 = (undefined4 *)(local_140 + 0x20);
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar7) {
              *piVar17 = *piVar17 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        else {
          puVar28 = (undefined4 *)(local_140 + 0x20);
        }
      }
    }
    else {
      plVar10 = &local_110;
      puVar28 = (undefined4 *)(local_140 + 0x20);
    }
  }
  *plVar10 = 0;
  *(undefined1 *)((long)puVar28 + 0x20) = 0;
  return;
}

