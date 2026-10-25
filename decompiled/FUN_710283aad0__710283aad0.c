// addr:      710283aad0
// offset:    0x283aad0
// name:      FUN_710283aad0
// mangled:   
// signature: undefined __cdecl FUN_710283aad0(long param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710283aad0(long param_1,long *param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  void *__src;
  int iVar5;
  long *plVar6;
  long ****pppplVar7;
  byte ****ppppbVar8;
  long ****pppplVar9;
  long lVar10;
  byte *pbVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  int iVar16;
  char *pcVar17;
  ulong uVar18;
  long ***ppplVar19;
  long lVar20;
  ulong uVar21;
  undefined8 *puVar22;
  char *pcVar23;
  int iVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  undefined8 uVar28;
  long lVar29;
  byte *pbVar30;
  byte *pbVar31;
  byte *pbVar32;
  long lVar33;
  ulong uVar34;
  size_t __n;
  undefined8 *puVar35;
  void *pvVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  long local_90;
  long ***local_70;
  undefined4 local_64;
  
  plVar6 = param_2 + 1;
  pcVar17 = (char *)*plVar6;
  if ((*pcVar17 == '\f') && (iVar16 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    local_90 = *param_2;
    pbVar32 = &DAT_7104742dbb;
    iVar24 = 0;
    do {
      iVar3 = iVar16 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(local_90 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar27 = *(ulong *)(*(long *)(local_90 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar27 == 0x17366ba418) {
        uVar15 = puVar1[1];
        if ((int)uVar15 < 0) goto LAB_710283ab94;
        pbVar32 = (byte *)(pcVar17 + (int)uVar15);
        goto LAB_710283aba0;
      }
      iVar5 = iVar3 + -1;
      if (uVar27 < 0x17366ba419) {
        iVar24 = iVar3 + 1;
        iVar5 = iVar16;
      }
      iVar16 = iVar5;
    } while (iVar24 <= iVar16);
    local_90 = 0;
  }
  else {
LAB_710283ab94:
    local_90 = 0;
    pbVar32 = &DAT_7104742dbb;
  }
LAB_710283aba0:
  plVar2 = (long *)(param_1 + 8);
  if (*pbVar32 - 0xb < 2) {
    iVar16 = *(int *)(pbVar32 + 1);
  }
  else {
    iVar16 = 0;
  }
  FUN_7102840a60(plVar2,(long)iVar16,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar15 = (uint)*pbVar32;
  if ((*pbVar32 - 0xb < 2) && (0 < *(int *)(pbVar32 + 1))) {
    lVar33 = 0;
LAB_710283ac28:
    do {
      lVar29 = 0;
      iVar16 = (int)lVar33;
      if (iVar16 < 0) {
        pbVar31 = &DAT_7104742dbb;
      }
      else {
        pbVar31 = &DAT_7104742dbb;
        if (uVar15 == 0xb) {
          if (iVar16 < *(int *)(pbVar32 + 1)) {
            pbVar31 = pbVar32 + *(int *)(pbVar32 + (long)iVar16 * 4 + 5);
            lVar29 = local_90;
          }
          else {
            lVar29 = 0;
            pbVar31 = &DAT_7104742dbb;
          }
        }
      }
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar27 = *(ulong *)(*(long *)(lVar29 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar31 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar27 == 0xa737452e1) break;
          iVar5 = iVar3 + -1;
          if (uVar27 < 0xa737452e2) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      std::string::assign((char *)(*plVar2 + lVar33 * 0x48));
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar27 = *(ulong *)(*(long *)(lVar29 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar31 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar27 == 0x113437d6b1) break;
          iVar5 = iVar3 + -1;
          if (uVar27 < 0x113437d6b2) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      std::string::assign((char *)(*plVar2 + lVar33 * 0x48 + 0x18));
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar27 = *(ulong *)(*(long *)(lVar29 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar31 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar27 == 0x11a06c0c15) break;
          iVar5 = iVar3 + -1;
          if (uVar27 < 0x11a06c0c16) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      std::string::assign((char *)(*plVar2 + lVar33 * 0x48 + 0x30));
      uVar15 = (uint)*pbVar32;
      lVar33 = lVar33 + 1;
      if (1 < uVar15 - 0xb) {
        if (-1 < lVar33) break;
        goto LAB_710283ac28;
      }
    } while (lVar33 < *(int *)(pbVar32 + 1));
  }
  pcVar17 = (char *)*plVar6;
  if ((*pcVar17 == '\f') && (iVar16 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar24 = 0;
    pcVar23 = "";
    do {
      iVar3 = iVar16 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar27 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar27 == 0x1319a61a3b) {
        uVar15 = puVar1[1];
        if ((int)uVar15 < 0) goto LAB_710283af5c;
        pcVar23 = pcVar17 + (int)uVar15;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar27 < 0x1319a61a3c) {
        iVar24 = iVar3 + 1;
        iVar5 = iVar16;
      }
      iVar16 = iVar5;
    } while (iVar24 <= iVar16);
  }
  else {
LAB_710283af5c:
    pcVar23 = "";
  }
  switch(*pcVar23) {
  case '\x01':
  case '\x03':
    uVar15 = (uint)(byte)pcVar23[1];
    break;
  case '\x02':
    uVar15 = (uint)pcVar23[1];
    break;
  case '\x04':
    uVar15 = (uint)*(short *)(pcVar23 + 1);
    break;
  case '\x05':
    uVar15 = (uint)*(ushort *)(pcVar23 + 1);
    break;
  case '\x06':
  case '\a':
    uVar15 = *(uint *)(pcVar23 + 1);
    break;
  default:
    uVar15 = 0x852;
  }
  *(uint *)(param_1 + 0x20) = uVar15;
  pcVar17 = (char *)*plVar6;
  if ((*pcVar17 == '\f') && (iVar16 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    lVar33 = *param_2;
    iVar24 = 0;
    pbVar32 = &DAT_7104742dbb;
    do {
      iVar3 = iVar16 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar33 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar27 = *(ulong *)(*(long *)(lVar33 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar27 == 0x17ba954f5f) {
        uVar15 = puVar1[1];
        if ((int)uVar15 < 0) goto LAB_710283b058;
        pbVar32 = (byte *)(pcVar17 + (int)uVar15);
        goto LAB_710283b064;
      }
      iVar5 = iVar3 + -1;
      if (uVar27 < 0x17ba954f60) {
        iVar24 = iVar3 + 1;
        iVar5 = iVar16;
      }
      iVar16 = iVar5;
    } while (iVar24 <= iVar16);
    lVar33 = 0;
  }
  else {
LAB_710283b058:
    lVar33 = 0;
    pbVar32 = &DAT_7104742dbb;
  }
LAB_710283b064:
  if (*pbVar32 - 0xb < 2) {
    iVar16 = *(int *)(pbVar32 + 1);
  }
  else {
    iVar16 = 0;
  }
  plVar2 = (long *)(param_1 + 0x28);
  lVar29 = *(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 2;
  uVar25 = lVar29 * -0x71c71c71c71c71c7;
  uVar27 = (ulong)iVar16;
  if (uVar25 < uVar27) {
    FUN_7102840db0(plVar2,uVar27 + lVar29 * 0x71c71c71c71c71c7,param_3,param_4,param_5,param_6,
                   param_7,param_8);
  }
  else if (uVar25 - uVar27 != 0) {
    *(ulong *)(param_1 + 0x30) = *(long *)(param_1 + 0x28) + uVar27 * 0x24;
  }
  uVar15 = (uint)*pbVar32;
  ppppbVar8 = (byte ****)0xed63799b6;
  pppplVar9 = (long ****)0xebbea7d5d;
  uVar12 = 0xea65d6d39;
  uVar13 = 0xc46eb0146;
  uVar14 = 0xc3681f5c9;
  if ((*pbVar32 - 0xb < 2) && (0 < *(int *)(pbVar32 + 1))) {
    lVar29 = 0;
LAB_710283b18c:
    do {
      iVar16 = (int)lVar29;
      if (iVar16 < 0) {
LAB_710283b1c4:
        lVar20 = 0;
        pbVar31 = &DAT_7104742dbb;
      }
      else {
        pbVar31 = &DAT_7104742dbb;
        lVar20 = 0;
        if (uVar15 == 0xb) {
          if (*(int *)(pbVar32 + 1) <= iVar16) goto LAB_710283b1c4;
          pbVar31 = pbVar32 + *(int *)(pbVar32 + (long)iVar16 * 4 + 5);
          lVar20 = lVar33;
        }
      }
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0x5b5f83ccd) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0x5b5f83cce) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      switch(*pbVar11) {
      case 1:
      case 3:
        uVar15 = (uint)pbVar11[1];
        break;
      case 2:
        uVar15 = (uint)(char)pbVar11[1];
        break;
      case 4:
        uVar15 = (uint)*(short *)(pbVar11 + 1);
        break;
      case 5:
        uVar15 = (uint)*(ushort *)(pbVar11 + 1);
        break;
      case 6:
      case 7:
        uVar15 = *(uint *)(pbVar11 + 1);
        break;
      default:
        uVar15 = 0;
      }
      *(uint *)(*plVar2 + lVar29 * 0x24) = uVar15;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xc2b36e5ad) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xc2b36e5ae) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0x3f800000;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 4) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xc46eb0146) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xc46eb0147) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0x3f800000;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 8) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xc3681f5c9) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xc3681f5ca) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0x3f800000;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 0xc) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xebbea7d5d) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xebbea7d5e) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 0x10) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xed63799b6) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xed63799b7) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 0x14) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xea65d6d39) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xea65d6d3a) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 0x18) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xa2a2aad88) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xa2a2aad89) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0x3f800000;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 0x1c) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          uVar27 = *(ulong *)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar27 == 0x8a34d3a08) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (uVar27 < 0x8a34d3a09) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0x3f800000;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      lVar20 = lVar29 * 0x24;
      lVar29 = lVar29 + 1;
      *(undefined4 *)(*plVar2 + lVar20 + 0x20) = uVar37;
      uVar15 = (uint)*pbVar32;
      if (1 < uVar15 - 0xb) {
        if (-1 < lVar29) break;
        goto LAB_710283b18c;
      }
    } while (lVar29 < *(int *)(pbVar32 + 1));
  }
  pcVar17 = (char *)*plVar6;
  if ((*pcVar17 == '\f') && (iVar16 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar24 = 0;
    pcVar23 = "";
    do {
      iVar3 = iVar16 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar27 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar27 == 0x2f94e65e83) {
        uVar15 = puVar1[1];
        if ((int)uVar15 < 0) goto LAB_710283b864;
        pcVar23 = pcVar17 + (int)uVar15;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar27 < 0x2f94e65e84) {
        iVar24 = iVar3 + 1;
        iVar5 = iVar16;
      }
      iVar16 = iVar5;
    } while (iVar24 <= iVar16);
  }
  else {
LAB_710283b864:
    pcVar23 = "";
  }
  if (*pcVar23 == '\b') {
    uVar37 = *(undefined4 *)(pcVar23 + 1);
  }
  else {
    uVar37 = 0x44160000;
  }
  *(undefined4 *)(param_1 + 0x40) = uVar37;
  pcVar17 = (char *)*plVar6;
  if ((*pcVar17 == '\f') && (iVar16 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar24 = 0;
    pcVar23 = "";
    do {
      iVar3 = iVar16 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar27 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar27 == 0x345f7f0129) {
        uVar15 = puVar1[1];
        if ((int)uVar15 < 0) goto LAB_710283b928;
        pcVar23 = pcVar17 + (int)uVar15;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar27 < 0x345f7f012a) {
        iVar24 = iVar3 + 1;
        iVar5 = iVar16;
      }
      iVar16 = iVar5;
    } while (iVar24 <= iVar16);
  }
  else {
LAB_710283b928:
    pcVar23 = "";
  }
  if (*pcVar23 == '\b') {
    uVar37 = *(undefined4 *)(pcVar23 + 1);
  }
  else {
    uVar37 = 0x443b8000;
  }
  *(undefined4 *)(param_1 + 0x44) = uVar37;
  pcVar17 = (char *)*plVar6;
  if ((*pcVar17 == '\f') && (iVar16 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    lVar33 = *param_2;
    iVar24 = 0;
    pbVar32 = &DAT_7104742dbb;
    do {
      iVar3 = iVar16 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar33 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar27 = *(ulong *)(*(long *)(lVar33 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar27 == 0x20dbb738d1) {
        uVar15 = puVar1[1];
        if ((int)uVar15 < 0) goto LAB_710283b9f0;
        pbVar32 = (byte *)(pcVar17 + (int)uVar15);
        goto LAB_710283b9fc;
      }
      iVar5 = iVar3 + -1;
      if (uVar27 < 0x20dbb738d2) {
        iVar24 = iVar3 + 1;
        iVar5 = iVar16;
      }
      iVar16 = iVar5;
    } while (iVar24 <= iVar16);
    lVar33 = 0;
  }
  else {
LAB_710283b9f0:
    lVar33 = 0;
    pbVar32 = &DAT_7104742dbb;
  }
LAB_710283b9fc:
  plVar2 = (long *)(param_1 + 0x48);
  if (*pbVar32 - 0xb < 2) {
    iVar16 = *(int *)(pbVar32 + 1);
  }
  else {
    iVar16 = 0;
  }
  FUN_7102840a60(plVar2,(long)iVar16,param_3,(byte ****)0xed63799b6,(long ****)0xebbea7d5d,
                 0xea65d6d39,0xc46eb0146,0xc3681f5c9);
  uVar15 = (uint)*pbVar32;
  if ((*pbVar32 - 0xb < 2) && (0 < *(int *)(pbVar32 + 1))) {
    lVar29 = 0;
    do {
      iVar16 = (int)lVar29;
      if (iVar16 < 0) {
LAB_710283baa8:
        lVar20 = 0;
        pbVar31 = &DAT_7104742dbb;
      }
      else {
        pbVar31 = &DAT_7104742dbb;
        lVar20 = 0;
        if (uVar15 == 0xb) {
          if (*(int *)(pbVar32 + 1) <= iVar16) goto LAB_710283baa8;
          pbVar31 = pbVar32 + *(int *)(pbVar32 + (long)iVar16 * 4 + 5);
          lVar20 = lVar33;
        }
      }
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar27 = *(ulong *)(*(long *)(lVar20 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar27 == 0xa737452e1) break;
          iVar5 = iVar3 + -1;
          if (uVar27 < 0xa737452e2) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      std::string::assign((char *)(*plVar2 + lVar29 * 0x48));
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar27 = *(ulong *)(*(long *)(lVar20 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar27 == 0x113437d6b1) break;
          iVar5 = iVar3 + -1;
          if (uVar27 < 0x113437d6b2) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      std::string::assign((char *)(*plVar2 + lVar29 * 0x48 + 0x18));
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar27 = *(ulong *)(*(long *)(lVar20 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar27 == 0x11a06c0c15) break;
          iVar5 = iVar3 + -1;
          if (uVar27 < 0x11a06c0c16) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      std::string::assign((char *)(*plVar2 + lVar29 * 0x48 + 0x30));
      uVar15 = (uint)*pbVar32;
      lVar29 = lVar29 + 1;
      if (uVar15 - 0xb < 2) {
        iVar16 = *(int *)(pbVar32 + 1);
      }
      else {
        iVar16 = 0;
      }
    } while (lVar29 < iVar16);
  }
  pcVar17 = (char *)*plVar6;
  if (*pcVar17 == '\f') {
    iVar16 = *(int *)(pcVar17 + 1) + -1;
    if (*(int *)(pcVar17 + 1) < 1) {
LAB_710283bdd4:
      lVar33 = 0;
      pbVar32 = &DAT_7104742dbb;
    }
    else {
      lVar33 = *param_2;
      iVar24 = 0;
      pbVar32 = &DAT_7104742dbb;
      do {
        iVar3 = iVar16 + iVar24;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar3 >> 1;
        puVar1 = (uint *)(*(long *)(lVar33 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
        uVar27 = *(ulong *)(*(long *)(lVar33 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar27 == 0x2015111fc9) {
          uVar15 = puVar1[1];
          if ((int)uVar15 < 0) goto LAB_710283bdd4;
          pbVar32 = (byte *)(pcVar17 + (int)uVar15);
          goto LAB_710283bde0;
        }
        iVar5 = iVar3 + -1;
        if (uVar27 < 0x2015111fca) {
          iVar24 = iVar3 + 1;
          iVar5 = iVar16;
        }
        iVar16 = iVar5;
      } while (iVar24 <= iVar16);
      lVar33 = 0;
    }
  }
  else {
    lVar33 = 0;
    pbVar32 = &DAT_7104742dbb;
  }
LAB_710283bde0:
  if (*pbVar32 - 0xb < 2) {
    iVar16 = *(int *)(pbVar32 + 1);
  }
  else {
    iVar16 = 0;
  }
  plVar2 = (long *)(param_1 + 0x60);
  lVar29 = *(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60) >> 2;
  uVar25 = lVar29 * -0x71c71c71c71c71c7;
  uVar27 = (ulong)iVar16;
  if (uVar25 < uVar27) {
    FUN_7102840db0(plVar2,uVar27 + lVar29 * 0x71c71c71c71c71c7,param_3,ppppbVar8,pppplVar9,uVar12,
                   uVar13,uVar14);
  }
  else if (uVar25 - uVar27 != 0) {
    *(ulong *)(param_1 + 0x68) = *(long *)(param_1 + 0x60) + uVar27 * 0x24;
  }
  uVar14 = 0x5b5f83ccd;
  uVar13 = 0x8a34d3a08;
  uVar12 = 0xc3681f5c9;
  pppplVar9 = (long ****)0xc46eb0146;
  ppppbVar8 = (byte ****)0xea65d6d39;
  uVar15 = (uint)*pbVar32;
  if ((*pbVar32 - 0xb < 2) && (0 < *(int *)(pbVar32 + 1))) {
    lVar29 = 0;
LAB_710283bf2c:
    do {
      iVar16 = (int)lVar29;
      if (iVar16 < 0) {
LAB_710283bf64:
        lVar20 = 0;
        pbVar31 = &DAT_7104742dbb;
      }
      else {
        pbVar31 = &DAT_7104742dbb;
        lVar20 = 0;
        if (uVar15 == 0xb) {
          if (*(int *)(pbVar32 + 1) <= iVar16) goto LAB_710283bf64;
          pbVar31 = pbVar32 + *(int *)(pbVar32 + (long)iVar16 * 4 + 5);
          lVar20 = lVar33;
        }
      }
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0x5b5f83ccd) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0x5b5f83cce) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      switch(*pbVar11) {
      case 1:
      case 3:
        uVar15 = (uint)pbVar11[1];
        break;
      case 2:
        uVar15 = (uint)(char)pbVar11[1];
        break;
      case 4:
        uVar15 = (uint)*(short *)(pbVar11 + 1);
        break;
      case 5:
        uVar15 = (uint)*(ushort *)(pbVar11 + 1);
        break;
      case 6:
      case 7:
        uVar15 = *(uint *)(pbVar11 + 1);
        break;
      default:
        uVar15 = 0;
      }
      *(uint *)(*plVar2 + lVar29 * 0x24) = uVar15;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xc2b36e5ad) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xc2b36e5ae) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0x3f800000;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 4) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xc46eb0146) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xc46eb0147) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0x3f800000;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 8) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xc3681f5c9) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xc3681f5ca) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0x3f800000;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 0xc) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xebbea7d5d) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xebbea7d5e) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 0x10) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xed63799b6) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xed63799b7) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 0x14) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xea65d6d39) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xea65d6d3a) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 0x18) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xa2a2aad88) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xa2a2aad89) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0x3f800000;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 0x1c) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          uVar27 = *(ulong *)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar27 == 0x8a34d3a08) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (uVar27 < 0x8a34d3a09) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0x3f800000;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      lVar20 = lVar29 * 0x24;
      lVar29 = lVar29 + 1;
      *(undefined4 *)(*plVar2 + lVar20 + 0x20) = uVar37;
      uVar15 = (uint)*pbVar32;
      if (1 < uVar15 - 0xb) {
        if (-1 < lVar29) break;
        goto LAB_710283bf2c;
      }
    } while (lVar29 < *(int *)(pbVar32 + 1));
  }
  pcVar17 = (char *)*plVar6;
  if ((*pcVar17 == '\f') && (iVar16 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    lVar33 = *param_2;
    iVar24 = 0;
    pbVar32 = &DAT_7104742dbb;
    do {
      iVar3 = iVar16 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar33 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar27 = *(ulong *)(*(long *)(lVar33 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar27 == 0x168943d0f2) {
        uVar15 = puVar1[1];
        if ((int)uVar15 < 0) goto LAB_710283c608;
        pbVar32 = (byte *)(pcVar17 + (int)uVar15);
        goto LAB_710283c614;
      }
      iVar5 = iVar3 + -1;
      if (uVar27 < 0x168943d0f3) {
        iVar24 = iVar3 + 1;
        iVar5 = iVar16;
      }
      iVar16 = iVar5;
    } while (iVar24 <= iVar16);
    lVar33 = 0;
  }
  else {
LAB_710283c608:
    lVar33 = 0;
    pbVar32 = &DAT_7104742dbb;
  }
LAB_710283c614:
  plVar2 = (long *)(param_1 + 0x78);
  if (*pbVar32 - 0xb < 2) {
    iVar16 = *(int *)(pbVar32 + 1);
  }
  else {
    iVar16 = 0;
  }
  FUN_7102840a60(plVar2,(long)iVar16,param_3,(byte ****)0xea65d6d39,(long ****)0xc46eb0146,
                 0xc3681f5c9,0x8a34d3a08,0x5b5f83ccd);
  uVar15 = (uint)*pbVar32;
  if ((*pbVar32 - 0xb < 2) && (0 < *(int *)(pbVar32 + 1))) {
    lVar29 = 0;
    do {
      iVar16 = (int)lVar29;
      if (iVar16 < 0) {
LAB_710283c6c0:
        lVar20 = 0;
        pbVar31 = &DAT_7104742dbb;
      }
      else {
        lVar20 = 0;
        pbVar31 = &DAT_7104742dbb;
        if (uVar15 == 0xb) {
          if (*(int *)(pbVar32 + 1) <= iVar16) goto LAB_710283c6c0;
          pbVar31 = pbVar32 + *(int *)(pbVar32 + (long)iVar16 * 4 + 5);
          lVar20 = lVar33;
        }
      }
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar27 = *(ulong *)(*(long *)(lVar20 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar27 == 0xa737452e1) break;
          iVar5 = iVar3 + -1;
          if (uVar27 < 0xa737452e2) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      std::string::assign((char *)(*plVar2 + lVar29 * 0x48));
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar27 = *(ulong *)(*(long *)(lVar20 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar27 == 0x113437d6b1) break;
          iVar5 = iVar3 + -1;
          if (uVar27 < 0x113437d6b2) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      std::string::assign((char *)(*plVar2 + lVar29 * 0x48 + 0x18));
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar27 = *(ulong *)(*(long *)(lVar20 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar27 == 0x11a06c0c15) break;
          iVar5 = iVar3 + -1;
          if (uVar27 < 0x11a06c0c16) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      std::string::assign((char *)(*plVar2 + lVar29 * 0x48 + 0x30));
      uVar15 = (uint)*pbVar32;
      lVar29 = lVar29 + 1;
      if (uVar15 - 0xb < 2) {
        iVar16 = *(int *)(pbVar32 + 1);
      }
      else {
        iVar16 = 0;
      }
    } while (lVar29 < iVar16);
  }
  pcVar17 = (char *)*plVar6;
  if (*pcVar17 == '\f') {
    iVar16 = *(int *)(pcVar17 + 1) + -1;
    if (0 < *(int *)(pcVar17 + 1)) {
      iVar24 = 0;
      do {
        iVar3 = iVar16 + iVar24;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar3 >> 1;
        puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8
                         );
        uVar27 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar27 == 0x12f0daaad6) {
          uVar15 = puVar1[1];
          if ((int)uVar15 < 0) {
            pcVar17 = "";
          }
          else {
            pcVar17 = pcVar17 + (int)uVar15;
          }
          goto LAB_710283ca34;
        }
        iVar5 = iVar3 + -1;
        if (uVar27 < 0x12f0daaad7) {
          iVar24 = iVar3 + 1;
          iVar5 = iVar16;
        }
        iVar16 = iVar5;
      } while (iVar24 <= iVar16);
    }
    pcVar17 = "";
  }
  else {
    pcVar17 = "";
  }
LAB_710283ca34:
  switch(*pcVar17) {
  case '\x01':
  case '\x03':
    uVar15 = (uint)(byte)pcVar17[1];
    break;
  case '\x02':
    uVar15 = (uint)pcVar17[1];
    break;
  case '\x04':
    uVar15 = (uint)*(short *)(pcVar17 + 1);
    break;
  case '\x05':
    uVar15 = (uint)*(ushort *)(pcVar17 + 1);
    break;
  case '\x06':
  case '\a':
    uVar15 = *(uint *)(pcVar17 + 1);
    break;
  default:
    uVar15 = 0x79e;
  }
  *(uint *)(param_1 + 0x90) = uVar15;
  pcVar17 = (char *)*plVar6;
  if ((*pcVar17 == '\f') && (iVar16 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    lVar33 = *param_2;
    iVar24 = 0;
    pbVar32 = &DAT_7104742dbb;
    do {
      iVar3 = iVar16 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar33 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar27 = *(ulong *)(*(long *)(lVar33 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar27 == 0x164b25d747) {
        uVar15 = puVar1[1];
        if ((int)uVar15 < 0) goto LAB_710283cb28;
        pbVar32 = (byte *)(pcVar17 + (int)uVar15);
        goto LAB_710283cb34;
      }
      iVar5 = iVar3 + -1;
      if (uVar27 < 0x164b25d748) {
        iVar24 = iVar3 + 1;
        iVar5 = iVar16;
      }
      iVar16 = iVar5;
    } while (iVar24 <= iVar16);
    lVar33 = 0;
  }
  else {
LAB_710283cb28:
    lVar33 = 0;
    pbVar32 = &DAT_7104742dbb;
  }
LAB_710283cb34:
  if (*pbVar32 - 0xb < 2) {
    iVar16 = *(int *)(pbVar32 + 1);
  }
  else {
    iVar16 = 0;
  }
  plVar2 = (long *)(param_1 + 0x98);
  lVar29 = *(long *)(param_1 + 0xa0) - *(long *)(param_1 + 0x98) >> 2;
  uVar25 = lVar29 * -0x71c71c71c71c71c7;
  uVar27 = (ulong)iVar16;
  if (uVar25 < uVar27) {
    FUN_7102840db0(plVar2,uVar27 + lVar29 * 0x71c71c71c71c71c7,param_3,ppppbVar8,pppplVar9,uVar12,
                   uVar13,uVar14);
  }
  else if (uVar25 - uVar27 != 0) {
    *(ulong *)(param_1 + 0xa0) = *(long *)(param_1 + 0x98) + uVar27 * 0x24;
  }
  uVar14 = 0x5b5f83ccd;
  uVar13 = 0x8a34d3a08;
  uVar12 = 0xc3681f5c9;
  pppplVar9 = (long ****)0xc46eb0146;
  ppppbVar8 = (byte ****)0xea65d6d39;
  uVar15 = (uint)*pbVar32;
  if ((*pbVar32 - 0xb < 2) && (0 < *(int *)(pbVar32 + 1))) {
    lVar29 = 0;
LAB_710283cc60:
    do {
      iVar16 = (int)lVar29;
      if (iVar16 < 0) {
LAB_710283cc98:
        lVar20 = 0;
        pbVar31 = &DAT_7104742dbb;
      }
      else {
        pbVar31 = &DAT_7104742dbb;
        lVar20 = 0;
        if (uVar15 == 0xb) {
          if (*(int *)(pbVar32 + 1) <= iVar16) goto LAB_710283cc98;
          pbVar31 = pbVar32 + *(int *)(pbVar32 + (long)iVar16 * 4 + 5);
          lVar20 = lVar33;
        }
      }
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0x5b5f83ccd) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0x5b5f83cce) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      switch(*pbVar11) {
      case 1:
      case 3:
        uVar15 = (uint)pbVar11[1];
        break;
      case 2:
        uVar15 = (uint)(char)pbVar11[1];
        break;
      case 4:
        uVar15 = (uint)*(short *)(pbVar11 + 1);
        break;
      case 5:
        uVar15 = (uint)*(ushort *)(pbVar11 + 1);
        break;
      case 6:
      case 7:
        uVar15 = *(uint *)(pbVar11 + 1);
        break;
      default:
        uVar15 = 0;
      }
      *(uint *)(*plVar2 + lVar29 * 0x24) = uVar15;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xc2b36e5ad) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xc2b36e5ae) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0x3f800000;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 4) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xc46eb0146) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xc46eb0147) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0x3f800000;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 8) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xc3681f5c9) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xc3681f5ca) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0x3f800000;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 0xc) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xebbea7d5d) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xebbea7d5e) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 0x10) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xed63799b6) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xed63799b7) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 0x14) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xea65d6d39) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xea65d6d3a) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 0x18) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xa2a2aad88) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xa2a2aad89) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0x3f800000;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 0x1c) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          uVar27 = *(ulong *)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar27 == 0x8a34d3a08) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (uVar27 < 0x8a34d3a09) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0x3f800000;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      lVar20 = lVar29 * 0x24;
      lVar29 = lVar29 + 1;
      *(undefined4 *)(*plVar2 + lVar20 + 0x20) = uVar37;
      uVar15 = (uint)*pbVar32;
      if (1 < uVar15 - 0xb) {
        if (-1 < lVar29) break;
        goto LAB_710283cc60;
      }
    } while (lVar29 < *(int *)(pbVar32 + 1));
  }
  pcVar17 = (char *)*plVar6;
  if ((*pcVar17 == '\f') && (iVar16 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar24 = 0;
    pcVar23 = "";
    do {
      iVar3 = iVar16 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar27 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar27 == 0x2dfc20e886) {
        uVar15 = puVar1[1];
        if ((int)uVar15 < 0) goto LAB_710283d338;
        pcVar23 = pcVar17 + (int)uVar15;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar27 < 0x2dfc20e887) {
        iVar24 = iVar3 + 1;
        iVar5 = iVar16;
      }
      iVar16 = iVar5;
    } while (iVar24 <= iVar16);
  }
  else {
LAB_710283d338:
    pcVar23 = "";
  }
  if (*pcVar23 == '\b') {
    uVar37 = *(undefined4 *)(pcVar23 + 1);
  }
  else {
    uVar37 = 0x44110000;
  }
  *(undefined4 *)(param_1 + 0xb0) = uVar37;
  pcVar17 = (char *)*plVar6;
  if ((*pcVar17 == '\f') && (iVar16 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar24 = 0;
    pcVar23 = "";
    do {
      iVar3 = iVar16 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar27 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar27 == 0x3297809442) {
        uVar15 = puVar1[1];
        if ((int)uVar15 < 0) goto LAB_710283d3fc;
        pcVar23 = pcVar17 + (int)uVar15;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar27 < 0x3297809443) {
        iVar24 = iVar3 + 1;
        iVar5 = iVar16;
      }
      iVar16 = iVar5;
    } while (iVar24 <= iVar16);
  }
  else {
LAB_710283d3fc:
    pcVar23 = "";
  }
  if (*pcVar23 == '\b') {
    uVar37 = *(undefined4 *)(pcVar23 + 1);
  }
  else {
    uVar37 = 0x44688000;
  }
  *(undefined4 *)(param_1 + 0xb4) = uVar37;
  pcVar17 = (char *)*plVar6;
  if ((*pcVar17 == '\f') && (iVar16 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    lVar33 = *param_2;
    iVar24 = 0;
    pbVar32 = &DAT_7104742dbb;
    do {
      iVar3 = iVar16 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar33 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar27 = *(ulong *)(*(long *)(lVar33 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar27 == 0x1ec5c9c036) {
        uVar15 = puVar1[1];
        if ((int)uVar15 < 0) goto LAB_710283d4c4;
        pbVar32 = (byte *)(pcVar17 + (int)uVar15);
        goto LAB_710283d4d0;
      }
      iVar5 = iVar3 + -1;
      if (uVar27 < 0x1ec5c9c037) {
        iVar24 = iVar3 + 1;
        iVar5 = iVar16;
      }
      iVar16 = iVar5;
    } while (iVar24 <= iVar16);
    lVar33 = 0;
  }
  else {
LAB_710283d4c4:
    lVar33 = 0;
    pbVar32 = &DAT_7104742dbb;
  }
LAB_710283d4d0:
  plVar2 = (long *)(param_1 + 0xb8);
  if (*pbVar32 - 0xb < 2) {
    iVar16 = *(int *)(pbVar32 + 1);
  }
  else {
    iVar16 = 0;
  }
  FUN_7102840a60(plVar2,(long)iVar16,param_3,(byte ****)0xea65d6d39,(long ****)0xc46eb0146,
                 0xc3681f5c9,0x8a34d3a08,0x5b5f83ccd);
  uVar15 = (uint)*pbVar32;
  if ((*pbVar32 - 0xb < 2) && (0 < *(int *)(pbVar32 + 1))) {
    lVar29 = 0;
    do {
      iVar16 = (int)lVar29;
      if (iVar16 < 0) {
LAB_710283d57c:
        lVar20 = 0;
        pbVar31 = &DAT_7104742dbb;
      }
      else {
        lVar20 = 0;
        pbVar31 = &DAT_7104742dbb;
        if (uVar15 == 0xb) {
          if (*(int *)(pbVar32 + 1) <= iVar16) goto LAB_710283d57c;
          pbVar31 = pbVar32 + *(int *)(pbVar32 + (long)iVar16 * 4 + 5);
          lVar20 = lVar33;
        }
      }
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar27 = *(ulong *)(*(long *)(lVar20 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar27 == 0xa737452e1) break;
          iVar5 = iVar3 + -1;
          if (uVar27 < 0xa737452e2) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      std::string::assign((char *)(*plVar2 + lVar29 * 0x48));
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar27 = *(ulong *)(*(long *)(lVar20 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar27 == 0x113437d6b1) break;
          iVar5 = iVar3 + -1;
          if (uVar27 < 0x113437d6b2) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      std::string::assign((char *)(*plVar2 + lVar29 * 0x48 + 0x18));
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar27 = *(ulong *)(*(long *)(lVar20 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar27 == 0x11a06c0c15) break;
          iVar5 = iVar3 + -1;
          if (uVar27 < 0x11a06c0c16) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      std::string::assign((char *)(*plVar2 + lVar29 * 0x48 + 0x30));
      uVar15 = (uint)*pbVar32;
      lVar29 = lVar29 + 1;
      if (uVar15 - 0xb < 2) {
        iVar16 = *(int *)(pbVar32 + 1);
      }
      else {
        iVar16 = 0;
      }
    } while (lVar29 < iVar16);
  }
  pcVar17 = (char *)*plVar6;
  if ((*pcVar17 == '\f') && (iVar16 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    local_90 = *param_2;
    pbVar32 = &DAT_7104742dbb;
    iVar24 = 0;
    do {
      iVar3 = iVar16 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(local_90 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar27 = *(ulong *)(*(long *)(local_90 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar27 == 0x1ffe4c0e67) {
        uVar15 = puVar1[1];
        if ((int)uVar15 < 0) goto LAB_710283d878;
        pbVar32 = (byte *)(pcVar17 + (int)uVar15);
        goto LAB_710283d884;
      }
      iVar5 = iVar3 + -1;
      if (uVar27 < 0x1ffe4c0e68) {
        iVar24 = iVar3 + 1;
        iVar5 = iVar16;
      }
      iVar16 = iVar5;
    } while (iVar24 <= iVar16);
    local_90 = 0;
  }
  else {
LAB_710283d878:
    local_90 = 0;
    pbVar32 = &DAT_7104742dbb;
  }
LAB_710283d884:
  if (*pbVar32 - 0xb < 2) {
    iVar16 = *(int *)(pbVar32 + 1);
  }
  else {
    iVar16 = 0;
  }
  pbVar11 = *(byte **)(param_1 + 0xd0);
  pbVar31 = *(byte **)(param_1 + 0xd8);
  uVar25 = (ulong)iVar16;
  uVar27 = (long)pbVar31 - (long)pbVar11 >> 5;
  if (uVar27 < uVar25) {
    uVar34 = uVar25 - uVar27;
    if ((ulong)(*(long *)(param_1 + 0xe0) - (long)pbVar31 >> 5) < uVar34) {
      if (iVar16 < 0) goto LAB_7102840a4c;
      lVar33 = *(long *)(param_1 + 0xe0) - (long)pbVar11;
      if ((ulong)(lVar33 >> 5) < 0x3ffffffffffffff) {
        uVar18 = lVar33 >> 4;
        uVar21 = uVar25;
        if (uVar25 <= uVar18) {
          uVar21 = uVar18;
        }
        if (uVar21 != 0) {
          if (uVar21 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          goto LAB_710283d9b8;
        }
LAB_710283da10:
        lVar33 = 0;
      }
      else {
        uVar21 = 0x7ffffffffffffff;
LAB_710283d9b8:
        ppplVar19 = (long ***)(uVar21 * 0x20);
        if (ppplVar19 == (long ***)0x0) {
          ppplVar19 = (long ***)0x1;
        }
        lVar33 = FUN_710392e290(0x10,ppplVar19,param_3,ppppbVar8,pppplVar9,uVar12,uVar13,uVar14);
        if (lVar33 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_64 = 0;
            pppplVar7 = &local_70;
            local_70 = ppplVar19;
            uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
            if (((uVar18 & 1) != 0) &&
               (lVar33 = FUN_710392e290(0x10,ppplVar19,pppplVar7,ppppbVar8,pppplVar9,uVar12,uVar13,
                                        uVar14), lVar33 != 0)) goto LAB_710283da14;
          }
          goto LAB_710283da10;
        }
      }
LAB_710283da14:
      puVar22 = (undefined8 *)(lVar33 + uVar27 * 0x20);
      param_3 = (long ****)(uVar34 * 0x20);
      lVar29 = lVar33 + uVar21 * 0x20;
      memset(puVar22,0,(size_t)param_3);
      lVar20 = lVar33 + uVar25 * 0x20;
      if ((long)pbVar31 - (long)pbVar11 == 0) {
        *(undefined8 **)(param_1 + 0xd0) = puVar22;
        *(long *)(param_1 + 0xd8) = lVar20;
        *(long *)(param_1 + 0xe0) = lVar29;
      }
      else {
        uVar25 = ((long)pbVar31 - (long)pbVar11) - 0x20;
        pbVar30 = pbVar31;
        puVar35 = puVar22;
        if (((uint)uVar25 >> 5 & 1) == 0) {
          pbVar30 = pbVar31 + -0x20;
          uVar4 = *(undefined8 *)(pbVar31 + -0x18);
          uVar28 = *(undefined8 *)(pbVar31 + -0x10);
          puVar35 = puVar22 + -4;
          *puVar35 = *(undefined8 *)pbVar30;
          puVar22[-3] = uVar4;
          puVar22[-2] = uVar28;
          uVar37 = *(undefined4 *)(pbVar31 + -8);
          pbVar31[-0x18] = 0;
          pbVar31[-0x17] = 0;
          pbVar31[-0x16] = 0;
          pbVar31[-0x15] = 0;
          pbVar31[-0x14] = 0;
          pbVar31[-0x13] = 0;
          pbVar31[-0x12] = 0;
          pbVar31[-0x11] = 0;
          pbVar31[-0x10] = 0;
          pbVar31[-0xf] = 0;
          pbVar31[-0xe] = 0;
          pbVar31[-0xd] = 0;
          pbVar31[-0xc] = 0;
          pbVar31[-0xb] = 0;
          pbVar31[-10] = 0;
          pbVar31[-9] = 0;
          pbVar30[0] = 0;
          pbVar30[1] = 0;
          pbVar30[2] = 0;
          pbVar30[3] = 0;
          pbVar30[4] = 0;
          pbVar30[5] = 0;
          pbVar30[6] = 0;
          pbVar30[7] = 0;
          *(undefined4 *)(puVar22 + -1) = uVar37;
        }
        if (0x1f < uVar25) {
          lVar10 = 0;
          do {
            uVar4 = *(undefined8 *)(pbVar30 + lVar10 + -0x20);
            uVar28 = *(undefined8 *)(pbVar30 + lVar10 + -0x10);
            lVar26 = lVar10 + -0x40;
            *(undefined8 *)((long)puVar35 + lVar10 + -0x18) =
                 *(undefined8 *)(pbVar30 + lVar10 + -0x18);
            *(undefined8 *)((long)puVar35 + lVar10 + -0x10) = uVar28;
            *(undefined8 *)((long)puVar35 + lVar10 + -0x20) = uVar4;
            uVar37 = *(undefined4 *)(pbVar30 + lVar10 + -8);
            pbVar31 = pbVar30 + lVar10 + -0x18;
            pbVar31[0] = 0;
            pbVar31[1] = 0;
            pbVar31[2] = 0;
            pbVar31[3] = 0;
            pbVar31[4] = 0;
            pbVar31[5] = 0;
            pbVar31[6] = 0;
            pbVar31[7] = 0;
            pbVar31 = pbVar30 + lVar10 + -0x10;
            pbVar31[0] = 0;
            pbVar31[1] = 0;
            pbVar31[2] = 0;
            pbVar31[3] = 0;
            pbVar31[4] = 0;
            pbVar31[5] = 0;
            pbVar31[6] = 0;
            pbVar31[7] = 0;
            pbVar31 = pbVar30 + lVar10 + -0x20;
            pbVar31[0] = 0;
            pbVar31[1] = 0;
            pbVar31[2] = 0;
            pbVar31[3] = 0;
            pbVar31[4] = 0;
            pbVar31[5] = 0;
            pbVar31[6] = 0;
            pbVar31[7] = 0;
            *(undefined4 *)((long)puVar35 + lVar10 + -8) = uVar37;
            uVar28 = *(undefined8 *)(pbVar30 + lVar10 + -0x30);
            uVar4 = *(undefined8 *)(pbVar30 + lVar10 + -0x38);
            *(undefined8 *)((long)puVar35 + lVar10 + -0x40) =
                 *(undefined8 *)(pbVar30 + lVar10 + -0x40);
            *(undefined8 *)((long)puVar35 + lVar10 + -0x38) = uVar4;
            *(undefined8 *)((long)puVar35 + lVar10 + -0x30) = uVar28;
            pbVar31 = pbVar30 + lVar10 + -0x40;
            pbVar31[0] = 0;
            pbVar31[1] = 0;
            pbVar31[2] = 0;
            pbVar31[3] = 0;
            pbVar31[4] = 0;
            pbVar31[5] = 0;
            pbVar31[6] = 0;
            pbVar31[7] = 0;
            pbVar31 = pbVar30 + lVar10 + -0x38;
            pbVar31[0] = 0;
            pbVar31[1] = 0;
            pbVar31[2] = 0;
            pbVar31[3] = 0;
            pbVar31[4] = 0;
            pbVar31[5] = 0;
            pbVar31[6] = 0;
            pbVar31[7] = 0;
            pbVar31 = pbVar30 + lVar10 + -0x30;
            pbVar31[0] = 0;
            pbVar31[1] = 0;
            pbVar31[2] = 0;
            pbVar31[3] = 0;
            pbVar31[4] = 0;
            pbVar31[5] = 0;
            pbVar31[6] = 0;
            pbVar31[7] = 0;
            *(undefined4 *)((long)puVar35 + lVar10 + -0x28) =
                 *(undefined4 *)(pbVar30 + lVar10 + -0x28);
            lVar10 = lVar26;
          } while ((long)pbVar11 - (long)pbVar30 != lVar26);
        }
        pbVar11 = *(byte **)(param_1 + 0xd0);
        pbVar31 = *(byte **)(param_1 + 0xd8);
        *(ulong *)(param_1 + 0xd0) = lVar33 + (uVar27 + (uVar25 >> 5 ^ 0xffffffffffffffff)) * 0x20;
        *(long *)(param_1 + 0xd8) = lVar20;
        *(long *)(param_1 + 0xe0) = lVar29;
        while (pbVar30 = pbVar31, pbVar30 != pbVar11) {
          pbVar31 = pbVar30 + -0x20;
          if (((*pbVar31 & 1) != 0) && (*(ulong *)(pbVar30 + -0x10) != 0)) {
            FUN_710392eb40(*(ulong *)(pbVar30 + -0x10));
          }
        }
      }
      if (pbVar11 != (byte *)0x0) {
        FUN_710392eb40((ulong)pbVar11);
      }
    }
    else {
      uVar27 = uVar34;
      if ((uVar34 & 1) != 0) {
        pbVar31[0x10] = 0;
        pbVar31[0x11] = 0;
        pbVar31[0x12] = 0;
        pbVar31[0x13] = 0;
        pbVar31[0x14] = 0;
        pbVar31[0x15] = 0;
        pbVar31[0x16] = 0;
        pbVar31[0x17] = 0;
        pbVar31[0x18] = 0;
        pbVar31[0x19] = 0;
        pbVar31[0x1a] = 0;
        pbVar31[0x1b] = 0;
        pbVar31[0x1c] = 0;
        pbVar31[0x1d] = 0;
        pbVar31[0x1e] = 0;
        pbVar31[0x1f] = 0;
        pbVar31[0] = 0;
        pbVar31[1] = 0;
        pbVar31[2] = 0;
        pbVar31[3] = 0;
        pbVar31[4] = 0;
        pbVar31[5] = 0;
        pbVar31[6] = 0;
        pbVar31[7] = 0;
        pbVar31[8] = 0;
        pbVar31[9] = 0;
        pbVar31[10] = 0;
        pbVar31[0xb] = 0;
        pbVar31[0xc] = 0;
        pbVar31[0xd] = 0;
        pbVar31[0xe] = 0;
        pbVar31[0xf] = 0;
        pbVar31 = (byte *)(*(long *)(param_1 + 0xd8) + 0x20);
        uVar27 = uVar34 - 1;
        *(byte **)(param_1 + 0xd8) = pbVar31;
      }
      if (uVar34 != 1) {
        do {
          pbVar31[0x10] = 0;
          pbVar31[0x11] = 0;
          pbVar31[0x12] = 0;
          pbVar31[0x13] = 0;
          pbVar31[0x14] = 0;
          pbVar31[0x15] = 0;
          pbVar31[0x16] = 0;
          pbVar31[0x17] = 0;
          pbVar31[0x18] = 0;
          pbVar31[0x19] = 0;
          pbVar31[0x1a] = 0;
          pbVar31[0x1b] = 0;
          pbVar31[0x1c] = 0;
          pbVar31[0x1d] = 0;
          pbVar31[0x1e] = 0;
          pbVar31[0x1f] = 0;
          uVar27 = uVar27 - 2;
          pbVar31[0] = 0;
          pbVar31[1] = 0;
          pbVar31[2] = 0;
          pbVar31[3] = 0;
          pbVar31[4] = 0;
          pbVar31[5] = 0;
          pbVar31[6] = 0;
          pbVar31[7] = 0;
          pbVar31[8] = 0;
          pbVar31[9] = 0;
          pbVar31[10] = 0;
          pbVar31[0xb] = 0;
          pbVar31[0xc] = 0;
          pbVar31[0xd] = 0;
          pbVar31[0xe] = 0;
          pbVar31[0xf] = 0;
          lVar33 = *(long *)(param_1 + 0xd8);
          *(long *)(param_1 + 0xd8) = lVar33 + 0x20;
          *(undefined8 *)(lVar33 + 0x30) = 0;
          *(undefined8 *)(lVar33 + 0x38) = 0;
          *(undefined8 *)(lVar33 + 0x20) = 0;
          *(undefined8 *)(lVar33 + 0x28) = 0;
          pbVar31 = (byte *)(*(long *)(param_1 + 0xd8) + 0x20);
          *(byte **)(param_1 + 0xd8) = pbVar31;
        } while (uVar27 != 0);
      }
    }
  }
  else if (uVar27 != uVar25) {
    while (pbVar30 = pbVar31, pbVar11 + uVar25 * 0x20 != pbVar30) {
      pbVar31 = pbVar30 + -0x20;
      if (((*pbVar31 & 1) != 0) && (*(ulong *)(pbVar30 + -0x10) != 0)) {
        FUN_710392eb40(*(ulong *)(pbVar30 + -0x10));
      }
    }
    *(byte **)(param_1 + 0xd8) = pbVar11 + uVar25 * 0x20;
  }
  uVar15 = (uint)*pbVar32;
  if ((*pbVar32 - 0xb < 2) && (0 < *(int *)(pbVar32 + 1))) {
    lVar33 = 0;
LAB_710283db80:
    do {
      iVar16 = (int)lVar33;
      if (iVar16 < 0) {
LAB_710283dbb8:
        lVar29 = 0;
        pbVar31 = &DAT_7104742dbb;
      }
      else {
        lVar29 = 0;
        pbVar31 = &DAT_7104742dbb;
        if (uVar15 == 0xb) {
          if (*(int *)(pbVar32 + 1) <= iVar16) goto LAB_710283dbb8;
          pbVar31 = pbVar32 + *(int *)(pbVar32 + (long)iVar16 * 4 + 5);
          lVar29 = local_90;
        }
      }
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar27 = *(ulong *)(*(long *)(lVar29 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar31 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar27 == 0xc32435920) break;
          iVar5 = iVar3 + -1;
          if (uVar27 < 0xc32435921) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      std::string::assign((char *)(*(long *)(param_1 + 0xd0) + lVar33 * 0x20));
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          uVar27 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar27 == 0x613b196eb) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (uVar27 < 0x613b196ec) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      switch(*pbVar11) {
      case 1:
      case 3:
        uVar15 = (uint)pbVar11[1];
        break;
      case 2:
        uVar15 = (uint)(char)pbVar11[1];
        break;
      case 4:
        uVar15 = (uint)*(short *)(pbVar11 + 1);
        break;
      case 5:
        uVar15 = (uint)*(ushort *)(pbVar11 + 1);
        break;
      case 6:
      case 7:
        uVar15 = *(uint *)(pbVar11 + 1);
        break;
      default:
        uVar15 = 100;
      }
      lVar29 = lVar33 * 0x20;
      lVar33 = lVar33 + 1;
      *(uint *)(*(long *)(param_1 + 0xd0) + lVar29 + 0x18) = uVar15;
      uVar15 = (uint)*pbVar32;
      if (1 < uVar15 - 0xb) {
        if (-1 < lVar33) break;
        goto LAB_710283db80;
      }
    } while (lVar33 < *(int *)(pbVar32 + 1));
  }
  pcVar17 = (char *)*plVar6;
  if (*pcVar17 == '\f') {
    iVar16 = *(int *)(pcVar17 + 1) + -1;
    if (*(int *)(pcVar17 + 1) < 1) {
LAB_710283de88:
      lVar33 = 0;
      pbVar32 = &DAT_7104742dbb;
    }
    else {
      lVar33 = *param_2;
      iVar24 = 0;
      pbVar32 = &DAT_7104742dbb;
      do {
        iVar3 = iVar16 + iVar24;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar3 >> 1;
        puVar1 = (uint *)(*(long *)(lVar33 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
        uVar27 = *(ulong *)(*(long *)(lVar33 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar27 == 0x1ebda446ab) {
          uVar15 = puVar1[1];
          if ((int)uVar15 < 0) goto LAB_710283de88;
          pbVar32 = (byte *)(pcVar17 + (int)uVar15);
          goto LAB_710283de94;
        }
        iVar5 = iVar3 + -1;
        if (uVar27 < 0x1ebda446ac) {
          iVar24 = iVar3 + 1;
          iVar5 = iVar16;
        }
        iVar16 = iVar5;
      } while (iVar24 <= iVar16);
      lVar33 = 0;
    }
  }
  else {
    lVar33 = 0;
    pbVar32 = &DAT_7104742dbb;
  }
LAB_710283de94:
  if (*pbVar32 - 0xb < 2) {
    iVar16 = *(int *)(pbVar32 + 1);
  }
  else {
    iVar16 = 0;
  }
  plVar2 = (long *)(param_1 + 0xe8);
  lVar29 = *(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8) >> 2;
  uVar25 = lVar29 * -0x71c71c71c71c71c7;
  uVar27 = (ulong)iVar16;
  if (uVar25 < uVar27) {
    FUN_7102840db0(plVar2,uVar27 + lVar29 * 0x71c71c71c71c71c7,param_3,ppppbVar8,pppplVar9,uVar12,
                   uVar13,uVar14);
  }
  else if (uVar25 - uVar27 != 0) {
    *(ulong *)(param_1 + 0xf0) = *(long *)(param_1 + 0xe8) + uVar27 * 0x24;
  }
  uVar14 = 0x5b5f83ccd;
  uVar13 = 0x8a34d3a08;
  uVar12 = 0xc3681f5c9;
  pppplVar9 = (long ****)0xc46eb0146;
  ppppbVar8 = (byte ****)0xea65d6d39;
  uVar15 = (uint)*pbVar32;
  if ((*pbVar32 - 0xb < 2) && (0 < *(int *)(pbVar32 + 1))) {
    uVar37 = 0;
    lVar29 = 0;
LAB_710283dfd8:
    do {
      iVar16 = (int)lVar29;
      if (iVar16 < 0) {
LAB_710283e010:
        lVar20 = 0;
        pbVar31 = &DAT_7104742dbb;
      }
      else {
        pbVar31 = &DAT_7104742dbb;
        lVar20 = 0;
        if (uVar15 == 0xb) {
          if (*(int *)(pbVar32 + 1) <= iVar16) goto LAB_710283e010;
          pbVar31 = pbVar32 + *(int *)(pbVar32 + (long)iVar16 * 4 + 5);
          lVar20 = lVar33;
        }
      }
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0x5b5f83ccd) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0x5b5f83cce) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      switch(*pbVar11) {
      case 1:
      case 3:
        uVar15 = (uint)pbVar11[1];
        break;
      case 2:
        uVar15 = (uint)(char)pbVar11[1];
        break;
      case 4:
        uVar15 = (uint)*(short *)(pbVar11 + 1);
        break;
      case 5:
        uVar15 = (uint)*(ushort *)(pbVar11 + 1);
        break;
      case 6:
      case 7:
        uVar15 = *(uint *)(pbVar11 + 1);
        break;
      default:
        uVar15 = 0;
      }
      *(uint *)(*plVar2 + lVar29 * 0x24) = uVar15;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xc2b36e5ad) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xc2b36e5ae) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar38 = 0x3f8ccccd;
      if (*pbVar11 == 8) {
        uVar38 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 4) = uVar38;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xc46eb0146) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xc46eb0147) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar38 = 0x3f4ccccd;
      if (*pbVar11 == 8) {
        uVar38 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 8) = uVar38;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xc3681f5c9) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xc3681f5ca) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar38 = 0x3f4ccccd;
      if (*pbVar11 == 8) {
        uVar38 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 0xc) = uVar38;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xebbea7d5d) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xebbea7d5e) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar38 = uVar37;
      if (*pbVar11 == 8) {
        uVar38 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 0x10) = uVar38;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xed63799b6) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xed63799b7) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar38 = uVar37;
      if (*pbVar11 == 8) {
        uVar38 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 0x14) = uVar38;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xea65d6d39) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xea65d6d3a) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar38 = uVar37;
      if (*pbVar11 == 8) {
        uVar38 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 0x18) = uVar38;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xa2a2aad88) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xa2a2aad89) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar38 = 0x3f800000;
      if (*pbVar11 == 8) {
        uVar38 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 0x1c) = uVar38;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          uVar27 = *(ulong *)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar27 == 0x8a34d3a08) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (uVar27 < 0x8a34d3a09) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar38 = 0x3f800000;
      if (*pbVar11 == 8) {
        uVar38 = *(undefined4 *)(pbVar11 + 1);
      }
      lVar20 = lVar29 * 0x24;
      lVar29 = lVar29 + 1;
      *(undefined4 *)(*plVar2 + lVar20 + 0x20) = uVar38;
      uVar15 = (uint)*pbVar32;
      if (1 < uVar15 - 0xb) {
        if (-1 < lVar29) break;
        goto LAB_710283dfd8;
      }
    } while (lVar29 < *(int *)(pbVar32 + 1));
  }
  pcVar17 = (char *)*plVar6;
  if ((*pcVar17 == '\f') && (iVar16 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    lVar33 = *param_2;
    iVar24 = 0;
    pbVar32 = &DAT_7104742dbb;
    do {
      iVar3 = iVar16 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar33 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar27 = *(ulong *)(*(long *)(lVar33 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar27 == 0x152a9c008a) {
        uVar15 = puVar1[1];
        if ((int)uVar15 < 0) goto LAB_710283e6b4;
        pbVar32 = (byte *)(pcVar17 + (int)uVar15);
        goto LAB_710283e6c0;
      }
      iVar5 = iVar3 + -1;
      if (uVar27 < 0x152a9c008b) {
        iVar24 = iVar3 + 1;
        iVar5 = iVar16;
      }
      iVar16 = iVar5;
    } while (iVar24 <= iVar16);
    lVar33 = 0;
  }
  else {
LAB_710283e6b4:
    lVar33 = 0;
    pbVar32 = &DAT_7104742dbb;
  }
LAB_710283e6c0:
  plVar2 = (long *)(param_1 + 0x100);
  if (*pbVar32 - 0xb < 2) {
    iVar16 = *(int *)(pbVar32 + 1);
  }
  else {
    iVar16 = 0;
  }
  FUN_7102840a60(plVar2,(long)iVar16,param_3,(byte ****)0xea65d6d39,(long ****)0xc46eb0146,
                 0xc3681f5c9,0x8a34d3a08,0x5b5f83ccd);
  uVar15 = (uint)*pbVar32;
  if ((*pbVar32 - 0xb < 2) && (0 < *(int *)(pbVar32 + 1))) {
    lVar29 = 0;
    do {
      iVar16 = (int)lVar29;
      if (iVar16 < 0) {
LAB_710283e76c:
        lVar20 = 0;
        pbVar31 = &DAT_7104742dbb;
      }
      else {
        lVar20 = 0;
        pbVar31 = &DAT_7104742dbb;
        if (uVar15 == 0xb) {
          if (*(int *)(pbVar32 + 1) <= iVar16) goto LAB_710283e76c;
          pbVar31 = pbVar32 + *(int *)(pbVar32 + (long)iVar16 * 4 + 5);
          lVar20 = lVar33;
        }
      }
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar27 = *(ulong *)(*(long *)(lVar20 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar27 == 0xa737452e1) break;
          iVar5 = iVar3 + -1;
          if (uVar27 < 0xa737452e2) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      std::string::assign((char *)(*plVar2 + lVar29 * 0x48));
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar27 = *(ulong *)(*(long *)(lVar20 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar27 == 0x113437d6b1) break;
          iVar5 = iVar3 + -1;
          if (uVar27 < 0x113437d6b2) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      std::string::assign((char *)(*plVar2 + lVar29 * 0x48 + 0x18));
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar27 = *(ulong *)(*(long *)(lVar20 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar27 == 0x11a06c0c15) break;
          iVar5 = iVar3 + -1;
          if (uVar27 < 0x11a06c0c16) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      std::string::assign((char *)(*plVar2 + lVar29 * 0x48 + 0x30));
      uVar15 = (uint)*pbVar32;
      lVar29 = lVar29 + 1;
      if (uVar15 - 0xb < 2) {
        iVar16 = *(int *)(pbVar32 + 1);
      }
      else {
        iVar16 = 0;
      }
    } while (lVar29 < iVar16);
  }
  pcVar17 = (char *)*plVar6;
  if (*pcVar17 == '\f') {
    iVar16 = *(int *)(pcVar17 + 1) + -1;
    if (0 < *(int *)(pcVar17 + 1)) {
      iVar24 = 0;
      do {
        iVar3 = iVar16 + iVar24;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar3 >> 1;
        puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8
                         );
        uVar27 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar27 == 0x11f7788549) {
          uVar15 = puVar1[1];
          if ((int)uVar15 < 0) {
            pcVar17 = "";
          }
          else {
            pcVar17 = pcVar17 + (int)uVar15;
          }
          goto LAB_710283eb04;
        }
        iVar5 = iVar3 + -1;
        if (uVar27 < 0x11f778854a) {
          iVar24 = iVar3 + 1;
          iVar5 = iVar16;
        }
        iVar16 = iVar5;
      } while (iVar24 <= iVar16);
    }
    pcVar17 = "";
  }
  else {
    pcVar17 = "";
  }
LAB_710283eb04:
  switch(*pcVar17) {
  case '\x01':
  case '\x03':
    uVar15 = (uint)(byte)pcVar17[1];
    break;
  case '\x02':
    uVar15 = (uint)pcVar17[1];
    break;
  case '\x04':
    uVar15 = (uint)*(short *)(pcVar17 + 1);
    break;
  case '\x05':
    uVar15 = (uint)*(ushort *)(pcVar17 + 1);
    break;
  case '\x06':
  case '\a':
    uVar15 = *(uint *)(pcVar17 + 1);
    break;
  default:
    uVar15 = 0x820;
  }
  *(uint *)(param_1 + 0x118) = uVar15;
  pcVar17 = (char *)*plVar6;
  if ((*pcVar17 == '\f') && (iVar16 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    lVar33 = *param_2;
    iVar24 = 0;
    pbVar32 = &DAT_7104742dbb;
    do {
      iVar3 = iVar16 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar33 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar27 = *(ulong *)(*(long *)(lVar33 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar27 == 0x154b72be8e) {
        uVar15 = puVar1[1];
        if ((int)uVar15 < 0) goto LAB_710283ebf8;
        pbVar32 = (byte *)(pcVar17 + (int)uVar15);
        goto LAB_710283ec04;
      }
      iVar5 = iVar3 + -1;
      if (uVar27 < 0x154b72be8f) {
        iVar24 = iVar3 + 1;
        iVar5 = iVar16;
      }
      iVar16 = iVar5;
    } while (iVar24 <= iVar16);
    lVar33 = 0;
  }
  else {
LAB_710283ebf8:
    lVar33 = 0;
    pbVar32 = &DAT_7104742dbb;
  }
LAB_710283ec04:
  if (*pbVar32 - 0xb < 2) {
    iVar16 = *(int *)(pbVar32 + 1);
  }
  else {
    iVar16 = 0;
  }
  plVar2 = (long *)(param_1 + 0x120);
  lVar29 = *(long *)(param_1 + 0x128) - *(long *)(param_1 + 0x120) >> 2;
  uVar25 = lVar29 * -0x71c71c71c71c71c7;
  uVar27 = (ulong)iVar16;
  if (uVar25 < uVar27) {
    FUN_7102840db0(plVar2,uVar27 + lVar29 * 0x71c71c71c71c71c7,param_3,ppppbVar8,pppplVar9,uVar12,
                   uVar13,uVar14);
  }
  else if (uVar25 - uVar27 != 0) {
    *(ulong *)(param_1 + 0x128) = *(long *)(param_1 + 0x120) + uVar27 * 0x24;
  }
  uVar14 = 0x5b5f83ccd;
  uVar13 = 0x8a34d3a08;
  uVar12 = 0xc3681f5c9;
  pppplVar9 = (long ****)0xc46eb0146;
  ppppbVar8 = (byte ****)0xea65d6d39;
  uVar15 = (uint)*pbVar32;
  if ((*pbVar32 - 0xb < 2) && (0 < *(int *)(pbVar32 + 1))) {
    lVar29 = 0;
LAB_710283ed38:
    do {
      iVar16 = (int)lVar29;
      if (iVar16 < 0) {
LAB_710283ed70:
        lVar20 = 0;
        pbVar31 = &DAT_7104742dbb;
      }
      else {
        pbVar31 = &DAT_7104742dbb;
        lVar20 = 0;
        if (uVar15 == 0xb) {
          if (*(int *)(pbVar32 + 1) <= iVar16) goto LAB_710283ed70;
          pbVar31 = pbVar32 + *(int *)(pbVar32 + (long)iVar16 * 4 + 5);
          lVar20 = lVar33;
        }
      }
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0x5b5f83ccd) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0x5b5f83cce) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      switch(*pbVar11) {
      case 1:
      case 3:
        uVar15 = (uint)pbVar11[1];
        break;
      case 2:
        uVar15 = (uint)(char)pbVar11[1];
        break;
      case 4:
        uVar15 = (uint)*(short *)(pbVar11 + 1);
        break;
      case 5:
        uVar15 = (uint)*(ushort *)(pbVar11 + 1);
        break;
      case 6:
      case 7:
        uVar15 = *(uint *)(pbVar11 + 1);
        break;
      default:
        uVar15 = 0;
      }
      *(uint *)(*plVar2 + lVar29 * 0x24) = uVar15;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xc2b36e5ad) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xc2b36e5ae) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0x3f800000;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 4) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xc46eb0146) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xc46eb0147) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0x3f800000;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 8) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xc3681f5c9) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xc3681f5ca) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0x3f800000;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 0xc) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xebbea7d5d) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xebbea7d5e) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 0x10) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xed63799b6) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xed63799b7) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 0x14) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xea65d6d39) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xea65d6d3a) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 0x18) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xa2a2aad88) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xa2a2aad89) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0x3f800000;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 0x1c) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          uVar27 = *(ulong *)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar27 == 0x8a34d3a08) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (uVar27 < 0x8a34d3a09) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0x3f800000;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      lVar20 = lVar29 * 0x24;
      lVar29 = lVar29 + 1;
      *(undefined4 *)(*plVar2 + lVar20 + 0x20) = uVar37;
      uVar15 = (uint)*pbVar32;
      if (1 < uVar15 - 0xb) {
        if (-1 < lVar29) break;
        goto LAB_710283ed38;
      }
    } while (lVar29 < *(int *)(pbVar32 + 1));
  }
  pcVar17 = (char *)*plVar6;
  if ((*pcVar17 == '\f') && (iVar16 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar24 = 0;
    pcVar23 = "";
    do {
      iVar3 = iVar16 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar27 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar27 == 0x2e204aad60) {
        uVar15 = puVar1[1];
        if ((int)uVar15 < 0) goto LAB_710283f410;
        pcVar23 = pcVar17 + (int)uVar15;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar27 < 0x2e204aad61) {
        iVar24 = iVar3 + 1;
        iVar5 = iVar16;
      }
      iVar16 = iVar5;
    } while (iVar24 <= iVar16);
  }
  else {
LAB_710283f410:
    pcVar23 = "";
  }
  if (*pcVar23 == '\b') {
    uVar37 = *(undefined4 *)(pcVar23 + 1);
  }
  else {
    uVar37 = 0x44458000;
  }
  *(undefined4 *)(param_1 + 0x138) = uVar37;
  pcVar17 = (char *)*plVar6;
  if ((*pcVar17 == '\f') && (iVar16 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar24 = 0;
    pcVar23 = "";
    do {
      iVar3 = iVar16 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar27 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar27 == 0x33f413cad7) {
        uVar15 = puVar1[1];
        if ((int)uVar15 < 0) goto LAB_710283f4d4;
        pcVar23 = pcVar17 + (int)uVar15;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar27 < 0x33f413cad8) {
        iVar24 = iVar3 + 1;
        iVar5 = iVar16;
      }
      iVar16 = iVar5;
    } while (iVar24 <= iVar16);
  }
  else {
LAB_710283f4d4:
    pcVar23 = "";
  }
  if (*pcVar23 == '\b') {
    uVar37 = *(undefined4 *)(pcVar23 + 1);
  }
  else {
    uVar37 = 0x44480000;
  }
  *(undefined4 *)(param_1 + 0x13c) = uVar37;
  pcVar17 = (char *)*plVar6;
  if ((*pcVar17 == '\f') && (iVar16 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    lVar33 = *param_2;
    iVar24 = 0;
    pbVar32 = &DAT_7104742dbb;
    do {
      iVar3 = iVar16 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar33 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar27 = *(ulong *)(*(long *)(lVar33 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar27 == 0x1fbd98415f) {
        uVar15 = puVar1[1];
        if ((int)uVar15 < 0) goto LAB_710283f59c;
        pbVar32 = (byte *)(pcVar17 + (int)uVar15);
        goto LAB_710283f5a8;
      }
      iVar5 = iVar3 + -1;
      if (uVar27 < 0x1fbd984160) {
        iVar24 = iVar3 + 1;
        iVar5 = iVar16;
      }
      iVar16 = iVar5;
    } while (iVar24 <= iVar16);
    lVar33 = 0;
  }
  else {
LAB_710283f59c:
    lVar33 = 0;
    pbVar32 = &DAT_7104742dbb;
  }
LAB_710283f5a8:
  plVar2 = (long *)(param_1 + 0x140);
  if (*pbVar32 - 0xb < 2) {
    iVar16 = *(int *)(pbVar32 + 1);
  }
  else {
    iVar16 = 0;
  }
  FUN_7102840a60(plVar2,(long)iVar16,param_3,(byte ****)0xea65d6d39,(long ****)0xc46eb0146,
                 0xc3681f5c9,0x8a34d3a08,0x5b5f83ccd);
  uVar15 = (uint)*pbVar32;
  if ((*pbVar32 - 0xb < 2) && (0 < *(int *)(pbVar32 + 1))) {
    lVar29 = 0;
    do {
      iVar16 = (int)lVar29;
      if (iVar16 < 0) {
LAB_710283f654:
        lVar20 = 0;
        pbVar31 = &DAT_7104742dbb;
      }
      else {
        lVar20 = 0;
        pbVar31 = &DAT_7104742dbb;
        if (uVar15 == 0xb) {
          if (*(int *)(pbVar32 + 1) <= iVar16) goto LAB_710283f654;
          pbVar31 = pbVar32 + *(int *)(pbVar32 + (long)iVar16 * 4 + 5);
          lVar20 = lVar33;
        }
      }
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar27 = *(ulong *)(*(long *)(lVar20 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar27 == 0xa737452e1) break;
          iVar5 = iVar3 + -1;
          if (uVar27 < 0xa737452e2) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      std::string::assign((char *)(*plVar2 + lVar29 * 0x48));
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar27 = *(ulong *)(*(long *)(lVar20 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar27 == 0x113437d6b1) break;
          iVar5 = iVar3 + -1;
          if (uVar27 < 0x113437d6b2) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      std::string::assign((char *)(*plVar2 + lVar29 * 0x48 + 0x18));
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar27 = *(ulong *)(*(long *)(lVar20 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar27 == 0x11a06c0c15) break;
          iVar5 = iVar3 + -1;
          if (uVar27 < 0x11a06c0c16) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      std::string::assign((char *)(*plVar2 + lVar29 * 0x48 + 0x30));
      uVar15 = (uint)*pbVar32;
      lVar29 = lVar29 + 1;
      if (uVar15 - 0xb < 2) {
        iVar16 = *(int *)(pbVar32 + 1);
      }
      else {
        iVar16 = 0;
      }
    } while (lVar29 < iVar16);
  }
  pcVar17 = (char *)*plVar6;
  if (*pcVar17 == '\f') {
    iVar16 = *(int *)(pcVar17 + 1) + -1;
    if (*(int *)(pcVar17 + 1) < 1) {
LAB_710283f98c:
      lVar33 = 0;
      pbVar32 = &DAT_7104742dbb;
    }
    else {
      lVar33 = *param_2;
      iVar24 = 0;
      pbVar32 = &DAT_7104742dbb;
      do {
        iVar3 = iVar16 + iVar24;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar3 >> 1;
        puVar1 = (uint *)(*(long *)(lVar33 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
        uVar27 = *(ulong *)(*(long *)(lVar33 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar27 == 0x1fca89fb0b) {
          uVar15 = puVar1[1];
          if ((int)uVar15 < 0) goto LAB_710283f98c;
          pbVar32 = (byte *)(pcVar17 + (int)uVar15);
          goto LAB_710283f998;
        }
        iVar5 = iVar3 + -1;
        if (uVar27 < 0x1fca89fb0c) {
          iVar24 = iVar3 + 1;
          iVar5 = iVar16;
        }
        iVar16 = iVar5;
      } while (iVar24 <= iVar16);
      lVar33 = 0;
    }
  }
  else {
    lVar33 = 0;
    pbVar32 = &DAT_7104742dbb;
  }
LAB_710283f998:
  if (*pbVar32 - 0xb < 2) {
    iVar16 = *(int *)(pbVar32 + 1);
  }
  else {
    iVar16 = 0;
  }
  plVar2 = (long *)(param_1 + 0x158);
  lVar29 = *(long *)(param_1 + 0x160) - *(long *)(param_1 + 0x158) >> 2;
  uVar25 = lVar29 * -0x71c71c71c71c71c7;
  uVar27 = (ulong)iVar16;
  if (uVar25 < uVar27) {
    FUN_7102840db0(plVar2,uVar27 + lVar29 * 0x71c71c71c71c71c7,param_3,ppppbVar8,pppplVar9,uVar12,
                   uVar13,uVar14);
  }
  else if (uVar25 - uVar27 != 0) {
    *(ulong *)(param_1 + 0x160) = *(long *)(param_1 + 0x158) + uVar27 * 0x24;
  }
  uVar12 = 0xc3681f5c9;
  pppplVar9 = (long ****)0xc46eb0146;
  ppppbVar8 = (byte ****)0xea65d6d39;
  uVar15 = (uint)*pbVar32;
  if ((*pbVar32 - 0xb < 2) && (0 < *(int *)(pbVar32 + 1))) {
    lVar29 = 0;
LAB_710283faa4:
    do {
      iVar16 = (int)lVar29;
      if (iVar16 < 0) {
LAB_710283fadc:
        lVar20 = 0;
        pbVar31 = &DAT_7104742dbb;
      }
      else {
        pbVar31 = &DAT_7104742dbb;
        lVar20 = 0;
        if (uVar15 == 0xb) {
          if (*(int *)(pbVar32 + 1) <= iVar16) goto LAB_710283fadc;
          pbVar31 = pbVar32 + *(int *)(pbVar32 + (long)iVar16 * 4 + 5);
          lVar20 = lVar33;
        }
      }
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        uVar13 = 0x5b5f83ccd;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0x5b5f83ccd) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0x5b5f83cce) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      switch(*pbVar11) {
      case 1:
      case 3:
        uVar15 = (uint)pbVar11[1];
        break;
      case 2:
        uVar15 = (uint)(char)pbVar11[1];
        break;
      case 4:
        uVar15 = (uint)*(short *)(pbVar11 + 1);
        break;
      case 5:
        uVar15 = (uint)*(ushort *)(pbVar11 + 1);
        break;
      case 6:
      case 7:
        uVar15 = *(uint *)(pbVar11 + 1);
        break;
      default:
        uVar15 = 0;
      }
      *(uint *)(*plVar2 + lVar29 * 0x24) = uVar15;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xc2b36e5ad) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xc2b36e5ae) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0x3f000000;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 4) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xc46eb0146) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xc46eb0147) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0x3f000000;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 8) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xc3681f5c9) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xc3681f5ca) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0x3f000000;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 0xc) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xebbea7d5d) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xebbea7d5e) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 0x10) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xed63799b6) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xed63799b7) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 0x14) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xea65d6d39) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xea65d6d3a) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 0x18) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        uVar13 = 0xa2a2aad88;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xa2a2aad88) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (param_3 < (long ****)0xa2a2aad89) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0x3f800000;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x24 + 0x1c) = uVar37;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        param_3 = (long ****)0x8a34d3a08;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          uVar27 = *(ulong *)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar27 == 0x8a34d3a08) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (uVar27 < 0x8a34d3a09) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar37 = 0x3f800000;
      if (*pbVar11 == 8) {
        uVar37 = *(undefined4 *)(pbVar11 + 1);
      }
      lVar20 = lVar29 * 0x24;
      lVar29 = lVar29 + 1;
      *(undefined4 *)(*plVar2 + lVar20 + 0x20) = uVar37;
      uVar15 = (uint)*pbVar32;
      if (1 < uVar15 - 0xb) {
        if (-1 < lVar29) break;
        goto LAB_710283faa4;
      }
    } while (lVar29 < *(int *)(pbVar32 + 1));
  }
  pcVar17 = (char *)*plVar6;
  if ((*pcVar17 == '\f') && (iVar16 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    lVar33 = *param_2;
    iVar24 = 0;
    pbVar32 = &DAT_7104742dbb;
    do {
      iVar3 = iVar16 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar33 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar27 = *(ulong *)(*(long *)(lVar33 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar27 == 0xd2fca32ba) {
        uVar15 = puVar1[1];
        if ((int)uVar15 < 0) goto LAB_71028401a4;
        pbVar32 = (byte *)(pcVar17 + (int)uVar15);
        goto LAB_71028401b0;
      }
      iVar5 = iVar3 + -1;
      if (uVar27 < 0xd2fca32bb) {
        iVar24 = iVar3 + 1;
        iVar5 = iVar16;
      }
      iVar16 = iVar5;
    } while (iVar24 <= iVar16);
    lVar33 = 0;
  }
  else {
LAB_71028401a4:
    lVar33 = 0;
    pbVar32 = &DAT_7104742dbb;
  }
LAB_71028401b0:
  if (*pbVar32 - 0xb < 2) {
    iVar16 = *(int *)(pbVar32 + 1);
  }
  else {
    iVar16 = 0;
  }
  uVar27 = (ulong)iVar16;
  plVar2 = (long *)(param_1 + 0x170);
  __src = *(void **)(param_1 + 0x170);
  puVar22 = *(undefined8 **)(param_1 + 0x178);
  __n = (long)puVar22 - (long)__src;
  lVar29 = (long)__n >> 3;
  if (uVar27 <= (ulong)(lVar29 * -0x3333333333333333)) {
    if (lVar29 * -0x3333333333333333 - uVar27 != 0) {
      *(void **)(param_1 + 0x178) = (void *)((long)__src + uVar27 * 0x28);
    }
    goto LAB_71028403e0;
  }
  uVar25 = uVar27 + lVar29 * 0x3333333333333333;
  if (uVar25 <= (ulong)((*(long *)(param_1 + 0x180) - (long)puVar22 >> 3) * -0x3333333333333333)) {
    uVar27 = uVar25;
    if ((uVar25 & 1) != 0) {
      puVar22[3] = 0;
      puVar22[4] = 0;
      *puVar22 = 0;
      puVar22[1] = 0;
      puVar22[2] = 0;
      puVar22 = (undefined8 *)(*(long *)(param_1 + 0x178) + 0x28);
      *(undefined8 **)(param_1 + 0x178) = puVar22;
      uVar27 = uVar25 - 1;
    }
    if (uVar25 != 1) {
      do {
        puVar22[3] = 0;
        puVar22[4] = 0;
        uVar27 = uVar27 - 2;
        puVar22[1] = 0;
        puVar22[2] = 0;
        *puVar22 = 0;
        lVar29 = *(long *)(param_1 + 0x178);
        *(long *)(param_1 + 0x178) = lVar29 + 0x28;
        *(undefined8 *)(lVar29 + 0x40) = 0;
        *(undefined8 *)(lVar29 + 0x48) = 0;
        *(undefined8 *)(lVar29 + 0x28) = 0;
        *(undefined8 *)(lVar29 + 0x30) = 0;
        *(undefined8 *)(lVar29 + 0x38) = 0;
        puVar22 = (undefined8 *)(*(long *)(param_1 + 0x178) + 0x28);
        *(undefined8 **)(param_1 + 0x178) = puVar22;
      } while (uVar27 != 0);
    }
    goto LAB_71028403e0;
  }
  if (iVar16 < 0) {
LAB_7102840a4c:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar20 = *(long *)(param_1 + 0x180) - (long)__src >> 3;
  if ((ulong)(lVar20 * -0x3333333333333333) < 0x333333333333333) {
    uVar21 = lVar20 * -0x6666666666666666;
    uVar34 = uVar27;
    if (uVar27 <= uVar21) {
      uVar34 = uVar21;
    }
    if (uVar34 != 0) goto LAB_71028402ec;
    lVar20 = 0;
  }
  else {
    uVar34 = 0x666666666666666;
LAB_71028402ec:
    ppplVar19 = (long ***)(uVar34 * 0x28);
    if (ppplVar19 == (long ***)0x0) {
      ppplVar19 = (long ***)0x1;
    }
    lVar20 = FUN_710392e290(0x10,ppplVar19,param_3,(byte ****)0xea65d6d39,(long ****)0xc46eb0146,
                            0xc3681f5c9,uVar13,uVar14);
    if (lVar20 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        pppplVar7 = &local_70;
        local_70 = ppplVar19;
        uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar21 & 1) != 0) &&
           (lVar20 = FUN_710392e290(0x10,ppplVar19,pppplVar7,ppppbVar8,pppplVar9,uVar12,uVar13,
                                    uVar14), lVar20 != 0)) goto LAB_710284035c;
      }
      lVar20 = 0;
    }
  }
