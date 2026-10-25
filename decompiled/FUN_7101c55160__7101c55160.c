// addr:      7101c55160
// offset:    0x1c55160
// name:      FUN_7101c55160
// mangled:   
// signature: undefined __cdecl FUN_7101c55160(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101c55160(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  long ***ppplVar4;
  undefined **ppuVar5;
  bool bVar6;
  bool bVar7;
  long *plVar8;
  undefined ***pppuVar9;
  undefined8 uVar10;
  long ****pppplVar11;
  byte ****ppppbVar12;
  uint uVar13;
  ulong uVar14;
  byte *pbVar15;
  long lVar16;
  long *plVar17;
  uint uVar18;
  byte *pbVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  undefined **local_b0;
  long ***local_a8 [8];
  undefined **local_68;
  undefined **local_60;
  long ***local_58;
  undefined4 local_44;
  
  if (*(int *)(param_1 + 0x2c4) != 0) {
    return;
  }
  if ((((*(char *)(param_1 + 0xafe) == '\0') || ((*(byte *)(param_1 + 0xaf8) | 1) != 3)) ||
      (3 < *(int *)(param_1 + 0x2c0) - 5U)) || (*(int *)(param_1 + 0x2c0) - 7U < 5)) {
    bVar6 = false;
    if (*(char *)(param_1 + 0xafd) == '\0') goto LAB_7101c551d4;
LAB_7101c551f0:
    if (*(char *)(param_1 + 0xaf8) == '\x04') {
      bVar7 = *(char *)(param_1 + 0xafa) == '\0';
      goto joined_r0x007101c5520c;
    }
    bVar7 = false;
    if (bVar6) goto LAB_7101c551dc;
LAB_7101c55210:
    if (bVar7) {
      param_3 = 4;
      goto LAB_7101c55218;
    }
    lVar21 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar21 + 0x1a0) == 0) goto LAB_7101c55224;
    FUN_71037780e0(&local_b0,lVar21 + 0x28,(long ****)"balloon_off",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_710377aee0(0x3f800000,(long)&local_b0);
    ppplVar4 = local_a8[0];
    *(undefined4 *)(lVar21 + 0x1a0) = 0;
    local_b0 = &PTR_FUN_710523d9e8;
    local_a8[0] = (long ***)0x0;
    if (ppplVar4 == (long ***)0x0) goto LAB_7101c55224;
    FUN_710392eb40((ulong)ppplVar4);
    if (*(char *)(param_1 + 0xce6) != '\0') goto LAB_7101c5522c;
LAB_7101c55294:
    bVar6 = false;
    if (*(char *)(param_1 + 0xce5) != '\0') goto LAB_7101c5529c;
LAB_7101c55270:
    bVar7 = false;
joined_r0x007101c55270:
    if (!bVar6) goto LAB_7101c552b8;
LAB_7101c55274:
    param_3 = 3;
LAB_7101c552c4:
    FUN_7101c76f30(param_1 + 0x448,1,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101c552cc:
    if (*(char *)(param_1 + 0xece) == '\0') goto LAB_7101c55338;
LAB_7101c552d4:
    if ((((*(byte *)(param_1 + 0xec8) | 1) != 3) || (3 < *(int *)(param_1 + 0x2c0) - 5U)) ||
       (*(int *)(param_1 + 0x2c0) - 7U < 5)) goto LAB_7101c55338;
    bVar6 = *(char *)(param_1 + 0xeca) == '\0';
    if (*(char *)(param_1 + 0xecd) != '\0') goto LAB_7101c55340;
LAB_7101c55318:
    bVar7 = false;
joined_r0x007101c55358:
    if (bVar6) goto LAB_7101c5531c;
LAB_7101c5535c:
    if (bVar7) {
      param_3 = 4;
      goto LAB_7101c55368;
    }
    lVar21 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar21 + 0x560) != 0) {
      FUN_71037780e0(&local_b0,lVar21 + 1000,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_b0);
      ppplVar4 = local_a8[0];
      *(undefined4 *)(lVar21 + 0x560) = 0;
      local_b0 = &PTR_FUN_710523d9e8;
      local_a8[0] = (long ***)0x0;
      if (ppplVar4 != (long ***)0x0) {
        FUN_710392eb40((ulong)ppplVar4);
      }
    }
  }
  else {
    bVar6 = *(char *)(param_1 + 0xafa) == '\0';
    if (*(char *)(param_1 + 0xafd) != '\0') goto LAB_7101c551f0;
LAB_7101c551d4:
    bVar7 = false;
joined_r0x007101c5520c:
    if (!bVar6) goto LAB_7101c55210;
LAB_7101c551dc:
    param_3 = 3;
LAB_7101c55218:
    FUN_7101c76f30(param_1 + 0x448,0,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101c55224:
    if (*(char *)(param_1 + 0xce6) == '\0') goto LAB_7101c55294;
LAB_7101c5522c:
    if ((((*(byte *)(param_1 + 0xce0) | 1) != 3) || (3 < *(int *)(param_1 + 0x2c0) - 5U)) ||
       (*(int *)(param_1 + 0x2c0) - 7U < 5)) goto LAB_7101c55294;
    bVar6 = *(char *)(param_1 + 0xce2) == '\0';
    if (*(char *)(param_1 + 0xce5) == '\0') goto LAB_7101c55270;
LAB_7101c5529c:
    if (*(char *)(param_1 + 0xce0) == '\x04') {
      bVar7 = *(char *)(param_1 + 0xce2) == '\0';
      goto joined_r0x007101c55270;
    }
    bVar7 = false;
    if (bVar6) goto LAB_7101c55274;
LAB_7101c552b8:
    if (bVar7) {
      param_3 = 4;
      goto LAB_7101c552c4;
    }
    lVar21 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar21 + 0x380) == 0) goto LAB_7101c552cc;
    FUN_71037780e0(&local_b0,lVar21 + 0x208,(long ****)"balloon_off",param_3,param_4,param_5,param_6
                   ,param_7,param_8);
    FUN_710377aee0(0x3f800000,(long)&local_b0);
    ppplVar4 = local_a8[0];
    *(undefined4 *)(lVar21 + 0x380) = 0;
    local_b0 = &PTR_FUN_710523d9e8;
    local_a8[0] = (long ***)0x0;
    if (ppplVar4 == (long ***)0x0) goto LAB_7101c552cc;
    FUN_710392eb40((ulong)ppplVar4);
    if (*(char *)(param_1 + 0xece) != '\0') goto LAB_7101c552d4;
