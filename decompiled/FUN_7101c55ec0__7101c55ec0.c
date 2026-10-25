// addr:      7101c55ec0
// offset:    0x1c55ec0
// name:      FUN_7101c55ec0
// mangled:   
// signature: undefined __cdecl FUN_7101c55ec0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101c55ec0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  bool bVar5;
  bool bVar6;
  long *plVar7;
  long ***ppplVar8;
  ulong uVar9;
  undefined8 uVar10;
  long ****pppplVar11;
  byte ****ppppbVar12;
  uint uVar13;
  long lVar14;
  byte *pbVar15;
  long *plVar16;
  long *plVar17;
  long **pplVar18;
  uint uVar19;
  byte *pbVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  long *plVar25;
  ulong uVar26;
  long *plVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined **local_c8;
  long ***local_c0 [8];
  long ***local_80;
  long ***local_78;
  long ***local_70;
  undefined4 local_64;
  
  if (*(int *)(param_1 + 0x2c4) == 0) {
    if ((((*(char *)(param_1 + 0xafe) == '\0') || ((*(byte *)(param_1 + 0xaf8) | 1) != 3)) ||
        (3 < *(int *)(param_1 + 0x2c0) - 5U)) || (*(int *)(param_1 + 0x2c0) - 7U < 5)) {
      bVar5 = false;
      if (*(char *)(param_1 + 0xafd) == '\0') goto LAB_7101c55f48;
LAB_7101c55f64:
      if (*(char *)(param_1 + 0xaf8) == '\x04') {
        bVar6 = *(char *)(param_1 + 0xafa) == '\0';
        goto joined_r0x007101c55f80;
      }
      bVar6 = false;
      if (bVar5) goto LAB_7101c55f50;
LAB_7101c55f84:
      if (bVar6) {
        param_3 = (long ****)&DAT_00000004;
        goto LAB_7101c55f8c;
      }
      lVar14 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar14 + 0x1a0) == 0) goto LAB_7101c55f98;
      FUN_71037780e0(&local_c8,lVar14 + 0x28,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_c8);
      ppplVar8 = local_c0[0];
      *(undefined4 *)(lVar14 + 0x1a0) = 0;
      local_c8 = &PTR_FUN_710523d9e8;
      local_c0[0] = (long ***)0x0;
      if (ppplVar8 == (long ***)0x0) goto LAB_7101c55f98;
      FUN_710392eb40((ulong)ppplVar8);
      if (*(char *)(param_1 + 0xce6) != '\0') goto LAB_7101c55fa0;
LAB_7101c56008:
      bVar5 = false;
      if (*(char *)(param_1 + 0xce5) != '\0') goto LAB_7101c56010;
LAB_7101c55fe4:
      bVar6 = false;
joined_r0x007101c55fe4:
      if (!bVar5) goto LAB_7101c5602c;
LAB_7101c55fe8:
      param_3 = (long ****)0x3;
