// addr:      7101c56ec0
// offset:    0x1c56ec0
// name:      FUN_7101c56ec0
// mangled:   
// signature: undefined __cdecl FUN_7101c56ec0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101c56ec0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  undefined **ppuVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  long *plVar9;
  undefined8 uVar10;
  byte ****ppppbVar11;
  ulong uVar12;
  long lVar13;
  char *pcVar14;
  int *piVar15;
  char cVar16;
  char *pcVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  byte ****unaff_x22;
  undefined **local_78;
  undefined **local_70;
  long local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if (*(int *)(param_1 + 0x2c4) == 0xb4) {
    if (*(uint *)(param_1 + 700) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 700) * 4 + 0x270) = 10;
      return;
    }
    goto LAB_7101c57bfc;
  }
  if (*(int *)(param_1 + 0x2c4) != 0) {
    return;
  }
  if ((((*(char *)(param_1 + 0xafe) == '\0') || ((*(byte *)(param_1 + 0xaf8) | 1) != 3)) ||
      (3 < *(int *)(param_1 + 0x2c0) - 5U)) || (*(int *)(param_1 + 0x2c0) - 7U < 5)) {
    bVar6 = false;
    bVar7 = false;
    if (*(char *)(param_1 + 0xafd) != '\0') goto LAB_7101c56f60;
LAB_7101c56f78:
    if (!bVar6) goto LAB_7101c56f94;
LAB_7101c56f80:
    param_3 = 3;
LAB_7101c56f9c:
    FUN_7101c76f30(param_1 + 0x448,0,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101c56fa8:
    if (*(char *)(param_1 + 0xce6) == '\0') goto LAB_7101c56ffc;
LAB_7101c56fb0:
    if ((((*(byte *)(param_1 + 0xce0) | 1) != 3) || (3 < *(int *)(param_1 + 0x2c0) - 5U)) ||
       (*(int *)(param_1 + 0x2c0) - 7U < 5)) goto LAB_7101c56ffc;
    bVar6 = *(char *)(param_1 + 0xce2) == '\0';
    if (*(char *)(param_1 + 0xce5) != '\0') goto LAB_7101c57004;
    bVar7 = false;
LAB_7101c5701c:
    if (bVar6) goto LAB_7101c57020;
LAB_7101c57034:
    if (bVar7) {
      param_3 = 4;
      goto LAB_7101c57040;
    }
    lVar13 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar13 + 0x380) == 0) goto LAB_7101c57048;
    FUN_71037780e0(&local_78,lVar13 + 0x208,(long ****)"balloon_off",param_3,param_4,param_5,param_6
                   ,param_7,param_8);
    FUN_710377aee0(0x3f800000,(long)&local_78);
    ppuVar5 = local_70;
    *(undefined4 *)(lVar13 + 0x380) = 0;
    local_78 = &PTR_FUN_710523d9e8;
    local_70 = (undefined **)0x0;
    if (ppuVar5 == (undefined **)0x0) goto LAB_7101c57048;
    FUN_710392eb40((ulong)ppuVar5);
    if (*(char *)(param_1 + 0xece) != '\0') goto LAB_7101c57050;
LAB_7101c5709c:
    bVar6 = false;
    bVar7 = false;
    if (*(char *)(param_1 + 0xecd) == '\0') goto LAB_7101c570bc;
LAB_7101c570a4:
    if (*(char *)(param_1 + 0xec8) == '\x04') {
      bVar7 = *(char *)(param_1 + 0xeca) == '\0';
      goto LAB_7101c570bc;
    }
    bVar7 = false;
    if (!bVar6) goto LAB_7101c570d4;
LAB_7101c570c0:
    param_3 = 3;
