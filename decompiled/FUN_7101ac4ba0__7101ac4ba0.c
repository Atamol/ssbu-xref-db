// addr:      7101ac4ba0
// offset:    0x1ac4ba0
// name:      FUN_7101ac4ba0
// mangled:   
// signature: undefined __cdecl FUN_7101ac4ba0(long param_1, ulong param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ac4ba0(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  long ********pppppppplVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  byte ****ppppbVar12;
  long *plVar13;
  long *******ppppppplVar14;
  undefined8 uVar15;
  long *********ppppppppplVar16;
  long ****pppplVar17;
  long *********ppppppppplVar18;
  ulong uVar19;
  byte ****ppppbVar20;
  long *********ppppppppplVar21;
  long *********ppppppppplVar22;
  byte bVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  int *piVar27;
  long ********pppppppplVar28;
  long lVar29;
  byte *pbVar30;
  char cVar31;
  char *pcVar32;
  long *plVar33;
  char cVar34;
  ulong uVar35;
  int *piVar36;
  long lVar37;
  uint uVar38;
  long lVar39;
  char *pcVar40;
  ushort *puVar41;
  long *plVar42;
  uint *puVar43;
  ulong uVar44;
  int *__dest;
  char *pcVar45;
  int *piVar46;
  ulong uVar47;
  long lVar48;
  undefined1 *puVar49;
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  uint local_24c;
  uint local_23c;
  undefined **local_238;
  ulong local_230;
  undefined **local_228;
  ulong local_220;
  undefined **local_218;
  ulong local_210;
  undefined **local_208;
  long ********local_200;
  int *local_1f8;
  int *local_1f0;
  int *local_1e8;
  undefined **local_1e0;
  ulong local_1d8;
  undefined **local_1d0;
  undefined8 *local_1c8;
  undefined **local_1c0;
  ulong local_1b8;
  undefined **local_1b0;
  ulong local_1a8;
  undefined **local_1a0;
  ulong local_198;
  undefined8 local_190;
  undefined1 local_188 [64];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined **local_100;
  long *local_f8;
  undefined **local_f0;
  long *local_e8;
  undefined **local_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  
  *(undefined4 *)(param_1 + 0x3a8) = 0x5a;
  local_188[0] = 0;
  local_190 = 0;
  lVar37 = **(long **)(param_1 + 0x300);
  uVar47 = (ulong)*(int *)(param_1 + 0x2f8);
  uVar25 = ((*(long **)(param_1 + 0x300))[1] - lVar37 >> 6) * -0x1111111111111111;
  if (uVar25 < uVar47 || uVar25 - uVar47 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar39 = lVar37 + uVar47 * 0x3c0;
  lVar1 = param_1 + 0x230;
  pcVar40 = (char *)(lVar39 + 0x6c);
  cVar8 = *pcVar40;
  FUN_7103776910(&local_d0,lVar1,(long ****)"set_txt_time",param_3,param_4,param_5,param_6,param_7,
                 param_8);
  iVar4 = *(int *)(lVar39 + 0x68);
  iVar9 = iVar4 / 0x3c;
  iVar4 = iVar4 % 0x3c;
  if (0x3e6 < iVar9) {
    iVar9 = 999;
  }
  if (0x3e6 < iVar4) {
    iVar4 = 999;
  }
  uVar25 = (ulong)(uint)(iVar4 + iVar9 * 1000);
  uVar15 = 1;
  FUN_710377a280((long)&local_d0,(byte *)"mnu_replay_detail_time_movie",1);
  pppppppplVar28 = uStack_c8;
  local_d0 = &PTR_FUN_710523d9a8;
  uStack_c8 = (long ********)0x0;
  if (pppppppplVar28 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar28);
  }
  FUN_7103776910(&local_d0,lVar1,(long ****)"set_txt_mode_00",uVar15,uVar25,param_5,param_6,param_7,
                 param_8);
  pcVar45 = "mnu_replay_detail_melee_allbattle";
  switch(*pcVar40) {
  case '\x01':
    pcVar32 = "mel_chara_select_various_team";
    lVar39 = lVar37 + uVar47 * 0x3c0;
    pcVar45 = "mnu_replay_detail_melee_various";
    goto LAB_7101ac4d98;
  case '\x02':
    pcVar32 = "mel_chara_select_suddendeath_team";
    lVar39 = lVar37 + uVar47 * 0x3c0;
    pcVar45 = "mnu_replay_detail_melee_suddendeath";
    goto LAB_7101ac4d98;
  case '\x03':
    break;
  default:
    lVar39 = lVar37 + uVar47 * 0x3c0;
    pcVar32 = "mel_chara_select_melee_team";
    pcVar45 = "mnu_replay_detail_melee_normal";
LAB_7101ac4d98:
    if (*(char *)(lVar39 + 0x6f) != '\0') {
      pcVar45 = pcVar32;
    }
    break;
  case '\t':
    pcVar45 = "mnu_replay_detail_melee_team";
    break;
  case '\n':
  case '\v':
    pcVar45 = "mnu_replay_detail_melee_normal";
    break;
  case '\f':
    pcVar45 = "mnu_replay_detail_melee_tournament";
    break;
  case '\r':
    pcVar45 = "mnu_replay_detail_anyone";
    break;
  case '\x0e':
    pcVar45 = "mnu_replay_detail_room";
    break;
  case '\x0f':
    pcVar45 = "mnu_replay_detail_anyone_vip";
    break;
  case '\x10':
    pcVar45 = "mnu_replay_detail_online_tournament";
    break;
  case '\x12':
    pcVar45 = "mnu_replay_refinement_mode_homerun";
  }
  FUN_710377a120((long)&local_d0,pcVar45,uVar15,uVar25,param_5,param_6,param_7,param_8);
  pppppppplVar28 = uStack_c8;
  local_d0 = &PTR_FUN_710523d9a8;
  uStack_c8 = (long ********)0x0;
  if (pppppppplVar28 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar28);
  }
  FUN_7103776910(&local_d0,lVar1,(long ****)"set_txt_mode_01",uVar15,uVar25,param_5,param_6,param_7,
                 param_8);
  pcVar45 = "mnu_replay_detail_melee_allbattle";
  switch(*pcVar40) {
  case '\x01':
    pcVar32 = "mel_chara_select_various_team";
    lVar39 = lVar37 + uVar47 * 0x3c0;
    pcVar45 = "mnu_replay_detail_melee_various";
    goto LAB_7101ac4eb0;
  case '\x02':
    pcVar32 = "mel_chara_select_suddendeath_team";
    lVar39 = lVar37 + uVar47 * 0x3c0;
    pcVar45 = "mnu_replay_detail_melee_suddendeath";
    goto LAB_7101ac4eb0;
  case '\x03':
    break;
  default:
    lVar39 = lVar37 + uVar47 * 0x3c0;
    pcVar32 = "mel_chara_select_melee_team";
    pcVar45 = "mnu_replay_detail_melee_normal";
LAB_7101ac4eb0:
    if (*(char *)(lVar39 + 0x6f) != '\0') {
      pcVar45 = pcVar32;
    }
    break;
  case '\t':
    pcVar45 = "mnu_replay_detail_melee_team";
    break;
  case '\n':
  case '\v':
    pcVar45 = "mnu_replay_detail_melee_normal";
    break;
  case '\f':
    pcVar45 = "mnu_replay_detail_melee_tournament";
    break;
  case '\r':
    pcVar45 = "mnu_replay_detail_anyone";
    break;
  case '\x0e':
    pcVar45 = "mnu_replay_detail_room";
    break;
  case '\x0f':
    pcVar45 = "mnu_replay_detail_anyone_vip";
    break;
  case '\x10':
    pcVar45 = "mnu_replay_detail_online_tournament";
    break;
  case '\x12':
    pcVar45 = "mnu_replay_refinement_mode_homerun";
  }
  FUN_710377a120((long)&local_d0,pcVar45,uVar15,uVar25,param_5,param_6,param_7,param_8);
  pppppppplVar28 = uStack_c8;
  local_d0 = &PTR_FUN_710523d9a8;
  uStack_c8 = (long ********)0x0;
  if (pppppppplVar28 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar28);
  }
  lVar39 = param_1 + 0x2e0;
  FUN_7103776640(&local_1a0,lVar39,(byte ****)"set_parts_text_scroll",uVar15,uVar25,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_1b0,(long)&local_1a0,(long ****)"set_txt_main",uVar15,uVar25,param_5,param_6
                 ,param_7,param_8);
  puVar41 = (ushort *)(lVar37 + uVar47 * 0x3c0 + 0x14);
  if (*puVar41 == 0) {
    FUN_710377a120((long)&local_1b0,"mnu_replay_data_title_default",uVar15,uVar25,param_5,param_6,
                   param_7,param_8);
    uVar44 = local_1a8;
  }
  else {
    uVar44 = local_1a8;
    if (*(long **)(local_1a8 + 0x10) != (long *)0x0) {
      uVar15 = 0xffffffff;
      uVar25 = 1;
      FUN_71037a2270(*(long **)(local_1a8 + 0x10),puVar41,0xffffffff,1);
    }
  }
  local_1b0 = &PTR_FUN_710523d9a8;
  local_1a8 = 0;
  if (uVar44 != 0) {
    FUN_710392eb40(uVar44);
  }
  FUN_7103776910(&local_1c0,(long)&local_1a0,(long ****)"set_txt_mask",uVar15,uVar25,param_5,param_6
                 ,param_7,param_8);
  if (*puVar41 == 0) {
    FUN_710377a120((long)&local_1c0,"mnu_replay_data_title_default",uVar15,uVar25,param_5,param_6,
                   param_7,param_8);
    uVar44 = local_1b8;
  }
  else {
    uVar44 = local_1b8;
    if (*(long **)(local_1b8 + 0x10) != (long *)0x0) {
      uVar15 = 0xffffffff;
      uVar25 = 1;
      FUN_71037a2270(*(long **)(local_1b8 + 0x10),puVar41,0xffffffff,1);
    }
  }
  local_1c0 = &PTR_FUN_710523d9a8;
  local_1b8 = 0;
  if (uVar44 != 0) {
    FUN_710392eb40(uVar44);
  }
  lVar26 = lVar37 + uVar47 * 0x3c0;
  uVar38 = *(uint *)(lVar26 + 8);
  uVar24 = *(uint *)(lVar26 + 0xc);
  FUN_7103776910(&local_d0,lVar39,(long ****)"set_txt_date_num",uVar15,uVar25,param_5,param_6,
                 param_7,param_8);
  ppppppppplVar16 = (long *********)0x2;
  ppppbVar20 = (byte ****)
               (ulong)((uVar38 & 0xfff) * 1000000 + (uVar38 >> 0xc & 0xf) * 1000 +
                      (uVar38 >> 0x10 & 0x1f));
  ppppppppplVar21 =
       (long *********)
       (ulong)((uVar38 >> 0x15 & 0x1f) * 1000000 + (uVar38 >> 0x1a) * 1000 + (uVar24 & 0x3f));
  FUN_710377a280((long)&local_d0,(byte *)"mnu_replay_detail_creation_date",2);
  pppppppplVar28 = uStack_c8;
  local_d0 = &PTR_FUN_710523d9a8;
  uStack_c8 = (long ********)0x0;
  if (pppppppplVar28 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar28);
  }
  *(undefined1 *)(param_1 + 0x3ac) = 1;
  puVar43 = (uint *)(lVar37 + uVar47 * 0x3c0);
  iVar9 = FUN_7101af0cc0(*(long *)(DAT_7105324ee8 + 8),(void *)(ulong)*puVar43,
                         (long ****)ppppppppplVar16,ppppbVar20,(long ****)ppppppppplVar21,param_6,
                         param_7,param_8);
  if (iVar9 == 0) {
    lVar26 = lVar37 + uVar47 * 0x3c0;
    if (*(int *)(lVar26 + 0x300) != 0x145) {
      FUN_7103776640(&local_d0,lVar1,(byte ****)"set_rep_movie_pic",ppppppppplVar16,ppppbVar20,
                     (long ****)ppppppppplVar21,param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x238),0x7104291704);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x2e8),0x7104400f02);
      plVar42 = *(long **)(param_1 + 0x2f0);
      FUN_7103776390(&local_1e0,&local_d0,(long ****)ppppppppplVar16,ppppbVar20,
                     (long ****)ppppppppplVar21,param_6,param_7,param_8);
      ppppppppplVar16 = (long *********)(ulong)*(uint *)(lVar26 + 0x300);
      ppppbVar20 = (byte ****)(ulong)*puVar43;
      ppppppppplVar21 = (long *********)0x1;
      FUN_7101ad1f10(plVar42,(long)&local_1e0,(long ****)ppppppppplVar16,ppppbVar20,(long ****)0x1,
                     param_6,param_7,param_8);
      uVar25 = local_1d8;
      local_1e0 = &PTR_FUN_710523d988;
      local_1d8 = 0;
      if (uVar25 != 0) {
        uVar44 = *(ulong *)(uVar25 + 0x18);
        *(undefined ***)(uVar25 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar25 + 0x18) = 0;
        if (uVar44 != 0) {
          FUN_710392eb40(uVar44);
        }
        FUN_710392eb40(uVar25);
      }
      pppppppplVar28 = uStack_c8;
      local_d0 = &PTR_FUN_710523d988;
      uStack_c8 = (long ********)0x0;
      if (pppppppplVar28 != (long ********)0x0) {
        ppppppplVar14 = pppppppplVar28[3];
        pppppppplVar28[2] = (long *******)&PTR_FUN_710523d9a8;
        pppppppplVar28[3] = (long *******)0x0;
        if (ppppppplVar14 != (long *******)0x0) {
          FUN_710392eb40((ulong)ppppppplVar14);
        }
        goto LAB_7101ac52bc;
      }
      goto LAB_7101ac52c0;
    }
    uVar38 = *puVar43;
    plVar33 = (long *)(*(long *)(DAT_7105324ee8 + 8) + 0xe8);
    plVar13 = (long *)*plVar33;
    plVar42 = plVar33;
    if (plVar13 != (long *)0x0) {
      do {
        bVar6 = *(uint *)((long)plVar13 + 0x1c) < uVar38;
        if (!bVar6) {
          plVar42 = plVar13;
        }
        plVar13 = (long *)plVar13[bVar6];
      } while (plVar13 != (long *)0x0);
      if ((plVar42 == plVar33) || (uVar38 < *(uint *)((long)plVar42 + 0x1c))) goto LAB_7101ac51f4;
      *(undefined1 *)(param_1 + 0x3ac) = 1;
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x238),0x710425ee2f);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x2e8),0x71042916f7);
      cVar34 = *(char *)(param_1 + 0x3ac);
      goto joined_r0x007101ac5318;
    }