LAB_7101c56038:
      FUN_7101c76f30(param_1 + 0x448,1,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101c56040:
      if (*(char *)(param_1 + 0xece) == '\0') goto LAB_7101c560ac;
LAB_7101c56048:
      if ((((*(byte *)(param_1 + 0xec8) | 1) != 3) || (3 < *(int *)(param_1 + 0x2c0) - 5U)) ||
         (*(int *)(param_1 + 0x2c0) - 7U < 5)) goto LAB_7101c560ac;
      bVar5 = *(char *)(param_1 + 0xeca) == '\0';
      if (*(char *)(param_1 + 0xecd) != '\0') goto LAB_7101c560b4;
LAB_7101c5608c:
      bVar6 = false;
joined_r0x007101c560cc:
      if (bVar5) goto LAB_7101c56090;
LAB_7101c560d0:
      if (bVar6) {
        param_3 = (long ****)&DAT_00000004;
        goto LAB_7101c560dc;
      }
      lVar14 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar14 + 0x560) != 0) {
        FUN_71037780e0(&local_c8,lVar14 + 1000,(long ****)"balloon_off",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377aee0(0x3f800000,(long)&local_c8);
        ppplVar8 = local_c0[0];
        *(undefined4 *)(lVar14 + 0x560) = 0;
        local_c8 = &PTR_FUN_710523d9e8;
        local_c0[0] = (long ***)0x0;
        if (ppplVar8 != (long ***)0x0) {
          FUN_710392eb40((ulong)ppplVar8);
        }
      }
    }
    else {
      bVar5 = *(char *)(param_1 + 0xafa) == '\0';
      if (*(char *)(param_1 + 0xafd) != '\0') goto LAB_7101c55f64;
LAB_7101c55f48:
      bVar6 = false;
joined_r0x007101c55f80:
      if (!bVar5) goto LAB_7101c55f84;
LAB_7101c55f50:
      param_3 = (long ****)0x3;
LAB_7101c55f8c:
      FUN_7101c76f30(param_1 + 0x448,0,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101c55f98:
      if (*(char *)(param_1 + 0xce6) == '\0') goto LAB_7101c56008;
LAB_7101c55fa0:
      if ((((*(byte *)(param_1 + 0xce0) | 1) != 3) || (3 < *(int *)(param_1 + 0x2c0) - 5U)) ||
         (*(int *)(param_1 + 0x2c0) - 7U < 5)) goto LAB_7101c56008;
      bVar5 = *(char *)(param_1 + 0xce2) == '\0';
      if (*(char *)(param_1 + 0xce5) == '\0') goto LAB_7101c55fe4;
LAB_7101c56010:
      if (*(char *)(param_1 + 0xce0) == '\x04') {
        bVar6 = *(char *)(param_1 + 0xce2) == '\0';
        goto joined_r0x007101c55fe4;
      }
      bVar6 = false;
      if (bVar5) goto LAB_7101c55fe8;
LAB_7101c5602c:
      if (bVar6) {
        param_3 = (long ****)&DAT_00000004;
        goto LAB_7101c56038;
      }
      lVar14 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar14 + 0x380) == 0) goto LAB_7101c56040;
      FUN_71037780e0(&local_c8,lVar14 + 0x208,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_c8);
      ppplVar8 = local_c0[0];
      *(undefined4 *)(lVar14 + 0x380) = 0;
      local_c8 = &PTR_FUN_710523d9e8;
      local_c0[0] = (long ***)0x0;
      if (ppplVar8 == (long ***)0x0) goto LAB_7101c56040;
      FUN_710392eb40((ulong)ppplVar8);
      if (*(char *)(param_1 + 0xece) != '\0') goto LAB_7101c56048;
LAB_7101c560ac:
      bVar5 = false;
      if (*(char *)(param_1 + 0xecd) == '\0') goto LAB_7101c5608c;
LAB_7101c560b4:
      if (*(char *)(param_1 + 0xec8) == '\x04') {
        bVar6 = *(char *)(param_1 + 0xeca) == '\0';
        goto joined_r0x007101c560cc;
      }
      bVar6 = false;
      if (!bVar5) goto LAB_7101c560d0;
LAB_7101c56090:
      param_3 = (long ****)0x3;
