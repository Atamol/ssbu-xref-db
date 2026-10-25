// addr:      7101ab9340
// offset:    0x1ab9340
// name:      FUN_7101ab9340
// mangled:   
// signature: undefined __cdecl FUN_7101ab9340(long param_1, int param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * * * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ab9340(long param_1,int param_2,long *********param_3,byte ****param_4,
                   long *********param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  ushort *puVar2;
  undefined4 uVar3;
  char cVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  ulong uVar13;
  byte ****ppppbVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  char *pcVar17;
  long *********ppppppppplVar18;
  ulong uVar19;
  long lVar20;
  undefined4 *puVar21;
  long ********pppppppplVar22;
  long *plVar23;
  ulong uVar24;
  long *plVar25;
  long lVar26;
  undefined **ppuVar27;
  ulong uVar28;
  long *plVar29;
  undefined **__dest;
  long lVar30;
  long *********ppppppppplVar31;
  uint *puVar32;
  undefined1 *puVar33;
  long *********ppppppppplVar34;
  long lVar35;
  long lVar36;
  char *local_158;
  undefined **local_120;
  ulong local_118;
  undefined **local_110;
  ulong local_108;
  undefined **local_100;
  undefined **local_f8;
  undefined **local_f0;
  undefined **local_b8;
  ulong local_b0;
  long ********local_a8;
  ulong local_a0;
  undefined **local_98;
  ulong local_90;
  undefined **local_88;
  ulong local_80;
  undefined **local_78;
  undefined8 *local_70;
  
  if (*(int *)(param_1 + 0x160) == 0xd) {
    FUN_7103776910(&local_100,(long)param_3,(long ****)"set_rep_bgshot",param_3,param_4,
                   (long ****)param_5,param_6,param_7,param_8);
    ppuVar12 = local_f8;
    FUN_7103779650((long)local_f8);
    local_100 = &PTR_FUN_710523d9a8;
    local_f8 = (undefined **)0x0;
    if (ppuVar12 == (undefined **)0x0) {
      return;
    }
    goto LAB_7101ab93a0;
  }
  if (param_2 < 0) {
    return;
  }
  lVar36 = *(long *)(param_1 + 0x278);
  uVar19 = (*(long *)(param_1 + 0x280) - lVar36 >> 6) * -0x1111111111111111;
  uVar28 = (ulong)param_2;
  if (uVar19 < uVar28 || uVar19 - uVar28 == 0) {
    return;
  }
  local_158 = "mnu_replay_detail_melee_normal";
  bVar6 = false;
  switch(*(undefined1 *)(lVar36 + uVar28 * 0x3c0 + 0x6c)) {
  case 1:
    bVar6 = false;
    local_158 = "mnu_replay_detail_melee_various";
    break;
  case 2:
    bVar6 = false;
    local_158 = "mnu_replay_detail_melee_suddendeath";
    break;
  case 9:
    bVar6 = true;
    local_158 = "mnu_replay_detail_melee_team";
    break;
  case 0xc:
    bVar6 = false;
    local_158 = "mnu_replay_detail_melee_tournament";
    break;
  case 0xd:
    bVar6 = false;
    local_158 = "mnu_replay_detail_anyone";
    break;
  case 0xe:
    bVar6 = false;
    local_158 = "mnu_replay_detail_room";
    break;
  case 0xf:
    bVar6 = false;
    local_158 = "mnu_replay_detail_anyone_vip";
    break;
  case 0x10:
    bVar6 = false;
    local_158 = "mnu_replay_detail_online_tournament";
    break;
  case 0x12:
    local_158 = "mnu_replay_refinement_mode_homerun";
    bVar6 = false;
  }
  puVar32 = (uint *)(lVar36 + uVar28 * 0x3c0);
  ppppppppplVar18 = param_3;
  iVar8 = FUN_7101af0cc0(*(long *)(DAT_7105324ee8 + 8),(void *)(ulong)*puVar32,(long ****)param_3,
                         param_4,(long ****)param_5,param_6,param_7,param_8);
  pcVar17 = (char *)((long)puVar32 + 0x3b9);
  *(undefined1 *)((long)puVar32 + 0x3b9) = 1;
  if (iVar8 == 0) {
    lVar20 = lVar36 + uVar28 * 0x3c0;
    if (*(int *)(lVar20 + 0x300) == 0x145) {
      uVar10 = *puVar32;
      plVar23 = (long *)(*(long *)(DAT_7105324ee8 + 8) + 0xe8);
      plVar25 = (long *)*plVar23;
      plVar29 = plVar23;
      if (plVar25 != (long *)0x0) {
        do {
          bVar7 = *(uint *)((long)plVar25 + 0x1c) < uVar10;
          if (!bVar7) {
            plVar29 = plVar25;
          }
          plVar25 = (long *)plVar25[bVar7];
        } while (plVar25 != (long *)0x0);
        if ((plVar29 != plVar23) && (*(uint *)((long)plVar29 + 0x1c) <= uVar10)) {
          *pcVar17 = '\x01';
          FUN_7103778300(0x3f800000,(long)param_3[1],0x71042a2a58);
          goto LAB_7101ab9708;
        }
      }
      *pcVar17 = '\0';
    }
    else {
      FUN_7103776640(&local_100,(long)param_3,(byte ****)"set_rep_pic_stage",ppppppppplVar18,param_4
                     ,(long ****)param_5,param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,(long)param_3[1],0x710433a322);
      plVar29 = *(long **)(param_1 + 0x170);
      FUN_7103776390(&local_88,&local_100,(long ****)ppppppppplVar18,param_4,(long ****)param_5,
                     param_6,param_7,param_8);
      ppppppppplVar18 = (long *********)(ulong)*(uint *)(lVar20 + 0x300);
      param_4 = (byte ****)(ulong)*puVar32;
      param_5 = (long *********)0x0;
      FUN_7101ad1f10(plVar29,(long)&local_88,(long ****)ppppppppplVar18,param_4,(long ****)0x0,
                     param_6,param_7,param_8);
      uVar19 = local_80;
      local_88 = &PTR_FUN_710523d988;
      local_80 = 0;
      if (uVar19 != 0) {
        uVar13 = *(ulong *)(uVar19 + 0x18);
        *(undefined ***)(uVar19 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar19 + 0x18) = 0;
        if (uVar13 != 0) {
          FUN_710392eb40(uVar13);
        }
        FUN_710392eb40(uVar19);
      }
      ppuVar12 = local_f8;
      local_100 = &PTR_FUN_710523d988;
      local_f8 = (undefined **)0x0;
      if (ppuVar12 != (undefined **)0x0) {
        puVar16 = ppuVar12[3];
        ppuVar12[2] = (undefined *)&PTR_FUN_710523d9a8;
        ppuVar12[3] = (undefined *)0x0;
        if (puVar16 != (undefined *)0x0) {
          FUN_710392eb40((ulong)puVar16);
        }
        goto LAB_7101ab9704;
      }
    }
  }
  else {
    FUN_7103776910(&local_100,(long)param_3,(long ****)"set_rep_bgshot",ppppppppplVar18,param_4,
                   (long ****)param_5,param_6,param_7,param_8);
    FUN_7103778300(0x3f800000,(long)param_3[1],0x71042e73fa);
    plVar29 = *(long **)(param_1 + 0x170);
    local_78 = &PTR_FUN_710523d9a8;
    puVar11 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar18,param_4,(long ****)param_5,param_6
                             ,param_7,param_8);
    if (puVar11 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
        local_a8 = (long ********)&SUB_00000020;
        ppppppppplVar18 = &local_a8;
        uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
        if (((uVar19 & 1) != 0) &&
           (puVar11 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar18,param_4,(long ****)param_5
                                     ,param_6,param_7,param_8), puVar11 != (undefined8 *)0x0))
        goto LAB_7101ab956c;
      }
      puVar11 = (undefined8 *)0x0;
    }