LAB_7101ac51f4:
    *(undefined1 *)(param_1 + 0x3ac) = 0;
LAB_7101ac531c:
    lVar26 = *(long *)(param_1 + 0x238);
    if ((*(long *)(lVar26 + 8) == 0) ||
       (plVar42 = (long *)FUN_71037964b0(*(long *)(lVar26 + 8),0x7104308061), plVar42 == (long *)0x0
       )) {
LAB_7101ac534c:
      FUN_7103778300(0x3f800000,lVar26,0x7104308061);
    }
    else {
      uVar25 = (**(code **)(*plVar42 + 0x130))();
      if ((uVar25 & 1) == 0) {
        lVar26 = *(long *)(param_1 + 0x238);
        goto LAB_7101ac534c;
      }
    }
    lVar26 = *(long *)(param_1 + 0x238);
    pcVar45 = "turn_in_on";
LAB_7101ac536c:
    FUN_7103778300(0x3f800000,lVar26,(long)pcVar45);
  }
  else {
    FUN_7103776910(&local_d0,lVar1,(long ****)"set_rep_bgshot",ppppppppplVar16,ppppbVar20,
                   (long ****)ppppppppplVar21,param_6,param_7,param_8);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x238),0x7104412490);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x2e8),0x7104400f02);
    plVar42 = *(long **)(param_1 + 0x2f0);
    local_1d0 = &PTR_FUN_710523d9a8;
    puVar11 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar16,ppppbVar20,
                             (long ****)ppppppppplVar21,param_6,param_7,param_8);
    if (puVar11 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1f8 = (int *)((ulong)local_1f8 & 0xffffffff00000000);
        local_148 = (long ***)&SUB_00000020;
        pppplVar17 = (long ****)&local_148;
        uVar25 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1f8);
        if (((uVar25 & 1) != 0) &&
           (puVar11 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,pppplVar17,ppppbVar20,(long ****)ppppppppplVar21,
                                     param_6,param_7,param_8), puVar11 != (undefined8 *)0x0))
        goto LAB_7101ac5114;
      }
      puVar11 = (undefined8 *)0x0;
    }
