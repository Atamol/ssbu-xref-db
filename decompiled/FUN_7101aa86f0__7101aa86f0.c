// addr:      7101aa86f0
// offset:    0x1aa86f0
// name:      FUN_7101aa86f0
// mangled:   
// signature: undefined __cdecl FUN_7101aa86f0(long param_1, undefined8 * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101aa86f0(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long *********ppppppppplVar8;
  char *pcVar9;
  byte ****ppppbVar10;
  uint *puVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  byte bVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  uint uVar21;
  undefined **local_1e0;
  long *local_1d8;
  byte ***local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined2 local_1bc;
  undefined1 local_1ba;
  undefined1 *local_1b8;
  undefined4 local_1b0;
  long alStack_1a0 [4];
  long *local_180;
  long alStack_170 [4];
  long *local_150;
  long alStack_140 [4];
  long *local_120;
  long alStack_110 [4];
  long *local_f0;
  long alStack_e0 [4];
  long *local_c0;
  undefined4 local_b0;
  undefined **local_a0;
  ulong local_98;
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  ulong local_78;
  undefined **local_70;
  ulong local_68;
  
  uVar2 = *param_2;
  uVar17 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  puVar1 = (undefined8 *)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x178) = param_2[1];
  *(undefined8 *)(param_1 + 0x180) = uVar17;
  *(byte *)(param_1 + 0x1cc) = (byte)param_3 & 1;
  *(undefined1 *)(param_1 + 0x188) = uVar3;
  *(undefined8 *)(param_1 + 0x170) = uVar2;
  *(int *)(param_1 + 0x1d0) = (int)param_4;
  *(byte *)(param_1 + 0x1e1) = (byte)param_5 & 1;
  FUN_7103776910(&local_70,(long)puVar1,(long ****)"set_txt_honbun",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  pcVar9 = (char *)0x0;
  if (*(long *)(param_1 + 0x180) != 0) {
    pcVar9 = (char *)(*(long *)(param_1 + 0x180) + 0x50);
  }
  FUN_710377a120((long)&local_70,pcVar9,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_80,(long)puVar1,(long ****)"set_txt_detail",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  pcVar9 = (char *)0x0;
  if (*(long *)(param_1 + 0x180) != 0) {
    pcVar9 = (char *)(*(long *)(param_1 + 0x180) + 0x90);
  }
  FUN_710377a120((long)&local_80,pcVar9,param_3,param_4,param_5,param_6,param_7,param_8);
  puVar11 = *(uint **)(param_1 + 0x180);
  if (puVar11 == (uint *)0x0) {
    lVar13 = 0;
    uVar21 = 0;
  }
  else {
    uVar21 = puVar11[0x58];
    if (uVar21 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = (long)puVar11 + (long)(int)uVar21;
      if (*puVar11 <= (uVar21 + puVar11[0x59]) - 1) {
        lVar13 = 0;
      }
    }
    uVar21 = puVar11[0x59];
  }
  ppppppppplVar8 = (long *********)(long)(int)uVar21;
  ppppbVar10 = (byte ****)0x1;
  FUN_710377b8b0(*(undefined8 **)(param_1 + 0x198),lVar13,(long ****)ppppppppplVar8,(byte ****)0x1,
                 param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_1d0,(long)puVar1,(long ****)"set_img_present",ppppppppplVar8,ppppbVar10,
                 param_5,param_6,param_7,param_8);
  FUN_7103779480((long)&local_1d0,param_1 + 400,ppppppppplVar8,ppppbVar10,param_5,param_6,param_7,
                 param_8);
  uVar7 = local_1c8;
  local_1d0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1c8 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_7103776640(&local_1d0,(long)puVar1,(byte ****)"set_btn_00_r",ppppppppplVar8,ppppbVar10,param_5
                 ,param_6,param_7,param_8);
  FUN_7103776910(&local_90,(long)&local_1d0,(long ****)"set_txt_00",ppppppppplVar8,ppppbVar10,
                 param_5,param_6,param_7,param_8);
  uVar7 = local_1c8;
  local_1d0 = (byte ***)&PTR_FUN_710523d988;
  local_1c8 = 0;
  if (uVar7 != 0) {
    uVar6 = *(ulong *)(uVar7 + 0x18);
    *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar7 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar7);
  }
  FUN_7103776640(&local_1d0,(long)puVar1,(byte ****)"set_btn_00_l",ppppppppplVar8,ppppbVar10,param_5
                 ,param_6,param_7,param_8);
  FUN_7103776910(&local_a0,(long)&local_1d0,(long ****)"set_txt_00",ppppppppplVar8,ppppbVar10,
                 param_5,param_6,param_7,param_8);
  uVar7 = local_1c8;
  local_1d0 = (byte ***)&PTR_FUN_710523d988;
  local_1c8 = 0;
  if (uVar7 != 0) {
    uVar6 = *(ulong *)(uVar7 + 0x18);
    *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar7 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar7);
  }
  *(undefined8 *)(param_1 + 0x1c0) = 1;
  local_1d0 = (byte ***)0x0;
  local_1c8 = 0x101;
  local_1c0 = 1;
  local_1bc = 1;
  local_1ba = 1;
  local_1b8 = &DAT_41f0000000000000;
  local_1b0 = 0;
  local_180 = (long *)0x0;
  local_150 = (long *)0x0;
  local_120 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_b0 = 0;
  FUN_710337df20((long)&local_1d0);
  plVar19 = local_150;
  local_150 = (long *)0x0;
  local_1c8._0_2_ = CONCAT11(1,(undefined1)local_1c8);
  if (alStack_170 == plVar19) {
    pcVar12 = *(code **)(*plVar19 + 0x20);
LAB_7101aa8950:
    (*pcVar12)();
  }
  else if (plVar19 != (long *)0x0) {
    pcVar12 = *(code **)(*plVar19 + 0x28);
    goto LAB_7101aa8950;
  }
  plVar19 = local_120;
  bVar5 = alStack_140 == local_120;
  local_120 = (long *)0x0;
  if (bVar5) {
    pcVar12 = *(code **)(*plVar19 + 0x20);
LAB_7101aa8984:
    (*pcVar12)();
  }
  else if (plVar19 != (long *)0x0) {
    pcVar12 = *(code **)(*plVar19 + 0x28);
    goto LAB_7101aa8984;
  }
  plVar19 = (long *)(param_1 + 0x1b0);
  ppppbVar10 = &local_1d0;
  FUN_7103770b30(plVar19,puVar1,(long ****)"selector_00",ppppbVar10,param_5,param_6,param_7,param_8)
  ;
  pcVar9 = "set_btn_00_l";
  FUN_71037717d0(plVar19,0,"set_btn_00_l",ppppbVar10,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_1e0,(long)puVar1,(byte ****)"set_btn_00_l",pcVar9,ppppbVar10,param_5,param_6
                 ,param_7,param_8);
  plVar20 = local_1d8;
  FUN_7103778300(0x3f800000,(long)local_1d8,0x710426faf3);
  local_1e0 = &PTR_FUN_710523d988;
  local_1d8 = (long *)0x0;
  if (plVar20 != (long *)0x0) {
    uVar7 = *(ulong *)((long)plVar20 + 0x18);
    *(undefined ***)((long)plVar20 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar20 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40((ulong)plVar20);
  }
  pcVar9 = "set_btn_00_r";
  FUN_71037717d0(plVar19,1,"set_btn_00_r",ppppbVar10,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_1e0,(long)puVar1,(byte ****)"set_btn_00_r",pcVar9,ppppbVar10,param_5,param_6
                 ,param_7,param_8);
  plVar20 = local_1d8;
  FUN_7103778300(0x3f800000,(long)local_1d8,0x710426faf3);
  local_1e0 = &PTR_FUN_710523d988;
  local_1d8 = (long *)0x0;
  if (plVar20 != (long *)0x0) {
    uVar7 = *(ulong *)((long)plVar20 + 0x18);
    *(undefined ***)((long)plVar20 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar20 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40((ulong)plVar20);
  }
  lVar13 = *(long *)(*plVar19 + 0x1b8);
  if (lVar13 != 0) {
    lVar16 = *plVar19 + 0x1b8;
    lVar14 = lVar16;
    lVar18 = lVar13;
    do {
      bVar5 = *(int *)(lVar18 + 0x20) < 0;
      if (!bVar5) {
        lVar14 = lVar18;
      }
      lVar18 = *(long *)(lVar18 + (ulong)bVar5 * 8);
    } while (lVar18 != 0);
    if (((lVar14 != lVar16) && (*(int *)(lVar14 + 0x20) < 1)) &&
       (plVar20 = *(long **)(lVar14 + 0x28), plVar20 != (long *)0x0)) {
      (**(code **)(*plVar20 + 0x1f8))(plVar20,1);
      (**(code **)(*plVar20 + 0x388))(plVar20,0,0);
      lVar16 = *plVar19 + 0x1b8;
      lVar13 = *(long *)(*plVar19 + 0x1b8);
    }
    lVar14 = lVar16;
    if (lVar13 != 0) {
      do {
        if (0 < *(int *)(lVar13 + 0x20)) {
          lVar14 = lVar13;
        }
        lVar13 = *(long *)(lVar13 + (ulong)(*(int *)(lVar13 + 0x20) < 1) * 8);
      } while (lVar13 != 0);
      if (((lVar14 != lVar16) && (*(int *)(lVar14 + 0x20) < 2)) &&
         (plVar20 = *(long **)(lVar14 + 0x28), plVar20 != (long *)0x0)) {
        (**(code **)(*plVar20 + 0x1f8))(plVar20,1);
        (**(code **)(*plVar20 + 0x388))(plVar20,0,0);
      }
    }
  }
  pcVar9 = (char *)0x0;
  FUN_7103771a80(plVar19,1,0);
  if (*(int *)(param_1 + 0x170) == 1) {
    FUN_7103778630(0x3f800000,*(long *)(param_1 + 0x1a8),0x7104454556);
    FUN_7103778630(0,*(long *)(param_1 + 0x1a8),0x7104441fee);
    plVar20 = (long *)(param_1 + 0x1b8);
    ppppbVar10 = &local_1d0;
    FUN_7103770b30(plVar20,puVar1,(long ****)"selector_01",ppppbVar10,param_5,param_6,param_7,
                   param_8);
    FUN_71037717d0(plVar20,1,"set_btn_01_l",ppppbVar10,param_5,param_6,param_7,param_8);
    pcVar9 = "bnd_00";
    FUN_71037717d0(plVar20,0,"bnd_00",ppppbVar10,param_5,param_6,param_7,param_8);
    (**(code **)(**(long **)(param_1 + 0x1b8) + 0x70))(*(long **)(param_1 + 0x1b8),0);
    lVar13 = *(long *)(param_1 + 0x180);
    if ((lVar13 == 0) ||
       (((*(long *)(lVar13 + 0xd0) == 0 && (*(long *)(lVar13 + 0xd8) == 0)) &&
        (*(long *)(lVar13 + 0xe0) == 0)))) {
      lVar13 = *(long *)(*plVar20 + 0x1b8);
      if (lVar13 != 0) {
        lVar16 = *plVar20 + 0x1b8;
        lVar14 = lVar16;
        do {
          if (0 < *(int *)(lVar13 + 0x20)) {
            lVar14 = lVar13;
          }
          lVar13 = *(long *)(lVar13 + (ulong)(*(int *)(lVar13 + 0x20) < 1) * 8);
        } while (lVar13 != 0);
        if (((lVar14 != lVar16) && (*(int *)(lVar14 + 0x20) < 2)) &&
           (plVar20 = *(long **)(lVar14 + 0x28), plVar20 != (long *)0x0)) {
          (**(code **)(*plVar20 + 0x1f8))(plVar20,0);
          pcVar9 = (char *)0x0;
          (**(code **)(*plVar20 + 0x388))(plVar20,1);
        }
      }
      FUN_7103776910(&local_1e0,(long)puVar1,(long ****)"set_btn_01_l",pcVar9,ppppbVar10,param_5,
                     param_6,param_7,param_8);
      lVar13 = *local_1d8;
      plVar20 = local_1d8;
      if (lVar13 != 0) {
        bVar15 = *(byte *)(lVar13 + 0x58) & 0xfe;
        goto LAB_7101aa8dd4;
      }
    }
    else {
      lVar13 = *(long *)(*plVar20 + 0x1b8);
      if (lVar13 != 0) {
        lVar16 = *plVar20 + 0x1b8;
        lVar14 = lVar16;
        do {
          if (0 < *(int *)(lVar13 + 0x20)) {
            lVar14 = lVar13;
          }
          lVar13 = *(long *)(lVar13 + (ulong)(*(int *)(lVar13 + 0x20) < 1) * 8);
        } while (lVar13 != 0);
        if (((lVar14 != lVar16) && (*(int *)(lVar14 + 0x20) < 2)) &&
           (plVar20 = *(long **)(lVar14 + 0x28), plVar20 != (long *)0x0)) {
          (**(code **)(*plVar20 + 0x1f8))(plVar20,1);
          pcVar9 = (char *)0x0;
          (**(code **)(*plVar20 + 0x388))(plVar20,0);
        }
      }
      FUN_7103776910(&local_1e0,(long)puVar1,(long ****)"set_btn_01_l",pcVar9,ppppbVar10,param_5,
                     param_6,param_7,param_8);
      lVar13 = *local_1d8;
      plVar20 = local_1d8;
      if (lVar13 != 0) {
        bVar15 = *(byte *)(lVar13 + 0x58) | 1;
LAB_7101aa8dd4:
        *(byte *)(lVar13 + 0x58) = bVar15;
        plVar20 = local_1d8;
      }
    }
    local_1e0 = &PTR_FUN_710523d9a8;
    local_1d8 = (long *)0x0;
    if (plVar20 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar20);
    }
    if ((*(long *)(param_1 + 0x180) == 0) || (*(int *)(*(long *)(param_1 + 0x180) + 0x168) == 0)) {
      lVar13 = *(long *)(*plVar19 + 0x1b8);
      if (lVar13 != 0) {
        lVar16 = *plVar19 + 0x1b8;
        lVar14 = lVar16;
        do {
          bVar5 = *(int *)(lVar13 + 0x20) < 0;
          if (!bVar5) {
            lVar14 = lVar13;
          }
          lVar13 = *(long *)(lVar13 + (ulong)bVar5 * 8);
        } while (lVar13 != 0);
        if (((lVar14 != lVar16) && (*(int *)(lVar14 + 0x20) < 1)) &&
           (plVar20 = *(long **)(lVar14 + 0x28), plVar20 != (long *)0x0)) {
          (**(code **)(*plVar20 + 0x1f8))(plVar20,0);
          pcVar9 = (char *)0x0;
          (**(code **)(*plVar20 + 0x388))(plVar20,1);
        }
      }
      FUN_7103776910(&local_1e0,(long)puVar1,(long ****)"set_btn_00_l",pcVar9,ppppbVar10,param_5,
                     param_6,param_7,param_8);
      plVar20 = local_1d8;
      lVar13 = *local_1d8;
      if (lVar13 != 0) {
        *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) & 0xfe;
      }
      local_1e0 = &PTR_FUN_710523d9a8;
      local_1d8 = (long *)0x0;
      if (plVar20 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar20);
      }
      cVar4 = *(char *)(param_1 + 0x1cc);
      goto joined_r0x007101aa8ce0;
    }
    lVar13 = *(long *)(*plVar19 + 0x1b8);
    if (lVar13 != 0) {
      lVar16 = *plVar19 + 0x1b8;
      lVar14 = lVar16;
      do {
        bVar5 = *(int *)(lVar13 + 0x20) < 0;
        if (!bVar5) {
          lVar14 = lVar13;
        }
        lVar13 = *(long *)(lVar13 + (ulong)bVar5 * 8);
      } while (lVar13 != 0);
      if (((lVar14 != lVar16) && (*(int *)(lVar14 + 0x20) < 1)) &&
         (plVar20 = *(long **)(lVar14 + 0x28), plVar20 != (long *)0x0)) {
        (**(code **)(*plVar20 + 0x1f8))(plVar20,1);
        pcVar9 = (char *)0x0;
        (**(code **)(*plVar20 + 0x388))(plVar20,0);
      }
    }
    FUN_7103776910(&local_1e0,(long)puVar1,(long ****)"set_btn_00_l",pcVar9,ppppbVar10,param_5,
                   param_6,param_7,param_8);
    plVar20 = local_1d8;
    lVar13 = *local_1d8;
    if (lVar13 != 0) {
      *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) | 1;
    }
    local_1e0 = &PTR_FUN_710523d9a8;
    local_1d8 = (long *)0x0;
    if (plVar20 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar20);
    }
    FUN_710377a120((long)&local_a0,"mnu_insert_popup_detail",pcVar9,ppppbVar10,param_5,param_6,
                   param_7,param_8);
    if (*(char *)(param_1 + 0x1cc) != '\0') goto LAB_7101aa8ce4;
