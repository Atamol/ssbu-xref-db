// addr:      7101e24380
// offset:    0x1e24380
// name:      FUN_7101e24380
// mangled:   
// signature: undefined __cdecl FUN_7101e24380(long param_1, ulong param_2, ulong param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e24380(long param_1,ulong param_2,ulong param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  ulong uVar10;
  byte ****ppppbVar11;
  int *piVar12;
  byte *pbVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  undefined **local_278;
  ulong local_270;
  uint auStack_268 [2];
  byte ***apppbStack_260 [8];
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined2 local_208;
  undefined8 local_206;
  undefined1 local_1fe;
  char acStack_1d8 [32];
  undefined4 local_1b8 [2];
  undefined **local_1b0;
  long local_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined4 local_178 [2];
  undefined **local_170;
  long local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined4 local_138 [2];
  undefined **local_130;
  long local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  byte ***apppbStack_f8 [4];
  undefined **local_d8;
  ulong local_d0;
  byte ***apppbStack_c8 [4];
  undefined **local_a8;
  long *local_a0 [8];
  
  uVar10 = (ulong)*(uint *)(param_1 + 0xbf4);
  pcVar9 = "set_parts_list_%02d";
  snprintf((char *)apppbStack_c8,0x20,"set_parts_list_%02d",*(uint *)(param_1 + 0xbf4));
  FUN_7103776640(&local_d8,param_1 + 0xba0,apppbStack_c8,pcVar9,uVar10,param_5,param_6,param_7,
                 param_8);
  ppppbVar11 = (byte ****)(ulong)*(uint *)(param_1 + 0xbf8);
  pcVar9 = "set_parts_base_%02d";
  snprintf((char *)apppbStack_f8,0x20,"set_parts_base_%02d",*(uint *)(param_1 + 0xbf8));
  if (*(int *)(param_1 + 0xdb8) == 1) {
    if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
       (uVar10 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x10c0b65170,(long ****)&DAT_00000004,
                                ppppbVar11,param_5,param_6,param_7,param_8), (uVar10 & 1) != 0)) {
      FUN_71024076d0(local_178,0x10c0b65170);
      if (((local_168 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_160 == DAT_7106dd53ac)) {
        piVar12 = (int *)(local_168 + 0x38);
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar4) {
            *piVar12 = *piVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    else {
      local_160 = 0x87650000000000;
      local_150 = 0xffffffffffffffff;
      uStack_148 = 0;
      local_178[0] = 0;
      local_140 = 0;
    }
    local_170 = &PTR_FUN_7104f73d50;
    local_168 = 0;
    local_158 = 0;
LAB_7101e2467c:
    lVar19 = *(long *)(param_1 + 0xba8);
LAB_7101e24680:
    pcVar9 = "hide_txt_help_remove";
  }
  else {
    if (*(int *)(param_1 + 0xdb8) == 2) {
      if ((param_3 & 1) != 0) {
        if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
           (uVar10 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x10c0b65170,
                                    (long ****)&DAT_00000004,ppppbVar11,param_5,param_6,param_7,
                                    param_8), (uVar10 & 1) != 0)) {
          FUN_71024076d0(local_138,0x10c0b65170);
          if (((local_128 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_120 == DAT_7106dd53ac)
             ) {
            piVar12 = (int *)(local_128 + 0x38);
            do {
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
              if (bVar4) {
                *piVar12 = *piVar12 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        else {
          local_120 = 0x87650000000000;
          local_110 = 0xffffffffffffffff;
          uStack_108 = 0;
          local_138[0] = 0;
          local_100 = 0;
        }
        local_130 = &PTR_FUN_7104f73d50;
        local_128 = 0;
        local_118 = 0;
      }
      lVar19 = *(long *)(*(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8) + 0x80);
      (**(code **)(**(long **)(lVar19 + 0x2268) + 0x70))(*(long **)(lVar19 + 0x2268),1);
      iVar5 = -1;
      if (*(int *)(lVar19 + 0x11b0) - 1U < 5) {
        iVar5 = 1;
      }
      iVar1 = 2;
      if (*(int *)(lVar19 + 0x11b0) < 6) {
        iVar1 = iVar5;
      }
      FUN_7103771a80((long *)(lVar19 + 0x2268),iVar1,0);
      goto LAB_7101e2467c;
    }
    FUN_7103776910(&local_a8,(long)&local_d8,(long ****)apppbStack_f8,pcVar9,ppppbVar11,param_5,
                   param_6,param_7,param_8);
    plVar17 = local_a0[0];
    lVar19 = *local_a0[0];
    if ((lVar19 == 0) || (lVar18 = *(long *)(lVar19 + 0x18), lVar18 == 0)) {
LAB_7101e245a0:
      local_a8 = &PTR_FUN_710523d9a8;
      local_a0[0] = (long *)0x0;
      if (plVar17 != (long *)0x0) goto LAB_7101e246b4;
    }
    else {
      lVar14 = *(long *)(lVar18 + 0x28);
      lVar21 = *(long *)(lVar18 + 0x18);
      if (lVar14 == lVar18 + 0x20) {
        bVar4 = true;
      }
      else {
        uVar15 = 0;
        do {
          lVar14 = *(long *)(lVar14 + 8);
          uVar15 = uVar15 + 1;
        } while (lVar14 != lVar18 + 0x20);
        bVar4 = uVar15 < 2;
      }
      if ((lVar21 != 0) && (bVar4)) {
        FUN_7100058290(lVar21,lVar18);
        FUN_7100058250(lVar21,lVar18);
        goto LAB_7101e245a0;
      }
      FUN_7100058290(lVar18,lVar19);
      FUN_7100058250(lVar18,*local_a0[0]);
LAB_7101e246b4:
      local_a0[0] = (long *)0x0;
      local_a8 = &PTR_FUN_710523d9a8;
      FUN_710392eb40((ulong)plVar17);
    }
    FUN_7103776ad0(&local_a8,(long)&local_d8,(long ****)apppbStack_f8,pcVar9,ppppbVar11,param_5,
                   param_6,param_7,param_8);
    plVar17 = local_a0[0];
    plVar20 = (long *)*local_a0[0];
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 0x218))(plVar20,1);
      (**(code **)(*plVar20 + 0x408))(plVar20);
      (**(code **)(*plVar20 + 1000))(plVar20,0);
      iVar5 = (**(code **)(*plVar20 + 0x140))(plVar20);
      if ((iVar5 != 6) && (iVar5 = (**(code **)(*plVar20 + 0x140))(plVar20), iVar5 != 1)) {
        (**(code **)(*plVar20 + 0x3f8))(plVar20);
      }
      uVar10 = (**(code **)(*plVar20 + 0x158))(plVar20);
      if ((uVar10 & 1) == 0) {
        (**(code **)(*plVar20 + 0x360))(plVar20);
      }
    }
    local_a8 = &PTR_FUN_710523d9c8;
    local_a0[0] = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar17);
    }
    if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
      pcVar9 = (char *)0x4;
      uVar10 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x10c0b65170,(long ****)&DAT_00000004,
                              ppppbVar11,param_5,param_6,param_7,param_8);
      if ((uVar10 & 1) == 0) goto LAB_7101e2481c;
      FUN_71024076d0(local_1b8,0x10c0b65170);
      if (((local_1a8 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_1a0 == DAT_7106dd53ac)) {
        piVar12 = (int *)(local_1a8 + 0x38);
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar4) {
            *piVar12 = *piVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    else {
LAB_7101e2481c:
      local_1a0 = 0x87650000000000;
      local_190 = 0xffffffffffffffff;
      uStack_188 = 0;
      local_1b8[0] = 0;
      local_180 = 0;
    }
    local_1b0 = &PTR_FUN_7104f73d50;
    local_1a8 = 0;
    local_198 = 0;
    lVar19 = param_1 + (long)*(int *)(param_1 + 0xbf4) * 0x40;
    if (*(char *)(lVar19 + 0xf50) == '\0') {
      ppppbVar11 = (byte ****)(long)*(int *)(param_1 + 0xbf8);
      if (*(int *)(lVar19 + (long)ppppbVar11 * 4 + 0xf38) < 1) goto LAB_7101e24860;
      snprintf(acStack_1d8,0x20,"pos_arrow_%02d",*(int *)(param_1 + 0xbf8));
      local_218 = (undefined8 *)0x726970735f756e6d;
      local_210 = 0x656c65735f737469;
      local_208 = 0x7463;
      local_1fe = 0;
      local_206 = 0x6d616e5f6465705f;
      uVar15 = 0x811c9dc5;
      uVar16 = 0x6d;
      pbVar13 = (byte *)((long)&local_218 + 1);
      do {
        uVar15 = uVar15 * 0x89 ^ uVar16;
        uVar16 = (uint)*pbVar13;
        pbVar13 = pbVar13 + 1;
      } while (uVar16 != 0);
      local_220 = (undefined **)CONCAT44(0x1a,uVar15);
      lVar19 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      uVar10 = FUN_71032a9470(lVar19,*(ushort *)
                                      (param_1 + 0xf18 + (long)*(int *)(param_1 + 0xbf4) * 0x40 +
                                      (long)*(int *)(param_1 + 0xbf8) * 2));
      FUN_71032a9540((uint *)&local_a8,lVar19,uVar10);
      FUN_71003a4ca0(auStack_268,"spi_%s",local_a0,uVar10,ppppbVar11,param_5,param_6,param_7,param_8
                    );
      if (*(char *)(param_1 + 0xf18 + (long)*(int *)(param_1 + 0xbf4) * 0x40 +
                    (long)*(int *)(param_1 + 0xbf8) + 0xc) == '\0') {
        FUN_7103776910(&local_a8,(long)&local_d8,(long ****)"set_txt_dtl",uVar10,ppppbVar11,param_5,
                       param_6,param_7,param_8);
        FUN_710377a120((long)&local_a8,(char *)apppbStack_260,uVar10,ppppbVar11,param_5,param_6,
                       param_7,param_8);
        plVar17 = local_a0[0];
        local_a8 = &PTR_FUN_710523d9a8;
        local_a0[0] = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar17);
        }
        uVar8 = local_d0;
        FUN_7103778300(0x3f800000,local_d0,0x7104292224);
        if ((*(int *)(param_1 + 0xbfc) != *(int *)(param_1 + 0xbf4)) ||
           (*(int *)(param_1 + 0xc00) != *(int *)(param_1 + 0xbf8))) {
          FUN_7103776640(&local_278,(long)&local_d8,apppbStack_f8,uVar10,ppppbVar11,param_5,param_6,
                         param_7,param_8);
          pcVar9 = "set_btn_00_cursor";
          goto LAB_7101e24d08;
        }
      }
      else {
        FUN_7103776910(&local_a8,(long)&local_d8,(long ****)"set_txt_dtl",uVar10,ppppbVar11,param_5,
                       param_6,param_7,param_8);
        ppppbVar11 = apppbStack_260;
        uVar10 = 1;
        FUN_710377a280((long)&local_a8,(byte *)&local_218,1);
        plVar17 = local_a0[0];
        local_a8 = &PTR_FUN_710523d9a8;
        local_a0[0] = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar17);
        }
        uVar8 = local_d0;
        FUN_7103778300(0x3f800000,local_d0,0x710424fab3);
        if ((*(int *)(param_1 + 0xbfc) != *(int *)(param_1 + 0xbf4)) ||
           (*(int *)(param_1 + 0xc00) != *(int *)(param_1 + 0xbf8))) {
          FUN_7103776640(&local_278,(long)&local_d8,apppbStack_f8,uVar10,ppppbVar11,param_5,param_6,
                         param_7,param_8);
          pcVar9 = "set_btn_01_cursor";
LAB_7101e24d08:
          FUN_7103776640(&local_a8,(long)&local_278,(byte ****)pcVar9,uVar10,ppppbVar11,param_5,
                         param_6,param_7,param_8);
          plVar17 = local_a0[0];
          FUN_7103778300(0x3f800000,(long)local_a0[0],0x7104412fd0);
          local_a8 = &PTR_FUN_710523d988;
          local_a0[0] = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            uVar6 = plVar17[3];
            plVar17[2] = (long)&PTR_FUN_710523d9a8;
            plVar17[3] = 0;
            if (uVar6 != 0) {
              FUN_710392eb40(uVar6);
            }
            FUN_710392eb40((ulong)plVar17);
          }
          uVar6 = local_270;
          local_278 = &PTR_FUN_710523d988;
          local_270 = 0;
          if (uVar6 != 0) {
            uVar7 = *(ulong *)(uVar6 + 0x18);
            *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar6 + 0x18) = 0;
            if (uVar7 != 0) {
              FUN_710392eb40(uVar7);
            }
            FUN_710392eb40(uVar6);
          }
        }
      }
      FUN_7103776910(&local_a8,(long)&local_d8,(long ****)"set_txt_numl_have_dtl",uVar10,ppppbVar11,
                     param_5,param_6,param_7,param_8);
      FUN_710377a280((long)&local_a8,(byte *)"mnu_spirits_recall_spirit_n",1);
      plVar17 = local_a0[0];
      local_a8 = &PTR_FUN_710523d9a8;
      local_a0[0] = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar17);
      }
      FUN_7103778300(0x3f800000,uVar8,0x71042b48b0);
      FUN_7103778300(0x3f800000,uVar8,(long)acStack_1d8);
      if (*(int *)(param_1 + 0xc04) == 4) {
        iVar5 = *(int *)(param_1 + 0xbf4);
        if ((*(int *)(param_1 + 0xbfc) != iVar5) ||
           (*(short *)(param_1 + (long)*(int *)(param_1 + 0xbfc) * 0x40 +
                       (long)*(int *)(param_1 + 0xc00) * 2 + 0xf18) == -1)) {
          if (iVar5 == 2) {
            lVar19 = *(long *)(param_1 + 0xba8);
            pcVar9 = "slide_02";
          }
          else if (iVar5 == 1) {
            lVar19 = *(long *)(param_1 + 0xba8);
            pcVar9 = "slide_01";
          }
          else {
            lVar19 = *(long *)(param_1 + 0xba8);
            pcVar9 = "slide_00";
          }
          FUN_7103778300(0x3f800000,lVar19,(long)pcVar9);
        }
      }
    }
    else {
LAB_7101e24860:
      FUN_7103778300(0x3f800000,local_d0,0x710435bcec);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xba8),0x710433a651);
      if ((*(int *)(param_1 + 0xbfc) != *(int *)(param_1 + 0xbf4)) ||
         (*(int *)(param_1 + 0xc00) != *(int *)(param_1 + 0xbf8))) {
        FUN_7103776640(&local_220,(long)&local_d8,apppbStack_f8,pcVar9,ppppbVar11,param_5,param_6,
                       param_7,param_8);
        FUN_7103776640(&local_a8,(long)&local_220,(byte ****)"set_btn_01_cursor",pcVar9,ppppbVar11,
                       param_5,param_6,param_7,param_8);
        plVar17 = local_a0[0];
        FUN_7103778300(0x3f800000,(long)local_a0[0],0x7104412fd0);
        local_a8 = &PTR_FUN_710523d988;
        local_a0[0] = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          uVar10 = plVar17[3];
          plVar17[2] = (long)&PTR_FUN_710523d9a8;
          plVar17[3] = 0;
          if (uVar10 != 0) {
            FUN_710392eb40(uVar10);
          }
          FUN_710392eb40((ulong)plVar17);
        }
        puVar3 = local_218;
        local_220 = &PTR_FUN_710523d988;
        local_218 = (undefined8 *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          uVar10 = puVar3[3];
          puVar3[2] = &PTR_FUN_710523d9a8;
          puVar3[3] = 0;
          if (uVar10 != 0) {
            FUN_710392eb40(uVar10);
          }
          FUN_710392eb40((ulong)puVar3);
        }
        FUN_7103776640(&local_220,(long)&local_d8,apppbStack_f8,pcVar9,ppppbVar11,param_5,param_6,
                       param_7,param_8);
        FUN_7103776640(&local_a8,(long)&local_220,(byte ****)"set_btn_00_cursor",pcVar9,ppppbVar11,
                       param_5,param_6,param_7,param_8);
        plVar17 = local_a0[0];
        FUN_7103778300(0x3f800000,(long)local_a0[0],0x7104412fd0);
        local_a8 = &PTR_FUN_710523d988;
        local_a0[0] = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          uVar10 = plVar17[3];
          plVar17[2] = (long)&PTR_FUN_710523d9a8;
          plVar17[3] = 0;
          if (uVar10 != 0) {
            FUN_710392eb40(uVar10);
          }
          FUN_710392eb40((ulong)plVar17);
        }
        uVar10 = (ulong)local_218;
        local_220 = &PTR_FUN_710523d988;
        local_218 = (undefined8 *)0x0;
        if (uVar10 != 0) {
          uVar8 = *(ulong *)(uVar10 + 0x18);
          *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar10 + 0x18) = 0;
          if (uVar8 != 0) {
            FUN_710392eb40(uVar8);
          }
          FUN_710392eb40(uVar10);
        }
      }
    }
    lVar19 = *(long *)(param_1 + 0xba8);
    if (*(short *)(param_1 + (long)*(int *)(param_1 + 0xbf4) * 0x40 +
                   (long)*(int *)(param_1 + 0xbf8) * 2 + 0xf18) == -1) goto LAB_7101e24680;
    pcVar9 = "show_txt_help_remove";
  }
  FUN_7103778300(0x3f800000,lVar19,(long)pcVar9);
  if (*(int *)(param_1 + 0xc00) == *(int *)(param_1 + 0xbf8)) {
    iVar5 = *(int *)(param_1 + 0xbfc);
    if ((iVar5 == *(int *)(param_1 + 0xbf4)) || ((param_2 & 1) == 0)) goto LAB_7101e25020;
  }
  else {
    if ((param_2 & 1) == 0) goto LAB_7101e25020;
    iVar5 = *(int *)(param_1 + 0xbfc);
  }
  snprintf((char *)apppbStack_c8,0x20,"set_parts_list_%02d",iVar5);
  uVar10 = (ulong)*(uint *)(param_1 + 0xc00);
  pcVar9 = "set_parts_base_%02d";
  snprintf((char *)apppbStack_f8,0x20,"set_parts_base_%02d",*(uint *)(param_1 + 0xc00));
  FUN_7103776640(&local_a8,param_1 + 0xba0,apppbStack_c8,pcVar9,uVar10,param_5,param_6,param_7,
                 param_8);
  FUN_7103776ad0(&local_220,(long)&local_a8,(long ****)apppbStack_f8,pcVar9,uVar10,param_5,param_6,
                 param_7,param_8);
  puVar3 = local_218;
  plVar17 = (long *)*local_218;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x218))(plVar17,0);
    (**(code **)(*plVar17 + 0x410))(plVar17);
    (**(code **)(*plVar17 + 0x3f0))(plVar17,0);
    iVar5 = (**(code **)(*plVar17 + 0x140))(plVar17);
    if ((iVar5 != 6) && (iVar5 = (**(code **)(*plVar17 + 0x140))(plVar17), iVar5 != 1)) {
      (**(code **)(*plVar17 + 0x400))(plVar17);
    }
    uVar10 = (**(code **)(*plVar17 + 0x158))(plVar17);
    if ((uVar10 & 1) == 0) {
      (**(code **)(*plVar17 + 0x370))(plVar17);
    }
  }
  local_220 = &PTR_FUN_710523d9c8;
  local_218 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  plVar17 = local_a0[0];
  if (*(int *)(param_1 + 0xbfc) != *(int *)(param_1 + 0xbf4)) {
    FUN_7103778300(0x3f800000,(long)local_a0[0],0x710435bcec);
  }
  local_a8 = &PTR_FUN_710523d988;
  local_a0[0] = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    uVar10 = plVar17[3];
    plVar17[2] = (long)&PTR_FUN_710523d9a8;
    plVar17[3] = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40((ulong)plVar17);
  }
LAB_7101e25020:
  uVar10 = local_d0;
  local_d8 = &PTR_FUN_710523d988;
  local_d0 = 0;
  if (uVar10 != 0) {
    uVar8 = *(ulong *)(uVar10 + 0x18);
    *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar10 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar10);
  }
  return;
}

