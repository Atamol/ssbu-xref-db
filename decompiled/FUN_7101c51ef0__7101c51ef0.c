// addr:      7101c51ef0
// offset:    0x1c51ef0
// name:      FUN_7101c51ef0
// mangled:   
// signature: undefined __cdecl FUN_7101c51ef0(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101c51ef0(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  long ********pppppppplVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar14;
  long ****pppplVar15;
  long *********ppppppppplVar16;
  byte ****ppppbVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  undefined1 auVar21 [16];
  long ********local_88;
  long ********local_80;
  long local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long ********local_48;
  undefined4 local_34;
  
  if (*(int *)(param_1 + 0x2c4) == 0) {
    if ((((*(char *)(param_1 + 0xafe) == '\0') || ((*(byte *)(param_1 + 0xaf8) | 1) != 3)) ||
        (3 < *(int *)(param_1 + 0x2c0) - 5U)) || (*(int *)(param_1 + 0x2c0) - 7U < 5)) {
      bVar6 = false;
      if (*(char *)(param_1 + 0xafd) != '\0') goto LAB_7101c52348;
LAB_7101c521e0:
      bVar7 = false;
joined_r0x007101c52364:
      if (bVar6) goto LAB_7101c521e8;
LAB_7101c52368:
      if (bVar7) {
        param_3 = (long *********)&DAT_00000004;
        goto LAB_7101c52370;
      }
      lVar18 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar18 + 0x1a0) == 0) goto LAB_7101c5237c;
      FUN_71037780e0(&local_88,lVar18 + 0x28,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_88);
      pppppppplVar5 = local_80;
      *(undefined4 *)(lVar18 + 0x1a0) = 0;
      local_88 = (long ********)&PTR_FUN_710523d9e8;
      local_80 = (long ********)0x0;
      if (pppppppplVar5 == (long ********)0x0) goto LAB_7101c5237c;
      FUN_710392eb40((ulong)pppppppplVar5);
      if (*(char *)(param_1 + 0xce6) != '\0') goto LAB_7101c52384;
LAB_7101c523ec:
      bVar6 = false;
      if (*(char *)(param_1 + 0xce5) != '\0') goto LAB_7101c523f4;
LAB_7101c523c8:
      bVar7 = false;
joined_r0x007101c523c8:
      if (!bVar6) goto LAB_7101c52410;
LAB_7101c523cc:
      param_3 = (long *********)0x3;
LAB_7101c5241c:
      FUN_7101c76f30(param_1 + 0x448,1,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101c52424:
      if (*(char *)(param_1 + 0xece) == '\0') goto LAB_7101c52490;
LAB_7101c5242c:
      if ((((*(byte *)(param_1 + 0xec8) | 1) != 3) || (3 < *(int *)(param_1 + 0x2c0) - 5U)) ||
         (*(int *)(param_1 + 0x2c0) - 7U < 5)) goto LAB_7101c52490;
      bVar6 = *(char *)(param_1 + 0xeca) == '\0';
      if (*(char *)(param_1 + 0xecd) == '\0') goto LAB_7101c52470;
LAB_7101c52498:
      if (*(char *)(param_1 + 0xec8) == '\x04') {
        bVar7 = *(char *)(param_1 + 0xeca) == '\0';
        goto joined_r0x007101c524b0;
      }
      bVar7 = false;
      if (!bVar6) goto LAB_7101c524b4;
LAB_7101c52474:
      param_3 = (long *********)0x3;
LAB_7101c524c0:
      FUN_7101c76f30(param_1 + 0x448,2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      bVar6 = *(char *)(param_1 + 0xafa) == '\0';
      if (*(char *)(param_1 + 0xafd) == '\0') goto LAB_7101c521e0;
LAB_7101c52348:
      if (*(char *)(param_1 + 0xaf8) == '\x04') {
        bVar7 = *(char *)(param_1 + 0xafa) == '\0';
        goto joined_r0x007101c52364;
      }
      bVar7 = false;
      if (!bVar6) goto LAB_7101c52368;
LAB_7101c521e8:
      param_3 = (long *********)0x3;
LAB_7101c52370:
      FUN_7101c76f30(param_1 + 0x448,0,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101c5237c:
      if (*(char *)(param_1 + 0xce6) == '\0') goto LAB_7101c523ec;
LAB_7101c52384:
      if ((((*(byte *)(param_1 + 0xce0) | 1) != 3) || (3 < *(int *)(param_1 + 0x2c0) - 5U)) ||
         (*(int *)(param_1 + 0x2c0) - 7U < 5)) goto LAB_7101c523ec;
      bVar6 = *(char *)(param_1 + 0xce2) == '\0';
      if (*(char *)(param_1 + 0xce5) == '\0') goto LAB_7101c523c8;
LAB_7101c523f4:
      if (*(char *)(param_1 + 0xce0) == '\x04') {
        bVar7 = *(char *)(param_1 + 0xce2) == '\0';
        goto joined_r0x007101c523c8;
      }
      bVar7 = false;
      if (bVar6) goto LAB_7101c523cc;
LAB_7101c52410:
      if (bVar7) {
        param_3 = (long *********)&DAT_00000004;
        goto LAB_7101c5241c;
      }
      lVar18 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar18 + 0x380) == 0) goto LAB_7101c52424;
      FUN_71037780e0(&local_88,lVar18 + 0x208,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_88);
      pppppppplVar5 = local_80;
      *(undefined4 *)(lVar18 + 0x380) = 0;
      local_88 = (long ********)&PTR_FUN_710523d9e8;
      local_80 = (long ********)0x0;
      if (pppppppplVar5 == (long ********)0x0) goto LAB_7101c52424;
      FUN_710392eb40((ulong)pppppppplVar5);
      if (*(char *)(param_1 + 0xece) != '\0') goto LAB_7101c5242c;
LAB_7101c52490:
      bVar6 = false;
      if (*(char *)(param_1 + 0xecd) != '\0') goto LAB_7101c52498;
LAB_7101c52470:
      bVar7 = false;
joined_r0x007101c524b0:
      if (bVar6) goto LAB_7101c52474;
LAB_7101c524b4:
      if (bVar7) {
        param_3 = (long *********)&DAT_00000004;
        goto LAB_7101c524c0;
      }
      lVar18 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar18 + 0x560) != 0) {
        FUN_71037780e0(&local_88,lVar18 + 1000,(long ****)"balloon_off",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377aee0(0x3f800000,(long)&local_88);
        pppppppplVar5 = local_80;
        *(undefined4 *)(lVar18 + 0x560) = 0;
        local_88 = (long ********)&PTR_FUN_710523d9e8;
        local_80 = (long ********)0x0;
        if (pppppppplVar5 != (long ********)0x0) {
          FUN_710392eb40((ulong)pppppppplVar5);
        }
      }
    }
    lVar18 = param_1 + 0x448;
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
LAB_7101c52558:
      if (bVar6) goto LAB_7101c5255c;
