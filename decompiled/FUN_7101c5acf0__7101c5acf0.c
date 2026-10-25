// addr:      7101c5acf0
// offset:    0x1c5acf0
// name:      FUN_7101c5acf0
// mangled:   
// signature: undefined __cdecl FUN_7101c5acf0(long * param_1, uint param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101c5acf0(long *param_1,uint param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *********ppppppppplVar1;
  ushort *puVar2;
  undefined *puVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  undefined1 uVar9;
  char cVar10;
  undefined8 *puVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  long *plVar17;
  long *plVar18;
  undefined1 *puVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long *plVar22;
  undefined8 *puVar23;
  byte bVar24;
  ulong uVar25;
  char *pcVar26;
  byte *pbVar27;
  long *********ppppppppplVar28;
  undefined8 uVar29;
  long ****pppplVar30;
  byte ****ppppbVar31;
  uint uVar32;
  long lVar33;
  long lVar34;
  uint uVar35;
  undefined8 *puVar36;
  long *plVar37;
  long lVar38;
  ulong uVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  float fVar43;
  long ********pppppppplVar44;
  undefined **local_168;
  undefined8 *local_160 [8];
  byte ***local_120;
  float local_118;
  undefined **local_110;
  ulong local_108;
  long ********local_100;
  ulong local_f8;
  undefined **local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  byte abStack_d8 [3];
  undefined2 uStack_d5;
  undefined2 uStack_d3;
  undefined1 uStack_d1;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined6 uStack_ce;
  undefined2 local_c8;
  undefined2 uStack_c6;
  undefined2 uStack_c4;
  undefined2 local_c2;
  undefined **local_98;
  undefined8 *local_90;
  undefined4 local_84 [5];
  
  if ((param_2 & 0xff) == 0) {
    return;
  }
  lVar42 = *param_1;
  uVar15 = param_2 >> 8 & 0xff;
  uVar25 = (ulong)uVar15;
  lVar33 = lVar42 + uVar25 * 0x1e8;
  ppppppppplVar1 = (long *********)(lVar33 + 0x918);
  if (7 < uVar15) {
    return;
  }
  bVar7 = *(byte *)(lVar42 + 0x1920);
  puVar36 = (undefined8 *)(lVar42 + 0x658);
  if ((*(ulong *)(lVar33 + 0x968) & 0xff00000000000000) == 0xc100000000000000 &&
      (*(ulong *)(lVar33 + 0x968) & 0xffffffffff) != 0) {
    bVar5 = *(byte *)param_1[1];
    uVar39 = (ulong)bVar5;
    if (3 < bVar5) goto LAB_7101c5cbf0;
    *(ulong *)(lVar42 + 0x7c8) = *(ulong *)(lVar42 + 0x7c8) | 1L << (uVar39 & 0x3f);
    lVar34 = lVar42 + 0x658 + uVar25 * 2;
    *(undefined1 *)(lVar34 + 0x160) = 1;
    *(byte *)(lVar34 + 0x161) = bVar5;
    bVar24 = (byte)(param_2 >> 8);
    FUN_7101c5ce50((long)puVar36,bVar24,(long)ppppppppplVar1,param_4,param_5,param_6,param_7,param_8
                  );
    uVar25 = *(ulong *)(lVar33 + 0x960);
    lVar34 = lVar42 + 0x658 + uVar39 * 0x10 + 0x20;
    lVar41 = *(long *)(DAT_710532f730 + 8);
    lVar40 = *(long *)(lVar41 + 0x168);
    bVar6 = *(byte *)(lVar33 + 0x970);
    puVar19 = FUN_71032631a0(lVar40,0xfd5f7fa78);
    if (((((uVar25 & 0xff00000000000000) == 0xc100000000000000) && ((uVar25 & 0xffffffffff) != 0))
        && (((ulong)puVar19 & 0xff00000000000000) == 0xc100000000000000)) &&
       (((ulong)puVar19 & 0xffffffffff) != 0)) {
      bVar14 = (((ulong)puVar19 ^ uVar25) & 0xffffffffff) == 0;
    }
    else {
      bVar14 = (((ulong)puVar19 & 0xffffffffff) != 0 &&
               ((ulong)puVar19 & 0xff00000000000000) == 0xc100000000000000) ==
               ((uVar25 & 0xff00000000000000) == 0xc100000000000000 && (uVar25 & 0xffffffffff) != 0)
      ;
    }
    uVar15 = 0;
    if (!bVar14) {
      uVar15 = (uint)bVar6;
    }
    uVar15 = FUN_7103263540(lVar40,uVar25,(ulong)uVar15,param_4,param_5,param_6,param_7,param_8);
    FUN_7103262310((uint *)&local_e0,*(long *)(lVar41 + 0x168),uVar25);
    pbVar27 = abStack_d8;
    FUN_71003a4ca0((uint *)&local_168,"nam_chr1_%02d_%s",(ulong)uVar15,pbVar27,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_e0,lVar34,(long ****)"set_txt_chara_name",pbVar27,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_710377a120((long)&local_e0,(char *)local_160,pbVar27,param_4,param_5,param_6,param_7,param_8
                  );
    uVar25 = CONCAT17(uStack_d1,
                      CONCAT25(uStack_d3,
                               CONCAT23(uStack_d5,
                                        CONCAT12(abStack_d8[2],CONCAT11(abStack_d8[1],abStack_d8[0])
                                                ))));
    local_e0 = &PTR_FUN_710523d9a8;
    abStack_d8[0] = 0;
    abStack_d8[1] = 0;
    abStack_d8[2] = 0;
    uStack_d5 = 0;
    uStack_d3 = 0;
    uStack_d1 = 0;
    if (uVar25 != 0) {
      FUN_710392eb40(uVar25);
    }
    FUN_7103776910(&local_e0,lVar34,(long ****)"set_txt_chara_name_00",pbVar27,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_e0,(char *)local_160,pbVar27,param_4,param_5,param_6,param_7,param_8
                  );
    uVar25 = CONCAT17(uStack_d1,
                      CONCAT25(uStack_d3,
                               CONCAT23(uStack_d5,
                                        CONCAT12(abStack_d8[2],CONCAT11(abStack_d8[1],abStack_d8[0])
                                                ))));
    local_e0 = &PTR_FUN_710523d9a8;
    abStack_d8[0] = 0;
    abStack_d8[1] = 0;
    abStack_d8[2] = 0;
    uStack_d5 = 0;
    uStack_d3 = 0;
    uStack_d1 = 0;
    if (uVar25 != 0) {
      FUN_710392eb40(uVar25);
    }
    uVar25 = *(ulong *)(lVar33 + 0x960);
    uVar4 = *(ulong *)(lVar33 + 0x968);
    lVar40 = lVar42 + uVar39 * 0x10;
    bVar6 = *(byte *)(lVar33 + 0x970);
    FUN_7103778300(0x3f800000,*(long *)(lVar40 + 0x680),0x7104443995);
    lVar41 = *(long *)(DAT_710532f730 + 8);
    puVar19 = FUN_71032631a0(*(long *)(lVar41 + 0x168),0xfd5f7fa78);
    bVar14 = (uVar25 & 0xffffffffff) != 0;
    bVar12 = (uVar25 & 0xff00000000000000) == 0xc100000000000000;
    if (((bVar12 && bVar14) && (((ulong)puVar19 & 0xff00000000000000) == 0xc100000000000000)) &&
       (((ulong)puVar19 & 0xffffffffff) != 0)) {
      bVar13 = (((ulong)puVar19 ^ uVar25) & 0xffffffffff) == 0;
    }
    else {
      bVar13 = (((ulong)puVar19 & 0xffffffffff) != 0 &&
               ((ulong)puVar19 & 0xff00000000000000) == 0xc100000000000000) ==
               ((uVar25 & 0xff00000000000000) == 0xc100000000000000 && (uVar25 & 0xffffffffff) != 0)
      ;
    }
    uVar15 = 0;
    if (!bVar13) {
      uVar15 = (uint)bVar6;
    }
    ppppbVar31 = (byte ****)0x1;
    plVar17 = (long *)(lVar40 + 0x680);
    plVar18 = FUN_710323f330(*(long **)(lVar42 + 0x658),uVar25,(ulong)uVar15,1,param_5,param_6,
                             param_7,param_8);
    plVar37 = *(long **)(lVar42 + 0x658);
    uVar20 = FUN_7103263f80(*(long *)(lVar41 + 0x168),uVar25);
    ppppppppplVar28 = (long *********)&DAT_00000011;
    plVar37 = FUN_710323f600(plVar37,uVar20,(long ****)&DAT_00000011,ppppbVar31,param_5,param_6,
                             param_7,param_8);
    lVar38 = *(long *)(lVar41 + 0x168);
    lVar41 = lVar42 + uVar39 * 0x10 + 0x778;
    puVar19 = FUN_71032631a0(lVar38,0xfd5f7fa78);
    if (((bVar12 && bVar14) && (((ulong)puVar19 & 0xff00000000000000) == 0xc100000000000000)) &&
       (((ulong)puVar19 & 0xffffffffff) != 0)) {
      if ((((ulong)puVar19 ^ uVar25) & 0xffffffffff) == 0) goto LAB_7101c5b2b8;
LAB_7101c5b1d4:
      uVar15 = FUN_71032632a0(lVar38,uVar4);
      if ((uVar15 & 1) == 0) goto LAB_7101c5b2b8;
      ppppbVar31 = (byte ****)0x1;
      ppppppppplVar28 = (long *********)(ulong)(uint)bVar6;
      plVar22 = FUN_710323f330((long *)*puVar36,uVar4,(ulong)ppppppppplVar28,1,param_5,param_6,
                               param_7,param_8);
      FUN_7103776910(&local_e0,lVar41,(long ****)"set_rep_chara_pk_sd",ppppppppplVar28,ppppbVar31,
                     param_5,param_6,param_7,param_8);
      uVar25 = CONCAT17(uStack_d1,
                        CONCAT25(uStack_d3,
                                 CONCAT23(uStack_d5,
                                          CONCAT12(abStack_d8[2],
                                                   CONCAT11(abStack_d8[1],abStack_d8[0])))));
      FUN_7103778b80(uVar25,(long)plVar22,ppppppppplVar28,ppppbVar31,param_5,param_6,param_7,param_8
                    );
      local_e0 = &PTR_FUN_710523d9a8;
      abStack_d8[0] = 0;
      abStack_d8[1] = 0;
      abStack_d8[2] = 0;
      uStack_d5 = 0;
      uStack_d3 = 0;
      uStack_d1 = 0;
      if (uVar25 != 0) {
        FUN_710392eb40(uVar25);
      }
      FUN_7103776910(&local_e0,lVar41,(long ****)"set_rep_chara_pk",ppppppppplVar28,ppppbVar31,
                     param_5,param_6,param_7,param_8);
      uVar25 = CONCAT17(uStack_d1,
                        CONCAT25(uStack_d3,
                                 CONCAT23(uStack_d5,
                                          CONCAT12(abStack_d8[2],
                                                   CONCAT11(abStack_d8[1],abStack_d8[0])))));
      FUN_7103778b80(uVar25,(long)plVar22,ppppppppplVar28,ppppbVar31,param_5,param_6,param_7,param_8
                    );
      local_e0 = &PTR_FUN_710523d9a8;
      abStack_d8[0] = 0;
      abStack_d8[1] = 0;
      abStack_d8[2] = 0;
      uStack_d5 = 0;
      uStack_d3 = 0;
      uStack_d1 = 0;
      if (uVar25 != 0) {
        FUN_710392eb40(uVar25);
      }
      FUN_7103776910(&local_e0,lVar41,(long ****)"set_rep_silhouette",ppppppppplVar28,ppppbVar31,
                     param_5,param_6,param_7,param_8);
      uVar25 = CONCAT17(uStack_d1,
                        CONCAT25(uStack_d3,
                                 CONCAT23(uStack_d5,
                                          CONCAT12(abStack_d8[2],
                                                   CONCAT11(abStack_d8[1],abStack_d8[0])))));
      FUN_71037790a0(uVar25,1,ppppppppplVar28,ppppbVar31,param_5,param_6,param_7,param_8);
      local_e0 = &PTR_FUN_710523d9a8;
      abStack_d8[0] = 0;
      abStack_d8[1] = 0;
      abStack_d8[2] = 0;
      uStack_d5 = 0;
      uStack_d3 = 0;
      uStack_d1 = 0;
      if (uVar25 != 0) {
        FUN_710392eb40(uVar25);
      }
      lVar41 = *plVar17;
      pcVar26 = "ol_pokemon_on";
    }
    else {
      if ((((ulong)puVar19 & 0xffffffffff) != 0 &&
          ((ulong)puVar19 & 0xff00000000000000) == 0xc100000000000000) != (bVar12 && bVar14))
      goto LAB_7101c5b1d4;
LAB_7101c5b2b8:
      FUN_7103776910(&local_e0,lVar41,(long ****)"set_rep_chara_pk_sd",ppppppppplVar28,ppppbVar31,
                     param_5,param_6,param_7,param_8);
      uVar25 = CONCAT17(uStack_d1,
                        CONCAT25(uStack_d3,
                                 CONCAT23(uStack_d5,
                                          CONCAT12(abStack_d8[2],
                                                   CONCAT11(abStack_d8[1],abStack_d8[0])))));
      FUN_71037790a0(uVar25,1,ppppppppplVar28,ppppbVar31,param_5,param_6,param_7,param_8);
      local_e0 = &PTR_FUN_710523d9a8;
      abStack_d8[0] = 0;
      abStack_d8[1] = 0;
      abStack_d8[2] = 0;
      uStack_d5 = 0;
      uStack_d3 = 0;
      uStack_d1 = 0;
      if (uVar25 != 0) {
        FUN_710392eb40(uVar25);
      }
      FUN_7103776910(&local_e0,lVar41,(long ****)"set_rep_chara_pk",ppppppppplVar28,ppppbVar31,
                     param_5,param_6,param_7,param_8);
      uVar25 = CONCAT17(uStack_d1,
                        CONCAT25(uStack_d3,
                                 CONCAT23(uStack_d5,
                                          CONCAT12(abStack_d8[2],
                                                   CONCAT11(abStack_d8[1],abStack_d8[0])))));
      FUN_71037790a0(uVar25,1,ppppppppplVar28,ppppbVar31,param_5,param_6,param_7,param_8);
      local_e0 = &PTR_FUN_710523d9a8;
      abStack_d8[0] = 0;
      abStack_d8[1] = 0;
      abStack_d8[2] = 0;
      uStack_d5 = 0;
      uStack_d3 = 0;
      uStack_d1 = 0;
      if (uVar25 != 0) {
        FUN_710392eb40(uVar25);
      }
      FUN_7103776910(&local_e0,lVar41,(long ****)"set_rep_silhouette",ppppppppplVar28,ppppbVar31,
                     param_5,param_6,param_7,param_8);
      uVar25 = CONCAT17(uStack_d1,
                        CONCAT25(uStack_d3,
                                 CONCAT23(uStack_d5,
                                          CONCAT12(abStack_d8[2],
                                                   CONCAT11(abStack_d8[1],abStack_d8[0])))));
      FUN_71037790a0(uVar25,1,ppppppppplVar28,ppppbVar31,param_5,param_6,param_7,param_8);
      local_e0 = &PTR_FUN_710523d9a8;
      abStack_d8[0] = 0;
      abStack_d8[1] = 0;
      abStack_d8[2] = 0;
      uStack_d5 = 0;
      uStack_d3 = 0;
      uStack_d1 = 0;
      if (uVar25 != 0) {
        FUN_710392eb40(uVar25);
      }
      lVar41 = *plVar17;
      pcVar26 = "ol_pokemon_off";
    }
    FUN_7103778300(0x3f800000,lVar41,(long)pcVar26);
    FUN_7103776910(&local_e0,lVar34,(long ****)"set_rep_mark_m",ppppppppplVar28,ppppbVar31,param_5,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_168,lVar34,(long ****)"set_rep_chara",ppppppppplVar28,ppppbVar31,param_5,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_98,lVar34,(long ****)"set_rep_chara_sd",ppppppppplVar28,ppppbVar31,param_5
                   ,param_6,param_7,param_8);
    FUN_7103776910(&local_f0,lVar34,(long ****)"set_rep_chara_decide",ppppppppplVar28,ppppbVar31,
                   param_5,param_6,param_7,param_8);
    uVar25 = CONCAT17(uStack_d1,
                      CONCAT25(uStack_d3,
                               CONCAT23(uStack_d5,
                                        CONCAT12(abStack_d8[2],CONCAT11(abStack_d8[1],abStack_d8[0])
                                                ))));
    FUN_7103778b80(uVar25,(long)plVar37,ppppppppplVar28,ppppbVar31,param_5,param_6,param_7,param_8);
    puVar21 = local_160[0];
    FUN_7103778b80((long)local_160[0],(long)plVar18,ppppppppplVar28,ppppbVar31,param_5,param_6,
                   param_7,param_8);
    puVar11 = local_90;
    FUN_7103778b80((long)local_90,(long)plVar18,ppppppppplVar28,ppppbVar31,param_5,param_6,param_7,
                   param_8);
    puVar23 = local_e8;
    FUN_7103778b80((long)local_e8,(long)plVar18,ppppppppplVar28,ppppbVar31,param_5,param_6,param_7,
                   param_8);
    local_f0 = &PTR_FUN_710523d9a8;
    local_e8 = (undefined8 *)0x0;
    if (puVar23 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar23);
    }
    local_98 = &PTR_FUN_710523d9a8;
    local_90 = (undefined8 *)0x0;
    if (puVar11 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar11);
    }
    local_168 = &PTR_FUN_710523d9a8;
    local_160[0] = (undefined8 *)0x0;
    if (puVar21 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar21);
    }
    local_e0 = &PTR_FUN_710523d9a8;
    abStack_d8[0] = 0;
    abStack_d8[1] = 0;
    abStack_d8[2] = 0;
    uStack_d5 = 0;
    uStack_d3 = 0;
    uStack_d1 = 0;
    if (uVar25 != 0) {
      FUN_710392eb40(uVar25);
    }
    FUN_7103776910(&local_e0,lVar34,(long ****)"set_txt_00",ppppppppplVar28,ppppbVar31,param_5,
                   param_6,param_7,param_8);
    param_4 = (byte ****)(lVar33 + 0x924);
    ppppppppplVar28 = (long *********)0x1;
    FUN_710377a280((long)&local_e0,(byte *)"mnu_online_room_inside_account_nam",1);
    uVar25 = CONCAT17(uStack_d1,
                      CONCAT25(uStack_d3,
                               CONCAT23(uStack_d5,
                                        CONCAT12(abStack_d8[2],CONCAT11(abStack_d8[1],abStack_d8[0])
                                                ))));
    local_e0 = &PTR_FUN_710523d9a8;
    abStack_d8[0] = 0;
    abStack_d8[1] = 0;
    abStack_d8[2] = 0;
    uStack_d5 = 0;
    uStack_d3 = 0;
    uStack_d1 = 0;
    if (uVar25 != 0) {
      FUN_710392eb40(uVar25);
    }
    FUN_7103776640(&local_f0,lVar34,(byte ****)"set_rep_icn_fighter_01",ppppppppplVar28,param_4,
                   param_5,param_6,param_7,param_8);
    uVar25 = *(ulong *)(lVar33 + 0x940);
    plVar18 = (long *)*puVar36;
    FUN_7103776910(&local_e0,(long)&local_f0,(long ****)"set_icn_profile",ppppppppplVar28,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_168,(long)&local_f0,(long ****)"set_icn_profile_bg",ppppppppplVar28,
                   param_4,param_5,param_6,param_7,param_8);
    plVar18 = FUN_7103240430(plVar18,uVar25,(long ****)ppppppppplVar28,param_4,param_5,param_6,
                             param_7,param_8);
    FUN_7103778b80(CONCAT17(uStack_d1,
                            CONCAT25(uStack_d3,
                                     CONCAT23(uStack_d5,
                                              CONCAT12(abStack_d8[2],
                                                       CONCAT11(abStack_d8[1],abStack_d8[0]))))),
                   (long)plVar18,ppppppppplVar28,param_4,param_5,param_6,param_7,param_8);
    local_98 = &PTR_FUN_710523d9a8;
    puVar21 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar28,param_4,param_5,param_6,param_7,
                             param_8);
    if (puVar21 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_110 = (undefined **)((ulong)local_110 & 0xffffffff00000000);
        local_100 = (long ********)&SUB_00000020;
        ppppppppplVar28 = &local_100;
        uVar39 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_110);
        if (((uVar39 & 1) != 0) &&
           (puVar21 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar28,param_4,param_5,param_6,
                                     param_7,param_8), puVar21 != (undefined8 *)0x0))
        goto LAB_7101c5b540;
      }
      puVar21 = (undefined8 *)0x0;
    }