LAB_7101c55338:
    bVar6 = false;
    if (*(char *)(param_1 + 0xecd) == '\0') goto LAB_7101c55318;
LAB_7101c55340:
    if (*(char *)(param_1 + 0xec8) == '\x04') {
      bVar7 = *(char *)(param_1 + 0xeca) == '\0';
      goto joined_r0x007101c55358;
    }
    bVar7 = false;
    if (!bVar6) goto LAB_7101c5535c;
LAB_7101c5531c:
    param_3 = 3;
LAB_7101c55368:
    FUN_7101c76f30(param_1 + 0x448,2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  lVar21 = param_1 + 0x448;
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
LAB_7101c55400:
    if (bVar6) goto LAB_7101c55404;
LAB_7101c55418:
    if (bVar7) {
      param_3 = 4;
      goto LAB_7101c55424;
    }
    lVar16 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar16 + 0x740) != 0) {
      FUN_71037780e0(&local_b0,lVar16 + 0x5c8,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_b0);
      ppplVar4 = local_a8[0];
      *(undefined4 *)(lVar16 + 0x740) = 0;
      local_b0 = &PTR_FUN_710523d9e8;
      local_a8[0] = (long ***)0x0;
      if (ppplVar4 != (long ***)0x0) {
        FUN_710392eb40((ulong)ppplVar4);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x10b0) == '\x04') {
      bVar7 = *(char *)(param_1 + 0x10b2) == '\0';
      goto LAB_7101c55400;
    }
    bVar7 = false;
    if (!bVar6) goto LAB_7101c55418;
LAB_7101c55404:
    param_3 = 3;
LAB_7101c55424:
    FUN_7101c76f30(lVar21,3,param_3,param_4,param_5,param_6,param_7,param_8);
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
LAB_7101c554b0:
    if (bVar6) goto LAB_7101c554b4;
LAB_7101c554c8:
    if (bVar7) {
      param_3 = 4;
      goto LAB_7101c554d4;
    }
    lVar16 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar16 + 0x920) != 0) {
      FUN_71037780e0(&local_b0,lVar16 + 0x7a8,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_b0);
      ppplVar4 = local_a8[0];
      *(undefined4 *)(lVar16 + 0x920) = 0;
      local_b0 = &PTR_FUN_710523d9e8;
      local_a8[0] = (long ***)0x0;
      if (ppplVar4 != (long ***)0x0) {
        FUN_710392eb40((ulong)ppplVar4);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x1298) == '\x04') {
      bVar7 = *(char *)(param_1 + 0x129a) == '\0';
      goto LAB_7101c554b0;
    }
    bVar7 = false;
    if (!bVar6) goto LAB_7101c554c8;
