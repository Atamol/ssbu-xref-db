// addr:      7101c54190
// offset:    0x1c54190
// name:      FUN_7101c54190
// mangled:   
// signature: undefined __cdecl FUN_7101c54190(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101c54190(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  bool bVar5;
  bool bVar6;
  long *plVar7;
  ulong uVar8;
  long ***ppplVar9;
  ulong uVar10;
  undefined8 uVar11;
  long ****pppplVar12;
  byte ****ppppbVar13;
  uint uVar14;
  long lVar15;
  long **pplVar16;
  byte *pbVar17;
  long *plVar18;
  uint uVar19;
  long lVar20;
  byte *pbVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  ulong uVar25;
  long *plVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  byte local_cc;
  undefined **local_c8;
  long ***local_c0 [8];
  long ***local_80;
  long ***local_78;
  long ***local_70;
  undefined4 local_64;
  
  if (*(int *)(param_1 + 0x2c4) != 0) {
    if (((*(long *)(param_1 + 0x820) != 0) &&
        (plVar7 = *(long **)(*(long *)(*(long *)(param_1 + 0x820) + 8) + 8), plVar7 != (long *)0x0))
       && (uVar8 = (**(code **)(*plVar7 + 0x138))(), (uVar8 & 1) == 0)) {
      return;
    }
    if (*(char *)(param_1 + 0x1b24) == '\0') {
      local_cc = 0;
      lVar15 = *(long *)(param_1 + 0x500);
      lVar20 = *(long *)(param_1 + 0x4f8);
      if (lVar15 != lVar20) {
        uVar8 = 0;
        do {
          uVar4 = *(ushort *)(lVar20 + uVar8 * 2);
          if ((uVar4 & 0xff) != 0) {
            if ((ulong)local_cc <
                (ulong)(*(long *)(param_1 + 0x898) - *(long *)(param_1 + 0x890) >> 4)) {
              FUN_7103778ab0(&local_c8,
                             (undefined8 *)(*(long *)(param_1 + 0x890) + (ulong)local_cc * 0x10),
                             param_3,param_4,param_5,param_6,param_7,param_8);
              pplVar16 = *local_c0[0];
            }
            else {
              local_c8 = &PTR_FUN_710523d9a8;
              ppplVar9 = (long ***)
                         FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
              if (ppplVar9 == (long ***)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
                  local_80 = (long ***)&SUB_00000020;
                  param_3 = &local_80;
                  uVar25 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
                  if (((uVar25 & 1) != 0) &&
                     (ppplVar9 = (long ***)
                                 FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,
                                                param_8), ppplVar9 != (long ***)0x0))
                  goto LAB_7101c542e4;
                }
                ppplVar9 = (long ***)0x0;
              }
LAB_7101c542e4:
              ppplVar9[2] = (long **)0x0;
              ppplVar9[3] = (long **)0x0;
              *ppplVar9 = (long **)0x0;
              ppplVar9[1] = (long **)0x0;
              pplVar16 = *ppplVar9;
              local_c0[0] = ppplVar9;
            }
            plVar7 = _ConstantZero;
            if (pplVar16 != (long **)0x0) {
              plVar7 = pplVar16[6];
            }
            if (0x7ff < uVar4) goto LAB_7101c55158;
            uVar25 = (ulong)(uVar4 >> 8);
            lVar15 = *(long *)(param_1 + 0x450) + uVar25 * 0x1e0;
            fVar27 = SUB84(plVar7,0) + -58.0;
            fVar29 = (float)((ulong)plVar7 >> 0x20) + 92.0;
            fVar28 = *(float *)(lVar15 + 0x140);
            if (*(float *)(lVar15 + 0x140) <= fVar27) {
              fVar28 = fVar27;
            }
            fVar27 = *(float *)(lVar15 + 0x144);
            if (fVar28 <= *(float *)(lVar15 + 0x144)) {
              fVar27 = fVar28;
            }
            fVar28 = *(float *)(lVar15 + 0x148);
            if (*(float *)(lVar15 + 0x148) <= fVar29) {
              fVar28 = fVar29;
            }
            fVar29 = *(float *)(lVar15 + 0x14c);
            if (fVar28 <= *(float *)(lVar15 + 0x14c)) {
              fVar29 = fVar28;
            }
            *(undefined8 *)(lVar15 + 0x168) = 0;
            *(ulong *)(lVar15 + 0x160) = CONCAT44(fVar29,fVar27);
            if (7 < uVar4 >> 8) goto LAB_7101c55158;
            lVar15 = *(long *)(param_1 + 0x450);
            if ((undefined ***)(lVar15 + uVar25 * 0x1e0 + 0x88) != &local_c8) {
              lVar20 = lVar15 + uVar25 * 0x1e0;
              **(long **)(lVar20 + 0x90) = (long)*local_c0[0];
              *(long ***)(*(long *)(lVar20 + 0x90) + 8) = local_c0[0][1];
              *(long ***)(*(long *)(lVar20 + 0x90) + 0x10) = local_c0[0][2];
              *(long ***)(*(long *)(lVar20 + 0x90) + 0x18) = local_c0[0][3];
            }
            lVar15 = lVar15 + uVar25 * 0x1e0;
            *(undefined8 *)(lVar15 + 0x178) = 0;
            *(undefined8 *)(lVar15 + 0x170) = 0x42b80000c2680000;
            if (uVar8 < (ulong)(*(long *)(param_1 + 0x8b0) - *(long *)(param_1 + 0x8a8) >> 4)) {
              FUN_7103778ab0(&local_80,(undefined8 *)(*(long *)(param_1 + 0x8a8) + uVar8 * 0x10),
                             param_3,param_4,param_5,param_6,param_7,param_8);
              pplVar16 = *local_78;
              ppplVar9 = local_78;
            }
            else {
              local_80 = (long ***)&PTR_FUN_710523d9a8;
              ppplVar9 = (long ***)
                         FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
              if (ppplVar9 == (long ***)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_64 = 0;
                  local_70 = (long ***)&SUB_00000020;
                  param_3 = &local_70;
                  uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
                  if (((uVar10 & 1) != 0) &&
                     (ppplVar9 = (long ***)
                                 FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,
                                                param_8), ppplVar9 != (long ***)0x0))
                  goto LAB_7101c54458;
                }
                ppplVar9 = (long ***)0x0;
              }
LAB_7101c54458:
              ppplVar9[2] = (long **)0x0;
              ppplVar9[3] = (long **)0x0;
              *ppplVar9 = (long **)0x0;
              ppplVar9[1] = (long **)0x0;
              pplVar16 = *ppplVar9;
            }
            if (pplVar16 != (long **)0x0) {
              lVar15 = *(long *)(param_1 + 0x450);
              if ((long ****)(lVar15 + uVar25 * 0x1e0 + 0x58) != &local_80) {
                lVar20 = lVar15 + uVar25 * 0x1e0;
                **(undefined8 **)(lVar20 + 0x60) = *ppplVar9;
                *(long ***)(*(long *)(lVar20 + 0x60) + 8) = ppplVar9[1];
                *(long ***)(*(long *)(lVar20 + 0x60) + 0x10) = ppplVar9[2];
                *(long ***)(*(long *)(lVar20 + 0x60) + 0x18) = ppplVar9[3];
              }
              *(undefined1 *)(lVar15 + uVar25 * 0x1e0 + 0x197) = 1;
            }
            local_cc = local_cc + 1;
            local_80 = (long ***)&PTR_FUN_710523d9a8;
            local_78 = (long ***)0x0;
            if (ppplVar9 != (long ***)0x0) {
              FUN_710392eb40((ulong)ppplVar9);
            }
            ppplVar9 = local_c0[0];
            local_c8 = &PTR_FUN_710523d9a8;
            local_c0[0] = (long ***)0x0;
            if (ppplVar9 != (long ***)0x0) {
              FUN_710392eb40((ulong)ppplVar9);
            }
            lVar15 = *(long *)(param_1 + 0x500);
            lVar20 = *(long *)(param_1 + 0x4f8);
          }
          uVar8 = (ulong)((int)uVar8 + 1) & 0xff;
        } while (uVar8 < (ulong)(lVar15 - lVar20 >> 1));
      }
      *(char *)(param_1 + 0x1b24) = '\x01';
    }
    if (*(uint *)(param_1 + 700) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 700) * 4 + 0x270) = 6;
      return;
    }
    goto LAB_7101c55158;
  }
  if ((((*(char *)(param_1 + 0xafe) == '\0') || ((*(byte *)(param_1 + 0xaf8) | 1) != 3)) ||
      (3 < *(int *)(param_1 + 0x2c0) - 5U)) || (*(int *)(param_1 + 0x2c0) - 7U < 5)) {
    bVar5 = false;
    if (*(char *)(param_1 + 0xafd) != '\0') goto LAB_7101c5459c;
LAB_7101c54580:
    bVar6 = false;
joined_r0x007101c545b8:
    if (bVar5) goto LAB_7101c54588;
LAB_7101c545bc:
    if (bVar6) {
      param_3 = (long ****)&DAT_00000004;
      goto LAB_7101c545c4;
    }
    lVar15 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar15 + 0x1a0) == 0) goto LAB_7101c545d0;
    FUN_71037780e0(&local_c8,lVar15 + 0x28,(long ****)"balloon_off",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_710377aee0(0x3f800000,(long)&local_c8);
    ppplVar9 = local_c0[0];
    *(undefined4 *)(lVar15 + 0x1a0) = 0;
    local_c8 = &PTR_FUN_710523d9e8;
    local_c0[0] = (long ***)0x0;
    if (ppplVar9 == (long ***)0x0) goto LAB_7101c545d0;
    FUN_710392eb40((ulong)ppplVar9);
    if (*(char *)(param_1 + 0xce6) != '\0') goto LAB_7101c545d8;
LAB_7101c54640:
    bVar5 = false;
    if (*(char *)(param_1 + 0xce5) != '\0') goto LAB_7101c54648;
LAB_7101c5461c:
    bVar6 = false;
joined_r0x007101c5461c:
    if (!bVar5) goto LAB_7101c54664;
LAB_7101c54620:
    param_3 = (long ****)0x3;
LAB_7101c54670:
    FUN_7101c76f30(param_1 + 0x448,1,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101c54678:
    if (*(char *)(param_1 + 0xece) == '\0') goto LAB_7101c546e4;
LAB_7101c54680:
    if ((((*(byte *)(param_1 + 0xec8) | 1) != 3) || (3 < *(int *)(param_1 + 0x2c0) - 5U)) ||
       (*(int *)(param_1 + 0x2c0) - 7U < 5)) goto LAB_7101c546e4;
    bVar5 = *(char *)(param_1 + 0xeca) == '\0';
    if (*(char *)(param_1 + 0xecd) == '\0') goto LAB_7101c546c4;
LAB_7101c546ec:
    if (*(char *)(param_1 + 0xec8) == '\x04') {
      bVar6 = *(char *)(param_1 + 0xeca) == '\0';
      goto joined_r0x007101c54704;
    }
    bVar6 = false;
    if (!bVar5) goto LAB_7101c54708;
LAB_7101c546c8:
    param_3 = (long ****)0x3;
LAB_7101c54714:
    FUN_7101c76f30(param_1 + 0x448,2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    bVar5 = *(char *)(param_1 + 0xafa) == '\0';
    if (*(char *)(param_1 + 0xafd) == '\0') goto LAB_7101c54580;
LAB_7101c5459c:
    if (*(char *)(param_1 + 0xaf8) == '\x04') {
      bVar6 = *(char *)(param_1 + 0xafa) == '\0';
      goto joined_r0x007101c545b8;
    }
    bVar6 = false;
    if (!bVar5) goto LAB_7101c545bc;
LAB_7101c54588:
    param_3 = (long ****)0x3;
LAB_7101c545c4:
    FUN_7101c76f30(param_1 + 0x448,0,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101c545d0:
    if (*(char *)(param_1 + 0xce6) == '\0') goto LAB_7101c54640;
LAB_7101c545d8:
    if ((((*(byte *)(param_1 + 0xce0) | 1) != 3) || (3 < *(int *)(param_1 + 0x2c0) - 5U)) ||
       (*(int *)(param_1 + 0x2c0) - 7U < 5)) goto LAB_7101c54640;
    bVar5 = *(char *)(param_1 + 0xce2) == '\0';
    if (*(char *)(param_1 + 0xce5) == '\0') goto LAB_7101c5461c;
LAB_7101c54648:
    if (*(char *)(param_1 + 0xce0) == '\x04') {
      bVar6 = *(char *)(param_1 + 0xce2) == '\0';
      goto joined_r0x007101c5461c;
    }
    bVar6 = false;
    if (bVar5) goto LAB_7101c54620;
LAB_7101c54664:
    if (bVar6) {
      param_3 = (long ****)&DAT_00000004;
      goto LAB_7101c54670;
    }
    lVar15 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar15 + 0x380) == 0) goto LAB_7101c54678;
    FUN_71037780e0(&local_c8,lVar15 + 0x208,(long ****)"balloon_off",param_3,param_4,param_5,param_6
                   ,param_7,param_8);
    FUN_710377aee0(0x3f800000,(long)&local_c8);
    ppplVar9 = local_c0[0];
    *(undefined4 *)(lVar15 + 0x380) = 0;
    local_c8 = &PTR_FUN_710523d9e8;
    local_c0[0] = (long ***)0x0;
    if (ppplVar9 == (long ***)0x0) goto LAB_7101c54678;
    FUN_710392eb40((ulong)ppplVar9);
    if (*(char *)(param_1 + 0xece) != '\0') goto LAB_7101c54680;
LAB_7101c546e4:
    bVar5 = false;
    if (*(char *)(param_1 + 0xecd) != '\0') goto LAB_7101c546ec;
LAB_7101c546c4:
    bVar6 = false;
joined_r0x007101c54704:
    if (bVar5) goto LAB_7101c546c8;
LAB_7101c54708:
    if (bVar6) {
      param_3 = (long ****)&DAT_00000004;
      goto LAB_7101c54714;
    }
    lVar15 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar15 + 0x560) != 0) {
      FUN_71037780e0(&local_c8,lVar15 + 1000,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_c8);
      ppplVar9 = local_c0[0];
      *(undefined4 *)(lVar15 + 0x560) = 0;
      local_c8 = &PTR_FUN_710523d9e8;
      local_c0[0] = (long ***)0x0;
      if (ppplVar9 != (long ***)0x0) {
        FUN_710392eb40((ulong)ppplVar9);
      }
    }
  }
  lVar15 = param_1 + 0x448;
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
LAB_7101c547ac:
    if (bVar5) goto LAB_7101c547b0;
