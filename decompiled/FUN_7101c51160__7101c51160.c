// addr:      7101c51160
// offset:    0x1c51160
// name:      FUN_7101c51160
// mangled:   
// signature: undefined __cdecl FUN_7101c51160(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101c51160(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  undefined **ppuVar6;
  bool bVar7;
  bool bVar8;
  long *plVar9;
  ulong uVar10;
  undefined ***pppuVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar12;
  byte ****ppppbVar13;
  undefined4 uVar14;
  long *plVar15;
  byte *pbVar16;
  long lVar17;
  int *piVar18;
  uint uVar19;
  byte *pbVar20;
  ulong uVar21;
  uint uVar22;
  long ****pppplVar23;
  long lVar24;
  byte ****unaff_x22;
  undefined4 local_110 [4];
  long local_100;
  int local_f8;
  undefined4 local_d0 [2];
  undefined **local_c8;
  long local_c0;
  int local_b8;
  undefined4 uStack_b4;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined **local_90;
  undefined **local_88 [8];
  long ***local_48;
  undefined4 local_34;
  
  if (*(int *)(param_1 + 0x2c4) != 0) {
    plVar9 = *(long **)(param_1 + 0x1ae8);
    if (plVar9 != (long *)0x0) {
      plVar15 = *(long **)(plVar9[1] + 8);
      if (plVar15 == (long *)0x0) {
        *(undefined8 *)(param_1 + 0x1ae8) = 0;
LAB_7101c5121c:
        (**(code **)(*plVar9 + 8))();
      }
      else {
        uVar10 = (**(code **)(*plVar15 + 0x138))(plVar15);
        if ((uVar10 & 1) != 0) {
          plVar9 = *(long **)(param_1 + 0x1ae8);
          *(undefined8 *)(param_1 + 0x1ae8) = 0;
          if (plVar9 == (long *)0x0) goto LAB_7101c51230;
          goto LAB_7101c5121c;
        }
      }
      if (*(long *)(param_1 + 0x1ae8) != 0) {
        return;
      }
    }
LAB_7101c51230:
    if (((ulong)*(byte *)(param_1 + 0x1920) < 8) && (*(uint *)(param_1 + 700) < 0x13)) {
      uVar14 = 3;
      if (*(char *)(param_1 + (ulong)*(byte *)(param_1 + 0x1920) * 0x1e8 + 0xaf8) != '\x01') {
        uVar14 = 4;
      }
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 700) * 4 + 0x270) = uVar14;
      return;
    }
    goto LAB_7101c51eec;
  }
  if ((((*(char *)(param_1 + 0xafe) == '\0') || ((*(byte *)(param_1 + 0xaf8) | 1) != 3)) ||
      (3 < *(int *)(param_1 + 0x2c0) - 5U)) || (*(int *)(param_1 + 0x2c0) - 7U < 5)) {
    bVar7 = false;
    if (*(char *)(param_1 + 0xafd) == '\0') goto LAB_7101c51208;
LAB_7101c5127c:
    if (*(char *)(param_1 + 0xaf8) == '\x04') {
      bVar8 = *(char *)(param_1 + 0xafa) == '\0';
      goto joined_r0x007101c51298;
    }
    bVar8 = false;
    if (bVar7) goto LAB_7101c51210;
LAB_7101c5129c:
    if (bVar8) {
      param_3 = (long ****)&DAT_00000004;
      goto LAB_7101c512a4;
    }
    lVar17 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar17 + 0x1a0) == 0) goto LAB_7101c512b0;
    FUN_71037780e0(&local_90,lVar17 + 0x28,(long ****)"balloon_off",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_710377aee0(0x3f800000,(long)&local_90);
    ppuVar6 = local_88[0];
    *(undefined4 *)(lVar17 + 0x1a0) = 0;
    local_90 = &PTR_FUN_710523d9e8;
    local_88[0] = (undefined **)0x0;
    if (ppuVar6 == (undefined **)0x0) goto LAB_7101c512b0;
    FUN_710392eb40((ulong)ppuVar6);
    if (*(char *)(param_1 + 0xce6) != '\0') goto LAB_7101c512b8;
LAB_7101c51320:
    bVar7 = false;
    if (*(char *)(param_1 + 0xce5) != '\0') goto LAB_7101c51328;
LAB_7101c512fc:
    bVar8 = false;
joined_r0x007101c512fc:
    if (!bVar7) goto LAB_7101c51344;
LAB_7101c51300:
    param_3 = (long ****)0x3;
LAB_7101c51350:
    FUN_7101c76f30(param_1 + 0x448,1,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101c51358:
    if (*(char *)(param_1 + 0xece) == '\0') goto LAB_7101c513c4;
LAB_7101c51360:
    if ((((*(byte *)(param_1 + 0xec8) | 1) != 3) || (3 < *(int *)(param_1 + 0x2c0) - 5U)) ||
       (*(int *)(param_1 + 0x2c0) - 7U < 5)) goto LAB_7101c513c4;
    bVar7 = *(char *)(param_1 + 0xeca) == '\0';
    if (*(char *)(param_1 + 0xecd) != '\0') goto LAB_7101c513cc;
LAB_7101c513a4:
    bVar8 = false;
joined_r0x007101c513e4:
    if (bVar7) goto LAB_7101c513a8;
LAB_7101c513e8:
    if (bVar8) {
      param_3 = (long ****)&DAT_00000004;
      goto LAB_7101c513f4;
    }
    lVar17 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar17 + 0x560) != 0) {
      FUN_71037780e0(&local_90,lVar17 + 1000,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_90);
      ppuVar6 = local_88[0];
      *(undefined4 *)(lVar17 + 0x560) = 0;
      local_90 = &PTR_FUN_710523d9e8;
      local_88[0] = (undefined **)0x0;
      if (ppuVar6 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar6);
      }
    }
  }
  else {
    bVar7 = *(char *)(param_1 + 0xafa) == '\0';
    if (*(char *)(param_1 + 0xafd) != '\0') goto LAB_7101c5127c;
LAB_7101c51208:
    bVar8 = false;
joined_r0x007101c51298:
    if (!bVar7) goto LAB_7101c5129c;
LAB_7101c51210:
    param_3 = (long ****)0x3;
LAB_7101c512a4:
    FUN_7101c76f30(param_1 + 0x448,0,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101c512b0:
    if (*(char *)(param_1 + 0xce6) == '\0') goto LAB_7101c51320;
LAB_7101c512b8:
    if ((((*(byte *)(param_1 + 0xce0) | 1) != 3) || (3 < *(int *)(param_1 + 0x2c0) - 5U)) ||
       (*(int *)(param_1 + 0x2c0) - 7U < 5)) goto LAB_7101c51320;
    bVar7 = *(char *)(param_1 + 0xce2) == '\0';
    if (*(char *)(param_1 + 0xce5) == '\0') goto LAB_7101c512fc;
LAB_7101c51328:
    if (*(char *)(param_1 + 0xce0) == '\x04') {
      bVar8 = *(char *)(param_1 + 0xce2) == '\0';
      goto joined_r0x007101c512fc;
    }
    bVar8 = false;
    if (bVar7) goto LAB_7101c51300;
LAB_7101c51344:
    if (bVar8) {
      param_3 = (long ****)&DAT_00000004;
      goto LAB_7101c51350;
    }
    lVar17 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar17 + 0x380) == 0) goto LAB_7101c51358;
    FUN_71037780e0(&local_90,lVar17 + 0x208,(long ****)"balloon_off",param_3,param_4,param_5,param_6
                   ,param_7,param_8);
    FUN_710377aee0(0x3f800000,(long)&local_90);
    ppuVar6 = local_88[0];
    *(undefined4 *)(lVar17 + 0x380) = 0;
    local_90 = &PTR_FUN_710523d9e8;
    local_88[0] = (undefined **)0x0;
    if (ppuVar6 == (undefined **)0x0) goto LAB_7101c51358;
    FUN_710392eb40((ulong)ppuVar6);
    if (*(char *)(param_1 + 0xece) != '\0') goto LAB_7101c51360;
