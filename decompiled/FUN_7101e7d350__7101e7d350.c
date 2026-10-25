// addr:      7101e7d350
// offset:    0x1e7d350
// name:      FUN_7101e7d350
// mangled:   
// signature: undefined __cdecl FUN_7101e7d350(long param_1)


void FUN_7101e7d350(long param_1)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  char *pcVar15;
  byte *pbVar16;
  int iVar17;
  ulong uVar18;
  int iVar19;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  uint uVar23;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    local_80 = (char *)0x635f736574617473;
    uVar23 = 0x811c9dc5;
    local_78 = 0x65736f6c;
    uVar12 = 0x73;
    local_74 = 0;
    pbVar16 = (byte *)((long)&local_80 + 1);
    do {
      uVar23 = uVar23 * 0x89 ^ uVar12;
      uVar12 = (uint)*pbVar16;
      pbVar16 = pbVar16 + 1;
    } while (uVar12 != 0);
    local_88 = CONCAT44(0xc,uVar23);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),(long)&local_80);
    lVar14 = *(long *)(param_1 + 0x18);
    pcVar15 = (char *)&local_80;
  }
  else {
    plVar22 = (long *)**(undefined8 **)(param_1 + 0x48);
    uVar7 = plVar22[1];
    bVar3 = *(byte *)(param_1 + 0x41);
    uVar21 = (ulong)bVar3;
    uVar10 = uVar7 - 1;
    uVar11 = uVar10 & uVar7;
    if (uVar11 == 0) {
      lVar14 = *plVar22;
      plVar20 = *(long **)(lVar14 + (uVar10 & uVar21) * 8);
      do {
        do {
          plVar20 = (long *)*plVar20;
        } while (plVar20[1] != uVar21);
        pbVar16 = (byte *)(plVar20 + 2);
      } while (*pbVar16 != bVar3);
    }
    else {
      uVar18 = uVar21;
      if (uVar7 <= uVar21) {
        uVar18 = 0;
        if (uVar7 != 0) {
          uVar18 = uVar21 / uVar7;
        }
        uVar18 = uVar21 - uVar18 * uVar7;
      }
      lVar14 = *plVar22;
      plVar20 = *(long **)(lVar14 + uVar18 * 8);
      do {
        do {
          plVar20 = (long *)*plVar20;
        } while (plVar20[1] != uVar21);
        pbVar16 = (byte *)(plVar20 + 2);
      } while (*pbVar16 != bVar3);
    }
    uVar18 = (ulong)(char)pbVar16[4];
    if (((long)uVar18 < 0) ||
       ((*(ulong *)((long)plVar22 + (uVar18 >> 3 & 0x1ffffffffffffff8) + 0x80) &
        1L << (uVar18 & 0x3f)) == 0)) {
      if (uVar11 == 0) {
        plVar20 = *(long **)(lVar14 + (uVar10 & uVar21) * 8);
        do {
          do {
            plVar20 = (long *)*plVar20;
          } while (plVar20[1] != uVar21);
        } while (*(byte *)(plVar20 + 2) != bVar3);
      }
      else {
        uVar11 = uVar21;
        if (uVar7 <= uVar21) {
          uVar11 = 0;
          if (uVar7 != 0) {
            uVar11 = uVar21 / uVar7;
          }
          uVar11 = uVar21 - uVar11 * uVar7;
        }
        plVar20 = *(long **)(lVar14 + uVar11 * 8);
        do {
          do {
            plVar20 = (long *)*plVar20;
          } while (plVar20[1] != uVar21);
        } while (*(byte *)(plVar20 + 2) != bVar3);
      }
      lVar14 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x228) + 8);
      pcVar15 = *(char **)(lVar14 + 0x20);
      if ((*pcVar15 == '\f') && (iVar17 = *(int *)(pcVar15 + 1) + -1, 0 < *(int *)(pcVar15 + 1))) {
        uVar11 = *(ulong *)(lVar14 + 0x48) & 0xffffffffff;
        iVar19 = 0;
        pbVar16 = &DAT_7104742dbb;
        do {
          iVar2 = iVar17 + iVar19;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(*(long *)(lVar14 + 0x18) + 0x28) + (long)*(int *)(pcVar15 + 5)
                           + (long)iVar2 * 8);
          uVar18 = *(ulong *)(*(long *)(*(long *)(lVar14 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
          if (uVar18 == uVar11) {
            uVar23 = puVar1[1];
            if ((int)uVar23 < 0) goto LAB_7101e7d708;
            pbVar16 = (byte *)(pcVar15 + (int)uVar23);
            break;
          }
          iVar5 = iVar2 + -1;
          if (uVar18 <= uVar11) {
            iVar19 = iVar2 + 1;
            iVar5 = iVar17;
          }
          iVar17 = iVar5;
        } while (iVar19 <= iVar17);
      }
      else {
LAB_7101e7d708:
        pbVar16 = &DAT_7104742dbb;
      }
      if ((*pbVar16 - 0xb < 2) && (*(uint *)((long)plVar20 + 0x18) < *(uint *)(pbVar16 + 1))) {
        FUN_710326a3e0(&local_88,lVar14,*(uint *)((long)plVar20 + 0x18));
        if ((*local_80 == '\f') &&
           (iVar17 = *(int *)(local_80 + 1) + -1, 0 < *(int *)(local_80 + 1))) {
          iVar19 = 0;
          pcVar15 = "";
          do {
            iVar2 = iVar17 + iVar19;
            if (iVar2 < 0) {
              iVar2 = iVar2 + 1;
            }
            iVar2 = iVar2 >> 1;
            puVar1 = (uint *)(*(long *)(local_88 + 0x28) + (long)*(int *)(local_80 + 5) +
                             (long)iVar2 * 8);
            uVar11 = *(ulong *)(*(long *)(local_88 + 0x20) + (ulong)*puVar1 * 8);
            if (uVar11 == 0x4182694fc) {
              uVar23 = puVar1[1];
              if ((int)uVar23 < 0) goto LAB_7101e7d7d4;
              pcVar15 = local_80 + (int)uVar23;
              break;
            }
            iVar5 = iVar2 + -1;
            if (uVar11 < 0x4182694fd) {
              iVar19 = iVar2 + 1;
              iVar5 = iVar17;
            }
            iVar17 = iVar5;
          } while (iVar19 <= iVar17);
        }
        else {
LAB_7101e7d7d4:
          pcVar15 = "";
        }
        switch(*pcVar15) {
        case '\x01':
        case '\x03':
          uVar23 = (uint)(byte)pcVar15[1];
          break;
        case '\x02':
          uVar23 = (uint)pcVar15[1];
          break;
        case '\x04':
          uVar23 = (uint)*(short *)(pcVar15 + 1);
          break;
        case '\x05':
          uVar23 = (uint)*(ushort *)(pcVar15 + 1);
          break;
        case '\x06':
        case '\a':
          uVar23 = *(uint *)(pcVar15 + 1);
          break;
        default:
          uVar23 = 0;
        }
        uVar7 = ((long *)**(undefined8 **)(param_1 + 0x48))[1];
        uVar10 = uVar7 - 1;
        plVar20 = (long *)**(undefined8 **)(param_1 + 0x48);
      }
      else {
        uVar23 = 0;
        plVar20 = plVar22;
      }
      if ((uVar10 & uVar7) == 0) {
        plVar8 = *(long **)(*plVar20 + (uVar10 & uVar21) * 8);
        do {
          do {
            plVar8 = (long *)*plVar8;
          } while (plVar8[1] != uVar21);
          pbVar16 = (byte *)(plVar8 + 2);
        } while (*pbVar16 != bVar3);
      }
      else {
        uVar11 = uVar21;
        if (uVar7 <= uVar21) {
          uVar11 = 0;
          if (uVar7 != 0) {
            uVar11 = uVar21 / uVar7;
          }
          uVar11 = uVar21 - uVar11 * uVar7;
        }
        plVar8 = *(long **)(*plVar20 + uVar11 * 8);
        do {
          do {
            plVar8 = (long *)*plVar8;
          } while (plVar8[1] != uVar21);
          pbVar16 = (byte *)(plVar8 + 2);
        } while (*pbVar16 != bVar3);
      }
      uVar11 = (ulong)(char)pbVar16[4];
      uVar12 = (int)plVar22[0x14] - *(int *)((long)plVar22 + 0xa4);
      if ((long)uVar11 < 0) {
        bVar6 = false;
      }
      else {
        bVar6 = (*(ulong *)((long)plVar20 + (uVar11 >> 3 & 0x1ffffffffffffff8) + 0x70) &
                1L << (uVar11 & 0x3f)) != 0;
      }
      uVar11 = 0;
      pcVar15 = "states_close_enable_open";
      if (!(bool)(uVar23 <= uVar12 & bVar6)) {
        pcVar15 = "states_close";
      }
      while( true ) {
        cVar4 = pcVar15[uVar11];
        if (cVar4 == '\0') break;
        *(char *)((long)&local_80 + uVar11) = cVar4;
        if (0x3e < (int)uVar11 + 1U) {
          uVar11 = (ulong)((int)uVar11 + 1);
          break;
        }
        cVar4 = (pcVar15 + uVar11)[1];
        if (cVar4 == '\0') {
          uVar11 = uVar11 + 1;
          break;
        }
        *(char *)((long)&local_80 + uVar11 + 1) = cVar4;
        uVar11 = uVar11 + 2;
      }
      uVar9 = 0x811c9dc5;
      *(undefined1 *)((long)&local_80 + (uVar11 & 0xffffffff)) = 0;
      uVar13 = (uint)(byte)local_80;
      if ((byte)local_80 != 0) {
        pbVar16 = (byte *)((long)&local_80 + 1);
        do {
          uVar9 = uVar9 * 0x89 ^ uVar13;
          uVar13 = (uint)*pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (uVar13 != 0);
      }
      local_88 = CONCAT44((int)uVar11,uVar9);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),(long)&local_80);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x18),(long)&local_80);
      lVar14 = *(long *)(param_1 + 8);
      pcVar15 = "hide_icon_caution";
      if (uVar12 < uVar23) {
        pcVar15 = "show_icon_caution";
      }
    }
    else {
      if (uVar11 == 0) {
        plVar20 = *(long **)(lVar14 + (uVar10 & uVar21) * 8);
        do {
          do {
            plVar20 = (long *)*plVar20;
          } while (plVar20[1] != uVar21);
          pbVar16 = (byte *)(plVar20 + 2);
        } while (*pbVar16 != bVar3);
      }
      else {
        uVar11 = uVar21;
        if (uVar7 <= uVar21) {
          uVar11 = 0;
          if (uVar7 != 0) {
            uVar11 = uVar21 / uVar7;
          }
          uVar11 = uVar21 - uVar11 * uVar7;
        }
        plVar20 = *(long **)(lVar14 + uVar11 * 8);
        do {
          do {
            plVar20 = (long *)*plVar20;
          } while (plVar20[1] != uVar21);
          pbVar16 = (byte *)(plVar20 + 2);
        } while (*pbVar16 != bVar3);
      }
      uVar11 = (ulong)(char)pbVar16[4];
      pcVar15 = "states_open_off";
      if ((-1 < (long)uVar11) &&
         ((*(ulong *)((long)plVar22 + (uVar11 >> 3 & 0x1ffffffffffffff8) + 0x90) &
          1L << (uVar11 & 0x3f)) != 0)) {
        pcVar15 = "states_open_on";
      }
      uVar11 = 0;
      while( true ) {
        cVar4 = pcVar15[uVar11];
        if (cVar4 == '\0') break;
        *(char *)((long)&local_80 + uVar11) = cVar4;
        if (0x3e < (int)uVar11 + 1U) {
          uVar11 = (ulong)((int)uVar11 + 1);
          break;
        }
        cVar4 = (pcVar15 + uVar11)[1];
        if (cVar4 == '\0') {
          uVar11 = uVar11 + 1;
          break;
        }
        *(char *)((long)&local_80 + uVar11 + 1) = cVar4;
        uVar11 = uVar11 + 2;
      }
      uVar23 = 0x811c9dc5;
      *(undefined1 *)((long)&local_80 + (uVar11 & 0xffffffff)) = 0;
      uVar12 = (uint)(byte)local_80;
      if ((byte)local_80 != 0) {
        pbVar16 = (byte *)((long)&local_80 + 1);
        do {
          uVar23 = uVar23 * 0x89 ^ uVar12;
          uVar12 = (uint)*pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (uVar12 != 0);
      }
      local_88 = CONCAT44((int)uVar11,uVar23);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),(long)&local_80);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x18),(long)&local_80);
      lVar14 = *(long *)(param_1 + 8);
      pcVar15 = "hide_icon_caution";
    }
  }
  FUN_7103778300(0x3f800000,lVar14,(long)pcVar15);
  return;
}

