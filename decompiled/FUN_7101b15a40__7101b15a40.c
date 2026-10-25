// addr:      7101b15a40
// offset:    0x1b15a40
// name:      FUN_7101b15a40
// mangled:   
// signature: undefined __cdecl FUN_7101b15a40(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b15a40(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  byte ****ppppbVar11;
  char *pcVar12;
  long ****pppplVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  int *piVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined4 local_b0 [2];
  undefined **local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined **local_70;
  ulong local_68;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  long *local_48;
  
  if ((*(int *)(param_1 + 0x148) != 0) &&
     (iVar5 = *(int *)(param_1 + 0x148) + -1, *(int *)(param_1 + 0x148) = iVar5, iVar5 == 0)) {
    FUN_7103776640(&local_50,param_1 + 0xd8,(byte ****)"set_parts_paramset",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103776640(&local_60,(long)&local_50,(byte ****)"set_parts_param_01",param_3,param_4,param_5
                   ,param_6,param_7,param_8);
    FUN_7103776640(&local_70,(long)&local_60,(byte ****)"set_parts_text_scroll",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    uVar8 = local_68;
    FUN_7103778950(*(long *)(local_68 + 8));
    if (*(long *)(uVar8 + 8) != 0) {
      puVar20 = *(undefined8 **)(*(long *)(uVar8 + 8) + 0x78);
      if (((DAT_710593ba40 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_710593ba40), iVar5 != 0))
      {
        if (((DAT_710593ba48 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(&DAT_710593ba48), iVar5 != 0)) {
          DAT_710593ba50 = 0;
          __cxa_guard_release(&DAT_710593ba48);
        }
        DAT_710593ba58 = &DAT_710593ba50;
        __cxa_guard_release(&DAT_710593ba40);
      }
      if (puVar20 != (undefined8 *)0x0) {
        for (puVar6 = (undefined8 *)(**(code **)*puVar20)(puVar20); puVar6 != (undefined8 *)0x0;
            puVar6 = (undefined8 *)*puVar6) {
          if ((undefined8 **)puVar6 == &DAT_710593ba58) {
            lVar9 = puVar20[3];
            *(undefined4 *)(puVar20 + 0xb) = *(undefined4 *)((long)puVar20 + 0x54);
            if (lVar9 != 0) {
              *(undefined4 *)(lVar9 + 0x30) = *(undefined4 *)((long)puVar20 + 0x54);
              *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
            }
            lVar9 = puVar20[4];
            if (lVar9 != 0) {
              *(undefined4 *)(lVar9 + 0x30) = *(undefined4 *)(puVar20 + 0xb);
              *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
            }
            if ((long *)puVar20[5] != (long *)0x0) {
              (**(code **)(*(long *)puVar20[5] + 0x180))(0);
            }
            plVar10 = (long *)puVar20[6];
            if (plVar10 != (long *)0x0) {
              if (*(char *)((long)puVar20 + 99) == '\0') {
                (**(code **)(*plVar10 + 0x180))(0);
              }
              else {
                (**(code **)(*plVar10 + 400))();
              }
            }
            *(undefined2 *)((long)puVar20 + 100) = 1;
            break;
          }
        }
      }
    }
    uVar8 = local_68;
    if (*(long *)(local_68 + 8) != 0) {
      puVar20 = *(undefined8 **)(*(long *)(local_68 + 8) + 0x78);
      if (((DAT_710593ba40 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_710593ba40), iVar5 != 0))
      {
        if (((DAT_710593ba48 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(&DAT_710593ba48), iVar5 != 0)) {
          DAT_710593ba50 = 0;
          __cxa_guard_release(&DAT_710593ba48);
        }
        DAT_710593ba58 = &DAT_710593ba50;
        __cxa_guard_release(&DAT_710593ba40);
      }
      uVar8 = local_68;
      if (puVar20 != (undefined8 *)0x0) {
        for (puVar6 = (undefined8 *)(**(code **)*puVar20)(puVar20); uVar8 = local_68,
            puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)*puVar6) {
          if ((undefined8 **)puVar6 == &DAT_710593ba58) {
            *(undefined1 *)(puVar20 + 0xc) = 1;
            break;
          }
        }
      }
    }
    local_70 = &PTR_FUN_710523d988;
    local_68 = 0;
    if (uVar8 != 0) {
      uVar7 = *(ulong *)(uVar8 + 0x18);
      *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar8 + 0x18) = 0;
      if (uVar7 != 0) {
        FUN_710392eb40(uVar7);
      }
      FUN_710392eb40(uVar8);
    }
    uVar8 = local_58;
    local_60 = &PTR_FUN_710523d988;
    local_58 = 0;
    if (uVar8 != 0) {
      uVar7 = *(ulong *)(uVar8 + 0x18);
      *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar8 + 0x18) = 0;
      if (uVar7 != 0) {
        FUN_710392eb40(uVar7);
      }
      FUN_710392eb40(uVar8);
    }
    plVar10 = local_48;
    local_50 = &PTR_FUN_710523d988;
    local_48 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      uVar8 = plVar10[3];
      plVar10[2] = (long)&PTR_FUN_710523d9a8;
      plVar10[3] = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40((ulong)plVar10);
    }
  }
  if (*(char *)(param_1 + 0x11c) != '\0') {
    lVar9 = *(long *)(*(long *)(param_1 + 0xe0) + 8);
    if (((lVar9 == 0) ||
        (plVar10 = (long *)FUN_71037964b0(lVar9,0x710432a70e), plVar10 == (long *)0x0)) ||
       (uVar8 = (**(code **)(*plVar10 + 0x138))(), (uVar8 & 1) != 0)) {
      *(undefined4 *)(param_1 + 0x13c) = 1;
    }
    iVar5 = *(int *)(param_1 + 0x13c);
    goto joined_r0x007101b16080;
  }
  lVar9 = *(long *)(param_1 + 0x140);
  plVar10 = (long *)(param_1 + 0x140);
  if (*(char *)(lVar9 + 0x280) != '\0') {
    param_3 = (long ****)0x0;
    FUN_7103771be0(plVar10,0,0);
    lVar9 = *plVar10;
  }
  iVar5 = *(int *)(lVar9 + 0x25c);
  FUN_710376b960(lVar9);
  lVar9 = DAT_710532f8d0;
  if (iVar5 == 2) {
    if (*(int *)(param_1 + 0x138) != 0) {
      uVar15 = 4;
      goto LAB_7101b15d24;
    }
    uVar17 = *(ulong *)(param_1 + 0x130);
    bVar3 = (uVar17 & 0xffffffffff) != 0;
    bVar4 = (uVar17 & 0xff00000000000000) == 0xd900000000000000;
    uVar8 = *(ulong *)(param_1 + 0x120);
    uVar7 = uVar8 & 0xffffffffff;
    if (((bVar4 && bVar3) && ((uVar8 & 0xff00000000000000) == 0xd900000000000000)) && (uVar7 != 0))
    {
      if (((uVar8 ^ uVar17) & 0xffffffffff) != 0) {
LAB_7101b15eac:
        uVar19 = **(ulong **)(DAT_710532f8d0 + 8);
        if (((uVar19 & 0xff00000000000000) == 0xd900000000000000 && (uVar19 & 0xffffffffff) != 0) &&
            (bVar4 && bVar3)) {
          bVar2 = (uVar8 & 0xff00000000000000) == 0xd900000000000000 && uVar7 != 0;
          if (((uVar17 ^ uVar19) & 0xffffffffff) == 0) {
LAB_7101b16144:
            if (bVar2) {
              FUN_71033146e0(DAT_710532f8d0,uVar8,param_3,param_4,param_5,param_6,param_7,param_8);
            }
            else {
              FUN_7103313da0(*(ulong **)(DAT_710532f8d0 + 8),0,param_3,param_4,param_5,param_6,
                             param_7,param_8);
            }
            uVar14 = 2;
            FUN_7103771d60(&local_50,*(long *)(param_1 + 0x140),(long ****)0x2,param_4,param_5,
                           param_6,param_7,param_8);
            plVar10 = local_48;
            if (*local_48 == 0) {
              ppppbVar11 = (byte ****)&DAT_7104867c2e;
            }
            else {
              ppppbVar11 = *(byte *****)(*local_48 + 0x88);
            }
            FUN_7103776640(&local_70,param_1 + 0xd8,ppppbVar11,uVar14,param_4,param_5,param_6,
                           param_7,param_8);
            FUN_7103776910(&local_60,(long)&local_70,(long ****)"set_txt_help",uVar14,param_4,
                           param_5,param_6,param_7,param_8);
            uVar8 = local_68;
            local_70 = &PTR_FUN_710523d988;
            local_68 = 0;
            if (uVar8 != 0) {
              uVar7 = *(ulong *)(uVar8 + 0x18);
              *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
              *(undefined8 *)(uVar8 + 0x18) = 0;
              if (uVar7 != 0) {
                FUN_710392eb40(uVar7);
              }
              FUN_710392eb40(uVar8);
            }
            pcVar12 = "mnu_insert_popup_sound_try";
            goto LAB_7101b16298;
          }
        }
        else {
          bVar2 = (uVar8 & 0xff00000000000000) == 0xd900000000000000 && uVar7 != 0;
          if ((bVar4 && bVar3) ==
              ((uVar19 & 0xff00000000000000) == 0xd900000000000000 && (uVar19 & 0xffffffffff) != 0))
          goto LAB_7101b16144;
        }
        if (!bVar2) {
          if (*(char *)(param_1 + 0x14c) == '\0') {
            *(ulong *)(param_1 + 0x120) = uVar19;
            uVar8 = uVar19;
            uVar7 = uVar19 & 0xffffffffff;
          }
          uVar18 = *(ulong *)(param_1 + 0x128);
          uVar19 = uVar18 & 0xffffffffff;
          if (((uVar8 & 0xff00000000000000) == 0xd900000000000000) && (uVar7 != 0)) {
            if (((uVar18 & 0xff00000000000000) == 0xd900000000000000) && (uVar19 != 0)) {
              uVar19 = (uVar18 ^ uVar8) & 0xffffffffff;
joined_r0x007101b161f8:
              if (uVar19 == 0) goto LAB_7101b161fc;
            }
          }
          else {
            if ((uVar18 & 0xff00000000000000) == 0xd900000000000000) goto joined_r0x007101b161f8;
LAB_7101b161fc:
            *(undefined8 *)(param_1 + 0x120) = 0xd9ffff0000000000;
          }
        }
        FUN_71033145d0(lVar9,uVar17,1,param_4,param_5,param_6,param_7,param_8);
        uVar14 = 2;
        FUN_7103771d60(&local_50,*(long *)(param_1 + 0x140),(long ****)0x2,param_4,param_5,param_6,
                       param_7,param_8);
        plVar10 = local_48;
        if (*local_48 == 0) {
          ppppbVar11 = (byte ****)&DAT_7104867c2e;
        }
        else {
          ppppbVar11 = *(byte *****)(*local_48 + 0x88);
        }
        FUN_7103776640(&local_70,param_1 + 0xd8,ppppbVar11,uVar14,param_4,param_5,param_6,param_7,
                       param_8);
        FUN_7103776910(&local_60,(long)&local_70,(long ****)"set_txt_help",uVar14,param_4,param_5,
                       param_6,param_7,param_8);
        uVar8 = local_68;
        local_70 = &PTR_FUN_710523d988;
        local_68 = 0;
        if (uVar8 != 0) {
          uVar7 = *(ulong *)(uVar8 + 0x18);
          *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar8 + 0x18) = 0;
          if (uVar7 != 0) {
            FUN_710392eb40(uVar7);
          }
          FUN_710392eb40(uVar8);
        }
        pcVar12 = "mnu_insert_popup_sound_stop";
LAB_7101b16298:
        FUN_710377a120((long)&local_60,pcVar12,uVar14,param_4,param_5,param_6,param_7,param_8);
        uVar8 = local_58;
        local_60 = &PTR_FUN_710523d9a8;
        local_58 = 0;
        if (uVar8 != 0) {
          FUN_710392eb40(uVar8);
        }
        local_50 = &PTR_FUN_710523d9c8;
        local_48 = (long *)0x0;
        if (plVar10 == (long *)0x0) {
          return;
        }
        FUN_710392eb40((ulong)plVar10);
        return;
      }
    }
    else if ((uVar7 != 0 && (uVar8 & 0xff00000000000000) == 0xd900000000000000) !=
             ((uVar17 & 0xff00000000000000) == 0xd900000000000000 && (uVar17 & 0xffffffffff) != 0))
    goto LAB_7101b15eac;
  }
  else {
    if (iVar5 == 1) {
      uVar15 = 3;
    }
    else {
      if (iVar5 != 0) {
        return;
      }
      uVar15 = 1;
    }
LAB_7101b15d24:
    *(undefined4 *)(param_1 + 0x13c) = uVar15;
  }
  uVar7 = **(ulong **)(DAT_710532f8d0 + 8);
  uVar17 = *(ulong *)(param_1 + 0x130);
  uVar8 = uVar17 & 0xffffffffff;
  if (((uVar7 & 0xff00000000000000) == 0xd900000000000000) && ((uVar7 & 0xffffffffff) != 0)) {
    if (((uVar17 & 0xff00000000000000) == 0xd900000000000000) && (uVar8 != 0)) {
      uVar8 = (uVar17 ^ uVar7) & 0xffffffffff;
joined_r0x007101b15d84:
      if (uVar8 == 0) goto LAB_7101b15d88;
    }
  }
  else {
    if ((uVar17 & 0xff00000000000000) == 0xd900000000000000) goto joined_r0x007101b15d84;
LAB_7101b15d88:
    pppplVar13 = (long ****)0x2;
    FUN_7103771d60(&local_50,*plVar10,(long ****)0x2,param_4,param_5,param_6,param_7,param_8);
    plVar10 = local_48;
    if (((((long *)*local_48 == (long *)0x0) ||
         (uVar8 = (**(code **)(*(long *)*local_48 + 0x210))(), (uVar8 & 1) != 0)) &&
        (uVar8 = *(ulong *)(param_1 + 0x130), (uVar8 & 0xff00000000000000) == 0xd900000000000000))
       && ((uVar8 & 0xffffffffff) != 0)) {
      uVar7 = *(ulong *)(param_1 + 0x120);
      if (((uVar7 & 0xff00000000000000) == 0xd900000000000000) && ((uVar7 & 0xffffffffff) != 0)) {
        local_50 = &PTR_FUN_710523d9c8;
        local_48 = (long *)0x0;
        if (plVar10 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar10);
        }
        if (((uVar7 ^ uVar8) & 0xffffffffff) == 0) goto LAB_7101b15fa0;
      }
      else {
        local_50 = &PTR_FUN_710523d9c8;
        local_48 = (long *)0x0;
        if (plVar10 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar10);
        }
      }
      uVar8 = *(ulong *)(param_1 + 0x120);
      if (((uVar8 & 0xff00000000000000) == 0xd900000000000000) && ((uVar8 & 0xffffffffff) != 0)) {
        FUN_71033146e0(DAT_710532f8d0,uVar8,pppplVar13,param_4,param_5,param_6,param_7,param_8);
      }
      else {
        FUN_7103313da0(*(undefined8 **)(DAT_710532f8d0 + 8),0,pppplVar13,param_4,param_5,param_6,
                       param_7,param_8);
      }
    }
    else {
      local_50 = &PTR_FUN_710523d9c8;
      local_48 = (long *)0x0;
      if (plVar10 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar10);
      }
    }
  }
