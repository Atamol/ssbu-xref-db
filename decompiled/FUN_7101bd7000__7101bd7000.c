// addr:      7101bd7000
// offset:    0x1bd7000
// name:      FUN_7101bd7000
// mangled:   
// signature: undefined __cdecl FUN_7101bd7000(long param_1, int param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101bd7000(long param_1,int param_2,long *********param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long ****pppplVar8;
  long *********ppppppppplVar9;
  long ******pppppplVar10;
  long lVar11;
  char *pcVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  char *pcVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  undefined **local_b8;
  undefined8 *local_b0;
  undefined **local_a8;
  undefined8 *local_a0;
  undefined **local_98;
  ulong local_90;
  undefined **local_88;
  long *local_80;
  undefined **local_78;
  long *local_70;
  long ********local_68;
  long *local_60;
  undefined4 local_54;
  
  if (param_3[1][1] == (long *******)0x0) {
    return;
  }
  if (param_2 == 0) {
    ppppppppplVar9 = param_3;
    FUN_71037780e0(&local_68,(long)param_3,(long ****)"btn_new",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    plVar15 = local_60;
    if (*local_60 == 0) {
      local_68 = (long ********)&PTR_FUN_710523d9e8;
      local_60 = (long *)0x0;
      if (plVar15 != (long *)0x0) goto LAB_7101bd711c;
    }
    else {
      if (local_60[1] != 0) {
        FUN_710377aee0(0x3f800000,(long)&local_68);
      }
LAB_7101bd711c:
      local_60 = (long *)0x0;
      local_68 = (long ********)&PTR_FUN_710523d9e8;
      FUN_710392eb40((ulong)plVar15);
    }
    if (param_3[1][1] != (long *******)0x0) {
      FUN_71037780e0(&local_68,(long)param_3,(long ****)"icon_type_new",ppppppppplVar9,param_4,
                     param_5,param_6,param_7,param_8);
      plVar15 = local_60;
      if (*local_60 == 0) {
        local_68 = (long ********)&PTR_FUN_710523d9e8;
        local_60 = (long *)0x0;
        if (plVar15 == (long *)0x0) goto LAB_7101bd730c;
      }
      else if (local_60[1] != 0) {
        FUN_710377aee0(0x3f800000,(long)&local_68);
      }
      local_60 = (long *)0x0;
      local_68 = (long ********)&PTR_FUN_710523d9e8;
      FUN_710392eb40((ulong)plVar15);
    }
LAB_7101bd730c:
    FUN_7103776910(&local_78,(long)param_3,(long ****)"set_icn_room_new",ppppppppplVar9,param_4,
                   param_5,param_6,param_7,param_8);
    plVar15 = local_70;
    if ((*local_70 != 0) &&
       (plVar14 = FUN_710323f760(*(long **)(param_1 + 0x48),0x71ffff10add0d436,
                                 (long ****)ppppppppplVar9,param_4,param_5,param_6,param_7,param_8),
       *(long *)plVar14[1] != 0)) {
      FUN_7103778b80((long)local_70,(long)plVar14,ppppppppplVar9,param_4,param_5,param_6,param_7,
                     param_8);
    }
    local_78 = &PTR_FUN_710523d9a8;
    local_70 = (long *)0x0;
    if (plVar15 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar15);
    }
    if (param_3[1][1] == (long *******)0x0) {
      return;
    }
    FUN_71037780e0(&local_68,(long)param_3,(long ****)"lock_off",ppppppppplVar9,param_4,param_5,
                   param_6,param_7,param_8);
    plVar15 = local_60;
    if (*local_60 == 0) {
      local_68 = (long ********)&PTR_FUN_710523d9e8;
      local_60 = (long *)0x0;
      if (plVar15 == (long *)0x0) {
        return;
      }
    }
    else {
      if (local_60[1] != 0) {
        FUN_710377aee0(0x3f800000,(long)&local_68);
      }
      local_68 = (long ********)&PTR_FUN_710523d9e8;
      local_60 = (long *)0x0;
    }
    goto LAB_7101bd7a14;
  }
  lVar1 = *(long *)(param_1 + 0x198);
  uVar13 = (*(long *)(param_1 + 0x1a0) - lVar1 >> 5) * -0x70a3d70a3d70a3d7;
  uVar20 = (ulong)(param_2 - 1);
  if (uVar13 < uVar20 || uVar13 - uVar20 == 0) {
    pppppplVar10 = param_3[1][1][3];
    if (pppppplVar10 == (long ******)0x0) {
      return;
    }
    *(byte *)(pppppplVar10 + 0xb) = *(byte *)(pppppplVar10 + 0xb) & 0xfe;
    return;
  }
  ppppppppplVar9 = param_3;
  FUN_7103776910(&local_68,(long)param_3,(long ****)"set_txt_name",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  plVar15 = local_60;
  if (*local_60 == 0) {
    local_68 = (long ********)&PTR_FUN_710523d9a8;
    local_60 = (long *)0x0;
    if (plVar15 != (long *)0x0) goto LAB_7101bd7184;
  }
  else {
    if ((long *)local_60[2] != (long *)0x0) {
      ppppppppplVar9 = (long *********)&DAT_ffffffff;
      param_4 = (byte ****)0x1;
      FUN_71037a2270((long *)local_60[2],(ushort *)(lVar1 + uVar20 * 800 + 0x80),0xffffffff,1);
    }
LAB_7101bd7184:
    local_60 = (long *)0x0;
    local_68 = (long ********)&PTR_FUN_710523d9a8;
    FUN_710392eb40((ulong)plVar15);
  }
  FUN_7103776640(&local_88,(long)param_3,(byte ****)"set_parts_profileicon_00",ppppppppplVar9,
                 param_4,param_5,param_6,param_7,param_8);
  plVar15 = local_80;
  if (local_80[1] != 0) {
    FUN_7103776910(&local_98,(long)&local_88,(long ****)"set_icn_profile",ppppppppplVar9,param_4,
                   param_5,param_6,param_7,param_8);
    ppppppppplVar9 = (long *********)(long)*(short *)(lVar1 + uVar20 * 800 + 0x9c);
    uVar13 = FUN_7101bda220(param_1,(long)&local_98,(long ****)ppppppppplVar9,param_4,param_5,
                            param_6,param_7,param_8);
    FUN_7103776910(&local_a8,(long)&local_88,(long ****)"set_icn_profile_bg",ppppppppplVar9,param_4,
                   param_5,param_6,param_7,param_8);
    local_b8 = &PTR_FUN_710523d9a8;
    puVar6 = (undefined8 *)
             FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar9,param_4,param_5,param_6,param_7,
                            param_8);
    if (puVar6 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_54 = 0;
        local_68 = (long ********)&SUB_00000020;
        ppppppppplVar9 = &local_68;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
        if (((uVar7 & 1) != 0) &&
           (puVar6 = (undefined8 *)
                     FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar9,param_4,param_5,param_6,
                                    param_7,param_8), puVar6 != (undefined8 *)0x0))
        goto LAB_7101bd7250;
      }
      puVar6 = (undefined8 *)0x0;
    }
