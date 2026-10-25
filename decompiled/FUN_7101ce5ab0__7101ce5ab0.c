// addr:      7101ce5ab0
// offset:    0x1ce5ab0
// name:      FUN_7101ce5ab0
// mangled:   
// signature: undefined __cdecl FUN_7101ce5ab0(long param_1, undefined8 * param_2, long param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ce5ab0(long param_1,undefined8 *param_2,long param_3,ulong param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  byte ****ppppbVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  int iVar17;
  long ****pppplVar18;
  long *********ppppppppplVar19;
  byte ****ppppbVar20;
  long ****pppplVar21;
  uint uVar22;
  int *piVar23;
  long ***ppplVar24;
  byte *pbVar25;
  ulong uVar26;
  char cVar27;
  uint uVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  long *plVar31;
  undefined1 *puVar32;
  undefined **__dest;
  long lVar33;
  char *pcVar34;
  long lVar35;
  long lVar36;
  long ****pppplVar37;
  long ****pppplVar38;
  undefined8 *puVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined8 uVar44;
  undefined **local_1a0;
  long *local_198;
  undefined **local_190;
  long *local_188;
  undefined **local_180;
  ulong local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined **local_128;
  ulong local_120;
  undefined **local_118;
  undefined **local_110;
  undefined **local_108;
  undefined **local_100;
  ulong local_f8;
  undefined **local_f0;
  ulong local_e8;
  undefined **local_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  
  lVar12 = param_3;
  uVar14 = param_4;
  FUN_7103776640(&local_e0,(long)param_2,(byte ****)"set_parts_det_panel",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar8 = *(uint *)(param_3 + 8);
  FUN_7103776640(&local_d0,(long)param_2,(byte ****)"set_parts_det_panel",lVar12,uVar14,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_170,(long)&local_d0,(long ****)"set_txt_version",lVar12,uVar14,param_5,
                 param_6,param_7,param_8);
  pppplVar18 = (long ****)(ulong)(uVar8 >> 0xc & 0xf);
  ppppbVar20 = (byte ****)(ulong)(uVar8 >> 5 & 0x3f);
  pppplVar21 = (long ****)(ulong)(uVar8 & 0x1f);
  FUN_710377a310((long)&local_170,3);
  uVar14 = local_168;
  local_170 = &PTR_FUN_710523d9a8;
  local_168 = 0;
  if (uVar14 != 0) {
    FUN_710392eb40(uVar14);
  }
  uVar14 = uStack_c8;
  local_d0 = &PTR_FUN_710523d988;
  uStack_c8 = 0;
  if (uVar14 != 0) {
    uVar11 = *(ulong *)(uVar14 + 0x18);
    *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar14 + 0x18) = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    FUN_710392eb40(uVar14);
  }
  FUN_7103776390(&local_f0,param_2,pppplVar18,ppppbVar20,pppplVar21,param_6,param_7,param_8);
  if (*(uint *)(param_3 + 0x2f8) < 0x16c) {
    if ((&DAT_710454a7f0)[(long)(int)*(uint *)(param_3 + 0x2f8) * 0x12] == 1) {
      FUN_7103776640(&local_d0,(long)&local_f0,(byte ****)"set_parts_tag_disp",pppplVar18,ppppbVar20
                     ,pppplVar21,param_6,param_7,param_8);
      uVar14 = uStack_c8;
      FUN_7103778300(0x3f800000,uStack_c8,0x710439d5c9);
      FUN_7103778300(0x3f800000,uVar14,0x71043cf622);
      FUN_7103776910(&local_170,(long)&local_d0,(long ****)"set_txt_tag",pppplVar18,ppppbVar20,
                     pppplVar21,param_6,param_7,param_8);
      pcVar34 = "mnu_replay_detail_end";
    }
    else {
      if ((&DAT_710454a7f0)[(long)(int)*(uint *)(param_3 + 0x2f8) * 0x12] != 2) goto LAB_7101ce5c24;
      FUN_7103776640(&local_d0,(long)&local_f0,(byte ****)"set_parts_tag_disp",pppplVar18,ppppbVar20
                     ,pppplVar21,param_6,param_7,param_8);
      uVar14 = uStack_c8;
      FUN_7103778300(0x3f800000,uStack_c8,0x710439d5c9);
      FUN_7103778300(0x3f800000,uVar14,0x7104280b98);
      FUN_7103776910(&local_170,(long)&local_d0,(long ****)"set_txt_tag",pppplVar18,ppppbVar20,
                     pppplVar21,param_6,param_7,param_8);
      pcVar34 = "mnu_replay_detail_battlefield";
    }
    FUN_710377a120((long)&local_170,pcVar34,pppplVar18,ppppbVar20,pppplVar21,param_6,param_7,param_8
                  );
    uVar11 = local_168;
    local_170 = &PTR_FUN_710523d9a8;
    local_168 = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
  }
  else {
LAB_7101ce5c24:
    FUN_7103776640(&local_d0,(long)&local_f0,(byte ****)"set_parts_tag_disp",pppplVar18,ppppbVar20,
                   pppplVar21,param_6,param_7,param_8);
    uVar14 = uStack_c8;
    FUN_7103778300(0x3f800000,uStack_c8,0x710438cc37);
  }
  local_d0 = &PTR_FUN_710523d988;
  uStack_c8 = 0;
  if (uVar14 != 0) {
    uVar11 = *(ulong *)(uVar14 + 0x18);
    *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar14 + 0x18) = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    FUN_710392eb40(uVar14);
  }
  uVar14 = local_e8;
  local_f0 = &PTR_FUN_710523d988;
  local_e8 = 0;
  if (uVar14 != 0) {
    uVar11 = *(ulong *)(uVar14 + 0x18);
    *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar14 + 0x18) = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    FUN_710392eb40(uVar14);
  }
  uVar22 = *(uint *)(param_3 + 0x68);
  iVar17 = uVar22 / 0x3c + (uVar22 / 0xe10) * -0x3c;
  uVar8 = uVar22 / 0xe10;
  if (0x3e6 < uVar22 / 0xe10) {
    uVar8 = 999;
  }
  if (0x3e6 < iVar17) {
    iVar17 = 999;
  }
  FUN_7103776910(&local_d0,(long)param_2,(long ****)"set_txt_header_rule",pppplVar18,ppppbVar20,
                 pppplVar21,param_6,param_7,param_8);
  FUN_7103776910(&local_170,(long)param_2,(long ****)"set_txt_rule",pppplVar18,ppppbVar20,pppplVar21
                 ,param_6,param_7,param_8);
  if (*(char *)(param_3 + 100) == '\x12') {
    cVar6 = *(char *)(param_3 + 0xd8) == '\x01';
    cVar27 = '\x02';
    if (!(bool)cVar6) {
      cVar27 = '\x01';
    }
    if (*(char *)(param_3 + 0x88) == '\x01') {
      cVar6 = cVar27;
    }
    if (*(char *)(param_3 + 0x128) == '\x01') {
      cVar6 = cVar6 + '\x01';
    }
    if (*(char *)(param_3 + 0x178) == '\x01') {
      cVar6 = cVar6 + '\x01';
    }
    if (*(char *)(param_3 + 0x1c8) == '\x01') {
      cVar6 = cVar6 + '\x01';
    }
    if (*(char *)(param_3 + 0x218) == '\x01') {
      cVar6 = cVar6 + '\x01';
    }
    if (*(char *)(param_3 + 0x268) == '\x01') {
      cVar6 = cVar6 + '\x01';
    }
    if (*(char *)(param_3 + 0x2b8) == '\x01') {
      cVar6 = cVar6 + '\x01';
    }
    uVar22 = 0x10;
    if (cVar6 != '\x02') {
      uVar22 = 8;
    }
  }
  else {
    uVar22 = (uint)(*(int *)(param_3 + 0x68) != 0) | (uint)(*(int *)(param_3 + 0x6c) != 0) << 1 |
             (uint)(0.0 < *(float *)(param_3 + 0x94)) << 2;
  }
  if (0xf < uVar22 - 1) {
switchD_7101ce5e5c_caseD_4:
    FUN_710377a120((long)&local_d0,"mnu_replay_detail_rule_time",pppplVar18,ppppbVar20,pppplVar21,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_170,"mel_rule_select_time_inifinity",pppplVar18,ppppbVar20,
                   pppplVar21,param_6,param_7,param_8);
    goto LAB_7101ce5f4c;
  }
  uVar8 = iVar17 + uVar8 * 1000;
  switch(uVar22) {
  case 1:
    FUN_710377a120((long)&local_d0,"mnu_replay_detail_rule_time",pppplVar18,ppppbVar20,pppplVar21,
                   param_6,param_7,param_8);
    pppplVar18 = (long ****)0x1;
    ppppbVar20 = (byte ****)(ulong)uVar8;
    FUN_710377a280((long)&local_170,(byte *)"mel_rule_select_time",1);
    goto LAB_7101ce5f4c;
  case 2:
    pcVar34 = "mnu_replay_detail_rule_stock";
    break;
  case 3:
    pcVar34 = "mnu_replay_detail_rule_stock";
    goto LAB_7101ce5f28;
  default:
    goto switchD_7101ce5e5c_caseD_4;
  case 6:
    pcVar34 = "mnu_replay_detail_rule_stamina";
    break;
  case 7:
    pcVar34 = "mnu_replay_detail_rule_stamina";
LAB_7101ce5f28:
    FUN_710377a120((long)&local_d0,pcVar34,pppplVar18,ppppbVar20,pppplVar21,param_6,param_7,param_8)
    ;
    uVar22 = *(uint *)(param_3 + 0x6c);
    pcVar34 = "mel_rule_select_time_stock";
    ppppbVar20 = (byte ****)(ulong)uVar8;
    goto LAB_7101ce5f48;
  case 8:
    pcVar34 = "mnu_replay_detail_homerun_single";
    goto LAB_7101ce5f08;
  case 0x10:
    pcVar34 = "mnu_replay_detail_homerun_coop";
LAB_7101ce5f08:
    FUN_710377a120((long)&local_170,pcVar34,pppplVar18,ppppbVar20,pppplVar21,param_6,param_7,param_8
                  );
    lVar12 = param_2[1];
    pcVar34 = "rule_txt_off";
    goto LAB_7101ce5f58;
  }
  FUN_710377a120((long)&local_d0,pcVar34,pppplVar18,ppppbVar20,pppplVar21,param_6,param_7,param_8);
  uVar22 = *(uint *)(param_3 + 0x6c);
  pcVar34 = "mel_rule_select_time_inifinity_stock";
  ppppbVar20 = (byte ****)0x0;
