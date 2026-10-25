// addr:      7101c50320
// offset:    0x1c50320
// name:      FUN_7101c50320
// mangled:   
// signature: undefined __cdecl FUN_7101c50320(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101c50320(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  long *plVar8;
  byte bVar9;
  undefined8 uVar10;
  char *pcVar11;
  char cVar12;
  ulong uVar13;
  ulong uVar14;
  char cVar15;
  char *pcVar16;
  long lVar17;
  char *pcVar18;
  uint uVar19;
  long lVar20;
  long *plVar21;
  undefined **local_40;
  ulong local_38;
  
  if (*(int *)(param_1 + 0x2c4) == 0) {
    if ((((*(char *)(param_1 + 0xafe) == '\0') || ((*(byte *)(param_1 + 0xaf8) | 1) != 3)) ||
        (3 < *(int *)(param_1 + 0x2c0) - 5U)) || (*(int *)(param_1 + 0x2c0) - 7U < 5)) {
      bVar6 = false;
      if (*(char *)(param_1 + 0xafd) == '\0') goto LAB_7101c503c8;
LAB_7101c506bc:
      if (*(char *)(param_1 + 0xaf8) == '\x04') {
        bVar7 = *(char *)(param_1 + 0xafa) == '\0';
        goto joined_r0x007101c506d8;
      }
      bVar7 = false;
      if (bVar6) goto LAB_7101c503d0;
LAB_7101c506dc:
      if (bVar7) {
        param_3 = 4;
        goto LAB_7101c506e4;
      }
      lVar17 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar17 + 0x1a0) == 0) goto LAB_7101c506f0;
      FUN_71037780e0(&local_40,lVar17 + 0x28,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_40);
      uVar13 = local_38;
      *(undefined4 *)(lVar17 + 0x1a0) = 0;
      local_40 = &PTR_FUN_710523d9e8;
      local_38 = 0;
      if (uVar13 == 0) goto LAB_7101c506f0;
      FUN_710392eb40(uVar13);
      if (*(char *)(param_1 + 0xce6) != '\0') goto LAB_7101c506f8;
LAB_7101c50760:
      bVar6 = false;
      if (*(char *)(param_1 + 0xce5) != '\0') goto LAB_7101c50768;
LAB_7101c5073c:
      bVar7 = false;
joined_r0x007101c5073c:
      if (!bVar6) goto LAB_7101c50784;
LAB_7101c50740:
      param_3 = 3;
LAB_7101c50790:
      FUN_7101c76f30(param_1 + 0x448,1,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101c50798:
      if (*(char *)(param_1 + 0xece) == '\0') goto LAB_7101c50804;
LAB_7101c507a0:
      if ((((*(byte *)(param_1 + 0xec8) | 1) != 3) || (3 < *(int *)(param_1 + 0x2c0) - 5U)) ||
         (*(int *)(param_1 + 0x2c0) - 7U < 5)) goto LAB_7101c50804;
      bVar6 = *(char *)(param_1 + 0xeca) == '\0';
      if (*(char *)(param_1 + 0xecd) != '\0') goto LAB_7101c5080c;
LAB_7101c507e4:
      bVar7 = false;
joined_r0x007101c50824:
      if (bVar6) goto LAB_7101c507e8;
LAB_7101c50828:
      if (bVar7) {
        param_3 = 4;
        goto LAB_7101c50834;
      }
      lVar17 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar17 + 0x560) != 0) {
        FUN_71037780e0(&local_40,lVar17 + 1000,(long ****)"balloon_off",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377aee0(0x3f800000,(long)&local_40);
        uVar13 = local_38;
        *(undefined4 *)(lVar17 + 0x560) = 0;
        local_40 = &PTR_FUN_710523d9e8;
        local_38 = 0;
        if (uVar13 != 0) {
          FUN_710392eb40(uVar13);
        }
      }
    }
    else {
      bVar6 = *(char *)(param_1 + 0xafa) == '\0';
      if (*(char *)(param_1 + 0xafd) != '\0') goto LAB_7101c506bc;
LAB_7101c503c8:
      bVar7 = false;
joined_r0x007101c506d8:
      if (!bVar6) goto LAB_7101c506dc;
LAB_7101c503d0:
      param_3 = 3;
LAB_7101c506e4:
      FUN_7101c76f30(param_1 + 0x448,0,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101c506f0:
      if (*(char *)(param_1 + 0xce6) == '\0') goto LAB_7101c50760;
LAB_7101c506f8:
      if ((((*(byte *)(param_1 + 0xce0) | 1) != 3) || (3 < *(int *)(param_1 + 0x2c0) - 5U)) ||
         (*(int *)(param_1 + 0x2c0) - 7U < 5)) goto LAB_7101c50760;
      bVar6 = *(char *)(param_1 + 0xce2) == '\0';
      if (*(char *)(param_1 + 0xce5) == '\0') goto LAB_7101c5073c;
LAB_7101c50768:
      if (*(char *)(param_1 + 0xce0) == '\x04') {
        bVar7 = *(char *)(param_1 + 0xce2) == '\0';
        goto joined_r0x007101c5073c;
      }
      bVar7 = false;
      if (bVar6) goto LAB_7101c50740;
LAB_7101c50784:
      if (bVar7) {
        param_3 = 4;
        goto LAB_7101c50790;
      }
      lVar17 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar17 + 0x380) == 0) goto LAB_7101c50798;
      FUN_71037780e0(&local_40,lVar17 + 0x208,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_40);
      uVar13 = local_38;
      *(undefined4 *)(lVar17 + 0x380) = 0;
      local_40 = &PTR_FUN_710523d9e8;
      local_38 = 0;
      if (uVar13 == 0) goto LAB_7101c50798;
      FUN_710392eb40(uVar13);
      if (*(char *)(param_1 + 0xece) != '\0') goto LAB_7101c507a0;