LAB_7101bd7250:
    puVar4 = local_a0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    *puVar6 = *local_a0;
    puVar6[1] = local_a0[1];
    puVar6[2] = local_a0[2];
    puVar6[3] = local_a0[3];
    local_b0 = puVar6;
    FUN_710337d450((long)&local_b8,uVar13);
    local_b8 = &PTR_FUN_710523d9a8;
    local_b0 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    if (local_80[1] != 0) {
      FUN_71037780e0(&local_68,(long)&local_88,(long ****)"type_00",ppppppppplVar9,param_4,param_5,
                     param_6,param_7,param_8);
      plVar15 = local_60;
      if (*local_60 == 0) {
        local_68 = (long ********)&PTR_FUN_710523d9e8;
        local_60 = (long *)0x0;
        if (plVar15 == (long *)0x0) goto LAB_7101bd73f8;
      }
      else if (local_60[1] != 0) {
        FUN_710377aee0(0x3f800000,(long)&local_68);
      }
      local_60 = (long *)0x0;
      local_68 = (long ********)&PTR_FUN_710523d9e8;
      FUN_710392eb40((ulong)plVar15);
    }
LAB_7101bd73f8:
    pppplVar8 = (long ****)"friend_off";
    if (DAT_710593b5f0 != (long *)0x0) {
      uVar13 = *(ulong *)(*DAT_710593b5f0 + 0x25998);
      if (uVar13 == 0) {
LAB_7101bd74e8:
        plVar15 = (long *)0x0;
      }
      else {
        uVar7 = *(ulong *)(lVar1 + uVar20 * 800 + 0x70);
        uVar18 = uVar13 - 1;
        if ((uVar18 & uVar13) == 0) {
          uVar17 = uVar18 & uVar7;
        }
        else {
          uVar17 = uVar7;
          if (uVar13 <= uVar7) {
            uVar17 = 0;
            if (uVar13 != 0) {
              uVar17 = uVar7 / uVar13;
            }
            uVar17 = uVar7 - uVar17 * uVar13;
          }
        }
        plVar14 = *(long **)(*(long *)(*DAT_710593b5f0 + 0x25990) + uVar17 * 8);
        plVar15 = (long *)0x0;
        if ((plVar14 != (long *)0x0) && (plVar15 = (long *)*plVar14, plVar15 != (long *)0x0)) {
          if ((uVar18 & uVar13) == 0) {
            do {
              uVar13 = plVar15[1];
              if (uVar13 != uVar7 && (uVar13 & uVar18) != uVar17) goto LAB_7101bd74e8;
            } while (((uVar13 != uVar7) || (plVar15[2] != uVar7)) &&
                    (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0));
          }
          else {
            do {
              uVar18 = plVar15[1];
              if (uVar18 == uVar7) {
                if (plVar15[2] == uVar7) break;
              }
              else {
                if (uVar13 <= uVar18) {
                  uVar3 = 0;
                  if (uVar13 != 0) {
                    uVar3 = uVar18 / uVar13;
                  }
                  uVar18 = uVar18 - uVar3 * uVar13;
                }
                if (uVar18 != uVar17) goto LAB_7101bd74e8;
              }
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
        }
      }
      if (plVar15 != (long *)0x0) {
        pppplVar8 = (long ****)"friend_on";
      }
    }
    if (local_80[1] != 0) {
      FUN_71037780e0(&local_68,(long)&local_88,pppplVar8,ppppppppplVar9,param_4,param_5,param_6,
                     param_7,param_8);
      plVar15 = local_60;
      if (*local_60 == 0) {
        local_68 = (long ********)&PTR_FUN_710523d9e8;
        local_60 = (long *)0x0;
        if (plVar15 == (long *)0x0) goto LAB_7101bd7558;
      }
      else if (local_60[1] != 0) {
        FUN_710377aee0(0x3f800000,(long)&local_68);
      }
      local_60 = (long *)0x0;
      local_68 = (long ********)&PTR_FUN_710523d9e8;
      FUN_710392eb40((ulong)plVar15);
    }
LAB_7101bd7558:
    local_a8 = &PTR_FUN_710523d9a8;
    local_a0 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar4);
    }
    uVar13 = local_90;
    local_98 = &PTR_FUN_710523d9a8;
    local_90 = 0;
    plVar15 = local_80;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
  }
  if (*(short *)(lVar1 + uVar20 * 800 + 0x10) == *(short *)(param_1 + 0x1b0)) {
    if (*(char *)(lVar1 + uVar20 * 800 + 0xa8) == '\x02') {
      if (*(char *)(lVar1 + uVar20 * 800 + 8) != '\0') {
        iVar19 = 2;
        goto LAB_7101bd7610;
      }
      iVar19 = 1;
      bVar5 = true;
    }
    else {
      iVar19 = 0;
LAB_7101bd7610:
      lVar11 = lVar1 + uVar20 * 800;
      bVar5 = ((*(byte *)(lVar11 + 5) ^ *(byte *)(lVar11 + 4)) & 0x3f) == 0;
    }
    bVar2 = *(byte *)(lVar1 + uVar20 * 800 + 0xa9);
    if (bVar2 < 4) {
      if (param_3[1][1] == (long *******)0x0) goto LAB_7101bd78e8;
      FUN_71037780e0(&local_68,(long)param_3,(long ****)"btn_melee",ppppppppplVar9,param_4,param_5,
                     param_6,param_7,param_8);
      plVar14 = local_60;
      if (*local_60 == 0) {
        local_68 = (long ********)&PTR_FUN_710523d9e8;
        local_60 = (long *)0x0;
        if (plVar14 != (long *)0x0) goto LAB_7101bd77f8;
      }
      else {
        if (local_60[1] != 0) {
          FUN_710377aee0(0x3f800000,(long)&local_68);
        }
LAB_7101bd77f8:
        local_60 = (long *)0x0;
        local_68 = (long ********)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)plVar14);
      }
      if (param_3[1][1] != (long *******)0x0) {
        pcVar12 = "icon_type_melee";
        pcVar16 = "icon_type_melee_lock";
        goto LAB_7101bd788c;
      }
    }
    else if (bVar2 - 5 < 3) {
      if (param_3[1][1] != (long *******)0x0) {
        FUN_71037780e0(&local_68,(long)param_3,(long ****)"btn_any",ppppppppplVar9,param_4,param_5,
                       param_6,param_7,param_8);
        plVar14 = local_60;
        if (*local_60 == 0) {
          local_68 = (long ********)&PTR_FUN_710523d9e8;
          local_60 = (long *)0x0;
          if (plVar14 != (long *)0x0) goto LAB_7101bd7830;
        }
        else {
          if (local_60[1] != 0) {
            FUN_710377aee0(0x3f800000,(long)&local_68);
          }
LAB_7101bd7830:
          local_60 = (long *)0x0;
          local_68 = (long ********)&PTR_FUN_710523d9e8;
          FUN_710392eb40((ulong)plVar14);
        }
        if (param_3[1][1] != (long *******)0x0) {
          pcVar12 = "icon_type_any";
          pcVar16 = "icon_type_any_lock";
          goto LAB_7101bd788c;
        }
      }
    }
    else {
      if ((bVar2 != 4) || (param_3[1][1] == (long *******)0x0)) goto LAB_7101bd78e8;
      FUN_71037780e0(&local_68,(long)param_3,(long ****)"btn_spirits",ppppppppplVar9,param_4,param_5
                     ,param_6,param_7,param_8);
      plVar14 = local_60;
      if (*local_60 == 0) {
        local_68 = (long ********)&PTR_FUN_710523d9e8;
        local_60 = (long *)0x0;
        if (plVar14 != (long *)0x0) goto LAB_7101bd7868;
      }
      else {
        if (local_60[1] != 0) {
          FUN_710377aee0(0x3f800000,(long)&local_68);
        }
LAB_7101bd7868:
        local_60 = (long *)0x0;
        local_68 = (long ********)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)plVar14);
      }
      if (param_3[1][1] == (long *******)0x0) goto LAB_7101bd78e8;
      pcVar12 = "icon_type_spirits";
      pcVar16 = "icon_type_spirits_lock";