LAB_7101ce5f48:
  pppplVar21 = (long ****)(ulong)uVar22;
  pppplVar18 = (long ****)0x2;
  FUN_710377a280((long)&local_170,(byte *)pcVar34,2);
LAB_7101ce5f4c:
  lVar12 = param_2[1];
  pcVar34 = "rule_txt_on";
LAB_7101ce5f58:
  FUN_7103778300(0x3f800000,lVar12,(long)pcVar34);
  uVar14 = local_168;
  local_170 = &PTR_FUN_710523d9a8;
  local_168 = 0;
  if (uVar14 != 0) {
    FUN_710392eb40(uVar14);
  }
  uVar14 = uStack_c8;
  local_d0 = &PTR_FUN_710523d9a8;
  uStack_c8 = 0;
  if (uVar14 != 0) {
    FUN_710392eb40(uVar14);
  }
  bVar3 = *(byte *)(param_3 + 100);
  if (((bVar3 - 9 < 8) || (bVar3 == 3)) || (bVar3 == 0)) {
    if (*(char *)(param_3 + 0x67) == '\x01') {
      lVar12 = 1;
    }
    else {
      cVar6 = *(char *)(param_3 + 0xd8) != '\0';
      cVar27 = '\x02';
      if (!(bool)cVar6) {
        cVar27 = '\x01';
      }
      if (*(char *)(param_3 + 0x88) != '\0') {
        cVar6 = cVar27;
      }
      if (*(char *)(param_3 + 0x128) != '\0') {
        cVar6 = cVar6 + '\x01';
      }
      if (*(char *)(param_3 + 0x178) != '\0') {
        cVar6 = cVar6 + '\x01';
      }
      if (*(char *)(param_3 + 0x1c8) != '\0') {
        cVar6 = cVar6 + '\x01';
      }
      if (*(char *)(param_3 + 0x218) != '\0') {
        cVar6 = cVar6 + '\x01';
      }
      if (*(char *)(param_3 + 0x268) != '\0') {
        cVar6 = cVar6 + '\x01';
      }
      if (*(char *)(param_3 + 0x2b8) != '\0') {
        cVar6 = cVar6 + '\x01';
      }
      lVar12 = (ulong)(cVar6 == '\x02') << 1;
    }
  }
  else {
    lVar12 = 3;
  }
  FUN_7103776910(&local_d0,(long)param_2,(long ****)"set_txt_mode_00",pppplVar18,ppppbVar20,
                 pppplVar21,param_6,param_7,param_8);
  FUN_7103776910(&local_170,(long)param_2,(long ****)"set_txt_mode_01",pppplVar18,ppppbVar20,
                 pppplVar21,param_6,param_7,param_8);
  cVar6 = *(char *)(param_3 + 100);
  if (cVar6 == '\x01') {
    pcVar34 = "mnu_share_detail_data_kind_various";
  }
  else if (cVar6 == '\x02') {
    pcVar34 = "mnu_share_detail_data_kind_sp_suddendeath";
  }
  else if (cVar6 == '\x12') {
    pcVar34 = "mnu_share_detail_data_kind_homerun";
  }
  else {
    pcVar34 = (&PTR_s_mnu_share_data_kind_all_71050ae5e0)[*(int *)(&DAT_71044686f0 + lVar12 * 4)];
  }
  FUN_710377a120((long)&local_d0,pcVar34,pppplVar18,ppppbVar20,pppplVar21,param_6,param_7,param_8);
  FUN_710377a120((long)&local_170,pcVar34,pppplVar18,ppppbVar20,pppplVar21,param_6,param_7,param_8);
  uVar14 = local_168;
  local_170 = &PTR_FUN_710523d9a8;
  local_168 = 0;
  if (uVar14 != 0) {
    FUN_710392eb40(uVar14);
  }
  uVar14 = uStack_c8;
  local_d0 = &PTR_FUN_710523d9a8;
  uStack_c8 = 0;
  if (uVar14 != 0) {
    FUN_710392eb40(uVar14);
  }
  FUN_7103776910(&local_100,(long)param_2,(long ****)"set_txt_time",pppplVar18,ppppbVar20,pppplVar21
                 ,param_6,param_7,param_8);
  iVar17 = *(int *)(param_3 + 0x60) / 0x3c;
  iVar4 = *(int *)(param_3 + 0x60) % 0x3c;
  if (0x3e6 < iVar17) {
    iVar17 = 999;
  }
  if (0x3e6 < iVar4) {
    iVar4 = 999;
  }
  pppplVar18 = (long ****)(ulong)(uint)(iVar4 + iVar17 * 1000);
  FUN_710377a310((long)&local_100,1);
  uVar14 = local_f8;
  local_100 = &PTR_FUN_710523d9a8;
  local_f8 = 0;
  if (uVar14 != 0) {
    FUN_710392eb40(uVar14);
  }
  lVar12 = 0;
  puVar39 = (undefined8 *)(param_3 + 0x78);
  local_118 = (undefined **)0x0;
  local_110 = (undefined **)0x0;
  local_108 = (undefined **)0x0;
  do {
    uVar14 = 0xaaaaaaaaaaaaaaa;
    lVar33 = param_3 + lVar12;
    if ((*(char *)(lVar33 + 0x88) != '\0') &&
       (puVar32 = *(undefined1 **)(lVar33 + 0x78),
       ((ulong)puVar32 & 0xff00000000000000) == 0xc100000000000000 &&
       ((ulong)puVar32 & 0xffffffffff) != 0)) {
      lVar36 = *(long *)(DAT_710532f730 + 8);
      lVar35 = *(long *)(lVar36 + 0x168);
      uVar8 = FUN_71032632a0(lVar35,(ulong)puVar32);
      uVar11 = 0x11b1ccb807;
      if ((uVar8 & 1) == 0) {
        bVar7 = FUN_71032648e0(lVar36 + 0x160,(ulong)puVar32);
        uVar11 = 0x143829f67e;
        if (bVar7) goto LAB_7101ce61e0;
      }
      else {
LAB_7101ce61e0:
        puVar32 = FUN_71032631a0(lVar35,uVar11);
      }
      ppuVar29 = local_118;
      bVar3 = *(byte *)(lVar33 + 0x8a);
      iVar17 = *(int *)(lVar33 + 0x90);
      if (local_110 < local_108) {
        *(int *)local_110 = iVar17;
        local_110[1] = puVar32;
        *(uint *)(local_110 + 2) = (uint)bVar3;
        local_110 = local_110 + 3;
      }
      else {
        pppplVar37 = (long ****)((long)local_110 - (long)local_118);
        uVar11 = ((long)pppplVar37 >> 3) * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar11) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar33 = (long)local_108 - (long)local_118 >> 3;
        if ((ulong)(lVar33 * -0x5555555555555555) < 0x555555555555555) {
          uVar16 = lVar33 * 0x5555555555555556;
          uVar14 = uVar11;
          if (uVar11 <= uVar16) {
            uVar14 = uVar16;
          }
          if (uVar14 != 0) goto LAB_7101ce6274;
LAB_7101ce62d0:
          lVar33 = 0;
        }
        else {
LAB_7101ce6274:
          ppplVar24 = (long ***)(uVar14 * 0x18);
          if (ppplVar24 == (long ***)0x0) {
            ppplVar24 = (long ***)0x1;
          }
          lVar33 = FUN_710392e290(0x10,ppplVar24,pppplVar18,ppppbVar20,pppplVar21,param_6,param_7,
                                  param_8);
          if (lVar33 == 0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_170 = (undefined **)((ulong)local_170 & 0xffffffff00000000);
              pppplVar18 = (long ****)&local_d0;
              local_d0 = (undefined **)ppplVar24;
              uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_170);
              if (((uVar11 & 1) != 0) &&
                 (lVar33 = FUN_710392e290(0x10,ppplVar24,pppplVar18,ppppbVar20,pppplVar21,param_6,
                                          param_7,param_8), lVar33 != 0)) goto LAB_7101ce62d4;
            }
            goto LAB_7101ce62d0;
          }
        }