LAB_7101c5b540:
    puVar23 = local_160[0];
    puVar21[2] = 0;
    puVar21[3] = 0;
    *puVar21 = 0;
    puVar21[1] = 0;
    *puVar21 = *local_160[0];
    puVar21[1] = local_160[0][1];
    puVar21[2] = local_160[0][2];
    puVar21[3] = local_160[0][3];
    local_90 = puVar21;
    FUN_710337d450((long)&local_98,uVar25);
    local_98 = &PTR_FUN_710523d9a8;
    local_90 = (undefined8 *)0x0;
    if (puVar21 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar21);
    }
    local_168 = &PTR_FUN_710523d9a8;
    local_160[0] = (undefined8 *)0x0;
    if (puVar23 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar23);
    }
    uVar25 = CONCAT17(uStack_d1,
                      CONCAT25(uStack_d3,
                               CONCAT23(uStack_d5,
                                        CONCAT12(abStack_d8[2],CONCAT11(abStack_d8[1],abStack_d8[0])
                                                ))));
    local_e0 = &PTR_FUN_710523d9a8;
    abStack_d8[0] = 0;
    abStack_d8[1] = 0;
    abStack_d8[2] = 0;
    uStack_d5 = 0;
    uStack_d3 = 0;
    uStack_d1 = 0;
    if (uVar25 != 0) {
      FUN_710392eb40(uVar25);
    }
    puVar21 = local_e8;
    local_f0 = &PTR_FUN_710523d988;
    local_e8 = (undefined8 *)0x0;
    if (puVar21 != (undefined8 *)0x0) {
      uVar25 = *(ulong *)((long)puVar21 + 0x18);
      *(undefined ***)((long)puVar21 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)puVar21 + 0x18) = 0;
      if (uVar25 != 0) {
        FUN_710392eb40(uVar25);
      }
      FUN_710392eb40((ulong)puVar21);
    }
    if (*(int *)(lVar33 + 0x958) == 2) {
      cVar10 = *(char *)(lVar42 + 0x7d2);
      if (*(char *)(lVar42 + 0x7d5) == '\0') goto LAB_7101c5b674;
      uVar25 = 0;
      puVar3 = &UNK_71042f8349;
      if (cVar10 == '\0') {
        puVar3 = &DAT_71043be690;
      }
      while( true ) {
        bVar6 = puVar3[uVar25];
        if (bVar6 == 0) break;
        abStack_d8[uVar25] = bVar6;
        if (0x3e < (int)uVar25 + 1U) {
          uVar25 = (ulong)((int)uVar25 + 1);
          break;
        }
        bVar6 = (puVar3 + uVar25)[1];
        if (bVar6 == 0) {
          uVar25 = uVar25 + 1;
          break;
        }
        abStack_d8[uVar25 + 1] = bVar6;
        uVar25 = uVar25 + 2;
      }
      uVar35 = 0x811c9dc5;
      abStack_d8[uVar25 & 0xffffffff] = 0;
      uVar32 = (uint)abStack_d8[0];
      uVar15 = uVar35;
      if (abStack_d8[0] != 0) {
        pbVar27 = abStack_d8;
        do {
          pbVar27 = pbVar27 + 1;
          uVar15 = uVar15 * 0x89 ^ uVar32;
          uVar32 = (uint)*pbVar27;
        } while (uVar32 != 0);
      }
      local_e0 = (undefined **)CONCAT44((int)uVar25,uVar15);
      FUN_7103778300(0x3f800000,*plVar17,(long)abStack_d8);
      FUN_7103776910(&local_e0,lVar34,(long ****)"txt_04",ppppppppplVar28,param_4,param_5,param_6,
                     param_7,param_8);
      uVar39 = (ulong)*(byte *)(lVar33 + 0xa40);
      uVar29 = 1;
      FUN_710377a280((long)&local_e0,(byte *)"mnu_online_room_inside_fp_lv_n",1);
      uVar25 = CONCAT17(uStack_d1,
                        CONCAT25(uStack_d3,
                                 CONCAT23(uStack_d5,
                                          CONCAT12(abStack_d8[2],
                                                   CONCAT11(abStack_d8[1],abStack_d8[0])))));
      local_e0 = &PTR_FUN_710523d9a8;
      abStack_d8[0] = 0;
      abStack_d8[1] = 0;
      abStack_d8[2] = 0;
      uStack_d5 = 0;
      uStack_d3 = 0;
      uStack_d1 = 0;
      if (uVar25 != 0) {
        FUN_710392eb40(uVar25);
      }
      FUN_7103776910(&local_e0,lVar34,(long ****)"set_txt_fp",uVar29,uVar39,param_5,param_6,param_7,
                     param_8);
      FUN_710377a120((long)&local_e0,"cmn_fp",uVar29,uVar39,param_5,param_6,param_7,param_8);
      uVar25 = CONCAT17(uStack_d1,
                        CONCAT25(uStack_d3,
                                 CONCAT23(uStack_d5,
                                          CONCAT12(abStack_d8[2],
                                                   CONCAT11(abStack_d8[1],abStack_d8[0])))));
      local_e0 = &PTR_FUN_710523d9a8;
      abStack_d8[0] = 0;
      abStack_d8[1] = 0;
      abStack_d8[2] = 0;
      uStack_d5 = 0;
      uStack_d3 = 0;
      uStack_d1 = 0;
      if (uVar25 != 0) {
        FUN_710392eb40(uVar25);
      }
      FUN_7103776910(&local_e0,lVar34,(long ****)"set_txt_01",uVar29,uVar39,param_5,param_6,param_7,
                     param_8);
      param_4 = (byte ****)(lVar33 + 0xa20);
      pppplVar30 = (long ****)0x1;
      FUN_710377a280((long)&local_e0,(byte *)"mnu_online_room_inside_fp_nam",1);
      uVar25 = CONCAT17(uStack_d1,
                        CONCAT25(uStack_d3,
                                 CONCAT23(uStack_d5,
                                          CONCAT12(abStack_d8[2],
                                                   CONCAT11(abStack_d8[1],abStack_d8[0])))));
      local_e0 = &PTR_FUN_710523d9a8;
      abStack_d8[0] = 0;
      abStack_d8[1] = 0;
      abStack_d8[2] = 0;
      uStack_d5 = 0;
      uStack_d3 = 0;
      uStack_d1 = 0;
      if (uVar25 != 0) {
        FUN_710392eb40(uVar25);
      }
      plVar18 = (long *)FUN_710392e290(0x10,8,pppplVar30,param_4,param_5,param_6,param_7,param_8);
      if (plVar18 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_168 = (undefined **)((ulong)local_168 & 0xffffffff00000000);
          local_e0 = (undefined **)&DAT_00000008;
          pppplVar30 = (long ****)&local_e0;
          uVar25 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_168);
          if (((uVar25 & 1) != 0) &&
             (plVar18 = (long *)FUN_710392e290(0x10,8,pppplVar30,param_4,param_5,param_6,param_7,
                                               param_8), plVar18 != (long *)0x0))
          goto LAB_7101c5c0a4;
        }
        plVar18 = (long *)0x0;
      }