LAB_7101c547c4:
    if (bVar6) {
      param_3 = (long ****)&DAT_00000004;
      goto LAB_7101c547d0;
    }
    lVar20 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar20 + 0x740) != 0) {
      FUN_71037780e0(&local_c8,lVar20 + 0x5c8,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_c8);
      ppplVar9 = local_c0[0];
      *(undefined4 *)(lVar20 + 0x740) = 0;
      local_c8 = &PTR_FUN_710523d9e8;
      local_c0[0] = (long ***)0x0;
      if (ppplVar9 != (long ***)0x0) {
        FUN_710392eb40((ulong)ppplVar9);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x10b0) == '\x04') {
      bVar6 = *(char *)(param_1 + 0x10b2) == '\0';
      goto LAB_7101c547ac;
    }
    bVar6 = false;
    if (!bVar5) goto LAB_7101c547c4;
LAB_7101c547b0:
    param_3 = (long ****)0x3;
LAB_7101c547d0:
    FUN_7101c76f30(lVar15,3,param_3,param_4,param_5,param_6,param_7,param_8);
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
LAB_7101c5485c:
    if (bVar5) goto LAB_7101c54860;
LAB_7101c54874:
    if (bVar6) {
      param_3 = (long ****)&DAT_00000004;
      goto LAB_7101c54880;
    }
    lVar20 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar20 + 0x920) != 0) {
      FUN_71037780e0(&local_c8,lVar20 + 0x7a8,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_c8);
      ppplVar9 = local_c0[0];
      *(undefined4 *)(lVar20 + 0x920) = 0;
      local_c8 = &PTR_FUN_710523d9e8;
      local_c0[0] = (long ***)0x0;
      if (ppplVar9 != (long ***)0x0) {
        FUN_710392eb40((ulong)ppplVar9);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x1298) == '\x04') {
      bVar6 = *(char *)(param_1 + 0x129a) == '\0';
      goto LAB_7101c5485c;
    }
    bVar6 = false;
    if (!bVar5) goto LAB_7101c54874;
