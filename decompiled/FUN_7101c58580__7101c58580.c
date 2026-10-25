// addr:      7101c58580
// offset:    0x1c58580
// name:      FUN_7101c58580
// mangled:   
// signature: undefined __cdecl FUN_7101c58580(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c58580(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  bool bVar17;
  bool bVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  long *plVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined1 auVar31 [16];
  undefined **local_40;
  ulong local_38;
  
  pcVar1 = (char *)(param_1 + 0x1b20);
  if (*(int *)(param_1 + 0x2c4) == 0) {
    if ((((*(char *)(param_1 + 0xafe) == '\0') || ((*(byte *)(param_1 + 0xaf8) | 1) != 3)) ||
        (3 < *(int *)(param_1 + 0x2c0) - 5U)) || (*(int *)(param_1 + 0x2c0) - 7U < 5)) {
      bVar17 = false;
      if (*(char *)(param_1 + 0xafd) != '\0') goto LAB_7101c587e0;
LAB_7101c587c4:
      bVar18 = false;
joined_r0x007101c587fc:
      if (!bVar17) goto LAB_7101c58800;
LAB_7101c587cc:
      param_3 = 3;
LAB_7101c58808:
      FUN_7101c76f30(param_1 + 0x448,0,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101c58814:
      if (*(char *)(param_1 + 0xce6) == '\0') goto LAB_7101c58884;
LAB_7101c5881c:
      if ((((*(byte *)(param_1 + 0xce0) | 1) != 3) || (3 < *(int *)(param_1 + 0x2c0) - 5U)) ||
         (*(int *)(param_1 + 0x2c0) - 7U < 5)) goto LAB_7101c58884;
      bVar17 = *(char *)(param_1 + 0xce2) == '\0';
      if (*(char *)(param_1 + 0xce5) != '\0') goto LAB_7101c5888c;
LAB_7101c58860:
      bVar18 = false;
joined_r0x007101c58860:
      if (!bVar17) goto LAB_7101c588a8;
LAB_7101c58864:
      param_3 = 3;
LAB_7101c588b4:
      FUN_7101c76f30(param_1 + 0x448,1,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101c588bc:
      if (*(char *)(param_1 + 0xece) == '\0') goto LAB_7101c58928;
LAB_7101c588c4:
      if ((((*(byte *)(param_1 + 0xec8) | 1) != 3) || (3 < *(int *)(param_1 + 0x2c0) - 5U)) ||
         (*(int *)(param_1 + 0x2c0) - 7U < 5)) goto LAB_7101c58928;
      bVar17 = *(char *)(param_1 + 0xeca) == '\0';
      if (*(char *)(param_1 + 0xecd) == '\0') goto LAB_7101c58908;
LAB_7101c58930:
      if (*(char *)(param_1 + 0xec8) == '\x04') {
        bVar18 = *(char *)(param_1 + 0xeca) == '\0';
        goto joined_r0x007101c58948;
      }
      bVar18 = false;
      if (bVar17) goto LAB_7101c5890c;
LAB_7101c5894c:
      if (bVar18) {
        param_3 = 4;
        goto LAB_7101c58958;
      }
      lVar23 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar23 + 0x560) != 0) {
        FUN_71037780e0(&local_40,lVar23 + 1000,(long ****)"balloon_off",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377aee0(0x3f800000,(long)&local_40);
        uVar21 = local_38;
        *(undefined4 *)(lVar23 + 0x560) = 0;
        local_40 = &PTR_FUN_710523d9e8;
        local_38 = 0;
        if (uVar21 != 0) {
          FUN_710392eb40(uVar21);
        }
      }
    }
    else {
      bVar17 = *(char *)(param_1 + 0xafa) == '\0';
      if (*(char *)(param_1 + 0xafd) == '\0') goto LAB_7101c587c4;
LAB_7101c587e0:
      if (*(char *)(param_1 + 0xaf8) == '\x04') {
        bVar18 = *(char *)(param_1 + 0xafa) == '\0';
        goto joined_r0x007101c587fc;
      }
      bVar18 = false;
      if (bVar17) goto LAB_7101c587cc;
LAB_7101c58800:
      if (bVar18) {
        param_3 = 4;
        goto LAB_7101c58808;
      }
      lVar23 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar23 + 0x1a0) == 0) goto LAB_7101c58814;
      FUN_71037780e0(&local_40,lVar23 + 0x28,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_40);
      uVar21 = local_38;
      *(undefined4 *)(lVar23 + 0x1a0) = 0;
      local_40 = &PTR_FUN_710523d9e8;
      local_38 = 0;
      if (uVar21 == 0) goto LAB_7101c58814;
      FUN_710392eb40(uVar21);
      if (*(char *)(param_1 + 0xce6) != '\0') goto LAB_7101c5881c;
LAB_7101c58884:
      bVar17 = false;
      if (*(char *)(param_1 + 0xce5) == '\0') goto LAB_7101c58860;
LAB_7101c5888c:
      if (*(char *)(param_1 + 0xce0) == '\x04') {
        bVar18 = *(char *)(param_1 + 0xce2) == '\0';
        goto joined_r0x007101c58860;
      }
      bVar18 = false;
      if (bVar17) goto LAB_7101c58864;
LAB_7101c588a8:
      if (bVar18) {
        param_3 = 4;
        goto LAB_7101c588b4;
      }
      lVar23 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar23 + 0x380) == 0) goto LAB_7101c588bc;
      FUN_71037780e0(&local_40,lVar23 + 0x208,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_40);
      uVar21 = local_38;
      *(undefined4 *)(lVar23 + 0x380) = 0;
      local_40 = &PTR_FUN_710523d9e8;
      local_38 = 0;
      if (uVar21 == 0) goto LAB_7101c588bc;
      FUN_710392eb40(uVar21);
      if (*(char *)(param_1 + 0xece) != '\0') goto LAB_7101c588c4;