LAB_710284035c:
  pvVar36 = (void *)(lVar20 + lVar29 * 8);
  memset(pvVar36,0,uVar25 * 0x28);
  lVar29 = SUB168(SEXT816((long)__n) * SEXT816(-0x6666666666666667),8);
  pvVar36 = (void *)((long)pvVar36 + ((lVar29 >> 4) - (lVar29 >> 0x3f)) * 0x28);
  if (0 < (long)__n) {
    memcpy(pvVar36,__src,__n);
  }
  *(void **)(param_1 + 0x170) = pvVar36;
  *(ulong *)(param_1 + 0x178) = lVar20 + uVar27 * 0x28;
  *(ulong *)(param_1 + 0x180) = lVar20 + uVar34 * 0x28;
  if (__src != (void *)0x0) {
    FUN_710392eb40((ulong)__src);
  }
LAB_71028403e0:
  uVar15 = (uint)*pbVar32;
  if ((*pbVar32 - 0xb < 2) && (0 < *(int *)(pbVar32 + 1))) {
    lVar29 = 0;
LAB_7102840468:
    do {
      iVar16 = (int)lVar29;
      if (iVar16 < 0) {
LAB_71028404a0:
        lVar20 = 0;
        pbVar31 = &DAT_7104742dbb;
      }
      else {
        pbVar31 = &DAT_7104742dbb;
        lVar20 = 0;
        if (uVar15 == 0xb) {
          if (*(int *)(pbVar32 + 1) <= iVar16) goto LAB_71028404a0;
          pbVar31 = pbVar32 + *(int *)(pbVar32 + (long)iVar16 * 4 + 5);
          lVar20 = lVar33;
        }
      }
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          uVar27 = *(ulong *)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar27 == 0x904196431) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
              lVar10 = lVar20;
              goto LAB_7102840528;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (uVar27 < 0x904196432) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      lVar10 = 0;
      pbVar11 = &DAT_7104742dbb;
LAB_7102840528:
      if (*pbVar11 == 9) {
        uVar12 = *(undefined8 *)(*(long *)(lVar10 + 0x20) + (long)*(int *)(pbVar11 + 1) * 8);
      }
      else {
        uVar12 = 0;
      }
      *(undefined8 *)(*plVar2 + lVar29 * 0x28) = uVar12;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          uVar27 = *(ulong *)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar27 == 0xa737452e1) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
              lVar10 = lVar20;
              goto LAB_71028405d8;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (uVar27 < 0xa737452e2) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      lVar10 = 0;
      pbVar11 = &DAT_7104742dbb;