LAB_7101c513c4:
    bVar7 = false;
    if (*(char *)(param_1 + 0xecd) == '\0') goto LAB_7101c513a4;
LAB_7101c513cc:
    if (*(char *)(param_1 + 0xec8) == '\x04') {
      bVar8 = *(char *)(param_1 + 0xeca) == '\0';
      goto joined_r0x007101c513e4;
    }
    bVar8 = false;
    if (!bVar7) goto LAB_7101c513e8;
LAB_7101c513a8:
    param_3 = (long ****)0x3;
LAB_7101c513f4:
    FUN_7101c76f30(param_1 + 0x448,2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  lVar17 = param_1 + 0x448;
  bVar7 = false;
  if (*(char *)(param_1 + 0x10b6) != '\0') {
    if ((*(byte *)(param_1 + 0x10b0) | 1) == 3) {
      bVar7 = false;
      if ((*(int *)(param_1 + 0x2c0) - 5U < 4) && (4 < *(int *)(param_1 + 0x2c0) - 7U)) {
        bVar7 = *(char *)(param_1 + 0x10b2) == '\0';
      }
    }
    else {
      bVar7 = false;
    }
  }
  bVar8 = false;
  if (*(char *)(param_1 + 0x10b5) == '\0') {
LAB_7101c5148c:
    if (bVar7) goto LAB_7101c51490;
LAB_7101c514a4:
    if (bVar8) {
      param_3 = (long ****)&DAT_00000004;
      goto LAB_7101c514b0;
    }
    lVar24 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar24 + 0x740) != 0) {
      FUN_71037780e0(&local_90,lVar24 + 0x5c8,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_90);
      ppuVar6 = local_88[0];
      *(undefined4 *)(lVar24 + 0x740) = 0;
      local_90 = &PTR_FUN_710523d9e8;
      local_88[0] = (undefined **)0x0;
      if (ppuVar6 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar6);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x10b0) == '\x04') {
      bVar8 = *(char *)(param_1 + 0x10b2) == '\0';
      goto LAB_7101c5148c;
    }
    bVar8 = false;
    if (!bVar7) goto LAB_7101c514a4;