LAB_7101c52570:
      if (bVar7) {
        param_3 = (long *********)&DAT_00000004;
        goto LAB_7101c5257c;
      }
      lVar19 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar19 + 0x740) != 0) {
        FUN_71037780e0(&local_88,lVar19 + 0x5c8,(long ****)"balloon_off",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377aee0(0x3f800000,(long)&local_88);
        pppppppplVar5 = local_80;
        *(undefined4 *)(lVar19 + 0x740) = 0;
        local_88 = (long ********)&PTR_FUN_710523d9e8;
        local_80 = (long ********)0x0;
        if (pppppppplVar5 != (long ********)0x0) {
          FUN_710392eb40((ulong)pppppppplVar5);
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x10b0) == '\x04') {
        bVar7 = *(char *)(param_1 + 0x10b2) == '\0';
        goto LAB_7101c52558;
      }
      bVar7 = false;
      if (!bVar6) goto LAB_7101c52570;
LAB_7101c5255c:
      param_3 = (long *********)0x3;
LAB_7101c5257c:
      FUN_7101c76f30(lVar18,3,param_3,param_4,param_5,param_6,param_7,param_8);
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
LAB_7101c52608:
      if (bVar6) goto LAB_7101c5260c;
LAB_7101c52620:
      if (bVar7) {
        param_3 = (long *********)&DAT_00000004;
        goto LAB_7101c5262c;
      }
      lVar19 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar19 + 0x920) != 0) {
        FUN_71037780e0(&local_88,lVar19 + 0x7a8,(long ****)"balloon_off",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377aee0(0x3f800000,(long)&local_88);
        pppppppplVar5 = local_80;
        *(undefined4 *)(lVar19 + 0x920) = 0;
        local_88 = (long ********)&PTR_FUN_710523d9e8;
        local_80 = (long ********)0x0;
        if (pppppppplVar5 != (long ********)0x0) {
          FUN_710392eb40((ulong)pppppppplVar5);
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x1298) == '\x04') {
        bVar7 = *(char *)(param_1 + 0x129a) == '\0';
        goto LAB_7101c52608;
      }
      bVar7 = false;
      if (!bVar6) goto LAB_7101c52620;
LAB_7101c5260c:
      param_3 = (long *********)0x3;
LAB_7101c5262c:
      FUN_7101c76f30(lVar18,4,param_3,param_4,param_5,param_6,param_7,param_8);
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
LAB_7101c526b8:
      if (bVar6) goto LAB_7101c526bc;
LAB_7101c526d0:
      if (bVar7) {
        param_3 = (long *********)&DAT_00000004;
        goto LAB_7101c526dc;
      }
      lVar19 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar19 + 0xb00) != 0) {
        FUN_71037780e0(&local_88,lVar19 + 0x988,(long ****)"balloon_off",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377aee0(0x3f800000,(long)&local_88);
        pppppppplVar5 = local_80;
        *(undefined4 *)(lVar19 + 0xb00) = 0;
        local_88 = (long ********)&PTR_FUN_710523d9e8;
        local_80 = (long ********)0x0;
        if (pppppppplVar5 != (long ********)0x0) {
          FUN_710392eb40((ulong)pppppppplVar5);
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x1480) == '\x04') {
        bVar7 = *(char *)(param_1 + 0x1482) == '\0';
        goto LAB_7101c526b8;
      }
      bVar7 = false;
      if (!bVar6) goto LAB_7101c526d0;
LAB_7101c526bc:
      param_3 = (long *********)0x3;
LAB_7101c526dc:
      FUN_7101c76f30(lVar18,5,param_3,param_4,param_5,param_6,param_7,param_8);
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
LAB_7101c52768:
      if (bVar6) goto LAB_7101c5276c;
LAB_7101c52780:
      if (bVar7) {
        param_3 = (long *********)&DAT_00000004;
        goto LAB_7101c5278c;
      }
      lVar19 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar19 + 0xce0) != 0) {
        FUN_71037780e0(&local_88,lVar19 + 0xb68,(long ****)"balloon_off",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377aee0(0x3f800000,(long)&local_88);
        pppppppplVar5 = local_80;
        *(undefined4 *)(lVar19 + 0xce0) = 0;
        local_88 = (long ********)&PTR_FUN_710523d9e8;
        local_80 = (long ********)0x0;
        if (pppppppplVar5 != (long ********)0x0) {
          FUN_710392eb40((ulong)pppppppplVar5);
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x1668) == '\x04') {
        bVar7 = *(char *)(param_1 + 0x166a) == '\0';
        goto LAB_7101c52768;
      }
      bVar7 = false;
      if (!bVar6) goto LAB_7101c52780;
LAB_7101c5276c:
      param_3 = (long *********)0x3;
LAB_7101c5278c:
      FUN_7101c76f30(lVar18,6,param_3,param_4,param_5,param_6,param_7,param_8);
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
LAB_7101c52818:
      if (bVar6) goto LAB_7101c5281c;
LAB_7101c52830:
      if (bVar7) {
        uVar14 = 4;
        goto LAB_7101c5283c;
      }
      lVar18 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar18 + 0xec0) != 0) {
        FUN_71037780e0(&local_88,lVar18 + 0xd48,(long ****)"balloon_off",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377aee0(0x3f800000,(long)&local_88);
        pppppppplVar5 = local_80;
        *(undefined4 *)(lVar18 + 0xec0) = 0;
        local_88 = (long ********)&PTR_FUN_710523d9e8;
        local_80 = (long ********)0x0;
        if (pppppppplVar5 != (long ********)0x0) {
          FUN_710392eb40((ulong)pppppppplVar5);
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x1850) == '\x04') {
        bVar7 = *(char *)(param_1 + 0x1852) == '\0';
        goto LAB_7101c52818;
      }
      bVar7 = false;
      if (!bVar6) goto LAB_7101c52830;
LAB_7101c5281c:
      uVar14 = 3;
LAB_7101c5283c:
      FUN_7101c76f30(lVar18,7,uVar14,param_4,param_5,param_6,param_7,param_8);
    }
    FUN_7101c591b0(param_1,0,0,0);
    uVar11 = *(ulong *)(param_1 + 0x428);
    if ((uVar11 & 1) == 0) {
LAB_7101c52860:
      uVar8 = 0;
    }
    else {
      plVar12 = *(long **)(param_1 + 0x2f8);
      plVar10 = (long *)**(long **)(*plVar12 + 0x18);
      if (plVar10 == (long *)0x0) {
LAB_7101c52c60:
        uVar11 = *(ulong *)(param_1 + 0x428);
      }
      else {
        uVar11 = (**(code **)(*plVar10 + 0x2f8))();
        if ((uVar11 & 1) != 0) {
          uVar11 = *(ulong *)(param_1 + 0x428);
          uVar8 = 0;
          goto LAB_7101c52c74;
        }
        plVar10 = (long *)**(long **)(*plVar12 + 0x18);
        if (plVar10 == (long *)0x0) goto LAB_7101c52c60;
        uVar13 = (**(code **)(*plVar10 + 0x3c0))();
        uVar11 = *(ulong *)(param_1 + 0x428);
        if ((uVar13 & 1) == 0) goto LAB_7101c52860;
      }
      if (((uint)uVar11 >> 1 & 1) == 0) {
        uVar8 = (uint)(uVar11 >> 2) & 1;
      }
      else {
        uVar8 = 1;
      }
    }
