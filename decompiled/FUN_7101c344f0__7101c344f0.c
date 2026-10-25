// addr:      7101c344f0
// offset:    0x1c344f0
// name:      FUN_7101c344f0
// mangled:   
// signature: undefined __cdecl FUN_7101c344f0(long param_1, long * param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c344f0(long param_1,long *param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long ***ppplVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  undefined ***pppuVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined ***pppuVar13;
  long *plVar14;
  byte **ppbVar15;
  int iVar16;
  ushort *puVar17;
  char *pcVar18;
  long ****pppplVar19;
  long *********ppppppppplVar20;
  byte ****ppppbVar21;
  long ****pppplVar22;
  long lVar23;
  ulong uVar24;
  int *piVar25;
  byte *pbVar26;
  long lVar27;
  long ********pppppppplVar28;
  ulong uVar29;
  ushort uVar30;
  uint uVar31;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  byte ***pppbVar35;
  int iVar36;
  long lVar37;
  ulong uVar38;
  byte bVar39;
  float fVar40;
  float fVar41;
  float fVar46;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  long *local_13e0;
  uint local_1368;
  uint local_1364;
  undefined4 local_1328 [2];
  undefined **local_1320;
  long local_1318;
  undefined8 local_1310;
  undefined1 local_1308;
  undefined8 local_1300;
  undefined8 local_12f8;
  undefined8 uStack_12f0;
  undefined4 local_12e8 [2];
  undefined **local_12e0;
  long local_12d8;
  undefined8 local_12d0;
  undefined1 local_12c8;
  undefined8 local_12c0;
  undefined8 local_12b8;
  undefined8 uStack_12b0;
  uint auStack_12a8 [2];
  long ***appplStack_12a0 [8];
  uint auStack_1260 [2];
  long ***appplStack_1258 [8];
  uint auStack_1218 [2];
  long ***appplStack_1210 [8];
  uint auStack_11d0 [2];
  long ***appplStack_11c8 [8];
  uint auStack_1188 [2];
  long ***appplStack_1180 [8];
  long ***local_1140;
  long *local_1138;
  undefined **local_1130;
  ulong local_1128;
  undefined **local_1120;
  long *local_1118;
  undefined **local_1110;
  long *local_1108;
  undefined8 local_1100;
  undefined8 local_10f8;
  undefined **local_100;
  long *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined ***local_c0;
  int local_b8;
  undefined4 local_ac [3];
  
  uVar34 = (ulong)param_5 & 0xffffffff;
  iVar16 = (int)param_6;
  ppppppppplVar20 = param_3;
  ppppbVar21 = param_4;
  if (*param_4 == (byte ***)0x0) {
    local_1364 = 0;
  }
  else {
    uVar9 = FUN_710234dae0((long)**param_4,iVar16);
    local_1364 = (uint)uVar9;
  }
  lVar10 = *(long *)(DAT_7105329060 + 8);
  if (*(uint *)(param_1 + 0x2018) < *(uint *)(lVar10 + 4)) {
    lVar23 = lVar10 + (ulong)*(uint *)(param_1 + 0x2018) * 0x18;
    lVar27 = *(long *)(lVar23 + 8);
    uVar8 = *(int *)(param_1 + 0x201c) + 1;
    uVar32 = *(long *)(lVar23 + 0x10) - lVar27;
    if (uVar8 < (uint)(uVar32 >> 4)) {
      if ((ulong)((long)uVar32 >> 4) <= (ulong)uVar8) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      puVar1 = (undefined8 *)(lVar27 + (ulong)uVar8 * 0x10);
      plVar12 = (long *)*puVar1;
      local_13e0 = (long *)puVar1[1];
      if (local_13e0 != (long *)0x0) {
        plVar11 = local_13e0 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = *plVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uVar9 = FUN_710234dae0(*plVar12,iVar16);
      local_1368 = (uint)uVar9 ^ 1;
      lVar10 = *(long *)(DAT_7105329060 + 8);
      goto LAB_7101c3460c;
    }
  }
  local_13e0 = (long *)0x0;
  local_1368 = 1;
LAB_7101c3460c:
  uVar32 = FUN_7102353a00(lVar10,iVar16);
  pcVar18 = "loser";
  if ((uVar32 & 1) == 0) {
    pcVar18 = "normal";
  }
  FUN_71003a4ca0(auStack_1188,"aft_anime_hl_%s",pcVar18,ppppppppplVar20,ppppbVar21,param_5,param_6,
                 param_7,param_8);
  FUN_71003a4ca0(auStack_11d0,"stat_%s",pcVar18,ppppppppplVar20,ppppbVar21,param_5,param_6,param_7,
                 param_8);
  puVar2 = &DAT_710438b71d;
  if (*(char *)((long)*param_3 + 0x831) != '\0') {
    puVar2 = &DAT_7104401d83;
  }
  FUN_71003a4ca0(auStack_1218,"pos_anime_forward_%s",puVar2,ppppppppplVar20,ppppbVar21,param_5,
                 param_6,param_7,param_8);
  puVar2 = &DAT_710438b71d;
  if (*(char *)((long)*param_3 + 0x831) != '\0') {
    puVar2 = &DAT_7104401d83;
  }
  FUN_71003a4ca0(auStack_1260,"pos_stay_forward_%s",puVar2,ppppppppplVar20,ppppbVar21,param_5,
                 param_6,param_7,param_8);
  puVar2 = &DAT_710438b71d;
  if (*(char *)((long)*param_3 + 0x831) != '\0') {
    puVar2 = &DAT_7104401d83;
  }
  FUN_71003a4ca0(auStack_12a8,"pos_anime_backward_%s",puVar2,ppppppppplVar20,ppppbVar21,param_5,
                 param_6,param_7,param_8);
  if (*(int *)((long)*param_3 + 0x834) != 0) {
    pppppppplVar28 = *param_3;
    uVar24 = (ulong)*(uint *)((long)pppppppplVar28 + 0x834);
    uVar38 = 0;
    do {
      lVar27 = DAT_7105329060;
      lVar10 = param_1 + uVar34 * 0x10;
      lVar33 = *(long *)(DAT_7105329060 + 8);
      fVar53 = *(float *)(lVar33 + 0xe8);
      uVar48 = SUB41(fVar53,0);
      uVar49 = (undefined1)((uint)fVar53 >> 8);
      uVar50 = (undefined1)((uint)fVar53 >> 0x10);
      uVar51 = (undefined1)((uint)fVar53 >> 0x18);
      cVar5 = *(char *)((long)pppppppplVar28 + 0x831);
      lVar23 = lVar10 + 0x408;
      if (cVar5 != '\0') {
        lVar23 = lVar10 + 8;
      }
      lVar37 = *(long *)(lVar23 + 8);
      auVar43._8_8_ = 0x8000000080000000;
      auVar43._0_8_ = 0xc4070000c4700000;
      cVar4 = *(char *)(param_1 + 0x2248);
      lVar10 = **(long **)(lVar37 + 0x18);
      fVar40 = (*(float *)(pppppppplVar28 + 0x102) - *(float *)(lVar33 + 0x110)) * fVar53 +
               *(float *)(lVar33 + 0x110) + -960.0;
      fVar46 = (1080.0 - ((*(float *)((long)pppppppplVar28 + 0x814) - *(float *)(lVar33 + 0x114)) *
                          fVar53 + *(float *)(lVar33 + 0x114))) + -540.0;
      if ((uint)uVar24 < 2) {
        if (lVar10 != 0) {
          fVar41 = fVar53 * *(float *)(lVar33 + 400);
          *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 0x10;
          *(float *)(lVar10 + 0x48) = fVar41;
          *(float *)(lVar10 + 0x4c) = fVar41;
          FUN_7103776910(&local_1100,lVar23,(long ****)"set_pic_overlay",ppppppppplVar20,ppppbVar21,
                         param_5,param_6,param_7,param_8);
          plVar12 = local_10f8;
          fVar41 = 0.0;
          if (*local_10f8 != 0) {
            fVar41 = ABS(*(float *)(*local_10f8 + 0x50));
          }
          local_1100 = &PTR_FUN_710523d9a8;
          local_10f8 = (long *)0x0;
          if (plVar12 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar12);
          }
          lVar10 = **(long **)(lVar37 + 0x18);
          if (lVar10 != 0) {
            fVar53 = fVar53 * *(float *)(*(long *)(DAT_7105329060 + 8) + 400);
            fVar54 = fVar41 * 0.5 * fVar53;
            fVar53 = -(fVar41 * 0.5 * fVar53);
            uVar48 = SUB41(fVar53,0);
            uVar49 = (undefined1)((uint)fVar53 >> 8);
            uVar50 = (undefined1)((uint)fVar53 >> 0x10);
            uVar51 = (undefined1)((uint)fVar53 >> 0x18);
            auVar43 = ZEXT416((uint)fVar54);
            bVar39 = ~-(cVar5 == '\0');
            uVar9 = CONCAT44(fVar46 + 0.0,
                             fVar40 + (float)((uint)fVar54 ^
                                             ((uint)fVar54 ^ (uint)fVar53) &
                                             CONCAT13(bVar39,CONCAT12(bVar39,CONCAT11(bVar39,bVar39)
                                                                     ))));
            goto LAB_7101c34e40;
          }
        }
      }
      else if (lVar10 != 0) {
        fVar41 = fVar53 * *(float *)(lVar33 + 400);
        *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 0x10;
        *(float *)(lVar10 + 0x48) = fVar41;
        *(float *)(lVar10 + 0x4c) = fVar41;
        fVar54 = *(float *)(*(long *)(lVar27 + 8) + 400);
        FUN_7103776910(&local_1100,lVar23,(long ****)"set_pic_overlay",ppppppppplVar20,ppppbVar21,
                       param_5,param_6,param_7,param_8);
        plVar12 = local_10f8;
        fVar41 = 0.0;
        if (*local_10f8 != 0) {
          fVar41 = ABS(*(float *)(*local_10f8 + 0x50));
        }
        local_1100 = &PTR_FUN_710523d9a8;
        local_10f8 = (long *)0x0;
        if (plVar12 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar12);
        }
        lVar10 = **(long **)(lVar37 + 0x18);
        if (lVar10 != 0) {
          fVar54 = fVar53 * fVar54;
          auVar42._0_8_ = -(ulong)(uVar38 == 0);
          fVar52 = fVar54 * -32.0;
          auVar42._8_8_ = auVar42._0_8_;
          fVar53 = fVar53 * *(float *)(*(long *)(DAT_7105329060 + 8) + 400);
          auVar43 = ZEXT416((uint)fVar52) << 0x20 ^
                    ZEXT416((uint)fVar52 ^ (uint)(fVar54 * 32.0)) << 0x20 & auVar42;
          fVar54 = -(fVar41 * 0.5 * fVar53);
          uVar48 = SUB41(fVar54,0);
          uVar49 = (undefined1)((uint)fVar54 >> 8);
          uVar50 = (undefined1)((uint)fVar54 >> 0x10);
          uVar51 = (undefined1)((uint)fVar54 >> 0x18);
          auVar44._4_12_ = auVar43._4_12_;
          auVar44._0_4_ = fVar41 * 0.5 * fVar53;
          auVar47[0] = ~-(cVar5 == '\0');
          auVar47[1] = auVar47[0];
          auVar47[2] = auVar47[0];
          auVar47[3] = auVar47[0];
          auVar47[4] = auVar47[0];
          auVar47[5] = auVar47[0];
          auVar47[6] = auVar47[0];
          auVar47[7] = auVar47[0];
          auVar47[8] = auVar47[0];
          auVar47[9] = auVar47[0];
          auVar47[10] = auVar47[0];
          auVar47[0xb] = auVar47[0];
          auVar47[0xc] = auVar47[0];
          auVar47[0xd] = auVar47[0];
          auVar47[0xe] = auVar47[0];
          auVar47[0xf] = auVar47[0];
          auVar45._4_4_ = auVar43._4_4_;
          auVar45._0_4_ = fVar54;
          auVar45._8_8_ = auVar43._8_8_;
          auVar43 = auVar44 ^ (auVar44 ^ auVar45) & auVar47;
          uVar9 = CONCAT44(auVar43._4_4_ + fVar46,auVar43._0_4_ + fVar40);
LAB_7101c34e40:
          *(undefined8 *)(lVar10 + 0x30) = uVar9;
          *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 0x10;
        }
      }
      if ((cVar4 != '\0') && (**(long **)(*(long *)(lVar23 + 8) + 0x18) != 0)) {
        FUN_7103776910(&local_1110,lVar23,(long ****)"set_txt_name",ppppppppplVar20,ppppbVar21,
                       param_5,param_6,param_7,param_8);
        FUN_7103776910(&local_1120,lVar23,(long ****)"set_txt_name_bo",ppppppppplVar20,ppppbVar21,
                       param_5,param_6,param_7,param_8);
        FUN_7103776910(&local_1130,lVar23,(long ****)"set_txt_player_id",ppppppppplVar20,ppppbVar21,
                       param_5,param_6,param_7,param_8);
        plVar12 = local_1108;
        iVar36 = *(int *)(*param_3 + uVar38 * 0x39 + 6);
        if (iVar36 == 2) {
          if ((long *)local_1108[2] != (long *)0x0) {
            ppppbVar21 = (byte ****)0x1;
            ppppppppplVar20 = (long *********)&DAT_ffffffff;
            FUN_71037a2270((long *)local_1108[2],(ushort *)(*param_3 + uVar38 * 0x39 + 0x1f),
                           0xffffffff,1);
          }
          plVar12 = local_1118;
          if ((long *)local_1118[2] != (long *)0x0) {
            ppppbVar21 = (byte ****)0x1;
            ppppppppplVar20 = (long *********)&DAT_ffffffff;
            FUN_71037a2270((long *)local_1118[2],(ushort *)(*param_3 + uVar38 * 0x39 + 0x1f),
                           0xffffffff,1);
          }
          uVar31 = 99;
          uVar8 = 0x811c9dc5;
          local_10f8 = (long *)CONCAT17(local_10f8._7_1_,0x70665f6e6d63);
          pbVar26 = (byte *)((long)&local_10f8 + 1);
          do {
            uVar8 = uVar8 * 0x89 ^ uVar31;
            uVar31 = (uint)*pbVar26;
            pbVar26 = pbVar26 + 1;
          } while (uVar31 != 0);
          local_1100 = (undefined **)CONCAT44(6,uVar8);
LAB_7101c3568c:
          FUN_710377a120((long)&local_1130,(char *)&local_10f8,ppppppppplVar20,ppppbVar21,param_5,
                         param_6,param_7,param_8);
        }
        else {
          if (iVar36 != 1) {
            if (*local_1108 != 0) {
              local_100 = &PTR_FUN_710523d9a8;
              plVar11 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar20,ppppbVar21,
                                               param_5,param_6,param_7,param_8);
              if (plVar11 == (long *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_1140 = (long ***)((ulong)local_1140 & 0xffffffff00000000);
                  local_1100 = (undefined **)&SUB_00000020;
                  ppppppppplVar20 = (long *********)&local_1100;
                  uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1140);
                  if (((uVar24 & 1) != 0) &&
                     (plVar11 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar20,
                                                       ppppbVar21,param_5,param_6,param_7,param_8),
                     plVar11 != (long *)0x0)) goto LAB_7101c350cc;
                }
                plVar11 = (long *)0x0;
              }
LAB_7101c350cc:
              plVar11[2] = 0;
              plVar11[3] = 0;
              *plVar11 = 0;
              plVar11[1] = 0;
              *plVar11 = *plVar12;
              plVar11[1] = plVar12[1];
              plVar12 = (long *)local_1108[2];
              plVar11[2] = (long)plVar12;
              plVar11[3] = local_1108[3];
              uVar8 = *(uint *)((long)*param_3 + uVar38 * 0x240 + 0x394);
              local_f8 = plVar11;
              if (uVar8 + 1 < 2) {
                ppppbVar21 = (byte ****)(ulong)(*(int *)((long)*param_3 + 0x83c) + 1);
                ppppppppplVar20 = (long *********)0x1;
                FUN_710377a280((long)&local_100,(byte *)"mel_tournament_guest_n",1);
              }
              else {
                if (uVar8 < 0x3d) {
                  pcVar18 = &DAT_7105314518;
                  if (*(char *)*DAT_7105314510 == '\0') {
                    pcVar18 = (char *)(*(long *)**(undefined8 **)((char *)*DAT_7105314510 + 0x58) +
                                      (ulong)uVar8 * 0xf7d8);
                  }
                  if (*pcVar18 != '\0') goto LAB_7101c35490;
LAB_7101c354b4:
                  if (plVar12 == (long *)0x0) goto LAB_7101c354cc;
                  puVar17 = (ushort *)&local_1100;
                  ppppppppplVar20 = (long *********)0x0;
                  ppppbVar21 = (byte ****)0x0;
                  local_1100 = (undefined **)((ulong)local_1100 & 0xffffffff00000000);
                }
                else {
                  pcVar18 = &DAT_7105314518;
                  if (DAT_7105314518 == '\0') goto LAB_7101c354b4;
LAB_7101c35490:
                  if (plVar12 == (long *)0x0) goto LAB_7101c354cc;
                  puVar17 = (ushort *)(pcVar18 + 0xc);
                  ppppbVar21 = (byte ****)0x1;
                  ppppppppplVar20 = (long *********)&DAT_ffffffff;
                }
                FUN_71037a2270(plVar12,puVar17,(uint)ppppppppplVar20,(ulong)ppppbVar21);
              }
LAB_7101c354cc:
              local_100 = &PTR_FUN_710523d9a8;
              local_f8 = (long *)0x0;
              if (plVar11 != (long *)0x0) {
                FUN_710392eb40((ulong)plVar11);
              }
            }
            plVar11 = local_1118;
            plVar12 = local_1118;
            if (*local_1118 != 0) {
              local_1140 = (long ***)&PTR_FUN_710523d9a8;
              plVar14 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar20,ppppbVar21,
                                               param_5,param_6,param_7,param_8);
              if (plVar14 == (long *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_ac[0] = 0;
                  local_1100 = (undefined **)&SUB_00000020;
                  ppppppppplVar20 = (long *********)&local_1100;
                  uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_ac);
                  if (((uVar24 & 1) != 0) &&
                     (plVar14 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar20,
                                                       ppppbVar21,param_5,param_6,param_7,param_8),
                     plVar14 != (long *)0x0)) goto LAB_7101c35550;
                }
                plVar14 = (long *)0x0;
              }
