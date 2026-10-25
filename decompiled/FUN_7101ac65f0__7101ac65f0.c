// addr:      7101ac65f0
// offset:    0x1ac65f0
// name:      FUN_7101ac65f0
// mangled:   
// signature: undefined __cdecl FUN_7101ac65f0(long param_1, uint * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ac65f0(long param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long ****pppplVar11;
  byte ****ppppbVar12;
  byte ****ppppbVar13;
  long ****pppplVar14;
  byte bVar15;
  char *pcVar16;
  long lVar17;
  long ***ppplVar18;
  char *pcVar19;
  long *plVar20;
  long *plVar21;
  char cVar22;
  long *plVar23;
  undefined8 *puVar24;
  undefined **local_f0;
  ulong local_e8;
  undefined **local_e0;
  undefined8 *local_d8;
  undefined **local_d0;
  undefined8 *local_c8;
  undefined **local_c0;
  ulong local_b8;
  undefined **local_b0;
  ulong local_a8;
  undefined **local_a0;
  ulong local_98;
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  ulong local_78;
  undefined **local_70;
  ulong local_68;
  long ***local_60;
  undefined4 local_54;
  
  lVar9 = param_1 + 0x230;
  FUN_7103776910(&local_70,lVar9,(long ****)"set_txt_time_00",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  iVar5 = (int)param_2[0x1a] / 0x3c;
  iVar2 = (int)param_2[0x1a] % 0x3c;
  if (0x3e6 < iVar5) {
    iVar5 = 999;
  }
  if (0x3e6 < iVar2) {
    iVar2 = 999;
  }
  ppppbVar12 = (byte ****)(ulong)(uint)(iVar2 + iVar5 * 1000);
  uVar10 = 1;
  FUN_710377a280((long)&local_70,(byte *)"mnu_replay_detail_time_movie",1);
  uVar8 = local_68;
  local_70 = &PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  FUN_7103776910(&local_70,lVar9,(long ****)"set_txt_mode_02",uVar10,ppppbVar12,param_5,param_6,
                 param_7,param_8);
  pcVar19 = "mnu_replay_detail_melee_allbattle";
  switch((char)param_2[0x1b]) {
  case '\x01':
    pcVar16 = "mel_chara_select_various_team";
    pcVar19 = "mnu_replay_detail_melee_various";
    goto LAB_7101ac6774;
  case '\x02':
    pcVar16 = "mel_chara_select_suddendeath_team";
    pcVar19 = "mnu_replay_detail_melee_suddendeath";
    goto LAB_7101ac6774;
  case '\x03':
    break;
  default:
    pcVar16 = "mel_chara_select_melee_team";
    pcVar19 = "mnu_replay_detail_melee_normal";
LAB_7101ac6774:
    if (*(char *)((long)param_2 + 0x6f) != '\0') {
      pcVar19 = pcVar16;
    }
    break;
  case '\t':
    pcVar19 = "mnu_replay_detail_melee_team";
    break;
  case '\n':
  case '\v':
    pcVar19 = "mnu_replay_detail_melee_normal";
    break;
  case '\f':
    pcVar19 = "mnu_replay_detail_melee_tournament";
    break;
  case '\r':
    pcVar19 = "mnu_replay_detail_anyone";
    break;
  case '\x0e':
    pcVar19 = "mnu_replay_detail_room";
    break;
  case '\x0f':
    pcVar19 = "mnu_replay_detail_anyone_vip";
    break;
  case '\x10':
    pcVar19 = "mnu_replay_detail_online_tournament";
    break;
  case '\x12':
    pcVar19 = "mnu_replay_refinement_mode_homerun";
  }
  FUN_710377a120((long)&local_70,pcVar19,uVar10,ppppbVar12,param_5,param_6,param_7,param_8);
  uVar8 = local_68;
  local_70 = &PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  FUN_7103776910(&local_70,lVar9,(long ****)"set_txt_mode_03",uVar10,ppppbVar12,param_5,param_6,
                 param_7,param_8);
  pcVar19 = "mnu_replay_detail_melee_allbattle";
  switch((char)param_2[0x1b]) {
  case '\x01':
    pcVar16 = "mel_chara_select_various_team";
    pcVar19 = "mnu_replay_detail_melee_various";
    goto LAB_7101ac6870;
  case '\x02':
    pcVar16 = "mel_chara_select_suddendeath_team";
    pcVar19 = "mnu_replay_detail_melee_suddendeath";
    goto LAB_7101ac6870;
  case '\x03':
    break;
  default:
    pcVar16 = "mel_chara_select_melee_team";
    pcVar19 = "mnu_replay_detail_melee_normal";
LAB_7101ac6870:
    if (*(char *)((long)param_2 + 0x6f) != '\0') {
      pcVar19 = pcVar16;
    }
    break;
  case '\t':
    pcVar19 = "mnu_replay_detail_melee_team";
    break;
  case '\n':
  case '\v':
    pcVar19 = "mnu_replay_detail_melee_normal";
    break;
  case '\f':
    pcVar19 = "mnu_replay_detail_melee_tournament";
    break;
  case '\r':
    pcVar19 = "mnu_replay_detail_anyone";
    break;
  case '\x0e':
    pcVar19 = "mnu_replay_detail_room";
    break;
  case '\x0f':
    pcVar19 = "mnu_replay_detail_anyone_vip";
    break;
  case '\x10':
    pcVar19 = "mnu_replay_detail_online_tournament";
    break;
  case '\x12':
    pcVar19 = "mnu_replay_refinement_mode_homerun";
  }
  pppplVar14 = (long ****)(param_2 + 2);
  FUN_710377a120((long)&local_70,pcVar19,uVar10,ppppbVar12,param_5,param_6,param_7,param_8);
  uVar8 = local_68;
  local_70 = &PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  FUN_7103776910(&local_80,lVar9,(long ****)"set_txt_header_rule_00",uVar10,ppppbVar12,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_90,lVar9,(long ****)"set_txt_rule_00",uVar10,ppppbVar12,param_5,param_6,
                 param_7,param_8);
  pppplVar11 = pppplVar14;
  FUN_7101ac6fd0((long)&local_80,(long)&local_90,(long)pppplVar14,ppppbVar12,param_5,param_6,param_7
                 ,param_8);
  uVar8 = local_88;
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = 0;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  uVar8 = local_78;
  local_80 = &PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  FUN_7103776640(&local_a0,lVar9,(byte ****)"set_parts_tag_disp_00",pppplVar11,ppppbVar12,param_5,
                 param_6,param_7,param_8);
  FUN_7101ac71e0(param_1,&local_a0,pppplVar11,ppppbVar12,param_5,param_6,param_7,param_8);
  uVar8 = local_98;
  local_a0 = &PTR_FUN_710523d988;
  local_98 = 0;
  if (uVar8 != 0) {
    uVar6 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar8);
  }
  FUN_7103776640(&local_70,lVar9,(byte ****)"set_parts_detail_pane_00",pppplVar11,ppppbVar12,param_5
                 ,param_6,param_7,param_8);
  FUN_7103776640(&local_b0,(long)&local_70,(byte ****)"set_parts_text_scroll",pppplVar11,ppppbVar12,
                 param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_c0,param_1 + 0x2e0,(byte ****)"set_parts_text_scroll",pppplVar11,ppppbVar12,
                 param_5,param_6,param_7,param_8);
  if (*(long *)(local_b8 + 8) != 0) {
    puVar24 = *(undefined8 **)(*(long *)(local_b8 + 8) + 0x78);
    if (((DAT_710593ba40 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_710593ba40), iVar5 != 0)) {
      if (((DAT_710593ba48 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_710593ba48), iVar5 != 0))
      {
        DAT_710593ba50 = 0;
        __cxa_guard_release(&DAT_710593ba48);
      }
      DAT_710593ba58 = &DAT_710593ba50;
      __cxa_guard_release(&DAT_710593ba40);
    }
    if (puVar24 != (undefined8 *)0x0) {
      for (puVar7 = (undefined8 *)(**(code **)*puVar24)(puVar24); puVar7 != (undefined8 *)0x0;
          puVar7 = (undefined8 *)*puVar7) {
        if ((undefined8 **)puVar7 == &DAT_710593ba58) {
          lVar17 = puVar24[3];
          *(undefined4 *)(puVar24 + 0xb) = *(undefined4 *)((long)puVar24 + 0x54);
          if (lVar17 != 0) {
            *(undefined4 *)(lVar17 + 0x30) = *(undefined4 *)((long)puVar24 + 0x54);
            *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) | 0x10;
          }
          lVar17 = puVar24[4];
          if (lVar17 != 0) {
            *(undefined4 *)(lVar17 + 0x30) = *(undefined4 *)(puVar24 + 0xb);
            *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) | 0x10;
          }
          if ((long *)puVar24[5] != (long *)0x0) {
            (**(code **)(*(long *)puVar24[5] + 0x180))(0);
          }
          plVar23 = (long *)puVar24[6];
          if (plVar23 != (long *)0x0) {
            if (*(char *)((long)puVar24 + 99) == '\0') {
              (**(code **)(*plVar23 + 0x180))(0);
            }
            else {
              (**(code **)(*plVar23 + 400))();
            }
          }
          *(undefined2 *)((long)puVar24 + 100) = 0;
          break;
        }
      }
    }
  }
  FUN_7103776910(&local_d0,(long)&local_b0,(long ****)"set_txt_main",pppplVar11,ppppbVar12,param_5,
                 param_6,param_7,param_8);
  puVar24 = local_c8;
  if (*(long **)((long)local_c8 + 0x10) != (long *)0x0) {
    pppplVar11 = (long ****)&DAT_ffffffff;
    ppppbVar12 = (byte ****)0x1;
    FUN_71037a2270(*(long **)((long)local_c8 + 0x10),(ushort *)(param_2 + 5),0xffffffff,1);
  }
  local_d0 = &PTR_FUN_710523d9a8;
  local_c8 = (undefined8 *)0x0;
  if (puVar24 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar24);
  }
  FUN_7103776910(&local_d0,(long)&local_b0,(long ****)"set_txt_mask",pppplVar11,ppppbVar12,param_5,
                 param_6,param_7,param_8);
  puVar24 = local_c8;
  if (*(long **)((long)local_c8 + 0x10) != (long *)0x0) {
    pppplVar11 = (long ****)&DAT_ffffffff;
    ppppbVar12 = (byte ****)0x1;
    FUN_71037a2270(*(long **)((long)local_c8 + 0x10),(ushort *)(param_2 + 5),0xffffffff,1);
  }
  local_d0 = &PTR_FUN_710523d9a8;
  local_c8 = (undefined8 *)0x0;
  if (puVar24 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar24);
  }
  ppplVar18 = *pppplVar14;
  pppplVar14 = (long ****)
               (((ulong)ppplVar18 >> 0x15 & 0x1f) * 1000000 +
                ((ulong)ppplVar18 >> 0x1a & 0x3f) * 1000 + ((ulong)ppplVar18 >> 0x20 & 0x3f));
  ppppbVar13 = (byte ****)
               (((ulong)ppplVar18 & 0xfff) * 1000000 + ((ulong)ppplVar18 >> 0xc & 0xf) * 1000 +
               ((ulong)ppplVar18 >> 0x10 & 0x1f));
  FUN_7103776910(&local_d0,(long)&local_70,(long ****)"set_txt_date_num",pppplVar11,ppppbVar12,
                 param_5,param_6,param_7,param_8);
  pppplVar11 = (long ****)0x2;
  FUN_710377a280((long)&local_d0,(byte *)"mnu_replay_detail_creation_date",2);
  puVar24 = local_c8;
  local_d0 = &PTR_FUN_710523d9a8;
  local_c8 = (undefined8 *)0x0;
  if (puVar24 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar24);
  }
  iVar5 = FUN_7101af0cc0(*(long *)(DAT_7105324ee8 + 8),(void *)(ulong)*param_2,pppplVar11,ppppbVar13
                         ,pppplVar14,param_6,param_7,param_8);
  if (iVar5 == 0) {
    if (param_2[0xc0] != 0x145) {
      FUN_7103776640(&local_d0,lVar9,(byte ****)"set_rep_movie_pic_00",pppplVar11,ppppbVar13,
                     pppplVar14,param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x238),0x7104412483);
      plVar23 = *(long **)(param_1 + 0x2f0);
      FUN_7103776390(&local_f0,&local_d0,pppplVar11,ppppbVar13,pppplVar14,param_6,param_7,param_8);
      FUN_7101ad1f10(plVar23,(long)&local_f0,(long ****)(ulong)param_2[0xc0],
                     (byte ****)(ulong)*param_2,(long ****)0x1,param_6,param_7,param_8);
      uVar8 = local_e8;
      local_f0 = &PTR_FUN_710523d988;
      local_e8 = 0;
      if (uVar8 != 0) {
        uVar6 = *(ulong *)(uVar8 + 0x18);
        *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar8 + 0x18) = 0;
        if (uVar6 != 0) {
          FUN_710392eb40(uVar6);
        }
        FUN_710392eb40(uVar8);
      }
      puVar24 = local_c8;
      local_d0 = &PTR_FUN_710523d988;
      local_c8 = (undefined8 *)0x0;
      if (puVar24 != (undefined8 *)0x0) {
        uVar8 = puVar24[3];
        puVar24[2] = &PTR_FUN_710523d9a8;
        puVar24[3] = 0;
        if (uVar8 != 0) {
          FUN_710392eb40(uVar8);
        }
        goto LAB_7101ac6d9c;
      }
      goto LAB_7101ac6da0;
    }
    uVar1 = *param_2;
    plVar20 = (long *)(*(long *)(DAT_7105324ee8 + 8) + 0xe8);
    plVar21 = (long *)*plVar20;
    plVar23 = plVar20;
    if (plVar21 != (long *)0x0) {
      do {
        bVar3 = *(uint *)((long)plVar21 + 0x1c) < uVar1;
        if (!bVar3) {
          plVar23 = plVar21;
        }
        plVar21 = (long *)plVar21[bVar3];
      } while (plVar21 != (long *)0x0);
      if ((plVar23 != plVar20) && (*(uint *)((long)plVar23 + 0x1c) <= uVar1)) {
        FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x238),0x710436bde7);
        goto LAB_7101ac6da0;
      }
    }
    lVar9 = *(long *)(param_1 + 0x238);
    if ((*(long *)(lVar9 + 8) == 0) ||
       (plVar23 = (long *)FUN_71037964b0(*(long *)(lVar9 + 8),0x710436bdf7), plVar23 == (long *)0x0)
       ) {
LAB_7101ac6ce4:
      FUN_7103778300(0x3f800000,lVar9,0x710436bdf7);
    }
    else {
      uVar8 = (**(code **)(*plVar23 + 0x130))();
      if ((uVar8 & 1) == 0) {
        lVar9 = *(long *)(param_1 + 0x238);
        goto LAB_7101ac6ce4;
      }
    }
    lVar9 = *(long *)(param_1 + 0x238);
    pcVar19 = "turn_out_on";
  }
  else {
    FUN_7103776910(&local_d0,lVar9,(long ****)"set_rep_bgshot_00",pppplVar11,ppppbVar13,pppplVar14,
                   param_6,param_7,param_8);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x238),0x710435b125);
    plVar23 = *(long **)(param_1 + 0x2f0);
    local_e0 = &PTR_FUN_710523d9a8;
    puVar7 = (undefined8 *)
             FUN_710392e290(0x10,0x20,pppplVar11,ppppbVar13,pppplVar14,param_6,param_7,param_8);
    if (puVar7 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_54 = 0;
        local_60 = (long ***)&SUB_00000020;
        pppplVar11 = &local_60;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
        if (((uVar8 & 1) != 0) &&
           (puVar7 = (undefined8 *)
                     FUN_710392e290(0x10,0x20,pppplVar11,ppppbVar13,pppplVar14,param_6,param_7,
                                    param_8), puVar7 != (undefined8 *)0x0)) goto LAB_7101ac6bf4;
      }
      puVar7 = (undefined8 *)0x0;
    }