LAB_7101c52c74:
    *(ulong *)(param_1 + 0x428) = uVar11 | 2;
    if ((uVar11 & 1) == 0) {
LAB_7101c52ce0:
      if (uVar8 != 0) {
LAB_7101c52ce4:
        *(undefined1 *)(param_1 + 0x431) = 0;
      }
    }
    else {
      plVar12 = *(long **)(param_1 + 0x2f8);
      plVar10 = (long *)**(long **)(*plVar12 + 0x18);
      if ((plVar10 != (long *)0x0) &&
         ((uVar11 = (**(code **)(*plVar10 + 0x2f8))(), (uVar11 & 1) != 0 ||
          ((plVar10 = (long *)**(long **)(*plVar12 + 0x18), plVar10 != (long *)0x0 &&
           (uVar11 = (**(code **)(*plVar10 + 0x3c0))(), (uVar11 & 1) == 0)))))) goto LAB_7101c52ce0;
      if (((uint)*(ulong *)(param_1 + 0x428) >> 1 & 1) == 0) {
        if ((uVar8 ^ (uint)(*(ulong *)(param_1 + 0x428) >> 2) & 1) != 1) goto LAB_7101c52ce8;
        goto LAB_7101c52ce4;
      }
      if (uVar8 == 0) goto LAB_7101c52ce4;
    }
