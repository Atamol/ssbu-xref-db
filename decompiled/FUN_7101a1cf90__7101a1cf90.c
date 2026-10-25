// addr:      7101a1cf90
// offset:    0x1a1cf90
// name:      FUN_7101a1cf90
// mangled:   
// signature: undefined __cdecl FUN_7101a1cf90(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a1cf90(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  bool bVar2;
  undefined1 *puVar3;
  long *********ppppppppplVar4;
  long ******pppppplVar5;
  uint *puVar6;
  long ****pppplVar7;
  byte bVar8;
  long lVar9;
  ulong uVar10;
  long *******ppppppplVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long *****ppppplVar15;
  ulong uVar16;
  ulong uVar17;
  char *pcVar18;
  char *pcVar19;
  uint uVar20;
  long ********pppppppplVar21;
  long *********ppppppppplVar22;
  long lVar23;
  uint local_60 [2];
  uint local_58 [2];
  
  puVar6 = local_60;
  uVar20 = (uint)param_4;
  ppppppppplVar4 = param_3;
  pppplVar7 = param_5;
  FUN_7101a06920(*(long *)(param_2 + 8),(long)param_3,(long ****)param_3,param_4,param_5,param_6,
                 param_7,param_8);
  *(undefined4 *)(*(long *)(param_2 + 8) + 500) = 3;
  *(int *)(*(long *)(param_2 + 8) + 0x1f0) = *(int *)(*(long *)(param_2 + 8) + 0x150) + 1;
  FUN_7101a028b0(*(long *)(param_2 + 8),0,ppppppppplVar4,param_4,pppplVar7,param_6,param_7,param_8);
  local_58[0] = 0;
  lVar9 = *(long *)(param_2 + 8);
  *(undefined4 *)(lVar9 + 0x394) = 0;
  FUN_71019fd0b0(*(long *)(lVar9 + 0x5e8),local_58,(long ****)ppppppppplVar4,param_4,pppplVar7,
                 param_6,param_7,param_8);
  *(byte *)(*(long *)(param_2 + 8) + 0x6bd) = (byte)param_5 & 1;
  FUN_7103778760(*(long *)(*(long *)(*(long *)(param_2 + 8) + 0x5e8) + 0x10),0x710425ed91);
  iVar12 = 1;
  if (*(char *)(*(long *)(param_2 + 8) + 0x6bd) != '\0') {
    iVar12 = 2;
  }
  FUN_7101a01130(*(long *)(*(long *)(param_2 + 8) + 0x5e8),iVar12);
  FUN_7101a1f530(param_1,param_2,ppppppppplVar4,param_4,pppplVar7,param_6,param_7,param_8);
  if (*(char *)(*(long *)(param_2 + 8) + 0x6bd) == '\0') {
    iVar12 = *(int *)(*(long *)(param_2 + 8) + 0x150);
    *(bool *)((long)param_3[1][4] + 0x167) = iVar12 != -1;
    *(int *)(param_3[1] + 6) = iVar12;
    if ((*(uint *)(param_1 + 0x16c) | 2) == 0x1b) {
      lVar9 = *(long *)(param_2 + 8);
      if (((*(ulong *)(lVar9 + 0x200) & 0xff00000000000000) != 0xc100000000000000) ||
         ((*(ulong *)(lVar9 + 0x200) & 0xffffffffff) == 0)) {
        lVar23 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
        ppppppppplVar22 = *(long **********)(param_1 + 0xd90);
        puVar3 = FUN_71032631a0(lVar23,0x11b1ccb807);
        uVar16 = (ulong)ppppppppplVar22 & 0xff00000000000000;
        uVar13 = (ulong)ppppppppplVar22 & 0xffffffffff;
        uVar10 = (ulong)puVar3 & 0xffffffffff;
        if (uVar16 == 0xc100000000000000) goto joined_r0x007101a1d16c;
        goto LAB_7101a1d194;
      }
      goto LAB_7101a1d254;
    }
    lVar9 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
    ppppppppplVar4 = (long *********)&DAT_c1ffff0000000000;
    puVar3 = FUN_71032631a0(lVar9,0x11b1ccb807);
    if ((((ulong)puVar3 & 0xff00000000000000) != 0xc100000000000000) ||
       (((ulong)puVar3 & 0xffffffffff) == 0)) {
      ppppppppplVar4 = (long *********)FUN_7103263030(lVar9,0xc1ffff0000000000);
    }
    lVar9 = *(long *)(param_2 + 8);
    ppppppppplVar22 = (long *********)&DAT_c1ffff0000000000;
LAB_7101a1d24c:
    param_4 = (byte ****)0x0;
    FUN_7101a029b0(lVar9,(undefined1 *)ppppppppplVar22,ppppppppplVar4,0,pppplVar7,param_6,param_7,
                   param_8);
  }
  else {
    *(undefined1 *)((long)param_3[1][4] + 0x167) = 0;
    *(undefined4 *)(param_3[1] + 6) = 0xffffffff;
    lVar9 = *(long *)(param_2 + 8);
    if ((*(ulong *)(lVar9 + 0x200) >> 0x38 != 0xc1) ||
       ((*(ulong *)(lVar9 + 0x200) & 0xffffffffff) == 0)) {
      lVar23 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
      ppppppppplVar22 = *(long **********)(param_1 + 0xd90);
      puVar3 = FUN_71032631a0(lVar23,0x11b1ccb807);
      uVar16 = (ulong)ppppppppplVar22 & 0xff00000000000000;
      uVar13 = (ulong)ppppppppplVar22 & 0xffffffffff;
      uVar10 = (ulong)puVar3 & 0xffffffffff;
      if (uVar16 == 0xc100000000000000) {
joined_r0x007101a1d16c:
        if (uVar13 == 0) goto LAB_7101a1d194;
        uVar17 = (ulong)puVar3 & 0xff00000000000000;
        if ((uVar17 != 0xc100000000000000) || (uVar10 == 0)) goto LAB_7101a1d198;
        ppppppppplVar4 = ppppppppplVar22;
        if ((((ulong)puVar3 ^ (ulong)ppppppppplVar22) & 0xffffffffff) != 0) goto LAB_7101a1d24c;
      }
      else {
LAB_7101a1d194:
        uVar17 = (ulong)puVar3 & 0xff00000000000000;
LAB_7101a1d198:
        ppppppppplVar4 = ppppppppplVar22;
        if ((uVar10 != 0 && uVar17 == 0xc100000000000000) !=
            (uVar16 == 0xc100000000000000 && uVar13 != 0)) goto LAB_7101a1d24c;
      }
      ppppppppplVar4 = (long *********)FUN_7103263030(lVar23,(ulong)ppppppppplVar22);
      goto LAB_7101a1d24c;
    }
  }