LAB_7101bd788c:
      if (!bVar5) {
        pcVar16 = pcVar12;
      }
      FUN_71037780e0(&local_68,(long)param_3,(long ****)pcVar16,ppppppppplVar9,param_4,param_5,
                     param_6,param_7,param_8);
      plVar14 = local_60;
      if (*local_60 == 0) {
        local_68 = (long ********)&PTR_FUN_710523d9e8;
        local_60 = (long *)0x0;
        if (plVar14 == (long *)0x0) goto LAB_7101bd78e8;
      }
      else if (local_60[1] != 0) {
        FUN_710377aee0(0x3f800000,(long)&local_68);
      }
      local_60 = (long *)0x0;
      local_68 = (long ********)&PTR_FUN_710523d9e8;
      FUN_710392eb40((ulong)plVar14);
    }
LAB_7101bd78e8:
    if (iVar19 == 2) {
LAB_7101bd78fc:
      if (param_3[1][1] != (long *******)0x0) {
        pcVar12 = "lock_off";
LAB_7101bd7928:
        FUN_71037780e0(&local_68,(long)param_3,(long ****)pcVar12,ppppppppplVar9,param_4,param_5,
                       param_6,param_7,param_8);
        plVar14 = local_60;
        if (*local_60 == 0) {
          local_68 = (long ********)&PTR_FUN_710523d9e8;
          local_60 = (long *)0x0;
          if (plVar14 == (long *)0x0) goto LAB_7101bd797c;
        }
        else if (local_60[1] != 0) {
          FUN_710377aee0(0x3f800000,(long)&local_68);
        }
        local_60 = (long *)0x0;
        local_68 = (long ********)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)plVar14);
      }
    }
    else if (iVar19 == 1) {
      if (param_3[1][1] != (long *******)0x0) {
        pcVar12 = "lock_on_lock";
        goto LAB_7101bd7928;
      }
    }
    else if (iVar19 == 0) goto LAB_7101bd78fc;