LAB_7101c52ce8:
    param_3 = (long *********)0x0;
    param_4 = (byte ****)0x0;
    FUN_7101c59330(param_1 + 0x800,0,0,0,param_5,param_6,param_7,param_8);
    uVar11 = (ulong)*(byte *)(param_1 + 0x1920);
    if (7 < uVar11) goto LAB_7101c534a0;
    lVar18 = *(long *)(param_1 + 0x450) + uVar11 * 0x1e0;
    uVar14 = extraout_x1;
    if (*(char *)(lVar18 + 0x19b) != '\0') {
      FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 0x450) + uVar11 * 0x1e0 + 0x30),
                     0x71042c4e37);
      uVar14 = extraout_x1_00;
    }
    *(undefined1 *)(lVar18 + 0x19b) = 0;
    FUN_7101c5a2d0(param_1,uVar14,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar11 = (ulong)*(byte *)(param_1 + 0x1920);
    if (7 < uVar11) goto LAB_7101c534a0;
    uVar4 = *(ushort *)(param_1 + uVar11 * 2 + 0x7b8);
    if ((uVar4 & 0xff) != 0) {
      param_3 = (long *********)0x1;
      *(undefined1 *)(param_1 + 0x7d7) = 1;
      FUN_7101c5a440(param_1 + 0x658,(byte)(uVar4 >> 8),(long ****)0x1,param_4,param_5,param_6,
                     param_7,param_8);
    }
    if (*(char *)(param_1 + 2000) != '\0') {
      cVar2 = *(char *)(param_1 + 0x7d7);
      goto joined_r0x007101c52e80;
    }
    *(undefined1 *)(param_1 + 2000) = 1;
    FUN_71037780e0(&local_88,param_1 + 0x660,(long ****)"figher_panel_in",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    ppppppppplVar16 =
         (long *********)
         FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (ppppppppplVar16 == (long *********)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_34 = 0;
        local_48 = (long ********)&DAT_00000010;
        param_3 = &local_48;
        uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
        if (((uVar11 & 1) != 0) &&
           (ppppppppplVar16 =
                 (long *********)
                 FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8
                               ), ppppppppplVar16 != (long *********)0x0)) goto LAB_7101c52e24;
      }
      ppppppppplVar16 = (long *********)0x0;
    }
LAB_7101c52e24:
    pppppppplVar5 = local_80;
    *ppppppppplVar16 = (long ********)&PTR_FUN_710523d9e8;
    ppppppppplVar16[1] = (long ********)0x0;
    if (&local_88 != ppppppppplVar16) {
      local_80 = (long ********)0x0;
      ppppppppplVar16[1] = pppppppplVar5;
    }
    plVar10 = *(long **)(param_1 + 0x670);
    *(long **********)(param_1 + 0x670) = ppppppppplVar16;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
    pppppppplVar5 = local_80;
    local_88 = (long ********)&PTR_FUN_710523d9e8;
    local_80 = (long ********)0x0;
    if (pppppppplVar5 != (long ********)0x0) {
      FUN_710392eb40((ulong)pppppppplVar5);
    }
    FUN_710377aee0(0x3f800000,*(long *)(param_1 + 0x670));
    cVar2 = *(char *)(param_1 + 0x7d7);
  }
  else {
    cVar2 = *(char *)(param_1 + 0x7d7);
  }