LAB_7101c51490:
    param_3 = (long ****)0x3;
LAB_7101c514b0:
    FUN_7101c76f30(lVar17,3,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  bVar7 = false;
  if (*(char *)(param_1 + 0x129e) != '\0') {
    if ((*(byte *)(param_1 + 0x1298) | 1) == 3) {
      bVar7 = false;
      if ((*(int *)(param_1 + 0x2c0) - 5U < 4) && (4 < *(int *)(param_1 + 0x2c0) - 7U)) {
        bVar7 = *(char *)(param_1 + 0x129a) == '\0';
      }
    }
    else {
      bVar7 = false;
    }
  }
  bVar8 = false;
  if (*(char *)(param_1 + 0x129d) == '\0') {
LAB_7101c5153c:
    if (bVar7) goto LAB_7101c51540;
LAB_7101c51554:
    if (bVar8) {
      param_3 = (long ****)&DAT_00000004;
      goto LAB_7101c51560;
    }
    lVar24 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar24 + 0x920) != 0) {
      FUN_71037780e0(&local_90,lVar24 + 0x7a8,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_90);
      ppuVar6 = local_88[0];
      *(undefined4 *)(lVar24 + 0x920) = 0;
      local_90 = &PTR_FUN_710523d9e8;
      local_88[0] = (undefined **)0x0;
      if (ppuVar6 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar6);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x1298) == '\x04') {
      bVar8 = *(char *)(param_1 + 0x129a) == '\0';
      goto LAB_7101c5153c;
    }
    bVar8 = false;
    if (!bVar7) goto LAB_7101c51554;