LAB_7101ab956c:
    ppuVar12 = local_f8;
    puVar11[2] = 0;
    puVar11[3] = 0;
    *puVar11 = 0;
    puVar11[1] = 0;
    param_5 = (long *********)0x0;
    *puVar11 = *local_f8;
    puVar11[1] = local_f8[1];
    puVar11[2] = local_f8[2];
    puVar11[3] = local_f8[3];
    ppppppppplVar18 = (long *********)(ulong)*(uint *)(lVar36 + uVar28 * 0x3c0 + 0x300);
    param_4 = (byte ****)(ulong)*puVar32;
    local_70 = puVar11;
    FUN_7101ad2060(plVar29,(long)&local_78,ppppppppplVar18,param_4,(long ****)0x0,param_6,param_7,
                   param_8);
    local_78 = &PTR_FUN_710523d9a8;
    local_70 = (undefined8 *)0x0;
    if (puVar11 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar11);
    }
    local_100 = &PTR_FUN_710523d9a8;
    local_f8 = (undefined **)0x0;
    if (ppuVar12 != (undefined **)0x0) {
LAB_7101ab9704:
      FUN_710392eb40((ulong)ppuVar12);
    }
  }
LAB_7101ab9708:
  if (*(int *)(param_1 + 0x6c0) < 0xc) {
    uVar10 = 0;
    cVar4 = *pcVar17;
  }
  else {
    uVar10 = (**(code **)(**(long **)(param_1 + 400) + 0x80))();
    uVar10 = uVar10 ^ 1;
    cVar4 = *pcVar17;
  }
  if (cVar4 == '\0') {
    FUN_7103776910(&local_100,(long)param_3,(long ****)"set_rep_bgshot",ppppppppplVar18,param_4,
                   (long ****)param_5,param_6,param_7,param_8);
    ppuVar12 = local_f8;
    FUN_71037790a0((long)local_f8,0,ppppppppplVar18,param_4,(long ****)param_5,param_6,param_7,
                   param_8);
    local_100 = &PTR_FUN_710523d9a8;
    local_f8 = (undefined **)0x0;
    if (ppuVar12 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar12);
    }
  }
  FUN_7103776390(&local_98,param_3,(long ****)ppppppppplVar18,param_4,(long ****)param_5,param_6,
                 param_7,param_8);
  if (*pcVar17 == '\0') {
    FUN_71037780e0(&local_100,(long)&local_98,(long ****)"turn_off",ppppppppplVar18,param_4,
                   (long ****)param_5,param_6,param_7,param_8);
    ppuVar12 = local_f8;
    if (((((long *)local_f8[1] == (long *)0x0) ||
         (uVar19 = (**(code **)(*(long *)local_f8[1] + 0x130))(), (uVar19 & 1) != 0)) ||
        ((long *)ppuVar12[1] == (long *)0x0)) ||
       (uVar19 = (**(code **)(*(long *)ppuVar12[1] + 0x138))(), (uVar19 & 1) != 0)) {
      pcVar17 = "turn_on";
LAB_7101ab9844:
      FUN_7103778300(0x3f800000,local_90,(long)pcVar17);
      goto LAB_7101ab984c;
    }
LAB_7101ab985c:
    local_f8 = (undefined **)0x0;
    local_100 = &PTR_FUN_710523d9e8;
    FUN_710392eb40((ulong)ppuVar12);
  }
  else {
    FUN_71037780e0(&local_100,(long)&local_98,(long ****)"turn_on",ppppppppplVar18,param_4,
                   (long ****)param_5,param_6,param_7,param_8);
    ppuVar12 = local_f8;
    if ((((long *)local_f8[1] != (long *)0x0) &&
        (uVar19 = (**(code **)(*(long *)local_f8[1] + 0x130))(), (uVar19 & 1) == 0)) &&
       (((long *)ppuVar12[1] != (long *)0x0 &&
        (uVar19 = (**(code **)(*(long *)ppuVar12[1] + 0x138))(), (uVar19 & 1) == 0))))
    goto LAB_7101ab985c;
    pcVar17 = "turn_off";
    if ((uVar10 & 1) != 0) goto LAB_7101ab9844;
    FUN_7103778760(local_90,0x7104433949);
LAB_7101ab984c:
    local_100 = &PTR_FUN_710523d9e8;
    local_f8 = (undefined **)0x0;
    if (ppuVar12 != (undefined **)0x0) goto LAB_7101ab985c;
  }
  FUN_71037780e0(&local_100,(long)&local_98,(long ****)"turn_loop",ppppppppplVar18,param_4,
                 (long ****)param_5,param_6,param_7,param_8);
  ppuVar12 = local_f8;
  if ((long *)local_f8[1] == (long *)0x0) {
    uVar19 = 0;
  }
  else {
    uVar19 = (**(code **)(*(long *)local_f8[1] + 0x148))();
    uVar19 = uVar19 & 0xffffffff;
  }
  local_100 = &PTR_FUN_710523d9e8;
  local_f8 = (undefined **)0x0;
  if (ppuVar12 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar12);
  }
  if ((uVar19 & 1) == 0) {
    FUN_7103778300(0x3f800000,local_90,0x710432a87b);
  }
  uVar19 = local_90;
  local_98 = &PTR_FUN_710523d988;
  local_90 = 0;
  if (uVar19 != 0) {
    uVar13 = *(ulong *)(uVar19 + 0x18);
    *(undefined ***)(uVar19 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar19 + 0x18) = 0;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
    FUN_710392eb40(uVar19);
  }
  if (bVar6) {
    lVar20 = lVar36 + uVar28 * 0x3c0;
    uVar13 = 0;
    puVar32 = (uint *)(lVar20 + 0x360);
    do {
      puVar33 = *(undefined1 **)(puVar32 + -0x12);
      if ((((ulong)puVar33 & 0xff00000000000000) == 0xc100000000000000) &&
         (((ulong)puVar33 & 0xffffffffff) != 0)) {
        lVar26 = *(long *)(DAT_710532f730 + 8);
        lVar35 = *(long *)(lVar26 + 0x168);
        uVar10 = puVar32[-0x10];
        uVar9 = FUN_71032632a0(lVar35,(ulong)puVar33);
        uVar19 = 0x11b1ccb807;
        if ((uVar9 & 1) == 0) {
          bVar7 = FUN_71032648e0(lVar26 + 0x160,(ulong)puVar33);
          uVar19 = 0x143829f67e;
          if (bVar7) goto LAB_7101ab9a8c;
        }
        else {
LAB_7101ab9a8c:
          puVar33 = FUN_71032631a0(lVar35,uVar19);
        }
        FUN_7103776910(&local_100,(long)param_3,(long ****)"set_rep_stockicon_%02d",uVar13,param_4,
                       (long ****)param_5,param_6,param_7,param_8);
        FUN_7103776910(&local_a8,(long)param_3,(long ****)"set_rep_stockicon_%02d_",uVar13,param_4,
                       (long ****)param_5,param_6,param_7,param_8);
        param_4 = (byte ****)0x2;
        ppppppppplVar18 = (long *********)(ulong)uVar10;
        plVar29 = FUN_710323f330(*(long **)(param_1 + 0x170),(ulong)puVar33,(ulong)ppppppppplVar18,2
                                 ,(long ****)param_5,param_6,param_7,param_8);
        uVar19 = local_a0;
        ppuVar12 = local_f8;
        if (*(long *)plVar29[1] == 0) {
          FUN_71037790a0((long)local_f8,1,ppppppppplVar18,param_4,(long ****)param_5,param_6,param_7
                         ,param_8);
          uVar19 = local_a0;
          FUN_71037790a0(local_a0,1,ppppppppplVar18,param_4,(long ****)param_5,param_6,param_7,
                         param_8);
        }
        else {
          FUN_7103778b80(local_a0,(long)plVar29,ppppppppplVar18,param_4,(long ****)param_5,param_6,
                         param_7,param_8);
          ppuVar12 = local_f8;
          FUN_7103778b80((long)local_f8,(long)plVar29,ppppppppplVar18,param_4,(long ****)param_5,
                         param_6,param_7,param_8);
        }
        local_a0 = 0;
        local_a8 = (long ********)&PTR_FUN_710523d9a8;
        if (uVar19 != 0) {
          local_a0 = 0;
          local_a8 = (long ********)&PTR_FUN_710523d9a8;
          FUN_710392eb40(uVar19);
        }
        uVar13 = (ulong)((int)uVar13 + 1);
        local_100 = &PTR_FUN_710523d9a8;
        local_f8 = (undefined **)0x0;
        if (ppuVar12 != (undefined **)0x0) {
          FUN_710392eb40((ulong)ppuVar12);
        }
      }
      puVar33 = *(undefined1 **)(puVar32 + -0xe);
      if (((ulong)puVar33 & 0xff00000000000000) == 0xc100000000000000 &&
          ((ulong)puVar33 & 0xffffffffff) != 0) {
        lVar26 = *(long *)(DAT_710532f730 + 8);
        lVar35 = *(long *)(lVar26 + 0x168);
        uVar10 = puVar32[-0xc];
        uVar9 = FUN_71032632a0(lVar35,(ulong)puVar33);
        uVar19 = 0x11b1ccb807;
        if ((uVar9 & 1) == 0) {
          bVar7 = FUN_71032648e0(lVar26 + 0x160,(ulong)puVar33);
          uVar19 = 0x143829f67e;
          if (bVar7) goto LAB_7101ab9b98;
        }
        else {
LAB_7101ab9b98:
          puVar33 = FUN_71032631a0(lVar35,uVar19);
        }
        FUN_7103776910(&local_100,(long)param_3,(long ****)"set_rep_stockicon_%02d",uVar13,param_4,
                       (long ****)param_5,param_6,param_7,param_8);
        FUN_7103776910(&local_a8,(long)param_3,(long ****)"set_rep_stockicon_%02d_",uVar13,param_4,
                       (long ****)param_5,param_6,param_7,param_8);
        param_4 = (byte ****)0x2;
        ppppppppplVar18 = (long *********)(ulong)uVar10;
        plVar29 = FUN_710323f330(*(long **)(param_1 + 0x170),(ulong)puVar33,(ulong)ppppppppplVar18,2
                                 ,(long ****)param_5,param_6,param_7,param_8);
        uVar19 = local_a0;
        ppuVar12 = local_f8;
        if (*(long *)plVar29[1] == 0) {
          FUN_71037790a0((long)local_f8,1,ppppppppplVar18,param_4,(long ****)param_5,param_6,param_7
                         ,param_8);
          uVar19 = local_a0;
          FUN_71037790a0(local_a0,1,ppppppppplVar18,param_4,(long ****)param_5,param_6,param_7,
                         param_8);
        }
        else {
          FUN_7103778b80(local_a0,(long)plVar29,ppppppppplVar18,param_4,(long ****)param_5,param_6,
                         param_7,param_8);
          ppuVar12 = local_f8;
          FUN_7103778b80((long)local_f8,(long)plVar29,ppppppppplVar18,param_4,(long ****)param_5,
                         param_6,param_7,param_8);
        }
        local_a0 = 0;
        local_a8 = (long ********)&PTR_FUN_710523d9a8;
        if (uVar19 != 0) {
          local_a0 = 0;
          local_a8 = (long ********)&PTR_FUN_710523d9a8;
          FUN_710392eb40(uVar19);
        }
        uVar13 = (ulong)((int)uVar13 + 1);
        local_100 = &PTR_FUN_710523d9a8;
        local_f8 = (undefined **)0x0;
        if (ppuVar12 != (undefined **)0x0) {
          FUN_710392eb40((ulong)ppuVar12);
        }
      }
      puVar33 = *(undefined1 **)(puVar32 + -10);
      if (((ulong)puVar33 & 0xff00000000000000) == 0xc100000000000000 &&
          ((ulong)puVar33 & 0xffffffffff) != 0) {
        lVar26 = *(long *)(DAT_710532f730 + 8);
        lVar35 = *(long *)(lVar26 + 0x168);
        uVar10 = puVar32[-8];
        uVar9 = FUN_71032632a0(lVar35,(ulong)puVar33);
        uVar19 = 0x11b1ccb807;
        if ((uVar9 & 1) == 0) {
          bVar7 = FUN_71032648e0(lVar26 + 0x160,(ulong)puVar33);
          uVar19 = 0x143829f67e;
          if (bVar7) goto LAB_7101ab9ca4;
        }
        else {
LAB_7101ab9ca4:
          puVar33 = FUN_71032631a0(lVar35,uVar19);
        }
        FUN_7103776910(&local_100,(long)param_3,(long ****)"set_rep_stockicon_%02d",uVar13,param_4,
                       (long ****)param_5,param_6,param_7,param_8);
        FUN_7103776910(&local_a8,(long)param_3,(long ****)"set_rep_stockicon_%02d_",uVar13,param_4,
                       (long ****)param_5,param_6,param_7,param_8);
        param_4 = (byte ****)0x2;
        ppppppppplVar18 = (long *********)(ulong)uVar10;
        plVar29 = FUN_710323f330(*(long **)(param_1 + 0x170),(ulong)puVar33,(ulong)ppppppppplVar18,2
                                 ,(long ****)param_5,param_6,param_7,param_8);
        uVar19 = local_a0;
        ppuVar12 = local_f8;
        if (*(long *)plVar29[1] == 0) {
          FUN_71037790a0((long)local_f8,1,ppppppppplVar18,param_4,(long ****)param_5,param_6,param_7
                         ,param_8);
          uVar19 = local_a0;
          FUN_71037790a0(local_a0,1,ppppppppplVar18,param_4,(long ****)param_5,param_6,param_7,
                         param_8);
        }
        else {
          FUN_7103778b80(local_a0,(long)plVar29,ppppppppplVar18,param_4,(long ****)param_5,param_6,
                         param_7,param_8);
          ppuVar12 = local_f8;
          FUN_7103778b80((long)local_f8,(long)plVar29,ppppppppplVar18,param_4,(long ****)param_5,
                         param_6,param_7,param_8);
        }
        local_a0 = 0;
        local_a8 = (long ********)&PTR_FUN_710523d9a8;
        if (uVar19 != 0) {
          local_a0 = 0;
          local_a8 = (long ********)&PTR_FUN_710523d9a8;
          FUN_710392eb40(uVar19);
        }
        uVar13 = (ulong)((int)uVar13 + 1);
        local_100 = &PTR_FUN_710523d9a8;
        local_f8 = (undefined **)0x0;
        if (ppuVar12 != (undefined **)0x0) {
          FUN_710392eb40((ulong)ppuVar12);
        }
      }
      if (*(char *)(lVar20 + 0x311) != '\0') {
        puVar33 = *(undefined1 **)(puVar32 + -6);
        if ((((ulong)puVar33 & 0xff00000000000000) == 0xc100000000000000) &&
           (((ulong)puVar33 & 0xffffffffff) != 0)) {
          lVar26 = *(long *)(DAT_710532f730 + 8);
          lVar35 = *(long *)(lVar26 + 0x168);
          uVar10 = puVar32[-4];
          uVar9 = FUN_71032632a0(lVar35,(ulong)puVar33);
          uVar19 = 0x11b1ccb807;
          if ((uVar9 & 1) == 0) {
            bVar7 = FUN_71032648e0(lVar26 + 0x160,(ulong)puVar33);
            uVar19 = 0x143829f67e;
            if (bVar7) goto LAB_7101ab9dbc;
          }
          else {
LAB_7101ab9dbc:
            puVar33 = FUN_71032631a0(lVar35,uVar19);
          }
          FUN_7103776910(&local_100,(long)param_3,(long ****)"set_rep_stockicon_%02d",uVar13,param_4
                         ,(long ****)param_5,param_6,param_7,param_8);
          FUN_7103776910(&local_a8,(long)param_3,(long ****)"set_rep_stockicon_%02d_",uVar13,param_4
                         ,(long ****)param_5,param_6,param_7,param_8);
          param_4 = (byte ****)0x2;
          ppppppppplVar18 = (long *********)(ulong)uVar10;
          plVar29 = FUN_710323f330(*(long **)(param_1 + 0x170),(ulong)puVar33,(ulong)ppppppppplVar18
                                   ,2,(long ****)param_5,param_6,param_7,param_8);
          uVar19 = local_a0;
          ppuVar12 = local_f8;
          if (*(long *)plVar29[1] == 0) {
            FUN_71037790a0((long)local_f8,1,ppppppppplVar18,param_4,(long ****)param_5,param_6,
                           param_7,param_8);
            uVar19 = local_a0;
            FUN_71037790a0(local_a0,1,ppppppppplVar18,param_4,(long ****)param_5,param_6,param_7,
                           param_8);
          }
          else {
            FUN_7103778b80(local_a0,(long)plVar29,ppppppppplVar18,param_4,(long ****)param_5,param_6
                           ,param_7,param_8);
            ppuVar12 = local_f8;
            FUN_7103778b80((long)local_f8,(long)plVar29,ppppppppplVar18,param_4,(long ****)param_5,
                           param_6,param_7,param_8);
          }
          local_a0 = 0;
          local_a8 = (long ********)&PTR_FUN_710523d9a8;
          if (uVar19 != 0) {
            local_a0 = 0;
            local_a8 = (long ********)&PTR_FUN_710523d9a8;
            FUN_710392eb40(uVar19);
          }
          uVar13 = (ulong)((int)uVar13 + 1);
          local_100 = &PTR_FUN_710523d9a8;
          local_f8 = (undefined **)0x0;
          if (ppuVar12 != (undefined **)0x0) {
            FUN_710392eb40((ulong)ppuVar12);
          }
          if (*(char *)(lVar20 + 0x311) == '\0') goto LAB_7101ab9f7c;
        }
        puVar33 = *(undefined1 **)(puVar32 + -2);
        uVar10 = *puVar32;
        if ((((ulong)puVar33 & 0xff00000000000000) == 0xc100000000000000) &&
           (((ulong)puVar33 & 0xffffffffff) != 0)) {
          lVar26 = *(long *)(DAT_710532f730 + 8);
          lVar35 = *(long *)(lVar26 + 0x168);
          uVar9 = FUN_71032632a0(lVar35,(ulong)puVar33);
          uVar19 = 0x11b1ccb807;
          if ((uVar9 & 1) == 0) {
            bVar7 = FUN_71032648e0(lVar26 + 0x160,(ulong)puVar33);
            uVar19 = 0x143829f67e;
            if (bVar7) goto LAB_7101ab9ed4;
          }
          else {
LAB_7101ab9ed4:
            puVar33 = FUN_71032631a0(lVar35,uVar19);
          }
          FUN_7103776910(&local_100,(long)param_3,(long ****)"set_rep_stockicon_%02d",uVar13,param_4
                         ,(long ****)param_5,param_6,param_7,param_8);
          FUN_7103776910(&local_a8,(long)param_3,(long ****)"set_rep_stockicon_%02d_",uVar13,param_4
                         ,(long ****)param_5,param_6,param_7,param_8);
          param_4 = (byte ****)0x2;
          ppppppppplVar18 = (long *********)(ulong)uVar10;
          plVar29 = FUN_710323f330(*(long **)(param_1 + 0x170),(ulong)puVar33,(ulong)ppppppppplVar18
                                   ,2,(long ****)param_5,param_6,param_7,param_8);
          uVar19 = local_a0;
          ppuVar12 = local_f8;
          if (*(long *)plVar29[1] == 0) {
            FUN_71037790a0((long)local_f8,1,ppppppppplVar18,param_4,(long ****)param_5,param_6,
                           param_7,param_8);
            uVar19 = local_a0;
            FUN_71037790a0(local_a0,1,ppppppppplVar18,param_4,(long ****)param_5,param_6,param_7,
                           param_8);
          }
          else {
            FUN_7103778b80(local_a0,(long)plVar29,ppppppppplVar18,param_4,(long ****)param_5,param_6
                           ,param_7,param_8);
            ppuVar12 = local_f8;
            FUN_7103778b80((long)local_f8,(long)plVar29,ppppppppplVar18,param_4,(long ****)param_5,
                           param_6,param_7,param_8);
          }
          local_a0 = 0;
          local_a8 = (long ********)&PTR_FUN_710523d9a8;
          if (uVar19 != 0) {
            local_a0 = 0;
            local_a8 = (long ********)&PTR_FUN_710523d9a8;
            FUN_710392eb40(uVar19);
          }
          uVar13 = (ulong)((int)uVar13 + 1);
          local_100 = &PTR_FUN_710523d9a8;
          local_f8 = (undefined **)0x0;
          if (ppuVar12 != (undefined **)0x0) {
            FUN_710392eb40((ulong)ppuVar12);
          }
        }
      }
LAB_7101ab9f7c:
      puVar1 = puVar32 + 2;
      puVar32 = puVar32 + 0x14;
      ppuVar12 = local_f8;
    } while (puVar1 != (uint *)(lVar20 + 0x3b8));
  }
  else {
    lVar20 = 0;
    local_f8 = (undefined **)0x0;
    local_f0 = (undefined **)0x0;
    local_100 = (undefined **)0x0;
    do {
      lVar26 = lVar36 + uVar28 * 0x3c0 + lVar20;
      if ((*(char *)(lVar26 + 0x90) != '\0') &&
         (puVar33 = *(undefined1 **)(lVar26 + 0x80),
         ((ulong)puVar33 & 0xff00000000000000) == 0xc100000000000000 &&
         ((ulong)puVar33 & 0xffffffffff) != 0)) {
        lVar35 = *(long *)(DAT_710532f730 + 8);
        lVar30 = *(long *)(lVar35 + 0x168);
        uVar10 = FUN_71032632a0(lVar30,(ulong)puVar33);
        uVar19 = 0x11b1ccb807;
        if ((uVar10 & 1) == 0) {
          bVar7 = FUN_71032648e0(lVar35 + 0x160,(ulong)puVar33);
          uVar19 = 0x143829f67e;
          if (bVar7) goto LAB_7101aba030;
        }
        else {
LAB_7101aba030:
          puVar33 = FUN_71032631a0(lVar30,uVar19);
        }
        ppuVar12 = local_100;
        bVar5 = *(byte *)(lVar26 + 0x92);
        uVar3 = *(undefined4 *)(lVar26 + 0x98);
        if (local_f8 < local_f0) {
          *(undefined4 *)local_f8 = uVar3;
          local_f8[1] = puVar33;
          *(uint *)(local_f8 + 2) = (uint)bVar5;
          local_f8 = local_f8 + 3;
        }
        else {
          ppppppppplVar31 = (long *********)((long)local_f8 - (long)local_100);
          uVar13 = 0xaaaaaaaaaaaaaaa;
          uVar19 = ((long)ppppppppplVar31 >> 3) * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar19) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar26 = (long)local_f0 - (long)local_100 >> 3;
          if ((ulong)(lVar26 * -0x5555555555555555) < 0x555555555555555) {
            uVar24 = lVar26 * 0x5555555555555556;
            uVar13 = uVar19;
            if (uVar19 <= uVar24) {
              uVar13 = uVar24;
            }
            if (uVar13 != 0) goto LAB_7101aba0c0;
            lVar26 = 0;
          }
          else {
LAB_7101aba0c0:
            pppppppplVar22 = (long ********)(uVar13 * 0x18);
            if (pppppppplVar22 == (long ********)0x0) {
              pppppppplVar22 = (long ********)0x1;
            }
            lVar26 = FUN_710392e290(0x10,pppppppplVar22,(long ****)ppppppppplVar18,param_4,
                                    (long ****)param_5,param_6,param_7,param_8);
            if (lVar26 == 0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
                ppppppppplVar18 = &local_a8;
                local_a8 = pppppppplVar22;
                uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
                if (((uVar19 & 1) != 0) &&
                   (lVar26 = FUN_710392e290(0x10,pppppppplVar22,(long ****)ppppppppplVar18,param_4,
                                            (long ****)param_5,param_6,param_7,param_8), lVar26 != 0
                   )) goto LAB_7101aba128;
              }
              lVar26 = 0;
            }
          }
LAB_7101aba128:
          lVar35 = SUB168(SEXT816((long)ppppppppplVar31) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
          puVar21 = (undefined4 *)(lVar26 + ((long)ppppppppplVar31 >> 3) * 8);
          ppuVar27 = (undefined **)(lVar26 + uVar13 * 0x18);
          *(undefined1 **)(puVar21 + 2) = puVar33;
          puVar21[4] = (uint)bVar5;
          *puVar21 = uVar3;
          __dest = (undefined **)(puVar21 + ((lVar35 >> 2) - (lVar35 >> 0x3f)) * 6);
          if (0 < (long)ppppppppplVar31) {
            memcpy(__dest,ppuVar12,(size_t)ppppppppplVar31);
            ppppppppplVar18 = ppppppppplVar31;
          }
          local_100 = __dest;
          local_f8 = (undefined **)(puVar21 + 6);
          local_f0 = ppuVar27;
          if (ppuVar12 != (undefined **)0x0) {
            FUN_710392eb40((ulong)ppuVar12);
          }
        }
      }
      ppuVar27 = local_f8;
      ppuVar12 = local_100;
      lVar20 = lVar20 + 0x50;
    } while (lVar20 != 0x280);
    ppppppppplVar31 =
         (long *********)(((long)local_f8 - (long)local_100 >> 3) * -0x5555555555555555);
    if (0 < (long)local_f8 - (long)local_100) {
      ppppppppplVar34 = ppppppppplVar31;
      if (0x555555555555554 < (long)ppppppppplVar31) {
        ppppppppplVar34 = (long *********)0x555555555555555;
      }
      do {
        pppppppplVar22 = (long ********)((long)ppppppppplVar34 * 0x18);
        if (pppppppplVar22 == (long ********)0x0) {
          pppppppplVar22 = (long ********)0x1;
        }
        ppppbVar14 = (byte ****)
                     FUN_710392e290(0x10,pppppppplVar22,(long ****)ppppppppplVar18,param_4,
                                    (long ****)param_5,param_6,param_7,param_8);
        if (ppppbVar14 != (byte ****)0x0) {
LAB_7101aba24c:
          param_4 = ppppbVar14;
          FUN_7101aba710((int *)ppuVar12,(int *)ppuVar27,(ulong)ppppppppplVar31,(int *)ppppbVar14,
                         (long)ppppppppplVar34);
          FUN_710392eb40((ulong)ppppbVar14);
          goto LAB_7101aba270;
        }
        if (DAT_7105332f00 != (long *)0x0) {
          local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
          ppppppppplVar18 = &local_a8;
          local_a8 = pppppppplVar22;
          uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
          if (((uVar19 & 1) != 0) &&
             (ppppbVar14 = (byte ****)
                           FUN_710392e290(0x10,pppppppplVar22,(long ****)ppppppppplVar18,param_4,
                                          (long ****)param_5,param_6,param_7,param_8),
             ppppbVar14 != (byte ****)0x0)) goto LAB_7101aba24c;
        }
        ppppppppplVar34 = (long *********)((ulong)ppppppppplVar34 >> 1);
      } while (ppppppppplVar34 != (long *********)0x0);
    }
    param_4 = (byte ****)0x0;
    ppppppppplVar34 = (long *********)0x0;
    FUN_7101aba710((int *)ppuVar12,(int *)ppuVar27,(ulong)ppppppppplVar31,(int *)0x0,0);