LAB_7101c35550:
              plVar12 = local_1118;
              plVar14[2] = 0;
              plVar14[3] = 0;
              *plVar14 = 0;
              plVar14[1] = 0;
              *plVar14 = *plVar11;
              plVar14[1] = plVar11[1];
              plVar11 = (long *)local_1118[2];
              plVar14[2] = (long)plVar11;
              plVar14[3] = local_1118[3];
              uVar8 = *(uint *)((long)*param_3 + uVar38 * 0x240 + 0x394);
              local_1138 = plVar14;
              if (uVar8 + 1 < 2) {
                ppppbVar21 = (byte ****)(ulong)(*(int *)((long)*param_3 + 0x83c) + 1);
                ppppppppplVar20 = (long *********)0x1;
                FUN_710377a280((long)&local_1140,(byte *)"mel_tournament_guest_n",1);
              }
              else {
                if (uVar8 < 0x3d) {
                  pcVar18 = &DAT_7105314518;
                  if (*(char *)*DAT_7105314510 == '\0') {
                    pcVar18 = (char *)(*(long *)**(undefined8 **)((char *)*DAT_7105314510 + 0x58) +
                                      (ulong)uVar8 * 0xf7d8);
                  }
                  if (*pcVar18 != '\0') goto LAB_7101c35600;
LAB_7101c35624:
                  if (plVar11 == (long *)0x0) goto LAB_7101c3563c;
                  puVar17 = (ushort *)&local_1100;
                  ppppppppplVar20 = (long *********)0x0;
                  ppppbVar21 = (byte ****)0x0;
                  local_1100 = (undefined **)((ulong)local_1100 & 0xffffffff00000000);
                }
                else {
                  pcVar18 = &DAT_7105314518;
                  if (DAT_7105314518 == '\0') goto LAB_7101c35624;
LAB_7101c35600:
                  if (plVar11 == (long *)0x0) goto LAB_7101c3563c;
                  puVar17 = (ushort *)(pcVar18 + 0xc);
                  ppppbVar21 = (byte ****)0x1;
                  ppppppppplVar20 = (long *********)&DAT_ffffffff;
                }
                FUN_71037a2270(plVar11,puVar17,(uint)ppppppppplVar20,(ulong)ppppbVar21);
              }