LAB_7101c554b4:
    param_3 = 3;
LAB_7101c554d4:
    FUN_7101c76f30(lVar21,4,param_3,param_4,param_5,param_6,param_7,param_8);
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
LAB_7101c55560:
    if (bVar6) goto LAB_7101c55564;
LAB_7101c55578:
    if (bVar7) {
      param_3 = 4;
      goto LAB_7101c55584;
    }
    lVar16 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar16 + 0xb00) != 0) {
      FUN_71037780e0(&local_b0,lVar16 + 0x988,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_b0);
      ppplVar4 = local_a8[0];
      *(undefined4 *)(lVar16 + 0xb00) = 0;
      local_b0 = &PTR_FUN_710523d9e8;
      local_a8[0] = (long ***)0x0;
      if (ppplVar4 != (long ***)0x0) {
        FUN_710392eb40((ulong)ppplVar4);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x1480) == '\x04') {
      bVar7 = *(char *)(param_1 + 0x1482) == '\0';
      goto LAB_7101c55560;
    }
    bVar7 = false;
    if (!bVar6) goto LAB_7101c55578;
LAB_7101c55564:
    param_3 = 3;
LAB_7101c55584:
    FUN_7101c76f30(lVar21,5,param_3,param_4,param_5,param_6,param_7,param_8);
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
LAB_7101c55610:
    if (bVar6) goto LAB_7101c55614;
LAB_7101c55628:
    if (bVar7) {
      param_3 = 4;
      goto LAB_7101c55634;
    }
    lVar16 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar16 + 0xce0) != 0) {
      FUN_71037780e0(&local_b0,lVar16 + 0xb68,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_b0);
      ppplVar4 = local_a8[0];
      *(undefined4 *)(lVar16 + 0xce0) = 0;
      local_b0 = &PTR_FUN_710523d9e8;
      local_a8[0] = (long ***)0x0;
      if (ppplVar4 != (long ***)0x0) {
        FUN_710392eb40((ulong)ppplVar4);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x1668) == '\x04') {
      bVar7 = *(char *)(param_1 + 0x166a) == '\0';
      goto LAB_7101c55610;
    }
    bVar7 = false;
    if (!bVar6) goto LAB_7101c55628;
LAB_7101c55614:
    param_3 = 3;
LAB_7101c55634:
    FUN_7101c76f30(lVar21,6,param_3,param_4,param_5,param_6,param_7,param_8);
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
LAB_7101c556c0:
    if (bVar6) goto LAB_7101c556c4;
LAB_7101c556d8:
    if (bVar7) {
      uVar10 = 4;
      goto LAB_7101c556e4;
    }
    lVar21 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar21 + 0xec0) == 0) goto LAB_7101c556ec;
    FUN_71037780e0(&local_b0,lVar21 + 0xd48,(long ****)"balloon_off",param_3,param_4,param_5,param_6
                   ,param_7,param_8);
    FUN_710377aee0(0x3f800000,(long)&local_b0);
    ppplVar4 = local_a8[0];
    *(undefined4 *)(lVar21 + 0xec0) = 0;
    local_b0 = &PTR_FUN_710523d9e8;
    local_a8[0] = (long ***)0x0;
    if (ppplVar4 == (long ***)0x0) goto LAB_7101c556ec;
    FUN_710392eb40((ulong)ppplVar4);
    uVar14 = *(ulong *)(param_1 + 0x428);
    if ((uVar14 & 1) != 0) goto LAB_7101c55970;
LAB_7101c556f4:
    uVar13 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x1850) == '\x04') {
      bVar7 = *(char *)(param_1 + 0x1852) == '\0';
      goto LAB_7101c556c0;
    }
    bVar7 = false;
    if (!bVar6) goto LAB_7101c556d8;
LAB_7101c556c4:
    uVar10 = 3;
LAB_7101c556e4:
    FUN_7101c76f30(lVar21,7,uVar10,param_4,param_5,param_6,param_7,param_8);
LAB_7101c556ec:
    uVar14 = *(ulong *)(param_1 + 0x428);
    if ((uVar14 & 1) == 0) goto LAB_7101c556f4;