LAB_7101c570e0:
    FUN_7101c76f30(param_1 + 0x448,2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    bVar6 = *(char *)(param_1 + 0xafa) == '\0';
    if (*(char *)(param_1 + 0xafd) == '\0') {
      bVar7 = false;
      goto LAB_7101c56f78;
    }
LAB_7101c56f60:
    if (*(char *)(param_1 + 0xaf8) == '\x04') {
      bVar7 = *(char *)(param_1 + 0xafa) == '\0';
      goto LAB_7101c56f78;
    }
    bVar7 = false;
    if (bVar6) goto LAB_7101c56f80;
LAB_7101c56f94:
    if (bVar7) {
      param_3 = 4;
      goto LAB_7101c56f9c;
    }
    lVar13 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar13 + 0x1a0) == 0) goto LAB_7101c56fa8;
    FUN_71037780e0(&local_78,lVar13 + 0x28,(long ****)"balloon_off",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_710377aee0(0x3f800000,(long)&local_78);
    ppuVar5 = local_70;
    *(undefined4 *)(lVar13 + 0x1a0) = 0;
    local_78 = &PTR_FUN_710523d9e8;
    local_70 = (undefined **)0x0;
    if (ppuVar5 == (undefined **)0x0) goto LAB_7101c56fa8;
    FUN_710392eb40((ulong)ppuVar5);
    if (*(char *)(param_1 + 0xce6) != '\0') goto LAB_7101c56fb0;
LAB_7101c56ffc:
    bVar6 = false;
    bVar7 = false;
    if (*(char *)(param_1 + 0xce5) == '\0') goto LAB_7101c5701c;
LAB_7101c57004:
    if (*(char *)(param_1 + 0xce0) == '\x04') {
      bVar7 = *(char *)(param_1 + 0xce2) == '\0';
      goto LAB_7101c5701c;
    }
    bVar7 = false;
    if (!bVar6) goto LAB_7101c57034;
LAB_7101c57020:
    param_3 = 3;
LAB_7101c57040:
    FUN_7101c76f30(param_1 + 0x448,1,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101c57048:
    if (*(char *)(param_1 + 0xece) == '\0') goto LAB_7101c5709c;
LAB_7101c57050:
    if ((((*(byte *)(param_1 + 0xec8) | 1) != 3) || (3 < *(int *)(param_1 + 0x2c0) - 5U)) ||
       (*(int *)(param_1 + 0x2c0) - 7U < 5)) goto LAB_7101c5709c;
    bVar6 = *(char *)(param_1 + 0xeca) == '\0';
    if (*(char *)(param_1 + 0xecd) != '\0') goto LAB_7101c570a4;
    bVar7 = false;
LAB_7101c570bc:
    if (bVar6) goto LAB_7101c570c0;
LAB_7101c570d4:
    if (bVar7) {
      param_3 = 4;
      goto LAB_7101c570e0;
    }
    lVar13 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar13 + 0x560) != 0) {
      FUN_71037780e0(&local_78,lVar13 + 1000,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_78);
      ppuVar5 = local_70;
      *(undefined4 *)(lVar13 + 0x560) = 0;
      local_78 = &PTR_FUN_710523d9e8;
      local_70 = (undefined **)0x0;
      if (ppuVar5 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar5);
      }
    }
  }
  lVar13 = param_1 + 0x448;
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
LAB_7101c5716c:
    if (bVar6) goto LAB_7101c57170;
LAB_7101c57184:
    if (bVar7) {
      param_3 = 4;
      goto LAB_7101c57190;
    }
    lVar20 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar20 + 0x740) != 0) {
      FUN_71037780e0(&local_78,lVar20 + 0x5c8,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_78);
      ppuVar5 = local_70;
      *(undefined4 *)(lVar20 + 0x740) = 0;
      local_78 = &PTR_FUN_710523d9e8;
      local_70 = (undefined **)0x0;
      if (ppuVar5 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar5);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x10b0) == '\x04') {
      bVar7 = *(char *)(param_1 + 0x10b2) == '\0';
      goto LAB_7101c5716c;
    }
    bVar7 = false;
    if (!bVar6) goto LAB_7101c57184;
LAB_7101c57170:
    param_3 = 3;
LAB_7101c57190:
    FUN_7101c76f30(lVar13,3,param_3,param_4,param_5,param_6,param_7,param_8);
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
LAB_7101c5721c:
    if (bVar6) goto LAB_7101c57220;
LAB_7101c57234:
    if (bVar7) {
      param_3 = 4;
      goto LAB_7101c57240;
    }
    lVar20 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar20 + 0x920) != 0) {
      FUN_71037780e0(&local_78,lVar20 + 0x7a8,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_78);
      ppuVar5 = local_70;
      *(undefined4 *)(lVar20 + 0x920) = 0;
      local_78 = &PTR_FUN_710523d9e8;
      local_70 = (undefined **)0x0;
      if (ppuVar5 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar5);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x1298) == '\x04') {
      bVar7 = *(char *)(param_1 + 0x129a) == '\0';
      goto LAB_7101c5721c;
    }
    bVar7 = false;
    if (!bVar6) goto LAB_7101c57234;