LAB_7101ac5114:
    pppppppplVar28 = uStack_c8;
    puVar11[2] = 0;
    puVar11[3] = 0;
    *puVar11 = 0;
    puVar11[1] = 0;
    ppppppppplVar21 = (long *********)0x0;
    *puVar11 = *uStack_c8;
    puVar11[1] = uStack_c8[1];
    puVar11[2] = uStack_c8[2];
    puVar11[3] = uStack_c8[3];
    ppppppppplVar16 = (long *********)(ulong)*(uint *)(lVar37 + uVar47 * 0x3c0 + 0x300);
    ppppbVar20 = (byte ****)(ulong)*puVar43;
    local_1c8 = puVar11;
    FUN_7101ad2060(plVar42,(long)&local_1d0,ppppppppplVar16,ppppbVar20,(long ****)0x0,param_6,
                   param_7,param_8);
    local_1d0 = &PTR_FUN_710523d9a8;
    local_1c8 = (undefined8 *)0x0;
    if (puVar11 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar11);
    }
    local_d0 = &PTR_FUN_710523d9a8;
    uStack_c8 = (long ********)0x0;
    if (pppppppplVar28 != (long ********)0x0) {
LAB_7101ac52bc:
      FUN_710392eb40((ulong)pppppppplVar28);
    }
LAB_7101ac52c0:
    cVar34 = *(char *)(param_1 + 0x3ac);
joined_r0x007101ac5318:
    if (cVar34 == '\0') goto LAB_7101ac531c;
    lVar26 = *(long *)(param_1 + 0x238);
    pcVar45 = "turn_in_off";
    if ((param_2 & 1) != 0) goto LAB_7101ac536c;
    FUN_7103778760(lVar26,0x7104280524);
  }
  local_1f0 = (int *)FUN_710392e290(0x10,0xf0,(long ****)ppppppppplVar16,ppppbVar20,
                                    (long ****)ppppppppplVar21,param_6,param_7,param_8);
  if (local_1f0 == (int *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_148 = (long ***)((ulong)local_148 & 0xffffffff00000000);
      local_d0 = (undefined **)&DAT_000000f0;
      ppppppppplVar16 = (long *********)&local_d0;
      uVar25 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_148);
      if (((uVar25 & 1) != 0) &&
         (local_1f0 = (int *)FUN_710392e290(0x10,0xf0,(long ****)ppppppppplVar16,ppppbVar20,
                                            (long ****)ppppppppplVar21,param_6,param_7,param_8),
         local_1f0 != (int *)0x0)) goto LAB_7101ac53d0;
    }
    local_1f0 = (int *)0x0;
  }