LAB_71028405d8:
      if (*pbVar11 == 9) {
        uVar12 = *(undefined8 *)(*(long *)(lVar10 + 0x20) + (long)*(int *)(pbVar11 + 1) * 8);
      }
      else {
        uVar12 = 0;
      }
      *(undefined8 *)(*plVar2 + lVar29 * 0x28 + 8) = uVar12;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          uVar27 = *(ulong *)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar27 == 0x9dbc35fca) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
              lVar10 = lVar20;
              goto LAB_7102840688;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (uVar27 < 0x9dbc35fcb) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      lVar10 = 0;
      pbVar11 = &DAT_7104742dbb;
LAB_7102840688:
      if (*pbVar11 == 9) {
        uVar12 = *(undefined8 *)(*(long *)(lVar10 + 0x20) + (long)*(int *)(pbVar11 + 1) * 8);
      }
      else {
        uVar12 = 0;
      }
      *(undefined8 *)(*plVar2 + lVar29 * 0x28 + 0x10) = uVar12;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          uVar27 = *(ulong *)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar27 == 0x15c13ae302) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (uVar27 < 0x15c13ae303) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      switch(*pbVar11) {
      case 1:
      case 3:
        uVar15 = (uint)pbVar11[1];
        break;
      case 2:
        uVar15 = (uint)(char)pbVar11[1];
        break;
      case 4:
        uVar15 = (uint)*(short *)(pbVar11 + 1);
        break;
      case 5:
        uVar15 = (uint)*(ushort *)(pbVar11 + 1);
        break;
      case 6:
      case 7:
        uVar15 = *(uint *)(pbVar11 + 1);
        break;
      default:
        uVar15 = 1;
      }
      *(bool *)(*plVar2 + lVar29 * 0x28 + 0x18) = uVar15 != 0;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          uVar27 = *(ulong *)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar27 == 0xc389fc8ab) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (uVar27 < 0xc389fc8ac) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      uVar15 = 0x4e;
      switch(*pbVar11) {
      case 1:
      case 3:
        uVar15 = (uint)pbVar11[1];
        break;
      case 2:
        uVar15 = (uint)(char)pbVar11[1];
        break;
      case 4:
        uVar15 = (uint)*(short *)(pbVar11 + 1);
        break;
      case 5:
        uVar15 = (uint)*(ushort *)(pbVar11 + 1);
        break;
      case 6:
      case 7:
        uVar15 = *(uint *)(pbVar11 + 1);
      }
      *(uint *)(*plVar2 + lVar29 * 0x28 + 0x1c) = uVar15;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar31 == 0xc) && (iVar16 = *(int *)(pbVar31 + 1) + -1, 0 < *(int *)(pbVar31 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar16 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pbVar31 + 5) + (long)iVar3 * 8
                           );
          uVar27 = *(ulong *)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar27 == 0xdbd2ff4e8) {
            uVar15 = puVar1[1];
            if (-1 < (int)uVar15) {
              pbVar11 = pbVar31 + (int)uVar15;
            }
            break;
          }
          iVar5 = iVar3 + -1;
          if (uVar27 < 0xdbd2ff4e9) {
            iVar24 = iVar3 + 1;
            iVar5 = iVar16;
          }
          iVar16 = iVar5;
        } while (iVar24 <= iVar16);
      }
      switch(*pbVar11) {
      case 1:
      case 3:
        uVar15 = (uint)pbVar11[1];
        break;
      case 2:
        uVar15 = (uint)(char)pbVar11[1];
        break;
      case 4:
        uVar15 = (uint)*(short *)(pbVar11 + 1);
        break;
      case 5:
        uVar15 = (uint)*(ushort *)(pbVar11 + 1);
        break;
      case 6:
      case 7:
        uVar15 = *(uint *)(pbVar11 + 1);
        break;
      default:
        uVar15 = 0x4e;
      }
      lVar20 = lVar29 * 0x28;
      lVar29 = lVar29 + 1;
      *(uint *)(*plVar2 + lVar20 + 0x20) = uVar15;
      uVar15 = (uint)*pbVar32;
      if (1 < uVar15 - 0xb) {
        if (-1 < lVar29) break;
        goto LAB_7102840468;
      }
    } while (lVar29 < *(int *)(pbVar32 + 1));
  }
  pcVar17 = (char *)*plVar6;
  if ((*pcVar17 == '\f') && (iVar16 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar24 = 0;
    pcVar23 = "";
    do {
      iVar3 = iVar16 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar27 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar27 == 0x2413f218d7) {
        uVar15 = puVar1[1];
        if ((int)uVar15 < 0) goto LAB_7102840a00;
        pcVar23 = pcVar17 + (int)uVar15;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar27 < 0x2413f218d8) {
        iVar24 = iVar3 + 1;
        iVar5 = iVar16;
      }
      iVar16 = iVar5;
    } while (iVar24 <= iVar16);
  }
  else {
LAB_7102840a00:
    pcVar23 = "";
  }
  if (*pcVar23 == '\b') {
    uVar37 = *(undefined4 *)(pcVar23 + 1);
  }
  else {
    uVar37 = 0x43160000;
  }
  *(undefined4 *)(param_1 + 0x188) = uVar37;
  return;
}