LAB_7101c3563c:
              local_1140 = (long ***)&PTR_FUN_710523d9a8;
              local_1138 = (long *)0x0;
              if (plVar14 != (long *)0x0) {
                FUN_710392eb40((ulong)plVar14);
              }
            }
            if (*(uint *)(*param_3 + uVar38 * 0x39 + 5) == 0xffffffff) {
              local_10f8 = (long *)((ulong)local_10f8 & 0xffffffffffffff00);
              local_1100 = (undefined **)0x0;
            }
            else {
              FUN_71003a4ca0((uint *)&local_1100,"cmn_%dp",
                             (ulong)*(uint *)(*param_3 + uVar38 * 0x39 + 5),ppppppppplVar20,
                             ppppbVar21,param_5,param_6,param_7,param_8);
            }
            goto LAB_7101c3568c;
          }
          uVar31 = 99;
          uVar8 = 0x811c9dc5;
          local_10f8 = (long *)CONCAT17(local_10f8._7_1_,0x70635f6e6d63);
          pbVar26 = (byte *)((long)&local_10f8 + 1);
          do {
            uVar8 = uVar8 * 0x89 ^ uVar31;
            uVar31 = (uint)*pbVar26;
            pbVar26 = pbVar26 + 1;
          } while (uVar31 != 0);
          local_1100 = (undefined **)CONCAT44(6,uVar8);
          FUN_710377a120((long)&local_1130,(char *)&local_10f8,ppppppppplVar20,ppppbVar21,param_5,
                         param_6,param_7,param_8);
          local_c0 = &local_100;
          local_d0 = 0;
          uStack_c8 = 0;
          local_e0 = 0;
          uStack_d8 = 0;
          pppplVar22 = (long ****)(ulong)(*(int *)((long)*param_3 + 0x83c) + 1);
          ppppbVar21 = (byte ****)0x1;
          pcVar18 = "mel_tournament_cp_n";
          local_b8 = 0;
          local_f0 = 0;
          uStack_e8 = 0;
          local_100 = (undefined **)0x0;
          local_f8 = (long *)0x0;
          FUN_71037ab600(&local_1100,0x800,(byte *)"mel_tournament_cp_n",1);
          if ((ushort)local_1100 == 0) {
            uVar24 = 0;
          }
          else {
            uVar29 = 0;
            uVar8 = 0;
            uVar24 = 0;
            uVar30 = (ushort)local_1100;
            do {
              if ((uVar30 | 1) == 0xf) {
                if (uVar30 == 0xe) {
                  iVar36 = (*(ushort *)((long)&local_1100 + uVar29 * 2 + 6) >> 1) + 4;
                }
                else {
                  iVar36 = 3;
                  if (uVar30 != 0xf) {
                    iVar36 = 0;
                  }
                }
              }
              else {
                iVar36 = 1;
              }
              uVar8 = iVar36 + uVar8;
              uVar29 = (ulong)uVar8;
              uVar24 = (ulong)(uint)(iVar36 + (int)uVar24);
              uVar30 = *(ushort *)((long)&local_1100 + (ulong)uVar8 * 2);
            } while (uVar30 != 0);
          }
          lVar27 = (long)local_b8;
          lVar10 = lVar27 + (int)uVar24;
          iVar36 = (int)lVar10;
          if (iVar36 < 0x20) {
            local_c0 = &local_100;
            memcpy((void *)((long)local_c0 + lVar27 * 2),&local_1100,
                   -(uVar24 >> 0x1f) & 0xfffffffe00000000 | uVar24 << 1);
          }
          else {
            uVar29 = lVar10 + 1;
            ppplVar3 = (long ***)(uVar29 * 2);
            if (CARRY8(uVar29,uVar29)) {
              ppplVar3 = (long ***)0xffffffffffffffff;
            }
            if (ppplVar3 == (long ***)0x0) {
              ppplVar3 = (long ***)0x1;
            }
            pppuVar13 = (undefined ***)
                        FUN_710392e290(0x10,ppplVar3,(long ****)pcVar18,ppppbVar21,pppplVar22,
                                       param_6,param_7,param_8);
            if (pppuVar13 == (undefined ***)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_ac[0] = 0;
                pppplVar19 = &local_1140;
                local_1140 = ppplVar3;
                uVar29 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_ac);
                if (((uVar29 & 1) != 0) &&
                   (pppuVar13 = (undefined ***)
                                FUN_710392e290(0x10,ppplVar3,pppplVar19,ppppbVar21,pppplVar22,
                                               param_6,param_7,param_8),
                   pppuVar13 != (undefined ***)0x0)) goto LAB_7101c351bc;
              }
              pppuVar13 = (undefined ***)0x0;
            }