LAB_7101ac53d0:
  local_1e8 = local_1f0 + 0x3c;
  local_1f8 = local_1f0;
  if (cVar8 != '\t') {
    lVar26 = 0;
    ppppppppplVar18 = ppppppppplVar16;
    ppppppppplVar22 = ppppppppplVar21;
    do {
      piVar36 = local_1f8;
      uVar25 = 0xaaaaaaaaaaaaaaa;
      lVar29 = lVar37 + uVar47 * 0x3c0 + lVar26;
      if ((*(char *)(lVar29 + 0x90) != '\0') &&
         (uVar44 = *(ulong *)(lVar29 + 0x80),
         (uVar44 & 0xff00000000000000) == 0xc100000000000000 && (uVar44 & 0xffffffffff) != 0)) {
        bVar23 = *(byte *)(lVar29 + 0x92);
        iVar9 = *(int *)(lVar29 + 0x98);
        if (local_1f0 < local_1e8) {
          *local_1f0 = iVar9;
          *(ulong *)(local_1f0 + 2) = uVar44;
          local_1f0[4] = (uint)bVar23;
          local_1f0 = local_1f0 + 6;
        }
        else {
          ppppppppplVar16 = (long *********)((long)local_1f0 - (long)local_1f8);
          uVar35 = ((long)ppppppppplVar16 >> 3) * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar35) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar29 = (long)local_1e8 - (long)local_1f8 >> 3;
          if ((ulong)(lVar29 * -0x5555555555555555) < 0x555555555555555) {
            uVar19 = lVar29 * 0x5555555555555556;
            uVar25 = uVar35;
            if (uVar35 <= uVar19) {
              uVar25 = uVar19;
            }
            if (uVar25 != 0) goto LAB_7101ac54c4;
            lVar29 = 0;
          }
          else {
LAB_7101ac54c4:
            pppppppplVar28 = (long ********)(uVar25 * 0x18);
            if (pppppppplVar28 == (long ********)0x0) {
              pppppppplVar28 = (long ********)0x1;
            }
            lVar29 = FUN_710392e290(0x10,pppppppplVar28,(long ****)ppppppppplVar18,ppppbVar20,
                                    (long ****)ppppppppplVar22,param_6,param_7,param_8);
            if (lVar29 == 0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_148 = (long ***)((ulong)local_148 & 0xffffffff00000000);
                ppppppppplVar18 = (long *********)&local_d0;
                local_d0 = (undefined **)pppppppplVar28;
                uVar35 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_148);
                if (((uVar35 & 1) != 0) &&
                   (lVar29 = FUN_710392e290(0x10,pppppppplVar28,(long ****)ppppppppplVar18,
                                            ppppbVar20,(long ****)ppppppppplVar22,param_6,param_7,
                                            param_8), lVar29 != 0)) goto LAB_7101ac552c;
              }
              lVar29 = 0;
            }
          }
LAB_7101ac552c:
          lVar48 = SUB168(SEXT816((long)ppppppppplVar16) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
          piVar27 = (int *)(lVar29 + ((long)ppppppppplVar16 >> 3) * 8);
          piVar46 = (int *)(lVar29 + uVar25 * 0x18);
          *(ulong *)(piVar27 + 2) = uVar44;
          *piVar27 = iVar9;
          piVar27[4] = (uint)bVar23;
          __dest = piVar27 + ((lVar48 >> 2) - (lVar48 >> 0x3f)) * 6;
          if (0 < (long)ppppppppplVar16) {
            memcpy(__dest,piVar36,(size_t)ppppppppplVar16);
            ppppppppplVar18 = ppppppppplVar16;
          }
          local_1f8 = __dest;
          local_1f0 = piVar27 + 6;
          local_1e8 = piVar46;
          if (piVar36 != (int *)0x0) {
            FUN_710392eb40((ulong)piVar36);
          }
        }
      }
      piVar27 = local_1f0;
      piVar36 = local_1f8;
      lVar26 = lVar26 + 0x50;
    } while (lVar26 != 0x280);
    ppppppppplVar16 =
         (long *********)(((long)local_1f0 - (long)local_1f8 >> 3) * -0x5555555555555555);
    if (0 < (long)local_1f0 - (long)local_1f8) {
      ppppppppplVar21 = ppppppppplVar16;
      if (0x555555555555554 < (long)ppppppppplVar16) {
        ppppppppplVar21 = (long *********)0x555555555555555;
      }
      do {
        pppppppplVar28 = (long ********)((long)ppppppppplVar21 * 0x18);
        if (pppppppplVar28 == (long ********)0x0) {
          pppppppplVar28 = (long ********)0x1;
        }
        ppppbVar12 = (byte ****)
                     FUN_710392e290(0x10,pppppppplVar28,(long ****)ppppppppplVar18,ppppbVar20,
                                    (long ****)ppppppppplVar22,param_6,param_7,param_8);
        if (ppppbVar12 != (byte ****)0x0) {
LAB_7101ac565c:
          ppppbVar20 = ppppbVar12;
          FUN_7101ac7410(piVar36,piVar27,(ulong)ppppppppplVar16,(int *)ppppbVar12,
                         (long)ppppppppplVar21);
          FUN_710392eb40((ulong)ppppbVar12);
          goto LAB_7101ac5684;
        }
        if (DAT_7105332f00 != (long *)0x0) {
          local_148 = (long ***)((ulong)local_148 & 0xffffffff00000000);
          ppppppppplVar18 = (long *********)&local_d0;
          local_d0 = (undefined **)pppppppplVar28;
          uVar25 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_148);
          if (((uVar25 & 1) != 0) &&
             (ppppbVar12 = (byte ****)
                           FUN_710392e290(0x10,pppppppplVar28,(long ****)ppppppppplVar18,ppppbVar20,
                                          (long ****)ppppppppplVar22,param_6,param_7,param_8),
             ppppbVar12 != (byte ****)0x0)) goto LAB_7101ac565c;
        }
        ppppppppplVar21 = (long *********)((ulong)ppppppppplVar21 >> 1);
      } while (ppppppppplVar21 != (long *********)0x0);
    }
    ppppbVar20 = (byte ****)0x0;
    ppppppppplVar21 = (long *********)0x0;
    FUN_7101ac7410(piVar36,piVar27,(ulong)ppppppppplVar16,(int *)0x0,0);
  }