joined_r0x007101c52e80:
  if (cVar2 == '\0') {
    return;
  }
  if (*(char *)(param_1 + 2000) == '\0') {
    return;
  }
  pbVar1 = (byte *)(param_1 + 0x1920);
  if (7 < (ulong)*pbVar1) goto LAB_7101c534a0;
  uVar4 = *(ushort *)(param_1 + (ulong)*pbVar1 * 2 + 0x7b8);
  if ((uVar4 & 0xff) != 0) {
    uVar8 = 0;
    if (*(uint *)(param_1 + 0x2c4) < 900) {
      uVar8 = 0xf - (*(uint *)(param_1 + 0x2c4) & 0xffff) / 0x3c;
    }
    if (0x3ff < uVar4) goto LAB_7101c534a0;
    FUN_7103776910(&local_88,param_1 + (ulong)(uVar4 >> 8) * 0x10 + 0x678,(long ****)"txt_03",
                   param_3,param_4,param_5,param_6,param_7,param_8);
    param_4 = (byte ****)(ulong)uVar8;
    FUN_710377a280((long)&local_88,(byte *)"mnu_online_room_inside_time",1);
    pppppppplVar5 = local_80;
    local_88 = (long ********)&PTR_FUN_710523d9a8;
    local_80 = (long ********)0x0;
    if (pppppppplVar5 != (long ********)0x0) {
      FUN_710392eb40((ulong)pppppppplVar5);
    }
  }
  lVar18 = *(long *)(*(long *)**(undefined8 **)(param_1 + 0x10) + 0x600);
  if (*(char *)(lVar18 + 0x4aa) != '\0') {
    if (((*(byte *)(lVar18 + 0x1bc) >> 1 & 1) != 0) && (*(char *)(param_1 + 0x18e6) == '\x04')) {
      bVar3 = *pbVar1;
      if ((ulong)bVar3 < 8) {
        local_48 = (long ********)CONCAT71(local_48._1_7_,bVar3);
        local_88 = (long ********)
                   CONCAT44(local_88._4_4_,*(undefined4 *)(param_1 + (ulong)bVar3 * 0x1e8 + 0x95c));
        plVar10 = *(long **)(param_1 + 0x1a40);
        if (plVar10 != (long *)0x0) {
          ppppppppplVar16 = &local_88;
          uVar11 = (**(code **)(*plVar10 + 0x30))(plVar10,&local_48);
          if ((uVar11 & 1) == 0) {
            return;
          }
          if (*(char *)(param_1 + 0x7d1) == '\0') {
            return;
          }
          if (*(char *)(param_1 + 0x7d7) == '\0') {
            return;
          }
          if (*pbVar1 < 8) {
            uVar4 = *(ushort *)(param_1 + (ulong)*pbVar1 * 2 + 0x7b8);
            if ((uVar4 & 0xff) == 0) {
              return;
            }
            if (uVar4 < 0x400) {
              plVar10 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar16,param_4,param_5,
                                               param_6,param_7,param_8);
              if (plVar10 == (long *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_48 = (long ********)((ulong)local_48 & 0xffffffff00000000);
                  local_88 = (long ********)&DAT_00000008;
                  ppppppppplVar16 = &local_88;
                  uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_48);
                  if (((uVar11 & 1) != 0) &&
                     (plVar10 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar16,param_4,
                                                       param_5,param_6,param_7,param_8),
                     plVar10 != (long *)0x0)) goto LAB_7101c520cc;
                }
                plVar10 = (long *)0x0;
              }
LAB_7101c520cc:
              *plVar10 = 0;
              lVar18 = *(long *)(*(long *)(param_1 + (ulong)(uVar4 >> 8) * 0x10 + 0x6c0) + 8);
              if ((lVar18 == 0) || (*(long *)(lVar18 + 0x60) == 0)) {
                *plVar10 = 0;
              }
              else {
                plVar12 = (long *)FUN_7103796f20(*(long *)(lVar18 + 0x60),
                                                 *(long *)(lVar18 + 0x18) + 0xb0);
                *plVar10 = (long)plVar12;
                if (plVar12 != (long *)0x0) {
                  (**(code **)(*plVar12 + 0x238))(plVar12,0);
                  (**(code **)(*plVar12 + 0x228))(plVar12,0);
                  uVar11 = (**(code **)(*plVar12 + 0x200))(plVar12);
                  if (((uVar11 & 1) != 0) &&
                     (uVar11 = (**(code **)(*plVar12 + 0x210))(plVar12), (uVar11 & 1) != 0)) {
                    (**(code **)(*plVar12 + 0x238))(plVar12,1);
                    (**(code **)(*plVar12 + 0x3c8))(plVar12);
                    (**(code **)(*plVar12 + 0x10))(plVar12);
                    (**(code **)(*plVar12 + 0x18))(plVar12);
                  }
                }
              }
              lVar18 = *(long *)(DAT_710532f8d0 + 8);
              if ((ulong)(*(long *)(lVar18 + 0x48) - *(long *)(lVar18 + 0x40) >> 3) < 9) {
                uVar11 = 0;
                cVar2 = *(char *)(lVar18 + 0x191);
              }
              else {
                uVar11 = *(ulong *)(*(long *)(lVar18 + 0x40) + 0x40);
                cVar2 = *(char *)(lVar18 + 0x191);
              }
              if ((cVar2 == '\0') &&
                 (uVar13 = FUN_7103313f20(lVar18,uVar11,(long ****)&DAT_00000004,param_4,param_5,
                                          param_6,param_7,param_8), (uVar13 & 1) != 0)) {
                FUN_71024076d0((undefined4 *)&local_88,uVar11);
                if ((local_78 != 0) &&
                   ((DAT_7106dd53a8 == '\x01' && ((int)local_70 == DAT_7106dd53ac)))) {
                  piVar20 = (int *)(local_78 + 0x38);
                  do {
                    cVar2 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
                    if (bVar6) {
                      *piVar20 = *piVar20 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
              }
              else {
                local_70 = 0x87650000000000;
                local_60 = 0xffffffffffffffff;
                uStack_58 = 0;
                local_88 = (long ********)((ulong)local_88 & 0xffffffff00000000);
                local_50 = 0;
              }
              local_80 = (long ********)&PTR_FUN_7104f73d50;
              local_78 = 0;
              local_68 = 0;
              FUN_710392eb40((ulong)plVar10);
              return;
            }
          }
        }
      }
      goto LAB_7101c534a0;
    }
    if ((*(byte *)(lVar18 + 0x1a8) >> 1 & 1) != 0) {
      local_88 = (long ********)CONCAT71(local_88._1_7_,*pbVar1);
      local_48 = (long ********)CONCAT71(local_48._1_7_,1);
      local_34 = CONCAT31(local_34._1_3_,1);
      plVar10 = *(long **)(param_1 + 0x1a10);
      if (plVar10 == (long *)0x0) goto LAB_7101c534a0;
      ppppppppplVar16 = &local_48;
      ppppbVar17 = (byte ****)&local_34;
      uVar11 = (**(code **)(*plVar10 + 0x30))(plVar10,&local_88);
      if ((uVar11 & 1) == 0) {
        return;
      }
      if (7 < (ulong)*pbVar1) goto LAB_7101c534a0;
      uVar4 = *(ushort *)(param_1 + (ulong)*pbVar1 * 2 + 0x7b8);
      if ((uVar4 & 0xff) != 0) {
        uVar4 = uVar4 >> 8;
        *(undefined1 *)(param_1 + 0x7d7) = 0;
        if (3 < uVar4) goto LAB_7101c534a0;
        plVar10 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar16,ppppbVar17,param_5,
                                         param_6,param_7,param_8);
        if (plVar10 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_48 = (long ********)((ulong)local_48 & 0xffffffff00000000);
            local_88 = (long ********)&DAT_00000008;
            ppppppppplVar16 = &local_88;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_48);
            if (((uVar11 & 1) != 0) &&
               (plVar10 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar16,ppppbVar17,
                                                 param_5,param_6,param_7,param_8),
               plVar10 != (long *)0x0)) goto LAB_7101c52bc8;
          }
          plVar10 = (long *)0x0;
        }
