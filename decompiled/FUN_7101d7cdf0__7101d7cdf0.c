// addr:      7101d7cdf0
// offset:    0x1d7cdf0
// name:      FUN_7101d7cdf0
// mangled:   
// signature: undefined FUN_7101d7cdf0(void)


void FUN_7101d7cdf0(long *param_1,int param_2,long param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte ****ppppbVar1;
  long ****pppplVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  char *pcVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined **ppuStack_a0;
  ulong uStack_98;
  undefined **ppuStack_90;
  ulong uStack_88;
  undefined **ppuStack_80;
  ulong uStack_78;
  undefined **ppuStack_70;
  ulong uStack_68;
  
  lVar13 = *(long *)(param_1[2] + 0x18);
  uVar10 = (*(long *)(param_1[2] + 0x20) - lVar13 >> 3) * 0x2e8ba2e8ba2e8ba3;
  uVar14 = (ulong)param_2;
  if (uVar10 < uVar14 || uVar10 - uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar11 = lVar13 + uVar14 * 0x58;
  lVar12 = *(long *)(lVar11 + 0x38);
  lVar11 = *(long *)(lVar11 + 0x40);
  lVar8 = param_3;
  pcVar7 = "onoff";
  if (*(char *)((long)param_1 + 0x3d) != '\0') {
    iVar5 = (**(code **)(*param_1 + 0x90))(param_1);
    pcVar7 = "playlist_delite";
    if (iVar5 != param_2) {
      pcVar7 = "onoff";
    }
  }
  if (*(char *)((long)param_1 + 0x3b) == '\0') {
    bVar4 = false;
  }
  else {
    iVar5 = (**(code **)(*param_1 + 0x90))(param_1);
    bVar4 = iVar5 == param_2;
  }
  uVar3 = (int)((ulong)(lVar11 - lVar12) >> 3) * -0x55555555;
  lVar12 = *(long *)(param_3 + 8);
  if ((*(long *)(lVar12 + 8) == 0) ||
     (plVar6 = (long *)FUN_71037964b0(*(long *)(lVar12 + 8),0x710442268b), plVar6 == (long *)0x0)) {
LAB_7101d7cef8:
    FUN_7103778300(0x3f800000,lVar12,(long)pcVar7);
  }
  else {
    uVar10 = (**(code **)(*plVar6 + 0x138))();
    if ((uVar10 & 1) != 0) {
      lVar12 = *(long *)(param_3 + 8);
      goto LAB_7101d7cef8;
    }
  }
  if (*(char *)((long)param_1 + 0x3c) == '\0') {
    pcVar7 = "order_change_select";
    if (!bVar4) {
      pcVar7 = "order_change_off";
    }
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),(long)pcVar7);
joined_r0x007101d7cf64:
    if (bVar4) {
      bVar4 = true;
      pcVar7 = "set_txt_playlist_name_00";
      goto LAB_7101d7cf88;
    }
  }
  else {
    iVar5 = (**(code **)(*param_1 + 0x90))(param_1);
    if (iVar5 != param_2) goto joined_r0x007101d7cf64;
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x710435bb1b);
  }
  bVar4 = false;
  pcVar7 = "set_txt_playlist_name";
LAB_7101d7cf88:
  FUN_7103776910(&ppuStack_70,param_3,(long ****)pcVar7,lVar8,param_4,param_5,param_6,param_7,
                 param_8);
  lVar13 = lVar13 + uVar14 * 0x58 + 8;
  uVar9 = 1;
  FUN_710377a280((long)&ppuStack_70,(byte *)"mnu_sound_test_playlist_nam",1);
  ppppbVar1 = (byte ****)"set_txt_song_n";
  if (!bVar4) {
    ppppbVar1 = (byte ****)"set_txt_song_n_00";
  }
  FUN_7103776640(&ppuStack_80,param_3,ppppbVar1,uVar9,lVar13,param_5,param_6,param_7,param_8);
  FUN_7103776910(&ppuStack_90,(long)&ppuStack_80,(long ****)"set_txt_help",uVar9,lVar13,param_5,
                 param_6,param_7,param_8);
  uVar9 = 1;
  uVar10 = (ulong)uVar3;
  FUN_710377a280((long)&ppuStack_90,(byte *)"mnu_sound_test_playlist_song_n",1);
  if ((int)uVar3 < 1) {
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x71043adb95);
  }
  else {
    pppplVar2 = (long ****)"set_txt_playlist_time_00";
    if (!bVar4) {
      pppplVar2 = (long ****)"set_txt_playlist_time";
    }
    FUN_7103776910(&ppuStack_a0,param_3,pppplVar2,uVar9,uVar10,param_5,param_6,param_7,param_8);
    FUN_710377a280((long)&ppuStack_a0,(byte *)"mnu_sound_test_playlist_time",1);
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x71042d6642);
    uVar10 = uStack_98;
    ppuStack_a0 = &PTR_FUN_710523d9a8;
    uStack_98 = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x710430881f);
  uVar10 = uStack_88;
  ppuStack_90 = &PTR_FUN_710523d9a8;
  uStack_88 = 0;
  if (uVar10 != 0) {
    FUN_710392eb40(uVar10);
  }
  uVar10 = uStack_78;
  ppuStack_80 = &PTR_FUN_710523d988;
  uStack_78 = 0;
  if (uVar10 != 0) {
    uVar14 = *(ulong *)(uVar10 + 0x18);
    *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar10 + 0x18) = 0;
    if (uVar14 != 0) {
      FUN_710392eb40(uVar14);
    }
    FUN_710392eb40(uVar10);
  }
  uVar10 = uStack_68;
  ppuStack_70 = &PTR_FUN_710523d9a8;
  uStack_68 = 0;
  if (uVar10 != 0) {
    FUN_710392eb40(uVar10);
  }
  return;
}

