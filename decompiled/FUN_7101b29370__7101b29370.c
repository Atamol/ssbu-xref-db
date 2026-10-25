// addr:      7101b29370
// offset:    0x1b29370
// name:      FUN_7101b29370
// mangled:   
// signature: undefined __cdecl FUN_7101b29370(long param_1, int param_2, long param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b29370(long param_1,int param_2,long param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  long extraout_x1_02;
  long extraout_x1_03;
  long extraout_x1_04;
  long *********ppppppppplVar6;
  long ****pppplVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  byte bVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined **local_50;
  long *local_48;
  
  lVar16 = *(long *)(param_1 + 0x40);
  if (lVar16 == *(long *)(param_1 + 0x48)) {
    return;
  }
  uVar9 = (*(long *)(param_1 + 0x48) - lVar16 >> 5) * 0x4ec4ec4ec4ec4ec5;
  uVar17 = (ulong)param_2;
  if (uVar9 < uVar17 || uVar9 - uVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  uVar8 = *(uint *)(lVar16 + uVar17 * 0x1a0);
  if (uVar8 == 0) {
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x710436bec9);
  }
  else {
    lVar11 = param_3;
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x71043ad375);
    FUN_7103776910(&local_50,param_3,(long ****)"set_txt_00",lVar11,param_4,param_5,param_6,param_7,
                   param_8);
    param_4 = (byte ****)(lVar16 + uVar17 * 0x1a0 + 0x110);
    ppppppppplVar6 = (long *********)0x1;
    FUN_710377a280((long)&local_50,(byte *)"mnu_stgcreate_top_nam",1);
    plVar10 = local_48;
    local_50 = &PTR_FUN_710523d9a8;
    local_48 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar10);
    }
    FUN_7103776910(&local_50,param_3,(long ****)"set_rep_00",ppppppppplVar6,param_4,param_5,param_6,
                   param_7,param_8);
    plVar13 = (long *)(param_1 + 0x30);
    plVar14 = (long *)*plVar13;
    plVar10 = plVar13;
    if (plVar14 == (long *)0x0) {
LAB_7101b29488:
      lVar11 = *local_48;
      if (lVar11 != 0) {
        bVar12 = *(byte *)(lVar11 + 0x58) & 0xfe;
LAB_7101b2949c:
        *(byte *)(lVar11 + 0x58) = bVar12;
      }
    }
    else {
      do {
        if (*(uint *)(plVar14 + 4) >= uVar8) {
          plVar10 = plVar14;
        }
        plVar14 = (long *)plVar14[*(uint *)(plVar14 + 4) < uVar8];
      } while (plVar14 != (long *)0x0);
      if ((plVar10 == plVar13) || (uVar8 < *(uint *)(plVar10 + 4))) goto LAB_7101b29488;
      FUN_7103779480((long)&local_50,(long)(plVar10 + 5),ppppppppplVar6,param_4,param_5,param_6,
                     param_7,param_8);
      lVar11 = *local_48;
      if (lVar11 != 0) {
        bVar12 = *(byte *)(lVar11 + 0x58) | 1;
        goto LAB_7101b2949c;
      }
    }
    plVar10 = local_48;
    iVar2 = *(int *)(lVar16 + uVar17 * 0x1a0 + 0x134);
    if (iVar2 == 1) {
      lVar11 = *(long *)(param_3 + 8);
      pcVar5 = "preview_m";
    }
    else if (iVar2 == 2) {
      lVar11 = *(long *)(param_3 + 8);
      pcVar5 = "preview_l";
    }
    else {
      lVar11 = *(long *)(param_3 + 8);
      pcVar5 = "preview_s";
    }
    FUN_7103778300(0x3f800000,lVar11,(long)pcVar5);
    if (*(char *)(lVar16 + uVar17 * 0x1a0 + 0x156) == '\0') {
      pcVar5 = "hide_icon_limit";
    }
    else {
      pcVar5 = "show_icon_limit";
    }
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),(long)pcVar5);
    if (*(char *)(lVar16 + uVar17 * 0x1a0 + 0xc) == '\x01') {
      pcVar5 = "show_icon_share";
    }
    else {
      pcVar5 = "hide_icon_share";
    }
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),(long)pcVar5);
    local_50 = &PTR_FUN_710523d9a8;
    local_48 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar10);
    }
  }
  lVar16 = lVar16 + uVar17 * 0x1a0;
  pbVar1 = (byte *)(lVar16 + 0x198);
  bVar12 = *(byte *)(lVar16 + 0x198);
  uVar8 = (uint)bVar12;
  if (((bVar12 & 1) != 0) && (*(char *)(param_1 + 0x58) != '\0')) {
    if (param_1 + 0x78 != param_3) {
      **(undefined8 **)(param_1 + 0x80) = **(undefined8 **)(param_3 + 8);
      *(undefined8 *)(*(long *)(param_1 + 0x80) + 8) = *(undefined8 *)(*(long *)(param_3 + 8) + 8);
      lVar11 = *(long *)(param_3 + 8);
      lVar16 = *(long *)(param_1 + 0x80);
      if (lVar16 != lVar11) {
        **(undefined8 **)(lVar16 + 0x18) = **(undefined8 **)(lVar11 + 0x18);
        *(undefined8 *)(*(long *)(lVar16 + 0x18) + 8) =
             *(undefined8 *)(*(long *)(lVar11 + 0x18) + 8);
        *(undefined8 *)(*(long *)(lVar16 + 0x18) + 0x10) =
             *(undefined8 *)(*(long *)(lVar11 + 0x18) + 0x10);
        *(undefined8 *)(*(long *)(lVar16 + 0x18) + 0x18) =
             *(undefined8 *)(*(long *)(lVar11 + 0x18) + 0x18);
      }
    }
    pppplVar7 = (long ****)(ulong)*(uint *)(param_1 + 0x5c);
    FUN_7103776910(&local_50,param_3,(long ****)"set_medal_attach_%02d",pppplVar7,param_4,param_5,
                   param_6,param_7,param_8);
    plVar10 = local_48;
    lVar16 = extraout_x1;
    if (((*local_48 != 0) && (lVar16 = **(long **)(param_1 + 0x70), lVar16 != 0)) &&
       (*(long *)(lVar16 + 0x18) != 0)) {
      FUN_7100058290(*(long *)(lVar16 + 0x18),lVar16);
      FUN_7100058250(*plVar10,**(long **)(param_1 + 0x70));
      lVar16 = extraout_x1_00;
    }
    lVar11 = (long)(int)*(uint *)(param_1 + 0x5c);
    *(undefined1 *)(param_1 + 0x59) = 1;
    if (9 < *(uint *)(param_1 + 0x5c)) goto LAB_7101b29a40;
    lVar4 = *(long *)(*(long *)(param_1 + 0x110) + 8);
    lVar15 = lVar4 + lVar11 * 0x130;
    *(undefined1 *)(lVar15 + 0x11b) = 1;
    bVar3 = false;
    if (((*(char *)(lVar15 + 0x118) != '\0') &&
        (bVar3 = false, *(char *)(lVar4 + lVar11 * 0x130 + 0x119) != '\0')) &&
       (bVar3 = false, *(char *)(lVar4 + lVar11 * 0x130 + 0x11a) != '\0')) {
      bVar3 = *(char *)(lVar4 + lVar11 * 0x130 + 0x11c) != '\0';
    }
    lVar11 = *(long *)(*(long *)(lVar4 + lVar11 * 0x130 + 0x28) + 8);
    if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x18), lVar11 != 0)) {
      *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe | bVar3;
    }
    FUN_71032ce230(lVar4,lVar16,pppplVar7,param_4,param_5,param_6,param_7,param_8);
    local_50 = &PTR_FUN_710523d9a8;
    local_48 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar10);
    }
    uVar8 = (uint)*pbVar1;
  }
  if (((uVar8 >> 1 & 1) != 0) && (*(char *)(param_1 + 0x88) != '\0')) {
    if (param_1 + 0xa8 != param_3) {
      **(undefined8 **)(param_1 + 0xb0) = **(undefined8 **)(param_3 + 8);
      *(undefined8 *)(*(long *)(param_1 + 0xb0) + 8) = *(undefined8 *)(*(long *)(param_3 + 8) + 8);
      lVar11 = *(long *)(param_3 + 8);
      lVar16 = *(long *)(param_1 + 0xb0);
      if (lVar16 != lVar11) {
        **(undefined8 **)(lVar16 + 0x18) = **(undefined8 **)(lVar11 + 0x18);
        *(undefined8 *)(*(long *)(lVar16 + 0x18) + 8) =
             *(undefined8 *)(*(long *)(lVar11 + 0x18) + 8);
        *(undefined8 *)(*(long *)(lVar16 + 0x18) + 0x10) =
             *(undefined8 *)(*(long *)(lVar11 + 0x18) + 0x10);
        *(undefined8 *)(*(long *)(lVar16 + 0x18) + 0x18) =
             *(undefined8 *)(*(long *)(lVar11 + 0x18) + 0x18);
      }
    }
    pppplVar7 = (long ****)(ulong)*(uint *)(param_1 + 0x8c);
    FUN_7103776910(&local_50,param_3,(long ****)"set_medal_attach_%02d",pppplVar7,param_4,param_5,
                   param_6,param_7,param_8);
    plVar10 = local_48;
    lVar16 = extraout_x1_01;
    if (((*local_48 != 0) && (lVar16 = **(long **)(param_1 + 0xa0), lVar16 != 0)) &&
       (*(long *)(lVar16 + 0x18) != 0)) {
      FUN_7100058290(*(long *)(lVar16 + 0x18),lVar16);
      FUN_7100058250(*plVar10,**(long **)(param_1 + 0xa0));
      lVar16 = extraout_x1_02;
    }
    lVar11 = (long)(int)*(uint *)(param_1 + 0x8c);
    *(undefined1 *)(param_1 + 0x89) = 1;
    if (9 < *(uint *)(param_1 + 0x8c)) goto LAB_7101b29a40;
    lVar4 = *(long *)(*(long *)(param_1 + 0x110) + 8);
    lVar15 = lVar4 + lVar11 * 0x130;
    *(undefined1 *)(lVar15 + 0x11b) = 1;
    bVar12 = 0;
    if (((*(char *)(lVar15 + 0x118) != '\0') &&
        (bVar12 = 0, *(char *)(lVar4 + lVar11 * 0x130 + 0x119) != '\0')) &&
       (bVar12 = 0, *(char *)(lVar4 + lVar11 * 0x130 + 0x11a) != '\0')) {
      bVar12 = *(byte *)(lVar4 + lVar11 * 0x130 + 0x11c);
    }
    lVar11 = *(long *)(*(long *)(lVar4 + lVar11 * 0x130 + 0x28) + 8);
    if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x18), lVar11 != 0)) {
      *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe | bVar12;
    }
    FUN_71032ce230(lVar4,lVar16,pppplVar7,param_4,param_5,param_6,param_7,param_8);
    local_50 = &PTR_FUN_710523d9a8;
    local_48 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar10);
    }
    uVar8 = (uint)*pbVar1;
  }
  if (((uVar8 >> 2 & 1) != 0) && (*(char *)(param_1 + 0xb8) != '\0')) {
    if (param_1 + 0xd8 != param_3) {
      **(undefined8 **)(param_1 + 0xe0) = **(undefined8 **)(param_3 + 8);
      *(undefined8 *)(*(long *)(param_1 + 0xe0) + 8) = *(undefined8 *)(*(long *)(param_3 + 8) + 8);
      lVar11 = *(long *)(param_3 + 8);
      lVar16 = *(long *)(param_1 + 0xe0);
      if (lVar16 != lVar11) {
        **(undefined8 **)(lVar16 + 0x18) = **(undefined8 **)(lVar11 + 0x18);
        *(undefined8 *)(*(long *)(lVar16 + 0x18) + 8) =
             *(undefined8 *)(*(long *)(lVar11 + 0x18) + 8);
        *(undefined8 *)(*(long *)(lVar16 + 0x18) + 0x10) =
             *(undefined8 *)(*(long *)(lVar11 + 0x18) + 0x10);
        *(undefined8 *)(*(long *)(lVar16 + 0x18) + 0x18) =
             *(undefined8 *)(*(long *)(lVar11 + 0x18) + 0x18);
      }
    }
    pppplVar7 = (long ****)(ulong)*(uint *)(param_1 + 0xbc);
    FUN_7103776910(&local_50,param_3,(long ****)"set_medal_attach_%02d",pppplVar7,param_4,param_5,
                   param_6,param_7,param_8);
    plVar10 = local_48;
    lVar16 = extraout_x1_03;
    if (((*local_48 != 0) && (lVar16 = **(long **)(param_1 + 0xd0), lVar16 != 0)) &&
       (*(long *)(lVar16 + 0x18) != 0)) {
      FUN_7100058290(*(long *)(lVar16 + 0x18),lVar16);
      FUN_7100058250(*plVar10,**(long **)(param_1 + 0xd0));
      lVar16 = extraout_x1_04;
    }
    lVar11 = (long)(int)*(uint *)(param_1 + 0xbc);
    *(undefined1 *)(param_1 + 0xb9) = 1;
    if (9 < *(uint *)(param_1 + 0xbc)) {
LAB_7101b29a40:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0x110) + 8);
    lVar15 = lVar4 + lVar11 * 0x130;
    *(undefined1 *)(lVar15 + 0x11b) = 1;
    bVar12 = 0;
    if (((*(char *)(lVar15 + 0x118) != '\0') &&
        (bVar12 = 0, *(char *)(lVar4 + lVar11 * 0x130 + 0x119) != '\0')) &&
       (bVar12 = 0, *(char *)(lVar4 + lVar11 * 0x130 + 0x11a) != '\0')) {
      bVar12 = *(byte *)(lVar4 + lVar11 * 0x130 + 0x11c);
    }
    lVar11 = *(long *)(*(long *)(lVar4 + lVar11 * 0x130 + 0x28) + 8);
    if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x18), lVar11 != 0)) {
      *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe | bVar12;
    }
    FUN_71032ce230(lVar4,lVar16,pppplVar7,param_4,param_5,param_6,param_7,param_8);
    local_50 = &PTR_FUN_710523d9a8;
    local_48 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar10);
    }
  }
  return;
}