LAB_7101ce62d4:
        lVar35 = SUB168(SEXT816((long)pppplVar37) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
        piVar23 = (int *)(lVar33 + ((long)pppplVar37 >> 3) * 8);
        ppuVar30 = (undefined **)(lVar33 + uVar14 * 0x18);
        *(undefined1 **)(piVar23 + 2) = puVar32;
        *piVar23 = iVar17;
        piVar23[4] = (uint)bVar3;
        __dest = (undefined **)(piVar23 + ((lVar35 >> 2) - (lVar35 >> 0x3f)) * 6);
        if (0 < (long)pppplVar37) {
          memcpy(__dest,ppuVar29,(size_t)pppplVar37);
          pppplVar18 = pppplVar37;
        }
        local_118 = __dest;
        local_110 = (undefined **)(piVar23 + 6);
        local_108 = ppuVar30;
        if (ppuVar29 != (undefined **)0x0) {
          FUN_710392eb40((ulong)ppuVar29);
        }
      }
    }
    ppuVar30 = local_110;
    ppuVar29 = local_118;
    lVar12 = lVar12 + 0x50;
  } while (lVar12 != 0x280);
  pppplVar37 = (long ****)(((long)local_110 - (long)local_118 >> 3) * -0x5555555555555555);
  if (0 < (long)local_110 - (long)local_118) {
    pppplVar38 = pppplVar37;
    if (0x555555555555554 < (long)pppplVar37) {
      pppplVar38 = (long ****)0x555555555555555;
    }
    do {
      ppplVar24 = (long ***)((long)pppplVar38 * 0x18);
      if (ppplVar24 == (long ***)0x0) {
        ppplVar24 = (long ***)0x1;
      }
      ppppbVar13 = (byte ****)
                   FUN_710392e290(0x10,ppplVar24,pppplVar18,ppppbVar20,pppplVar21,param_6,param_7,
                                  param_8);
      if (ppppbVar13 != (byte ****)0x0) {
LAB_7101ce6400:
        ppppbVar20 = ppppbVar13;
        FUN_7101ce7020((int *)ppuVar29,(int *)ppuVar30,(ulong)pppplVar37,(int *)ppppbVar13,
                       (long)pppplVar38);
        FUN_710392eb40((ulong)ppppbVar13);
        goto LAB_7101ce6424;
      }
      if (DAT_7105332f00 != (long *)0x0) {
        local_170 = (undefined **)((ulong)local_170 & 0xffffffff00000000);
        pppplVar18 = (long ****)&local_d0;
        local_d0 = (undefined **)ppplVar24;
        uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_170);
        if (((uVar14 & 1) != 0) &&
           (ppppbVar13 = (byte ****)
                         FUN_710392e290(0x10,ppplVar24,pppplVar18,ppppbVar20,pppplVar21,param_6,
                                        param_7,param_8), ppppbVar13 != (byte ****)0x0))
        goto LAB_7101ce6400;
      }
      pppplVar38 = (long ****)((ulong)pppplVar38 >> 1);
    } while (pppplVar38 != (long ****)0x0);
  }
  ppppbVar20 = (byte ****)0x0;
  pppplVar38 = (long ****)0x0;
  FUN_7101ce7020((int *)ppuVar29,(int *)ppuVar30,(ulong)pppplVar37,(int *)0x0,0);