LAB_7101c54860:
    param_3 = (long ****)0x3;
LAB_7101c54880:
    FUN_7101c76f30(lVar15,4,param_3,param_4,param_5,param_6,param_7,param_8);
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
LAB_7101c5490c:
    if (bVar5) goto LAB_7101c54910;
LAB_7101c54924:
    if (bVar6) {
      param_3 = (long ****)&DAT_00000004;
      goto LAB_7101c54930;
    }
    lVar20 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar20 + 0xb00) != 0) {
      FUN_71037780e0(&local_c8,lVar20 + 0x988,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_c8);
      ppplVar9 = local_c0[0];
      *(undefined4 *)(lVar20 + 0xb00) = 0;
      local_c8 = &PTR_FUN_710523d9e8;
      local_c0[0] = (long ***)0x0;
      if (ppplVar9 != (long ***)0x0) {
        FUN_710392eb40((ulong)ppplVar9);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x1480) == '\x04') {
      bVar6 = *(char *)(param_1 + 0x1482) == '\0';
      goto LAB_7101c5490c;
    }
    bVar6 = false;
    if (!bVar5) goto LAB_7101c54924;
LAB_7101c54910:
    param_3 = (long ****)0x3;
LAB_7101c54930:
    FUN_7101c76f30(lVar15,5,param_3,param_4,param_5,param_6,param_7,param_8);
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
LAB_7101c549bc:
    if (bVar5) goto LAB_7101c549c0;
