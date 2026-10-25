// addr:      7101cd6190
// offset:    0x1cd6190
// name:      FUN_7101cd6190
// mangled:   
// signature: undefined __cdecl FUN_7101cd6190(long param_1, uint param_2, int param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101cd6190(long param_1,uint param_2,int param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  undefined **ppuVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  byte ****ppppbVar6;
  char *pcVar7;
  long ****pppplVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  long ****pppplVar17;
  ulong uVar18;
  long *plVar19;
  int iVar20;
  long ***local_100;
  ulong local_f8;
  undefined **local_f0;
  ulong local_e8;
  undefined **local_e0;
  ulong local_d8;
  long ***local_d0;
  ulong local_c8;
  undefined **local_c0;
  ulong local_b8;
  undefined **local_b0;
  ulong local_a8;
  undefined **local_a0;
  ulong local_98;
  undefined **local_90;
  undefined **local_88;
  long local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  pppplVar8 = &local_100;
  pppplVar17 = (long ****)(ulong)param_2;
  if (*(long *)(param_1 + 0x260) == 0) {
    return;
  }
  FUN_7103771d60(&local_90,*(long *)(param_1 + 0x260),pppplVar17,param_4,param_5,param_6,param_7,
                 param_8);
  ppuVar2 = local_88;
  if (*local_88 == (undefined *)0x0) {
    ppppbVar6 = (byte ****)&DAT_7104867c2e;
  }
  else {
    ppppbVar6 = *(byte *****)((long)*local_88 + 0x88);
  }
  FUN_7103776640(&local_a0,param_1 + 0x170,ppppbVar6,pppplVar17,param_4,param_5,param_6,param_7,
                 param_8);
  local_90 = &PTR_FUN_710523d9c8;
  local_88 = (undefined **)0x0;
  if (ppuVar2 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar2);
  }
  if (param_2 == 0) {
    FUN_7103776640(&local_b0,(long)&local_a0,(byte ****)"set_parts_filter_00_old",pppplVar17,param_4
                   ,param_5,param_6,param_7,param_8);
    FUN_7101cd6f50(param_1,(long)&local_b0,pppplVar17,param_4,param_5,param_6,param_7,param_8);
    uVar18 = local_a8;
    local_b0 = &PTR_FUN_710523d988;
    local_a8 = 0;
    if (uVar18 != 0) {
      uVar5 = *(ulong *)(uVar18 + 0x18);
      *(undefined ***)(uVar18 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar18 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar18);
    }
    FUN_7103776640(&local_c0,(long)&local_a0,(byte ****)"set_parts_filter_01_old",pppplVar17,param_4
                   ,param_5,param_6,param_7,param_8);
    FUN_7101cd6f50(param_1,(long)&local_c0,pppplVar17,param_4,param_5,param_6,param_7,param_8);
    uVar18 = local_b8;
    local_c0 = &PTR_FUN_710523d988;
    local_b8 = 0;
    if (uVar18 != 0) {
      uVar5 = *(ulong *)(uVar18 + 0x18);
      *(undefined ***)(uVar18 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar18 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar18);
    }
    iVar20 = *(int *)(param_1 + 0x208);
    if (param_3 == 1) {
      lVar11 = *(long *)(DAT_710532f8d0 + 8);
      if ((ulong)(*(long *)(lVar11 + 0x48) - *(long *)(lVar11 + 0x40) >> 3) < 9) {
        uVar18 = 0;
        cVar1 = *(char *)(lVar11 + 0x191);
      }
      else {
        uVar18 = *(ulong *)(*(long *)(lVar11 + 0x40) + 0x40);
        cVar1 = *(char *)(lVar11 + 0x191);
      }
      if (cVar1 != '\0') {
LAB_7101cd6650:
        iVar12 = 1;
        goto LAB_7101cd6684;
      }
      pppplVar17 = (long ****)&DAT_00000004;
      uVar5 = FUN_7103313f20(lVar11,uVar18,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                             param_8);
      if ((uVar5 & 1) == 0) goto LAB_7101cd6650;
      FUN_71024076d0((undefined4 *)&local_90,uVar18);
      if (local_80 == 0) {
        iVar12 = 1;
      }
      else if ((DAT_7106dd53a8 == '\x01') && ((int)local_78 == DAT_7106dd53ac)) {
        piVar14 = (int *)(local_80 + 0x38);
        do {
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar4) {
            *piVar14 = *piVar14 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
          iVar12 = 1;
        } while (cVar1 != '\0');
      }
      else {
        iVar12 = 1;
      }
LAB_7101cd6688:
      local_88 = &PTR_FUN_7104f73d50;
      local_80 = 0;
      iVar20 = (iVar20 + iVar12) % 7;
      local_70 = 0;
    }
    else if (param_3 == 0) {
      lVar11 = *(long *)(DAT_710532f8d0 + 8);
      if ((ulong)(*(long *)(lVar11 + 0x48) - *(long *)(lVar11 + 0x40) >> 3) < 9) {
        uVar18 = 0;
        cVar1 = *(char *)(lVar11 + 0x191);
      }
      else {
        uVar18 = *(ulong *)(*(long *)(lVar11 + 0x40) + 0x40);
        cVar1 = *(char *)(lVar11 + 0x191);
      }
      if (cVar1 == '\0') {
        pppplVar17 = (long ****)&DAT_00000004;
        uVar5 = FUN_7103313f20(lVar11,uVar18,(long ****)&DAT_00000004,param_4,param_5,param_6,
                               param_7,param_8);
        if ((uVar5 & 1) != 0) {
          FUN_71024076d0((undefined4 *)&local_90,uVar18);
          if (local_80 == 0) {
            iVar12 = 6;
          }
          else if ((DAT_7106dd53a8 == '\x01') && ((int)local_78 == DAT_7106dd53ac)) {
            piVar14 = (int *)(local_80 + 0x38);
            do {
              cVar1 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
              if (bVar4) {
                *piVar14 = *piVar14 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
              iVar12 = 6;
            } while (cVar1 != '\0');
          }
          else {
            iVar12 = 6;
          }
          goto LAB_7101cd6688;
        }
      }
      iVar12 = 6;
LAB_7101cd6684:
      local_58 = 0;
      uStack_60 = 0;
      local_68 = 0xffffffffffffffff;
      local_78 = 0x87650000000000;
      local_90 = (undefined **)((ulong)local_90 & 0xffffffff00000000);
      goto LAB_7101cd6688;
    }
    *(int *)(param_1 + 0x208) = iVar20;
    goto switchD_7101cd626c_caseD_2;
  }
  FUN_7103776910(&local_d0,(long)&local_a0,(long ****)"set_txt_filter_00_old",pppplVar17,param_4,
                 param_5,param_6,param_7,param_8);
  pppplVar17 = &local_d0;
  FUN_7101cd7110(param_1,param_2,pppplVar17,param_4,param_5,param_6,param_7,param_8);
  uVar18 = local_c8;
  local_d0 = (long ***)&PTR_FUN_710523d9a8;
  local_c8 = 0;
  if (uVar18 != 0) {
    FUN_710392eb40(uVar18);
  }
  switch(param_2) {
  case 0:
    iVar20 = *(int *)(param_1 + 0x208);
    iVar12 = 7;
    break;
  case 1:
    iVar20 = *(int *)(param_1 + 0x20c);
    goto LAB_7101cd640c;
  default:
    goto switchD_7101cd626c_caseD_2;
  case 3:
    iVar12 = 4;
    if (*(int *)(param_1 + 0x208) == 2) {
      iVar20 = *(int *)(param_1 + 0x234);
    }
    else {
      iVar12 = 5;
      if (*(int *)(param_1 + 0x208) == 1) {
        iVar20 = *(int *)(param_1 + 0x21c);
      }
      else {
        iVar20 = 0;
      }
    }
    break;
  case 4:
    if (*(int *)(param_1 + 0x208) == 2) {
      iVar20 = *(int *)(param_1 + 0x238);
    }
    else if (*(int *)(param_1 + 0x208) == 1) {
      iVar20 = *(int *)(param_1 + 0x220);
    }
    else {
      iVar20 = 0;
    }
    goto LAB_7101cd6d3c;
  case 5:
    iVar20 = *(int *)(param_1 + 0x240);
    goto LAB_7101cd6d3c;
  case 6:
    iVar20 = *(int *)(param_1 + 0x244);
LAB_7101cd6d3c:
    iVar12 = 4;
    break;
  case 7:
    iVar20 = *(int *)(param_1 + 0x248);
    iVar12 = 2;
    break;
  case 8:
    iVar20 = *(int *)(param_1 + 0x24c);
LAB_7101cd640c:
    iVar12 = 3;
  }
  if (param_3 == 1) {
    lVar11 = *(long *)(DAT_710532f8d0 + 8);
    if ((ulong)(*(long *)(lVar11 + 0x48) - *(long *)(lVar11 + 0x40) >> 3) < 9) {
      uVar18 = 0;
      if (*(char *)(lVar11 + 0x191) == '\0') goto LAB_7101cd6454;
LAB_7101cd64c4:
      local_78 = 0x87650000000000;
      local_68 = 0xffffffffffffffff;
      uStack_60 = 0;
      local_90 = (undefined **)((ulong)local_90 & 0xffffffff00000000);
      local_58 = 0;
    }
    else {
      uVar18 = *(ulong *)(*(long *)(lVar11 + 0x40) + 0x40);
      if (*(char *)(lVar11 + 0x191) != '\0') goto LAB_7101cd64c4;
LAB_7101cd6454:
      pppplVar17 = (long ****)&DAT_00000004;
      uVar5 = FUN_7103313f20(lVar11,uVar18,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                             param_8);
      if ((uVar5 & 1) == 0) goto LAB_7101cd64c4;
      FUN_71024076d0((undefined4 *)&local_90,uVar18);
      if (((local_80 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_78 == DAT_7106dd53ac)) {
        piVar14 = (int *)(local_80 + 0x38);
        do {
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar4) {
            *piVar14 = *piVar14 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    iVar20 = iVar20 + 1;
LAB_7101cd6e34:
    local_70 = 0;
    local_80 = 0;
    local_88 = &PTR_FUN_7104f73d50;
    iVar10 = 0;
    if (iVar12 != 0) {
      iVar10 = iVar20 / iVar12;
    }
    iVar20 = iVar20 - iVar10 * iVar12;
  }
  else if (param_3 == 0) {
    lVar11 = *(long *)(DAT_710532f8d0 + 8);
    if ((ulong)(*(long *)(lVar11 + 0x48) - *(long *)(lVar11 + 0x40) >> 3) < 9) {
      uVar18 = 0;
      if (*(char *)(lVar11 + 0x191) == '\0') goto LAB_7101cd6d88;
LAB_7101cd6df8:
      local_78 = 0x87650000000000;
      local_68 = 0xffffffffffffffff;
      uStack_60 = 0;
      local_90 = (undefined **)((ulong)local_90 & 0xffffffff00000000);
      local_58 = 0;
    }
    else {
      uVar18 = *(ulong *)(*(long *)(lVar11 + 0x40) + 0x40);
      if (*(char *)(lVar11 + 0x191) != '\0') goto LAB_7101cd6df8;
LAB_7101cd6d88:
      pppplVar17 = (long ****)&DAT_00000004;
      uVar5 = FUN_7103313f20(lVar11,uVar18,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                             param_8);
      if ((uVar5 & 1) == 0) goto LAB_7101cd6df8;
      FUN_71024076d0((undefined4 *)&local_90,uVar18);
      if (((local_80 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_78 == DAT_7106dd53ac)) {
        piVar14 = (int *)(local_80 + 0x38);
        do {
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar4) {
            *piVar14 = *piVar14 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    iVar20 = iVar12 + iVar20 + -1;
    goto LAB_7101cd6e34;
  }
  switch(param_2) {
  case 0:
    *(int *)(param_1 + 0x208) = iVar20;
    break;
  case 1:
    *(int *)(param_1 + 0x20c) = iVar20;
    break;
  default:
switchD_7101cd626c_caseD_2:
    break;
  case 3:
    if (*(int *)(param_1 + 0x208) == 2) {
      *(int *)(param_1 + 0x234) = iVar20;
    }
    else {
      if (*(int *)(param_1 + 0x208) != 1) goto switchD_7101cd626c_caseD_2;
      *(int *)(param_1 + 0x21c) = iVar20;
    }
    break;
  case 4:
    if (*(int *)(param_1 + 0x208) == 2) {
      *(int *)(param_1 + 0x238) = iVar20;
    }
    else {
      if (*(int *)(param_1 + 0x208) != 1) goto switchD_7101cd626c_caseD_2;
      *(int *)(param_1 + 0x220) = iVar20;
    }
    break;
  case 5:
    *(int *)(param_1 + 0x240) = iVar20;
    break;
  case 6:
    *(int *)(param_1 + 0x244) = iVar20;
    break;
  case 7:
    *(int *)(param_1 + 0x248) = iVar20;
    break;
  case 8:
    *(int *)(param_1 + 0x24c) = iVar20;
  }
  if ((param_3 == 2) && (*(uint *)(*(long *)(param_1 + 0x268) + 0x254) != param_2))
  goto LAB_7101cd68c4;
  iVar20 = 0;
  iVar12 = -1;
  bVar4 = false;
  switch(param_2) {
  case 0:
    piVar14 = (int *)(param_1 + 0x208);
    iVar10 = 7;
    iVar12 = 6;
    break;
  case 1:
    piVar14 = (int *)(param_1 + 0x20c);
    goto LAB_7101cd6784;
  case 2:
    goto switchD_7101cd66fc_caseD_2;
  case 3:
    iVar20 = *(int *)(param_1 + 0x208);
    iVar10 = 4;
    if (iVar20 != 2) {
      iVar10 = 5;
    }
    iVar12 = iVar10 + -1;
    if (iVar20 == 1) {
      piVar14 = (int *)(param_1 + 0x21c);
    }
    else {
      if (iVar20 != 2) {
        iVar20 = 0;
        bVar4 = false;
        goto switchD_7101cd66fc_caseD_2;
      }
      piVar14 = (int *)(param_1 + 0x234);
    }
    break;
  case 4:
    if (*(int *)(param_1 + 0x208) == 2) {
      piVar14 = (int *)(param_1 + 0x238);
    }
    else {
      if (*(int *)(param_1 + 0x208) != 1) {
        iVar20 = 0;
        bVar4 = false;
        iVar12 = 3;
        goto switchD_7101cd66fc_caseD_2;
      }
      piVar14 = (int *)(param_1 + 0x220);
    }
    goto LAB_7101cd67b0;
  case 5:
    piVar14 = (int *)(param_1 + 0x240);
    goto LAB_7101cd67b0;
  case 6:
    piVar14 = (int *)(param_1 + 0x244);
LAB_7101cd67b0:
    iVar10 = 4;
    iVar12 = 3;
    break;
  case 7:
    piVar14 = (int *)(param_1 + 0x248);
    iVar10 = 2;
    iVar12 = 1;
    break;
  case 8:
    piVar14 = (int *)(param_1 + 0x24c);
LAB_7101cd6784:
    iVar10 = 3;
    iVar12 = 2;
    break;
  default:
    bVar4 = false;
    goto switchD_7101cd66fc_caseD_2;
  }
  iVar20 = *piVar14;
  bVar4 = 0 < iVar20 && iVar20 < iVar10;
switchD_7101cd66fc_caseD_2:
  lVar11 = *(long *)(*(long *)(param_1 + 0x268) + 0x1b8);
  if (lVar11 != 0) {
    lVar13 = *(long *)(param_1 + 0x268) + 0x1b8;
    lVar15 = lVar13;
    lVar16 = lVar11;
    do {
      bVar3 = *(int *)(lVar16 + 0x20) < 0;
      if (!bVar3) {
        lVar15 = lVar16;
      }
      lVar16 = *(long *)(lVar16 + (ulong)bVar3 * 8);
    } while (lVar16 != 0);
    if (((lVar15 != lVar13) && (*(int *)(lVar15 + 0x20) < 1)) &&
       (plVar19 = *(long **)(lVar15 + 0x28), plVar19 != (long *)0x0)) {
      (**(code **)(*plVar19 + 0x1f8))(plVar19,bVar4);
      pppplVar17 = (long ****)0x0;
      (**(code **)(*plVar19 + 0x388))(plVar19,bVar4 ^ 1);
      lVar13 = *(long *)(param_1 + 0x268) + 0x1b8;
      lVar11 = *(long *)(*(long *)(param_1 + 0x268) + 0x1b8);
    }
    lVar15 = lVar13;
    if (lVar11 != 0) {
      do {
        if (0 < *(int *)(lVar11 + 0x20)) {
          lVar15 = lVar11;
        }
        lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 1) * 8);
      } while (lVar11 != 0);
      if (((lVar15 != lVar13) && (*(int *)(lVar15 + 0x20) < 2)) &&
         (plVar19 = *(long **)(lVar15 + 0x28), plVar19 != (long *)0x0)) {
        (**(code **)(*plVar19 + 0x1f8))(plVar19,iVar20 < iVar12);
        pppplVar17 = (long ****)0x0;
        (**(code **)(*plVar19 + 0x388))(plVar19,iVar12 <= iVar20);
      }
    }
  }
LAB_7101cd68c4:
  if (param_2 == 0) {
    FUN_7103776640(&local_e0,(long)&local_a0,(byte ****)"set_parts_filter_00",pppplVar17,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7101cd6f50(param_1,(long)&local_e0,pppplVar17,param_4,param_5,param_6,param_7,param_8);
    uVar18 = local_d8;
    local_e0 = &PTR_FUN_710523d988;
    local_d8 = 0;
    pppplVar8 = pppplVar17;
    if (uVar18 != 0) {
      uVar5 = *(ulong *)(uVar18 + 0x18);
      *(undefined ***)(uVar18 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar18 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
        pppplVar8 = pppplVar17;
      }
      FUN_710392eb40(uVar18);
    }
    FUN_7103776640(&local_f0,(long)&local_a0,(byte ****)"set_parts_filter_01",pppplVar8,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7101cd6f50(param_1,(long)&local_f0,pppplVar8,param_4,param_5,param_6,param_7,param_8);
    uVar18 = local_e8;
    local_f0 = &PTR_FUN_710523d988;
    local_e8 = 0;
    if (uVar18 != 0) {
      uVar5 = *(ulong *)(uVar18 + 0x18);
      *(undefined ***)(uVar18 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar18 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar18);
    }
    switch(*(undefined4 *)(param_1 + 0x208)) {
    case 0:
      pcVar7 = "category_movie";
      break;
    case 1:
      pcVar7 = "category_replay";
      break;
    case 2:
      pcVar7 = "category_watch";
      break;
    case 3:
      pcVar7 = "category_mii";
      break;
    case 4:
      pcVar7 = "category_stage";
      break;
    case 5:
      pcVar7 = "category_owner";
      break;
    case 6:
      pcVar7 = "category_like";
      break;
    default:
      goto switchD_7101cd69d4_default;
    }
    FUN_7103778300(0x3f800000,local_98,(long)pcVar7);
switchD_7101cd69d4_default:
    if (param_3 == 0) goto LAB_7101cd6908;
LAB_7101cd6a50:
    uVar18 = local_98;
    if (param_3 == 1) {
      pcVar7 = "txt_move_l";
      goto LAB_7101cd6a64;
    }
    FUN_7103778760(local_98,0x710442255e);
  }
  else {
    FUN_7103776910(&local_100,(long)&local_a0,(long ****)"set_txt_filter_00",pppplVar17,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7101cd7110(param_1,param_2,&local_100,param_4,param_5,param_6,param_7,param_8);
    uVar18 = local_f8;
    local_100 = (long ***)&PTR_FUN_710523d9a8;
    local_f8 = 0;
    if (uVar18 == 0) goto switchD_7101cd69d4_default;
    FUN_710392eb40(uVar18);
    if (param_3 != 0) goto LAB_7101cd6a50;
LAB_7101cd6908:
    pcVar7 = "txt_move_r";
    uVar18 = local_98;
LAB_7101cd6a64:
    FUN_7103778300(0x3f800000,uVar18,(long)pcVar7);
  }
  if (param_2 != 0) goto LAB_7101cd6cb4;
  FUN_7101cd74e0(param_1,*(int *)(param_1 + 0x208),pppplVar8,param_4,param_5,param_6,param_7,param_8
                );
  iVar20 = *(int *)(param_1 + 0x208);
  switch(iVar20) {
  case 0:
    FUN_7101cd6190(param_1,1,2,param_4,param_5,param_6,param_7,param_8);
    iVar20 = *(int *)(param_1 + 0x208);
    break;
  case 3:
    goto switchD_7101cd6ab8_caseD_3;
  case 4:
    goto switchD_7101cd6ab8_caseD_4;
  case 5:
    goto switchD_7101cd6ab8_caseD_5;
  }
  switch(iVar20) {
  case 0:
    goto switchD_7101cd6aec_caseD_0;
  case 1:
  case 2:
    FUN_7101cd6190(param_1,2,2,param_4,param_5,param_6,param_7,param_8);
    iVar20 = *(int *)(param_1 + 0x208);
    break;
  case 3:
    goto switchD_7101cd6ab8_caseD_3;
  case 4:
    goto switchD_7101cd6ab8_caseD_4;
  case 5:
    goto switchD_7101cd6ab8_caseD_5;
  }
  switch(iVar20) {
  case 0:
    goto switchD_7101cd6aec_caseD_0;
  case 1:
  case 2:
    FUN_7101cd6190(param_1,3,2,param_4,param_5,param_6,param_7,param_8);
    iVar20 = *(int *)(param_1 + 0x208);
    break;
  case 3:
    goto switchD_7101cd6ab8_caseD_3;
  case 4:
    goto switchD_7101cd6ab8_caseD_4;
  case 5:
    goto switchD_7101cd6ab8_caseD_5;
  }
  switch(iVar20) {
  case 0:
    goto switchD_7101cd6aec_caseD_0;
  case 1:
  case 2:
    FUN_7101cd6190(param_1,4,2,param_4,param_5,param_6,param_7,param_8);
    iVar20 = *(int *)(param_1 + 0x208);
    break;
  case 3:
    goto switchD_7101cd6ab8_caseD_3;
  case 4:
    goto switchD_7101cd6ab8_caseD_4;
  case 5:
    goto switchD_7101cd6ab8_caseD_5;
  }
  switch(iVar20) {
  case 0:
    goto switchD_7101cd6aec_caseD_0;
  case 3:
switchD_7101cd6ab8_caseD_3:
    FUN_7101cd6190(param_1,5,2,param_4,param_5,param_6,param_7,param_8);
    iVar20 = *(int *)(param_1 + 0x208);
    break;
  case 4:
    goto switchD_7101cd6ab8_caseD_4;
  case 5:
    goto switchD_7101cd6ab8_caseD_5;
  }
  switch(iVar20) {
  case 0:
  case 3:
    goto switchD_7101cd6aec_caseD_0;
  case 4:
switchD_7101cd6ab8_caseD_4:
    FUN_7101cd6190(param_1,6,2,param_4,param_5,param_6,param_7,param_8);
    iVar20 = *(int *)(param_1 + 0x208);
    break;
  case 5:
    goto switchD_7101cd6ab8_caseD_5;
  }
  switch(iVar20) {
  case 0:
  case 3:
    goto switchD_7101cd6aec_caseD_0;
  case 4:
    FUN_7101cd6190(param_1,7,2,param_4,param_5,param_6,param_7,param_8);
    iVar20 = *(int *)(param_1 + 0x208);
    break;
  case 5:
    goto switchD_7101cd6ab8_caseD_5;
  }
  if ((1 < iVar20 - 3U) && (iVar20 != 0)) {
    if (iVar20 == 5) {
switchD_7101cd6ab8_caseD_5:
      FUN_7101cd6190(param_1,8,2,param_4,param_5,param_6,param_7,param_8);
      iVar20 = *(int *)(param_1 + 0x208);
    }
    if (iVar20 == 5) {
      FUN_7101cd6190(param_1,9,2,param_4,param_5,param_6,param_7,param_8);
    }
  }
switchD_7101cd6aec_caseD_0:
  uVar9 = 2;
  FUN_7101cd6190(param_1,10,2,param_4,param_5,param_6,param_7,param_8);
  bVar4 = FUN_7101cd5f40(param_1);
  FUN_7101cd60c0(param_1,bVar4,uVar9,param_4,param_5,param_6,param_7,param_8);
  if (param_3 == 0) {
    lVar11 = *(long *)(param_1 + 0x178);
    pcVar7 = "req_move_r";
  }
  else {
    if (param_3 != 1) {
      FUN_7103778760(*(long *)(param_1 + 0x178),0x710434a4ac);
      goto LAB_7101cd6cb4;
    }
    lVar11 = *(long *)(param_1 + 0x178);
    pcVar7 = "req_move_l";
  }
  FUN_7103778300(0x3f800000,lVar11,(long)pcVar7);
LAB_7101cd6cb4:
  local_a0 = &PTR_FUN_710523d988;
  local_98 = 0;
  if (uVar18 != 0) {
    uVar5 = *(ulong *)(uVar18 + 0x18);
    *(undefined ***)(uVar18 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar18 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar18);
  }
  return;
}