LAB_7101bd797c:
    if ((bVar5) && (param_3[1][1] != (long *******)0x0)) {
      pcVar12 = "btn_disable";
LAB_7101bd7994:
      FUN_71037780e0(&local_68,(long)param_3,(long ****)pcVar12,ppppppppplVar9,param_4,param_5,
                     param_6,param_7,param_8);
      plVar14 = local_60;
      if (*local_60 == 0) {
        local_68 = (long ********)&PTR_FUN_710523d9e8;
        local_60 = (long *)0x0;
        if (plVar14 == (long *)0x0) goto LAB_7101bd79e8;
      }
      else if (local_60[1] != 0) {
        FUN_710377aee0(0x3f800000,(long)&local_68);
      }
      local_60 = (long *)0x0;
      local_68 = (long ********)&PTR_FUN_710523d9e8;
      FUN_710392eb40((ulong)plVar14);
    }
  }
  else if (param_3[1][1] != (long *******)0x0) {
    FUN_71037780e0(&local_68,(long)param_3,(long ****)"btn_melee",ppppppppplVar9,param_4,param_5,
                   param_6,param_7,param_8);
    plVar14 = local_60;
    if (*local_60 == 0) {
      local_68 = (long ********)&PTR_FUN_710523d9e8;
      local_60 = (long *)0x0;
      if (plVar14 != (long *)0x0) goto LAB_7101bd76fc;
    }
    else {
      if (local_60[1] != 0) {
        FUN_710377aee0(0x3f800000,(long)&local_68);
      }
LAB_7101bd76fc:
      local_60 = (long *)0x0;
      local_68 = (long ********)&PTR_FUN_710523d9e8;
      FUN_710392eb40((ulong)plVar14);
    }
    if (param_3[1][1] != (long *******)0x0) {
      FUN_71037780e0(&local_68,(long)param_3,(long ****)"lock_off",ppppppppplVar9,param_4,param_5,
                     param_6,param_7,param_8);
      plVar14 = local_60;
      if (*local_60 == 0) {
        local_68 = (long ********)&PTR_FUN_710523d9e8;
        local_60 = (long *)0x0;
        if (plVar14 != (long *)0x0) goto LAB_7101bd77c8;
      }
      else {
        if (local_60[1] != 0) {
          FUN_710377aee0(0x3f800000,(long)&local_68);
        }
LAB_7101bd77c8:
        local_60 = (long *)0x0;
        local_68 = (long ********)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)plVar14);
      }
      if (param_3[1][1] == (long *******)0x0) goto LAB_7101bd79e8;
      pcVar12 = "icon_type_melee";
      goto LAB_7101bd7994;
    }
  }
LAB_7101bd79e8:
  local_88 = &PTR_FUN_710523d988;
  local_80 = (long *)0x0;
  if (plVar15 == (long *)0x0) {
    return;
  }
  uVar13 = plVar15[3];
  plVar15[2] = (long)&PTR_FUN_710523d9a8;
  plVar15[3] = 0;
  if (uVar13 != 0) {
    FUN_710392eb40(uVar13);
  }
LAB_7101bd7a14:
  FUN_710392eb40((ulong)plVar15);
  return;
}