LAB_7101c549d4:
    if (bVar6) {
      param_3 = (long ****)&DAT_00000004;
      goto LAB_7101c549e0;
    }
    lVar20 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar20 + 0xce0) != 0) {
      FUN_71037780e0(&local_c8,lVar20 + 0xb68,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_c8);
      ppplVar9 = local_c0[0];
      *(undefined4 *)(lVar20 + 0xce0) = 0;
      local_c8 = &PTR_FUN_710523d9e8;
      local_c0[0] = (long ***)0x0;
      if (ppplVar9 != (long ***)0x0) {
        FUN_710392eb40((ulong)ppplVar9);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x1668) == '\x04') {
      bVar6 = *(char *)(param_1 + 0x166a) == '\0';
      goto LAB_7101c549bc;
    }
    bVar6 = false;
    if (!bVar5) goto LAB_7101c549d4;
LAB_7101c549c0:
    param_3 = (long ****)0x3;
LAB_7101c549e0:
    FUN_7101c76f30(lVar15,6,param_3,param_4,param_5,param_6,param_7,param_8);
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
LAB_7101c54a6c:
    if (bVar5) goto LAB_7101c54a70;
LAB_7101c54a84:
    if (bVar6) {
      uVar11 = 4;
      goto LAB_7101c54a90;
    }
    lVar15 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar15 + 0xec0) == 0) goto LAB_7101c54a98;
    FUN_71037780e0(&local_c8,lVar15 + 0xd48,(long ****)"balloon_off",param_3,param_4,param_5,param_6
                   ,param_7,param_8);
    FUN_710377aee0(0x3f800000,(long)&local_c8);
    ppplVar9 = local_c0[0];
    *(undefined4 *)(lVar15 + 0xec0) = 0;
    local_c8 = &PTR_FUN_710523d9e8;
    local_c0[0] = (long ***)0x0;
    if (ppplVar9 == (long ***)0x0) goto LAB_7101c54a98;
    FUN_710392eb40((ulong)ppplVar9);
    uVar8 = *(ulong *)(param_1 + 0x428);
    if ((uVar8 & 1) != 0) goto LAB_7101c54d1c;