LAB_7101a1d254:
  if (*(int *)(param_1 + 0x16c) == 7) {
    if ((*(char *)(param_1 + 0xf8c) == '\0') ||
       (lVar9 = *(long *)(param_2 + 8), *(int *)(lVar9 + 0x150) != 0)) goto LAB_7101a1d394;
    if ((ulong)(*(long *)(param_1 + 600) - *(long *)(param_1 + 0x250) >> 4) < 2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    lVar14 = *(long *)(*(long *)(param_1 + 0x250) + 0x18);
    puVar6 = (uint *)(lVar14 + 0x394);
    lVar23 = *(long *)(lVar9 + 0x5e8);
    *(undefined4 *)(lVar9 + 0x394) = *(undefined4 *)(lVar14 + 0x394);
  }
  else {
    lVar9 = *(long *)(param_2 + 8);
    uVar1 = *(uint *)(lVar9 + 0x150);
    if (uVar1 < 8) {
      pcVar18 = (char *)*DAT_7105314510;
      local_60[0] = *(uint *)(*(long *)**(undefined8 **)(pcVar18 + 0x228) + (long)(int)uVar1 * 4);
      if (local_60[0] == 0xffffffff) goto LAB_7101a1d32c;
      if (local_60[0] != 0) {
        pcVar19 = &DAT_7105314518;
        if ((local_60[0] < 0x3d) && (*pcVar18 == '\0')) {
          pcVar19 = (char *)(*(long *)**(undefined8 **)(pcVar18 + 0x58) +
                            (ulong)local_60[0] * 0xf7d8);
        }
        if (*pcVar19 != '\0') goto LAB_7101a1d32c;
        *(undefined4 *)(*(long *)**(undefined8 **)(pcVar18 + 0x228) + (long)(int)uVar1 * 4) = 0;
        lVar9 = *(long *)(param_2 + 8);
        local_60[0] = 0;
      }
    }
    else {
      local_60[0] = 0xffffffff;
LAB_7101a1d32c:
      if (*(int *)(param_1 + 0x16c) != 7) {
        for (lVar23 = *(long *)(param_1 + 0x250); lVar23 != *(long *)(param_1 + 600);
            lVar23 = lVar23 + 0x10) {
          lVar14 = *(long *)(lVar23 + 8);
          if ((((*(uint *)(lVar14 + 0x150) != uVar1) && (*(int *)(lVar14 + 0x5d0) != 0)) &&
              (*(int *)(lVar14 + 0x1f8) == 0)) && (*(uint *)(lVar14 + 0x394) == local_60[0]))
          goto LAB_7101a1d394;
        }
      }
    }
    lVar23 = *(long *)(lVar9 + 0x5e8);
    *(uint *)(lVar9 + 0x394) = local_60[0];
  }
  FUN_71019fd0b0(lVar23,puVar6,(long ****)ppppppppplVar4,param_4,pppplVar7,param_6,param_7,param_8);
LAB_7101a1d394:
  lVar9 = *(long *)(param_2 + 8);
  if (*(char *)(lVar9 + 0x6bb) == '\0') {
    uVar16 = 0xffffffff;
  }
  else {
    uVar16 = (ulong)*(uint *)(lVar9 + 0x1fc);
  }
  FUN_71032d2e70((long)param_3[1][4],*(int *)(param_3[1] + 5),(ulong)*(uint *)(lVar9 + 0x1f8),uVar16
                 ,pppplVar7,param_6,param_7,param_8);
  ppppppplVar11 = param_3[1][4];
  ppppplVar15 = ppppppplVar11[0x20][7];
  if (ppppplVar15 != (long *****)0x0) {
    *(byte *)(ppppplVar15 + 0xb) = *(byte *)(ppppplVar15 + 0xb) | 1;
  }
  *(undefined1 *)((long)ppppppplVar11 + 0x163) = 1;
  pppppppplVar21 = param_3[1];
  *(undefined1 *)((long)pppppppplVar21 + 0x36) = 1;
  if (*(char *)((long)pppppppplVar21 + 0x35) == '\0') {
    bVar2 = false;
  }
  else {
    bVar2 = *(char *)((long)pppppppplVar21 + 0x37) == '\0';
  }
  ppppppplVar11 = pppppppplVar21[4];
  pppppplVar5 = ppppppplVar11[0x20];
  (*(code *)(*pppppplVar5)[0xc])(pppppplVar5,bVar2);
  *(bool *)((long)ppppppplVar11 + 0x162) = bVar2;
  bVar8 = 0;
  if ((*(char *)((long)pppppppplVar21 + 0x35) != '\0') &&
     (bVar8 = 0, *(char *)((long)pppppppplVar21 + 0x36) != '\0')) {
    bVar8 = *(byte *)((long)pppppppplVar21 + 0x37) ^ 1;
  }
  ppppppplVar11 = pppppppplVar21[4];
  ppppplVar15 = ppppppplVar11[0x20][7];
  if (ppppplVar15 != (long *****)0x0) {
    *(byte *)(ppppplVar15 + 0xb) = *(byte *)(ppppplVar15 + 0xb) & 0xfe | bVar8;
  }
  *(byte *)((long)ppppppplVar11 + 0x163) = bVar8;
  lVar9 = *(long *)(param_2 + 8);
  *(undefined4 *)(lVar9 + 0x5d0) = 1;
  if ((*(char *)(lVar9 + 0x6b9) != '\0') || (*(int *)(lVar9 + 0x1f8) != 0)) {
    uVar20 = *(long *)(lVar9 + 0x678) != 0 & uVar20;
  }
  FUN_71019fff00(*(long *)(lVar9 + 0x5e8),1,(ulong)(uVar20 & 1),uVar16,pppplVar7,param_6,param_7,
                 param_8);
  *(undefined1 *)(*(long *)(param_2 + 8) + 0x6ba) = 1;
  return;
}