LAB_7101c52bc8:
        lVar18 = param_1 + (ulong)uVar4 * 0x10;
        *plVar10 = 0;
        lVar19 = *(long *)(*(long *)(lVar18 + 0x6c0) + 8);
        if ((lVar19 == 0) || (*(long *)(lVar19 + 0x60) == 0)) {
          *plVar10 = 0;
        }
        else {
          plVar12 = (long *)FUN_7103796f20(*(long *)(lVar19 + 0x60),*(long *)(lVar19 + 0x18) + 0xb0)
          ;
          *plVar10 = (long)plVar12;
          if (plVar12 != (long *)0x0) {
            (**(code **)(*plVar12 + 0x1f8))(plVar12,0);
            uVar11 = (**(code **)(*plVar12 + 0x200))(plVar12);
            if ((uVar11 & 1) == 0) {
              uVar8 = 1;
            }
            else {
              uVar8 = (**(code **)(*plVar12 + 0x210))(plVar12);
              uVar8 = uVar8 ^ 1;
            }
            (**(code **)(*plVar12 + 0x388))(plVar12,uVar8 & 1,0);
            plVar12 = (long *)*plVar10;
            if (plVar12 != (long *)0x0) {
              (**(code **)(*plVar12 + 0x218))(plVar12,0);
              (**(code **)(*plVar12 + 0x410))(plVar12);
              (**(code **)(*plVar12 + 0x3f0))(plVar12,0);
              iVar9 = (**(code **)(*plVar12 + 0x140))(plVar12);
              if ((iVar9 != 6) && (iVar9 = (**(code **)(*plVar12 + 0x140))(plVar12), iVar9 != 1)) {
                (**(code **)(*plVar12 + 0x400))(plVar12);
              }
              uVar11 = (**(code **)(*plVar12 + 0x158))(plVar12);
              if ((uVar11 & 1) == 0) {
                (**(code **)(*plVar12 + 0x370))(plVar12);
              }
            }
          }
        }
        FUN_7103778300(0x3f800000,*(long *)(lVar18 + 0x680),0x71043be67f);
        FUN_710392eb40((ulong)plVar10);
      }
      pppplVar15 = (long ****)0x0;
      ppppbVar17 = (byte ****)0x0;
      FUN_7101c591b0(param_1,0,0,0);
      uVar11 = *(ulong *)(param_1 + 0x428);
      uVar14 = extraout_x1_02;
      if ((uVar11 & 1) == 0) {
LAB_7101c52f48:
        uVar8 = 0;
      }
      else {
        plVar12 = *(long **)(param_1 + 0x2f8);
        plVar10 = (long *)**(long **)(*plVar12 + 0x18);
        if (plVar10 == (long *)0x0) {
LAB_7101c53204:
          uVar11 = *(ulong *)(param_1 + 0x428);
        }
        else {
          auVar21 = (**(code **)(*plVar10 + 0x2f8))();
          uVar14 = auVar21._8_8_;
          if ((auVar21._0_8_ & 1) != 0) {
            uVar11 = *(ulong *)(param_1 + 0x428);
            uVar8 = 0;
            goto LAB_7101c53218;
          }
          plVar10 = (long *)**(long **)(*plVar12 + 0x18);
          if (plVar10 == (long *)0x0) goto LAB_7101c53204;
          auVar21 = (**(code **)(*plVar10 + 0x3c0))();
          uVar14 = auVar21._8_8_;
          uVar11 = *(ulong *)(param_1 + 0x428);
          if ((auVar21._0_8_ & 1) == 0) goto LAB_7101c52f48;
        }
        if (((uint)uVar11 >> 1 & 1) == 0) {
          uVar8 = (uint)(uVar11 >> 2) & 1;
        }
        else {
          uVar8 = 1;
        }
      }