LAB_7101aba270:
    if (local_f8 == local_100) {
      uVar13 = 0;
      ppppppppplVar18 = ppppppppplVar31;
      param_5 = ppppppppplVar34;
      ppuVar27 = local_f8;
      ppuVar12 = local_f8;
    }
    else {
      lVar20 = 0;
      uVar19 = 0;
      do {
        ppppppppplVar18 = (long *********)(ulong)*(uint *)((long)local_100 + lVar20 + 0x10);
        param_4 = (byte ****)0x2;
        plVar29 = FUN_710323f330(*(long **)(param_1 + 0x170),
                                 *(ulong *)((long)local_100 + lVar20 + 8),(ulong)ppppppppplVar18,2,
                                 (long ****)ppppppppplVar34,param_6,param_7,param_8);
        if (*(long *)plVar29[1] != 0) {
          FUN_7103776910(&local_a8,(long)param_3,(long ****)"set_rep_stockicon_%02d_",
                         uVar19 & 0xffffffff,param_4,(long ****)ppppppppplVar34,param_6,param_7,
                         param_8);
          ppppppppplVar18 = (long *********)(uVar19 & 0xffffffff);
          FUN_7103776910(&local_b8,(long)param_3,(long ****)"set_rep_stockicon_%02d",ppppppppplVar18
                         ,param_4,(long ****)ppppppppplVar34,param_6,param_7,param_8);
          uVar24 = local_a0;
          FUN_7103778b80(local_a0,(long)plVar29,ppppppppplVar18,param_4,(long ****)ppppppppplVar34,
                         param_6,param_7,param_8);
          uVar13 = local_b0;
          FUN_7103778b80(local_b0,(long)plVar29,ppppppppplVar18,param_4,(long ****)ppppppppplVar34,
                         param_6,param_7,param_8);
          local_b8 = &PTR_FUN_710523d9a8;
          local_b0 = 0;
          if (uVar13 != 0) {
            FUN_710392eb40(uVar13);
          }
          local_a8 = (long ********)&PTR_FUN_710523d9a8;
          local_a0 = 0;
          if (uVar24 != 0) {
            FUN_710392eb40(uVar24);
          }
        }
        uVar13 = ((long)local_f8 - (long)local_100 >> 3) * -0x5555555555555555;
        uVar19 = uVar19 + 1;
        lVar20 = lVar20 + 0x18;
        param_5 = ppppppppplVar34;
        ppuVar27 = local_100;
        ppuVar12 = local_f8;
      } while (uVar19 <= uVar13 && uVar13 - uVar19 != 0);
    }
    local_f8 = ppuVar27;
    if (local_f8 != (undefined **)0x0) {
      FUN_710392eb40((ulong)local_f8);
      ppuVar12 = local_f8;
    }
  }
  local_f8 = ppuVar12;
  if (bVar6) {
    if (*(char *)(lVar36 + uVar28 * 0x3c0 + 0x311) == '\x01') {
      pcVar17 = "stockicon_5vs5";
    }
    else {
      pcVar17 = "stockicon_3vs3";
    }
    FUN_7103778300(0x3f800000,(long)param_3[1],(long)pcVar17);
  }
  else {
    FUN_71003a4ca0((uint *)&local_100,"stockicon%02d",uVar13 & 0xffffffff,ppppppppplVar18,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7103778300(0x3f800000,(long)param_3[1],(long)&local_f8);
  }
  puVar2 = (ushort *)(lVar36 + uVar28 * 0x3c0 + 0x14);
  FUN_7103776640(&local_100,(long)param_3,(byte ****)"set_parts_text_scroll",ppppppppplVar18,param_4
                 ,(long ****)param_5,param_6,param_7,param_8);
  if (local_f8[1] != (undefined *)0x0) {
    puVar11 = *(undefined8 **)(local_f8[1] + 0x78);
    if (((DAT_710593ba40 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_710593ba40), iVar8 != 0)) {
      if (((DAT_710593ba48 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_710593ba48), iVar8 != 0))
      {
        DAT_710593ba50 = 0;
        __cxa_guard_release(&DAT_710593ba48);
      }
      DAT_710593ba58 = &DAT_710593ba50;
      __cxa_guard_release(&DAT_710593ba40);
    }
    if (puVar11 != (undefined8 *)0x0) {
      for (puVar15 = (undefined8 *)(**(code **)*puVar11)(puVar11); puVar15 != (undefined8 *)0x0;
          puVar15 = (undefined8 *)*puVar15) {
        if ((undefined8 **)puVar15 == &DAT_710593ba58) {
          *(undefined1 *)(puVar11 + 0xc) = 1;
          break;
        }
      }
    }
  }
  FUN_7103776910(&local_110,(long)&local_100,(long ****)"set_txt_mask",ppppppppplVar18,param_4,
                 (long ****)param_5,param_6,param_7,param_8);
  if (*puVar2 == 0) {
    FUN_710377a120((long)&local_110,"mnu_replay_data_title_default",ppppppppplVar18,param_4,param_5,
                   param_6,param_7,param_8);
    uVar19 = local_108;
  }
  else {
    uVar19 = local_108;
    if (*(long **)(local_108 + 0x10) != (long *)0x0) {
      ppppppppplVar18 = (long *********)&DAT_ffffffff;
      param_4 = (byte ****)0x1;
      FUN_71037a2270(*(long **)(local_108 + 0x10),puVar2,0xffffffff,1);
    }
  }
  local_110 = &PTR_FUN_710523d9a8;
  local_108 = 0;
  if (uVar19 != 0) {
    FUN_710392eb40(uVar19);
  }
  FUN_7103776910(&local_120,(long)&local_100,(long ****)"set_txt_main",ppppppppplVar18,param_4,
                 (long ****)param_5,param_6,param_7,param_8);
  if (*puVar2 == 0) {
    FUN_710377a120((long)&local_120,"mnu_replay_data_title_default",ppppppppplVar18,param_4,param_5,
                   param_6,param_7,param_8);
    uVar19 = local_118;
  }
  else {
    uVar19 = local_118;
    if (*(long **)(local_118 + 0x10) != (long *)0x0) {
      ppppppppplVar18 = (long *********)&DAT_ffffffff;
      param_4 = (byte ****)0x1;
      FUN_71037a2270(*(long **)(local_118 + 0x10),puVar2,0xffffffff,1);
    }
  }
  local_120 = &PTR_FUN_710523d9a8;
  local_118 = 0;
  if (uVar19 != 0) {
    FUN_710392eb40(uVar19);
  }
  FUN_7103776910(&local_a8,(long)param_3,(long ****)"set_txt_modename",ppppppppplVar18,param_4,
                 (long ****)param_5,param_6,param_7,param_8);
  FUN_710377a120((long)&local_a8,local_158,ppppppppplVar18,param_4,param_5,param_6,param_7,param_8);
  uVar19 = local_a0;
  local_a8 = (long ********)&PTR_FUN_710523d9a8;
  local_a0 = 0;
  if (uVar19 != 0) {
    FUN_710392eb40(uVar19);
  }
  FUN_7103776910(&local_a8,(long)param_3,(long ****)"set_txt_modename_00",ppppppppplVar18,param_4,
                 (long ****)param_5,param_6,param_7,param_8);
  FUN_710377a120((long)&local_a8,local_158,ppppppppplVar18,param_4,param_5,param_6,param_7,param_8);
  uVar19 = local_a0;
  local_a8 = (long ********)&PTR_FUN_710523d9a8;
  local_a0 = 0;
  if (uVar19 != 0) {
    FUN_710392eb40(uVar19);
  }
  FUN_7103776910(&local_a8,(long)param_3,(long ****)"set_txt_time",ppppppppplVar18,param_4,
                 (long ****)param_5,param_6,param_7,param_8);
  FUN_710377a280((long)&local_a8,(byte *)"mnu_replay_detail_time_movie",1);
  uVar19 = local_a0;
  local_a8 = (long ********)&PTR_FUN_710523d9a8;
  local_a0 = 0;
  if (uVar19 != 0) {
    FUN_710392eb40(uVar19);
  }
  ppuVar12 = local_f8;
  local_100 = &PTR_FUN_710523d988;
  local_f8 = (undefined **)0x0;
  if (ppuVar12 == (undefined **)0x0) {
    return;
  }
  puVar16 = ppuVar12[3];
  ppuVar12[2] = (undefined *)&PTR_FUN_710523d9a8;
  ppuVar12[3] = (undefined *)0x0;
  if (puVar16 != (undefined *)0x0) {
    FUN_710392eb40((ulong)puVar16);
  }
LAB_7101ab93a0:
  FUN_710392eb40((ulong)ppuVar12);
  return;
}