LAB_7101c58928:
      bVar17 = false;
      if (*(char *)(param_1 + 0xecd) != '\0') goto LAB_7101c58930;
LAB_7101c58908:
      bVar18 = false;
joined_r0x007101c58948:
      if (!bVar17) goto LAB_7101c5894c;
LAB_7101c5890c:
      param_3 = 3;
LAB_7101c58958:
      FUN_7101c76f30(param_1 + 0x448,2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    lVar23 = param_1 + 0x448;
    bVar17 = false;
    if (*(char *)(param_1 + 0x10b6) != '\0') {
      if ((*(byte *)(param_1 + 0x10b0) | 1) == 3) {
        bVar17 = false;
        if ((*(int *)(param_1 + 0x2c0) - 5U < 4) && (4 < *(int *)(param_1 + 0x2c0) - 7U)) {
          bVar17 = *(char *)(param_1 + 0x10b2) == '\0';
        }
      }
      else {
        bVar17 = false;
      }
    }
    bVar18 = false;
    if (*(char *)(param_1 + 0x10b5) == '\0') {
LAB_7101c589f0:
      if (bVar17) goto LAB_7101c589f4;
LAB_7101c58a08:
      if (bVar18) {
        param_3 = 4;
        goto LAB_7101c58a14;
      }
      lVar25 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar25 + 0x740) != 0) {
        FUN_71037780e0(&local_40,lVar25 + 0x5c8,(long ****)"balloon_off",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377aee0(0x3f800000,(long)&local_40);
        uVar21 = local_38;
        *(undefined4 *)(lVar25 + 0x740) = 0;
        local_40 = &PTR_FUN_710523d9e8;
        local_38 = 0;
        if (uVar21 != 0) {
          FUN_710392eb40(uVar21);
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x10b0) == '\x04') {
        bVar18 = *(char *)(param_1 + 0x10b2) == '\0';
        goto LAB_7101c589f0;
      }
      bVar18 = false;
      if (!bVar17) goto LAB_7101c58a08;
LAB_7101c589f4:
      param_3 = 3;
LAB_7101c58a14:
      FUN_7101c76f30(lVar23,3,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    bVar17 = false;
    if (*(char *)(param_1 + 0x129e) != '\0') {
      if ((*(byte *)(param_1 + 0x1298) | 1) == 3) {
        bVar17 = false;
        if ((*(int *)(param_1 + 0x2c0) - 5U < 4) && (4 < *(int *)(param_1 + 0x2c0) - 7U)) {
          bVar17 = *(char *)(param_1 + 0x129a) == '\0';
        }
      }
      else {
        bVar17 = false;
      }
    }
    bVar18 = false;
    if (*(char *)(param_1 + 0x129d) == '\0') {
LAB_7101c58aa0:
      if (bVar17) goto LAB_7101c58aa4;
LAB_7101c58ab8:
      if (bVar18) {
        param_3 = 4;
        goto LAB_7101c58ac4;
      }
      lVar25 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar25 + 0x920) != 0) {
        FUN_71037780e0(&local_40,lVar25 + 0x7a8,(long ****)"balloon_off",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377aee0(0x3f800000,(long)&local_40);
        uVar21 = local_38;
        *(undefined4 *)(lVar25 + 0x920) = 0;
        local_40 = &PTR_FUN_710523d9e8;
        local_38 = 0;
        if (uVar21 != 0) {
          FUN_710392eb40(uVar21);
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x1298) == '\x04') {
        bVar18 = *(char *)(param_1 + 0x129a) == '\0';
        goto LAB_7101c58aa0;
      }
      bVar18 = false;
      if (!bVar17) goto LAB_7101c58ab8;
LAB_7101c58aa4:
      param_3 = 3;
LAB_7101c58ac4:
      FUN_7101c76f30(lVar23,4,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    bVar17 = false;
    if (*(char *)(param_1 + 0x1486) != '\0') {
      if ((*(byte *)(param_1 + 0x1480) | 1) == 3) {
        bVar17 = false;
        if ((*(int *)(param_1 + 0x2c0) - 5U < 4) && (4 < *(int *)(param_1 + 0x2c0) - 7U)) {
          bVar17 = *(char *)(param_1 + 0x1482) == '\0';
        }
      }
      else {
        bVar17 = false;
      }
    }
    bVar18 = false;
    if (*(char *)(param_1 + 0x1485) == '\0') {
LAB_7101c58b50:
      if (bVar17) goto LAB_7101c58b54;
LAB_7101c58b68:
      if (bVar18) {
        param_3 = 4;
        goto LAB_7101c58b74;
      }
      lVar25 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar25 + 0xb00) != 0) {
        FUN_71037780e0(&local_40,lVar25 + 0x988,(long ****)"balloon_off",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377aee0(0x3f800000,(long)&local_40);
        uVar21 = local_38;
        *(undefined4 *)(lVar25 + 0xb00) = 0;
        local_40 = &PTR_FUN_710523d9e8;
        local_38 = 0;
        if (uVar21 != 0) {
          FUN_710392eb40(uVar21);
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x1480) == '\x04') {
        bVar18 = *(char *)(param_1 + 0x1482) == '\0';
        goto LAB_7101c58b50;
      }
      bVar18 = false;
      if (!bVar17) goto LAB_7101c58b68;
LAB_7101c58b54:
      param_3 = 3;
LAB_7101c58b74:
      FUN_7101c76f30(lVar23,5,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    bVar17 = false;
    if (*(char *)(param_1 + 0x166e) != '\0') {
      if ((*(byte *)(param_1 + 0x1668) | 1) == 3) {
        bVar17 = false;
        if ((*(int *)(param_1 + 0x2c0) - 5U < 4) && (4 < *(int *)(param_1 + 0x2c0) - 7U)) {
          bVar17 = *(char *)(param_1 + 0x166a) == '\0';
        }
      }
      else {
        bVar17 = false;
      }
    }
    bVar18 = false;
    if (*(char *)(param_1 + 0x166d) == '\0') {
LAB_7101c58c00:
      if (bVar17) goto LAB_7101c58c04;
LAB_7101c58c18:
      if (bVar18) {
        param_3 = 4;
        goto LAB_7101c58c24;
      }
      lVar25 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar25 + 0xce0) != 0) {
        FUN_71037780e0(&local_40,lVar25 + 0xb68,(long ****)"balloon_off",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377aee0(0x3f800000,(long)&local_40);
        uVar21 = local_38;
        *(undefined4 *)(lVar25 + 0xce0) = 0;
        local_40 = &PTR_FUN_710523d9e8;
        local_38 = 0;
        if (uVar21 != 0) {
          FUN_710392eb40(uVar21);
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x1668) == '\x04') {
        bVar18 = *(char *)(param_1 + 0x166a) == '\0';
        goto LAB_7101c58c00;
      }
      bVar18 = false;
      if (!bVar17) goto LAB_7101c58c18;
LAB_7101c58c04:
      param_3 = 3;
LAB_7101c58c24:
      FUN_7101c76f30(lVar23,6,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    bVar17 = false;
    if (*(char *)(param_1 + 0x1856) != '\0') {
      if ((*(byte *)(param_1 + 0x1850) | 1) == 3) {
        bVar17 = false;
        if ((*(int *)(param_1 + 0x2c0) - 5U < 4) && (4 < *(int *)(param_1 + 0x2c0) - 7U)) {
          bVar17 = *(char *)(param_1 + 0x1852) == '\0';
        }
      }
      else {
        bVar17 = false;
      }
    }
    bVar18 = false;
    if (*(char *)(param_1 + 0x1855) == '\0') {
LAB_7101c58cb0:
      if (bVar17) goto LAB_7101c58cb4;
LAB_7101c58cc8:
      if (bVar18) {
        uVar22 = 4;
        goto LAB_7101c58cd4;
      }
      lVar23 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar23 + 0xec0) != 0) {
        FUN_71037780e0(&local_40,lVar23 + 0xd48,(long ****)"balloon_off",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377aee0(0x3f800000,(long)&local_40);
        uVar21 = local_38;
        *(undefined4 *)(lVar23 + 0xec0) = 0;
        local_40 = &PTR_FUN_710523d9e8;
        local_38 = 0;
        if (uVar21 != 0) {
          FUN_710392eb40(uVar21);
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x1850) == '\x04') {
        bVar18 = *(char *)(param_1 + 0x1852) == '\0';
        goto LAB_7101c58cb0;
      }
      bVar18 = false;
      if (!bVar17) goto LAB_7101c58cc8;
LAB_7101c58cb4:
      uVar22 = 3;
LAB_7101c58cd4:
      FUN_7101c76f30(lVar23,7,uVar22,param_4,param_5,param_6,param_7,param_8);
    }
    FUN_7101c591b0(param_1,0,0,0);
    uVar21 = *(ulong *)(param_1 + 0x428);
    if ((uVar21 & 1) == 0) {
LAB_7101c58cf8:
      uVar24 = 0;
    }
    else {
      plVar26 = *(long **)(param_1 + 0x2f8);
      plVar19 = (long *)**(long **)(*plVar26 + 0x18);
      if (plVar19 == (long *)0x0) {
LAB_7101c58fc8:
        uVar21 = *(ulong *)(param_1 + 0x428);
      }
      else {
        uVar21 = (**(code **)(*plVar19 + 0x2f8))();
        if ((uVar21 & 1) != 0) {
          uVar21 = *(ulong *)(param_1 + 0x428);
          uVar24 = 0;
          goto LAB_7101c58fdc;
        }
        plVar19 = (long *)**(long **)(*plVar26 + 0x18);
        if (plVar19 == (long *)0x0) goto LAB_7101c58fc8;
        uVar20 = (**(code **)(*plVar19 + 0x3c0))();
        uVar21 = *(ulong *)(param_1 + 0x428);
        if ((uVar20 & 1) == 0) goto LAB_7101c58cf8;
      }
      if (((uint)uVar21 >> 1 & 1) == 0) {
        uVar24 = (uint)(uVar21 >> 2) & 1;
      }
      else {
        uVar24 = 1;
      }
    }
LAB_7101c58fdc:
    *(ulong *)(param_1 + 0x428) = uVar21 & 0xfffffffffffffffd;
    if ((uVar21 & 1) == 0) {
LAB_7101c59048:
      if (uVar24 != 0) {
LAB_7101c5904c:
        *(undefined1 *)(param_1 + 0x431) = 0;
      }
    }
    else {
      plVar26 = *(long **)(param_1 + 0x2f8);
      plVar19 = (long *)**(long **)(*plVar26 + 0x18);
      if ((plVar19 != (long *)0x0) &&
         ((uVar21 = (**(code **)(*plVar19 + 0x2f8))(), (uVar21 & 1) != 0 ||
          ((plVar19 = (long *)**(long **)(*plVar26 + 0x18), plVar19 != (long *)0x0 &&
           (uVar21 = (**(code **)(*plVar19 + 0x3c0))(), (uVar21 & 1) == 0)))))) goto LAB_7101c59048;
      if (((uint)*(ulong *)(param_1 + 0x428) >> 1 & 1) == 0) {
        if ((uVar24 ^ (uint)(*(ulong *)(param_1 + 0x428) >> 2) & 1) != 1) goto LAB_7101c59050;
        goto LAB_7101c5904c;
      }
      if (uVar24 == 0) goto LAB_7101c5904c;
    }
LAB_7101c59050:
    lVar23 = param_1 + 0x800;
    FUN_7101c59330(lVar23,0,0,0,param_5,param_6,param_7,param_8);
    FUN_7101c59660(lVar23);
    FUN_7101c597c0(lVar23,0,0,0,param_5,param_6,param_7,param_8);
    FUN_7101c597c0(lVar23,1,0,0,param_5,param_6,param_7,param_8);
    FUN_7101c597c0(lVar23,2,0,0,param_5,param_6,param_7,param_8);
    FUN_7101c597c0(lVar23,3,0,0,param_5,param_6,param_7,param_8);
    *(undefined1 *)(param_1 + 0x80b) = 0;
    uVar21 = (ulong)*(byte *)(param_1 + 0x1920);
    if (7 < uVar21) goto LAB_7101c591a8;
    lVar23 = *(long *)(param_1 + 0x450) + uVar21 * 0x1e0;
    if (*(char *)(lVar23 + 0x19b) == '\0') {
      FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 0x450) + uVar21 * 0x1e0 + 0x30),
                     0x71043f0a45);
    }
    *(undefined1 *)(lVar23 + 0x19b) = 1;
    pcVar1[0] = '\x01';
    pcVar1[1] = '\0';
    local_40 = (undefined **)((ulong)local_40 & 0xffffffffffffff00);
    plVar19 = *(long **)(param_1 + 0x1a70);
  }
  else {
    lVar23 = *(long *)(param_1 + 0x450);
    if ((*(char *)(lVar23 + 400) != '\0') && (*(char *)(lVar23 + 0x192) != '\0')) {
      iVar27 = -(uint)((float)*(undefined8 *)(lVar23 + 0x150) == *(float *)(lVar23 + 0x160));
      iVar28 = -(uint)((float)((ulong)*(undefined8 *)(lVar23 + 0x150) >> 0x20) ==
                      *(float *)(lVar23 + 0x164));
      iVar29 = -(uint)((float)*(undefined8 *)(lVar23 + 0x158) == *(float *)(lVar23 + 0x168));
      iVar30 = -(uint)((float)((ulong)*(undefined8 *)(lVar23 + 0x158) >> 0x20) ==
                      *(float *)(lVar23 + 0x16c));
      auVar31._4_4_ = iVar28;
      auVar31._0_4_ = iVar27;
      auVar31._8_4_ = iVar29;
      auVar31._12_4_ = iVar30;
      auVar2._4_4_ = iVar28;
      auVar2._0_4_ = iVar27;
      auVar2._8_4_ = iVar29;
      auVar2._12_4_ = iVar30;
      auVar31 = NEON_ext(auVar31,auVar2,8,1);
      uVar21 = CONCAT44(iVar28,iVar27) & auVar31._0_8_;
      if (((uint)uVar21 & (uint)(uVar21 >> 0x20)) == 0) {
        return;
      }
    }
    if ((*(char *)(lVar23 + 0x370) != '\0') && (*(char *)(lVar23 + 0x372) != '\0')) {
      iVar27 = -(uint)((float)*(undefined8 *)(lVar23 + 0x330) == *(float *)(lVar23 + 0x340));
      iVar28 = -(uint)((float)((ulong)*(undefined8 *)(lVar23 + 0x330) >> 0x20) ==
                      *(float *)(lVar23 + 0x344));
      iVar29 = -(uint)((float)*(undefined8 *)(lVar23 + 0x338) == *(float *)(lVar23 + 0x348));
      iVar30 = -(uint)((float)((ulong)*(undefined8 *)(lVar23 + 0x338) >> 0x20) ==
                      *(float *)(lVar23 + 0x34c));
      auVar3._4_4_ = iVar28;
      auVar3._0_4_ = iVar27;
      auVar3._8_4_ = iVar29;
      auVar3._12_4_ = iVar30;
      auVar4._4_4_ = iVar28;
      auVar4._0_4_ = iVar27;
      auVar4._8_4_ = iVar29;
      auVar4._12_4_ = iVar30;
      auVar31 = NEON_ext(auVar3,auVar4,8,1);
      uVar21 = CONCAT44(iVar28,iVar27) & auVar31._0_8_;
      if (((uint)uVar21 & (uint)(uVar21 >> 0x20)) == 0) {
        return;
      }
    }
    if ((*(char *)(lVar23 + 0x550) != '\0') && (*(char *)(lVar23 + 0x552) != '\0')) {
      iVar27 = -(uint)((float)*(undefined8 *)(lVar23 + 0x510) == *(float *)(lVar23 + 0x520));
      iVar28 = -(uint)((float)((ulong)*(undefined8 *)(lVar23 + 0x510) >> 0x20) ==
                      *(float *)(lVar23 + 0x524));
      iVar29 = -(uint)((float)*(undefined8 *)(lVar23 + 0x518) == *(float *)(lVar23 + 0x528));
      iVar30 = -(uint)((float)((ulong)*(undefined8 *)(lVar23 + 0x518) >> 0x20) ==
                      *(float *)(lVar23 + 0x52c));
      auVar5._4_4_ = iVar28;
      auVar5._0_4_ = iVar27;
      auVar5._8_4_ = iVar29;
      auVar5._12_4_ = iVar30;
      auVar6._4_4_ = iVar28;
      auVar6._0_4_ = iVar27;
      auVar6._8_4_ = iVar29;
      auVar6._12_4_ = iVar30;
      auVar31 = NEON_ext(auVar5,auVar6,8,1);
      uVar21 = CONCAT44(iVar28,iVar27) & auVar31._0_8_;
      if (((uint)uVar21 & (uint)(uVar21 >> 0x20)) == 0) {
        return;
      }
    }
    if ((*(char *)(lVar23 + 0x730) != '\0') && (*(char *)(lVar23 + 0x732) != '\0')) {
      iVar27 = -(uint)((float)*(undefined8 *)(lVar23 + 0x6f0) == *(float *)(lVar23 + 0x700));
      iVar28 = -(uint)((float)((ulong)*(undefined8 *)(lVar23 + 0x6f0) >> 0x20) ==
                      *(float *)(lVar23 + 0x704));
      iVar29 = -(uint)((float)*(undefined8 *)(lVar23 + 0x6f8) == *(float *)(lVar23 + 0x708));
      iVar30 = -(uint)((float)((ulong)*(undefined8 *)(lVar23 + 0x6f8) >> 0x20) ==
                      *(float *)(lVar23 + 0x70c));
      auVar7._4_4_ = iVar28;
      auVar7._0_4_ = iVar27;
      auVar7._8_4_ = iVar29;
      auVar7._12_4_ = iVar30;
      auVar8._4_4_ = iVar28;
      auVar8._0_4_ = iVar27;
      auVar8._8_4_ = iVar29;
      auVar8._12_4_ = iVar30;
      auVar31 = NEON_ext(auVar7,auVar8,8,1);
      uVar21 = CONCAT44(iVar28,iVar27) & auVar31._0_8_;
      if (((uint)uVar21 & (uint)(uVar21 >> 0x20)) == 0) {
        return;
      }
    }
    if ((*(char *)(lVar23 + 0x910) != '\0') && (*(char *)(lVar23 + 0x912) != '\0')) {
      iVar27 = -(uint)((float)*(undefined8 *)(lVar23 + 0x8d0) == *(float *)(lVar23 + 0x8e0));
      iVar28 = -(uint)((float)((ulong)*(undefined8 *)(lVar23 + 0x8d0) >> 0x20) ==
                      *(float *)(lVar23 + 0x8e4));
      iVar29 = -(uint)((float)*(undefined8 *)(lVar23 + 0x8d8) == *(float *)(lVar23 + 0x8e8));
      iVar30 = -(uint)((float)((ulong)*(undefined8 *)(lVar23 + 0x8d8) >> 0x20) ==
                      *(float *)(lVar23 + 0x8ec));
      auVar9._4_4_ = iVar28;
      auVar9._0_4_ = iVar27;
      auVar9._8_4_ = iVar29;
      auVar9._12_4_ = iVar30;
      auVar10._4_4_ = iVar28;
      auVar10._0_4_ = iVar27;
      auVar10._8_4_ = iVar29;
      auVar10._12_4_ = iVar30;
      auVar31 = NEON_ext(auVar9,auVar10,8,1);
      uVar21 = CONCAT44(iVar28,iVar27) & auVar31._0_8_;
      if (((uint)uVar21 & (uint)(uVar21 >> 0x20)) == 0) {
        return;
      }
    }
    if ((*(char *)(lVar23 + 0xaf0) != '\0') && (*(char *)(lVar23 + 0xaf2) != '\0')) {
      iVar27 = -(uint)((float)*(undefined8 *)(lVar23 + 0xab0) == *(float *)(lVar23 + 0xac0));
      iVar28 = -(uint)((float)((ulong)*(undefined8 *)(lVar23 + 0xab0) >> 0x20) ==
                      *(float *)(lVar23 + 0xac4));
      iVar29 = -(uint)((float)*(undefined8 *)(lVar23 + 0xab8) == *(float *)(lVar23 + 0xac8));
      iVar30 = -(uint)((float)((ulong)*(undefined8 *)(lVar23 + 0xab8) >> 0x20) ==
                      *(float *)(lVar23 + 0xacc));
      auVar11._4_4_ = iVar28;
      auVar11._0_4_ = iVar27;
      auVar11._8_4_ = iVar29;
      auVar11._12_4_ = iVar30;
      auVar12._4_4_ = iVar28;
      auVar12._0_4_ = iVar27;
      auVar12._8_4_ = iVar29;
      auVar12._12_4_ = iVar30;
      auVar31 = NEON_ext(auVar11,auVar12,8,1);
      uVar21 = CONCAT44(iVar28,iVar27) & auVar31._0_8_;
      if (((uint)uVar21 & (uint)(uVar21 >> 0x20)) == 0) {
        return;
      }
    }
    if ((*(char *)(lVar23 + 0xcd0) != '\0') && (*(char *)(lVar23 + 0xcd2) != '\0')) {
      iVar27 = -(uint)((float)*(undefined8 *)(lVar23 + 0xc90) == *(float *)(lVar23 + 0xca0));
      iVar28 = -(uint)((float)((ulong)*(undefined8 *)(lVar23 + 0xc90) >> 0x20) ==
                      *(float *)(lVar23 + 0xca4));
      iVar29 = -(uint)((float)*(undefined8 *)(lVar23 + 0xc98) == *(float *)(lVar23 + 0xca8));
      iVar30 = -(uint)((float)((ulong)*(undefined8 *)(lVar23 + 0xc98) >> 0x20) ==
                      *(float *)(lVar23 + 0xcac));
      auVar13._4_4_ = iVar28;
      auVar13._0_4_ = iVar27;
      auVar13._8_4_ = iVar29;
      auVar13._12_4_ = iVar30;
      auVar14._4_4_ = iVar28;
      auVar14._0_4_ = iVar27;
      auVar14._8_4_ = iVar29;
      auVar14._12_4_ = iVar30;
      auVar31 = NEON_ext(auVar13,auVar14,8,1);
      uVar21 = CONCAT44(iVar28,iVar27) & auVar31._0_8_;
      if (((uint)uVar21 & (uint)(uVar21 >> 0x20)) == 0) {
        return;
      }
    }
    if ((*(char *)(lVar23 + 0xeb0) != '\0') && (*(char *)(lVar23 + 0xeb2) != '\0')) {
      iVar27 = -(uint)((float)*(undefined8 *)(lVar23 + 0xe70) == *(float *)(lVar23 + 0xe80));
      iVar28 = -(uint)((float)((ulong)*(undefined8 *)(lVar23 + 0xe70) >> 0x20) ==
                      *(float *)(lVar23 + 0xe84));
      iVar29 = -(uint)((float)*(undefined8 *)(lVar23 + 0xe78) == *(float *)(lVar23 + 0xe88));
      iVar30 = -(uint)((float)((ulong)*(undefined8 *)(lVar23 + 0xe78) >> 0x20) ==
                      *(float *)(lVar23 + 0xe8c));
      auVar15._4_4_ = iVar28;
      auVar15._0_4_ = iVar27;
      auVar15._8_4_ = iVar29;
      auVar15._12_4_ = iVar30;
      auVar16._4_4_ = iVar28;
      auVar16._0_4_ = iVar27;
      auVar16._8_4_ = iVar29;
      auVar16._12_4_ = iVar30;
      auVar31 = NEON_ext(auVar15,auVar16,8,1);
      uVar21 = CONCAT44(iVar28,iVar27) & auVar31._0_8_;
      if (((uint)uVar21 & (uint)(uVar21 >> 0x20)) == 0) {
        return;
      }
    }
    if (*(long *)(param_1 + 0x1b18) != 0) {
      return;
    }
    if ((uint)(*(int *)(param_1 + 0x2c4) - *(int *)(param_1 + 0x1b2c)) < 0xf) {
      return;
    }
    if (*pcVar1 == '\0') {
      if (*(uint *)(param_1 + 700) < 0x13) {
        *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 700) * 4 + 0x270) = 1;
        return;
      }
      goto LAB_7101c591a8;
    }
    local_40 = (undefined **)CONCAT71(local_40._1_7_,*(undefined1 *)(param_1 + 0x1b21));
    plVar19 = *(long **)(param_1 + 0x1a70);
  }
  if (plVar19 == (long *)0x0) {
LAB_7101c591a8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar21 = (**(code **)(*plVar19 + 0x30))(plVar19,&local_40);
  if ((uVar21 & 1) == 0) {
    *pcVar1 = '\0';
    if (0x12 < *(uint *)(param_1 + 700)) goto LAB_7101c591a8;
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 700) * 4 + 0x270) = 1;
  }
  else {
    *(char *)(param_1 + 0x1b21) = *(char *)(param_1 + 0x1b21) + '\x01';
    *pcVar1 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x1b2c) = *(undefined4 *)(param_1 + 0x2c4);
  return;
}