LAB_7101c51540:
    param_3 = (long ****)0x3;
LAB_7101c51560:
    FUN_7101c76f30(lVar17,4,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  bVar7 = false;
  if (*(char *)(param_1 + 0x1486) != '\0') {
    if ((*(byte *)(param_1 + 0x1480) | 1) == 3) {
      bVar7 = false;
      if ((*(int *)(param_1 + 0x2c0) - 5U < 4) && (4 < *(int *)(param_1 + 0x2c0) - 7U)) {
        bVar7 = *(char *)(param_1 + 0x1482) == '\0';
      }
    }
    else {
      bVar7 = false;
    }
  }
  bVar8 = false;
  if (*(char *)(param_1 + 0x1485) == '\0') {
LAB_7101c515ec:
    if (bVar7) goto LAB_7101c515f0;
LAB_7101c51604:
    if (bVar8) {
      param_3 = (long ****)&DAT_00000004;
      goto LAB_7101c51610;
    }
    lVar24 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar24 + 0xb00) != 0) {
      FUN_71037780e0(&local_90,lVar24 + 0x988,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_90);
      ppuVar6 = local_88[0];
      *(undefined4 *)(lVar24 + 0xb00) = 0;
      local_90 = &PTR_FUN_710523d9e8;
      local_88[0] = (undefined **)0x0;
      if (ppuVar6 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar6);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x1480) == '\x04') {
      bVar8 = *(char *)(param_1 + 0x1482) == '\0';
      goto LAB_7101c515ec;
    }
    bVar8 = false;
    if (!bVar7) goto LAB_7101c51604;
LAB_7101c515f0:
    param_3 = (long ****)0x3;
LAB_7101c51610:
    FUN_7101c76f30(lVar17,5,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  bVar7 = false;
  if (*(char *)(param_1 + 0x166e) != '\0') {
    if ((*(byte *)(param_1 + 0x1668) | 1) == 3) {
      bVar7 = false;
      if ((*(int *)(param_1 + 0x2c0) - 5U < 4) && (4 < *(int *)(param_1 + 0x2c0) - 7U)) {
        bVar7 = *(char *)(param_1 + 0x166a) == '\0';
      }
    }
    else {
      bVar7 = false;
    }
  }
  bVar8 = false;
  if (*(char *)(param_1 + 0x166d) == '\0') {
LAB_7101c5169c:
    if (bVar7) goto LAB_7101c516a0;
LAB_7101c516b4:
    if (bVar8) {
      param_3 = (long ****)&DAT_00000004;
      goto LAB_7101c516c0;
    }
    lVar24 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar24 + 0xce0) != 0) {
      FUN_71037780e0(&local_90,lVar24 + 0xb68,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_90);
      ppuVar6 = local_88[0];
      *(undefined4 *)(lVar24 + 0xce0) = 0;
      local_90 = &PTR_FUN_710523d9e8;
      local_88[0] = (undefined **)0x0;
      if (ppuVar6 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar6);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x1668) == '\x04') {
      bVar8 = *(char *)(param_1 + 0x166a) == '\0';
      goto LAB_7101c5169c;
    }
    bVar8 = false;
    if (!bVar7) goto LAB_7101c516b4;
LAB_7101c516a0:
    param_3 = (long ****)0x3;