LAB_7101c55970:
    plVar23 = *(long **)(param_1 + 0x2f8);
    plVar8 = (long *)**(long **)(*plVar23 + 0x18);
    if (plVar8 == (long *)0x0) {
LAB_7101c559c8:
      uVar14 = *(ulong *)(param_1 + 0x428);
LAB_7101c559cc:
      if (((uint)uVar14 >> 1 & 1) == 0) {
        uVar13 = (uint)(uVar14 >> 2) & 1;
      }
      else {
        uVar13 = 1;
      }
    }
    else {
      uVar14 = (**(code **)(*plVar8 + 0x2f8))();
      if ((uVar14 & 1) == 0) {
        plVar8 = (long *)**(long **)(*plVar23 + 0x18);
        if (plVar8 == (long *)0x0) goto LAB_7101c559c8;
        uVar22 = (**(code **)(*plVar8 + 0x3c0))();
        uVar14 = *(ulong *)(param_1 + 0x428);
        if ((uVar22 & 1) == 0) goto LAB_7101c556f4;
        goto LAB_7101c559cc;
      }
      uVar14 = *(ulong *)(param_1 + 0x428);
      uVar13 = 0;
    }
  }
  *(ulong *)(param_1 + 0x428) = uVar14 & 0xfffffffffffffffd;
  if ((uVar14 & 1) == 0) {
LAB_7101c55a48:
    if (uVar13 != 0) {
LAB_7101c55a4c:
      *(undefined1 *)(param_1 + 0x431) = 0;
    }
  }
  else {
    plVar23 = *(long **)(param_1 + 0x2f8);
    plVar8 = (long *)**(long **)(*plVar23 + 0x18);
    if ((plVar8 != (long *)0x0) &&
       ((uVar14 = (**(code **)(*plVar8 + 0x2f8))(), (uVar14 & 1) != 0 ||
        ((plVar8 = (long *)**(long **)(*plVar23 + 0x18), plVar8 != (long *)0x0 &&
         (uVar14 = (**(code **)(*plVar8 + 0x3c0))(), (uVar14 & 1) == 0)))))) goto LAB_7101c55a48;
    if (((uint)*(ulong *)(param_1 + 0x428) >> 1 & 1) != 0) {
      if (uVar13 != 0) goto LAB_7101c55a50;
      goto LAB_7101c55a4c;
    }
    if ((uVar13 ^ (uint)(*(ulong *)(param_1 + 0x428) >> 2) & 1) == 1) goto LAB_7101c55a4c;
  }
LAB_7101c55a50:
  lVar21 = param_1 + 0x800;
  pppplVar11 = (long ****)0x5;
  ppppbVar12 = (byte ****)0x0;
  FUN_7101c59330(lVar21,1,5,0,param_5,param_6,param_7,param_8);
  pbVar15 = *(byte **)(param_1 + 0x4f8);
  if (pbVar15 == *(byte **)(param_1 + 0x500)) {
    uVar13 = 0xfffffffe;
    lVar16 = *(long *)(param_1 + 0x820);
  }
  else {
    pbVar19 = *(byte **)(param_1 + 0x500) + (-2 - (long)pbVar15);
    uVar22 = (ulong)pbVar19 >> 1;
    uVar13 = (int)uVar22 + 1;
    uVar14 = (ulong)uVar13 & 3;
    if (pbVar19 < (byte *)0x6) {
      uVar18 = 0;
    }
    else {
      uVar18 = 0;
      lVar16 = (uVar14 - 1) - uVar22;
      do {
        bVar3 = *pbVar15;
        pbVar19 = pbVar15 + 2;
        pbVar1 = pbVar15 + 4;
        pbVar2 = pbVar15 + 6;
        pbVar15 = pbVar15 + 8;
        uVar18 = (uint)*pbVar2 + (uint)*pbVar1 + (uint)*pbVar19 + bVar3 + uVar18;
        lVar16 = lVar16 + 4;
      } while (lVar16 != 0);
    }
    if ((uVar13 & 3) != 0) {
      lVar16 = -uVar14;
      do {
        uVar18 = *pbVar15 + uVar18;
        lVar16 = lVar16 + 1;
        pbVar15 = pbVar15 + 2;
      } while (lVar16 != 0);
    }
    uVar13 = (uVar18 & 0xff) - 2;
    lVar16 = *(long *)(param_1 + 0x820);
  }
  if ((((lVar16 != 0) && (plVar8 = *(long **)(*(long *)(lVar16 + 8) + 8), plVar8 != (long *)0x0)) &&
      (uVar14 = (**(code **)(*plVar8 + 0x138))(), (uVar14 & 1) == 0)) &&
     (plVar8 = *(long **)(param_1 + 0x820), plVar8 != (long *)0x0)) {
    plVar23 = (long *)plVar8[1];
    plVar24 = (long *)plVar23[1];
    if (plVar24 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x820) = 0;
    }
    else {
      if ((char)plVar23[2] != '\0') {
        plVar25 = *(long **)(*plVar23 + 0x80);
        plVar23 = (long *)(*plVar23 + 0x88);
        if (plVar25 != plVar23) {
          do {
            while( true ) {
              uVar14 = (**(code **)(*(long *)plVar25[0xd] + 0x148))();
              if (((uVar14 & 1) != 0) &&
                 (uVar14 = (**(code **)(*plVar24 + 0x120))(plVar24,plVar25[0xd]), (uVar14 & 1) != 0)
                 ) {
                (**(code **)(*(long *)plVar25[0xd] + 0x178))();
                (**(code **)(*(long *)plVar25[0xd] + 0x140))((long *)plVar25[0xd],0);
              }
              plVar17 = (long *)plVar25[1];
              if ((long *)plVar25[1] == (long *)0x0) break;
              do {
                plVar25 = plVar17;
                plVar17 = (long *)*plVar25;
              } while ((long *)*plVar25 != (long *)0x0);
LAB_7101c55bf0:
              if (plVar25 == plVar23) goto LAB_7101c55c08;
            }
            plVar17 = plVar25 + 2;
            plVar20 = (long *)*plVar17;
            if ((long *)*plVar20 != plVar25) {
              do {
                lVar16 = *plVar17;
                plVar17 = (long *)(lVar16 + 0x10);
                plVar25 = (long *)*plVar17;
              } while (*plVar25 != lVar16);
              goto LAB_7101c55bf0;
            }
            plVar25 = plVar20;
          } while (plVar20 != plVar23);
LAB_7101c55c08:
          plVar24 = *(long **)(plVar8[1] + 8);
        }
      }
      (**(code **)(*plVar24 + 0x178))(plVar24);
      plVar8 = *(long **)(param_1 + 0x820);
      *(undefined8 *)(param_1 + 0x820) = 0;
      if (plVar8 == (long *)0x0) goto LAB_7101c55c4c;
    }
    (**(code **)(*plVar8 + 8))(plVar8);
  }