LAB_7101ac6bf4:
    puVar24 = local_c8;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    *puVar7 = *local_c8;
    puVar7[1] = local_c8[1];
    puVar7[2] = local_c8[2];
    puVar7[3] = local_c8[3];
    local_d8 = puVar7;
    FUN_7101ad2060(plVar23,(long)&local_e0,(long *********)(ulong)param_2[0xc0],
                   (byte ****)(ulong)*param_2,(long ****)0x0,param_6,param_7,param_8);
    local_e0 = &PTR_FUN_710523d9a8;
    local_d8 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar7);
    }
    local_d0 = &PTR_FUN_710523d9a8;
    local_c8 = (undefined8 *)0x0;
    if (puVar24 != (undefined8 *)0x0) {
LAB_7101ac6d9c:
      FUN_710392eb40((ulong)puVar24);
    }
LAB_7101ac6da0:
    lVar9 = *(long *)(param_1 + 0x238);
    pcVar19 = "turn_out_off";
    if (*(char *)(param_1 + 0x3ac) != '\0') {
      FUN_7103778760(lVar9,0x71043dfb68);
      goto LAB_7101ac6dc4;
    }
  }
  FUN_7103778300(0x3f800000,lVar9,(long)pcVar19);
LAB_7101ac6dc4:
  lVar9 = **(long **)(param_1 + 0x300) + (long)*(int *)(param_1 + 0x2f8) * 0x3c0;
  if (*(char *)(lVar9 + 0x6c) == '\x12') {
    lVar9 = **(long **)(param_1 + 0x300) + (long)*(int *)(param_1 + 0x2f8) * 0x3c0;
    cVar4 = *(char *)(lVar9 + 0x90) == '\x01';
    cVar22 = '\x02';
    if (!(bool)cVar4) {
      cVar22 = '\x01';
    }
    if (*(char *)(lVar9 + 0xe0) == '\x01') {
      cVar4 = cVar22;
    }
    if (*(char *)(lVar9 + 0x130) == '\x01') {
      cVar4 = cVar4 + '\x01';
    }
    if (*(char *)(lVar9 + 0x180) == '\x01') {
      cVar4 = cVar4 + '\x01';
    }
    if (*(char *)(lVar9 + 0x1d0) == '\x01') {
      cVar4 = cVar4 + '\x01';
    }
    if (*(char *)(lVar9 + 0x220) == '\x01') {
      cVar4 = cVar4 + '\x01';
    }
    if (*(char *)(lVar9 + 0x270) == '\x01') {
      cVar4 = cVar4 + '\x01';
    }
    if (*(char *)(lVar9 + 0x2c0) == '\x01') {
      cVar4 = cVar4 + '\x01';
    }
    bVar15 = 0x10;
    if (cVar4 != '\x02') {
      bVar15 = 8;
    }
  }
  else {
    bVar15 = *(int *)(lVar9 + 0x70) != 0 | (*(int *)(lVar9 + 0x74) != 0) << 1 |
             (0.0 < *(float *)(lVar9 + 0x9c)) << 2;
  }
  if (bVar15 == 0x10 || bVar15 == 8) {
    lVar9 = *(long *)(param_1 + 0x238);
    pcVar19 = "rule_txt_out_off";
  }
  else {
    lVar9 = *(long *)(param_1 + 0x238);
    pcVar19 = "rule_txt_out_on";
  }
  FUN_7103778300(0x3f800000,lVar9,(long)pcVar19);
  uVar8 = local_b8;
  local_c0 = &PTR_FUN_710523d988;
  local_b8 = 0;
  if (uVar8 != 0) {
    uVar6 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar8);
  }
  uVar8 = local_a8;
  local_b0 = &PTR_FUN_710523d988;
  local_a8 = 0;
  if (uVar8 != 0) {
    uVar6 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar8);
  }
  uVar8 = local_68;
  local_70 = &PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar8 != 0) {
    uVar6 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar8);
  }
  return;
}