LAB_7101c5c0a4:
      *plVar18 = 0;
      lVar41 = *(long *)(*(long *)(lVar40 + 0x740) + 8);
      if ((lVar41 == 0) || (*(long *)(lVar41 + 0x60) == 0)) {
        *plVar18 = 0;
      }
      else {
        plVar37 = (long *)FUN_7103796f20(*(long *)(lVar41 + 0x60),*(long *)(lVar41 + 0x18) + 0xb0);
        *plVar18 = (long)plVar37;
        if (plVar37 != (long *)0x0) {
          (**(code **)(*plVar37 + 0x208))(plVar37,0);
          uVar25 = (**(code **)(*plVar37 + 0x200))(plVar37);
          if ((uVar25 & 1) == 0) {
            uVar15 = 1;
          }
          else {
            uVar15 = (**(code **)(*plVar37 + 0x210))(plVar37);
            uVar15 = uVar15 ^ 1;
          }
          pppplVar30 = (long ****)0x0;
          (**(code **)(*plVar37 + 0x388))(plVar37,uVar15 & 1);
        }
      }
      FUN_710392eb40((ulong)plVar18);
      plVar18 = (long *)FUN_710392e290(0x10,8,pppplVar30,param_4,param_5,param_6,param_7,param_8);
      if (plVar18 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_168 = (undefined **)((ulong)local_168 & 0xffffffff00000000);
          local_e0 = (undefined **)&DAT_00000008;
          pppplVar30 = (long ****)&local_e0;
          uVar25 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_168);
          if (((uVar25 & 1) != 0) &&
             (plVar18 = (long *)FUN_710392e290(0x10,8,pppplVar30,param_4,param_5,param_6,param_7,
                                               param_8), plVar18 != (long *)0x0))
          goto LAB_7101c5c268;
        }
        plVar18 = (long *)0x0;
      }