LAB_7101c516c0:
    FUN_7101c76f30(lVar17,6,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  bVar7 = false;
  if (*(char *)(param_1 + 0x1856) != '\0') {
    if ((*(byte *)(param_1 + 0x1850) | 1) == 3) {
      bVar7 = false;
      if ((*(int *)(param_1 + 0x2c0) - 5U < 4) && (4 < *(int *)(param_1 + 0x2c0) - 7U)) {
        bVar7 = *(char *)(param_1 + 0x1852) == '\0';
      }
    }
    else {
      bVar7 = false;
    }
  }
  bVar8 = false;
  if (*(char *)(param_1 + 0x1855) == '\0') {
LAB_7101c5174c:
    if (bVar7) goto LAB_7101c51750;
LAB_7101c51764:
    if (bVar8) {
      param_3 = (long ****)&DAT_00000004;
      goto LAB_7101c51770;
    }
    lVar17 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar17 + 0xec0) == 0) goto LAB_7101c51778;
    FUN_71037780e0(&local_90,lVar17 + 0xd48,(long ****)"balloon_off",param_3,param_4,param_5,param_6
                   ,param_7,param_8);
    FUN_710377aee0(0x3f800000,(long)&local_90);
    ppuVar6 = local_88[0];
    *(undefined4 *)(lVar17 + 0xec0) = 0;
    local_90 = &PTR_FUN_710523d9e8;
    local_88[0] = (undefined **)0x0;
    if (ppuVar6 == (undefined **)0x0) goto LAB_7101c51778;
    FUN_710392eb40((ulong)ppuVar6);
    uVar10 = *(ulong *)(param_1 + 0x428);
    if ((uVar10 & 1) != 0) goto LAB_7101c519fc;
LAB_7101c51780:
    uVar22 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x1850) == '\x04') {
      bVar8 = *(char *)(param_1 + 0x1852) == '\0';
      goto LAB_7101c5174c;
    }
    bVar8 = false;
    if (!bVar7) goto LAB_7101c51764;
LAB_7101c51750:
    param_3 = (long ****)0x3;
LAB_7101c51770:
    FUN_7101c76f30(lVar17,7,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101c51778:
    uVar10 = *(ulong *)(param_1 + 0x428);
    if ((uVar10 & 1) == 0) goto LAB_7101c51780;
LAB_7101c519fc:
    plVar15 = *(long **)(param_1 + 0x2f8);
    plVar9 = (long *)**(long **)(*plVar15 + 0x18);
    if (plVar9 == (long *)0x0) {
LAB_7101c51a54:
      uVar10 = *(ulong *)(param_1 + 0x428);
LAB_7101c51a58:
      if (((uint)uVar10 >> 1 & 1) == 0) {
        uVar22 = (uint)(uVar10 >> 2) & 1;
      }
      else {
        uVar22 = 1;
      }
    }
    else {
      uVar10 = (**(code **)(*plVar9 + 0x2f8))();
      if ((uVar10 & 1) == 0) {
        plVar9 = (long *)**(long **)(*plVar15 + 0x18);
        if (plVar9 == (long *)0x0) goto LAB_7101c51a54;
        uVar21 = (**(code **)(*plVar9 + 0x3c0))();
        uVar10 = *(ulong *)(param_1 + 0x428);
        if ((uVar21 & 1) == 0) goto LAB_7101c51780;
        goto LAB_7101c51a58;
      }
      uVar10 = *(ulong *)(param_1 + 0x428);
      uVar22 = 0;
    }
  }
  *(ulong *)(param_1 + 0x428) = uVar10 & 0xfffffffffffffffd;
  if ((uVar10 & 1) == 0) {
LAB_7101c51ad4:
    if (uVar22 != 0) {
LAB_7101c51ad8:
      *(undefined1 *)(param_1 + 0x431) = 0;
    }
  }
  else {
    plVar15 = *(long **)(param_1 + 0x2f8);
    plVar9 = (long *)**(long **)(*plVar15 + 0x18);
    if ((plVar9 != (long *)0x0) &&
       ((uVar10 = (**(code **)(*plVar9 + 0x2f8))(), (uVar10 & 1) != 0 ||
        ((plVar9 = (long *)**(long **)(*plVar15 + 0x18), plVar9 != (long *)0x0 &&
         (uVar10 = (**(code **)(*plVar9 + 0x3c0))(), (uVar10 & 1) == 0)))))) goto LAB_7101c51ad4;
    if (((uint)*(ulong *)(param_1 + 0x428) >> 1 & 1) != 0) {
      if (uVar22 != 0) goto LAB_7101c51adc;
      goto LAB_7101c51ad8;
    }
    if ((uVar22 ^ (uint)(*(ulong *)(param_1 + 0x428) >> 2) & 1) == 1) goto LAB_7101c51ad8;
  }