LAB_7101c57220:
    param_3 = 3;
LAB_7101c57240:
    FUN_7101c76f30(lVar13,4,param_3,param_4,param_5,param_6,param_7,param_8);
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
LAB_7101c572cc:
    if (bVar6) goto LAB_7101c572d0;
LAB_7101c572e4:
    if (bVar7) {
      param_3 = 4;
      goto LAB_7101c572f0;
    }
    lVar20 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar20 + 0xb00) != 0) {
      FUN_71037780e0(&local_78,lVar20 + 0x988,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_78);
      ppuVar5 = local_70;
      *(undefined4 *)(lVar20 + 0xb00) = 0;
      local_78 = &PTR_FUN_710523d9e8;
      local_70 = (undefined **)0x0;
      if (ppuVar5 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar5);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x1480) == '\x04') {
      bVar7 = *(char *)(param_1 + 0x1482) == '\0';
      goto LAB_7101c572cc;
    }
    bVar7 = false;
    if (!bVar6) goto LAB_7101c572e4;
LAB_7101c572d0:
    param_3 = 3;
LAB_7101c572f0:
    FUN_7101c76f30(lVar13,5,param_3,param_4,param_5,param_6,param_7,param_8);
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
LAB_7101c5737c:
    if (bVar6) goto LAB_7101c57380;
LAB_7101c57394:
    if (bVar7) {
      param_3 = 4;
      goto LAB_7101c573a0;
    }
    lVar20 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar20 + 0xce0) != 0) {
      FUN_71037780e0(&local_78,lVar20 + 0xb68,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_78);
      ppuVar5 = local_70;
      *(undefined4 *)(lVar20 + 0xce0) = 0;
      local_78 = &PTR_FUN_710523d9e8;
      local_70 = (undefined **)0x0;
      if (ppuVar5 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar5);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x1668) == '\x04') {
      bVar7 = *(char *)(param_1 + 0x166a) == '\0';
      goto LAB_7101c5737c;
    }
    bVar7 = false;
    if (!bVar6) goto LAB_7101c57394;
LAB_7101c57380:
    param_3 = 3;
LAB_7101c573a0:
    FUN_7101c76f30(lVar13,6,param_3,param_4,param_5,param_6,param_7,param_8);
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
LAB_7101c5742c:
    if (bVar6) goto LAB_7101c57430;
LAB_7101c57444:
    if (bVar7) {
      uVar10 = 4;
      goto LAB_7101c57450;
    }
    lVar13 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar13 + 0xec0) != 0) {
      FUN_71037780e0(&local_78,lVar13 + 0xd48,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_78);
      ppuVar5 = local_70;
      *(undefined4 *)(lVar13 + 0xec0) = 0;
      local_78 = &PTR_FUN_710523d9e8;
      local_70 = (undefined **)0x0;
      if (ppuVar5 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar5);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x1850) == '\x04') {
      bVar7 = *(char *)(param_1 + 0x1852) == '\0';
      goto LAB_7101c5742c;
    }
    bVar7 = false;
    if (!bVar6) goto LAB_7101c57444;
LAB_7101c57430:
    uVar10 = 3;
LAB_7101c57450:
    FUN_7101c76f30(lVar13,7,uVar10,param_4,param_5,param_6,param_7,param_8);
  }
  FUN_7101c591b0(param_1,0,0,0);
  uVar12 = *(ulong *)(param_1 + 0x428);
  if ((uVar12 & 1) == 0) {
LAB_7101c57474:
    uVar18 = 0;
  }
  else {
    plVar21 = *(long **)(param_1 + 0x2f8);
    plVar9 = (long *)**(long **)(*plVar21 + 0x18);
    if (plVar9 == (long *)0x0) {
LAB_7101c57744:
      uVar12 = *(ulong *)(param_1 + 0x428);
    }
    else {
      uVar12 = (**(code **)(*plVar9 + 0x2f8))();
      if ((uVar12 & 1) != 0) {
        uVar12 = *(ulong *)(param_1 + 0x428);
        uVar18 = 0;
        goto LAB_7101c57758;
      }
      plVar9 = (long *)**(long **)(*plVar21 + 0x18);
      if (plVar9 == (long *)0x0) goto LAB_7101c57744;
      uVar19 = (**(code **)(*plVar9 + 0x3c0))();
      uVar12 = *(ulong *)(param_1 + 0x428);
      if ((uVar19 & 1) == 0) goto LAB_7101c57474;
    }
    if (((uint)uVar12 >> 1 & 1) == 0) {
      uVar18 = (uint)(uVar12 >> 2) & 1;
    }
    else {
      uVar18 = 1;
    }
  }