LAB_7101c5c268:
      *plVar18 = 0;
      lVar41 = *(long *)(*(long *)(lVar40 + 0x740) + 8);
      if ((lVar41 == 0) || (*(long *)(lVar41 + 0x60) == 0)) {
        *plVar18 = 0;
      }
      else {
        plVar37 = (long *)FUN_7103796f20(*(long *)(lVar41 + 0x60),*(long *)(lVar41 + 0x18) + 0xb0);
        *plVar18 = (long)plVar37;
        if (plVar37 != (long *)0x0) {
          (**(code **)(*plVar37 + 0x1f8))(plVar37,0);
          uVar25 = (**(code **)(*plVar37 + 0x200))(plVar37);
          if ((uVar25 & 1) == 0) {
            uVar15 = 1;
          }
          else {
            uVar15 = (**(code **)(*plVar37 + 0x210))(plVar37);
            uVar15 = uVar15 ^ 1;
          }
          pppplVar30 = (long ****)0x0;
          (**(code **)(*plVar37 + 0x388))(plVar37,uVar15 & 1);
        }
      }
      FUN_710392eb40((ulong)plVar18);
      switch(*(undefined1 *)(lVar33 + 0xa58)) {
      case 0:
        local_e0._4_4_ = 0x13;
        abStack_d8[1] = 0x70;
        abStack_d8[2] = 0x69;
        uStack_d5 = 0x6972;
        uStack_d3 = 0x5f74;
        uStack_d1 = 0x61;
        pbVar27 = abStack_d8;
        uStack_d0 = 0x74;
        uStack_cf = 0x74;
        uStack_ce = 0x5f72656b6361;
        local_c8 = 0x6f6e;
        uStack_c6 = 0x6e;
        uVar15 = 0x73;
        do {
          pbVar27 = pbVar27 + 1;
          uVar35 = uVar35 * 0x89 ^ uVar15;
          uVar15 = (uint)*pbVar27;
        } while (uVar15 != 0);
        break;
      case 1:
        local_e0._4_4_ = 0x17;
        abStack_d8[1] = 0x70;
        abStack_d8[2] = 0x69;
        uStack_d5 = 0x6972;
        uStack_d3 = 0x5f74;
        uStack_d1 = 0x61;
        pbVar27 = abStack_d8;
        uStack_d0 = 0x74;
        uStack_cf = 0x74;
        uStack_ce = 0x5f72656b6361;
        local_c8 = 0x666f;
        uStack_c6 = 0x6566;
        uStack_c4 = 0x736e;
        uVar15 = 0x73;
        local_c2 = 0x65;
        do {
          pbVar27 = pbVar27 + 1;
          uVar35 = uVar35 * 0x89 ^ uVar15;
          uVar15 = (uint)*pbVar27;
        } while (uVar15 != 0);
        break;
      case 2:
        local_e0._4_4_ = 0x17;
        abStack_d8[1] = 0x70;
        abStack_d8[2] = 0x69;
        uStack_d5 = 0x6972;
        uStack_d3 = 0x5f74;
        uStack_d1 = 0x61;
        pbVar27 = abStack_d8;
        uStack_d0 = 0x74;
        uStack_cf = 0x74;
        uStack_ce = 0x5f72656b6361;
        local_c8 = 0x6564;
        uStack_c6 = 0x6566;
        uStack_c4 = 0x736e;
        uVar15 = 0x73;
        local_c2 = 0x65;
        do {
          pbVar27 = pbVar27 + 1;
          uVar35 = uVar35 * 0x89 ^ uVar15;
          uVar15 = (uint)*pbVar27;
        } while (uVar15 != 0);
        break;
      case 3:
        local_e0._4_4_ = 0x15;
        abStack_d8[1] = 0x70;
        abStack_d8[2] = 0x69;
        uStack_d5 = 0x6972;
        uStack_d3 = 0x5f74;
        uStack_d1 = 0x61;
        pbVar27 = abStack_d8;
        uStack_d0 = 0x74;
        uStack_cf = 0x74;
        uStack_ce = 0x5f72656b6361;
        local_c8 = 0x6874;
        uStack_c6 = 0x6f72;
        uStack_c4 = 0x77;
        uVar15 = 0x73;
        do {
          pbVar27 = pbVar27 + 1;
          uVar35 = uVar35 * 0x89 ^ uVar15;
          uVar15 = (uint)*pbVar27;
        } while (uVar15 != 0);
        break;
      default:
        local_e0._4_4_ = 0x13;
        abStack_d8[1] = 0x70;
        abStack_d8[2] = 0x69;
        uStack_d5 = 0x6972;
        uStack_d3 = 0x5f74;
        uStack_d1 = 0x61;
        pbVar27 = abStack_d8;
        uStack_d0 = 0x74;
        uStack_cf = 0x74;
        uStack_ce = 0x5f72656b6361;
        local_c8 = 0x6f6e;
        uStack_c6 = 0x6e;
        uVar15 = 0x73;
        do {
          pbVar27 = pbVar27 + 1;
          uVar35 = uVar35 * 0x89 ^ uVar15;
          uVar15 = (uint)*pbVar27;
        } while (uVar15 != 0);
      }
      uStack_ce = 0x5f72656b6361;
      uStack_cf = 0x74;
      uStack_d0 = 0x74;
      uStack_d1 = 0x61;
      uStack_d3 = 0x5f74;
      uStack_d5 = 0x6972;
      abStack_d8[2] = 0x69;
      abStack_d8[1] = 0x70;
      abStack_d8[0] = 0x73;
      local_e0 = (undefined **)CONCAT44(local_e0._4_4_,uVar35);
      FUN_7103776640(&local_168,lVar40 + 0x738,(byte ****)"set_parts_icon_l",pppplVar30,param_4,
                     param_5,param_6,param_7,param_8);
      puVar21 = local_160[0];
      FUN_7103778300(0x3f800000,(long)local_160[0],(long)abStack_d8);
      FUN_7103776640(&local_98,lVar40 + 0x738,(byte ****)"set_parts_icon_m",pppplVar30,param_4,
                     param_5,param_6,param_7,param_8);
      puVar23 = local_90;
      FUN_7103778300(0x3f800000,(long)local_90,(long)abStack_d8);
      local_98 = &PTR_FUN_710523d988;
      local_90 = (undefined8 *)0x0;
      if (puVar23 != (undefined8 *)0x0) {
        uVar25 = puVar23[3];
        puVar23[2] = &PTR_FUN_710523d9a8;
        puVar23[3] = 0;
        if (uVar25 != 0) {
          FUN_710392eb40(uVar25);
        }
        FUN_710392eb40((ulong)puVar23);
      }
    }
    else {
      cVar10 = *(char *)(lVar42 + 0x7d2);
LAB_7101c5b674:
      if (*(char *)(lVar42 + 0x7d6) == '\0') {
        abStack_d8[0] = 0x6f;
        abStack_d8[1] = 0x6c;
        abStack_d8[2] = 0x5f;
        uVar15 = 0x811c9dc5;
        if (cVar10 == '\0') {
          uStack_d5 = 0x6f6e;
          uStack_d3 = 0x6d72;
          uStack_d1 = 0x61;
          uStack_d0 = 0x6c;
          pbVar27 = abStack_d8;
          uVar35 = 0x6f;
          uStack_cf = 0;
          local_e0._4_4_ = 9;
          do {
            pbVar27 = pbVar27 + 1;
            uVar15 = uVar15 * 0x89 ^ uVar35;
            uVar35 = (uint)*pbVar27;
          } while (uVar35 != 0);
        }
        else {
          uStack_d5 = 0x68;
          local_e0._4_4_ = 4;
          pbVar27 = abStack_d8;
          uVar35 = 0x6f;
          do {
            pbVar27 = pbVar27 + 1;
            uVar15 = uVar15 * 0x89 ^ uVar35;
            uVar35 = (uint)*pbVar27;
          } while (uVar35 != 0);
        }
        local_e0 = (undefined **)CONCAT44(local_e0._4_4_,uVar15);
      }
      else {
        uVar25 = 0;
        puVar19 = &DAT_71044223e2;
        if (cVar10 == '\0') {
          puVar19 = &DAT_71043e01a0;
        }
        while( true ) {
          bVar6 = puVar19[uVar25];
          if (bVar6 == 0) break;
          abStack_d8[uVar25] = bVar6;
          if (0x3e < (int)uVar25 + 1U) {
            uVar25 = (ulong)((int)uVar25 + 1);
            break;
          }
          bVar6 = (puVar19 + uVar25)[1];
          if (bVar6 == 0) {
            uVar25 = uVar25 + 1;
            break;
          }
          abStack_d8[uVar25 + 1] = bVar6;
          uVar25 = uVar25 + 2;
        }
        uVar15 = 0x811c9dc5;
        abStack_d8[uVar25 & 0xffffffff] = 0;
        uVar35 = (uint)abStack_d8[0];
        if (abStack_d8[0] != 0) {
          pbVar27 = abStack_d8;
          do {
            pbVar27 = pbVar27 + 1;
            uVar15 = uVar15 * 0x89 ^ uVar35;
            uVar35 = (uint)*pbVar27;
          } while (uVar35 != 0);
        }
        local_e0 = (undefined **)CONCAT44((int)uVar25,uVar15);
      }
      FUN_7103778300(0x3f800000,*plVar17,(long)abStack_d8);
      FUN_7103776910(&local_168,lVar34,(long ****)"set_txt_pl_num",ppppppppplVar28,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71003a4ca0((uint *)&local_e0,"cmn_%dp",(ulong)(bVar5 + 1),ppppppppplVar28,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377a120((long)&local_168,(char *)abStack_d8,ppppppppplVar28,param_4,param_5,param_6,
                     param_7,param_8);
      puVar21 = local_160[0];
      local_168 = &PTR_FUN_710523d9a8;
      local_160[0] = (undefined8 *)0x0;
      if (puVar21 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar21);
      }
      plVar18 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar28,param_4,param_5,param_6,
                                       param_7,param_8);
      if (plVar18 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_168 = (undefined **)((ulong)local_168 & 0xffffffff00000000);
          local_e0 = (undefined **)&DAT_00000008;
          ppppppppplVar28 = (long *********)&local_e0;
          uVar25 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_168);
          if (((uVar25 & 1) != 0) &&
             (plVar18 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar28,param_4,param_5,
                                               param_6,param_7,param_8), plVar18 != (long *)0x0))
          goto LAB_7101c5b8a0;
        }
        plVar18 = (long *)0x0;
      }
