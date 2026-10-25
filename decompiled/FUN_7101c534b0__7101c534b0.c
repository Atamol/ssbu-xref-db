// addr:      7101c534b0
// offset:    0x1c534b0
// name:      FUN_7101c534b0
// mangled:   
// signature: undefined __cdecl FUN_7101c534b0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c534b0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  char cVar2;
  undefined **ppuVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long ****pppplVar10;
  byte ****ppppbVar11;
  long ****pppplVar12;
  byte ****ppppbVar13;
  int iVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  float fVar22;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  long ***local_a0;
  ulong local_98;
  undefined **local_90;
  undefined **local_88;
  long local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  byte ***local_50;
  undefined4 local_44;
  
  pppplVar12 = &local_a0;
  pbVar1 = (byte *)(param_1 + 0x1920);
  if (7 < (ulong)*pbVar1) goto LAB_7101c54180;
  cVar2 = *(char *)(param_1 + (ulong)*pbVar1 * 0x1e8 + 0xaf8);
  if (*(int *)(param_1 + 0x2c4) == 0) {
    if ((((*(char *)(param_1 + 0xafe) == '\0') || ((*(byte *)(param_1 + 0xaf8) | 1) != 3)) ||
        (3 < *(int *)(param_1 + 0x2c0) - 5U)) || (*(int *)(param_1 + 0x2c0) - 7U < 5)) {
      bVar4 = false;
      if (*(char *)(param_1 + 0xafd) == '\0') goto LAB_7101c53550;
LAB_7101c5356c:
      if (*(char *)(param_1 + 0xaf8) == '\x04') {
        bVar5 = *(char *)(param_1 + 0xafa) == '\0';
        goto joined_r0x007101c53588;
      }
      bVar5 = false;
      if (!bVar4) goto LAB_7101c5358c;
LAB_7101c53558:
      param_3 = 3;
LAB_7101c53594:
      FUN_7101c76f30(param_1 + 0x448,0,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101c535a0:
      if (*(char *)(param_1 + 0xce6) == '\0') goto LAB_7101c53610;
LAB_7101c535a8:
      if ((((*(byte *)(param_1 + 0xce0) | 1) != 3) || (3 < *(int *)(param_1 + 0x2c0) - 5U)) ||
         (*(int *)(param_1 + 0x2c0) - 7U < 5)) goto LAB_7101c53610;
      bVar4 = *(char *)(param_1 + 0xce2) == '\0';
      if (*(char *)(param_1 + 0xce5) == '\0') goto LAB_7101c535ec;
LAB_7101c53618:
      if (*(char *)(param_1 + 0xce0) == '\x04') {
        bVar5 = *(char *)(param_1 + 0xce2) == '\0';
        goto joined_r0x007101c535ec;
      }
      bVar5 = false;
      if (!bVar4) goto LAB_7101c53634;
LAB_7101c535f0:
      param_3 = 3;
LAB_7101c53640:
      FUN_7101c76f30(param_1 + 0x448,1,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101c53648:
      if (*(char *)(param_1 + 0xece) == '\0') goto LAB_7101c536b4;
LAB_7101c53650:
      if ((((*(byte *)(param_1 + 0xec8) | 1) != 3) || (3 < *(int *)(param_1 + 0x2c0) - 5U)) ||
         (*(int *)(param_1 + 0x2c0) - 7U < 5)) goto LAB_7101c536b4;
      bVar4 = *(char *)(param_1 + 0xeca) == '\0';
      if (*(char *)(param_1 + 0xecd) != '\0') goto LAB_7101c536bc;
LAB_7101c53694:
      bVar5 = false;
joined_r0x007101c536d4:
      if (!bVar4) goto LAB_7101c536d8;
LAB_7101c53698:
      param_3 = 3;
LAB_7101c536e4:
      FUN_7101c76f30(param_1 + 0x448,2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      bVar4 = *(char *)(param_1 + 0xafa) == '\0';
      if (*(char *)(param_1 + 0xafd) != '\0') goto LAB_7101c5356c;
LAB_7101c53550:
      bVar5 = false;
joined_r0x007101c53588:
      if (bVar4) goto LAB_7101c53558;
LAB_7101c5358c:
      if (bVar5) {
        param_3 = 4;
        goto LAB_7101c53594;
      }
      lVar17 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar17 + 0x1a0) == 0) goto LAB_7101c535a0;
      FUN_71037780e0(&local_90,lVar17 + 0x28,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_90);
      ppuVar3 = local_88;
      *(undefined4 *)(lVar17 + 0x1a0) = 0;
      local_90 = &PTR_FUN_710523d9e8;
      local_88 = (undefined **)0x0;
      if (ppuVar3 == (undefined **)0x0) goto LAB_7101c535a0;
      FUN_710392eb40((ulong)ppuVar3);
      if (*(char *)(param_1 + 0xce6) != '\0') goto LAB_7101c535a8;
LAB_7101c53610:
      bVar4 = false;
      if (*(char *)(param_1 + 0xce5) != '\0') goto LAB_7101c53618;
LAB_7101c535ec:
      bVar5 = false;
joined_r0x007101c535ec:
      if (bVar4) goto LAB_7101c535f0;
LAB_7101c53634:
      if (bVar5) {
        param_3 = 4;
        goto LAB_7101c53640;
      }
      lVar17 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar17 + 0x380) == 0) goto LAB_7101c53648;
      FUN_71037780e0(&local_90,lVar17 + 0x208,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_90);
      ppuVar3 = local_88;
      *(undefined4 *)(lVar17 + 0x380) = 0;
      local_90 = &PTR_FUN_710523d9e8;
      local_88 = (undefined **)0x0;
      if (ppuVar3 == (undefined **)0x0) goto LAB_7101c53648;
      FUN_710392eb40((ulong)ppuVar3);
      if (*(char *)(param_1 + 0xece) != '\0') goto LAB_7101c53650;
LAB_7101c536b4:
      bVar4 = false;
      if (*(char *)(param_1 + 0xecd) == '\0') goto LAB_7101c53694;
LAB_7101c536bc:
      if (*(char *)(param_1 + 0xec8) == '\x04') {
        bVar5 = *(char *)(param_1 + 0xeca) == '\0';
        goto joined_r0x007101c536d4;
      }
      bVar5 = false;
      if (bVar4) goto LAB_7101c53698;
LAB_7101c536d8:
      if (bVar5) {
        param_3 = 4;
        goto LAB_7101c536e4;
      }
      lVar17 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar17 + 0x560) != 0) {
        FUN_71037780e0(&local_90,lVar17 + 1000,(long ****)"balloon_off",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377aee0(0x3f800000,(long)&local_90);
        ppuVar3 = local_88;
        *(undefined4 *)(lVar17 + 0x560) = 0;
        local_90 = &PTR_FUN_710523d9e8;
        local_88 = (undefined **)0x0;
        if (ppuVar3 != (undefined **)0x0) {
          FUN_710392eb40((ulong)ppuVar3);
        }
      }
    }
    lVar17 = param_1 + 0x448;
    bVar4 = false;
    if (*(char *)(param_1 + 0x10b6) != '\0') {
      if ((*(byte *)(param_1 + 0x10b0) | 1) == 3) {
        bVar4 = false;
        if ((*(int *)(param_1 + 0x2c0) - 5U < 4) && (4 < *(int *)(param_1 + 0x2c0) - 7U)) {
          bVar4 = *(char *)(param_1 + 0x10b2) == '\0';
        }
      }
      else {
        bVar4 = false;
      }
    }
    bVar5 = false;
    if (*(char *)(param_1 + 0x10b5) == '\0') {
LAB_7101c5377c:
      if (bVar4) goto LAB_7101c53780;
LAB_7101c53794:
      if (bVar5) {
        param_3 = 4;
        goto LAB_7101c537a0;
      }
      lVar19 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar19 + 0x740) != 0) {
        FUN_71037780e0(&local_90,lVar19 + 0x5c8,(long ****)"balloon_off",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377aee0(0x3f800000,(long)&local_90);
        ppuVar3 = local_88;
        *(undefined4 *)(lVar19 + 0x740) = 0;
        local_90 = &PTR_FUN_710523d9e8;
        local_88 = (undefined **)0x0;
        if (ppuVar3 != (undefined **)0x0) {
          FUN_710392eb40((ulong)ppuVar3);
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x10b0) == '\x04') {
        bVar5 = *(char *)(param_1 + 0x10b2) == '\0';
        goto LAB_7101c5377c;
      }
      bVar5 = false;
      if (!bVar4) goto LAB_7101c53794;
LAB_7101c53780:
      param_3 = 3;
LAB_7101c537a0:
      FUN_7101c76f30(lVar17,3,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    bVar4 = false;
    if (*(char *)(param_1 + 0x129e) != '\0') {
      if ((*(byte *)(param_1 + 0x1298) | 1) == 3) {
        bVar4 = false;
        if ((*(int *)(param_1 + 0x2c0) - 5U < 4) && (4 < *(int *)(param_1 + 0x2c0) - 7U)) {
          bVar4 = *(char *)(param_1 + 0x129a) == '\0';
        }
      }
      else {
        bVar4 = false;
      }
    }
    bVar5 = false;
    if (*(char *)(param_1 + 0x129d) == '\0') {
LAB_7101c5382c:
      if (bVar4) goto LAB_7101c53830;
LAB_7101c53844:
      if (bVar5) {
        param_3 = 4;
        goto LAB_7101c53850;
      }
      lVar19 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar19 + 0x920) != 0) {
        FUN_71037780e0(&local_90,lVar19 + 0x7a8,(long ****)"balloon_off",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377aee0(0x3f800000,(long)&local_90);
        ppuVar3 = local_88;
        *(undefined4 *)(lVar19 + 0x920) = 0;
        local_90 = &PTR_FUN_710523d9e8;
        local_88 = (undefined **)0x0;
        if (ppuVar3 != (undefined **)0x0) {
          FUN_710392eb40((ulong)ppuVar3);
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x1298) == '\x04') {
        bVar5 = *(char *)(param_1 + 0x129a) == '\0';
        goto LAB_7101c5382c;
      }
      bVar5 = false;
      if (!bVar4) goto LAB_7101c53844;
LAB_7101c53830:
      param_3 = 3;
LAB_7101c53850:
      FUN_7101c76f30(lVar17,4,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    bVar4 = false;
    if (*(char *)(param_1 + 0x1486) != '\0') {
      if ((*(byte *)(param_1 + 0x1480) | 1) == 3) {
        bVar4 = false;
        if ((*(int *)(param_1 + 0x2c0) - 5U < 4) && (4 < *(int *)(param_1 + 0x2c0) - 7U)) {
          bVar4 = *(char *)(param_1 + 0x1482) == '\0';
        }
      }
      else {
        bVar4 = false;
      }
    }
    bVar5 = false;
    if (*(char *)(param_1 + 0x1485) == '\0') {
LAB_7101c538dc:
      if (bVar4) goto LAB_7101c538e0;
LAB_7101c538f4:
      if (bVar5) {
        param_3 = 4;
        goto LAB_7101c53900;
      }
      lVar19 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar19 + 0xb00) != 0) {
        FUN_71037780e0(&local_90,lVar19 + 0x988,(long ****)"balloon_off",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377aee0(0x3f800000,(long)&local_90);
        ppuVar3 = local_88;
        *(undefined4 *)(lVar19 + 0xb00) = 0;
        local_90 = &PTR_FUN_710523d9e8;
        local_88 = (undefined **)0x0;
        if (ppuVar3 != (undefined **)0x0) {
          FUN_710392eb40((ulong)ppuVar3);
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x1480) == '\x04') {
        bVar5 = *(char *)(param_1 + 0x1482) == '\0';
        goto LAB_7101c538dc;
      }
      bVar5 = false;
      if (!bVar4) goto LAB_7101c538f4;
LAB_7101c538e0:
      param_3 = 3;
LAB_7101c53900:
      FUN_7101c76f30(lVar17,5,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    bVar4 = false;
    if (*(char *)(param_1 + 0x166e) != '\0') {
      if ((*(byte *)(param_1 + 0x1668) | 1) == 3) {
        bVar4 = false;
        if ((*(int *)(param_1 + 0x2c0) - 5U < 4) && (4 < *(int *)(param_1 + 0x2c0) - 7U)) {
          bVar4 = *(char *)(param_1 + 0x166a) == '\0';
        }
      }
      else {
        bVar4 = false;
      }
    }
    bVar5 = false;
    if (*(char *)(param_1 + 0x166d) == '\0') {
LAB_7101c5398c:
      if (bVar4) goto LAB_7101c53990;
LAB_7101c539a4:
      if (bVar5) {
        param_3 = 4;
        goto LAB_7101c539b0;
      }
      lVar19 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar19 + 0xce0) != 0) {
        FUN_71037780e0(&local_90,lVar19 + 0xb68,(long ****)"balloon_off",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377aee0(0x3f800000,(long)&local_90);
        ppuVar3 = local_88;
        *(undefined4 *)(lVar19 + 0xce0) = 0;
        local_90 = &PTR_FUN_710523d9e8;
        local_88 = (undefined **)0x0;
        if (ppuVar3 != (undefined **)0x0) {
          FUN_710392eb40((ulong)ppuVar3);
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x1668) == '\x04') {
        bVar5 = *(char *)(param_1 + 0x166a) == '\0';
        goto LAB_7101c5398c;
      }
      bVar5 = false;
      if (!bVar4) goto LAB_7101c539a4;
LAB_7101c53990:
      param_3 = 3;
LAB_7101c539b0:
      FUN_7101c76f30(lVar17,6,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    bVar4 = false;
    if (*(char *)(param_1 + 0x1856) != '\0') {
      if ((*(byte *)(param_1 + 0x1850) | 1) == 3) {
        bVar4 = false;
        if ((*(int *)(param_1 + 0x2c0) - 5U < 4) && (4 < *(int *)(param_1 + 0x2c0) - 7U)) {
          bVar4 = *(char *)(param_1 + 0x1852) == '\0';
        }
      }
      else {
        bVar4 = false;
      }
    }
    bVar5 = false;
    if (*(char *)(param_1 + 0x1855) == '\0') {
LAB_7101c53a3c:
      if (bVar4) goto LAB_7101c53a40;
LAB_7101c53a54:
      if (bVar5) {
        uVar9 = 4;
        goto LAB_7101c53a60;
      }
      lVar17 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar17 + 0xec0) == 0) goto LAB_7101c53a68;
      FUN_71037780e0(&local_90,lVar17 + 0xd48,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_90);
      ppuVar3 = local_88;
      *(undefined4 *)(lVar17 + 0xec0) = 0;
      local_90 = &PTR_FUN_710523d9e8;
      local_88 = (undefined **)0x0;
      if (ppuVar3 == (undefined **)0x0) goto LAB_7101c53a68;
      FUN_710392eb40((ulong)ppuVar3);
      uVar15 = *(ulong *)(param_1 + 0x428);
      if ((uVar15 & 1) != 0) goto LAB_7101c53cec;
LAB_7101c53a70:
      uVar18 = 0;
    }
    else {
      if (*(char *)(param_1 + 0x1850) == '\x04') {
        bVar5 = *(char *)(param_1 + 0x1852) == '\0';
        goto LAB_7101c53a3c;
      }
      bVar5 = false;
      if (!bVar4) goto LAB_7101c53a54;
LAB_7101c53a40:
      uVar9 = 3;
LAB_7101c53a60:
      FUN_7101c76f30(lVar17,7,uVar9,param_4,param_5,param_6,param_7,param_8);
LAB_7101c53a68:
      uVar15 = *(ulong *)(param_1 + 0x428);
      if ((uVar15 & 1) == 0) goto LAB_7101c53a70;
LAB_7101c53cec:
      plVar21 = *(long **)(param_1 + 0x2f8);
      plVar8 = (long *)**(long **)(*plVar21 + 0x18);
      if (plVar8 == (long *)0x0) {
LAB_7101c53d44:
        uVar15 = *(ulong *)(param_1 + 0x428);
LAB_7101c53d48:
        if (((uint)uVar15 >> 1 & 1) == 0) {
          uVar18 = (uint)(uVar15 >> 2) & 1;
        }
        else {
          uVar18 = 1;
        }
      }
      else {
        uVar15 = (**(code **)(*plVar8 + 0x2f8))();
        if ((uVar15 & 1) == 0) {
          plVar8 = (long *)**(long **)(*plVar21 + 0x18);
          if (plVar8 == (long *)0x0) goto LAB_7101c53d44;
          uVar6 = (**(code **)(*plVar8 + 0x3c0))();
          uVar15 = *(ulong *)(param_1 + 0x428);
          if ((uVar6 & 1) == 0) goto LAB_7101c53a70;
          goto LAB_7101c53d48;
        }
        uVar15 = *(ulong *)(param_1 + 0x428);
        uVar18 = 0;
      }
    }
    *(ulong *)(param_1 + 0x428) = uVar15 & 0xfffffffffffffffd;
    if ((uVar15 & 1) == 0) {
LAB_7101c53dc4:
      if (uVar18 != 0) {
LAB_7101c53dc8:
        *(undefined1 *)(param_1 + 0x431) = 0;
      }
    }
    else {
      plVar21 = *(long **)(param_1 + 0x2f8);
      plVar8 = (long *)**(long **)(*plVar21 + 0x18);
      if ((plVar8 != (long *)0x0) &&
         ((uVar15 = (**(code **)(*plVar8 + 0x2f8))(), (uVar15 & 1) != 0 ||
          ((plVar8 = (long *)**(long **)(*plVar21 + 0x18), plVar8 != (long *)0x0 &&
           (uVar15 = (**(code **)(*plVar8 + 0x3c0))(), (uVar15 & 1) == 0)))))) goto LAB_7101c53dc4;
      if (((uint)*(ulong *)(param_1 + 0x428) >> 1 & 1) != 0) {
        if (uVar18 != 0) goto LAB_7101c53dcc;
        goto LAB_7101c53dc8;
      }
      if ((uVar18 ^ (uint)(*(ulong *)(param_1 + 0x428) >> 2) & 1) == 1) goto LAB_7101c53dc8;
    }
LAB_7101c53dcc:
    FUN_7101c59330(param_1 + 0x800,1,4,0,param_5,param_6,param_7,param_8);
    uVar15 = (ulong)*pbVar1;
    if (7 < uVar15) goto LAB_7101c54180;
    lVar17 = *(long *)(param_1 + 0x450) + uVar15 * 0x1e0;
    if (*(char *)(lVar17 + 0x19b) != '\0') {
      FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 0x450) + uVar15 * 0x1e0 + 0x30),
                     0x71042c4e37);
    }
    *(undefined1 *)(lVar17 + 0x19b) = 0;
    if (cVar2 == '\x04') {
      return;
    }
    local_90 = (undefined **)CONCAT71(local_90._1_7_,*pbVar1);
    local_a0 = (long ***)CONCAT71(local_a0._1_7_,1);
    local_50 = (byte ***)((ulong)local_50 & 0xffffffffffffff00);
    plVar8 = *(long **)(param_1 + 0x1a10);
    if (plVar8 == (long *)0x0) goto LAB_7101c54180;
    ppppbVar13 = &local_50;
    uVar15 = (**(code **)(*plVar8 + 0x30))(plVar8,&local_90,&local_a0);
    if ((uVar15 & 1) == 0) goto LAB_7101c540f4;
    lVar20 = *(long *)(*(long *)(param_1 + 0x470) + 0x80);
    lVar17 = *(long *)(lVar20 + 0x10);
    pppplVar10 = (long ****)0x11000;
    FUN_7103775dc0((long *)**(undefined8 **)(*(long *)(lVar17 + 0x80) + 0x18),1,(long ****)0x11000,
                   ppppbVar13,param_5,param_6,param_7,param_8);
    *(undefined1 *)(lVar17 + 0x70) = 0;
    *(undefined2 *)(lVar20 + 0x38) = 0x100;
    FUN_71037760f0(*(long *)**(undefined8 **)(lVar20 + 0x18),0);
    lVar17 = DAT_710532f8b8;
    lVar19 = *(long *)(DAT_710532f8c0 + 8);
    fVar22 = (float)FUN_71033112b0(0x41900000,lVar19,0xf26edfd4c);
    lVar17 = *(long *)(lVar17 + 8);
    if (*(int *)(lVar17 + 100) < 1) {
      uVar23 = FUN_71033112b0(0x41200000,lVar19,0xed3893c2f);
      *(undefined4 *)(lVar17 + 0x50) = uVar23;
      if (fVar22 <= 1.0) {
        fVar22 = 1.0;
      }
      *(undefined4 *)(lVar17 + 0x54) = *(undefined4 *)(lVar17 + 0x58);
      *(undefined4 *)(lVar17 + 0x5c) = 0;
      *(float *)(lVar17 + 0x60) = 1.0 / fVar22;
      iVar14 = 1;
    }
    else {
      iVar14 = *(int *)(lVar17 + 100) + 1;
    }
    *(int *)(lVar17 + 100) = iVar14;
    lVar17 = *(long *)(DAT_710532f8d0 + 8);
    if ((ulong)(*(long *)(lVar17 + 0x48) - *(long *)(lVar17 + 0x40) >> 3) < 6) {
      uVar15 = 0;
      if (*(char *)(lVar17 + 0x191) == '\0') goto LAB_7101c53f78;
LAB_7101c53fe8:
      local_78 = 0x87650000000000;
      local_68 = 0xffffffffffffffff;
      uStack_60 = 0;
      local_90 = (undefined **)((ulong)local_90 & 0xffffffff00000000);
      local_58 = 0;
    }
    else {
      uVar15 = *(ulong *)(*(long *)(lVar17 + 0x40) + 0x28);
      if (*(char *)(lVar17 + 0x191) != '\0') goto LAB_7101c53fe8;
LAB_7101c53f78:
      pppplVar10 = (long ****)&DAT_00000004;
      uVar6 = FUN_7103313f20(lVar17,uVar15,(long ****)&DAT_00000004,ppppbVar13,param_5,param_6,
                             param_7,param_8);
      if ((uVar6 & 1) == 0) goto LAB_7101c53fe8;
      FUN_71024076d0((undefined4 *)&local_90,uVar15);
      if (((local_80 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_78 == DAT_7106dd53ac)) {
        piVar16 = (int *)(local_80 + 0x38);
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar4) {
            *piVar16 = *piVar16 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    local_88 = &PTR_FUN_7104f73d50;
    local_80 = 0;
    local_70 = 0;
    FUN_71037780e0(&local_a0,lVar20 + 0x20,(long ****)&DAT_7104421055,pppplVar10,ppppbVar13,param_5,
                   param_6,param_7,param_8);
    puVar7 = (undefined8 *)
             FUN_710392e290(0x10,0x10,pppplVar10,ppppbVar13,param_5,param_6,param_7,param_8);
    if (puVar7 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_44 = 0;
        local_50 = (byte ***)&DAT_00000010;
        ppppbVar11 = &local_50;
        uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
        if (((uVar15 & 1) != 0) &&
           (puVar7 = (undefined8 *)
                     FUN_710392e290(0x10,0x10,(long ****)ppppbVar11,ppppbVar13,param_5,param_6,
                                    param_7,param_8), puVar7 != (undefined8 *)0x0))
        goto LAB_7101c54088;
      }
      puVar7 = (undefined8 *)0x0;
    }
LAB_7101c54088:
    uVar15 = local_98;
    *puVar7 = &PTR_FUN_710523d9e8;
    puVar7[1] = 0;
    if (&local_a0 != (long ****)puVar7) {
      local_98 = 0;
      puVar7[1] = uVar15;
    }
    plVar8 = *(long **)(lVar20 + 0x30);
    *(undefined8 **)(lVar20 + 0x30) = puVar7;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
    uVar15 = local_98;
    local_a0 = (long ***)&PTR_FUN_710523d9e8;
    local_98 = 0;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
    FUN_710377aee0(0x3f800000,*(long *)(lVar20 + 0x30));
    FUN_7101c591b0(param_1,0,0,0);
  }
  else if (cVar2 == '\x04') {
    return;
  }
LAB_7101c540f4:
  lVar17 = *(long *)(*(long *)(param_1 + 0x470) + 0x80);
  if ((*(char *)(lVar17 + 0x39) != '\0') && (*(char *)(lVar17 + 0x38) == '\x01')) {
    local_90 = (undefined **)CONCAT71(local_90._1_7_,*pbVar1);
    local_a0 = (long ***)((ulong)local_a0 & 0xffffffffffffff00);
    local_50 = (byte ***)((ulong)local_50 & 0xffffffffffffff00);
    plVar8 = *(long **)(param_1 + 0x1a10);
    if (plVar8 == (long *)0x0) {
LAB_7101c54180:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    ppppbVar13 = &local_50;
    auVar24 = (**(code **)(*plVar8 + 0x30))(plVar8,&local_90);
    if ((auVar24._0_8_ & 1) != 0) {
      FUN_7101c9bc80(*(long *)(*(long *)(param_1 + 0x470) + 0x80),auVar24._8_8_,pppplVar12,
                     ppppbVar13,param_5,param_6,param_7,param_8);
      FUN_7101c591b0(param_1,1,1,1);
    }
  }
  return;
}

