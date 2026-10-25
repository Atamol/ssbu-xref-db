// addr:      7101caa0b0
// offset:    0x1caa0b0
// name:      FUN_7101caa0b0
// mangled:   
// signature: undefined __cdecl FUN_7101caa0b0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101caa0b0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  byte ****ppppbVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  char *pcVar8;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar9;
  long ****pppplVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  undefined4 uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  undefined4 local_f0 [2];
  undefined **local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0 [2];
  undefined **local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined **local_70;
  long *local_68;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  ulong local_48;
  
  if (*(int *)(param_1 + 0x16c) != 0) {
    if (*(char *)(*(long *)(param_1 + 0x2358) + 0x280) != '\0') {
      lVar19 = *(long *)(*(long *)(param_1 + 0x180) + 0x80);
      if (*(char *)(lVar19 + 0xc9) == '\0') {
        iVar5 = 4;
      }
      else {
        iVar5 = 0;
      }
      FUN_7103771be0((long *)(lVar19 + 0x2260),iVar5,0);
      *(undefined4 *)(lVar19 + 0x2270) = *(undefined4 *)(*(long *)(lVar19 + 0x2260) + 0x25c);
    }
    lVar19 = *(long *)(*(long *)(param_1 + 0x180) + 0x80);
    if (*(int *)(lVar19 + 0x2270) == 0) {
      *(undefined1 *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0x2320) + 0x600) + 0x4aa) = 0;
      *(undefined1 *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 9000) + 0x600) + 0x4aa) = 0;
      if (*(uint *)(param_1 + 0x164) < 0x13) {
        *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x164) * 4 + 0x118) = 2;
        if (0x11 < *(int *)(param_1 + 0x164)) {
          return;
        }
        uVar1 = *(int *)(param_1 + 0x164) + 1;
        *(uint *)(param_1 + 0x164) = uVar1;
        if (uVar1 < 0x13) {
          *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x118) = 6;
          if (0x11 < *(int *)(param_1 + 0x164)) {
            return;
          }
          uVar1 = *(int *)(param_1 + 0x164) + 1;
          *(uint *)(param_1 + 0x164) = uVar1;
          if (uVar1 < 0x13) {
            lVar19 = param_1 + (long)(int)uVar1 * 4;
            uVar14 = 4;
            goto LAB_7101caad1c;
          }
        }
      }
      goto LAB_7101caad38;
    }
    if (*(int *)(lVar19 + 0x2270) - 1U < 2) {
      FUN_7103771a80((long *)(param_1 + 0x2358),2,0);
      (**(code **)(**(long **)(param_1 + 0x2358) + 0x70))(*(long **)(param_1 + 0x2358),0);
      (**(code **)(**(long **)(param_1 + 0x2368) + 0x70))(*(long **)(param_1 + 0x2368),0);
      (**(code **)(**(long **)(param_1 + 0x2360) + 0x70))(*(long **)(param_1 + 0x2360),0);
      if (0x11 < *(int *)(param_1 + 0x164)) {
        return;
      }
      uVar1 = *(int *)(param_1 + 0x164) + 1;
      *(uint *)(param_1 + 0x164) = uVar1;
      if (0x12 < uVar1) goto LAB_7101caad38;
      lVar19 = param_1 + (long)(int)uVar1 * 4;
      uVar14 = 0xb;
      goto LAB_7101caad1c;
    }
    lVar12 = *(long *)(param_1 + 0x2358);
    iVar5 = *(int *)(lVar12 + 0x25c);
    if (iVar5 == 0) {
      if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar20 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x19b197f89a,
                                  (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8),
         (uVar20 & 1) != 0)) {
        FUN_71024076d0(local_b0,0x19b197f89a);
        if (((local_a0 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_98 == DAT_7106dd53ac)) {
          piVar13 = (int *)(local_a0 + 0x38);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar3) {
              *piVar13 = *piVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      else {
        local_98 = 0x87650000000000;
        local_88 = 0xffffffffffffffff;
        uStack_80 = 0;
        local_b0[0] = 0;
        local_78 = 0;
      }
      local_a8 = &PTR_FUN_7104f73d50;
      local_a0 = 0;
      local_90 = 0;
      *(undefined1 *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0x2320) + 0x600) + 0x4aa) = 0;
      if (0x11 < *(int *)(param_1 + 0x164)) {
        return;
      }
      uVar1 = *(int *)(param_1 + 0x164) + 1;
      *(uint *)(param_1 + 0x164) = uVar1;
      if (0x12 < uVar1) goto LAB_7101caad38;
      lVar19 = param_1 + (long)(int)uVar1 * 4;
      uVar14 = 8;
      goto LAB_7101caad1c;
    }
    if (iVar5 != 1) {
      iVar5 = *(int *)(lVar12 + 0x254);
      if (*(int *)(param_1 + 0x26a4) != iVar5) {
        if (iVar5 == 2) {
          (**(code **)(**(long **)(lVar19 + 0x2268) + 0x70))(*(long **)(lVar19 + 0x2268),1);
          if (*(int *)(lVar19 + 0x11b0) < 6) {
            iVar6 = -1;
            if (*(int *)(lVar19 + 0x11b0) - 1U < 5) {
              iVar6 = 1;
            }
          }
          else {
            iVar6 = 2;
          }
LAB_7101caac5c:
          FUN_7103771a80((long *)(lVar19 + 0x2268),iVar6,0);
        }
        else if (*(int *)(param_1 + 0x26a4) == 2) {
          (**(code **)(**(long **)(lVar19 + 0x2268) + 0x70))(*(long **)(lVar19 + 0x2268),0);
          if (*(char *)(lVar19 + 0x11b4) == '\0') {
            iVar6 = 3;
            goto LAB_7101caac5c;
          }
          if (*(int *)(*(long *)(lVar19 + 0x2268) + 0x254) == 3) {
            FUN_710376b960(*(long *)(lVar19 + 0x2268));
          }
        }
        *(int *)(param_1 + 0x26a4) = iVar5;
      }
      lVar19 = *(long *)(param_1 + 0x2368);
      if (*(int *)(lVar19 + 0x25c) != 3) {
        return;
      }
      plVar16 = *(long **)(lVar19 + 0x1c8);
      while (plVar16 != (long *)(lVar19 + 0x1d0)) {
        *(undefined4 *)(plVar16 + 5) = 0;
        plVar18 = (long *)plVar16[1];
        if ((long *)plVar16[1] == (long *)0x0) {
          plVar18 = plVar16 + 2;
          bVar3 = *(long **)*plVar18 != plVar16;
          plVar16 = (long *)*plVar18;
          if (bVar3) {
            do {
              lVar12 = *plVar18;
              plVar18 = (long *)(lVar12 + 0x10);
              plVar16 = (long *)*plVar18;
            } while (*plVar16 != lVar12);
          }
        }
        else {
          do {
            plVar16 = plVar18;
            plVar18 = (long *)*plVar16;
          } while ((long *)*plVar16 != (long *)0x0);
        }
      }
      *(undefined8 *)(lVar19 + 600) = 0xffffffffffffffff;
      *(undefined8 *)(lVar19 + 0x250) = 0xffffffffffffffff;
      *(undefined1 *)(lVar19 + 0x280) = 0;
      *(undefined4 *)(lVar19 + 0x282) = 0;
      if (0x11 < *(int *)(param_1 + 0x164)) {
        return;
      }
      uVar1 = *(int *)(param_1 + 0x164) + 1;
      *(uint *)(param_1 + 0x164) = uVar1;
      if (0x12 < uVar1) goto LAB_7101caad38;
      lVar19 = param_1 + (long)(int)uVar1 * 4;
      uVar14 = 10;
      goto LAB_7101caad1c;
    }
    lVar19 = *(long *)(DAT_710532f8d0 + 8);
    if ((ulong)(*(long *)(lVar19 + 0x48) - *(long *)(lVar19 + 0x40) >> 3) < 3) {
      uVar20 = 0;
      if (*(char *)(lVar19 + 0x191) == '\0') goto LAB_7101caa80c;
LAB_7101caa87c:
      local_d8 = 0x87650000000000;
      local_c8 = 0xffffffffffffffff;
      uStack_c0 = 0;
      local_f0[0] = 0;
      local_b8 = 0;
    }
    else {
      uVar20 = *(ulong *)(*(long *)(lVar19 + 0x40) + 0x10);
      if (*(char *)(lVar19 + 0x191) != '\0') goto LAB_7101caa87c;
LAB_7101caa80c:
      uVar4 = FUN_7103313f20(lVar19,uVar20,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                             param_8);
      if ((uVar4 & 1) == 0) goto LAB_7101caa87c;
      FUN_71024076d0(local_f0,uVar20);
      if (((local_e0 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_d8 == DAT_7106dd53ac)) {
        piVar13 = (int *)(local_e0 + 0x38);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar3) {
            *piVar13 = *piVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    local_e8 = &PTR_FUN_7104f73d50;
    local_e0 = 0;
    local_d0 = 0;
    *(undefined1 *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0x2320) + 0x600) + 0x4aa) = 0;
    if (0x11 < *(int *)(param_1 + 0x164)) {
      return;
    }
    uVar1 = *(int *)(param_1 + 0x164) + 1;
    *(uint *)(param_1 + 0x164) = uVar1;
    if (0x12 < uVar1) {
LAB_7101caad38:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar19 = param_1 + (long)(int)uVar1 * 4;
    uVar14 = 9;
LAB_7101caad1c:
    *(undefined4 *)(lVar19 + 0x118) = uVar14;
    return;
  }
  *(undefined1 *)(param_1 + 0x2370) = 1;
  plVar16 = (long *)(param_1 + 0x2358);
  lVar19 = *(long *)(param_1 + 0x2358);
  if (lVar19 != 0) {
    iVar5 = *(int *)(param_1 + 0x2374);
    if ((iVar5 == -1) && (*(int *)(lVar19 + 0x254) == 1)) {
      param_3 = (long ****)0x1;
      FUN_7103771a80(plVar16,0,1);
      lVar19 = *plVar16;
    }
    lVar12 = *(long *)(lVar19 + 0x1b8);
    if (lVar12 != 0) {
      lVar11 = lVar19 + 0x1b8;
      do {
        if (0 < *(int *)(lVar12 + 0x20)) {
          lVar11 = lVar12;
        }
        lVar12 = *(long *)(lVar12 + (ulong)(*(int *)(lVar12 + 0x20) < 1) * 8);
      } while (lVar12 != 0);
      if (((lVar11 != lVar19 + 0x1b8) && (*(int *)(lVar11 + 0x20) < 2)) &&
         (plVar18 = *(long **)(lVar11 + 0x28), plVar18 != (long *)0x0)) {
        (**(code **)(*plVar18 + 0x1f8))(plVar18,iVar5 != -1);
        param_3 = (long ****)0x0;
        (**(code **)(*plVar18 + 0x388))(plVar18,iVar5 == -1);
      }
    }
  }
  if (*(int *)(param_1 + 0x2374) == -1) {
    bVar3 = false;
    lVar19 = *plVar16;
  }
  else {
    bVar3 = *(int *)(param_1 + 0x237c) != 0;
    lVar19 = *plVar16;
  }
  if (lVar19 != 0) {
    if ((bVar3 == false) && (*(int *)(lVar19 + 0x254) == 2)) {
      param_3 = (long ****)0x1;
      FUN_7103771a80(plVar16,0,1);
      lVar19 = *plVar16;
    }
    lVar12 = *(long *)(lVar19 + 0x1b8);
    if (lVar12 != 0) {
      lVar11 = lVar19 + 0x1b8;
      do {
        if (1 < *(int *)(lVar12 + 0x20)) {
          lVar11 = lVar12;
        }
        lVar12 = *(long *)(lVar12 + (ulong)(*(int *)(lVar12 + 0x20) < 2) * 8);
      } while (lVar12 != 0);
      if (((lVar11 != lVar19 + 0x1b8) && (*(int *)(lVar11 + 0x20) < 3)) &&
         (plVar16 = *(long **)(lVar11 + 0x28), plVar16 != (long *)0x0)) {
        (**(code **)(*plVar16 + 0x1f8))(plVar16,bVar3);
        param_3 = (long ****)0x0;
        (**(code **)(*plVar16 + 0x388))(plVar16,bVar3 ^ 1);
      }
    }
    lVar19 = *(long *)(*(long *)(param_1 + 0x180) + 0x80);
    *(bool *)(lVar19 + 0x11ac) = bVar3;
    if (*(int *)(lVar19 + 0x11b0) < 6) {
      if (*(int *)(lVar19 + 0x11b0) - 1U < 5) {
        lVar12 = *(long *)(*(long *)(lVar19 + 0x2268) + 0x1b8);
        if (lVar12 != 0) {
          lVar11 = *(long *)(lVar19 + 0x2268) + 0x1b8;
          lVar15 = lVar11;
          lVar17 = lVar12;
          do {
            if (0 < *(int *)(lVar17 + 0x20)) {
              lVar15 = lVar17;
            }
            lVar17 = *(long *)(lVar17 + (ulong)(*(int *)(lVar17 + 0x20) < 1) * 8);
          } while (lVar17 != 0);
          if (((lVar15 != lVar11) && (*(int *)(lVar15 + 0x20) < 2)) &&
             (plVar16 = *(long **)(lVar15 + 0x28), plVar16 != (long *)0x0)) {
            (**(code **)(*plVar16 + 0x1f8))(plVar16,bVar3);
            param_3 = (long ****)0x0;
            (**(code **)(*plVar16 + 0x388))(plVar16,bVar3 ^ 1);
            lVar11 = *(long *)(lVar19 + 0x2268) + 0x1b8;
            lVar12 = *(long *)(*(long *)(lVar19 + 0x2268) + 0x1b8);
          }
          lVar19 = lVar11;
          if (lVar12 != 0) {
            do {
              if (0 < *(int *)(lVar12 + 0x20)) {
                lVar19 = lVar12;
              }
              lVar12 = *(long *)(lVar12 + (ulong)(*(int *)(lVar12 + 0x20) < 1) * 8);
            } while (lVar12 != 0);
            if ((lVar19 != lVar11) && (*(int *)(lVar19 + 0x20) < 2)) goto LAB_7101caa5a0;
          }
        }
      }
    }
    else {
      lVar12 = *(long *)(*(long *)(lVar19 + 0x2268) + 0x1b8);
      if (lVar12 != 0) {
        lVar11 = *(long *)(lVar19 + 0x2268) + 0x1b8;
        lVar15 = lVar11;
        lVar17 = lVar12;
        do {
          if (1 < *(int *)(lVar17 + 0x20)) {
            lVar15 = lVar17;
          }
          lVar17 = *(long *)(lVar17 + (ulong)(*(int *)(lVar17 + 0x20) < 2) * 8);
        } while (lVar17 != 0);
        if (((lVar15 != lVar11) && (*(int *)(lVar15 + 0x20) < 3)) &&
           (plVar16 = *(long **)(lVar15 + 0x28), plVar16 != (long *)0x0)) {
          (**(code **)(*plVar16 + 0x1f8))(plVar16,bVar3);
          param_3 = (long ****)0x0;
          (**(code **)(*plVar16 + 0x388))(plVar16,bVar3 ^ 1);
          lVar11 = *(long *)(lVar19 + 0x2268) + 0x1b8;
          lVar12 = *(long *)(*(long *)(lVar19 + 0x2268) + 0x1b8);
        }
        lVar19 = lVar11;
        if (lVar12 != 0) {
          do {
            if (1 < *(int *)(lVar12 + 0x20)) {
              lVar19 = lVar12;
            }
            lVar12 = *(long *)(lVar12 + (ulong)(*(int *)(lVar12 + 0x20) < 2) * 8);
          } while (lVar12 != 0);
          if ((lVar19 != lVar11) && (*(int *)(lVar19 + 0x20) < 3)) {
LAB_7101caa5a0:
            plVar16 = *(long **)(lVar19 + 0x28);
            if (plVar16 != (long *)0x0) {
              (**(code **)(*plVar16 + 0x208))(plVar16,bVar3);
              param_3 = (long ****)0x0;
              (**(code **)(*plVar16 + 0x388))(plVar16,bVar3 ^ 1);
            }
          }
        }
      }
    }
  }
  FUN_7103776390(&local_50,(undefined8 *)(**(long **)(param_1 + 0x2320) + 8),param_3,param_4,param_5
                 ,param_6,param_7,param_8);
  pppplVar10 = (long ****)0x0;
  FUN_7103771d60(&local_70,*(long *)(param_1 + 0x2358),(long ****)0x0,param_4,param_5,param_6,
                 param_7,param_8);
  plVar16 = local_68;
  if (*local_68 == 0) {
    ppppbVar7 = (byte ****)&DAT_7104867c2e;
  }
  else {
    ppppbVar7 = *(byte *****)(*local_68 + 0x88);
  }
  FUN_7103776640(&local_60,(long)&local_50,ppppbVar7,pppplVar10,param_4,param_5,param_6,param_7,
                 param_8);
  local_70 = &PTR_FUN_710523d9c8;
  local_68 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar16);
  }
  uVar20 = local_58;
  if (*(int *)(param_1 + 0x2374) == -1) {
    FUN_7103778300(0x3f800000,local_58,0x7104433286);
    uVar9 = extraout_x1_00;
    goto LAB_7101caa950;
  }
  FUN_7103778300(0x3f800000,local_58,0x71043cf594);
  FUN_7103776910(&local_70,(long)&local_60,(long ****)"set_txt_00",pppplVar10,param_4,param_5,
                 param_6,param_7,param_8);
  uVar9 = extraout_x1;
  switch(*(undefined4 *)(param_1 + 0x2374)) {
  case 0:
    pcVar8 = "mnu_online_report_private_info";
    break;
  case 1:
    pcVar8 = "mnu_online_report_harassment_abuse";
    break;
  case 2:
    pcVar8 = "mnu_online_report_violence";
    break;
  case 3:
    pcVar8 = "mnu_online_report_against_moral";
    break;
  case 4:
    pcVar8 = "mnu_online_report_indecency";
    break;
  case 5:
    pcVar8 = "mnu_online_report_commercially";
    break;
  case 6:
    pcVar8 = "mnu_online_report_another_inappropriate";
    break;
  default:
    goto switchD_7101caa68c_default;
  }
  FUN_710377a120((long)&local_70,pcVar8,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  uVar9 = extraout_x1_01;
switchD_7101caa68c_default:
  plVar16 = local_68;
  local_70 = &PTR_FUN_710523d9a8;
  local_68 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar16);
    uVar9 = extraout_x1_02;
  }