LAB_7101c5b8a0:
      *plVar18 = 0;
      lVar41 = *(long *)(*(long *)(lVar40 + 0x740) + 8);
      if ((lVar41 == 0) || (*(long *)(lVar41 + 0x60) == 0)) {
        *plVar18 = 0;
      }
      else {
        plVar37 = (long *)FUN_7103796f20(*(long *)(lVar41 + 0x60),*(long *)(lVar41 + 0x18) + 0xb0);
        *plVar18 = (long)plVar37;
        if (plVar37 != (long *)0x0) {
          uVar15 = 1;
          (**(code **)(*plVar37 + 0x208))(plVar37,1);
          uVar25 = (**(code **)(*plVar37 + 0x200))(plVar37);
          if ((uVar25 & 1) != 0) {
            uVar15 = (**(code **)(*plVar37 + 0x210))(plVar37);
            uVar15 = uVar15 ^ 1;
          }
          ppppppppplVar28 = (long *********)0x0;
          (**(code **)(*plVar37 + 0x388))(plVar37,uVar15 & 1);
        }
      }
      lVar41 = lVar40 + 0x738;
      plVar37 = (long *)(lVar40 + 0x740);
      FUN_710392eb40((ulong)plVar18);
      plVar18 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar28,param_4,param_5,param_6,
                                       param_7,param_8);
      if (plVar18 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_168 = (undefined **)((ulong)local_168 & 0xffffffff00000000);
          local_e0 = (undefined **)&DAT_00000008;
          ppppppppplVar28 = (long *********)&local_e0;
          uVar25 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_168);
          if (((uVar25 & 1) != 0) &&
             (plVar18 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar28,param_4,param_5,
                                               param_6,param_7,param_8), plVar18 != (long *)0x0))
          goto LAB_7101c5b9a4;
        }
        plVar18 = (long *)0x0;
      }
LAB_7101c5b9a4:
      *plVar18 = 0;
      lVar38 = *(long *)(*plVar37 + 8);
      if ((lVar38 == 0) || (*(long *)(lVar38 + 0x60) == 0)) {
        *plVar18 = 0;
      }
      else {
        plVar22 = (long *)FUN_7103796f20(*(long *)(lVar38 + 0x60),*(long *)(lVar38 + 0x18) + 0xb0);
        *plVar18 = (long)plVar22;
        if (plVar22 != (long *)0x0) {
          uVar15 = 1;
          (**(code **)(*plVar22 + 0x1f8))(plVar22,1);
          uVar25 = (**(code **)(*plVar22 + 0x200))(plVar22);
          if ((uVar25 & 1) != 0) {
            uVar15 = (**(code **)(*plVar22 + 0x210))(plVar22);
            uVar15 = uVar15 ^ 1;
          }
          ppppppppplVar28 = (long *********)0x0;
          (**(code **)(*plVar22 + 0x388))(plVar22,uVar15 & 1);
        }
      }
      FUN_710392eb40((ulong)plVar18);
      lVar38 = *(long *)(DAT_710532f730 + 8);
      uVar8 = *(ushort *)(lVar33 + 0xade);
      uVar25 = FUN_71032a9470(*(long *)(lVar38 + 0x1d8),uVar8);
      FUN_7103776640(&local_168,lVar41,(byte ****)"set_parts_icon_s",ppppppppplVar28,param_4,param_5
                     ,param_6,param_7,param_8);
      FUN_7103776910(&local_98,lVar41,(long ****)"set_rep_sp",ppppppppplVar28,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103776910(&local_f0,lVar41,(long ****)"set_rep_sp_sd",ppppppppplVar28,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103776910(&local_100,lVar41,(long ****)"set_rep_sp_mini",ppppppppplVar28,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103776910(&local_110,lVar41,(long ****)"set_rep_sp_sd_mini",ppppppppplVar28,param_4,
                     param_5,param_6,param_7,param_8);
      if (((*(char *)(lVar42 + 0x7d6) == '\0') || (uVar8 == 0xffff)) ||
         (*(int *)(lVar33 + 0x958) == 2)) {
        FUN_7103778300(0x3f800000,*plVar37,0x71043be6a5);
        FUN_7103778300(0x3f800000,(long)local_160[0],0x710428109c);
        puVar21 = local_90;
        FUN_71037790a0((long)local_90,1,ppppppppplVar28,param_4,param_5,param_6,param_7,param_8);
        FUN_71037790a0((long)local_e8,1,ppppppppplVar28,param_4,param_5,param_6,param_7,param_8);
        FUN_71037790a0(local_f8,1,ppppppppplVar28,param_4,param_5,param_6,param_7,param_8);
        FUN_71037790a0(local_108,1,ppppppppplVar28,param_4,param_5,param_6,param_7,param_8);
        puVar23 = (undefined8 *)
                  FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar28,param_4,param_5,param_6,
                                 param_7,param_8);
        if (puVar23 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_120 = (byte ***)((ulong)local_120 & 0xffffffff00000000);
            local_e0 = (undefined **)&SUB_00000020;
            ppppppppplVar28 = (long *********)&local_e0;
            uVar25 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_120);
            if (((uVar25 & 1) != 0) &&
               (puVar23 = (undefined8 *)
                          FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar28,param_4,param_5,
                                         param_6,param_7,param_8), puVar23 != (undefined8 *)0x0))
            goto LAB_7101c5bdf0;
          }
          puVar23 = (undefined8 *)0x0;
        }