LAB_7101c53218:
      *(ulong *)(param_1 + 0x428) = uVar11 & 0xfffffffffffffffd;
      if ((uVar11 & 1) == 0) {
LAB_7101c53284:
        if (uVar8 == 0) goto LAB_7101c5328c;
      }
      else {
        plVar12 = *(long **)(param_1 + 0x2f8);
        plVar10 = (long *)**(long **)(*plVar12 + 0x18);
        if (plVar10 != (long *)0x0) {
          auVar21 = (**(code **)(*plVar10 + 0x2f8))();
          uVar14 = auVar21._8_8_;
          if ((auVar21._0_8_ & 1) != 0) goto LAB_7101c53284;
          plVar10 = (long *)**(long **)(*plVar12 + 0x18);
          if (plVar10 != (long *)0x0) {
            auVar21 = (**(code **)(*plVar10 + 0x3c0))();
            uVar14 = auVar21._8_8_;
            if ((auVar21._0_8_ & 1) == 0) goto LAB_7101c53284;
          }
        }
        if (((uint)*(ulong *)(param_1 + 0x428) >> 1 & 1) == 0) {
          if ((uVar8 ^ (uint)(*(ulong *)(param_1 + 0x428) >> 2) & 1) != 1) goto LAB_7101c5328c;
        }
        else if (uVar8 != 0) goto LAB_7101c5328c;
      }
      *(undefined1 *)(param_1 + 0x431) = 0;
LAB_7101c5328c:
      FUN_7101c5a730(param_1 + 0x7e0,uVar14,pppplVar15,ppppbVar17,param_5,param_6,param_7,param_8);
      FUN_710175dfc0(1.0,1.0,*(long *)(DAT_71052c5120 + 8),
                     *(uint *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0x10) + 0x600) + 0x48c
                              ),0x1f1d4fbaff,0,0,0,0,0);
      return;
    }
  }
  if ((*(uint *)(param_1 + 0x2c4) < 900) && (*(char *)(param_1 + 0x431) == '\0')) {
    return;
  }
  local_88 = (long ********)CONCAT71(local_88._1_7_,*pbVar1);
  local_48 = (long ********)((ulong)local_48._1_7_ << 8);
  local_34 = CONCAT31(local_34._1_3_,1);
  plVar10 = *(long **)(param_1 + 0x1a10);
  if (plVar10 == (long *)0x0) {
LAB_7101c534a0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  ppppppppplVar16 = &local_48;
  ppppbVar17 = (byte ****)&local_34;
  auVar21 = (**(code **)(*plVar10 + 0x30))(plVar10,&local_88);
  uVar14 = auVar21._8_8_;
  if ((auVar21._0_8_ & 1) == 0) {
    return;
  }
  if (7 < (ulong)*pbVar1) goto LAB_7101c534a0;
  uVar4 = *(ushort *)(param_1 + (ulong)*pbVar1 * 2 + 0x7b8);
  if ((uVar4 & 0xff) != 0) {
    uVar4 = uVar4 >> 8;
    *(undefined1 *)(param_1 + 0x7d7) = 0;
    if (3 < uVar4) goto LAB_7101c534a0;
    plVar10 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar16,ppppbVar17,param_5,param_6,
                                     param_7,param_8);
    if (plVar10 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_48 = (long ********)((ulong)local_48 & 0xffffffff00000000);
        local_88 = (long ********)&DAT_00000008;
        ppppppppplVar16 = &local_88;
        uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_48);
        if (((uVar11 & 1) != 0) &&
           (plVar10 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar16,ppppbVar17,param_5,
                                             param_6,param_7,param_8), plVar10 != (long *)0x0))
        goto LAB_7101c522cc;
      }
      plVar10 = (long *)0x0;
    }
