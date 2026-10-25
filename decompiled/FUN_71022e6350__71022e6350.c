// addr:      71022e6350
// offset:    0x22e6350
// name:      FUN_71022e6350
// mangled:   
// signature: undefined8 __cdecl FUN_71022e6350(long param_1, int param_2)


undefined8 FUN_71022e6350(long param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  undefined2 uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int *piVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  int iVar17;
  int iVar18;
  char cVar19;
  long lVar20;
  ulong uVar21;
  undefined1 *puVar22;
  ulong uVar23;
  float fVar24;
  
  uVar11 = *(uint *)(param_1 + 0x204388);
  piVar7 = FUN_71032df050(*(long *)(DAT_710532f7b0 + 8),param_2);
  lVar20 = DAT_710532f730;
  if (uVar11 == 0) {
    lVar20 = *(long *)(DAT_710532f730 + 8);
    uVar10 = FUN_71022e46f0();
    if ((uVar10 & 1) == 0) {
      uVar9 = 0;
    }
    else {
      lVar20 = *(long *)(*(long *)(lVar20 + 0x2c8) + 8);
      pcVar16 = *(char **)(lVar20 + 0x20);
      if ((*pcVar16 == '\f') && (iVar17 = *(int *)(pcVar16 + 1) + -1, 0 < *(int *)(pcVar16 + 1))) {
        lVar20 = *(long *)(lVar20 + 0x18);
        iVar18 = 0;
        pcVar14 = "";
        do {
          iVar1 = iVar17 + iVar18;
          if (iVar1 < 0) {
            iVar1 = iVar1 + 1;
          }
          iVar1 = iVar1 >> 1;
          puVar2 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pcVar16 + 5) + (long)iVar1 * 8
                           );
          uVar10 = *(ulong *)(*(long *)(lVar20 + 0x20) + (ulong)*puVar2 * 8);
          if (uVar10 == 0x1e5dac702d) {
            uVar11 = puVar2[1];
            if ((int)uVar11 < 0) goto LAB_71022e67f8;
            pcVar14 = pcVar16 + (int)uVar11;
            break;
          }
          iVar4 = iVar1 + -1;
          if (uVar10 < 0x1e5dac702e) {
            iVar18 = iVar1 + 1;
            iVar4 = iVar17;
          }
          iVar17 = iVar4;
        } while (iVar18 <= iVar17);
      }
      else {
LAB_71022e67f8:
        pcVar14 = "";
      }
      switch(*pcVar14) {
      case '\x01':
      case '\x03':
        uVar11 = (uint)(byte)pcVar14[1];
        break;
      case '\x02':
        uVar11 = (uint)pcVar14[1];
        break;
      case '\x04':
        uVar11 = (uint)*(short *)(pcVar14 + 1);
        break;
      case '\x05':
        uVar11 = (uint)*(ushort *)(pcVar14 + 1);
        break;
      case '\x06':
      case '\a':
        uVar11 = *(uint *)(pcVar14 + 1);
        break;
      default:
        uVar11 = 0;
      }
      uVar6 = *(uint *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2c8) + 0x100);
      if (uVar11 + *(ushort *)(piVar7 + 0x2c) <= uVar6) {
        uVar6 = uVar11 + *(ushort *)(piVar7 + 0x2c);
      }
      uVar9 = 0;
      *(short *)(piVar7 + 0x2c) = (short)uVar6;
    }
  }
  else {
    uVar10 = 0;
    pcVar16 = (char *)(param_1 + 0x204404);
    do {
      if (2 < uVar10) {
LAB_71022e6898:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (DAT_710593b580 != (long *)0x0) {
        lVar12 = *DAT_710593b580;
        iVar17 = *(int *)(lVar12 + 0x7300);
        if (iVar17 == -1) {
          plVar13 = (long *)(lVar12 + 0x28);
        }
        else {
          if (*(ulong *)(lVar12 + 0x72c0) <= (ulong)(long)iVar17) goto LAB_71022e6898;
          plVar13 = (long *)(lVar12 + (long)iVar17 * 0xcc0 + 0xce8);
        }
        lVar12 = *plVar13;
        if (*(long *)(param_1 + uVar10 * 0x2041f0 + 0x204398) == lVar12) {
          uVar23 = 0;
        }
        else if (*(long *)(param_1 + uVar10 * 0x2041f0 + 0x205410) == lVar12) {
          uVar23 = 1;
        }
        else if (*(long *)(param_1 + uVar10 * 0x2041f0 + 0x206488) == lVar12) {
          uVar23 = 2;
        }
        else {
          if (*(long *)(param_1 + uVar10 * 0x2041f0 + 0x207500) != lVar12) goto LAB_71022e6730;
          uVar23 = 3;
        }
        puVar2 = (uint *)(param_1 + uVar10 * 0x2041f0 + 0x208578);
        uVar6 = *puVar2;
        if (uVar6 != 0) {
          uVar21 = 0;
          cVar19 = '\0';
          pcVar14 = pcVar16;
          do {
            if (3 < uVar21) goto LAB_71022e6898;
            cVar5 = *pcVar14;
            if (*pcVar14 <= cVar19) {
              cVar5 = cVar19;
            }
            cVar19 = cVar5;
            if ((((uVar23 != uVar21) && (pcVar14[-5] != -1)) &&
                (pcVar14[-5] != *(char *)(param_1 + uVar10 * 0x2041f0 + uVar23 * 0x1078 + 0x2043ff))
                ) && ((puVar22 = *(undefined1 **)(pcVar14 + -0x4c),
                      ((ulong)puVar22 & 0xff00000000000000) == 0xc100000000000000 &&
                      (((ulong)puVar22 & 0xffffffffff) != 0)))) {
              lVar12 = *(long *)(*(long *)(lVar20 + 8) + 0x168);
              uVar6 = FUN_71032632a0(lVar12,(ulong)puVar22);
              if ((uVar6 & 1) != 0) {
                puVar22 = FUN_71032631a0(lVar12,0x11b1ccb807);
              }
              uVar8 = FUN_7103264270(lVar12,puVar22);
              uVar6 = (uint)uVar8;
              if (0x6f < uVar6) goto LAB_71022e6898;
              *(byte *)((long)piVar7 + (ulong)(uVar6 >> 3) + 0xb7) =
                   *(byte *)((long)piVar7 + (ulong)(uVar6 >> 3) + 0xb7) |
                   (byte)(1 << (ulong)(uVar6 & 7));
              uVar6 = *puVar2;
            }
            uVar21 = uVar21 + 1;
            pcVar14 = pcVar14 + 0x1078;
          } while (uVar21 < uVar6);
          if ((cVar19 != '\0') &&
             (*(char *)(param_1 + uVar10 * 0x2041f0 + uVar23 * 0x1078 + 0x204404) == '\0')) {
            lVar12 = *(long *)(*(long *)(*(long *)(lVar20 + 8) + 0x2c8) + 8);
            pcVar15 = *(char **)(lVar12 + 0x20);
            pcVar14 = "";
            if (*pcVar15 == '\f') {
              iVar17 = *(int *)(pcVar15 + 1) + -1;
              if (0 < *(int *)(pcVar15 + 1)) {
                lVar12 = *(long *)(lVar12 + 0x18);
                iVar18 = 0;
                do {
                  iVar1 = iVar17 + iVar18;
                  if (iVar1 < 0) {
                    iVar1 = iVar1 + 1;
                  }
                  iVar1 = iVar1 >> 1;
                  puVar2 = (uint *)(*(long *)(lVar12 + 0x28) + (long)*(int *)(pcVar15 + 5) +
                                   (long)iVar1 * 8);
                  uVar21 = *(ulong *)(*(long *)(lVar12 + 0x20) + (ulong)*puVar2 * 8);
                  if (uVar21 == 0x1e187fc277) {
                    uVar6 = puVar2[1];
                    if (-1 < (int)uVar6) {
                      pcVar14 = pcVar15 + (int)uVar6;
                      goto LAB_71022e6680;
                    }
                    break;
                  }
                  iVar4 = iVar1 + -1;
                  if (uVar21 < 0x1e187fc278) {
                    iVar18 = iVar1 + 1;
                    iVar4 = iVar17;
                  }
                  iVar17 = iVar4;
                } while (iVar18 <= iVar17);
              }
              pcVar14 = "";
            }
LAB_71022e6680:
            switch(*pcVar14) {
            case '\x01':
            case '\x03':
              uVar6 = (uint)(byte)pcVar14[1];
              break;
            case '\x02':
              uVar6 = (uint)pcVar14[1];
              break;
            case '\x04':
              uVar6 = (uint)*(short *)(pcVar14 + 1);
              break;
            case '\x05':
              uVar6 = (uint)*(ushort *)(pcVar14 + 1);
              break;
            case '\x06':
            case '\a':
              uVar6 = *(uint *)(pcVar14 + 1);
              break;
            default:
              uVar6 = 0;
            }
            uVar3 = (short)uVar6;
            if ((*(ushort *)(piVar7 + 0x2d) + 1 & 0xffff) <= (uVar6 & 0xffff)) {
              uVar3 = (short)(*(ushort *)(piVar7 + 0x2d) + 1);
            }
            *(undefined2 *)(piVar7 + 0x2d) = uVar3;
          }
        }
        lVar12 = *(long *)(*(long *)(lVar20 + 8) + 0x2c8);
        fVar24 = (float)NEON_ucvtf(*(undefined4 *)
                                    (param_1 + uVar10 * 0x2041f0 + uVar23 * 0x1078 + 0x20540c));
        uVar6 = *(uint *)(lVar12 + 0x100);
        fVar24 = *(float *)(lVar12 + 0x104) * fVar24;
        iVar17 = 0;
        if (0.0 <= fVar24) {
          iVar17 = (int)fVar24;
        }
        if (iVar17 + (uint)*(ushort *)(piVar7 + 0x2c) <= uVar6) {
          uVar6 = iVar17 + (uint)*(ushort *)(piVar7 + 0x2c);
        }
        *(short *)(piVar7 + 0x2c) = (short)uVar6;
      }
LAB_71022e6730:
      uVar10 = uVar10 + 1;
      pcVar16 = pcVar16 + 0x2041f0;
    } while (uVar10 < uVar11);
    uVar9 = 1;
  }
  return uVar9;
}