LAB_7101c560dc:
      FUN_7101c76f30(param_1 + 0x448,2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    lVar14 = param_1 + 0x448;
    bVar5 = false;
    if (*(char *)(param_1 + 0x10b6) != '\0') {
      if ((*(byte *)(param_1 + 0x10b0) | 1) == 3) {
        bVar5 = false;
        if ((*(int *)(param_1 + 0x2c0) - 5U < 4) && (4 < *(int *)(param_1 + 0x2c0) - 7U)) {
          bVar5 = *(char *)(param_1 + 0x10b2) == '\0';
        }
      }
      else {
        bVar5 = false;
      }
    }
    bVar6 = false;
    if (*(char *)(param_1 + 0x10b5) == '\0') {
LAB_7101c56174:
      if (bVar5) goto LAB_7101c56178;
LAB_7101c5618c:
      if (bVar6) {
        param_3 = (long ****)&DAT_00000004;
        goto LAB_7101c56198;
      }
      lVar22 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar22 + 0x740) != 0) {
        FUN_71037780e0(&local_c8,lVar22 + 0x5c8,(long ****)"balloon_off",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377aee0(0x3f800000,(long)&local_c8);
        ppplVar8 = local_c0[0];
        *(undefined4 *)(lVar22 + 0x740) = 0;
        local_c8 = &PTR_FUN_710523d9e8;
        local_c0[0] = (long ***)0x0;
        if (ppplVar8 != (long ***)0x0) {
          FUN_710392eb40((ulong)ppplVar8);
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x10b0) == '\x04') {
        bVar6 = *(char *)(param_1 + 0x10b2) == '\0';
        goto LAB_7101c56174;
      }
      bVar6 = false;
      if (!bVar5) goto LAB_7101c5618c;
LAB_7101c56178:
      param_3 = (long ****)0x3;
LAB_7101c56198:
      FUN_7101c76f30(lVar14,3,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    bVar5 = false;
    if (*(char *)(param_1 + 0x129e) != '\0') {
      if ((*(byte *)(param_1 + 0x1298) | 1) == 3) {
        bVar5 = false;
        if ((*(int *)(param_1 + 0x2c0) - 5U < 4) && (4 < *(int *)(param_1 + 0x2c0) - 7U)) {
          bVar5 = *(char *)(param_1 + 0x129a) == '\0';
        }
      }
      else {
        bVar5 = false;
      }
    }
    bVar6 = false;
    if (*(char *)(param_1 + 0x129d) == '\0') {
LAB_7101c56224:
      if (bVar5) goto LAB_7101c56228;
LAB_7101c5623c:
      if (bVar6) {
        param_3 = (long ****)&DAT_00000004;
        goto LAB_7101c56248;
      }
      lVar22 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar22 + 0x920) != 0) {
        FUN_71037780e0(&local_c8,lVar22 + 0x7a8,(long ****)"balloon_off",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377aee0(0x3f800000,(long)&local_c8);
        ppplVar8 = local_c0[0];
        *(undefined4 *)(lVar22 + 0x920) = 0;
        local_c8 = &PTR_FUN_710523d9e8;
        local_c0[0] = (long ***)0x0;
        if (ppplVar8 != (long ***)0x0) {
          FUN_710392eb40((ulong)ppplVar8);
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x1298) == '\x04') {
        bVar6 = *(char *)(param_1 + 0x129a) == '\0';
        goto LAB_7101c56224;
      }
      bVar6 = false;
      if (!bVar5) goto LAB_7101c5623c;
LAB_7101c56228:
      param_3 = (long ****)0x3;
LAB_7101c56248:
      FUN_7101c76f30(lVar14,4,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    bVar5 = false;
    if (*(char *)(param_1 + 0x1486) != '\0') {
      if ((*(byte *)(param_1 + 0x1480) | 1) == 3) {
        bVar5 = false;
        if ((*(int *)(param_1 + 0x2c0) - 5U < 4) && (4 < *(int *)(param_1 + 0x2c0) - 7U)) {
          bVar5 = *(char *)(param_1 + 0x1482) == '\0';
        }
      }
      else {
        bVar5 = false;
      }
    }
    bVar6 = false;
    if (*(char *)(param_1 + 0x1485) == '\0') {
LAB_7101c562d4:
      if (bVar5) goto LAB_7101c562d8;
LAB_7101c562ec:
      if (bVar6) {
        param_3 = (long ****)&DAT_00000004;
        goto LAB_7101c562f8;
      }
      lVar22 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar22 + 0xb00) != 0) {
        FUN_71037780e0(&local_c8,lVar22 + 0x988,(long ****)"balloon_off",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377aee0(0x3f800000,(long)&local_c8);
        ppplVar8 = local_c0[0];
        *(undefined4 *)(lVar22 + 0xb00) = 0;
        local_c8 = &PTR_FUN_710523d9e8;
        local_c0[0] = (long ***)0x0;
        if (ppplVar8 != (long ***)0x0) {
          FUN_710392eb40((ulong)ppplVar8);
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x1480) == '\x04') {
        bVar6 = *(char *)(param_1 + 0x1482) == '\0';
        goto LAB_7101c562d4;
      }
      bVar6 = false;
      if (!bVar5) goto LAB_7101c562ec;
LAB_7101c562d8:
      param_3 = (long ****)0x3;
LAB_7101c562f8:
      FUN_7101c76f30(lVar14,5,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    bVar5 = false;
    if (*(char *)(param_1 + 0x166e) != '\0') {
      if ((*(byte *)(param_1 + 0x1668) | 1) == 3) {
        bVar5 = false;
        if ((*(int *)(param_1 + 0x2c0) - 5U < 4) && (4 < *(int *)(param_1 + 0x2c0) - 7U)) {
          bVar5 = *(char *)(param_1 + 0x166a) == '\0';
        }
      }
      else {
        bVar5 = false;
      }
    }
    bVar6 = false;
    if (*(char *)(param_1 + 0x166d) == '\0') {
LAB_7101c56384:
      if (bVar5) goto LAB_7101c56388;
LAB_7101c5639c:
      if (bVar6) {
        param_3 = (long ****)&DAT_00000004;
        goto LAB_7101c563a8;
      }
      lVar22 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar22 + 0xce0) != 0) {
        FUN_71037780e0(&local_c8,lVar22 + 0xb68,(long ****)"balloon_off",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377aee0(0x3f800000,(long)&local_c8);
        ppplVar8 = local_c0[0];
        *(undefined4 *)(lVar22 + 0xce0) = 0;
        local_c8 = &PTR_FUN_710523d9e8;
        local_c0[0] = (long ***)0x0;
        if (ppplVar8 != (long ***)0x0) {
          FUN_710392eb40((ulong)ppplVar8);
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x1668) == '\x04') {
        bVar6 = *(char *)(param_1 + 0x166a) == '\0';
        goto LAB_7101c56384;
      }
      bVar6 = false;
      if (!bVar5) goto LAB_7101c5639c;
LAB_7101c56388:
      param_3 = (long ****)0x3;
LAB_7101c563a8:
      FUN_7101c76f30(lVar14,6,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    bVar5 = false;
    if (*(char *)(param_1 + 0x1856) != '\0') {
      if ((*(byte *)(param_1 + 0x1850) | 1) == 3) {
        bVar5 = false;
        if ((*(int *)(param_1 + 0x2c0) - 5U < 4) && (4 < *(int *)(param_1 + 0x2c0) - 7U)) {
          bVar5 = *(char *)(param_1 + 0x1852) == '\0';
        }
      }
      else {
        bVar5 = false;
      }
    }
    bVar6 = false;
    if (*(char *)(param_1 + 0x1855) == '\0') {
LAB_7101c56434:
      if (bVar5) goto LAB_7101c56438;
LAB_7101c5644c:
      if (bVar6) {
        uVar10 = 4;
        goto LAB_7101c56458;
      }
      lVar14 = *(long *)(param_1 + 0x450);
      if (*(int *)(lVar14 + 0xec0) != 0) {
        FUN_71037780e0(&local_c8,lVar14 + 0xd48,(long ****)"balloon_off",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377aee0(0x3f800000,(long)&local_c8);
        ppplVar8 = local_c0[0];
        *(undefined4 *)(lVar14 + 0xec0) = 0;
        local_c8 = &PTR_FUN_710523d9e8;
        local_c0[0] = (long ***)0x0;
        if (ppplVar8 != (long ***)0x0) {
          FUN_710392eb40((ulong)ppplVar8);
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x1850) == '\x04') {
        bVar6 = *(char *)(param_1 + 0x1852) == '\0';
        goto LAB_7101c56434;
      }
      bVar6 = false;
      if (!bVar5) goto LAB_7101c5644c;
LAB_7101c56438:
      uVar10 = 3;
LAB_7101c56458:
      FUN_7101c76f30(lVar14,7,uVar10,param_4,param_5,param_6,param_7,param_8);
    }
    FUN_7101c591b0(param_1,0,0,0);
    uVar24 = *(ulong *)(param_1 + 0x428);
    if ((uVar24 & 1) == 0) {
LAB_7101c5647c:
      uVar13 = 0;
    }
    else {
      plVar23 = *(long **)(param_1 + 0x2f8);
      plVar7 = (long *)**(long **)(*plVar23 + 0x18);
      if (plVar7 == (long *)0x0) {
LAB_7101c5674c:
        uVar24 = *(ulong *)(param_1 + 0x428);
      }
      else {
        uVar24 = (**(code **)(*plVar7 + 0x2f8))();
        if ((uVar24 & 1) != 0) {
          uVar24 = *(ulong *)(param_1 + 0x428);
          uVar13 = 0;
          goto LAB_7101c56760;
        }
        plVar7 = (long *)**(long **)(*plVar23 + 0x18);
        if (plVar7 == (long *)0x0) goto LAB_7101c5674c;
        uVar26 = (**(code **)(*plVar7 + 0x3c0))();
        uVar24 = *(ulong *)(param_1 + 0x428);
        if ((uVar26 & 1) == 0) goto LAB_7101c5647c;
      }
      if (((uint)uVar24 >> 1 & 1) == 0) {
        uVar13 = (uint)(uVar24 >> 2) & 1;
      }
      else {
        uVar13 = 1;
      }
    }
LAB_7101c56760:
    *(ulong *)(param_1 + 0x428) = uVar24 & 0xfffffffffffffffd;
    if ((uVar24 & 1) == 0) {
LAB_7101c567cc:
      if (uVar13 != 0) {
LAB_7101c567d0:
        *(undefined1 *)(param_1 + 0x431) = 0;
      }
    }
    else {
      plVar23 = *(long **)(param_1 + 0x2f8);
      plVar7 = (long *)**(long **)(*plVar23 + 0x18);
      if ((plVar7 != (long *)0x0) &&
         ((uVar24 = (**(code **)(*plVar7 + 0x2f8))(), (uVar24 & 1) != 0 ||
          ((plVar7 = (long *)**(long **)(*plVar23 + 0x18), plVar7 != (long *)0x0 &&
           (uVar24 = (**(code **)(*plVar7 + 0x3c0))(), (uVar24 & 1) == 0)))))) goto LAB_7101c567cc;
      if (((uint)*(ulong *)(param_1 + 0x428) >> 1 & 1) != 0) {
        if (uVar13 != 0) goto LAB_7101c567d4;
        goto LAB_7101c567d0;
      }
      if ((uVar13 ^ (uint)(*(ulong *)(param_1 + 0x428) >> 2) & 1) == 1) goto LAB_7101c567d0;
    }
LAB_7101c567d4:
    lVar14 = param_1 + 0x800;
    ppppbVar12 = (byte ****)0x1;
    pppplVar11 = (long ****)0x0;
    FUN_7101c59330(lVar14,0,0,1,param_5,param_6,param_7,param_8);
    pbVar15 = *(byte **)(param_1 + 0x4f8);
    if (pbVar15 == *(byte **)(param_1 + 0x500)) {
      uVar13 = 0xfffffffe;
    }
    else {
      pbVar20 = *(byte **)(param_1 + 0x500) + (-2 - (long)pbVar15);
      uVar26 = (ulong)pbVar20 >> 1;
      uVar13 = (int)uVar26 + 1;
      uVar24 = (ulong)uVar13 & 3;
      if (pbVar20 < (byte *)0x6) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        lVar22 = (uVar24 - 1) - uVar26;
        do {
          bVar3 = *pbVar15;
          pbVar20 = pbVar15 + 2;
          pbVar1 = pbVar15 + 4;
          pbVar2 = pbVar15 + 6;
          pbVar15 = pbVar15 + 8;
          uVar19 = (uint)*pbVar2 + (uint)*pbVar1 + (uint)*pbVar20 + bVar3 + uVar19;
          lVar22 = lVar22 + 4;
        } while (lVar22 != 0);
      }
      if ((uVar13 & 3) != 0) {
        lVar22 = -uVar24;
        do {
          uVar19 = *pbVar15 + uVar19;
          lVar22 = lVar22 + 1;
          pbVar15 = pbVar15 + 2;
        } while (lVar22 != 0);
      }
      uVar13 = (uVar19 & 0xff) - 2;
    }
    plVar7 = (long *)(param_1 + 0x820);
    if ((((*(long *)(param_1 + 0x820) != 0) &&
         (plVar23 = *(long **)(*(long *)(*(long *)(param_1 + 0x820) + 8) + 8),
         plVar23 != (long *)0x0)) && (uVar24 = (**(code **)(*plVar23 + 0x138))(), (uVar24 & 1) == 0)
        ) && (plVar23 = (long *)*plVar7, plVar23 != (long *)0x0)) {
      plVar16 = (long *)plVar23[1];
      plVar25 = (long *)plVar16[1];
      if (plVar25 == (long *)0x0) {
        *plVar7 = 0;
      }
      else {
        if ((char)plVar16[2] != '\0') {
          plVar27 = *(long **)(*plVar16 + 0x80);
          plVar16 = (long *)(*plVar16 + 0x88);
          if (plVar27 != plVar16) {
            do {
              while( true ) {
                uVar24 = (**(code **)(*(long *)plVar27[0xd] + 0x148))();
                if (((uVar24 & 1) != 0) &&
                   (uVar24 = (**(code **)(*plVar25 + 0x120))(plVar25,plVar27[0xd]),
                   (uVar24 & 1) != 0)) {
                  (**(code **)(*(long *)plVar27[0xd] + 0x178))();
                  (**(code **)(*(long *)plVar27[0xd] + 0x140))((long *)plVar27[0xd],0);
                }
                plVar17 = (long *)plVar27[1];
                if ((long *)plVar27[1] == (long *)0x0) break;
                do {
                  plVar27 = plVar17;
                  plVar17 = (long *)*plVar27;
                } while ((long *)*plVar27 != (long *)0x0);
LAB_7101c56970:
                if (plVar27 == plVar16) goto LAB_7101c56988;
              }
              plVar17 = plVar27 + 2;
              plVar21 = (long *)*plVar17;
              if ((long *)*plVar21 != plVar27) {
                do {
                  lVar22 = *plVar17;
                  plVar17 = (long *)(lVar22 + 0x10);
                  plVar27 = (long *)*plVar17;
                } while (*plVar27 != lVar22);
                goto LAB_7101c56970;
              }
              plVar27 = plVar21;
            } while (plVar21 != plVar16);
LAB_7101c56988:
            plVar25 = *(long **)(plVar23[1] + 8);
          }
        }
        (**(code **)(*plVar25 + 0x178))(plVar25);
        plVar23 = (long *)*plVar7;
        *plVar7 = 0;
        if (plVar23 == (long *)0x0) goto LAB_7101c569cc;
      }
      (**(code **)(*plVar23 + 8))(plVar23);
    }
LAB_7101c569cc:
    if (1 < (int)uVar13) {
      uVar13 = 2;
    }
    FUN_71003a4ca0((uint *)&local_c8,"anim_fight_finish_%02d",
                   (ulong)(uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU)),pppplVar11,ppppbVar12,
                   param_5,param_6,param_7,param_8);
    FUN_71037780e0(&local_80,param_1 + 0x810,local_c0,pppplVar11,ppppbVar12,param_5,param_6,param_7,
                   param_8);
    pppplVar11 = (long ****)
                 FUN_710392e290(0x10,0x10,pppplVar11,ppppbVar12,param_5,param_6,param_7,param_8);
    if (pppplVar11 == (long ****)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_70 = (long ***)&DAT_00000010;
        pppplVar11 = &local_70;
        uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar24 & 1) != 0) &&
           (pppplVar11 = (long ****)
                         FUN_710392e290(0x10,0x10,pppplVar11,ppppbVar12,param_5,param_6,param_7,
                                        param_8), pppplVar11 != (long ****)0x0))
        goto LAB_7101c56a5c;
      }
      pppplVar11 = (long ****)0x0;
    }