LAB_7101caa950:
  FUN_7101cabeb0(param_1,uVar9,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  FUN_7103771d60(&local_70,*(long *)(param_1 + 0x2360),(long ****)0x0,param_4,param_5,param_6,
                 param_7,param_8);
  plVar16 = local_68;
  plVar18 = (long *)*local_68;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x2f0))(plVar18,*(int *)(param_1 + 0x2374) == 0,0);
  }
  local_70 = &PTR_FUN_710523d9c8;
  local_68 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar16);
  }
  FUN_7103771d60(&local_70,*(long *)(param_1 + 0x2360),(long ****)0x1,param_4,param_5,param_6,
                 param_7,param_8);
  plVar16 = local_68;
  plVar18 = (long *)*local_68;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x2f0))(plVar18,*(int *)(param_1 + 0x2374) == 1,0);
  }
  local_70 = &PTR_FUN_710523d9c8;
  local_68 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar16);
  }
  FUN_7103771d60(&local_70,*(long *)(param_1 + 0x2360),(long ****)0x2,param_4,param_5,param_6,
                 param_7,param_8);
  plVar16 = local_68;
  plVar18 = (long *)*local_68;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x2f0))(plVar18,*(int *)(param_1 + 0x2374) == 2,0);
  }
  local_70 = &PTR_FUN_710523d9c8;
  local_68 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar16);
  }
  FUN_7103771d60(&local_70,*(long *)(param_1 + 0x2360),(long ****)0x3,param_4,param_5,param_6,
                 param_7,param_8);
  plVar16 = local_68;
  plVar18 = (long *)*local_68;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x2f0))(plVar18,*(int *)(param_1 + 0x2374) == 3,0);
  }
  local_70 = &PTR_FUN_710523d9c8;
  local_68 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar16);
  }
  FUN_7103771d60(&local_70,*(long *)(param_1 + 0x2360),(long ****)&DAT_00000004,param_4,param_5,
                 param_6,param_7,param_8);
  plVar16 = local_68;
  plVar18 = (long *)*local_68;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x2f0))(plVar18,*(int *)(param_1 + 0x2374) == 4,0);
  }
  local_70 = &PTR_FUN_710523d9c8;
  local_68 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar16);
  }
  FUN_7103771d60(&local_70,*(long *)(param_1 + 0x2360),(long ****)0x5,param_4,param_5,param_6,
                 param_7,param_8);
  plVar16 = local_68;
  plVar18 = (long *)*local_68;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x2f0))(plVar18,*(int *)(param_1 + 0x2374) == 5,0);
  }
  local_70 = &PTR_FUN_710523d9c8;
  local_68 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar16);
  }
  FUN_7103771d60(&local_70,*(long *)(param_1 + 0x2360),(long ****)0x6,param_4,param_5,param_6,
                 param_7,param_8);
  plVar16 = local_68;
  plVar18 = (long *)*local_68;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x2f0))(plVar18,*(int *)(param_1 + 0x2374) == 6,0);
  }
  local_70 = &PTR_FUN_710523d9c8;
  local_68 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar16);
  }
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
  if (uVar20 != 0) {
    uVar4 = *(ulong *)(uVar20 + 0x18);
    *(undefined ***)(uVar20 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar20 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar20);
  }
  uVar20 = local_48;
  local_50 = &PTR_FUN_710523d988;
  local_48 = 0;
  if (uVar20 != 0) {
    uVar4 = *(ulong *)(uVar20 + 0x18);
    *(undefined ***)(uVar20 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar20 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar20);
  }
  *(undefined1 *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0x2320) + 0x600) + 0x4aa) = 1;
  (**(code **)(**(long **)(param_1 + 0x2358) + 0x70))(*(long **)(param_1 + 0x2358),1);
                    /* WARNING: Could not recover jumptable at 0x007101caabfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x2368) + 0x70))(*(long **)(param_1 + 0x2368),1);
  return;
}

