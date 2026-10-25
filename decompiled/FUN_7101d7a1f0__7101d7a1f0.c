// addr:      7101d7a1f0
// offset:    0x1d7a1f0
// name:      FUN_7101d7a1f0
// mangled:   
// signature: undefined __cdecl FUN_7101d7a1f0(long * param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101d7a1f0(long *param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  long ********pppppppplVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long *******ppppppplVar6;
  long ********pppppppplVar7;
  char *pcVar8;
  long *********ppppppppplVar9;
  undefined8 uVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  undefined **local_1c0;
  long ********local_1b8 [8];
  undefined8 local_178;
  undefined8 local_170;
  ulong local_168;
  undefined8 local_160;
  undefined2 local_158;
  char local_156;
  undefined4 local_154;
  undefined8 local_150;
  undefined **local_d0;
  ulong local_c8;
  undefined **local_c0;
  long ********local_b8;
  undefined **local_b0;
  long ********local_a8 [9];
  
  if (2 < *(uint *)(param_1 + 0x4a)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (4 < *(uint *)(param_1 + 0x5f)) {
    return;
  }
  lVar18 = *(long *)param_1[(ulong)*(uint *)(param_1 + 0x4a) + 0x47];
  lVar17 = lVar18 + 8;
  switch(*(uint *)(param_1 + 0x5f)) {
  default:
    lVar18 = *(long *)*param_1;
    uVar16 = (((long *)*param_1)[1] - lVar18 >> 4) * -0x5555555555555555;
    uVar14 = (ulong)*(int *)((long)param_1 + 0x30c);
    if (uVar16 < uVar14 || uVar16 - uVar14 == 0) {
      iVar20 = 0;
      uVar4 = 0;
      uVar14 = 0x2dffff0000000000;
    }
    else {
      puVar11 = (ulong *)(lVar18 + uVar14 * 0x30);
      uVar14 = *puVar11;
      iVar20 = (int)puVar11[4];
      uVar4 = (int)(puVar11[2] - puVar11[1] >> 3) * -0x55555555;
    }
    lVar19 = *(long *)(DAT_710532f730 + 8);
    FUN_7103776640(&local_1c0,lVar17,(byte ****)"set_part_album_image",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_c0,lVar17,(long ****)"set_txt_album_nam",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    lVar18 = *(long *)(*(long *)(lVar19 + 0x188) + 8);
    uVar16 = FUN_710329a390(lVar18,0xdbcbf2008);
    if (((uVar14 & 0xff00000000000000) == 0x2d00000000000000) && ((uVar14 & 0xffffffffff) != 0)) {
      if (((uVar16 & 0xff00000000000000) == 0x2d00000000000000 && (uVar16 & 0xffffffffff) != 0) &&
         (((uVar16 ^ uVar14) & 0xffffffffff) == 0)) goto LAB_7101d7a5ac;
LAB_7101d7a648:
      uVar16 = FUN_710329a390(lVar18,0x10766b77d7);
      if (((uVar14 & 0xff00000000000000) != 0x2d00000000000000) || ((uVar14 & 0xffffffffff) == 0)) {
        if (((uVar16 & 0xff00000000000000) == 0x2d00000000000000) && ((uVar16 & 0xffffffffff) != 0))
        goto LAB_7101d7a6a0;
LAB_7101d7a75c:
        if ((char)param_1[100] != '\0') {
          uVar14 = FUN_710329a390(lVar18,0x11be3e4a84);
          FUN_7103776910(&local_d0,(long)&local_1c0,(long ****)"set_rep_ser_pic",param_3,param_4,
                         param_5,param_6,param_7,param_8);
          ppppppppplVar9 = (long *********)&DAT_00000011;
          plVar5 = FUN_710323f600((long *)param_1[0x46],uVar14,(long ****)&DAT_00000011,param_4,
                                  param_5,param_6,param_7,param_8);
          FUN_7103778b80(local_c8,(long)plVar5,ppppppppplVar9,param_4,param_5,param_6,param_7,
                         param_8);
          FUN_7103778300(0x3f800000,(long)local_1b8[0],0x710435bb2c);
          if (((uVar14 & 0xff00000000000000) == 0x2d00000000000000) &&
             ((uVar14 & 0xffffffffff) != 0)) {
            FUN_7103299d20((uint *)&local_178,*(long *)(lVar19 + 0x188),uVar14);
            FUN_71003a4ca0((uint *)&local_b0,"tit_series_snd_%s",&local_170,uVar14,param_4,param_5,
                           param_6,param_7,param_8);
          }
          else {
            local_a8[0] = (long ********)((ulong)local_a8[0] & 0xffffffffffffff00);
            local_b0 = (undefined **)0x811c9dc5;
          }
          ppppppppplVar9 = local_a8;
          uVar10 = 1;
          FUN_710377a280((long)&local_c0,(byte *)"mnu_sound_test_series_album_nam",1);
          pppppppplVar7 = local_1b8[0];
          uVar14 = local_c8;
          goto joined_r0x007101d7a844;
        }
        FUN_7103778300(0x3f800000,(long)local_1b8[0],0x710433a4b8);
        pppppppplVar7 = local_1b8[0];
        if (((uVar14 & 0xff00000000000000) == 0x2d00000000000000) && ((uVar14 & 0xffffffffff) != 0))
        {
          FUN_7103299d20((uint *)&local_178,*(long *)(lVar19 + 0x188),uVar14);
          FUN_71003a4ca0((uint *)&local_b0,"tit_series_snd_%s",&local_170,uVar14,param_4,param_5,
                         param_6,param_7,param_8);
          ppppppppplVar9 = local_a8;
        }
        else {
          ppppppppplVar9 = local_a8;
          local_a8[0] = (long ********)((ulong)local_a8[0] & 0xffffffffffffff00);
          local_b0 = (undefined **)0x811c9dc5;
        }
        goto LAB_7101d7a630;
      }
      if (((uVar16 & 0xff00000000000000) == 0x2d00000000000000) &&
         (((uVar16 & 0xffffffffff) != 0 && (((uVar16 ^ uVar14) & 0xffffffffff) == 0))))
      goto LAB_7101d7a75c;
LAB_7101d7a6a0:
      FUN_7103776910(&local_d0,(long)&local_1c0,(long ****)"set_rep_ser_pic",param_3,param_4,param_5
                     ,param_6,param_7,param_8);
      ppppppppplVar9 = (long *********)&DAT_00000011;
      plVar5 = FUN_710323f600((long *)param_1[0x46],uVar14,(long ****)&DAT_00000011,param_4,param_5,
                              param_6,param_7,param_8);
      FUN_7103778b80(local_c8,(long)plVar5,ppppppppplVar9,param_4,param_5,param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,(long)local_1b8[0],0x710435bb2c);
      lVar18 = *(long *)(lVar19 + 0x188);
      uVar3 = FUN_710329acf0(lVar18,uVar14);
      pbVar13 = (byte *)"mnu_sound_test_series_last";
      if ((uVar3 & 1) == 0) {
        pbVar13 = (byte *)"mnu_sound_test_series_album_nam";
      }
      if (((uVar14 & 0xff00000000000000) == 0x2d00000000000000) && ((uVar14 & 0xffffffffff) != 0)) {
        FUN_7103299d20((uint *)&local_178,lVar18,uVar14);
        FUN_71003a4ca0((uint *)&local_b0,"tit_series_snd_%s",&local_170,uVar14,param_4,param_5,
                       param_6,param_7,param_8);
      }
      else {
        local_a8[0] = (long ********)((ulong)local_a8[0] & 0xffffffffffffff00);
        local_b0 = (undefined **)0x811c9dc5;
      }
      ppppppppplVar9 = local_a8;
      uVar10 = 1;
      FUN_710377a280((long)&local_c0,pbVar13,1);
      pppppppplVar7 = local_1b8[0];
      uVar14 = local_c8;
joined_r0x007101d7a844:
      local_c8 = 0;
      local_d0 = &PTR_FUN_710523d9a8;
      if (uVar14 != 0) {
        local_c8 = 0;
        local_d0 = &PTR_FUN_710523d9a8;
        FUN_710392eb40(uVar14);
      }
    }
    else {
      if ((uVar16 & 0xff00000000000000) == 0x2d00000000000000 && (uVar16 & 0xffffffffff) != 0)
      goto LAB_7101d7a648;
LAB_7101d7a5ac:
      uVar3 = 0x811c9dc5;
      FUN_7103778300(0x3f800000,(long)local_1b8[0],0x710433a4b8);
      local_170 = (long ********)0x697265735f746974;
      ppppppppplVar9 = (long *********)&local_170;
      local_168 = 0x615f646e735f7365;
      local_160 = CONCAT53(local_160._3_5_,0x6c6c);
      uVar15 = 0x74;
      pbVar13 = (byte *)((long)&local_170 + 1);
      do {
        uVar3 = uVar3 * 0x89 ^ uVar15;
        uVar15 = (uint)*pbVar13;
        pbVar13 = pbVar13 + 1;
      } while (uVar15 != 0);
      local_178 = (undefined **)CONCAT44(0x12,uVar3);
      pppppppplVar7 = local_1b8[0];
LAB_7101d7a630:
      uVar10 = 1;
      FUN_710377a280((long)&local_c0,(byte *)"mnu_sound_test_series_album_nam",1);
    }
    FUN_7103776910(&local_178,lVar17,(long ****)"set_txt_song_n",uVar10,ppppppppplVar9,param_5,
                   param_6,param_7,param_8);
    if (uVar4 == 0) {
      FUN_710377a120((long)&local_178,"mnu_sound_test_series_song_none",uVar10,ppppppppplVar9,
                     param_5,param_6,param_7,param_8);
    }
    else {
      uVar10 = 1;
      ppppppppplVar9 = (long *********)(ulong)uVar4;
      FUN_710377a280((long)&local_178,(byte *)"mnu_sound_test_series_song_n",1);
    }
    FUN_7103776910(&local_b0,lVar17,(long ****)"set_song_time",uVar10,ppppppppplVar9,param_5,param_6
                   ,param_7,param_8);
    if (iVar20 == 0) {
      FUN_710377a120((long)&local_b0,"mnu_sound_test_series_song_time_none",uVar10,ppppppppplVar9,
                     param_5,param_6,param_7,param_8);
    }
    else {
      FUN_710377a280((long)&local_b0,(byte *)"mnu_sound_test_series_song_time",3);
    }
    pppppppplVar2 = local_a8[0];
    local_b0 = &PTR_FUN_710523d9a8;
    local_a8[0] = (long ********)0x0;
    if (pppppppplVar2 != (long ********)0x0) {
      FUN_710392eb40((ulong)pppppppplVar2);
    }
    pppppppplVar2 = local_170;
    local_178 = &PTR_FUN_710523d9a8;
    local_170 = (long ********)0x0;
    if (pppppppplVar2 != (long ********)0x0) {
      FUN_710392eb40((ulong)pppppppplVar2);
    }
    pppppppplVar2 = local_b8;
    local_c0 = &PTR_FUN_710523d9a8;
    local_b8 = (long ********)0x0;
    if (pppppppplVar2 != (long ********)0x0) {
      FUN_710392eb40((ulong)pppppppplVar2);
    }
    local_1c0 = &PTR_FUN_710523d988;
    local_1b8[0] = (long ********)0x0;
    if (pppppppplVar7 == (long ********)0x0) {
      return;
    }
    ppppppplVar6 = pppppppplVar7[3];
    pppppppplVar7[2] = (long *******)&PTR_FUN_710523d9a8;
    pppppppplVar7[3] = (long *******)0x0;
    if (ppppppplVar6 != (long *******)0x0) {
      FUN_710392eb40((ulong)ppppppplVar6);
    }
    goto LAB_7101d7aba8;
  case 1:
    local_178 = (undefined **)0x0;
    local_170 = (long ********)((ulong)local_170 & 0xffffffffffff0000);
    uVar16 = (ulong)*(int *)((long)param_1 + 0x30c);
    lVar19 = *(long *)(*param_1 + 0x18);
    puVar12 = &local_170;
    uVar14 = (*(long *)(*param_1 + 0x20) - lVar19 >> 3) * 0x2e8ba2e8ba2e8ba3;
    uVar4 = 0;
    if (uVar16 <= uVar14 && uVar14 - uVar16 != 0) {
      if (&local_178 != (undefined8 *)(lVar19 + uVar16 * 0x58)) {
        FUN_7101796d70((uint *)&local_178,(ushort *)(lVar19 + uVar16 * 0x58 + 8));
      }
      lVar19 = lVar19 + uVar16 * 0x58;
      uVar4 = (int)((ulong)(*(long *)(lVar19 + 0x40) - *(long *)(lVar19 + 0x38)) >> 3) * -0x55555555
      ;
    }
    FUN_7103776910(&local_b0,lVar17,(long ****)"set_txt_playlist_name",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    uVar10 = 1;
    FUN_710377a280((long)&local_b0,(byte *)"mnu_sound_test_playlist_nam",1);
    FUN_7103776910(&local_1c0,lVar17,(long ****)"set_txt_song_n",uVar10,puVar12,param_5,param_6,
                   param_7,param_8);
    uVar10 = 1;
    uVar14 = (ulong)uVar4;
    FUN_710377a280((long)&local_1c0,(byte *)"mnu_sound_test_playlist_song_n",1);
    if (uVar4 == 0) {
      FUN_7103778300(0x3f800000,*(long *)(lVar18 + 0x10),0x71043adb95);
    }
    else {
      FUN_7103776910(&local_c0,lVar17,(long ****)"set_song_time",uVar10,uVar14,param_5,param_6,
                     param_7,param_8);
      FUN_710377a280((long)&local_c0,(byte *)"mnu_sound_test_playlist_sele_time_sum",3);
      FUN_7103778300(0x3f800000,*(long *)(lVar18 + 0x10),0x71042d6642);
      pppppppplVar7 = local_b8;
      local_c0 = &PTR_FUN_710523d9a8;
      local_b8 = (long ********)0x0;
      if (pppppppplVar7 != (long ********)0x0) {
        FUN_710392eb40((ulong)pppppppplVar7);
      }
    }
    pppppppplVar7 = local_1b8[0];
    local_1c0 = &PTR_FUN_710523d9a8;
    local_1b8[0] = (long ********)0x0;
    if (pppppppplVar7 != (long ********)0x0) {
      FUN_710392eb40((ulong)pppppppplVar7);
    }
    pppppppplVar7 = local_a8[0];
    local_b0 = &PTR_FUN_710523d9a8;
    local_a8[0] = (long ********)0x0;
    break;
  case 2:
    local_154 = 0;
    local_178 = (undefined **)0x0;
    local_170 = (long ********)&DAT_c1ffff0000000000;
    local_168 = 0x71ffff0000000000;
    local_160 = 0;
    local_150._0_1_ = 0;
    local_156 = '\0';
    local_158 = 0;
    lVar19 = *(long *)(*param_1 + 0x30);
    uVar14 = (*(long *)(*param_1 + 0x38) - lVar19 >> 3) * -0x70a3d70a3d70a3d7;
    uVar16 = (ulong)*(int *)((long)param_1 + 0x30c);
    if (uVar16 <= uVar14 && uVar14 - uVar16 != 0) {
      puVar12 = (undefined8 *)(lVar19 + uVar16 * 200);
      local_178 = (undefined **)*puVar12;
      local_170 = (long ********)puVar12[1];
      local_158 = *(undefined2 *)(puVar12 + 4);
      local_168 = puVar12[2];
      local_160 = puVar12[3];
      local_156 = *(char *)((long)puVar12 + 0x22);
      if (&local_178 != puVar12) {
        uVar14 = 0;
        while( true ) {
          pcVar8 = (char *)(lVar19 + uVar16 * 200 + 0x28 + uVar14);
          cVar1 = *pcVar8;
          if (cVar1 == '\0') break;
          *(char *)((long)&local_150 + uVar14) = cVar1;
          if (0x7e < (int)uVar14 + 1U) {
            uVar14 = (ulong)((int)uVar14 + 1);
            break;
          }
          cVar1 = pcVar8[1];
          if (cVar1 == '\0') {
            uVar14 = uVar14 + 1;
            break;
          }
          *(char *)((long)&local_150 + uVar14 + 1) = cVar1;
          uVar14 = uVar14 + 2;
        }
        *(undefined1 *)((long)&local_150 + (uVar14 & 0xffffffff)) = 0;
        local_154 = (undefined4)uVar14;
      }
    }
    if (local_158._1_1_ == '\0') {
      FUN_7103776910(&local_b0,lVar17,(long ****)"set_chara_icon",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      param_3 = (long *********)(ulong)(byte)local_158;
      param_4 = (byte ****)0x0;
      plVar5 = FUN_710323f330((long *)param_1[0x46],(ulong)local_170,(ulong)param_3,0,param_5,
                              param_6,param_7,param_8);
      FUN_7103778b80((long)local_a8[0],(long)plVar5,param_3,param_4,param_5,param_6,param_7,param_8)
      ;
      lVar18 = *(long *)(lVar18 + 0x10);
      pcVar8 = "mark_chara";
      pppppppplVar7 = local_a8[0];
    }
    else {
      FUN_7103776910(&local_b0,lVar17,(long ****)"set_mark",param_3,param_4,param_5,param_6,param_7,
                     param_8);
      plVar5 = FUN_710323f760((long *)param_1[0x46],local_168,(long ****)param_3,param_4,param_5,
                              param_6,param_7,param_8);
      FUN_7103778b80((long)local_a8[0],(long)plVar5,param_3,param_4,param_5,param_6,param_7,param_8)
      ;
      lVar18 = *(long *)(lVar18 + 0x10);
      pcVar8 = "mark_etc";
      pppppppplVar7 = local_a8[0];
    }
    FUN_7103778300(0x3f800000,lVar18,(long)pcVar8);
    local_b0 = &PTR_FUN_710523d9a8;
    local_a8[0] = (long ********)0x0;
    if (pppppppplVar7 != (long ********)0x0) {
      FUN_710392eb40((ulong)pppppppplVar7);
    }
    FUN_7103776910(&local_c0,lVar17,(long ****)"set_txt_charactor",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    pppppppplVar7 = local_170;
    if (local_156 == '\0') {
      lVar17 = *(long *)(DAT_710532f730 + 8);
      uVar4 = FUN_7103263540(*(long *)(lVar17 + 0x168),(ulong)local_170,(ulong)(byte)local_158,
                             param_4,param_5,param_6,param_7,param_8);
      FUN_7103262310((uint *)&local_b0,*(long *)(lVar17 + 0x168),(ulong)pppppppplVar7);
      param_3 = local_a8;
      FUN_71003a4ca0((uint *)&local_1c0,"nam_chr1_%02d_%s",(ulong)uVar4,param_3,param_4,param_5,
                     param_6,param_7,param_8);
      ppppppppplVar9 = local_1b8;
    }
    else {
      ppppppppplVar9 = (long *********)&local_150;
    }
    FUN_710377a120((long)&local_c0,(char *)ppppppppplVar9,param_3,param_4,param_5,param_6,param_7,
                   param_8);
    pppppppplVar7 = local_b8;
    local_c0 = &PTR_FUN_710523d9a8;
    local_b8 = (long ********)0x0;
    break;
  case 3:
    goto switchD_7101d7a24c_caseD_3;
  }
  if (pppppppplVar7 != (long ********)0x0) {
LAB_7101d7aba8:
    FUN_710392eb40((ulong)pppppppplVar7);
  }
switchD_7101d7a24c_caseD_3:
  return;
}