LAB_7101ac5684:
  lVar26 = lVar37 + uVar47 * 0x3c0;
  uVar15 = 0;
  uVar44 = 0;
  pbVar2 = (byte *)((long)&local_140 + 1);
  uVar25 = 0;
  pbVar3 = (byte *)((long)&uStack_c8 + 1);
  do {
    pcVar45 = (char *)(lVar37 + uVar47 * 0x3c0 + uVar25 * 0x50 + 0x90);
    if (*pcVar45 != '\0') {
      local_23c = (uint)uVar25;
      uVar38 = local_23c & 0xff;
      if (cVar8 == '\t') {
        lVar29 = lVar37 + uVar47 * 0x3c0 + ((ulong)uVar38 / 5) * 0x50 +
                 (long)(int)(local_23c + (uVar38 / 5) * -5) * 0x10;
        puVar49 = *(undefined1 **)(lVar29 + 0x318);
        local_24c = *(uint *)(lVar29 + 800);
        bVar6 = *pcVar40 == '\t';
        lVar29 = 0;
        do {
          lVar48 = lVar26 + lVar29;
          uVar35 = *(ulong *)(lVar48 + 0x80);
          if ((((ulong)puVar49 & 0xff00000000000000) == 0xc100000000000000) &&
             (((ulong)puVar49 & 0xffffffffff) != 0)) {
            bVar7 = false;
            if (((uVar35 & 0xff00000000000000) == 0xc100000000000000) &&
               ((uVar35 & 0xffffffffff) != 0)) {
              if (((uVar35 ^ (ulong)puVar49) & 0xffffffffff) == 0) goto LAB_7101ac57b8;
LAB_7101ac57a0:
              bVar7 = false;
            }
          }
          else {
            if ((uVar35 & 0xff00000000000000) == 0xc100000000000000 && (uVar35 & 0xffffffffff) != 0)
            goto LAB_7101ac57a0;
LAB_7101ac57b8:
            bVar7 = uVar38 / 5 == (uint)*(byte *)(lVar48 + 0x91);
          }
          lVar29 = lVar29 + 0x50;
          bVar6 = (bool)(bVar6 | bVar7);
        } while (lVar29 != 0x280);
        pcVar32 = "size_s_on";
        if (!bVar6) {
          pcVar32 = "size_s_off";
        }
        ppppppppplVar16 = (long *********)(uVar25 & 0xffffffff);
LAB_7101ac5888:
        FUN_7103776640(&local_208,lVar39,(byte ****)"set_rep_icn_fighter_%02d",ppppppppplVar16,
                       ppppbVar20,(long ****)ppppppppplVar21,param_6,param_7,param_8);
        pppppppplVar28 = local_200;
        FUN_7103778300(0x3f800000,(long)local_200,(long)pcVar32);
        if (cVar8 == '\t') {
          uVar24 = 0;
        }
        else {
          if (7 < uVar25) {
            local_208 = &PTR_FUN_710523d988;
            local_200 = (long ********)0x0;
            if (pppppppplVar28 == (long ********)0x0) goto LAB_7101ac6220;
            ppppppplVar14 = pppppppplVar28[3];
            pppppppplVar28[2] = (long *******)&PTR_FUN_710523d9a8;
            pppppppplVar28[3] = (long *******)0x0;
            if (ppppppplVar14 != (long *******)0x0) {
              FUN_710392eb40((ulong)ppppppplVar14);
            }
            goto LAB_7101ac621c;
          }
          bVar23 = *(byte *)(lVar37 + uVar47 * 0x3c0 + uVar25 * 0x50 + 0x93);
          if (bVar23 == 0) {
            uVar24 = 1;
          }
          else if (bVar23 < 0x10) {
            uVar24 = 2;
          }
          else if (bVar23 < 0x16) {
            uVar24 = 3;
          }
          else if (bVar23 < 0x20) {
            uVar24 = 4;
          }
          else {
            uVar24 = 5;
            if (0x2a < bVar23) {
              if (bVar23 < 0x31) {
                uVar24 = 6;
              }
              else if (bVar23 < 0x3d) {
                uVar24 = 7;
              }
              else if (bVar23 < 0x4c) {
                uVar24 = 8;
              }
              else {
                uVar24 = 9;
                if (100 < bVar23) {
                  uVar24 = 1;
                }
              }
            }
          }
        }
        cVar31 = *pcVar40;
        cVar34 = *pcVar45;
        uVar10 = (uint)*(byte *)(lVar37 + uVar47 * 0x3c0 + uVar25 * 0x50 + 0x91);
        if (*(char *)(lVar26 + 0x6f) == '\0') {
          uVar10 = 0xffffffff;
        }
        uVar38 = uVar38 / 5;
        if (cVar8 != '\t') {
          uVar38 = uVar10;
        }
        if (cVar31 == '\x10' && cVar34 == '\x02' || cVar8 == '\t') {
          cVar34 = '\x01';
        }
        lVar29 = *(long *)(DAT_710532f730 + 8);
        lVar48 = *(long *)(lVar29 + 0x168);
        uVar10 = FUN_71032632a0(lVar48,(ulong)puVar49);
        uVar35 = 0x11b1ccb807;
        if ((uVar10 & 1) == 0) {
          bVar6 = FUN_71032648e0(lVar29 + 0x160,(ulong)puVar49);
          uVar35 = 0x143829f67e;
          if (bVar6) goto LAB_7101ac5a00;
        }
        else {
LAB_7101ac5a00:
          puVar49 = FUN_71032631a0(lVar48,uVar35);
        }
        uVar19 = (ulong)(local_23c + (3 < (int)local_23c && cVar8 != '\t'));
        FUN_7103776640(&local_e0,lVar39,(byte ****)"set_rep_icn_fighter_%02d",uVar19,ppppbVar20,
                       (long ****)ppppppppplVar21,param_6,param_7,param_8);
        uVar35 = local_d8;
        if ((*(long *)(local_d8 + 8) != 0) &&
           ((lVar29 = *(long *)(*(long *)(local_d8 + 8) + 0x18), lVar29 == 0 ||
            (*(byte *)(lVar29 + 0x58) =
                  *(byte *)(lVar29 + 0x58) & 0xfe |
                  (((ulong)puVar49 & 0xff00000000000000) == 0xc100000000000000 &&
                  ((ulong)puVar49 & 0xffffffffff) != 0), *(long *)(local_d8 + 8) != 0)))) {
          FUN_7103776910(&local_f0,(long)&local_e0,(long ****)"set_rep_icn_fiter_color",uVar19,
                         ppppbVar20,(long ****)ppppppppplVar21,param_6,param_7,param_8);
          FUN_7103776910(&local_100,(long)&local_e0,(long ****)"set_rep_icn_fiter_ds",uVar19,
                         ppppbVar20,(long ****)ppppppppplVar21,param_6,param_7,param_8);
          plVar42 = *(long **)(param_1 + 0x2f0);
          local_d0 = (undefined **)FUN_7103238a70((ulong)puVar49,(ulong)local_24c,1);
          if (((ulong)local_d0 & 0xffffffffff) != 0) {
            lVar29 = *plVar42;
            FUN_710323c4e0(lVar29,&local_d0,(long *********)(long)*(int *)(lVar29 + 0x70),
                           (byte ****)(ulong)*(uint *)(lVar29 + 0x68),(long ****)ppppppppplVar21,
                           param_6,param_7,param_8);
          }
          ppppppppplVar16 = (long *********)(ulong)local_24c;
          ppppbVar20 = (byte ****)0x1;
          plVar13 = FUN_710323f330(*(long **)(param_1 + 0x2f0),(ulong)puVar49,(ulong)ppppppppplVar16
                                   ,1,(long ****)ppppppppplVar21,param_6,param_7,param_8);
          plVar33 = local_e8;
          plVar42 = local_f8;
          if (((*(long *)plVar13[1] == 0) || (*local_e8 == 0)) || (*local_f8 == 0)) {
            FUN_71037790a0((long)local_e8,1,ppppppppplVar16,ppppbVar20,(long ****)ppppppppplVar21,
                           param_6,param_7,param_8);
            plVar42 = local_f8;
            FUN_71037790a0((long)local_f8,1,ppppppppplVar16,ppppbVar20,(long ****)ppppppppplVar21,
                           param_6,param_7,param_8);
          }
          else {
            FUN_7103778b80((long)local_e8,(long)plVar13,ppppppppplVar16,ppppbVar20,
                           (long ****)ppppppppplVar21,param_6,param_7,param_8);
            FUN_7103778b80((long)plVar42,(long)plVar13,ppppppppplVar16,ppppbVar20,
                           (long ****)ppppppppplVar21,param_6,param_7,param_8);
            lVar29 = *(long *)(DAT_710532f730 + 8);
            uVar10 = FUN_7103280ec0(*(long *)(lVar29 + 0x2a8),(ulong)puVar49,(ulong)local_24c,
                                    ppppbVar20,ppppppppplVar21,param_6,param_7,param_8);
            lVar29 = *(long *)(*(long *)(lVar29 + 0x2a8) + 8);
            auVar51._8_8_ = 0;
            auVar51._0_8_ = uVar44;
            auVar51 = FUN_710326ad60(auVar51 << 0x40,lVar29,uVar10,0x120ae7cf4f);
            auVar52._8_8_ = 0;
            auVar52._0_8_ = uVar44;
            auVar52 = FUN_710326ad60(auVar52 << 0x40,lVar29,uVar10,0x127de0ffd9);
            auVar53._8_8_ = uVar15;
            auVar53._0_8_ = 0x3f800000;
            ppppppppplVar16 = (long *********)0xf95a1c649;
            auVar53 = FUN_710326ad60(auVar53,lVar29,uVar10,0xf95a1c649);
            local_d0 = (undefined **)CONCAT44(auVar52._0_4_,auVar51._0_4_);
            uStack_c8 = (long ********)0x0;
            FUN_7103779770(auVar53._0_4_,(long)plVar33,&local_d0);
            FUN_7103779770(auVar53._0_4_,(long)plVar42,&local_d0);
          }
          if (cVar31 == '\x12') {
            uVar38 = 0xffffffff;
          }
          uStack_c8 = (long ********)((ulong)uStack_c8 & 0xffffffffffffff00);
          local_d0 = (undefined **)0x0;
          if (uVar38 < 4) {
            FUN_71003a4ca0((uint *)&local_148,"team_color_%d",(ulong)(uVar38 + 1),ppppppppplVar16,
                           ppppbVar20,ppppppppplVar21,param_6,param_7,param_8);
            for (uVar19 = 0; cVar31 = *(char *)((long)&local_140 + uVar19), cVar31 != '\0';
                uVar19 = uVar19 + 2) {
              *(char *)((long)&uStack_c8 + uVar19) = cVar31;
              if (0x3e < (int)uVar19 + 1U) {
                uVar19 = (ulong)((int)uVar19 + 1);
                break;
              }
              cVar31 = *(char *)((long)&local_140 + uVar19 + 1);
              if (cVar31 == '\0') {
                uVar19 = uVar19 + 1;
                break;
              }
              *(char *)((long)&uStack_c8 + uVar19 + 1) = cVar31;
            }
            *(undefined1 *)((long)&uStack_c8 + (uVar19 & 0xffffffff)) = 0;
            local_d0._4_4_ = (undefined4)uVar19;
            uVar10 = (uint)(byte)uStack_c8;
            uVar38 = 0x811c9dc5;
            if ((byte)uStack_c8 != 0) {
              uVar38 = 0x811c9dc5;
              pbVar30 = pbVar3;
              do {
                uVar38 = uVar38 * 0x89 ^ uVar10;
                uVar10 = (uint)*pbVar30;
                pbVar30 = pbVar30 + 1;
              } while (uVar10 != 0);
            }
          }
          else if (cVar34 == '\x02') {
            local_140 = 0x635f726579616c70;
            uVar10 = 0x70;
            uVar38 = 0x811c9dc5;
            local_138 = 0x70635f726f6c6f;
            pbVar30 = pbVar2;
            do {
              uVar38 = uVar38 * 0x89 ^ uVar10;
              uVar10 = (uint)*pbVar30;
              pbVar30 = pbVar30 + 1;
            } while (uVar10 != 0);
            uVar19 = 0;
            local_148 = (long ***)CONCAT44(0xf,uVar38);
            cVar31 = 'p';
            do {
              *(char *)((long)&uStack_c8 + uVar19) = cVar31;
              if (0x3e < (int)uVar19 + 1U) {
                uVar19 = (ulong)((int)uVar19 + 1);
                break;
              }
              if (pbVar2[uVar19] == 0) {
                uVar19 = uVar19 + 1;
                break;
              }
              pbVar3[uVar19] = pbVar2[uVar19];
              cVar31 = *(char *)((long)&local_140 + uVar19 + 2);
              uVar19 = uVar19 + 2;
            } while (cVar31 != '\0');
            *(undefined1 *)((long)&uStack_c8 + (uVar19 & 0xffffffff)) = 0;
            local_d0._4_4_ = (undefined4)uVar19;
            uVar10 = (uint)(byte)uStack_c8;
            uVar38 = 0x811c9dc5;
            if ((byte)uStack_c8 != 0) {
              uVar38 = 0x811c9dc5;
              pbVar30 = pbVar3;
              do {
                uVar38 = uVar38 * 0x89 ^ uVar10;
                uVar10 = (uint)*pbVar30;
                pbVar30 = pbVar30 + 1;
              } while (uVar10 != 0);
            }
          }
          else if (cVar34 == '\x01') {
            FUN_71003a4ca0((uint *)&local_148,"player_color_%dp",(ulong)(local_23c + 1),
                           ppppppppplVar16,ppppbVar20,ppppppppplVar21,param_6,param_7,param_8);
            for (uVar19 = 0; cVar31 = *(char *)((long)&local_140 + uVar19), cVar31 != '\0';
                uVar19 = uVar19 + 2) {
              *(char *)((long)&uStack_c8 + uVar19) = cVar31;
              if (0x3e < (int)uVar19 + 1U) {
                uVar19 = (ulong)((int)uVar19 + 1);
                break;
              }
              cVar31 = *(char *)((long)&local_140 + uVar19 + 1);
              if (cVar31 == '\0') {
                uVar19 = uVar19 + 1;
                break;
              }
              *(char *)((long)&uStack_c8 + uVar19 + 1) = cVar31;
            }
            *(undefined1 *)((long)&uStack_c8 + (uVar19 & 0xffffffff)) = 0;
            local_d0._4_4_ = (undefined4)uVar19;
            uVar10 = (uint)(byte)uStack_c8;
            uVar38 = 0x811c9dc5;
            if ((byte)uStack_c8 != 0) {
              uVar38 = 0x811c9dc5;
              pbVar30 = pbVar3;
              do {
                uVar38 = uVar38 * 0x89 ^ uVar10;
                uVar10 = (uint)*pbVar30;
                pbVar30 = pbVar30 + 1;
              } while (uVar10 != 0);
            }
          }
          else {
            local_140 = 0x635f726579616c70;
            uVar10 = 0x70;
            uVar38 = 0x811c9dc5;
            local_138 = 0x70665f726f6c6f;
            pbVar30 = pbVar2;
            do {
              uVar38 = uVar38 * 0x89 ^ uVar10;
              uVar10 = (uint)*pbVar30;
              pbVar30 = pbVar30 + 1;
            } while (uVar10 != 0);
            uVar19 = 0;
            local_148 = (long ***)CONCAT44(0xf,uVar38);
            cVar31 = 'p';
            do {
              *(char *)((long)&uStack_c8 + uVar19) = cVar31;
              if (0x3e < (int)uVar19 + 1U) {
                uVar19 = (ulong)((int)uVar19 + 1);
                break;
              }
              if (pbVar2[uVar19] == 0) {
                uVar19 = uVar19 + 1;
                break;
              }
              pbVar3[uVar19] = pbVar2[uVar19];
              cVar31 = *(char *)((long)&local_140 + uVar19 + 2);
              uVar19 = uVar19 + 2;
            } while (cVar31 != '\0');
            *(undefined1 *)((long)&uStack_c8 + (uVar19 & 0xffffffff)) = 0;
            local_d0._4_4_ = (undefined4)uVar19;
            uVar10 = (uint)(byte)uStack_c8;
            uVar38 = 0x811c9dc5;
            if ((byte)uStack_c8 != 0) {
              uVar38 = 0x811c9dc5;
              pbVar30 = pbVar3;
              do {
                uVar38 = uVar38 * 0x89 ^ uVar10;
                uVar10 = (uint)*pbVar30;
                pbVar30 = pbVar30 + 1;
              } while (uVar10 != 0);
            }
          }
          local_d0 = (undefined **)CONCAT44(local_d0._4_4_,uVar38);
          FUN_7103778300(0x3f800000,uVar35,(long)&uStack_c8);
          local_100 = &PTR_FUN_710523d9a8;
          local_f8 = (long *)0x0;
          if (plVar42 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar42);
          }
          local_f0 = &PTR_FUN_710523d9a8;
          local_e8 = (long *)0x0;
          if (plVar33 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar33);
          }
        }
        if (cVar34 == '\x02') {
          FUN_7103776910(&local_d0,lVar39,(long ****)"set_txt_bar_title_%02d",(ulong)local_23c,
                         ppppbVar20,(long ****)ppppppppplVar21,param_6,param_7,param_8);
          ppppbVar20 = (byte ****)(ulong)uVar24;
          ppppppppplVar16 = (long *********)0x1;
          FUN_710377a280((long)&local_d0,(byte *)"mnu_replay_detail_fighter_name_cp_level",1);
          pppppppplVar5 = uStack_c8;
          local_d0 = &PTR_FUN_710523d9a8;
          uStack_c8 = (long ********)0x0;
          if (pppppppplVar5 != (long ********)0x0) {
            FUN_710392eb40((ulong)pppppppplVar5);
          }
        }
        else if (cVar34 == '\x03') {
          ppppppppplVar16 = (long *********)(ulong)local_23c;
          FUN_7103776910(&local_d0,lVar39,(long ****)"set_txt_bar_title_%02d",ppppppppplVar16,
                         ppppbVar20,(long ****)ppppppppplVar21,param_6,param_7,param_8);
          pppppppplVar5 = uStack_c8;
          if (uStack_c8[2] != (long *******)0x0) {
            ppppbVar20 = (byte ****)0x1;
            ppppppppplVar16 = (long *********)&DAT_ffffffff;
            FUN_71037a2270((long *)uStack_c8[2],
                           (ushort *)(lVar37 + uVar47 * 0x3c0 + uVar25 * 0x50 + 0xb8),0xffffffff,1);
          }
          local_d0 = &PTR_FUN_710523d9a8;
          uStack_c8 = (long ********)0x0;
          if (pppppppplVar5 != (long ********)0x0) {
            FUN_710392eb40((ulong)pppppppplVar5);
          }
        }
        else {
          lVar29 = *(long *)(DAT_710532f730 + 8);
          FUN_7103776910(&local_f0,lVar39,(long ****)"set_txt_bar_title_%02d",(ulong)local_23c,
                         ppppbVar20,(long ****)ppppppppplVar21,param_6,param_7,param_8);
          uVar38 = FUN_7103263540(*(long *)(lVar29 + 0x168),(ulong)puVar49,(ulong)local_24c,
                                  ppppbVar20,ppppppppplVar21,param_6,param_7,param_8);
          FUN_7103262310((uint *)&local_d0,*(long *)(lVar29 + 0x168),(ulong)puVar49);
          ppppppppplVar16 = (long *********)&uStack_c8;
          FUN_71003a4ca0((uint *)&local_148,"nam_chr1_%02d_%s",(ulong)uVar38,&uStack_c8,ppppbVar20,
                         ppppppppplVar21,param_6,param_7,param_8);
          FUN_710377a120((long)&local_f0,(char *)&local_140,ppppppppplVar16,ppppbVar20,
                         ppppppppplVar21,param_6,param_7,param_8);
          plVar42 = local_e8;
          local_f0 = &PTR_FUN_710523d9a8;
          local_e8 = (long *)0x0;
          if (plVar42 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar42);
          }
        }
        local_d8 = 0;
        local_e0 = &PTR_FUN_710523d988;
        if (uVar35 != 0) {
          local_d8 = 0;
          local_e0 = &PTR_FUN_710523d988;
          uVar19 = *(ulong *)(uVar35 + 0x18);
          *(undefined ***)(uVar35 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar35 + 0x18) = 0;
          if (uVar19 != 0) {
            FUN_710392eb40(uVar19);
          }
          FUN_710392eb40(uVar35);
        }
        local_208 = &PTR_FUN_710523d988;
        local_200 = (long ********)0x0;
        if (pppppppplVar28 != (long ********)0x0) {
          ppppppplVar14 = pppppppplVar28[3];
          pppppppplVar28[2] = (long *******)&PTR_FUN_710523d9a8;
          pppppppplVar28[3] = (long *******)0x0;
          if (ppppppplVar14 != (long *******)0x0) {
            FUN_710392eb40((ulong)ppppppplVar14);
          }
          FUN_710392eb40((ulong)pppppppplVar28);
        }
      }
      else if (local_1f0 != local_1f8) {
        iVar9 = *local_1f8;
        piVar36 = local_1f8;
        while (iVar9 != *(int *)(lVar37 + uVar47 * 0x3c0 + uVar25 * 0x50 + 0x98)) {
          piVar36 = piVar36 + 6;
          if (local_1f0 == piVar36) goto LAB_7101ac6158;
          iVar9 = *piVar36;
        }
        if (piVar36 != local_1f0) {
          local_23c = (int)((ulong)((long)piVar36 - (long)local_1f8) >> 3) * -0x55555555;
          lVar29 = lVar37 + uVar47 * 0x3c0 + uVar25 * 0x50;
          puVar49 = *(undefined1 **)(lVar29 + 0x80);
          uVar24 = local_23c;
          if (3 < (int)local_23c) {
            uVar24 = local_23c + 1;
          }
          ppppppppplVar16 = (long *********)(ulong)uVar24;
          local_24c = (uint)*(byte *)(lVar29 + 0x92);
          pcVar32 = "size_m_on";
          goto LAB_7101ac5888;
        }
      }
    }