LAB_7101c5bdf0:
        puVar23[2] = 0;
        puVar23[3] = 0;
        *puVar23 = 0;
        puVar23[1] = 0;
        *puVar23 = *puVar21;
        puVar23[1] = puVar21[1];
        puVar23[2] = local_90[2];
        puVar23[3] = local_90[3];
        FUN_71037799d0((long)puVar23);
        if (puVar23 != (undefined8 *)0x0) {
          FUN_710392eb40((ulong)puVar23);
        }
        puVar21 = (undefined8 *)
                  FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar28,param_4,param_5,param_6,
                                 param_7,param_8);
        if (puVar21 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_120 = (byte ***)((ulong)local_120 & 0xffffffff00000000);
            local_e0 = (undefined **)&SUB_00000020;
            pppplVar30 = (long ****)&local_e0;
            uVar25 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_120);
            if (((uVar25 & 1) != 0) &&
               (puVar21 = (undefined8 *)
                          FUN_710392e290(0x10,0x20,pppplVar30,param_4,param_5,param_6,param_7,
                                         param_8), puVar21 != (undefined8 *)0x0))
            goto LAB_7101c5be98;
          }
          puVar21 = (undefined8 *)0x0;
        }
LAB_7101c5be98:
        puVar23 = local_e8;
        puVar21[2] = 0;
        puVar21[3] = 0;
        *puVar21 = 0;
        puVar21[1] = 0;
        *puVar21 = *local_e8;
        puVar21[1] = local_e8[1];
        puVar21[2] = local_e8[2];
        puVar21[3] = local_e8[3];
        FUN_71037799d0((long)puVar21);
        if (puVar21 != (undefined8 *)0x0) {
          FUN_710392eb40((ulong)puVar21);
        }
      }
      else {
        FUN_7103778300(0x3f800000,*plVar37,0x71043e01a5);
        ppppppppplVar28 = (long *********)&SUB_00000018;
        plVar18 = FUN_710323faf0((long *)*puVar36,uVar25,(undefined **)&SUB_00000018,param_4,param_5
                                 ,param_6,param_7,param_8);
        puVar21 = local_90;
        FUN_7103778b80((long)local_90,(long)plVar18,ppppppppplVar28,param_4,param_5,param_6,param_7,
                       param_8);
        FUN_7103778b80((long)local_e8,(long)plVar18,ppppppppplVar28,param_4,param_5,param_6,param_7,
                       param_8);
        FUN_7103778b80(local_f8,(long)plVar18,ppppppppplVar28,param_4,param_5,param_6,param_7,
                       param_8);
        FUN_7103778b80(local_108,(long)plVar18,ppppppppplVar28,param_4,param_5,param_6,param_7,
                       param_8);
        pppplVar30 = (long ****)0x3;
        param_4 = &local_120;
        local_120 = (byte ***)0x0;
        local_118 = 1.0;
        FUN_71032abaf0(lVar38 + 0x1e0,uVar25,(long *********)0x3,param_4,param_5,param_6,param_7,
                       param_8);
        puVar23 = (undefined8 *)
                  FUN_710392e290(0x10,0x20,pppplVar30,param_4,param_5,param_6,param_7,param_8);
        if (puVar23 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84[0] = 0;
            local_e0 = (undefined **)&SUB_00000020;
            pppplVar30 = (long ****)&local_e0;
            uVar25 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_84);
            if (((uVar25 & 1) != 0) &&
               (puVar23 = (undefined8 *)
                          FUN_710392e290(0x10,0x20,pppplVar30,param_4,param_5,param_6,param_7,
                                         param_8), puVar23 != (undefined8 *)0x0))
            goto LAB_7101c5bbcc;
          }
          puVar23 = (undefined8 *)0x0;
        }
LAB_7101c5bbcc:
        puVar23[2] = 0;
        puVar23[3] = 0;
        *puVar23 = 0;
        puVar23[1] = 0;
        *puVar23 = *puVar21;
        puVar23[1] = puVar21[1];
        puVar23[2] = local_90[2];
        puVar23[3] = local_90[3];
        pppppppplVar44 =
             (long ********)CONCAT44(*(undefined4 *)((ulong)&local_120 | 4),local_120._0_4_);
        abStack_d8[0] = 0;
        abStack_d8[1] = 0;
        abStack_d8[2] = 0;
        uStack_d5 = 0;
        uStack_d3 = 0;
        uStack_d1 = 0;
        local_e0 = (undefined **)pppppppplVar44;
        FUN_7103779770(local_118,(long)puVar23,&local_e0);
        if (puVar23 != (undefined8 *)0x0) {
          FUN_710392eb40((ulong)puVar23);
        }
        puVar21 = (undefined8 *)
                  FUN_710392e290(0x10,0x20,pppplVar30,param_4,param_5,param_6,param_7,param_8);
        if (puVar21 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84[0] = 0;
            local_e0 = (undefined **)&SUB_00000020;
            pppplVar30 = (long ****)&local_e0;
            uVar25 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_84);
            if (((uVar25 & 1) != 0) &&
               (puVar21 = (undefined8 *)
                          FUN_710392e290(0x10,0x20,pppplVar30,param_4,param_5,param_6,param_7,
                                         param_8), puVar21 != (undefined8 *)0x0))
            goto LAB_7101c5bc8c;
          }
          puVar21 = (undefined8 *)0x0;
        }
