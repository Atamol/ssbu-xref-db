// addr:      7101d82780
// offset:    0x1d82780
// name:      FUN_7101d82780
// mangled:   
// signature: undefined FUN_7101d82780(void)


void FUN_7101d82780(long param_1,int param_2,long param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined **ppuStack_a0;
  ulong uStack_98;
  undefined **ppuStack_90;
  ulong uStack_88;
  undefined **ppuStack_80;
  ulong uStack_78;
  undefined **ppuStack_70;
  ulong uStack_68;
  
  if (param_2 == 0) {
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x7104319286);
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x710425f810);
    return;
  }
  lVar16 = *(long *)(*(long *)(param_1 + 8) + 0x18);
  iVar2 = param_2 - (uint)(0 < param_2);
  uVar15 = (ulong)iVar2;
  uVar8 = (*(long *)(*(long *)(param_1 + 8) + 0x20) - lVar16 >> 3) * 0x2e8ba2e8ba2e8ba3;
  if (uVar8 < uVar15 || uVar8 - uVar15 == 0) {
LAB_7101d82bd8:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar16 = lVar16 + uVar15 * 0x58;
  uVar1 = (int)((ulong)(*(long *)(lVar16 + 0x40) - *(long *)(lVar16 + 0x38)) >> 3) * -0x55555555;
  FUN_7103776910(&ppuStack_70,param_3,(long ****)"set_txt_playlist_name",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  lVar7 = lVar16 + 8;
  uVar6 = 1;
  FUN_710377a280((long)&ppuStack_70,(byte *)"mnu_sound_test_playlist_nam",1);
  FUN_7103776640(&ppuStack_80,param_3,(byte ****)"set_txt_song_n_00",uVar6,lVar7,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&ppuStack_90,(long)&ppuStack_80,(long ****)"set_txt_help",uVar6,lVar7,param_5,
                 param_6,param_7,param_8);
  uVar6 = 1;
  uVar8 = (ulong)uVar1;
  FUN_710377a280((long)&ppuStack_90,(byte *)"mnu_sound_test_playlist_song_n",1);
  if ((int)uVar1 < 1) {
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x71043adb95);
  }
  else {
    FUN_7103776910(&ppuStack_a0,param_3,(long ****)"set_txt_playlist_time",uVar6,uVar8,param_5,
                   param_6,param_7,param_8);
    FUN_710377a280((long)&ppuStack_a0,(byte *)"mnu_sound_test_playlist_time",1);
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x71042d6642);
    uVar8 = uStack_98;
    ppuStack_a0 = &PTR_FUN_710523d9a8;
    uStack_98 = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
  }
  if (iVar2 < *(int *)(param_1 + 0x438)) {
    if (*(ulong *)(param_1 + 0x468) <= uVar15) goto LAB_7101d82bd8;
    uVar8 = uVar15 >> 6;
    uVar9 = 1L << (uVar15 & 0x3f);
    if ((*(ulong *)(*(long *)(param_1 + 0x460) + uVar8 * 8) & uVar9) == 0) {
      puVar10 = *(ulong **)(lVar16 + 0x38);
      puVar12 = *(ulong **)(lVar16 + 0x40);
      puVar11 = puVar10;
      if (puVar10 != puVar12) {
        uVar13 = *(ulong *)(param_1 + 0x2e0);
        bVar3 = (uVar13 & 0xffffffffff) == 0;
        bVar4 = (uVar13 & 0xff00000000000000) != 0xd900000000000000;
        do {
          uVar14 = *puVar10;
          puVar11 = puVar10;
          if ((uVar14 & 0xff00000000000000) == 0xd900000000000000 && (uVar14 & 0xffffffffff) != 0) {
            if ((!bVar4 && !bVar3) && (((uVar13 ^ uVar14) & 0xffffffffff) == 0)) break;
          }
          else if (bVar4 || bVar3) break;
          puVar10 = puVar10 + 3;
          puVar11 = puVar12;
        } while (puVar12 != puVar10);
      }
      if (*(ulong *)(param_1 + 0x450) <= uVar15) goto LAB_7101d82bdc;
      lVar16 = *(long *)(param_1 + 0x448);
      if (puVar12 == puVar11) {
        uVar13 = *(ulong *)(lVar16 + uVar8 * 8) & (uVar9 ^ 0xffffffffffffffff);
      }
      else {
        uVar13 = *(ulong *)(lVar16 + uVar8 * 8) | uVar9;
      }
      *(ulong *)(lVar16 + uVar8 * 8) = uVar13;
      if (*(ulong *)(param_1 + 0x468) <= uVar15) goto LAB_7101d82bd8;
      lVar16 = *(long *)(param_1 + 0x460);
      *(ulong *)(lVar16 + uVar8 * 8) = *(ulong *)(lVar16 + uVar8 * 8) | uVar9;
    }
    if (*(ulong *)(param_1 + 0x450) <= uVar15) {
LAB_7101d82bdc:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    lVar16 = *(long *)(param_3 + 8);
    pcVar5 = "added_off";
    if ((*(ulong *)(*(long *)(param_1 + 0x448) + uVar8 * 8) & uVar9) != 0) {
      pcVar5 = "added_on";
    }
  }
  else {
    lVar16 = *(long *)(param_3 + 8);
    pcVar5 = "added_off";
  }
  FUN_7103778300(0x3f800000,lVar16,(long)pcVar5);
  if ((*(char *)(param_1 + 0x444) == '\0') ||
     (*(int *)(*(long *)(param_1 + 0x430) + 0x2a4) != param_2)) {
    FUN_7103778760(*(long *)(param_3 + 8),0x710435bb41);
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x710435bb41);
  }
  FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x710430881f);
  uVar8 = uStack_88;
  ppuStack_90 = &PTR_FUN_710523d9a8;
  uStack_88 = 0;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  uVar8 = uStack_78;
  ppuStack_80 = &PTR_FUN_710523d988;
  uStack_78 = 0;
  if (uVar8 != 0) {
    uVar15 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
    FUN_710392eb40(uVar8);
  }
  uVar8 = uStack_68;
  ppuStack_70 = &PTR_FUN_710523d9a8;
  uStack_68 = 0;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  return;
}