LAB_7101c51adc:
  pbVar16 = *(byte **)(param_1 + 0x4f8);
  if (pbVar16 == *(byte **)(param_1 + 0x500)) {
    uVar10 = 0;
  }
  else {
    pbVar20 = *(byte **)(param_1 + 0x500) + (-2 - (long)pbVar16);
    uVar21 = (ulong)pbVar20 >> 1;
    uVar22 = (int)uVar21 + 1;
    uVar10 = (ulong)uVar22 & 3;
    if (pbVar20 < (byte *)0x6) {
      uVar19 = 0;
    }
    else {
      uVar19 = 0;
      lVar17 = (uVar10 - 1) - uVar21;
      do {
        bVar4 = *pbVar16;
        pbVar20 = pbVar16 + 2;
        pbVar1 = pbVar16 + 4;
        pbVar2 = pbVar16 + 6;
        pbVar16 = pbVar16 + 8;
        uVar19 = (uint)*pbVar2 + (uint)*pbVar1 + (uint)*pbVar20 + bVar4 + uVar19;
        lVar17 = lVar17 + 4;
      } while (lVar17 != 0);
    }
    if ((uVar22 & 3) != 0) {
      lVar17 = -uVar10;
      do {
        uVar19 = *pbVar16 + uVar19;
        lVar17 = lVar17 + 1;
        pbVar16 = pbVar16 + 2;
      } while (lVar17 != 0);
    }
    uVar10 = (ulong)(uVar19 & 0xff);
  }
  FUN_71003a4ca0((uint *)&local_90,"ring_fighter_%02d",uVar10,param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x2d8),(long)local_88);
  lVar17 = *(long *)(param_1 + 0x4f8);
  if (*(long *)(param_1 + 0x500) != lVar17) {
    iVar3 = *(int *)(param_1 + 0x2c0);
    pppplVar23 = (long ****)0x0;
    do {
      unaff_x22 = (byte ****)
                  ((ulong)unaff_x22 & 0xffffffffffff0000 |
                  (ulong)*(ushort *)(lVar17 + (long)pppplVar23 * 2));
      param_3 = pppplVar23;
      param_4 = unaff_x22;
      FUN_7101c59930(param_1,iVar3 - 7U < 5,(ulong)pppplVar23,unaff_x22,param_5,param_6,param_7,
                     param_8);
      pppplVar23 = (long ****)((ulong)((int)pppplVar23 + 1) & 0xff);
      lVar17 = *(long *)(param_1 + 0x4f8);
    } while (pppplVar23 < (long ****)(*(long *)(param_1 + 0x500) - lVar17 >> 1));
  }
  FUN_7101c5d460(param_1 + 0x800);
  uVar10 = (ulong)*(byte *)(param_1 + 0x1920);
  if (uVar10 < 8) {
    lVar17 = *(long *)(param_1 + 0x450) + uVar10 * 0x1e0;
    uVar12 = extraout_x1;
    if (*(char *)(lVar17 + 0x19b) != '\0') {
      FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 0x450) + uVar10 * 0x1e0 + 0x30),
                     0x71042c4e37);
      uVar12 = extraout_x1_00;
    }
    *(undefined1 *)(lVar17 + 0x19b) = 0;
    uVar10 = (ulong)*(byte *)(param_1 + 0x1920);
    if (uVar10 < 8) {
      if (*(char *)(param_1 + uVar10 * 0x1e8 + 0xaf8) == '\x01') {
        FUN_7101c5d580(param_1,uVar12,param_3,param_4,param_5,param_6,param_7,param_8);
      }
      pppplVar23 = (long ****)0x0;
      ppppbVar13 = (byte ****)0x0;
      FUN_7101c59330(param_1 + 0x800,0,0,0,param_5,param_6,param_7,param_8);
      FUN_71037780e0(&local_90,param_1 + 0x2d0,(long ****)"anim_ready",pppplVar23,ppppbVar13,param_5
                     ,param_6,param_7,param_8);
      pppuVar11 = (undefined ***)
                  FUN_710392e290(0x10,0x10,pppplVar23,ppppbVar13,param_5,param_6,param_7,param_8);
      if (pppuVar11 == (undefined ***)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_34 = 0;
          local_48 = (long ***)&DAT_00000010;
          pppplVar23 = &local_48;
          uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
          if (((uVar10 & 1) != 0) &&
             (pppuVar11 = (undefined ***)
                          FUN_710392e290(0x10,0x10,pppplVar23,ppppbVar13,param_5,param_6,param_7,
                                         param_8), pppuVar11 != (undefined ***)0x0))
          goto LAB_7101c51cfc;
        }
        pppuVar11 = (undefined ***)0x0;
      }