LAB_7101c54aa0:
    uVar14 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x1850) == '\x04') {
      bVar6 = *(char *)(param_1 + 0x1852) == '\0';
      goto LAB_7101c54a6c;
    }
    bVar6 = false;
    if (!bVar5) goto LAB_7101c54a84;
LAB_7101c54a70:
    uVar11 = 3;
LAB_7101c54a90:
    FUN_7101c76f30(lVar15,7,uVar11,param_4,param_5,param_6,param_7,param_8);
LAB_7101c54a98:
    uVar8 = *(ulong *)(param_1 + 0x428);
    if ((uVar8 & 1) == 0) goto LAB_7101c54aa0;
LAB_7101c54d1c:
    plVar23 = *(long **)(param_1 + 0x2f8);
    plVar7 = (long *)**(long **)(*plVar23 + 0x18);
    if (plVar7 == (long *)0x0) {
LAB_7101c54d74:
      uVar8 = *(ulong *)(param_1 + 0x428);
LAB_7101c54d78:
      if (((uint)uVar8 >> 1 & 1) == 0) {
        uVar14 = (uint)(uVar8 >> 2) & 1;
      }
      else {
        uVar14 = 1;
      }
    }
    else {
      uVar8 = (**(code **)(*plVar7 + 0x2f8))();
      if ((uVar8 & 1) == 0) {
        plVar7 = (long *)**(long **)(*plVar23 + 0x18);
        if (plVar7 == (long *)0x0) goto LAB_7101c54d74;
        uVar25 = (**(code **)(*plVar7 + 0x3c0))();
        uVar8 = *(ulong *)(param_1 + 0x428);
        if ((uVar25 & 1) == 0) goto LAB_7101c54aa0;
        goto LAB_7101c54d78;
      }
      uVar8 = *(ulong *)(param_1 + 0x428);
      uVar14 = 0;
    }
  }
  *(ulong *)(param_1 + 0x428) = uVar8 & 0xfffffffffffffffd;
  if ((uVar8 & 1) == 0) {
LAB_7101c54df4:
    if (uVar14 != 0) {
LAB_7101c54df8:
      *(undefined1 *)(param_1 + 0x431) = 0;
    }
  }
  else {
    plVar23 = *(long **)(param_1 + 0x2f8);
    plVar7 = (long *)**(long **)(*plVar23 + 0x18);
    if ((plVar7 != (long *)0x0) &&
       ((uVar8 = (**(code **)(*plVar7 + 0x2f8))(), (uVar8 & 1) != 0 ||
        ((plVar7 = (long *)**(long **)(*plVar23 + 0x18), plVar7 != (long *)0x0 &&
         (uVar8 = (**(code **)(*plVar7 + 0x3c0))(), (uVar8 & 1) == 0)))))) goto LAB_7101c54df4;
    if (((uint)*(ulong *)(param_1 + 0x428) >> 1 & 1) == 0) {
      if ((uVar14 ^ (uint)(*(ulong *)(param_1 + 0x428) >> 2) & 1) != 1) goto LAB_7101c54dfc;
      goto LAB_7101c54df8;
    }
    if (uVar14 == 0) goto LAB_7101c54df8;
  }
