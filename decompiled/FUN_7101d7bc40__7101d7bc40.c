// addr:      7101d7bc40
// offset:    0x1d7bc40
// name:      FUN_7101d7bc40
// mangled:   
// signature: undefined __cdecl FUN_7101d7bc40(long * param_1, int param_2, long param_3, ulong * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d7bc40(long *param_1,int param_2,long param_3,ulong *param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  char *pcVar11;
  undefined8 uVar12;
  ulong *puVar13;
  byte *pbVar14;
  uint uVar15;
  long *plVar16;
  undefined **local_158;
  ulong local_150;
  uint local_148;
  undefined4 local_144;
  byte local_140 [64];
  uint auStack_100 [2];
  char acStack_f8 [64];
  undefined **local_b8;
  undefined8 local_b0;
  undefined **local_70;
  ulong local_68;
  
  lVar10 = param_3;
  puVar13 = param_4;
  FUN_7103776640(&local_70,param_3,(byte ****)"set_parts_text_scroll",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  if (((int)param_1[8] == (int)param_1[6]) && (*(int *)((long)param_1 + 0x34) == param_2)) {
    bVar2 = *(int *)((long)param_1 + 0x2c) == 1;
    bVar3 = *(int *)((long)param_1 + 0x2c) == 2;
  }
  else {
    bVar2 = false;
    bVar3 = false;
  }
  uVar6 = (**(code **)(*param_1 + 0x70))(param_1);
  if ((uVar6 & 1) == 0) {
    bVar4 = false;
  }
  else {
    iVar5 = (**(code **)(*param_1 + 0x90))(param_1);
    bVar4 = iVar5 == param_2;
  }
  if ((bool)(bVar2 | bVar3)) {
    FUN_7103776640(&local_b8,param_3,(byte ****)"set_mark_playing_00",lVar10,puVar13,param_5,param_6
                   ,param_7,param_8);
    uVar9 = local_b0;
    if (bVar2) {
      FUN_7103778300(0x3f800000,local_b0,0x7104454e15);
    }
    else {
      FUN_7103778630(0,local_b0,0x7104454e15);
    }
    FUN_7103778300(0x3f800000,local_68,0x71043f115d);
    pcVar11 = "playing_select";
    if (!bVar4) {
      pcVar11 = "playing";
    }
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),(long)pcVar11);
    local_b8 = &PTR_FUN_710523d988;
    local_b0 = 0;
    uVar6 = local_68;
    if (uVar9 != 0) {
      uVar7 = *(ulong *)(uVar9 + 0x18);
      *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar9 + 0x18) = 0;
      if (uVar7 != 0) {
        FUN_710392eb40(uVar7);
      }
      FUN_710392eb40(uVar9);
    }
  }
  else {
    if (bVar4) {
      lVar10 = *(long *)(param_3 + 8);
      pcVar11 = "select_on";
    }
    else {
      iVar5 = (**(code **)(*param_1 + 0x90))(param_1);
      lVar10 = *(long *)(param_3 + 8);
      if (iVar5 == param_2) {
        pcVar11 = "select_keep";
      }
      else {
        pcVar11 = "select_off";
      }
    }
    FUN_7103778300(0x3f800000,lVar10,(long)pcVar11);
    FUN_7103778300(0x3f800000,local_68,(long)pcVar11);
    uVar6 = local_68;
  }
  plVar16 = (long *)(param_3 + 8);
  pcVar11 = "new_off";
  if ((char)param_4[2] != '\0') {
    pcVar11 = "new_on";
  }
  FUN_7103778300(0x3f800000,*plVar16,(long)pcVar11);
  if (((*(long *)(*plVar16 + 8) == 0) ||
      (plVar8 = (long *)FUN_71037964b0(*(long *)(*plVar16 + 8),0x710442268b), plVar8 == (long *)0x0)
      ) || (uVar9 = (**(code **)(*plVar8 + 0x138))(), (uVar9 & 1) != 0)) {
    pcVar11 = "onoff";
    if (*(char *)((long)param_1 + 0x45) != '\0') {
      iVar5 = (**(code **)(*param_1 + 0x90))(param_1);
      pcVar11 = "playlist_delite";
      if (iVar5 != param_2) {
        pcVar11 = "onoff";
      }
    }
    FUN_7103778300(0x3f800000,*plVar16,(long)pcVar11);
  }
  if (*(char *)((long)param_1 + 0x3c) == '\0') {
    pcVar11 = "order_change_off";
    if (*(char *)((long)param_1 + 0x3b) != '\0') {
      iVar5 = (**(code **)(*param_1 + 0x90))(param_1);
      pcVar11 = "order_change_on";
      if (iVar5 != param_2) {
        pcVar11 = "order_change_off";
      }
    }
    lVar10 = *plVar16;
  }
  else {
    iVar5 = (**(code **)(*param_1 + 0x90))(param_1);
    if (iVar5 != param_2) goto LAB_7101d7bf34;
    lVar10 = *plVar16;
    pcVar11 = "order_change_off";
  }
  FUN_7103778300(0x3f800000,lVar10,(long)pcVar11);