LAB_7101c57758:
  *(ulong *)(param_1 + 0x428) = uVar12 & 0xfffffffffffffffd;
  if ((uVar12 & 1) == 0) {
LAB_7101c577c4:
    if (uVar18 != 0) {
LAB_7101c577c8:
      *(undefined1 *)(param_1 + 0x431) = 0;
    }
  }
  else {
    plVar21 = *(long **)(param_1 + 0x2f8);
    plVar9 = (long *)**(long **)(*plVar21 + 0x18);
    if ((plVar9 != (long *)0x0) &&
       ((uVar12 = (**(code **)(*plVar9 + 0x2f8))(), (uVar12 & 1) != 0 ||
        ((plVar9 = (long *)**(long **)(*plVar21 + 0x18), plVar9 != (long *)0x0 &&
         (uVar12 = (**(code **)(*plVar9 + 0x3c0))(), (uVar12 & 1) == 0)))))) goto LAB_7101c577c4;
    if (((uint)*(ulong *)(param_1 + 0x428) >> 1 & 1) == 0) {
      if ((uVar18 ^ (uint)(*(ulong *)(param_1 + 0x428) >> 2) & 1) != 1) goto LAB_7101c577cc;
      goto LAB_7101c577c8;
    }
    if (uVar18 == 0) goto LAB_7101c577c8;
  }
LAB_7101c577cc:
  uVar12 = 0;
  ppppbVar11 = (byte ****)0x0;
  FUN_7101c59330(param_1 + 0x800,0,0,0,param_5,param_6,param_7,param_8);
  lVar13 = *(long *)(param_1 + 0x4f8);
  if (*(long *)(param_1 + 0x500) != lVar13) {
    iVar3 = *(int *)(param_1 + 0x2c0);
    uVar19 = 0;
    do {
      unaff_x22 = (byte ****)
                  ((ulong)unaff_x22 & 0xffffffffffff0000 | (ulong)*(ushort *)(lVar13 + uVar19 * 2));
      uVar12 = uVar19;
      ppppbVar11 = unaff_x22;
      FUN_7101c59930(param_1,iVar3 - 7U < 5,uVar19,unaff_x22,param_5,param_6,param_7,param_8);
      uVar19 = (ulong)((int)uVar19 + 1) & 0xff;
      lVar13 = *(long *)(param_1 + 0x4f8);
    } while (uVar19 < (ulong)(*(long *)(param_1 + 0x500) - lVar13 >> 1));
  }
  if (*(char *)(param_1 + 0x808) == '\0') {
    *(undefined1 *)(param_1 + 0x808) = 1;
    *(undefined1 *)(param_1 + 0x910) = 0;
    if (*(byte *)(param_1 + 0x838) - 1 < 4) {
      FUN_71003a4ca0((uint *)&local_78,"rank_%d",(ulong)*(byte *)(param_1 + 0x838),uVar12,ppppbVar11
                     ,param_5,param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x830),(long)&local_70);
LAB_7101c578c4:
      cVar8 = false;
    }
    else {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x830),0x710444377e);
      if (*(char **)(param_1 + 0x8c8) == *(char **)(param_1 + 0x8c0)) goto LAB_7101c578c4;
      cVar8 = **(char **)(param_1 + 0x8c0) != '\0';
    }
    if (*(byte *)(param_1 + 0x850) - 1 < 4) {
      FUN_71003a4ca0((uint *)&local_78,"rank_%d",(ulong)*(byte *)(param_1 + 0x850),uVar12,ppppbVar11
                     ,param_5,param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x848),(long)&local_70);
    }
    else {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x848),0x710444377e);
      if ((ulong)(*(long *)(param_1 + 0x8c8) - *(long *)(param_1 + 0x8c0) >> 1) < 2) {
        bVar6 = false;
      }
      else {
        bVar6 = *(char *)(*(long *)(param_1 + 0x8c0) + 2) != '\0';
      }
      cVar8 = bVar6 + cVar8;
    }
    if (*(byte *)(param_1 + 0x868) - 1 < 4) {
      FUN_71003a4ca0((uint *)&local_78,"rank_%d",(ulong)*(byte *)(param_1 + 0x868),uVar12,ppppbVar11
                     ,param_5,param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x860),(long)&local_70);
    }
    else {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x860),0x710444377e);
      if ((ulong)(*(long *)(param_1 + 0x8c8) - *(long *)(param_1 + 0x8c0) >> 1) < 3) {
        bVar6 = false;
      }
      else {
        bVar6 = *(char *)(*(long *)(param_1 + 0x8c0) + 4) != '\0';
      }
      cVar8 = bVar6 + cVar8;
    }
    if (*(byte *)(param_1 + 0x880) - 1 < 4) {
      FUN_71003a4ca0((uint *)&local_78,"rank_%d",(ulong)*(byte *)(param_1 + 0x880),uVar12,ppppbVar11
                     ,param_5,param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x878),(long)&local_70);
      pcVar14 = *(char **)(param_1 + 0x8c0);
      pcVar17 = *(char **)(param_1 + 0x8c8);
      if (pcVar14 != pcVar17) goto LAB_7101c57a3c;