LAB_7101ac6158:
    uVar25 = uVar25 + 1;
  } while (uVar25 < 10);
  if (cVar8 == '\t') {
    FUN_7103776910(&local_d0,lVar39,(long ****)"set_txt_bar_title_00",ppppppppplVar16,ppppbVar20,
                   (long ****)ppppppppplVar21,param_6,param_7,param_8);
    FUN_710377a120((long)&local_d0,"mel_result_team_red",ppppppppplVar16,ppppbVar20,ppppppppplVar21,
                   param_6,param_7,param_8);
    pppppppplVar28 = uStack_c8;
    local_d0 = &PTR_FUN_710523d9a8;
    uStack_c8 = (long ********)0x0;
    if (pppppppplVar28 != (long ********)0x0) {
      FUN_710392eb40((ulong)pppppppplVar28);
    }
    FUN_7103776910(&local_d0,lVar39,(long ****)"set_txt_bar_title_04",ppppppppplVar16,ppppbVar20,
                   (long ****)ppppppppplVar21,param_6,param_7,param_8);
    FUN_710377a120((long)&local_d0,"mel_result_team_blue",ppppppppplVar16,ppppbVar20,ppppppppplVar21
                   ,param_6,param_7,param_8);
    pppppppplVar28 = uStack_c8;
    local_d0 = &PTR_FUN_710523d9a8;
    uStack_c8 = (long ********)0x0;
    if (pppppppplVar28 != (long ********)0x0) {
LAB_7101ac621c:
      FUN_710392eb40((ulong)pppppppplVar28);
    }
  }