LAB_7101d7bf34:
  if (*(char *)((long)param_1 + 0x44) == '\0') {
    uVar7 = *param_4;
    FUN_71032570e0((uint *)&local_b8,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x278),uVar7);
    for (uVar9 = 0; *(byte *)((long)&local_b0 + uVar9) != 0; uVar9 = uVar9 + 2) {
      local_140[uVar9] = *(byte *)((long)&local_b0 + uVar9);
      if (0x3e < (int)uVar9 + 1U) {
        uVar9 = (ulong)((int)uVar9 + 1);
        break;
      }
      bVar1 = *(byte *)((long)&local_b0 + uVar9 + 1);
      if (bVar1 == 0) {
        uVar9 = uVar9 + 1;
        break;
      }
      local_140[uVar9 + 1] = bVar1;
    }
    local_148 = 0x811c9dc5;
    local_140[uVar9 & 0xffffffff] = 0;
    uVar15 = (uint)local_140[0];
    local_144 = (undefined4)uVar9;
    if (local_140[0] != 0) {
      pbVar14 = local_140;
      do {
        pbVar14 = pbVar14 + 1;
        local_148 = local_148 * 0x89 ^ uVar15;
        uVar15 = (uint)*pbVar14;
      } while (uVar15 != 0);
    }
    FUN_71003a4ca0(auStack_100,"bgm_title_%s",local_140,uVar7,puVar13,param_5,param_6,param_7,
                   param_8);
    FUN_7103776910(&local_158,param_3,(long ****)"set_txt_detail_s_num_on",uVar7,puVar13,param_5,
                   param_6,param_7,param_8);
    uVar7 = (ulong)(param_2 + 1);
    uVar12 = 1;
    FUN_710377a280((long)&local_158,(byte *)"mnu_sound_test_series_detail_sonb_number",1);
    uVar9 = local_150;
    local_158 = &PTR_FUN_710523d9a8;
    local_150 = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_7101d85c90((long)&local_70,acStack_f8,uVar12,uVar7,param_5,param_6,param_7,param_8);
    if (*(int *)((long)param_4 + 0xc) == 3) {
      lVar10 = *plVar16;
      pcVar11 = "new_arrange";
    }
    else if (*(int *)((long)param_4 + 0xc) == 2) {
      lVar10 = *plVar16;
      pcVar11 = "arrange";
    }
    else {
      lVar10 = *plVar16;
      pcVar11 = "arrange_off";
    }
    FUN_7103778300(0x3f800000,lVar10,(long)pcVar11);
    FUN_7103776910(&local_158,param_3,(long ****)"set_txt_detail_song_time",uVar12,uVar7,param_5,
                   param_6,param_7,param_8);
    pbVar14 = (byte *)"mnu_sound_test_playlist_sele_time";
    if ((int)param_1[3] != 1) {
      pbVar14 = (byte *)"mnu_sound_test_series_detail_song_time";
    }
    FUN_710377a280((long)&local_158,pbVar14,1);
    uVar9 = local_150;
    local_158 = &PTR_FUN_710523d9a8;
    local_150 = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  local_70 = &PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar6 != 0) {
    uVar9 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar6);
  }
  return;
}