LAB_7101aa8f70:
    FUN_7103778630(0,*(long *)(param_1 + 0x1a8),0x71043ceec2);
  }
  else {
    FUN_7103778630(0,*(long *)(param_1 + 0x1a8),0x7104454556);
    if (*(int *)(param_1 + 0x174) == 2) {
      uVar21 = 0;
    }
    else {
      uVar21 = 0x3f800000;
    }
    FUN_7103778630((ulong)uVar21,*(long *)(param_1 + 0x1a8),0x7104441fee);
    cVar4 = *(char *)(param_1 + 0x1cc);
joined_r0x007101aa8ce0:
    if (cVar4 == '\0') goto LAB_7101aa8f70;
LAB_7101aa8ce4:
    if (*(int *)(param_1 + 0x1d0) == 0) goto LAB_7101aa8f70;
    FUN_7103778630(0x3f800000,*(long *)(param_1 + 0x1a8),0x71043ceec2);
    FUN_7103776910(&local_1e0,(long)puVar1,(long ****)"set_txt_skip",pcVar9,ppppbVar10,param_5,
                   param_6,param_7,param_8);
    pcVar9 = (char *)(ulong)*(uint *)(param_1 + 0x1d0);
    FUN_710377a310((long)&local_1e0,1);
    plVar20 = local_1d8;
    local_1e0 = &PTR_FUN_710523d9a8;
    local_1d8 = (long *)0x0;
    if (plVar20 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar20);
    }
  }
  switch(*(undefined4 *)(param_1 + 0x174)) {
  case 1:
    FUN_710377a120((long)&local_90,"mnu_insert_popup_receive_btn",pcVar9,ppppbVar10,param_5,param_6,
                   param_7,param_8);
    FUN_710377a120((long)&local_a0,"mnu_insert_popup_next_time_btn",pcVar9,ppppbVar10,param_5,
                   param_6,param_7,param_8);
    lVar13 = *(long *)(*plVar19 + 0x1b8);
    if (lVar13 != 0) {
      lVar16 = *plVar19 + 0x1b8;
      lVar14 = lVar16;
      do {
        bVar5 = *(int *)(lVar13 + 0x20) < 0;
        if (!bVar5) {
          lVar14 = lVar13;
        }
        lVar13 = *(long *)(lVar13 + (ulong)bVar5 * 8);
      } while (lVar13 != 0);
      if (((lVar14 != lVar16) && (*(int *)(lVar14 + 0x20) < 1)) &&
         (plVar19 = *(long **)(lVar14 + 0x28), plVar19 != (long *)0x0)) {
        (**(code **)(*plVar19 + 0x1f8))(plVar19,1);
        pcVar9 = (char *)0x0;
        (**(code **)(*plVar19 + 0x388))(plVar19,0);
      }
    }
    FUN_7103776910(&local_1e0,(long)puVar1,(long ****)"set_btn_00_l",pcVar9,ppppbVar10,param_5,
                   param_6,param_7,param_8);
    lVar13 = *local_1d8;
    plVar19 = local_1d8;
    if (lVar13 != 0) {
      bVar15 = *(byte *)(lVar13 + 0x58) | 1;
      goto LAB_7101aa91a8;
    }
    goto LAB_7101aa91ac;
  case 2:
    FUN_710377a120((long)&local_90,"mnu_insert_popup_receive_already_btn",pcVar9,ppppbVar10,param_5,
                   param_6,param_7,param_8);
    lVar13 = *(long *)(*plVar19 + 0x1b8);
    if (lVar13 != 0) {
      lVar16 = *plVar19 + 0x1b8;
      lVar14 = lVar16;
      do {
        bVar5 = *(int *)(lVar13 + 0x20) < 0;
        if (!bVar5) {
          lVar14 = lVar13;
        }
        lVar13 = *(long *)(lVar13 + (ulong)bVar5 * 8);
      } while (lVar13 != 0);
LAB_7101aa9138:
      if (((lVar14 != lVar16) && (*(int *)(lVar14 + 0x20) < 1)) &&
         (plVar19 = *(long **)(lVar14 + 0x28), plVar19 != (long *)0x0)) {
        (**(code **)(*plVar19 + 0x1f8))(plVar19,0);
        pcVar9 = (char *)0x0;
        (**(code **)(*plVar19 + 0x388))(plVar19,1);
      }
    }
    break;
  case 3:
    FUN_710377a120((long)&local_90,"mnu_insert_popup_receive_expired_btn",pcVar9,ppppbVar10,param_5,
                   param_6,param_7,param_8);
    lVar13 = *(long *)(*plVar19 + 0x1b8);
    if (lVar13 != 0) {
      lVar16 = *plVar19 + 0x1b8;
      lVar14 = lVar16;
      do {
        bVar5 = *(int *)(lVar13 + 0x20) < 0;
        if (!bVar5) {
          lVar14 = lVar13;
        }
        lVar13 = *(long *)(lVar13 + (ulong)bVar5 * 8);
      } while (lVar13 != 0);
      goto LAB_7101aa9138;
    }
    break;
  case 4:
  case 5:
    FUN_710377a120((long)&local_90,"mnu_insert_popup_ok_btn",pcVar9,ppppbVar10,param_5,param_6,
                   param_7,param_8);
    goto switchD_7101aa8fa4_default;
  case 6:
    FUN_710377a120((long)&local_90,"mnu_insert_popup_ok_btn",pcVar9,ppppbVar10,param_5,param_6,
                   param_7,param_8);
    lVar13 = *(long *)(*plVar19 + 0x1b8);
    if (lVar13 != 0) {
      lVar16 = *plVar19 + 0x1b8;
      lVar14 = lVar16;
      do {
        bVar5 = *(int *)(lVar13 + 0x20) < 0;
        if (!bVar5) {
          lVar14 = lVar13;
        }
        lVar13 = *(long *)(lVar13 + (ulong)bVar5 * 8);
      } while (lVar13 != 0);
      goto LAB_7101aa9138;
    }
    break;
  default:
    goto switchD_7101aa8fa4_default;
  }
  FUN_7103776910(&local_1e0,(long)puVar1,(long ****)"set_btn_00_l",pcVar9,ppppbVar10,param_5,param_6
                 ,param_7,param_8);
  lVar13 = *local_1d8;
  plVar19 = local_1d8;
  if (lVar13 != 0) {
    bVar15 = *(byte *)(lVar13 + 0x58) & 0xfe;
LAB_7101aa91a8:
    *(byte *)(lVar13 + 0x58) = bVar15;
    plVar19 = local_1d8;
  }