LAB_7101c5bc8c:
        puVar23 = local_e8;
        puVar21[2] = 0;
        puVar21[3] = 0;
        *puVar21 = 0;
        puVar21[1] = 0;
        *puVar21 = *local_e8;
        puVar21[1] = local_e8[1];
        puVar21[2] = local_e8[2];
        puVar21[3] = local_e8[3];
        abStack_d8[0] = 0;
        abStack_d8[1] = 0;
        abStack_d8[2] = 0;
        uStack_d5 = 0;
        uStack_d3 = 0;
        uStack_d1 = 0;
        local_e0 = (undefined **)pppppppplVar44;
        FUN_7103779770(local_118,(long)puVar21,&local_e0);
        if (puVar21 != (undefined8 *)0x0) {
          FUN_710392eb40((ulong)puVar21);
        }
        uVar15 = *(byte *)(lVar33 + 0xad0) - 1;
        uVar9 = (undefined1)(0x20301 >> (ulong)((uVar15 & 3) << 3));
        if (2 < uVar15) {
          uVar9 = 0;
        }
        FUN_710339dde0((uint *)&local_e0,uVar9,'\0');
        FUN_7103778300(0x3f800000,(long)local_160[0],(long)abStack_d8);
      }
      uVar25 = local_108;
      local_110 = &PTR_FUN_710523d9a8;
      local_108 = 0;
      if (uVar25 != 0) {
        FUN_710392eb40(uVar25);
      }
      uVar25 = local_f8;
      local_100 = (long ********)&PTR_FUN_710523d9a8;
      local_f8 = 0;
      if (uVar25 != 0) {
        FUN_710392eb40(uVar25);
      }
      local_f0 = &PTR_FUN_710523d9a8;
      local_e8 = (undefined8 *)0x0;
      if (puVar23 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar23);
      }
      puVar23 = local_90;
      local_98 = &PTR_FUN_710523d9a8;
      local_90 = (undefined8 *)0x0;
      puVar21 = local_160[0];
      if (puVar23 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar23);
        puVar21 = local_160[0];
      }
    }
    local_168 = &PTR_FUN_710523d988;
    local_160[0] = (undefined8 *)0x0;
    if (puVar21 != (undefined8 *)0x0) {
      uVar25 = puVar21[3];
      puVar21[2] = &PTR_FUN_710523d9a8;
      puVar21[3] = 0;
      if (uVar25 != 0) {
        FUN_710392eb40(uVar25);
      }
      FUN_710392eb40((ulong)puVar21);
    }
    param_3 = ppppppppplVar1;
    FUN_7101c5d270((long)puVar36,bVar24,(long)ppppppppplVar1,param_4,param_5,param_6,param_7,param_8
                  );
    if (*(char *)(lVar42 + 0x7d1) == '\0') {
      FUN_7103778300(0x3f800000,*plVar17,0x71043be67f);
    }
    else {
      if (*(char *)(lVar33 + 0xafa) == '\0') {
        param_3 = (long *********)0x0;
      }
      else {
        param_3 = (long *********)(ulong)(*(char *)(lVar42 + 0x7d7) != '\0');
      }
      FUN_7101c5a440((long)puVar36,bVar5,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
      ;
    }
    pcVar26 = "set_1_btn_s";
    if ((*(char *)(lVar42 + 0x7d5) != '\0') &&
       (pcVar26 = "set_4_btn_s_h", *(int *)(lVar33 + 0x958) != 2)) {
      pcVar26 = "set_1_btn_s";
    }
    FUN_7103778300(0x3f800000,*(long *)(lVar40 + 0x700),(long)pcVar26);
    FUN_7103776910(&local_e0,lVar40 + 0x6f8,(long ****)"set_txt_dmg",param_3,param_4,param_5,param_6
                   ,param_7,param_8);
    FUN_7103776910(&local_168,lVar40 + 0x6f8,(long ****)"set_txt_hp",param_3,param_4,param_5,param_6
                   ,param_7,param_8);
    lVar40 = DAT_710532f8c0;
    if (*(char *)(lVar42 + 0x7d2) == '\0') {
      uVar25 = CONCAT17(uStack_d1,
                        CONCAT25(uStack_d3,
                                 CONCAT23(uStack_d5,
                                          CONCAT12(abStack_d8[2],
                                                   CONCAT11(abStack_d8[1],abStack_d8[0])))));
      if (*(long **)(uVar25 + 0x10) != (long *)0x0) {
        param_3 = (long *********)0x0;
        param_4 = (byte ****)0x0;
        local_98 = (undefined **)((ulong)local_98 & 0xffffffff00000000);
        FUN_71037a2270(*(long **)(uVar25 + 0x10),(ushort *)&local_98,0,0);
      }
LAB_7101c5c7d4:
      plVar18 = (long *)local_160[0][2];
      puVar36 = local_160[0];
    }
    else {
      if (*(char *)(lVar42 + 0x7d4) == '\0') {
        lVar33 = 0x5a;
        if (*(char *)(lVar42 + 0x7d3) != '\0') {
          lVar33 = 0x5c;
        }
        uVar8 = *(ushort *)((long)ppppppppplVar1 + lVar33);
        param_3 = (long *********)(ulong)uVar8;
        FUN_710377a310((long)&local_e0,1);
        lVar33 = *(long *)(lVar40 + 8);
        fVar43 = (float)FUN_71033112b0(0,lVar33,0xf1d09d008);
        uVar15 = (uint)fVar43;
        if ((int)(uint)uVar8 <= (int)uVar15) {
          uVar15 = (uint)uVar8;
        }
        uVar15 = FUN_71033114a0((float)(int)uVar15,*(float **)(lVar33 + 200),
                                *(float **)(lVar33 + 0xd0));
        uVar25 = CONCAT17(uStack_d1,
                          CONCAT25(uStack_d3,
                                   CONCAT23(uStack_d5,
                                            CONCAT12(abStack_d8[2],
                                                     CONCAT11(abStack_d8[1],abStack_d8[0])))));
        local_f0 = (undefined **)CONCAT44(local_f0._4_4_,uVar15);
        FUN_710377a5b0(*(long *)(uVar25 + 0x10),(char *)&local_f0);
        goto LAB_7101c5c7d4;
      }
      uVar8 = *(ushort *)(lVar33 + 0x976);
      param_3 = (long *********)(ulong)uVar8;
      FUN_710377a310((long)&local_168,1);
      lVar33 = *(long *)(lVar40 + 8);
      fVar43 = (float)FUN_71033112b0(0,lVar33,0xe7e193f84);
      uVar15 = (uint)fVar43;
      if ((int)uVar15 <= (int)(uint)uVar8) {
        uVar15 = (uint)uVar8;
      }
      uVar15 = FUN_71033115f0((float)(int)uVar15,*(float **)(lVar33 + 0xe0),
                              *(float **)(lVar33 + 0xe8));
      puVar36 = local_160[0];
      local_f0 = (undefined **)CONCAT44(local_f0._4_4_,uVar15);
      FUN_710377a5b0(local_160[0][2],(char *)&local_f0);
      uVar25 = CONCAT17(uStack_d1,
                        CONCAT25(uStack_d3,
                                 CONCAT23(uStack_d5,
                                          CONCAT12(abStack_d8[2],
                                                   CONCAT11(abStack_d8[1],abStack_d8[0])))));
      plVar18 = *(long **)(uVar25 + 0x10);
    }
    if (plVar18 != (long *)0x0) {
      param_3 = (long *********)0x0;
      param_4 = (byte ****)0x0;
      local_98 = (undefined **)((ulong)local_98 & 0xffffffff00000000);
      FUN_71037a2270(plVar18,(ushort *)&local_98,0,0);
    }
    local_168 = &PTR_FUN_710523d9a8;
    local_160[0] = (undefined8 *)0x0;
    if (puVar36 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar36);
    }
    local_e0 = &PTR_FUN_710523d9a8;
    abStack_d8[0] = 0;
    abStack_d8[1] = 0;
    abStack_d8[2] = 0;
    uStack_d5 = 0;
    uStack_d3 = 0;
    uStack_d1 = 0;
    if (uVar25 != 0) {
      FUN_710392eb40(uVar25);
    }
    FUN_7103778300(0x3f800000,*plVar17,0x710436c3d7);
    FUN_7103778300(0x3f800000,*plVar17,0x71042d62b1);
    FUN_71037780e0(&local_e0,lVar34,(long ****)"ol_bln_disp_on",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    plVar17 = (long *)CONCAT17(uStack_d1,
                               CONCAT25(uStack_d3,
                                        CONCAT23(uStack_d5,
                                                 CONCAT12(abStack_d8[2],
                                                          CONCAT11(abStack_d8[1],abStack_d8[0])))));
    if ((((long *)plVar17[1] == (long *)0x0) ||
        (uVar25 = (**(code **)(*(long *)plVar17[1] + 0x148))(), (uVar25 & 1) == 0)) ||
       (((long *)plVar17[1] != (long *)0x0 &&
        (uVar25 = (**(code **)(*(long *)plVar17[1] + 0x138))(), (uVar25 & 1) == 0)))) {
      FUN_710377aee0(0x3f800000,(long)&local_e0);
      local_e0 = &PTR_FUN_710523d9e8;
      abStack_d8[0] = 0;
      abStack_d8[1] = 0;
      abStack_d8[2] = 0;
      uStack_d5 = 0;
      uStack_d3 = 0;
      uStack_d1 = 0;
      if (plVar17 == (long *)0x0) goto LAB_7101c5c8c8;
    }
    else {
      local_e0 = &PTR_FUN_710523d9e8;
      abStack_d8[0] = 0;
      abStack_d8[1] = 0;
      abStack_d8[2] = 0;
      uStack_d5 = 0;
      uStack_d3 = 0;
      uStack_d1 = 0;
    }
LAB_7101c5c8c0:
    FUN_710392eb40((ulong)plVar17);
  }
  else {
    lVar33 = lVar42 + uVar25 * 2;
    uVar8 = *(ushort *)(lVar33 + 0x7b8);
    if ((uVar8 & 0xff) != 0) {
      puVar2 = (ushort *)(lVar33 + 0x7b8);
      FUN_7101c5cc00((long)puVar36,(ulong)(uVar8 >> 8),param_3,param_4,param_5,param_6,param_7,
                     param_8);
      *(undefined1 *)puVar2 = 0;
      uVar8 = *puVar2;
      if ((uVar8 & 0xff) != 0) {
        uVar8 = uVar8 >> 8;
        *(undefined1 *)(lVar42 + 0x7d7) = 0;
        if (3 < uVar8) goto LAB_7101c5cbf0;
        plVar17 = (long *)FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,
                                         param_8);
        if (plVar17 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_168 = (undefined **)((ulong)local_168 & 0xffffffff00000000);
            local_e0 = (undefined **)&DAT_00000008;
            param_3 = (long *********)&local_e0;
            uVar25 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_168);
            if (((uVar25 & 1) != 0) &&
               (plVar17 = (long *)FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,
                                                 param_7,param_8), plVar17 != (long *)0x0))
            goto LAB_7101c5ae08;
          }
          plVar17 = (long *)0x0;
        }