LAB_7101c54dfc:
  FUN_7101c59330(param_1 + 0x800,1,5,0,param_5,param_6,param_7,param_8);
  uVar8 = (ulong)*(byte *)(param_1 + 0x1920);
  if (7 < uVar8) {
LAB_7101c55158:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar15 = *(long *)(param_1 + 0x450) + uVar8 * 0x1e0;
  if (*(char *)(lVar15 + 0x19b) != '\0') {
    FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 0x450) + uVar8 * 0x1e0 + 0x30),
                   0x71042c4e37);
  }
  pppplVar12 = (long ****)0x1;
  ppppbVar13 = (byte ****)0x1;
  *(undefined1 *)(lVar15 + 0x19b) = 0;
  FUN_7101c591b0(param_1,1,1,1);
  pbVar17 = *(byte **)(param_1 + 0x4f8);
  if (pbVar17 == *(byte **)(param_1 + 0x500)) {
    uVar14 = 0xfffffffe;
    lVar15 = *(long *)(param_1 + 0x820);
  }
  else {
    pbVar21 = *(byte **)(param_1 + 0x500) + (-2 - (long)pbVar17);
    uVar25 = (ulong)pbVar21 >> 1;
    uVar14 = (int)uVar25 + 1;
    uVar8 = (ulong)uVar14 & 3;
    if (pbVar21 < (byte *)0x6) {
      uVar19 = 0;
    }
    else {
      uVar19 = 0;
      lVar15 = (uVar8 - 1) - uVar25;
      do {
        bVar3 = *pbVar17;
        pbVar21 = pbVar17 + 2;
        pbVar1 = pbVar17 + 4;
        pbVar2 = pbVar17 + 6;
        pbVar17 = pbVar17 + 8;
        uVar19 = (uint)*pbVar2 + (uint)*pbVar1 + (uint)*pbVar21 + bVar3 + uVar19;
        lVar15 = lVar15 + 4;
      } while (lVar15 != 0);
    }
    if ((uVar14 & 3) != 0) {
      lVar15 = -uVar8;
      do {
        uVar19 = *pbVar17 + uVar19;
        lVar15 = lVar15 + 1;
        pbVar17 = pbVar17 + 2;
      } while (lVar15 != 0);
    }
    uVar14 = (uVar19 & 0xff) - 2;
    lVar15 = *(long *)(param_1 + 0x820);
  }
  if ((((lVar15 != 0) && (plVar7 = *(long **)(*(long *)(lVar15 + 8) + 8), plVar7 != (long *)0x0)) &&
      (uVar8 = (**(code **)(*plVar7 + 0x138))(), (uVar8 & 1) == 0)) &&
     (plVar7 = *(long **)(param_1 + 0x820), plVar7 != (long *)0x0)) {
    plVar23 = (long *)plVar7[1];
    plVar24 = (long *)plVar23[1];
    if (plVar24 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x820) = 0;
    }
    else {
      if ((char)plVar23[2] != '\0') {
        plVar26 = *(long **)(*plVar23 + 0x80);
        plVar23 = (long *)(*plVar23 + 0x88);
        if (plVar26 != plVar23) {
          do {
            while( true ) {
              uVar8 = (**(code **)(*(long *)plVar26[0xd] + 0x148))();
              if (((uVar8 & 1) != 0) &&
                 (uVar8 = (**(code **)(*plVar24 + 0x120))(plVar24,plVar26[0xd]), (uVar8 & 1) != 0))
              {
                (**(code **)(*(long *)plVar26[0xd] + 0x178))();
                (**(code **)(*(long *)plVar26[0xd] + 0x140))((long *)plVar26[0xd],0);
              }
              plVar18 = (long *)plVar26[1];
              if ((long *)plVar26[1] == (long *)0x0) break;
              do {
                plVar26 = plVar18;
                plVar18 = (long *)*plVar26;
              } while ((long *)*plVar26 != (long *)0x0);
LAB_7101c54ff4:
              if (plVar26 == plVar23) goto LAB_7101c5500c;
            }
            plVar18 = plVar26 + 2;
            plVar22 = (long *)*plVar18;
            if ((long *)*plVar22 != plVar26) {
              do {
                lVar15 = *plVar18;
                plVar18 = (long *)(lVar15 + 0x10);
                plVar26 = (long *)*plVar18;
              } while (*plVar26 != lVar15);
              goto LAB_7101c54ff4;
            }
            plVar26 = plVar22;
          } while (plVar22 != plVar23);
LAB_7101c5500c:
          plVar24 = *(long **)(plVar7[1] + 8);
        }
      }
      (**(code **)(*plVar24 + 0x178))(plVar24);
      plVar7 = *(long **)(param_1 + 0x820);
      *(undefined8 *)(param_1 + 0x820) = 0;
      if (plVar7 == (long *)0x0) goto LAB_7101c55050;
    }
    (**(code **)(*plVar7 + 8))(plVar7);
  }