LAB_7101aa91ac:
  local_1e0 = &PTR_FUN_710523d9a8;
  local_1d8 = (long *)0x0;
  if (plVar19 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar19);
  }
switchD_7101aa8fa4_default:
  if (alStack_e0 == local_c0) {
    pcVar12 = *(code **)(*local_c0 + 0x20);
LAB_7101aa91e4:
    (*pcVar12)();
  }
  else if (local_c0 != (long *)0x0) {
    pcVar12 = *(code **)(*local_c0 + 0x28);
    goto LAB_7101aa91e4;
  }
  if (alStack_110 == local_f0) {
    pcVar12 = *(code **)(*local_f0 + 0x20);
LAB_7101aa9214:
    (*pcVar12)();
  }
  else if (local_f0 != (long *)0x0) {
    pcVar12 = *(code **)(*local_f0 + 0x28);
    goto LAB_7101aa9214;
  }
  if (alStack_140 == local_120) {
    pcVar12 = *(code **)(*local_120 + 0x20);
LAB_7101aa923c:
    (*pcVar12)();
  }
  else if (local_120 != (long *)0x0) {
    pcVar12 = *(code **)(*local_120 + 0x28);
    goto LAB_7101aa923c;
  }
  if (alStack_170 == local_150) {
    pcVar12 = *(code **)(*local_150 + 0x20);
LAB_7101aa9264:
    (*pcVar12)();
  }
  else if (local_150 != (long *)0x0) {
    pcVar12 = *(code **)(*local_150 + 0x28);
    goto LAB_7101aa9264;
  }
  if (alStack_1a0 == local_180) {
    pcVar12 = *(code **)(*local_180 + 0x20);
  }
  else {
    if (local_180 == (long *)0x0) goto LAB_7101aa9298;
    pcVar12 = *(code **)(*local_180 + 0x28);
  }
  (*pcVar12)();
LAB_7101aa9298:
  uVar7 = local_98;
  local_a0 = &PTR_FUN_710523d9a8;
  local_98 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  uVar7 = local_88;
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  uVar7 = local_78;
  local_80 = &PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  uVar7 = local_68;
  local_70 = &PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  return;
}