LAB_7101ce6424:
  uVar8 = (uint)param_4 & 1;
  uVar44 = 0;
  uVar14 = 0;
  pbVar1 = (byte *)((long)&local_168 + 1);
  pbVar2 = (byte *)((long)&uStack_c8 + 1);
  do {
    puVar32 = (undefined1 *)*puVar39;
    if ((((ulong)puVar32 & 0xff00000000000000) == 0xc100000000000000 &&
         ((ulong)puVar32 & 0xffffffffff) != 0) && (local_110 != local_118)) {
      iVar17 = *(int *)local_118;
      ppuVar29 = local_118;
      while (iVar17 != *(int *)(puVar39 + 3)) {
        ppuVar29 = ppuVar29 + 3;
        if (local_110 == ppuVar29) goto LAB_7101ce6d60;
        iVar17 = *(int *)ppuVar29;
      }
      if (ppuVar29 != local_110) {
        uVar22 = (int)((ulong)((long)ppuVar29 - (long)local_118) >> 3) * -0x55555555;
        lVar12 = *(long *)(DAT_710532f730 + 8);
        lVar33 = *(long *)(lVar12 + 0x168);
        uVar10 = (uint)*(byte *)((long)puVar39 + 0x12);
        uVar9 = FUN_71032632a0(lVar33,(ulong)puVar32);
        uVar11 = 0x11b1ccb807;
        if ((uVar9 & 1) == 0) {
          bVar7 = FUN_71032648e0(lVar12 + 0x160,(ulong)puVar32);
          uVar11 = 0x143829f67e;
          if (bVar7) goto LAB_7101ce652c;
        }
        else {
LAB_7101ce652c:
          puVar32 = FUN_71032631a0(lVar33,uVar11);
        }
        uVar11 = (ulong)uVar8;
        ppppbVar20 = (byte ****)(ulong)uVar22;
        FUN_7103776910(&local_128,(long)&local_e0,(long ****)"set_txt_bar_title_%d%d",uVar11,
                       ppppbVar20,pppplVar38,param_6,param_7,param_8);
        cVar6 = *(char *)(puVar39 + 2);
        if (*(char *)(param_3 + 100) == '\x10' && cVar6 == '\x02') {
          cVar6 = '\x01';
        }
        if (cVar6 == '\x03') {
          if (*(char *)(param_3 + 0x67) == '\x01') {
            uVar28 = 99;
            uVar9 = 0x811c9dc5;
            uStack_c8 = CONCAT17(uStack_c8._7_1_,0x70665f6e6d63);
            pbVar25 = pbVar2;
            do {
              uVar9 = uVar9 * 0x89 ^ uVar28;
              uVar28 = (uint)*pbVar25;
              pbVar25 = pbVar25 + 1;
            } while (uVar28 != 0);
            local_d0 = (undefined **)CONCAT44(6,uVar9);
            FUN_710377a120((long)&local_128,(char *)&uStack_c8,uVar11,ppppbVar20,pppplVar38,param_6,
                           param_7,param_8);
          }
          else {
LAB_7101ce663c:
            uVar9 = FUN_7103263540(*(long *)(lVar12 + 0x168),(ulong)puVar32,(ulong)uVar10,ppppbVar20
                                   ,pppplVar38,param_6,param_7,param_8);
            FUN_7103262310((uint *)&local_d0,*(long *)(lVar12 + 0x168),(ulong)puVar32);
            pcVar34 = (char *)&uStack_c8;
            FUN_71003a4ca0((uint *)&local_170,"nam_chr1_%02d_%s",(ulong)uVar9,&uStack_c8,ppppbVar20,
                           pppplVar38,param_6,param_7,param_8);
            FUN_710377a120((long)&local_128,(char *)&local_168,pcVar34,ppppbVar20,pppplVar38,param_6
                           ,param_7,param_8);
          }
LAB_7101ce66d0:
          uVar11 = (ulong)uVar8;
          uVar9 = uVar22;
          if (3 < (int)uVar22) {
            uVar9 = uVar22 + 1;
          }
          ppppbVar20 = (byte ****)(ulong)uVar9;
          FUN_7103776640(&local_180,(long)&local_e0,(byte ****)"set_rep_icn_fighter_%d%d",uVar11,
                         ppppbVar20,pppplVar38,param_6,param_7,param_8);
          FUN_71037780e0(&local_d0,(long)&local_180,(long ****)"size_m_on",uVar11,ppppbVar20,
                         pppplVar38,param_6,param_7,param_8);
          FUN_710377b140((long)&local_d0);
          uVar16 = uStack_c8;
          local_d0 = &PTR_FUN_710523d9e8;
          uStack_c8 = 0;
          if (uVar16 != 0) {
            FUN_710392eb40(uVar16);
          }
          uVar16 = local_178;
          if ((*(long *)(local_178 + 8) != 0) &&
             (lVar12 = *(long *)(*(long *)(local_178 + 8) + 0x18), lVar12 != 0)) {
            *(byte *)(lVar12 + 0x58) =
                 *(byte *)(lVar12 + 0x58) & 0xfe |
                 (((ulong)puVar32 & 0xff00000000000000) == 0xc100000000000000 &&
                 ((ulong)puVar32 & 0xffffffffff) != 0);
          }
          if (*(char *)(param_3 + 0x67) == '\0') {
            uVar9 = 0xffffffff;
            lVar12 = *(long *)(local_178 + 8);
          }
          else {
            uVar9 = (uint)*(byte *)((long)puVar39 + 0x11);
            lVar12 = *(long *)(local_178 + 8);
          }
          if (lVar12 != 0) {
            FUN_7103776910(&local_190,(long)&local_180,(long ****)"set_rep_icn_fiter_color",uVar11,
                           ppppbVar20,pppplVar38,param_6,param_7,param_8);
            FUN_7103776910(&local_1a0,(long)&local_180,(long ****)"set_rep_icn_fiter_ds",uVar11,
                           ppppbVar20,pppplVar38,param_6,param_7,param_8);
            plVar31 = *(long **)(param_1 + 0x238);
            local_d0 = (undefined **)FUN_7103238a70((ulong)puVar32,(ulong)uVar10,1);
            if (((ulong)local_d0 & 0xffffffffff) != 0) {
              lVar12 = *plVar31;
              FUN_710323c4e0(lVar12,&local_d0,(long *********)(long)*(int *)(lVar12 + 0x70),
                             (byte ****)(ulong)*(uint *)(lVar12 + 0x68),pppplVar38,param_6,param_7,
                             param_8);
            }
            ppppppppplVar19 = (long *********)(ulong)uVar10;
            ppppbVar20 = (byte ****)0x1;
            plVar15 = FUN_710323f330(*(long **)(param_1 + 0x238),(ulong)puVar32,
                                     (ulong)ppppppppplVar19,1,pppplVar38,param_6,param_7,param_8);
            plVar5 = local_188;
            plVar31 = local_198;
            if (((*(long *)plVar15[1] == 0) || (*local_188 == 0)) || (*local_198 == 0)) {
              FUN_71037790a0((long)local_188,1,ppppppppplVar19,ppppbVar20,pppplVar38,param_6,param_7
                             ,param_8);
              plVar31 = local_198;
              FUN_71037790a0((long)local_198,1,ppppppppplVar19,ppppbVar20,pppplVar38,param_6,param_7
                             ,param_8);
            }
            else {
              FUN_7103778b80((long)local_188,(long)plVar15,ppppppppplVar19,ppppbVar20,pppplVar38,
                             param_6,param_7,param_8);
              FUN_7103778b80((long)plVar31,(long)plVar15,ppppppppplVar19,ppppbVar20,pppplVar38,
                             param_6,param_7,param_8);
              lVar12 = *(long *)(DAT_710532f730 + 8);
              uVar10 = FUN_7103280ec0(*(long *)(lVar12 + 0x2a8),(ulong)puVar32,(ulong)uVar10,
                                      ppppbVar20,pppplVar38,param_6,param_7,param_8);
              lVar12 = *(long *)(*(long *)(lVar12 + 0x2a8) + 8);
              auVar41._8_8_ = 0;
              auVar41._0_8_ = uVar14;
              auVar41 = FUN_710326ad60(auVar41 << 0x40,lVar12,uVar10,0x120ae7cf4f);
              auVar42._8_8_ = 0;
              auVar42._0_8_ = uVar14;
              auVar42 = FUN_710326ad60(auVar42 << 0x40,lVar12,uVar10,0x127de0ffd9);
              auVar43._8_8_ = uVar44;
              auVar43._0_8_ = 0x3f800000;
              ppppppppplVar19 = (long *********)0xf95a1c649;
              auVar43 = FUN_710326ad60(auVar43,lVar12,uVar10,0xf95a1c649);
              local_d0 = (undefined **)CONCAT44(auVar42._0_4_,auVar41._0_4_);
              uStack_c8 = 0;
              FUN_7103779770(auVar43._0_4_,(long)plVar5,&local_d0);
              FUN_7103779770(auVar43._0_4_,(long)plVar31,&local_d0);
            }
            uStack_c8 = uStack_c8 & 0xffffffffffffff00;
            local_d0 = (undefined **)0x0;
            if (*(char *)(param_3 + 100) == '\x12') {
              uVar9 = 0xffffffff;
            }
            if (uVar9 < 4) {
              FUN_71003a4ca0((uint *)&local_170,"team_color_%d",(ulong)(uVar9 + 1),ppppppppplVar19,
                             ppppbVar20,pppplVar38,param_6,param_7,param_8);
              uVar11 = 0;
              do {
                cVar6 = *(char *)((long)&local_168 + uVar11);
                uVar26 = uVar11;
                if (cVar6 == '\0') break;
                cVar27 = *(char *)((long)&local_168 + uVar11 + 1);
                *(char *)((long)&uStack_c8 + uVar11) = cVar6;
                if (cVar27 == '\0') {
                  uVar26 = uVar11 + 1;
                  break;
                }
                cVar6 = *(char *)((long)&local_168 + uVar11 + 2);
                *(char *)((long)&uStack_c8 + uVar11 + 1) = cVar27;
                if (cVar6 == '\0') {
                  uVar26 = uVar11 + 2;
                  break;
                }
                uVar26 = uVar11 + 3;
                *(char *)((long)&uStack_c8 + uVar11 + 2) = cVar6;
                uVar11 = uVar26;
              } while ((uint)uVar26 < 0x3f);
              *(undefined1 *)((long)&uStack_c8 + (uVar26 & 0xffffffff)) = 0;
              local_d0._4_4_ = (undefined4)uVar26;
              uVar9 = (uint)(byte)uStack_c8;
              uVar22 = 0x811c9dc5;
              if ((byte)uStack_c8 != 0) {
                uVar22 = 0x811c9dc5;
                pbVar25 = pbVar2;
                do {
                  uVar22 = uVar22 * 0x89 ^ uVar9;
                  uVar9 = (uint)*pbVar25;
                  pbVar25 = pbVar25 + 1;
                } while (uVar9 != 0);
              }
            }
            else if (cVar6 == '\x02') {
              local_168 = 0x635f726579616c70;
              uVar9 = 0x70;
              uVar22 = 0x811c9dc5;
              local_160 = 0x70635f726f6c6f;
              pbVar25 = pbVar1;
              do {
                uVar22 = uVar22 * 0x89 ^ uVar9;
                uVar9 = (uint)*pbVar25;
                pbVar25 = pbVar25 + 1;
              } while (uVar9 != 0);
              uVar11 = 0;
              local_170 = (undefined **)CONCAT44(0xf,uVar22);
              cVar6 = 'p';
              do {
                bVar3 = pbVar1[uVar11];
                *(char *)((long)&uStack_c8 + uVar11) = cVar6;
                if (bVar3 == 0) {
                  uVar11 = uVar11 + 1;
                  break;
                }
                *(byte *)((long)&uStack_c8 + uVar11 + 1) = bVar3;
                cVar6 = *(char *)((long)&local_168 + uVar11 + 2);
                if (cVar6 == '\0') {
                  uVar11 = uVar11 + 2;
                  break;
                }
                *(char *)((long)&uStack_c8 + uVar11 + 2) = cVar6;
                if (0x3e < (int)uVar11 + 3U) {
                  uVar11 = (ulong)((int)uVar11 + 3);
                  break;
                }
                cVar6 = *(char *)((long)&local_168 + uVar11 + 3);
                uVar11 = uVar11 + 3;
              } while (cVar6 != '\0');
              *(undefined1 *)((long)&uStack_c8 + (uVar11 & 0xffffffff)) = 0;
              local_d0._4_4_ = (undefined4)uVar11;
              uVar9 = (uint)(byte)uStack_c8;
              uVar22 = 0x811c9dc5;
              if ((byte)uStack_c8 != 0) {
                uVar22 = 0x811c9dc5;
                pbVar25 = pbVar2;
                do {
                  uVar22 = uVar22 * 0x89 ^ uVar9;
                  uVar9 = (uint)*pbVar25;
                  pbVar25 = pbVar25 + 1;
                } while (uVar9 != 0);
              }
            }
            else if (cVar6 == '\x01') {
              FUN_71003a4ca0((uint *)&local_170,"player_color_%dp",(ulong)(uVar22 + 1),
                             ppppppppplVar19,ppppbVar20,pppplVar38,param_6,param_7,param_8);
              uVar11 = 0;
              do {
                cVar6 = *(char *)((long)&local_168 + uVar11);
                uVar26 = uVar11;
                if (cVar6 == '\0') break;
                cVar27 = *(char *)((long)&local_168 + uVar11 + 1);
                *(char *)((long)&uStack_c8 + uVar11) = cVar6;
                if (cVar27 == '\0') {
                  uVar26 = uVar11 + 1;
                  break;
                }
                cVar6 = *(char *)((long)&local_168 + uVar11 + 2);
                *(char *)((long)&uStack_c8 + uVar11 + 1) = cVar27;
                if (cVar6 == '\0') {
                  uVar26 = uVar11 + 2;
                  break;
                }
                uVar26 = uVar11 + 3;
                *(char *)((long)&uStack_c8 + uVar11 + 2) = cVar6;
                uVar11 = uVar26;
              } while ((uint)uVar26 < 0x3f);
              *(undefined1 *)((long)&uStack_c8 + (uVar26 & 0xffffffff)) = 0;
              local_d0._4_4_ = (undefined4)uVar26;
              uVar9 = (uint)(byte)uStack_c8;
              uVar22 = 0x811c9dc5;
              if ((byte)uStack_c8 != 0) {
                uVar22 = 0x811c9dc5;
                pbVar25 = pbVar2;
                do {
                  uVar22 = uVar22 * 0x89 ^ uVar9;
                  uVar9 = (uint)*pbVar25;
                  pbVar25 = pbVar25 + 1;
                } while (uVar9 != 0);
              }
            }
            else {
              local_168 = 0x635f726579616c70;
              uVar9 = 0x70;
              uVar22 = 0x811c9dc5;
              local_160 = 0x70665f726f6c6f;
              pbVar25 = pbVar1;
              do {
                uVar22 = uVar22 * 0x89 ^ uVar9;
                uVar9 = (uint)*pbVar25;
                pbVar25 = pbVar25 + 1;
              } while (uVar9 != 0);
              uVar11 = 0;
              local_170 = (undefined **)CONCAT44(0xf,uVar22);
              cVar6 = 'p';
              do {
                bVar3 = pbVar1[uVar11];
                *(char *)((long)&uStack_c8 + uVar11) = cVar6;
                if (bVar3 == 0) {
                  uVar11 = uVar11 + 1;
                  break;
                }
                *(byte *)((long)&uStack_c8 + uVar11 + 1) = bVar3;
                cVar6 = *(char *)((long)&local_168 + uVar11 + 2);
                if (cVar6 == '\0') {
                  uVar11 = uVar11 + 2;
                  break;
                }
                *(char *)((long)&uStack_c8 + uVar11 + 2) = cVar6;
                if (0x3e < (int)uVar11 + 3U) {
                  uVar11 = (ulong)((int)uVar11 + 3);
                  break;
                }
                cVar6 = *(char *)((long)&local_168 + uVar11 + 3);
                uVar11 = uVar11 + 3;
              } while (cVar6 != '\0');
              *(undefined1 *)((long)&uStack_c8 + (uVar11 & 0xffffffff)) = 0;
              local_d0._4_4_ = (undefined4)uVar11;
              uVar9 = (uint)(byte)uStack_c8;
              uVar22 = 0x811c9dc5;
              if ((byte)uStack_c8 != 0) {
                uVar22 = 0x811c9dc5;
                pbVar25 = pbVar2;
                do {
                  uVar22 = uVar22 * 0x89 ^ uVar9;
                  uVar9 = (uint)*pbVar25;
                  pbVar25 = pbVar25 + 1;
                } while (uVar9 != 0);
              }
            }
            local_d0 = (undefined **)CONCAT44(local_d0._4_4_,uVar22);
            FUN_7103778300(0x3f800000,uVar16,(long)&uStack_c8);
            local_1a0 = &PTR_FUN_710523d9a8;
            local_198 = (long *)0x0;
            if (plVar31 != (long *)0x0) {
              FUN_710392eb40((ulong)plVar31);
            }
            local_190 = &PTR_FUN_710523d9a8;
            local_188 = (long *)0x0;
            if (plVar5 != (long *)0x0) {
              FUN_710392eb40((ulong)plVar5);
            }
            local_180 = &PTR_FUN_710523d988;
            local_178 = 0;
            if (uVar16 == 0) goto LAB_7101ce6d44;
          }
          local_178 = 0;
          local_180 = &PTR_FUN_710523d988;
          uVar11 = *(ulong *)(uVar16 + 0x18);
          *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar16 + 0x18) = 0;
          if (uVar11 != 0) {
            FUN_710392eb40(uVar11);
          }
          FUN_710392eb40(uVar16);
        }
        else {
          if (cVar6 == '\x02') {
            FUN_710377a280((long)&local_128,(byte *)"mnu_replay_detail_fighter_name_cp_level",1);
            goto LAB_7101ce66d0;
          }
          if (cVar6 == '\x01') goto LAB_7101ce663c;
        }
LAB_7101ce6d44:
        uVar11 = local_120;
        local_128 = &PTR_FUN_710523d9a8;
        local_120 = 0;
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
        }
      }
    }