LAB_7101c57ad0:
      if (cVar8 == '\0') goto LAB_7101c57ba0;
    }
    else {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x878),0x710444377e);
      pcVar17 = *(char **)(param_1 + 0x8c8);
      pcVar14 = *(char **)(param_1 + 0x8c0);
      if ((ulong)((long)pcVar17 - (long)pcVar14 >> 1) < 4) {
        bVar6 = false;
      }
      else {
        bVar6 = pcVar14[6] != '\0';
      }
      cVar8 = bVar6 + cVar8;
      if (pcVar14 == pcVar17) goto LAB_7101c57ad0;
LAB_7101c57a3c:
      uVar19 = (ulong)(pcVar17 + (-2 - (long)pcVar14)) >> 1;
      uVar18 = (int)uVar19 + 1;
      uVar12 = (ulong)uVar18 & 3;
      if (pcVar17 + (-2 - (long)pcVar14) < (char *)0x6) {
        cVar16 = '\0';
      }
      else {
        cVar16 = '\0';
        lVar13 = (uVar12 - 1) - uVar19;
        do {
          cVar4 = *pcVar14;
          pcVar17 = pcVar14 + 2;
          pcVar1 = pcVar14 + 4;
          pcVar2 = pcVar14 + 6;
          pcVar14 = pcVar14 + 8;
          cVar16 = *pcVar2 + *pcVar1 + *pcVar17 + cVar4 + cVar16;
          lVar13 = lVar13 + 4;
        } while (lVar13 != 0);
      }
      if ((uVar18 & 3) != 0) {
        lVar13 = -uVar12;
        do {
          cVar16 = *pcVar14 + cVar16;
          lVar13 = lVar13 + 1;
          pcVar14 = pcVar14 + 2;
        } while (lVar13 != 0);
      }
      if (cVar8 == cVar16) goto LAB_7101c57ba0;
    }
    if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
       (uVar12 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x17a3061361,(long ****)&DAT_00000004,
                                ppppbVar11,param_5,param_6,param_7,param_8), (uVar12 & 1) != 0)) {
      FUN_71024076d0((undefined4 *)&local_78,0x17a3061361);
      if (((local_68 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_60 == DAT_7106dd53ac)) {
        piVar15 = (int *)(local_68 + 0x38);
        do {
          cVar8 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar6) {
            *piVar15 = *piVar15 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
    }
    else {
      local_60 = 0x87650000000000;
      local_50 = 0xffffffffffffffff;
      uStack_48 = 0;
      local_78 = (undefined **)((ulong)local_78 & 0xffffffff00000000);
      local_40 = 0;
    }
    local_70 = &PTR_FUN_7104f73d50;
    local_68 = 0;
    local_58 = 0;
  }
LAB_7101c57ba0:
  uVar12 = (ulong)*(byte *)(param_1 + 0x1920);
  if (uVar12 < 8) {
    lVar13 = *(long *)(param_1 + 0x450) + uVar12 * 0x1e0;
    if (*(char *)(lVar13 + 0x19b) != '\0') {
      FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 0x450) + uVar12 * 0x1e0 + 0x30),
                     0x71042c4e37);
    }
    *(undefined1 *)(lVar13 + 0x19b) = 0;
    return;
  }
LAB_7101c57bfc:
                    /* WARNING: Subroutine does not return */
  abort();
}