LAB_7101c51cfc:
      ppuVar6 = local_88[0];
      *pppuVar11 = &PTR_FUN_710523d9e8;
      pppuVar11[1] = (undefined **)0x0;
      if (&local_90 != pppuVar11) {
        local_88[0] = (undefined **)0x0;
        pppuVar11[1] = ppuVar6;
      }
      plVar9 = *(long **)(param_1 + 0x1ae8);
      *(undefined ****)(param_1 + 0x1ae8) = pppuVar11;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
      ppuVar6 = local_88[0];
      local_90 = &PTR_FUN_710523d9e8;
      local_88[0] = (undefined **)0x0;
      if (ppuVar6 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar6);
      }
      FUN_710377aee0(0x3f800000,*(long *)(param_1 + 0x1ae8));
      lVar17 = DAT_710532f8d0;
      if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar10 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0xf8a89342f,(long ****)&DAT_00000004
                                  ,ppppbVar13,param_5,param_6,param_7,param_8), (uVar10 & 1) != 0))
      {
        FUN_71024076d0(local_d0,0xf8a89342f);
        if (((local_c0 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_b8 == DAT_7106dd53ac)) {
          piVar18 = (int *)(local_c0 + 0x38);
          do {
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar7) {
              *piVar18 = *piVar18 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
      else {
        local_a8 = 0xffffffffffffffff;
        uStack_a0 = 0;
        local_b8 = 0;
        uStack_b4 = 0x876500;
        local_d0[0] = 0;
        local_98 = 0;
      }
      local_c8 = &PTR_FUN_7104f73d50;
      local_c0 = 0;
      local_b0 = 0;
      if (((*(char *)(*(long *)(lVar17 + 8) + 0x191) == '\0') &&
          (uVar10 = FUN_7103313f20(*(long *)(lVar17 + 8),0x1876d5eaac,(long ****)&DAT_00000004,
                                   ppppbVar13,param_5,param_6,param_7,param_8), (uVar10 & 1) != 0))
         && ((FUN_71024076d0(local_110,0x1876d5eaac), local_100 != 0 &&
             ((DAT_7106dd53a8 == '\x01' && (local_f8 == DAT_7106dd53ac)))))) {
        piVar18 = (int *)(local_100 + 0x38);
        do {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar7) {
            *piVar18 = *piVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      return;
    }
  }
LAB_7101c51eec:
                    /* WARNING: Subroutine does not return */
  abort();
}