LAB_7101b15fa0:
  lVar9 = *(long *)(DAT_710532f8d0 + 8);
  if ((ulong)(*(long *)(lVar9 + 0x48) - *(long *)(lVar9 + 0x40) >> 3) < 3) {
    uVar8 = 0;
    if (*(char *)(lVar9 + 0x191) == '\0') goto LAB_7101b15fd8;
LAB_7101b16048:
    local_98 = 0x87650000000000;
    local_88 = 0xffffffffffffffff;
    uStack_80 = 0;
    local_b0[0] = 0;
    local_78 = 0;
  }
  else {
    uVar8 = *(ulong *)(*(long *)(lVar9 + 0x40) + 0x10);
    if (*(char *)(lVar9 + 0x191) != '\0') goto LAB_7101b16048;
LAB_7101b15fd8:
    uVar7 = FUN_7103313f20(lVar9,uVar8,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                           param_8);
    if ((uVar7 & 1) == 0) goto LAB_7101b16048;
    FUN_71024076d0(local_b0,uVar8);
    if (((local_a0 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_98 == DAT_7106dd53ac)) {
      piVar16 = (int *)(local_a0 + 0x38);
      do {
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar3) {
          *piVar16 = *piVar16 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  local_a8 = &PTR_FUN_7104f73d50;
  local_a0 = 0;
  local_90 = 0;
  iVar5 = *(int *)(param_1 + 0x13c);
joined_r0x007101b16080:
  if (iVar5 != 0) {
    lVar9 = *(long *)(*(long *)(param_1 + 0xe0) + 8);
    if (((lVar9 != 0) &&
        (plVar10 = (long *)FUN_71037964b0(lVar9,0x710432a70e), plVar10 != (long *)0x0)) &&
       (uVar8 = (**(code **)(*plVar10 + 0x138))(), (uVar8 & 1) == 0)) {
      FUN_7103778760(*(long *)(param_1 + 0xe0),0x710432a70e);
    }
    (**(code **)(**(long **)(param_1 + 0x140) + 0x70))(*(long **)(param_1 + 0x140),0);
    *(undefined1 *)(*(long *)(param_2 + 8) + 0x4aa) = 0;
    if (0x12 < *(uint *)(param_1 + 0xb4)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xb4) * 4 + 0x68) = 3;
  }
  return;
}