LAB_7101ce6d60:
    puVar39 = puVar39 + 10;
    if (puVar39 == (undefined8 *)(param_3 + 0x2f8)) {
      uVar8 = (int)((ulong)((long)local_110 - (long)local_118) >> 3) * -0x55555555;
      pppplVar18 = (long ****)(ulong)uVar8;
      uStack_c8 = uStack_c8 & 0xffffffffffffff00;
      local_d0 = (undefined **)0x0;
      if ((param_4 & 1) == 0) {
        if (*(char *)(param_3 + 100) == '\x12') {
          pppplVar21 = pppplVar18;
          FUN_710062dc20((uint *)&local_d0,"ly_06_fighter_1_%d");
          fVar40 = *(float *)(param_3 + 0x300);
          uVar8 = (uint)(fVar40 / 1000.0);
          FUN_7103776910(&local_170,(long)&local_e0,(long ****)"set_txt_scoretxt",pppplVar18,
                         ppppbVar20,pppplVar21,param_6,param_7,param_8);
          uVar14 = 2;
          ppppbVar20 = (byte ****)(ulong)uVar8;
          pppplVar18 = (long ****)(ulong)(uint)(int)(fVar40 - (float)(int)(uVar8 * 1000));
          FUN_710377a280((long)&local_170,(byte *)"mnu_share_detail_homerun_score_n",2);
          uVar11 = local_168;
          local_170 = &PTR_FUN_710523d9a8;
          local_168 = 0;
          if (uVar11 != 0) {
            FUN_710392eb40(uVar11);
          }
        }
        else {
          uVar22 = 4;
          if ((int)uVar8 < 5) {
            uVar22 = 5;
          }
          uVar14 = (ulong)uVar22;
          uVar22 = 2;
          if (4 < (int)uVar8) {
            uVar22 = 5;
          }
          ppppbVar20 = (byte ****)(ulong)uVar22;
          FUN_710062dc20((uint *)&local_d0,"ly_%02d_fighter_%d_%d");
        }
      }
      else {
        if (3 < (int)uVar8) {
          uVar8 = 4;
        }
        uVar14 = (ulong)uVar8;
        FUN_710062dc20((uint *)&local_d0,"ly_05_fighter_2_%02d");
      }
      uVar11 = local_d8;
      FUN_7103778300(0x3f800000,local_d8,(long)&uStack_c8);
      if (local_118 != (undefined **)0x0) {
        local_110 = local_118;
        FUN_710392eb40((ulong)local_118);
      }
      FUN_7103776910(&local_d0,(long)&local_e0,(long ****)"set_txt_stage_00",uVar14,ppppbVar20,
                     pppplVar18,param_6,param_7,param_8);
      FUN_710377a120((long)&local_d0,"mnu_share_detail_stage",uVar14,ppppbVar20,pppplVar18,param_6,
                     param_7,param_8);
      uVar16 = uStack_c8;
      local_d0 = &PTR_FUN_710523d9a8;
      uStack_c8 = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      lVar12 = *(long *)(DAT_710532f730 + 8);
      if (*(uint *)(param_3 + 0x2f8) < 0x16c) {
        iVar17 = (&DAT_710454a7ec)[(long)(int)*(uint *)(param_3 + 0x2f8) * 0x12];
      }
      else {
        iVar17 = -1;
      }
      uVar16 = FUN_71032b24e0(lVar12 + 0x170,iVar17);
      FUN_7103776910(&local_118,(long)&local_e0,(long ****)"set_txt_stagename",uVar14,ppppbVar20,
                     pppplVar18,param_6,param_7,param_8);
      uVar14 = uVar16;
      FUN_71032b1a60((uint *)&local_d0,*(long *)(lVar12 + 0x178),uVar16);
      FUN_71003a4ca0((uint *)&local_170,"nam_stg1_%s",&uStack_c8,uVar14,ppppbVar20,pppplVar18,
                     param_6,param_7,param_8);
      FUN_710377a120((long)&local_118,(char *)&local_168,uVar14,ppppbVar20,pppplVar18,param_6,
                     param_7,param_8);
      ppuVar29 = local_110;
      local_118 = &PTR_FUN_710523d9a8;
      local_110 = (undefined **)0x0;
      if (ppuVar29 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar29);
      }
      FUN_7103776910(&local_118,(long)&local_e0,(long ****)"set_txt_stagename_00",uVar14,ppppbVar20,
                     pppplVar18,param_6,param_7,param_8);
      FUN_71032b1a60((uint *)&local_d0,*(long *)(lVar12 + 0x178),uVar16);
      FUN_71003a4ca0((uint *)&local_170,"nam_stg1_%s",&uStack_c8,uVar16,ppppbVar20,pppplVar18,
                     param_6,param_7,param_8);
      FUN_710377a120((long)&local_118,(char *)&local_168,uVar16,ppppbVar20,pppplVar18,param_6,
                     param_7,param_8);
      ppuVar29 = local_110;
      local_118 = &PTR_FUN_710523d9a8;
      local_110 = (undefined **)0x0;
      if (ppuVar29 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar29);
      }
      local_e0 = &PTR_FUN_710523d988;
      local_d8 = 0;
      if (uVar11 != 0) {
        uVar14 = *(ulong *)(uVar11 + 0x18);
        *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar11 + 0x18) = 0;
        if (uVar14 != 0) {
          FUN_710392eb40(uVar14);
        }
        FUN_710392eb40(uVar11);
      }
      return;
    }
  } while( true );
}