LAB_7101c55c4c:
  if (1 < (int)uVar13) {
    uVar13 = 2;
  }
  FUN_71003a4ca0((uint *)&local_b0,"anim_fight_loop_%02d",
                 (ulong)(uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU)),pppplVar11,ppppbVar12,param_5
                 ,param_6,param_7,param_8);
  FUN_71037780e0(&local_68,param_1 + 0x810,local_a8,pppplVar11,ppppbVar12,param_5,param_6,param_7,
                 param_8);
  pppuVar9 = (undefined ***)
             FUN_710392e290(0x10,0x10,pppplVar11,ppppbVar12,param_5,param_6,param_7,param_8);
  if (pppuVar9 == (undefined ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_58 = (long ***)&DAT_00000010;
      pppplVar11 = &local_58;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar14 & 1) != 0) &&
         (pppuVar9 = (undefined ***)
                     FUN_710392e290(0x10,0x10,pppplVar11,ppppbVar12,param_5,param_6,param_7,param_8)
         , pppuVar9 != (undefined ***)0x0)) goto LAB_7101c55cdc;
    }
    pppuVar9 = (undefined ***)0x0;
  }
LAB_7101c55cdc:
  ppuVar5 = local_60;
  *pppuVar9 = &PTR_FUN_710523d9e8;
  pppuVar9[1] = (undefined **)0x0;
  if (&local_68 != pppuVar9) {
    local_60 = (undefined **)0x0;
    pppuVar9[1] = ppuVar5;
  }
  plVar8 = *(long **)(param_1 + 0x820);
  *(undefined ****)(param_1 + 0x820) = pppuVar9;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  ppuVar5 = local_60;
  local_68 = &PTR_FUN_710523d9e8;
  local_60 = (undefined **)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar5);
  }
  FUN_710377aee0(0x3f800000,*(long *)(param_1 + 0x820));
  FUN_7101c591b0(param_1,1,1,1);
  FUN_7101c597c0(lVar21,0,0,0,param_5,param_6,param_7,param_8);
  FUN_7101c597c0(lVar21,1,0,0,param_5,param_6,param_7,param_8);
  FUN_7101c597c0(lVar21,2,0,0,param_5,param_6,param_7,param_8);
  FUN_7101c597c0(lVar21,3,0,0,param_5,param_6,param_7,param_8);
  *(undefined1 *)(param_1 + 0x80b) = 0;
  uVar14 = (ulong)*(byte *)(param_1 + 0x1920);
  if (uVar14 < 8) {
    lVar21 = *(long *)(param_1 + 0x450) + uVar14 * 0x1e0;
    if (*(char *)(lVar21 + 0x19b) != '\0') {
      FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 0x450) + uVar14 * 0x1e0 + 0x30),
                     0x71042c4e37);
    }
    *(undefined1 *)(lVar21 + 0x19b) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