LAB_7101ac6220:
  if (*pcVar40 == '\t') {
    pcVar40 = "ly_02_dantai_3vs3";
    if (*(char *)(lVar37 + uVar47 * 0x3c0 + 0x311) != '\0') {
      pcVar40 = "ly_03_dantai_5vs5";
    }
    FUN_710062dc20((uint *)&local_190,pcVar40);
  }
  else if (*pcVar40 == '\x12') {
    uVar25 = (long)local_1f0 - (long)local_1f8;
    FUN_710062dc20((uint *)&local_190,"ly_06_fighter_1_");
    uVar25 = (ulong)(uint)((int)(uVar25 >> 3) * -0x55555555);
    FUN_710149ebc0((uint *)&local_190,"%d");
    fVar50 = *(float *)(lVar37 + uVar47 * 0x3c0 + 0x308);
    uVar38 = (uint)(fVar50 / 1000.0);
    FUN_7103776910(&local_d0,lVar39,(long ****)"set_txt_scoretxt",uVar25,ppppbVar20,
                   (long ****)ppppppppplVar21,param_6,param_7,param_8);
    ppppppppplVar16 = (long *********)0x2;
    ppppbVar20 = (byte ****)(ulong)uVar38;
    ppppppppplVar21 = (long *********)(ulong)(uint)(int)(fVar50 - (float)(int)(uVar38 * 1000));
    FUN_710377a280((long)&local_d0,(byte *)"mnu_replay_detail_score_homerun",2);
    pppppppplVar28 = uStack_c8;
    local_d0 = &PTR_FUN_710523d9a8;
    uStack_c8 = (long ********)0x0;
    if (pppppppplVar28 != (long ********)0x0) {
      FUN_710392eb40((ulong)pppppppplVar28);
    }
  }
  else {
    uVar38 = (int)((ulong)((long)local_1f0 - (long)local_1f8) >> 3) * -0x55555555;
    pcVar40 = "ly_05_fighter_2_";
    if (4 < (int)uVar38) {
      pcVar40 = "ly_04_fighter_5_";
    }
    FUN_710062dc20((uint *)&local_190,pcVar40);
    ppppppppplVar16 = (long *********)(ulong)uVar38;
    FUN_710149ebc0((uint *)&local_190,"%d");
  }
  lVar37 = **(long **)(param_1 + 0x300) + (long)*(int *)(param_1 + 0x2f8) * 0x3c0;
  if (*(char *)(lVar37 + 0x6c) == '\x12') {
    lVar37 = **(long **)(param_1 + 0x300) + (long)*(int *)(param_1 + 0x2f8) * 0x3c0;
    cVar8 = *(char *)(lVar37 + 0x90) == '\x01';
    cVar34 = '\x02';
    if (!(bool)cVar8) {
      cVar34 = '\x01';
    }
    if (*(char *)(lVar37 + 0xe0) == '\x01') {
      cVar8 = cVar34;
    }
    if (*(char *)(lVar37 + 0x130) == '\x01') {
      cVar8 = cVar8 + '\x01';
    }
    if (*(char *)(lVar37 + 0x180) == '\x01') {
      cVar8 = cVar8 + '\x01';
    }
    if (*(char *)(lVar37 + 0x1d0) == '\x01') {
      cVar8 = cVar8 + '\x01';
    }
    if (*(char *)(lVar37 + 0x220) == '\x01') {
      cVar8 = cVar8 + '\x01';
    }
    if (*(char *)(lVar37 + 0x270) == '\x01') {
      cVar8 = cVar8 + '\x01';
    }
    if (*(char *)(lVar37 + 0x2c0) == '\x01') {
      cVar8 = cVar8 + '\x01';
    }
    bVar23 = 0x10;
    if (cVar8 != '\x02') {
      bVar23 = 8;
    }
  }
  else {
    bVar23 = *(int *)(lVar37 + 0x70) != 0 | (*(int *)(lVar37 + 0x74) != 0) << 1 |
             (0.0 < *(float *)(lVar37 + 0x9c)) << 2;
  }
  if (bVar23 == 0x10 || bVar23 == 8) {
    lVar37 = *(long *)(param_1 + 0x238);
    pcVar40 = "rule_txt_in_off";
  }
  else {
    lVar37 = *(long *)(param_1 + 0x238);
    pcVar40 = "rule_txt_in_on";
  }
  FUN_7103778300(0x3f800000,lVar37,(long)pcVar40);
  FUN_7103776910(&local_218,lVar1,(long ****)"set_txt_header_rule",ppppppppplVar16,ppppbVar20,
                 (long ****)ppppppppplVar21,param_6,param_7,param_8);
  FUN_7103776910(&local_228,lVar1,(long ****)"set_txt_rule",ppppppppplVar16,ppppbVar20,
                 (long ****)ppppppppplVar21,param_6,param_7,param_8);
  pppplVar17 = (long ****)
               (**(long **)(param_1 + 0x300) + (long)*(int *)(param_1 + 0x2f8) * 0x3c0 + 8);
  FUN_7101ac6fd0((long)&local_218,(long)&local_228,(long)pppplVar17,ppppbVar20,ppppppppplVar21,
                 param_6,param_7,param_8);
  uVar25 = local_220;
  local_228 = &PTR_FUN_710523d9a8;
  local_220 = 0;
  if (uVar25 != 0) {
    FUN_710392eb40(uVar25);
  }
  uVar25 = local_210;
  local_218 = &PTR_FUN_710523d9a8;
  local_210 = 0;
  if (uVar25 != 0) {
    FUN_710392eb40(uVar25);
  }
  FUN_7103776640(&local_238,lVar1,(byte ****)"set_parts_tag_disp",pppplVar17,ppppbVar20,
                 (long ****)ppppppppplVar21,param_6,param_7,param_8);
  FUN_7101ac71e0(param_1,&local_238,pppplVar17,ppppbVar20,(long ****)ppppppppplVar21,param_6,param_7
                 ,param_8);
  uVar25 = local_230;
  local_238 = &PTR_FUN_710523d988;
  local_230 = 0;
  if (uVar25 != 0) {
    uVar47 = *(ulong *)(uVar25 + 0x18);
    *(undefined ***)(uVar25 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar25 + 0x18) = 0;
    if (uVar47 != 0) {
      FUN_710392eb40(uVar47);
    }
    FUN_710392eb40(uVar25);
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x2e8),(long)local_188);
  FUN_7103776910(&local_d0,lVar39,(long ****)"set_txt_version",pppplVar17,ppppbVar20,
                 (long ****)ppppppppplVar21,param_6,param_7,param_8);
  FUN_710377a280((long)&local_d0,(byte *)"mnu_replay_detail_data_version",3);
  pppppppplVar28 = uStack_c8;
  local_d0 = &PTR_FUN_710523d9a8;
  uStack_c8 = (long ********)0x0;
  if (pppppppplVar28 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar28);
  }
  if (local_1f8 != (int *)0x0) {
    local_1f0 = local_1f8;
    FUN_710392eb40((ulong)local_1f8);
  }
  uVar25 = local_198;
  local_1a0 = &PTR_FUN_710523d988;
  local_198 = 0;
  if (uVar25 != 0) {
    uVar47 = *(ulong *)(uVar25 + 0x18);
    *(undefined ***)(uVar25 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar25 + 0x18) = 0;
    if (uVar47 != 0) {
      FUN_710392eb40(uVar47);
    }
    FUN_710392eb40(uVar25);
  }
  return;
}