LAB_7101c50804:
      bVar6 = false;
      if (*(char *)(param_1 + 0xecd) == '\0') goto LAB_7101c507e4;
LAB_7101c5080c:
      if (*(char *)(param_1 + 0xec8) == '\x04') {
        bVar7 = *(char *)(param_1 + 0xeca) == '\0';
        goto joined_r0x007101c50824;
      }
      bVar7 = false;
      if (!bVar6) goto LAB_7101c50828;
LAB_7101c507e8:
      param_3 = 3;
LAB_7101c50834:
      FUN_7101c76f30(param_1 + 0x448,2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    lVar17 = param_1 + 0x448;
    bVar6 = false;
    if (*(char *)(param_1 + 0x10b6) != '\0') {
      if ((*(byte *)(param_1 + 0x10b0) | 1) == 3) {
        bVar6 = false;
        if ((*(int *)(param_1 + 0x2c0) - 5U < 4) && (4 < *(int *)(param_1 + 0x2c0) - 7U)) {
          bVar6 = *(char *)(param_1 + 0x10b2) == '\0';
        }
      }
      else {
        bVar6 = false;
      }
    }
    bVar7 = false;
    if (*(char *)(param_1 + 0x10b5) == '\0') {
LAB_7101c508cc:
      if (bVar6) goto LAB_7101c508d0;
LAB_7101c508e4:
      if (bVar7) {
        param_3 = 4;
        goto LAB_7101c508f0;
      }
      lVar20 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar20 + 0x740) != 0) {
        FUN_71037780e0(&local_40,lVar20 + 0x5c8,(long ****)"balloon_off",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377aee0(0x3f800000,(long)&local_40);
        uVar13 = local_38;
        *(undefined4 *)(lVar20 + 0x740) = 0;
        local_40 = &PTR_FUN_710523d9e8;
        local_38 = 0;
        if (uVar13 != 0) {
          FUN_710392eb40(uVar13);
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x10b0) == '\x04') {
        bVar7 = *(char *)(param_1 + 0x10b2) == '\0';
        goto LAB_7101c508cc;
      }
      bVar7 = false;
      if (!bVar6) goto LAB_7101c508e4;
LAB_7101c508d0:
      param_3 = 3;
LAB_7101c508f0:
      FUN_7101c76f30(lVar17,3,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    bVar6 = false;
    if (*(char *)(param_1 + 0x129e) != '\0') {
      if ((*(byte *)(param_1 + 0x1298) | 1) == 3) {
        bVar6 = false;
        if ((*(int *)(param_1 + 0x2c0) - 5U < 4) && (4 < *(int *)(param_1 + 0x2c0) - 7U)) {
          bVar6 = *(char *)(param_1 + 0x129a) == '\0';
        }
      }
      else {
        bVar6 = false;
      }
    }
    bVar7 = false;
    if (*(char *)(param_1 + 0x129d) == '\0') {
LAB_7101c5097c:
      if (bVar6) goto LAB_7101c50980;
LAB_7101c50994:
      if (bVar7) {
        param_3 = 4;
        goto LAB_7101c509a0;
      }
      lVar20 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar20 + 0x920) != 0) {
        FUN_71037780e0(&local_40,lVar20 + 0x7a8,(long ****)"balloon_off",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377aee0(0x3f800000,(long)&local_40);
        uVar13 = local_38;
        *(undefined4 *)(lVar20 + 0x920) = 0;
        local_40 = &PTR_FUN_710523d9e8;
        local_38 = 0;
        if (uVar13 != 0) {
          FUN_710392eb40(uVar13);
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x1298) == '\x04') {
        bVar7 = *(char *)(param_1 + 0x129a) == '\0';
        goto LAB_7101c5097c;
      }
      bVar7 = false;
      if (!bVar6) goto LAB_7101c50994;
LAB_7101c50980:
      param_3 = 3;
LAB_7101c509a0:
      FUN_7101c76f30(lVar17,4,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    bVar6 = false;
    if (*(char *)(param_1 + 0x1486) != '\0') {
      if ((*(byte *)(param_1 + 0x1480) | 1) == 3) {
        bVar6 = false;
        if ((*(int *)(param_1 + 0x2c0) - 5U < 4) && (4 < *(int *)(param_1 + 0x2c0) - 7U)) {
          bVar6 = *(char *)(param_1 + 0x1482) == '\0';
        }
      }
      else {
        bVar6 = false;
      }
    }
    bVar7 = false;
    if (*(char *)(param_1 + 0x1485) == '\0') {
LAB_7101c50a2c:
      if (bVar6) goto LAB_7101c50a30;
LAB_7101c50a44:
      if (bVar7) {
        param_3 = 4;
        goto LAB_7101c50a50;
      }
      lVar20 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar20 + 0xb00) != 0) {
        FUN_71037780e0(&local_40,lVar20 + 0x988,(long ****)"balloon_off",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377aee0(0x3f800000,(long)&local_40);
        uVar13 = local_38;
        *(undefined4 *)(lVar20 + 0xb00) = 0;
        local_40 = &PTR_FUN_710523d9e8;
        local_38 = 0;
        if (uVar13 != 0) {
          FUN_710392eb40(uVar13);
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x1480) == '\x04') {
        bVar7 = *(char *)(param_1 + 0x1482) == '\0';
        goto LAB_7101c50a2c;
      }
      bVar7 = false;
      if (!bVar6) goto LAB_7101c50a44;
LAB_7101c50a30:
      param_3 = 3;
LAB_7101c50a50:
      FUN_7101c76f30(lVar17,5,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    bVar6 = false;
    if (*(char *)(param_1 + 0x166e) != '\0') {
      if ((*(byte *)(param_1 + 0x1668) | 1) == 3) {
        bVar6 = false;
        if ((*(int *)(param_1 + 0x2c0) - 5U < 4) && (4 < *(int *)(param_1 + 0x2c0) - 7U)) {
          bVar6 = *(char *)(param_1 + 0x166a) == '\0';
        }
      }
      else {
        bVar6 = false;
      }
    }
    bVar7 = false;
    if (*(char *)(param_1 + 0x166d) == '\0') {
LAB_7101c50adc:
      if (bVar6) goto LAB_7101c50ae0;
LAB_7101c50af4:
      if (bVar7) {
        param_3 = 4;
        goto LAB_7101c50b00;
      }
      lVar20 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar20 + 0xce0) != 0) {
        FUN_71037780e0(&local_40,lVar20 + 0xb68,(long ****)"balloon_off",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377aee0(0x3f800000,(long)&local_40);
        uVar13 = local_38;
        *(undefined4 *)(lVar20 + 0xce0) = 0;
        local_40 = &PTR_FUN_710523d9e8;
        local_38 = 0;
        if (uVar13 != 0) {
          FUN_710392eb40(uVar13);
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x1668) == '\x04') {
        bVar7 = *(char *)(param_1 + 0x166a) == '\0';
        goto LAB_7101c50adc;
      }
      bVar7 = false;
      if (!bVar6) goto LAB_7101c50af4;
LAB_7101c50ae0:
      param_3 = 3;
LAB_7101c50b00:
      FUN_7101c76f30(lVar17,6,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    bVar6 = false;
    if (*(char *)(param_1 + 0x1856) != '\0') {
      if ((*(byte *)(param_1 + 0x1850) | 1) == 3) {
        bVar6 = false;
        if ((*(int *)(param_1 + 0x2c0) - 5U < 4) && (4 < *(int *)(param_1 + 0x2c0) - 7U)) {
          bVar6 = *(char *)(param_1 + 0x1852) == '\0';
        }
      }
      else {
        bVar6 = false;
      }
    }
    bVar7 = false;
    if (*(char *)(param_1 + 0x1855) == '\0') {
LAB_7101c50b8c:
      if (bVar6) goto LAB_7101c50b90;
LAB_7101c50ba4:
      if (bVar7) {
        uVar10 = 4;
        goto LAB_7101c50bb0;
      }
      lVar17 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar17 + 0xec0) != 0) {
        FUN_71037780e0(&local_40,lVar17 + 0xd48,(long ****)"balloon_off",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377aee0(0x3f800000,(long)&local_40);
        uVar13 = local_38;
        *(undefined4 *)(lVar17 + 0xec0) = 0;
        local_40 = &PTR_FUN_710523d9e8;
        local_38 = 0;
        if (uVar13 != 0) {
          FUN_710392eb40(uVar13);
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x1850) == '\x04') {
        bVar7 = *(char *)(param_1 + 0x1852) == '\0';
        goto LAB_7101c50b8c;
      }
      bVar7 = false;
      if (!bVar6) goto LAB_7101c50ba4;
LAB_7101c50b90:
      uVar10 = 3;
LAB_7101c50bb0:
      FUN_7101c76f30(lVar17,7,uVar10,param_4,param_5,param_6,param_7,param_8);
    }
    FUN_7101c591b0(param_1,1,1,1);
    uVar13 = *(ulong *)(param_1 + 0x428);
    if ((uVar13 & 1) == 0) {
LAB_7101c50bd4:
      uVar19 = 0;
    }
    else {
      plVar21 = *(long **)(param_1 + 0x2f8);
      plVar8 = (long *)**(long **)(*plVar21 + 0x18);
      if (plVar8 == (long *)0x0) {
LAB_7101c50ea4:
        uVar13 = *(ulong *)(param_1 + 0x428);
      }
      else {
        uVar13 = (**(code **)(*plVar8 + 0x2f8))();
        if ((uVar13 & 1) != 0) {
          uVar13 = *(ulong *)(param_1 + 0x428);
          uVar19 = 0;
          goto LAB_7101c50eb8;
        }
        plVar8 = (long *)**(long **)(*plVar21 + 0x18);
        if (plVar8 == (long *)0x0) goto LAB_7101c50ea4;
        uVar14 = (**(code **)(*plVar8 + 0x3c0))();
        uVar13 = *(ulong *)(param_1 + 0x428);
        if ((uVar14 & 1) == 0) goto LAB_7101c50bd4;
      }
      if (((uint)uVar13 >> 1 & 1) == 0) {
        uVar19 = (uint)(uVar13 >> 2) & 1;
      }
      else {
        uVar19 = 1;
      }
    }
LAB_7101c50eb8:
    *(ulong *)(param_1 + 0x428) = uVar13 & 0xfffffffffffffffd;
    if ((uVar13 & 1) == 0) {
LAB_7101c50f24:
      if (uVar19 != 0) {
LAB_7101c50f28:
        *(undefined1 *)(param_1 + 0x431) = 0;
      }
    }
    else {
      plVar21 = *(long **)(param_1 + 0x2f8);
      plVar8 = (long *)**(long **)(*plVar21 + 0x18);
      if ((plVar8 != (long *)0x0) &&
         ((uVar13 = (**(code **)(*plVar8 + 0x2f8))(), (uVar13 & 1) != 0 ||
          ((plVar8 = (long *)**(long **)(*plVar21 + 0x18), plVar8 != (long *)0x0 &&
           (uVar13 = (**(code **)(*plVar8 + 0x3c0))(), (uVar13 & 1) == 0)))))) goto LAB_7101c50f24;
      if (((uint)*(ulong *)(param_1 + 0x428) >> 1 & 1) != 0) {
        if (uVar19 != 0) goto LAB_7101c50f2c;
        goto LAB_7101c50f28;
      }
      if ((uVar19 ^ (uint)(*(ulong *)(param_1 + 0x428) >> 2) & 1) == 1) goto LAB_7101c50f28;
    }
LAB_7101c50f2c:
    lVar17 = param_1 + 0x800;
    FUN_7101c59660(lVar17);
    FUN_7101c597c0(lVar17,0,0,0,param_5,param_6,param_7,param_8);
    FUN_7101c597c0(lVar17,1,0,0,param_5,param_6,param_7,param_8);
    FUN_7101c597c0(lVar17,2,0,0,param_5,param_6,param_7,param_8);
    FUN_7101c597c0(lVar17,3,0,0,param_5,param_6,param_7,param_8);
    *(undefined1 *)(param_1 + 0x80b) = 0;
    uVar13 = (ulong)*(byte *)(param_1 + 0x1920);
    if (uVar13 < 8) {
      lVar17 = *(long *)(param_1 + 0x450) + uVar13 * 0x1e0;
      if (*(char *)(lVar17 + 0x19b) != '\0') {
        FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 0x450) + uVar13 * 0x1e0 + 0x30),
                       0x71042c4e37);
      }
      *(undefined1 *)(lVar17 + 0x19b) = 0;
      return;
    }
LAB_7101c51154:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pcVar11 = *(char **)(param_1 + 0x4f8);
  if (pcVar11 == *(char **)(param_1 + 0x500)) {
LAB_7101c5060c:
    lVar17 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
    if (((*(int *)(lVar17 + 0xa080) == 2) ||
        ((((*(int *)(lVar17 + 0xa0f8) == 2 || (*(int *)(lVar17 + 0xa170) == 2)) ||
          (*(int *)(lVar17 + 0xa1e8) == 2)) ||
         ((*(int *)(lVar17 + 0xa260) == 2 || (*(int *)(lVar17 + 0xa2d8) == 2)))))) ||
       ((*(int *)(lVar17 + 0xa350) == 2 || (*(int *)(lVar17 + 0xa3c8) == 2)))) {
      bVar9 = 1;
      uVar10 = 7;
      goto LAB_7101c50698;
    }
  }
  else {
    pcVar16 = *(char **)(param_1 + 0x500) + (-2 - (long)pcVar11);
    uVar14 = (ulong)pcVar16 >> 1;
    uVar19 = (int)uVar14 + 1;
    uVar13 = (ulong)uVar19 & 3;
    pcVar18 = pcVar11;
    if (pcVar16 < (char *)0x6) {
      bVar9 = 0;
    }
    else {
      bVar9 = 0;
      lVar17 = (uVar13 - 1) - uVar14;
      do {
        cVar15 = *pcVar18;
        pcVar3 = pcVar18 + 2;
        pcVar1 = pcVar18 + 4;
        pcVar2 = pcVar18 + 6;
        pcVar18 = pcVar18 + 8;
        bVar9 = *pcVar2 + *pcVar1 + *pcVar3 + cVar15 + bVar9;
        lVar17 = lVar17 + 4;
      } while (lVar17 != 0);
    }
    if ((uVar19 & 3) != 0) {
      lVar17 = -uVar13;
      do {
        bVar9 = *pcVar18 + bVar9;
        lVar17 = lVar17 + 1;
        pcVar18 = pcVar18 + 2;
      } while (lVar17 != 0);
    }
    if ((((((((bVar9 < 2) || (*(int *)(param_1 + 0x2c0) != 1)) ||
            ((lVar17 = *(long *)(DAT_71052c4c58 + 8), *(char *)(param_1 + 0xafc) != '\0' &&
             ((uVar5 = *(uint *)(*(long *)(lVar17 + 0x88) + 0xa080), uVar5 == 2 ||
              ((uVar5 | 1) != 7 && *(char *)(param_1 + 0xaf8) != '\x04')))))) ||
           ((*(char *)(param_1 + 0xce4) != '\0' &&
            ((uVar5 = *(uint *)(*(long *)(lVar17 + 0x88) + 0xa0f8), uVar5 == 2 ||
             ((uVar5 | 1) != 7 && *(char *)(param_1 + 0xce0) != '\x04')))))) ||
          (((*(char *)(param_1 + 0xecc) != '\0' &&
            ((uVar5 = *(uint *)(*(long *)(lVar17 + 0x88) + 0xa170), uVar5 == 2 ||
             ((uVar5 | 1) != 7 && *(char *)(param_1 + 0xec8) != '\x04')))) ||
           ((*(char *)(param_1 + 0x10b4) != '\0' &&
            ((uVar5 = *(uint *)(*(long *)(lVar17 + 0x88) + 0xa1e8), uVar5 == 2 ||
             (((uVar5 | 1) != 7 && (*(char *)(param_1 + 0x10b0) != '\x04')))))))))) ||
         ((*(char *)(param_1 + 0x129c) != '\0' &&
          ((uVar5 = *(uint *)(*(long *)(lVar17 + 0x88) + 0xa260), uVar5 == 2 ||
           (((uVar5 | 1) != 7 && (*(char *)(param_1 + 0x1298) != '\x04')))))))) ||
        ((*(char *)(param_1 + 0x1484) != '\0' &&
         ((uVar5 = *(uint *)(*(long *)(lVar17 + 0x88) + 0xa2d8), uVar5 == 2 ||
          (((uVar5 | 1) != 7 && (*(char *)(param_1 + 0x1480) != '\x04')))))))) ||
       (((*(char *)(param_1 + 0x166c) != '\0' &&
         ((uVar5 = *(uint *)(*(long *)(lVar17 + 0x88) + 0xa350), uVar5 == 2 ||
          (((uVar5 | 1) != 7 && (*(char *)(param_1 + 0x1668) != '\x04')))))) ||
        ((*(char *)(param_1 + 0x1854) != '\0' &&
         ((uVar5 = *(uint *)(*(long *)(lVar17 + 0x88) + 0xa3c8), uVar5 == 2 ||
          (((uVar5 | 1) != 7 && (*(char *)(param_1 + 0x1850) != '\x04'))))))))))
    goto LAB_7101c5060c;
    if (7 < (ulong)*(byte *)(param_1 + 0x1920)) goto LAB_7101c51154;
    if (*(char *)(param_1 + (ulong)*(byte *)(param_1 + 0x1920) * 0x1e8 + 0xaf8) == '\x01') {
      if (*(char *)(*(long *)(param_1 + 0x460) + 0x15e) == '\0') {
        FUN_7101c59330(param_1 + 0x800,1,3,0,param_5,param_6,param_7,param_8);
        if (*(char *)(param_1 + 0x1b27) != '\0') {
          return;
        }
        lVar17 = *(long *)(*(long *)**(undefined8 **)(param_1 + 0x10) + 0x600);
        if (*(char *)(lVar17 + 0x4aa) == '\0') {
          return;
        }
        if ((*(byte *)(lVar17 + 0x1b8) >> 1 & 1) == 0) {
          return;
        }
        if (*(long **)(param_1 + 0x19e0) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x007101c51150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(long **)(param_1 + 0x19e0) + 0x30))();
          return;
        }
        goto LAB_7101c51154;
      }
      bVar9 = 0;
      uVar10 = 0;
      goto LAB_7101c50698;
    }
    if (pcVar16 < (char *)0x6) {
      cVar15 = '\0';
    }
    else {
      cVar15 = '\0';
      lVar17 = (uVar13 - 1) - uVar14;
      do {
        cVar12 = *pcVar11;
        pcVar18 = pcVar11 + 2;
        pcVar16 = pcVar11 + 4;
        pcVar3 = pcVar11 + 6;
        pcVar11 = pcVar11 + 8;
        cVar15 = *pcVar3 + *pcVar16 + *pcVar18 + cVar12 + cVar15;
        lVar17 = lVar17 + 4;
      } while (lVar17 != 0);
    }
    if ((uVar19 & 3) != 0) {
      lVar17 = -uVar13;
      do {
        cVar15 = *pcVar11 + cVar15;
        lVar17 = lVar17 + 1;
        pcVar11 = pcVar11 + 2;
      } while (lVar17 != 0);
    }
    cVar12 = '\x02';
    if (*(char *)(param_1 + 0x18e6) != '\x03') {
      cVar12 = '\x04';
    }
    cVar4 = '\x03';
    if (*(char *)(param_1 + 0x18e6) != '\x02') {
      cVar4 = cVar12;
    }
    if (cVar15 == cVar4) {
      bVar9 = 1;
      uVar10 = 2;
      goto LAB_7101c50698;
    }
  }
  bVar9 = 1;
  uVar10 = 1;
LAB_7101c50698:
  FUN_7101c59330(param_1 + 0x800,bVar9,uVar10,0,param_5,param_6,param_7,param_8);
  return;
}