LAB_7101c5ae08:
        lVar33 = lVar42 + (ulong)uVar8 * 0x10;
        *plVar17 = 0;
        lVar34 = *(long *)(*(long *)(lVar33 + 0x6c0) + 8);
        if ((lVar34 == 0) || (*(long *)(lVar34 + 0x60) == 0)) {
          *plVar17 = 0;
        }
        else {
          plVar18 = (long *)FUN_7103796f20(*(long *)(lVar34 + 0x60),*(long *)(lVar34 + 0x18) + 0xb0)
          ;
          *plVar17 = (long)plVar18;
          if (plVar18 != (long *)0x0) {
            (**(code **)(*plVar18 + 0x1f8))(plVar18,0);
            uVar25 = (**(code **)(*plVar18 + 0x200))(plVar18);
            if ((uVar25 & 1) == 0) {
              uVar15 = 1;
            }
            else {
              uVar15 = (**(code **)(*plVar18 + 0x210))(plVar18);
              uVar15 = uVar15 ^ 1;
            }
            param_3 = (long *********)0x0;
            (**(code **)(*plVar18 + 0x388))(plVar18,uVar15 & 1);
            plVar18 = (long *)*plVar17;
            if (plVar18 != (long *)0x0) {
              (**(code **)(*plVar18 + 0x218))(plVar18,0);
              (**(code **)(*plVar18 + 0x410))(plVar18);
              (**(code **)(*plVar18 + 0x3f0))(plVar18,0);
              iVar16 = (**(code **)(*plVar18 + 0x140))(plVar18);
              if ((iVar16 != 6) && (iVar16 = (**(code **)(*plVar18 + 0x140))(plVar18), iVar16 != 1))
              {
                (**(code **)(*plVar18 + 0x400))(plVar18);
              }
              uVar25 = (**(code **)(*plVar18 + 0x158))(plVar18);
              if ((uVar25 & 1) == 0) {
                (**(code **)(*plVar18 + 0x370))(plVar18);
              }
            }
          }
        }
        FUN_7103778300(0x3f800000,*(long *)(lVar33 + 0x680),0x71043be67f);
        goto LAB_7101c5c8c0;
      }
    }
  }
LAB_7101c5c8c8:
  if (((((uint)bVar7 != (param_2 & 0xff00) >> 8) ||
       (bVar14 = FUN_7103265e70(*(long *)(DAT_710532f730 + 8) + 0x160,*(ulong *)(lVar42 + 0x1910)),
       !bVar14)) || (*(int *)(lVar42 + 0x191c) == 0)) || (**(long **)(lVar42 + 0x2e8) == 0))
  goto LAB_7101c5cbbc;
  if (3 < *(byte *)param_1[1]) {
LAB_7101c5cbf0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar34 = lVar42 + (ulong)*(byte *)param_1[1] * 0x10;
  lVar33 = lVar34 + 0x678;
  FUN_7103778300(0x3f800000,*(long *)(lVar34 + 0x680),0x7104443787);
  FUN_7103776910(&local_e0,lVar33,(long ****)"set_rep_chara",param_3,param_4,param_5,param_6,param_7
                 ,param_8);
  FUN_7103776910(&local_168,lVar33,(long ****)"set_rep_chara_sd",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_98,lVar33,(long ****)"set_rep_chara_decide",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  lVar33 = CONCAT17(uStack_d1,
                    CONCAT25(uStack_d3,
                             CONCAT23(uStack_d5,
                                      CONCAT12(abStack_d8[2],CONCAT11(abStack_d8[1],abStack_d8[0])))
                            ));
  if (*(long *)(lVar33 + 8) != 0) {
    lVar34 = **(long **)(lVar42 + 0x2e8);
    if (lVar34 != 0) {
      plVar17 = (long *)(*(long **)(lVar42 + 0x2e8))[1];
      if (plVar17 == (long *)0x0) {
        plVar18 = (long *)(*(long *)(lVar34 + 8) + 0x188);
      }
      else {
        plVar37 = plVar17 + 1;
        do {
          cVar10 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar14) {
            *plVar37 = *plVar37 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        plVar18 = (long *)(*(long *)(lVar34 + 8) + 0x188);
        do {
          lVar33 = *plVar37;
          cVar10 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar14) {
            *plVar37 = lVar33 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar33 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          std::__shared_weak_count::__release_weak();
        }
      }
      uVar25 = (**(code **)(*plVar18 + 0x30))(plVar18);
      lVar33 = CONCAT17(uStack_d1,
                        CONCAT25(uStack_d3,
                                 CONCAT23(uStack_d5,
                                          CONCAT12(abStack_d8[2],
                                                   CONCAT11(abStack_d8[1],abStack_d8[0])))));
      if ((uVar25 & 1) != 0) {
        param_3 = (long *********)0x0;
        FUN_710379e9c0(*(long **)(lVar33 + 8),plVar18,0);
        goto LAB_7101c5ca18;
      }
    }
    FUN_71037790a0(lVar33,1,param_3,param_4,param_5,param_6,param_7,param_8);
  }
LAB_7101c5ca18:
  if (local_160[0][1] != 0) {
    lVar33 = **(long **)(lVar42 + 0x2e8);
    if (lVar33 != 0) {
      plVar17 = (long *)(*(long **)(lVar42 + 0x2e8))[1];
      if (plVar17 == (long *)0x0) {
        plVar18 = (long *)(*(long *)(lVar33 + 8) + 0x188);
      }
      else {
        plVar37 = plVar17 + 1;
        do {
          cVar10 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar14) {
            *plVar37 = *plVar37 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        plVar18 = (long *)(*(long *)(lVar33 + 8) + 0x188);
        do {
          lVar33 = *plVar37;
          cVar10 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar14) {
            *plVar37 = lVar33 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar33 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          std::__shared_weak_count::__release_weak();
        }
      }
      uVar25 = (**(code **)(*plVar18 + 0x30))(plVar18);
      if ((uVar25 & 1) != 0) {
        param_3 = (long *********)0x0;
        FUN_710379e9c0((long *)local_160[0][1],plVar18,0);
        goto LAB_7101c5cac4;
      }
    }
    FUN_71037790a0((long)local_160[0],1,param_3,param_4,param_5,param_6,param_7,param_8);
  }
LAB_7101c5cac4:
  puVar36 = local_90;
  if (*(long *)((long)local_90 + 8) == 0) {
LAB_7101c5cb7c:
    local_98 = &PTR_FUN_710523d9a8;
    local_90 = (undefined8 *)0x0;
    if (puVar36 != (undefined8 *)0x0) goto LAB_7101c5cb8c;
  }
  else {
    lVar33 = **(long **)(lVar42 + 0x2e8);
    if (lVar33 == 0) {
LAB_7101c5cb70:
      puVar36 = local_90;
      FUN_71037790a0((long)local_90,1,param_3,param_4,param_5,param_6,param_7,param_8);
      goto LAB_7101c5cb7c;
    }
    plVar17 = (long *)(*(long **)(lVar42 + 0x2e8))[1];
    if (plVar17 == (long *)0x0) {
      plVar18 = (long *)(*(long *)(lVar33 + 8) + 0x188);
    }
    else {
      plVar37 = plVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar37,0x10);
        if (bVar14) {
          *plVar37 = *plVar37 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      plVar18 = (long *)(*(long *)(lVar33 + 8) + 0x188);
      do {
        lVar33 = *plVar37;
        cVar10 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar37,0x10);
        if (bVar14) {
          *plVar37 = lVar33 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar33 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        std::__shared_weak_count::__release_weak();
      }
    }
    uVar25 = (**(code **)(*plVar18 + 0x30))(plVar18);
    puVar36 = local_90;
    if ((uVar25 & 1) == 0) goto LAB_7101c5cb70;
    FUN_710379e9c0(*(long **)((long)local_90 + 8),plVar18,0);
LAB_7101c5cb8c:
    local_90 = (undefined8 *)0x0;
    local_98 = &PTR_FUN_710523d9a8;
    FUN_710392eb40((ulong)puVar36);
  }
  puVar36 = local_160[0];
  local_168 = &PTR_FUN_710523d9a8;
  local_160[0] = (undefined8 *)0x0;
  if (puVar36 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar36);
  }
  uVar25 = CONCAT17(uStack_d1,
                    CONCAT25(uStack_d3,
                             CONCAT23(uStack_d5,
                                      CONCAT12(abStack_d8[2],CONCAT11(abStack_d8[1],abStack_d8[0])))
                            ));
  local_e0 = &PTR_FUN_710523d9a8;
  abStack_d8[0] = 0;
  abStack_d8[1] = 0;
  abStack_d8[2] = 0;
  uStack_d5 = 0;
  uStack_d3 = 0;
  uStack_d1 = 0;
  if (uVar25 != 0) {
    FUN_710392eb40(uVar25);
  }
LAB_7101c5cbbc:
  *(char *)param_1[1] = *(char *)param_1[1] + '\x01';
  return;
}

