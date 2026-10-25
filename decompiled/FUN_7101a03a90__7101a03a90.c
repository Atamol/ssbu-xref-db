// addr:      7101a03a90
// offset:    0x1a03a90
// name:      FUN_7101a03a90
// mangled:   
// signature: undefined __cdecl FUN_7101a03a90(long param_1, undefined8 * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a03a90(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  ushort uVar2;
  ulong uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *********ppppppppplVar9;
  byte ****ppppbVar10;
  long ****pppplVar11;
  undefined8 uVar12;
  uint uVar13;
  long *plVar14;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  char *pcVar18;
  long lVar19;
  float fVar20;
  undefined **local_50;
  ulong local_48;
  ushort local_34 [2];
  
  FUN_71016b6a10((undefined8 *)(param_1 + 0x1f0),param_2);
  lVar17 = *(long *)(DAT_710532f730 + 8);
  bVar4 = FUN_71032652a0(lVar17 + 0x160,*(ulong *)(param_1 + 0x200));
  *(bool *)(param_1 + 0x6be) = bVar4;
  puVar15 = *(undefined1 **)(param_1 + 0x200);
  uVar5 = FUN_7103263a30(*(long *)(lVar17 + 0x168),(ulong)puVar15);
  uVar13 = *(uint *)(param_1 + 0x1f8);
  *(bool *)(param_1 + 0x6bf) = ((uVar5 ^ 0xffffffff) & 10) == 0;
  if (uVar13 == 2) {
    *(undefined1 *)(param_1 + 0x6be) = 0;
    uVar5 = FUN_71032632a0(*(long *)(lVar17 + 0x168),*(ulong *)(param_1 + 0x360));
    iVar6 = 0;
    if ((uVar5 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x6c2) = 1;
    }
  }
  else if ((uVar13 & 0xfffffffe) == 2) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_7101a0d0d0(DAT_7105324ae8,puVar15);
    uVar13 = *(uint *)(param_1 + 0x1f8);
  }
  FUN_7101a000c0(*(long *)(param_1 + 0x5e8),uVar13,(long ****)(ulong)*(uint *)(param_1 + 0x1fc),
                 (byte ****)(ulong)*(byte *)(param_1 + 0x6bb),param_5,param_6,param_7,param_8);
  ppppppppplVar9 = *(long **********)(param_1 + 0x208);
  uVar12 = 1;
  pppplVar11 = (long ****)(ulong)*(byte *)(param_1 + 0x6c2);
  FUN_71019fd290(*(undefined8 **)(param_1 + 0x5e8),*(undefined1 **)(param_1 + 0x200),ppppppppplVar9,
                 (byte ****)(ulong)*(byte *)(param_1 + 0x210),pppplVar11,1,param_7,param_8);
  lVar16 = *(long *)(param_1 + 0x5e8);
  ppppbVar10 = (byte ****)(ulong)*(byte *)(param_1 + 0x211);
  *(uint *)(lVar16 + 0x250) = (uint)*(byte *)(param_1 + 0x211);
  if (*(int *)(lVar16 + 0x21c) == 1) {
    FUN_710377a280(lVar16 + 0x88,(byte *)"mel_chara_select_lv_n",1);
    ppppppppplVar9 = (long *********)(ulong)*(uint *)(lVar16 + 0x250);
    FUN_7103778430(lVar16 + 0x68,"cp_level_%d",ppppppppplVar9,ppppbVar10,pppplVar11,uVar12,param_7,
                   param_8);
  }
  lVar16 = *(long *)(param_1 + 0x5e8);
  bVar1 = *(byte *)(param_1 + 0x2e0);
  *(uint *)(lVar16 + 0x254) = (uint)bVar1;
  if ((bVar1 == 0) || (*(int *)(lVar16 + 0x21c) != 2)) {
    FUN_7103778300(0x3f800000,*(long *)(lVar16 + 0x40),0x7104349d11);
    plVar14 = *(long **)(*(long *)(lVar16 + 0xa0) + 0x10);
    if (plVar14 != (long *)0x0) {
      ppppppppplVar9 = (long *********)0x0;
      ppppbVar10 = (byte ****)0x0;
      local_50 = (undefined **)((ulong)local_50 & 0xffffffff00000000);
      FUN_71037a2270(plVar14,(ushort *)&local_50,0,0);
    }
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(lVar16 + 0x40),0x7104307f02);
    ppppbVar10 = (byte ****)(ulong)*(uint *)(lVar16 + 0x254);
    ppppppppplVar9 = (long *********)0x1;
    FUN_710377a280(lVar16 + 0x98,(byte *)"mel_chara_select_fp_lv_n",1);
  }
  lVar16 = *(long *)(param_1 + 0x5e8);
  pcVar18 = "hd_on";
  if (*(char *)(lVar16 + 0x263) == '\0' || iVar6 == 0) {
    pcVar18 = "hd_off";
  }
  FUN_7103778300(0x3f800000,*(long *)(lVar16 + 0x10),(long)pcVar18);
  if (iVar6 < 7) {
    pcVar18 = (&PTR_s_hd_non_71050a8958)[iVar6];
  }
  else {
    pcVar18 = "hd_non";
  }
  FUN_7103776640(&local_50,lVar16 + 8,(byte ****)"set_lct_hd",ppppppppplVar9,ppppbVar10,pppplVar11,
                 uVar12,param_7,param_8);
  uVar3 = local_48;
  FUN_7103778300(0x3f800000,local_48,(long)pcVar18);
  local_50 = &PTR_FUN_710523d988;
  local_48 = 0;
  if (uVar3 != 0) {
    uVar8 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar3);
  }
  if (*(char *)(param_1 + 0x675) == '\x01') {
    uVar2 = *(ushort *)(param_1 + 0x214);
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0x212);
  }
  lVar19 = *(long *)(param_1 + 0x5e8);
  FUN_710377a310(lVar19 + 0xb8,1);
  lVar16 = *(long *)(DAT_710532f8c0 + 8);
  fVar20 = (float)FUN_71033112b0(0,lVar16,0xf1d09d008);
  uVar13 = (uint)fVar20;
  if ((int)(uint)uVar2 <= (int)uVar13) {
    uVar13 = (uint)uVar2;
  }
  uVar13 = FUN_71033114a0((float)(int)uVar13,*(float **)(lVar16 + 200),*(float **)(lVar16 + 0xd0));
  local_50._0_4_ = uVar13;
  FUN_710377a5b0(*(long *)(*(long *)(lVar19 + 0xc0) + 0x10),(char *)&local_50);
  uVar2 = *(ushort *)(param_1 + 0x216);
  lVar19 = *(long *)(param_1 + 0x5e8);
  FUN_710377a310(lVar19 + 200,1);
  lVar16 = *(long *)(DAT_710532f8c0 + 8);
  fVar20 = (float)FUN_71033112b0(0,lVar16,0xe7e193f84);
  uVar13 = (uint)fVar20;
  if ((int)uVar13 <= (int)(uint)uVar2) {
    uVar13 = (uint)uVar2;
  }
  uVar13 = FUN_71033115f0((float)(int)uVar13,*(float **)(lVar16 + 0xe0),*(float **)(lVar16 + 0xe8));
  local_50 = (undefined **)CONCAT44(local_50._4_4_,uVar13);
  FUN_710377a5b0(*(long *)(*(long *)(lVar19 + 0xd0) + 0x10),(char *)&local_50);
  ppppppppplVar9 = (long *********)(ulong)*(byte *)(param_1 + 0x370);
  FUN_71019fc090(*(undefined8 **)(param_1 + 0x5e8),(ushort *)(param_1 + 0x37e),ppppppppplVar9,
                 ppppbVar10,pppplVar11,uVar12,param_7,param_8);
  if (*(uint *)(param_1 + 0x1f8) < 2) {
    if (((*(char *)(param_1 + 0x6b4) != '\0') ||
        (bVar4 = FUN_7103265e70(lVar17 + 0x160,*(ulong *)(param_1 + 0x200)), !bVar4)) ||
       (*(char *)(param_1 + 0x6b9) == '\0')) goto LAB_7101a03e98;
    FUN_7103776910(&local_50,*(long *)(param_1 + 0x5e8) + 8,(long ****)"set_txt_chara_name",
                   ppppppppplVar9,ppppbVar10,pppplVar11,uVar12,param_7,param_8);
    uVar3 = local_48;
    if (*(long **)(local_48 + 0x10) != (long *)0x0) {
      ppppppppplVar9 = (long *********)&DAT_ffffffff;
      ppppbVar10 = (byte ****)0x1;
      FUN_71037a2270(*(long **)(local_48 + 0x10),(ushort *)(param_1 + 0x230),0xffffffff,1);
    }
    local_50 = &PTR_FUN_710523d9a8;
    local_48 = 0;
    if (uVar3 == 0) goto LAB_7101a03e98;
    FUN_710392eb40(uVar3);
    if (*(char *)(param_1 + 0x6b6) != '\0') goto LAB_7101a03ea0;
LAB_7101a03eac:
    uVar7 = 5;
  }
  else {
    if (*(uint *)(param_1 + 0x1f8) == 2) {
      lVar17 = *(long *)(param_1 + 0x5e8);
      plVar14 = *(long **)(*(long *)(lVar17 + 0x80) + 0x10);
      if (plVar14 != (long *)0x0) {
        ppppppppplVar9 = (long *********)&DAT_ffffffff;
        ppppbVar10 = (byte ****)0x1;
        FUN_71037a2270(plVar14,(ushort *)(param_1 + 0x2c0),0xffffffff,1);
        lVar17 = *(long *)(param_1 + 0x5e8);
      }
      FUN_7101a00df0(lVar17,*(undefined1 *)(param_1 + 0x2f8),ppppppppplVar9,ppppbVar10,pppplVar11,
                     uVar12,param_7,param_8);
    }
LAB_7101a03e98:
    if (*(char *)(param_1 + 0x6b6) == '\0') goto LAB_7101a03eac;
LAB_7101a03ea0:
    uVar7 = FUN_710327ac80(*(ulong *)(param_1 + 0x200));
  }
  *(undefined4 *)(param_1 + 0x69c) = uVar7;
  if (*(char *)(param_1 + 0x6b9) != '\0') goto LAB_7101a03f74;
  lVar17 = *(long *)(param_1 + 0x5e8);
  uVar7 = *(undefined4 *)(param_1 + 500);
  FUN_7103776910(&local_50,lVar17 + 8,(long ****)"set_txt_local_entry",ppppppppplVar9,ppppbVar10,
                 pppplVar11,uVar12,param_7,param_8);
  *(undefined4 *)(lVar17 + 0x218) = uVar7;
  switch(uVar7) {
  case 2:
    pcVar18 = "mel_chara_select_local_setting";
    break;
  case 3:
    pcVar18 = "mel_chara_select_local_sele_fighter";
    break;
  case 4:
    pcVar18 = "mel_chara_select_local_sele_stage";
    break;
  default:
    if (*(long **)(local_48 + 0x10) != (long *)0x0) {
      ppppbVar10 = (byte ****)0x0;
      local_34[0] = 0;
      local_34[1] = 0;
      FUN_71037a2270(*(long **)(local_48 + 0x10),local_34,0,0);
    }
    goto LAB_7101a03f54;
  case 0xd:
    pcVar18 = "mel_chara_select_local_check_rule";
  }
  FUN_710377a120((long)&local_50,pcVar18,ppppppppplVar9,ppppbVar10,pppplVar11,uVar12,param_7,param_8
                );
LAB_7101a03f54:
  uVar3 = local_48;
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  if (*(char *)(param_1 + 0x6b9) == '\0') {
    return;
  }
LAB_7101a03f74:
  FUN_71019e7fd0(*(long *)(param_1 + 0x5f8),*(undefined1 **)(param_1 + 0x200),
                 (long *********)(ulong)*(byte *)(param_1 + 0x210),ppppbVar10,pppplVar11,uVar12,
                 param_7,param_8);
  return;
}