LAB_7101c56a5c:
    ppplVar8 = local_78;
    *pppplVar11 = (long ***)&PTR_FUN_710523d9e8;
    pppplVar11[1] = (long ***)0x0;
    if (&local_80 != pppplVar11) {
      local_78 = (long ***)0x0;
      pppplVar11[1] = ppplVar8;
    }
    plVar23 = *(long **)(param_1 + 0x820);
    *(long *****)(param_1 + 0x820) = pppplVar11;
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 8))(plVar23);
    }
    ppplVar8 = local_78;
    local_80 = (long ***)&PTR_FUN_710523d9e8;
    local_78 = (long ***)0x0;
    if (ppplVar8 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar8);
    }
    FUN_710377aee0(0x3f800000,*(long *)(param_1 + 0x820));
    FUN_7101c597c0(lVar14,0,0,0,param_5,param_6,param_7,param_8);
    FUN_7101c597c0(lVar14,1,0,0,param_5,param_6,param_7,param_8);
    FUN_7101c597c0(lVar14,2,0,0,param_5,param_6,param_7,param_8);
    param_3 = (long ****)0x0;
    param_4 = (byte ****)0x0;
    FUN_7101c597c0(lVar14,3,0,0,param_5,param_6,param_7,param_8);
    *(undefined1 *)(param_1 + 0x80b) = 0;
    uVar24 = (ulong)*(byte *)(param_1 + 0x1920);
    if (7 < uVar24) goto LAB_7101c56ebc;
    lVar14 = *(long *)(param_1 + 0x450) + uVar24 * 0x1e0;
    if (*(char *)(lVar14 + 0x19b) != '\0') {
      FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 0x450) + uVar24 * 0x1e0 + 0x30),
                     0x71042c4e37);
    }
    *(undefined1 *)(lVar14 + 0x19b) = 0;
    lVar14 = *plVar7;
  }
  else {
    lVar14 = *(long *)(param_1 + 0x820);
  }
  if (((lVar14 == 0) || (plVar7 = *(long **)(*(long *)(lVar14 + 8) + 8), plVar7 == (long *)0x0)) ||
     (uVar24 = (**(code **)(*plVar7 + 0x138))(), (uVar24 & 1) != 0)) {
    if (*(char *)(param_1 + 0x1b24) != '\0') {
      lVar14 = *(long *)(param_1 + 0x500);
      lVar22 = *(long *)(param_1 + 0x4f8);
      if (lVar14 != lVar22) {
        uVar24 = 0;
        do {
          uVar4 = *(ushort *)(lVar22 + uVar24 * 2);
          if ((uVar4 & 0xff) != 0) {
            if (uVar24 < (ulong)(*(long *)(param_1 + 0x4d0) - *(long *)(param_1 + 0x4c8) >> 4)) {
              FUN_7103778ab0(&local_c8,(undefined8 *)(*(long *)(param_1 + 0x4c8) + uVar24 * 0x10),
                             param_3,param_4,param_5,param_6,param_7,param_8);
              pplVar18 = *local_c0[0];
            }
            else {
              local_c8 = &PTR_FUN_710523d9a8;
              ppplVar8 = (long ***)
                         FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
              if (ppplVar8 == (long ***)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
                  local_80 = (long ***)&SUB_00000020;
                  param_3 = &local_80;
                  uVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
                  if (((uVar26 & 1) != 0) &&
                     (ppplVar8 = (long ***)
                                 FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,
                                                param_8), ppplVar8 != (long ***)0x0))
                  goto LAB_7101c56c6c;
                }
                ppplVar8 = (long ***)0x0;
              }
LAB_7101c56c6c:
              ppplVar8[2] = (long **)0x0;
              ppplVar8[3] = (long **)0x0;
              *ppplVar8 = (long **)0x0;
              ppplVar8[1] = (long **)0x0;
              pplVar18 = *ppplVar8;
              local_c0[0] = ppplVar8;
            }
            plVar7 = _ConstantZero;
            if (pplVar18 != (long **)0x0) {
              plVar7 = pplVar18[6];
            }
            if (0x7ff < uVar4) goto LAB_7101c56ebc;
            uVar26 = (ulong)(uVar4 >> 8);
            lVar14 = *(long *)(param_1 + 0x450) + uVar26 * 0x1e0;
            fVar29 = (float)((ulong)plVar7 >> 0x20);
            fVar30 = *(float *)(lVar14 + 0x140);
            if (*(float *)(lVar14 + 0x140) <= SUB84(plVar7,0)) {
              fVar30 = SUB84(plVar7,0);
            }
            fVar28 = *(float *)(lVar14 + 0x144);
            if (fVar30 <= *(float *)(lVar14 + 0x144)) {
              fVar28 = fVar30;
            }
            fVar30 = *(float *)(lVar14 + 0x148);
            if (*(float *)(lVar14 + 0x148) <= fVar29) {
              fVar30 = fVar29;
            }
            fVar29 = *(float *)(lVar14 + 0x14c);
            if (fVar30 <= *(float *)(lVar14 + 0x14c)) {
              fVar29 = fVar30;
            }
            *(undefined8 *)(lVar14 + 0x168) = 0;
            *(ulong *)(lVar14 + 0x160) = CONCAT44(fVar29,fVar28);
            if (7 < uVar4 >> 8) goto LAB_7101c56ebc;
            lVar14 = *(long *)(param_1 + 0x450);
            if ((undefined ***)(lVar14 + uVar26 * 0x1e0 + 0x88) != &local_c8) {
              lVar22 = lVar14 + uVar26 * 0x1e0;
              **(long **)(lVar22 + 0x90) = (long)*local_c0[0];
              *(long ***)(*(long *)(lVar22 + 0x90) + 8) = local_c0[0][1];
              *(long ***)(*(long *)(lVar22 + 0x90) + 0x10) = local_c0[0][2];
              *(long ***)(*(long *)(lVar22 + 0x90) + 0x18) = local_c0[0][3];
            }
            plVar7 = _ConstantZero;
            lVar14 = lVar14 + uVar26 * 0x1e0;
            *(undefined8 *)(lVar14 + 0x178) = uRam0000007107459008;
            *(long **)(lVar14 + 0x170) = plVar7;
            if (uVar24 < (ulong)(*(long *)(param_1 + 0x4e8) - *(long *)(param_1 + 0x4e0) >> 4)) {
              FUN_7103778ab0(&local_80,(undefined8 *)(*(long *)(param_1 + 0x4e0) + uVar24 * 0x10),
                             param_3,param_4,param_5,param_6,param_7,param_8);
              pplVar18 = *local_78;
              ppplVar8 = local_78;
            }
            else {
              local_80 = (long ***)&PTR_FUN_710523d9a8;
              ppplVar8 = (long ***)
                         FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
              if (ppplVar8 == (long ***)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_64 = 0;
                  local_70 = (long ***)&SUB_00000020;
                  param_3 = &local_70;
                  uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
                  if (((uVar9 & 1) != 0) &&
                     (ppplVar8 = (long ***)
                                 FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,
                                                param_8), ppplVar8 != (long ***)0x0))
                  goto LAB_7101c56dd0;
                }
                ppplVar8 = (long ***)0x0;
              }
LAB_7101c56dd0:
              ppplVar8[2] = (long **)0x0;
              ppplVar8[3] = (long **)0x0;
              *ppplVar8 = (long **)0x0;
              ppplVar8[1] = (long **)0x0;
              pplVar18 = *ppplVar8;
            }
            if (pplVar18 != (long **)0x0) {
              lVar14 = *(long *)(param_1 + 0x450);
              if ((long ****)(lVar14 + uVar26 * 0x1e0 + 0x58) != &local_80) {
                lVar22 = lVar14 + uVar26 * 0x1e0;
                **(undefined8 **)(lVar22 + 0x60) = *ppplVar8;
                *(long ***)(*(long *)(lVar22 + 0x60) + 8) = ppplVar8[1];
                *(long ***)(*(long *)(lVar22 + 0x60) + 0x10) = ppplVar8[2];
                *(long ***)(*(long *)(lVar22 + 0x60) + 0x18) = ppplVar8[3];
              }
              *(undefined1 *)(lVar14 + uVar26 * 0x1e0 + 0x197) = 1;
            }
            local_80 = (long ***)&PTR_FUN_710523d9a8;
            local_78 = (long ***)0x0;
            if (ppplVar8 != (long ***)0x0) {
              FUN_710392eb40((ulong)ppplVar8);
            }
            ppplVar8 = local_c0[0];
            local_c8 = &PTR_FUN_710523d9a8;
            local_c0[0] = (long ***)0x0;
            if (ppplVar8 != (long ***)0x0) {
              FUN_710392eb40((ulong)ppplVar8);
            }
            lVar14 = *(long *)(param_1 + 0x500);
            lVar22 = *(long *)(param_1 + 0x4f8);
          }
          uVar24 = (ulong)((int)uVar24 + 1) & 0xff;
        } while (uVar24 < (ulong)(lVar14 - lVar22 >> 1));
      }
      *(char *)(param_1 + 0x1b24) = '\0';
    }
    if (0x12 < *(uint *)(param_1 + 700)) {
LAB_7101c56ebc:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 700) * 4 + 0x270) = 9;
  }
  return;
}