LAB_7101c55050:
  if (1 < (int)uVar14) {
    uVar14 = 2;
  }
  FUN_71003a4ca0((uint *)&local_c8,"anim_fight_set_%02d",
                 (ulong)(uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)),pppplVar12,ppppbVar13,param_5
                 ,param_6,param_7,param_8);
  FUN_71037780e0(&local_80,param_1 + 0x810,local_c0,pppplVar12,ppppbVar13,param_5,param_6,param_7,
                 param_8);
  pppplVar12 = (long ****)
               FUN_710392e290(0x10,0x10,pppplVar12,ppppbVar13,param_5,param_6,param_7,param_8);
  if (pppplVar12 == (long ****)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ***)&DAT_00000010;
      pppplVar12 = &local_70;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar8 & 1) != 0) &&
         (pppplVar12 = (long ****)
                       FUN_710392e290(0x10,0x10,pppplVar12,ppppbVar13,param_5,param_6,param_7,
                                      param_8), pppplVar12 != (long ****)0x0)) goto LAB_7101c550e0;
    }
    pppplVar12 = (long ****)0x0;
  }
LAB_7101c550e0:
  ppplVar9 = local_78;
  *pppplVar12 = (long ***)&PTR_FUN_710523d9e8;
  pppplVar12[1] = (long ***)0x0;
  if (&local_80 != pppplVar12) {
    local_78 = (long ***)0x0;
    pppplVar12[1] = ppplVar9;
  }
  plVar7 = *(long **)(param_1 + 0x820);
  *(long *****)(param_1 + 0x820) = pppplVar12;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))(plVar7);
  }
  ppplVar9 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (long ***)0x0;
  if (ppplVar9 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar9);
  }
  FUN_710377aee0(0x3f800000,*(long *)(param_1 + 0x820));
  return;
}