LAB_7101c351bc:
            pppuVar7 = local_c0;
            memcpy(pppuVar13,local_c0,lVar27 * 2);
            memcpy((void *)((long)pppuVar13 + lVar27 * 2),&local_1100,
                   -(uVar24 >> 0x1f) & 0xfffffffe00000000 | uVar24 << 1);
            if ((&local_100 != pppuVar7) && (pppuVar7 != (undefined ***)0x0)) {
              FUN_710392eb40((ulong)pppuVar7);
            }
            local_100 = (undefined **)((ulong)local_100 & 0xffffffffffff0000);
            local_c0 = pppuVar13;
          }
          *(undefined2 *)((long)local_c0 + (long)iVar36 * 2) = 0;
          local_b8 = iVar36;
          if ((long *)local_1108[2] != (long *)0x0) {
            FUN_71037a2270((long *)local_1108[2],(ushort *)local_c0,0xffffffff,1);
          }
          if ((&local_100 != local_c0) && (local_c0 != (undefined ***)0x0)) {
            FUN_710392eb40((ulong)local_c0);
          }
          local_c0 = &local_100;
          local_d0 = 0;
          uStack_c8 = 0;
          local_e0 = 0;
          uStack_d8 = 0;
          param_5 = (long ****)(ulong)(*(int *)((long)*param_3 + 0x83c) + 1);
          ppppbVar21 = (byte ****)0x1;
          pcVar18 = "mel_tournament_cp_n";
          local_b8 = 0;
          local_f0 = 0;
          uStack_e8 = 0;
          local_100 = (undefined **)0x0;
          local_f8 = (long *)0x0;
          FUN_71037ab600(&local_1100,0x800,(byte *)"mel_tournament_cp_n",1);
          if ((ushort)local_1100 == 0) {
            uVar24 = 0;
          }
          else {
            uVar29 = 0;
            uVar8 = 0;
            uVar24 = 0;
            uVar30 = (ushort)local_1100;
            do {
              if ((uVar30 | 1) == 0xf) {
                if (uVar30 == 0xe) {
                  iVar36 = (*(ushort *)((long)&local_1100 + uVar29 * 2 + 6) >> 1) + 4;
                }
                else {
                  iVar36 = 3;
                  if (uVar30 != 0xf) {
                    iVar36 = 0;
                  }
                }
              }
              else {
                iVar36 = 1;
              }
              uVar8 = iVar36 + uVar8;
              uVar29 = (ulong)uVar8;
              uVar24 = (ulong)(uint)(iVar36 + (int)uVar24);
              uVar30 = *(ushort *)((long)&local_1100 + (ulong)uVar8 * 2);
            } while (uVar30 != 0);
          }
          lVar27 = (long)local_b8;
          lVar10 = lVar27 + (int)uVar24;
          iVar36 = (int)lVar10;
          if (iVar36 < 0x20) {
            local_c0 = &local_100;
            ppppppppplVar20 = (long *********)(-(uVar24 >> 0x1f) & 0xfffffffe00000000 | uVar24 << 1)
            ;
            memcpy((void *)((long)local_c0 + lVar27 * 2),&local_1100,(size_t)ppppppppplVar20);
          }
          else {
            uVar29 = lVar10 + 1;
            ppplVar3 = (long ***)(uVar29 * 2);
            if (CARRY8(uVar29,uVar29)) {
              ppplVar3 = (long ***)0xffffffffffffffff;
            }
            if (ppplVar3 == (long ***)0x0) {
              ppplVar3 = (long ***)0x1;
            }
            pppuVar13 = (undefined ***)
                        FUN_710392e290(0x10,ppplVar3,(long ****)pcVar18,ppppbVar21,param_5,param_6,
                                       param_7,param_8);
            if (pppuVar13 == (undefined ***)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_ac[0] = 0;
                pppplVar22 = &local_1140;
                local_1140 = ppplVar3;
                uVar29 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_ac);
                if (((uVar29 & 1) != 0) &&
                   (pppuVar13 = (undefined ***)
                                FUN_710392e290(0x10,ppplVar3,pppplVar22,ppppbVar21,param_5,param_6,
                                               param_7,param_8), pppuVar13 != (undefined ***)0x0))
                goto LAB_7101c3539c;
              }
              pppuVar13 = (undefined ***)0x0;
            }