LAB_7101c522cc:
    lVar18 = param_1 + (ulong)uVar4 * 0x10;
    *plVar10 = 0;
    lVar19 = *(long *)(*(long *)(lVar18 + 0x6c0) + 8);
    if ((lVar19 == 0) || (*(long *)(lVar19 + 0x60) == 0)) {
      *plVar10 = 0;
    }
    else {
      plVar12 = (long *)FUN_7103796f20(*(long *)(lVar19 + 0x60),*(long *)(lVar19 + 0x18) + 0xb0);
      *plVar10 = (long)plVar12;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x1f8))(plVar12,0);
        uVar11 = (**(code **)(*plVar12 + 0x200))(plVar12);
        if ((uVar11 & 1) == 0) {
          uVar8 = 1;
        }
        else {
          uVar8 = (**(code **)(*plVar12 + 0x210))(plVar12);
          uVar8 = uVar8 ^ 1;
        }
        ppppppppplVar16 = (long *********)0x0;
        (**(code **)(*plVar12 + 0x388))(plVar12,uVar8 & 1);
        plVar12 = (long *)*plVar10;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x218))(plVar12,0);
          (**(code **)(*plVar12 + 0x410))(plVar12);
          (**(code **)(*plVar12 + 0x3f0))(plVar12,0);
          iVar9 = (**(code **)(*plVar12 + 0x140))(plVar12);
          if ((iVar9 != 6) && (iVar9 = (**(code **)(*plVar12 + 0x140))(plVar12), iVar9 != 1)) {
            (**(code **)(*plVar12 + 0x400))(plVar12);
          }
          uVar11 = (**(code **)(*plVar12 + 0x158))(plVar12);
          if ((uVar11 & 1) == 0) {
            (**(code **)(*plVar12 + 0x370))(plVar12);
          }
        }
      }
    }
    FUN_7103778300(0x3f800000,*(long *)(lVar18 + 0x680),0x71043be67f);
    FUN_710392eb40((ulong)plVar10);
    uVar14 = extraout_x1_01;
  }
  FUN_7101c5a900(param_1 + 0x658,uVar14,(long ****)ppppppppplVar16,ppppbVar17,param_5,param_6,
                 param_7,param_8);
  FUN_7101c591b0(param_1,1,1,1);
  uVar11 = *(ulong *)(param_1 + 0x428);
  if ((uVar11 & 1) == 0) {
LAB_7101c52ed4:
    uVar8 = 0;
  }
  else {
    plVar12 = *(long **)(param_1 + 0x2f8);
    plVar10 = (long *)**(long **)(*plVar12 + 0x18);
    if (plVar10 == (long *)0x0) {
LAB_7101c52fa8:
      uVar11 = *(ulong *)(param_1 + 0x428);
    }
    else {
      uVar11 = (**(code **)(*plVar10 + 0x2f8))();
      if ((uVar11 & 1) != 0) {
        uVar11 = *(ulong *)(param_1 + 0x428);
        uVar8 = 0;
        goto LAB_7101c52fbc;
      }
      plVar10 = (long *)**(long **)(*plVar12 + 0x18);
      if (plVar10 == (long *)0x0) goto LAB_7101c52fa8;
      uVar13 = (**(code **)(*plVar10 + 0x3c0))();
      uVar11 = *(ulong *)(param_1 + 0x428);
      if ((uVar13 & 1) == 0) goto LAB_7101c52ed4;
    }
    if (((uint)uVar11 >> 1 & 1) == 0) {
      uVar8 = (uint)(uVar11 >> 2) & 1;
    }
    else {
      uVar8 = 1;
    }
  }
LAB_7101c52fbc:
  *(ulong *)(param_1 + 0x428) = uVar11 & 0xfffffffffffffffd;
  if ((uVar11 & 1) == 0) {
LAB_7101c53028:
    if (uVar8 == 0) goto LAB_7101c53030;
  }
  else {
    plVar12 = *(long **)(param_1 + 0x2f8);
    plVar10 = (long *)**(long **)(*plVar12 + 0x18);
    if ((plVar10 != (long *)0x0) &&
       ((uVar11 = (**(code **)(*plVar10 + 0x2f8))(), (uVar11 & 1) != 0 ||
        ((plVar10 = (long *)**(long **)(*plVar12 + 0x18), plVar10 != (long *)0x0 &&
         (uVar11 = (**(code **)(*plVar10 + 0x3c0))(), (uVar11 & 1) == 0)))))) goto LAB_7101c53028;
    if (((uint)*(ulong *)(param_1 + 0x428) >> 1 & 1) == 0) {
      if ((uVar8 ^ (uint)(*(ulong *)(param_1 + 0x428) >> 2) & 1) != 1) goto LAB_7101c53030;
    }
    else if (uVar8 != 0) goto LAB_7101c53030;
  }
  *(undefined1 *)(param_1 + 0x431) = 0;
LAB_7101c53030:
  *(undefined2 *)(param_1 + 0x430) = 1;
  plVar10 = (long *)**(long **)(param_1 + 0x310);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x328))(plVar10,0);
  }
  if ((*(int *)(param_1 + 0x400) != -1) || (*(int *)(param_1 + 0x404) != -1)) {
    FUN_710373b540(param_1 + 0x3d8,0);
    *(undefined4 *)(param_1 + 0x3d8) = 0;
    FUN_71039602c0(param_1 + 0x3e0);
    *(undefined ***)(param_1 + 0x3e0) = &PTR_FUN_7104f73d50;
    if ((*(long *)(param_1 + 1000) != 0) &&
       ((DAT_7106dd53a8 == '\x01' && (*(int *)(param_1 + 0x3f0) == DAT_7106dd53ac)))) {
      piVar20 = (int *)(*(long *)(param_1 + 1000) + 0x38);
      do {
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar6) {
          *piVar20 = *piVar20 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(undefined8 *)(param_1 + 0x3f0) = 0;
    *(undefined8 *)(param_1 + 0x3f8) = 0;
    *(undefined8 *)(param_1 + 0x3e0) = 0;
    *(undefined8 *)(param_1 + 1000) = 0;
    *(undefined8 *)(param_1 + 0x3f0) = 0x87650000000000;
    *(undefined ***)(param_1 + 0x3e0) = &PTR_FUN_7104f73d30;
    *(undefined8 *)(param_1 + 1000) = 0;
    *(undefined1 *)(param_1 + 0x3f8) = 0;
    *(undefined8 *)(param_1 + 0x400) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x408) = 0;
    *(undefined4 *)(param_1 + 0x414) = 0;
  }
  return;
}