LAB_7101c3539c:
            pppuVar7 = local_c0;
            memcpy(pppuVar13,local_c0,lVar27 * 2);
            ppppppppplVar20 = (long *********)(-(uVar24 >> 0x1f) & 0xfffffffe00000000 | uVar24 << 1)
            ;
            memcpy((void *)((long)pppuVar13 + lVar27 * 2),&local_1100,(size_t)ppppppppplVar20);
            if ((&local_100 != pppuVar7) && (pppuVar7 != (undefined ***)0x0)) {
              FUN_710392eb40((ulong)pppuVar7);
            }
            local_100 = (undefined **)((ulong)local_100 & 0xffffffffffff0000);
            local_c0 = pppuVar13;
          }
          plVar12 = local_1118;
          *(undefined2 *)((long)local_c0 + (long)iVar36 * 2) = 0;
          local_b8 = iVar36;
          if ((long *)local_1118[2] != (long *)0x0) {
            ppppbVar21 = (byte ****)0x1;
            ppppppppplVar20 = (long *********)&DAT_ffffffff;
            FUN_71037a2270((long *)local_1118[2],(ushort *)local_c0,0xffffffff,1);
          }
          if ((&local_100 != local_c0) && (local_c0 != (undefined ***)0x0)) {
            FUN_710392eb40((ulong)local_c0);
          }
        }
        auVar45 = FUN_7103776910(&local_1100,lVar23,(long ****)"set_rep_fighter",ppppppppplVar20,
                                 ppppbVar21,param_5,param_6,param_7,param_8);
        param_5 = (long ****)0x1;
        param_6 = 1;
        ppppbVar21 = (byte ****)(uVar38 & 0xffffffff);
        ppppppppplVar20 = param_3;
        FUN_7101c340e0(auVar45,auVar43._0_4_,
                       (float)CONCAT13(uVar51,CONCAT12(uVar50,CONCAT11(uVar49,uVar48))),&local_1100,
                       param_2,param_3,ppppbVar21,(long ****)0x1,1,param_7,param_8);
        plVar11 = local_10f8;
        local_1100 = &PTR_FUN_710523d9a8;
        local_10f8 = (long *)0x0;
        if (plVar11 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar11);
        }
        uVar24 = local_1128;
        local_1130 = &PTR_FUN_710523d9a8;
        local_1128 = 0;
        if (uVar24 != 0) {
          FUN_710392eb40(uVar24);
        }
        local_1120 = &PTR_FUN_710523d9a8;
        local_1118 = (long *)0x0;
        if (plVar12 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar12);
        }
        plVar12 = local_1108;
        local_1110 = &PTR_FUN_710523d9a8;
        local_1108 = (long *)0x0;
        if (plVar12 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar12);
        }
      }
      FUN_7101c34000(lVar23,(ulong)(cVar5 != '\0'));
      lVar10 = *(long *)(*(long *)(lVar23 + 8) + 8);
      if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x18), lVar10 != 0)) {
        *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 1;
      }
      if ((local_1364 & 1) == 0) {
switchD_7101c357a4_caseD_8:
        FUN_71037780e0(&local_1100,lVar23,appplStack_1180,ppppppppplVar20,ppppbVar21,param_5,param_6
                       ,param_7,param_8);
        plVar12 = local_10f8;
        if (((long *)local_10f8[1] == (long *)0x0) ||
           (uVar24 = (**(code **)(*(long *)local_10f8[1] + 0x148))(), (uVar24 & 1) == 0)) {
          FUN_71037780e0(&local_100,lVar23,appplStack_11c8,ppppppppplVar20,ppppbVar21,param_5,
                         param_6,param_7,param_8);
          plVar11 = local_f8;
          if (*(long **)((long)local_f8 + 8) == (long *)0x0) {
            uVar24 = 0;
          }
          else {
            uVar24 = (**(code **)(**(long **)((long)local_f8 + 8) + 0x148))();
            uVar24 = uVar24 & 0xffffffff;
          }
          local_f8 = (long *)0x0;
          local_100 = &PTR_FUN_710523d9e8;
          if (plVar11 != (long *)0x0) {
            local_f8 = (long *)0x0;
            local_100 = &PTR_FUN_710523d9e8;
            FUN_710392eb40((ulong)plVar11);
          }
          local_1100 = &PTR_FUN_710523d9e8;
          local_10f8 = (long *)0x0;
          if (plVar12 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar12);
          }
          if ((uVar24 & 1) == 0) {
            FUN_7103778300(0x3f800000,*(long *)(lVar23 + 8),(long)appplStack_11c8);
          }
        }
        else {
          local_1100 = &PTR_FUN_710523d9e8;
          local_10f8 = (long *)0x0;
          if (plVar12 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar12);
          }
        }
        FUN_71037780e0(&local_1100,lVar23,appplStack_12a0,ppppppppplVar20,ppppbVar21,param_5,param_6
                       ,param_7,param_8);
        uVar24 = (ulong)local_10f8;
        if ((*(long **)((long)local_10f8 + 8) == (long *)0x0) ||
           (uVar29 = (**(code **)(**(long **)((long)local_10f8 + 8) + 0x148))(), (uVar29 & 1) == 0))
        {
          FUN_71037780e0(&local_100,lVar23,(long ****)"pos_stay_normal",ppppppppplVar20,ppppbVar21,
                         param_5,param_6,param_7,param_8);
          plVar12 = local_f8;
          if (*(long **)((long)local_f8 + 8) == (long *)0x0) {
            uVar29 = 0;
          }
          else {
            uVar29 = (**(code **)(**(long **)((long)local_f8 + 8) + 0x148))();
            uVar29 = uVar29 & 0xffffffff;
          }
          local_f8 = (long *)0x0;
          local_100 = &PTR_FUN_710523d9e8;
          if (plVar12 != (long *)0x0) {
            local_f8 = (long *)0x0;
            local_100 = &PTR_FUN_710523d9e8;
            FUN_710392eb40((ulong)plVar12);
          }
          local_1100 = &PTR_FUN_710523d9e8;
          local_10f8 = (long *)0x0;
          if (uVar24 != 0) {
            FUN_710392eb40(uVar24);
          }
          if ((uVar29 & 1) == 0) {
            lVar10 = *(long *)(lVar23 + 8);
            pppplVar22 = (long ****)"pos_stay_normal";
            goto LAB_7101c35950;
          }
        }
        else {
LAB_7101c358d4:
          local_1100 = &PTR_FUN_710523d9e8;
          local_10f8 = (long *)0x0;
          if (uVar24 != 0) {
            FUN_710392eb40(uVar24);
          }
        }
      }
      else {
        pppbVar35 = *param_4;
        ppbVar15 = *pppbVar35;
        switch(*(undefined4 *)(ppbVar15 + 0x37)) {
        case 2:
          uVar24 = FUN_710234dc20((long)ppbVar15,iVar16);
          if (7 < (uint)uVar24) {
LAB_7101c35b68:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (*(float *)((long)*pppbVar35 + (uVar24 & 0xffffffff) * 8 + 0x4c) <= 0.0) break;
          FUN_71037780e0(&local_1100,lVar23,(long ****)"pre_anime_normal_hl",ppppppppplVar20,
                         ppppbVar21,param_5,param_6,param_7,param_8);
          plVar12 = local_10f8;
          if ((long *)local_10f8[1] == (long *)0x0) {
            uVar8 = 0;
          }
          else {
            uVar8 = (**(code **)(*(long *)local_10f8[1] + 0x148))();
          }
          local_1100 = &PTR_FUN_710523d9e8;
          local_10f8 = (long *)0x0;
          if (plVar12 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar12);
          }
          if ((uVar8 & 1) == 0) {
            FUN_7103778300(0x3f800000,*(long *)(lVar23 + 8),0x710424f4dc);
            if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
              ppppppppplVar20 = (long *********)&DAT_00000004;
              uVar24 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1a647e845a,
                                      (long ****)&DAT_00000004,ppppbVar21,param_5,param_6,param_7,
                                      param_8);
              if ((uVar24 & 1) == 0) goto LAB_7101c34adc;
              FUN_71024076d0(local_12e8,0x1a647e845a);
              if (((local_12d8 != 0) && (DAT_7106dd53a8 == '\x01')) &&
                 ((int)local_12d0 == DAT_7106dd53ac)) {
                piVar25 = (int *)(local_12d8 + 0x38);
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar25,0x10);
                  if (bVar6) {
                    *piVar25 = *piVar25 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
            }
            else {
LAB_7101c34adc:
              local_12d0 = 0x87650000000000;
              local_12c0 = 0xffffffffffffffff;
              local_12e8[0] = 0;
              local_12b8 = 0;
              uStack_12b0 = 0;
            }
            local_12e0 = &PTR_FUN_7104f73d50;
            local_12d8 = 0;
            local_12c8 = 0;
          }
          FUN_71037780e0(&local_1100,lVar23,appplStack_1210,ppppppppplVar20,ppppbVar21,param_5,
                         param_6,param_7,param_8);
          uVar24 = (ulong)local_10f8;
          if (*(long **)((long)local_10f8 + 8) == (long *)0x0) {
            uVar29 = 0;
          }
          else {
            uVar29 = (**(code **)(**(long **)((long)local_10f8 + 8) + 0x148))();
            uVar29 = uVar29 & 0xffffffff;
          }
          local_1100 = &PTR_FUN_710523d9e8;
          local_10f8 = (long *)0x0;
          if (uVar24 != 0) {
            FUN_710392eb40(uVar24);
          }
          if ((uVar29 & 1) != 0) break;
          lVar10 = *(long *)(lVar23 + 8);
          pppplVar22 = appplStack_1210;
LAB_7101c35950:
          FUN_7103778300(0x3f800000,lVar10,(long)pppplVar22);
          break;
        case 4:
          FUN_71037780e0(&local_1100,lVar23,(long ****)"pre_anime_normal_hl",ppppppppplVar20,
                         ppppbVar21,param_5,param_6,param_7,param_8);
          plVar12 = local_10f8;
          if (((long *)local_10f8[1] == (long *)0x0) ||
             (uVar24 = (**(code **)(*(long *)local_10f8[1] + 0x148))(), (uVar24 & 1) == 0)) {
            FUN_71037780e0(&local_100,lVar23,(long ****)"stat_highlight",ppppppppplVar20,ppppbVar21,
                           param_5,param_6,param_7,param_8);
            plVar11 = local_f8;
            if (*(long **)((long)local_f8 + 8) == (long *)0x0) {
              uVar24 = 0;
            }
            else {
              uVar24 = (**(code **)(**(long **)((long)local_f8 + 8) + 0x148))();
              uVar24 = uVar24 & 0xffffffff;
            }
            local_f8 = (long *)0x0;
            local_100 = &PTR_FUN_710523d9e8;
            if (plVar11 != (long *)0x0) {
              local_f8 = (long *)0x0;
              local_100 = &PTR_FUN_710523d9e8;
              FUN_710392eb40((ulong)plVar11);
            }
            local_1100 = &PTR_FUN_710523d9e8;
            local_10f8 = (long *)0x0;
            if (plVar12 != (long *)0x0) {
              FUN_710392eb40((ulong)plVar12);
            }
            if ((uVar24 & 1) == 0) {
              FUN_7103778300(0x3f800000,*(long *)(lVar23 + 8),0x7104422387);
            }
          }
          else {
            local_1100 = &PTR_FUN_710523d9e8;
            local_10f8 = (long *)0x0;
            if (plVar12 != (long *)0x0) {
              FUN_710392eb40((ulong)plVar12);
            }
          }
          FUN_71037780e0(&local_1100,lVar23,appplStack_1210,ppppppppplVar20,ppppbVar21,param_5,
                         param_6,param_7,param_8);
          uVar24 = (ulong)local_10f8;
          if ((*(long **)((long)local_10f8 + 8) == (long *)0x0) ||
             (uVar29 = (**(code **)(**(long **)((long)local_10f8 + 8) + 0x148))(), (uVar29 & 1) == 0
             )) {
            FUN_71037780e0(&local_100,lVar23,appplStack_1258,ppppppppplVar20,ppppbVar21,param_5,
                           param_6,param_7,param_8);
            plVar12 = local_f8;
            if (*(long **)((long)local_f8 + 8) == (long *)0x0) {
              uVar29 = 0;
            }
            else {
              uVar29 = (**(code **)(**(long **)((long)local_f8 + 8) + 0x148))();
              uVar29 = uVar29 & 0xffffffff;
            }
            local_f8 = (long *)0x0;
            local_100 = &PTR_FUN_710523d9e8;
            if (plVar12 != (long *)0x0) {
              local_f8 = (long *)0x0;
              local_100 = &PTR_FUN_710523d9e8;
              FUN_710392eb40((ulong)plVar12);
            }
            local_1100 = &PTR_FUN_710523d9e8;
            local_10f8 = (long *)0x0;
            if (uVar24 != 0) {
              FUN_710392eb40(uVar24);
            }
            if ((uVar29 & 1) != 0) break;
            lVar10 = *(long *)(lVar23 + 8);
            pppplVar22 = appplStack_1258;
            goto LAB_7101c35950;
          }
          goto LAB_7101c358d4;
        case 5:
          uVar24 = FUN_710234dc20((long)ppbVar15,iVar16);
          if (7 < (uint)uVar24) goto LAB_7101c35b68;
          if (*(float *)((long)*pppbVar35 + (uVar24 & 0xffffffff) * 8 + 0x4c) <= 0.0) break;
          FUN_71037780e0(&local_1100,lVar23,appplStack_1180,ppppppppplVar20,ppppbVar21,param_5,
                         param_6,param_7,param_8);
          plVar12 = local_10f8;
          if ((long *)local_10f8[1] == (long *)0x0) {
            uVar24 = 0;
          }
          else {
            uVar24 = (**(code **)(*(long *)local_10f8[1] + 0x148))();
            uVar24 = uVar24 & 0xffffffff;
          }
          local_1100 = &PTR_FUN_710523d9e8;
          local_10f8 = (long *)0x0;
          if (plVar12 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar12);
          }
          if (((uVar24 & 1) == 0) &&
             (FUN_7103778300(0x3f800000,*(long *)(lVar23 + 8),(long)appplStack_1180),
             (uVar32 & 1) != 0)) {
            if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
              ppppppppplVar20 = (long *********)&DAT_00000004;
              uVar24 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1c95d4cdcc,
                                      (long ****)&DAT_00000004,ppppbVar21,param_5,param_6,param_7,
                                      param_8);
              if ((uVar24 & 1) == 0) goto LAB_7101c34b78;
              FUN_71024076d0(local_1328,0x1c95d4cdcc);
              if (((local_1318 != 0) && (DAT_7106dd53a8 == '\x01')) &&
                 ((int)local_1310 == DAT_7106dd53ac)) {
                piVar25 = (int *)(local_1318 + 0x38);
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar25,0x10);
                  if (bVar6) {
                    *piVar25 = *piVar25 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
            }
            else {
LAB_7101c34b78:
              local_1310 = 0x87650000000000;
              local_1300 = 0xffffffffffffffff;
              local_1328[0] = 0;
              local_12f8 = 0;
              uStack_12f0 = 0;
            }
            local_1320 = &PTR_FUN_7104f73d50;
            local_1318 = 0;
            local_1308 = 0;
          }
          FUN_71037780e0(&local_1100,lVar23,appplStack_12a0,ppppppppplVar20,ppppbVar21,param_5,
                         param_6,param_7,param_8);
          uVar24 = (ulong)local_10f8;
          if (*(long **)((long)local_10f8 + 8) == (long *)0x0) {
            uVar29 = 0;
          }
          else {
            uVar29 = (**(code **)(**(long **)((long)local_10f8 + 8) + 0x148))();
            uVar29 = uVar29 & 0xffffffff;
          }
          local_1100 = &PTR_FUN_710523d9e8;
          local_10f8 = (long *)0x0;
          if (uVar24 != 0) {
            FUN_710392eb40(uVar24);
          }
          if ((uVar29 & 1) == 0) {
            lVar10 = *(long *)(lVar23 + 8);
            pppplVar22 = appplStack_12a0;
            goto LAB_7101c35950;
          }
          break;
        case 8:
          goto switchD_7101c357a4_caseD_8;
        }
      }
      iVar36 = *(int *)(*param_3 + uVar38 * 0x39 + 6);
      if (iVar36 == 2) {
        FUN_7103778300(0x3f800000,*(long *)(lVar23 + 8),0x7104454c9f);
        ppppppppplVar20 = (long *********)&DAT_710438b71d;
        if (*(char *)((long)*param_3 + 0x831) != '\0') {
          ppppppppplVar20 = (long *********)&DAT_7104401d83;
        }
        FUN_7103778430(lVar23,"side_%s_amiibo",ppppppppplVar20,ppppbVar21,param_5,param_6,param_7,
                       param_8);
      }
      else {
        if (iVar36 == 1) {
          lVar10 = *(long *)(lVar23 + 8);
          pcVar18 = "player_cp";
        }
        else {
          if (iVar36 != 0) goto LAB_7101c35ab4;
          if (*(int *)(param_1 + 0x21b0) == 2 && ((local_1364 ^ 1) & 1) == 0) {
            uVar24 = FUN_710234dc20((long)**param_4,iVar16);
            FUN_7103776910(&local_100,lVar23,(long ****)"set_txt_player_id",ppppppppplVar20,
                           ppppbVar21,param_5,param_6,param_7,param_8);
            uVar8 = (int)uVar24 + 1;
            FUN_71003a4ca0((uint *)&local_1100,"cmn_%dp",(ulong)uVar8,ppppppppplVar20,ppppbVar21,
                           param_5,param_6,param_7,param_8);
            FUN_710377a120((long)&local_100,(char *)&local_10f8,ppppppppplVar20,ppppbVar21,param_5,
                           param_6,param_7,param_8);
            plVar12 = local_f8;
            local_100 = &PTR_FUN_710523d9a8;
            local_f8 = (long *)0x0;
            if (plVar12 != (long *)0x0) {
              FUN_710392eb40((ulong)plVar12);
            }
            ppppppppplVar20 = (long *********)(ulong)uVar8;
            FUN_7103778430(lVar23,"player_%dp",ppppppppplVar20,ppppbVar21,param_5,param_6,param_7,
                           param_8);
            lVar10 = *(long *)(lVar23 + 8);
            pcVar18 = "info_on";
          }
          else {
            lVar10 = *(long *)(lVar23 + 8);
            pcVar18 = "player_undecided";
          }
        }
        FUN_7103778300(0x3f800000,lVar10,(long)pcVar18);
      }
LAB_7101c35ab4:
      if ((local_1368 & 1) == 0 && *(int *)(param_1 + 0x21b0) == 2) {
        FUN_7103778430(lVar23,"info_next",ppppppppplVar20,ppppbVar21,param_5,param_6,param_7,param_8
                      );
      }
      pppppppplVar28 = *param_3;
      uVar24 = (ulong)*(uint *)((long)pppppppplVar28 + 0x834);
      uVar38 = uVar38 + 1;
      uVar34 = (ulong)((int)uVar34 + 0x10);
    } while (uVar38 < uVar24);
  }
  if (local_13e0 != (long *)0x0) {
    plVar12 = local_13e0 + 1;
    do {
      lVar10 = *plVar12;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_13e0 + 0x10))(local_13e0);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

