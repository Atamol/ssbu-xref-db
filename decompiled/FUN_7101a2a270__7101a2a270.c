// addr:      7101a2a270
// offset:    0x1a2a270
// name:      FUN_7101a2a270
// mangled:   
// signature: undefined __cdecl FUN_7101a2a270(long param_1, byte param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a2a270(long param_1,byte param_2,long ****param_3,byte ****param_4,long ****param_5,
                   ulong param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  bool bVar10;
  long *plVar11;
  ushort *puVar12;
  byte ****ppppbVar13;
  int iVar14;
  ulong uVar15;
  char *pcVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  char local_f8 [64];
  undefined **local_b8;
  ulong local_b0 [8];
  
  if ((*(char *)(param_1 + 0x169) == '\0') && ((param_2 & 1) != 0)) {
    lVar20 = *(long *)(param_1 + 0x250);
    lVar22 = *(long *)(param_1 + 600);
    if (lVar20 == lVar22) {
      iVar14 = 0;
    }
    else {
      uVar17 = (ulong)((lVar22 + -0x10) - lVar20) >> 4;
      uVar2 = (int)uVar17 + 1;
      iVar14 = 0;
      lVar24 = lVar20;
      if (uVar17 != 0) {
        lVar19 = (((ulong)uVar2 & 1) - 1) - uVar17;
        do {
          plVar11 = (long *)(lVar24 + 8);
          plVar1 = (long *)(lVar24 + 0x18);
          lVar24 = lVar24 + 0x20;
          if (*(int *)(*plVar11 + 0x1f8) != 3) {
            iVar14 = iVar14 + 1;
          }
          if (*(int *)(*plVar1 + 0x1f8) != 3) {
            iVar14 = iVar14 + 1;
          }
          lVar19 = lVar19 + 2;
        } while (lVar19 != 0);
        if ((uVar2 & 1) == 0) goto joined_r0x007101a2a3d8;
      }
      if (*(int *)(*(long *)(lVar24 + 8) + 0x1f8) != 3) {
        iVar14 = iVar14 + 1;
      }
    }
joined_r0x007101a2a3d8:
    if (((ulong)param_3 & 1) == 0) {
      if (iVar14 == 2) {
        if ((lVar22 - lVar20 == 0) || ((ulong)(lVar22 - lVar20 >> 4) < 2)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        if (*(int *)(*(long *)(lVar20 + 8) + 0x1f8) != 3) {
          lVar22 = *(long *)(lVar20 + 0x18);
          if ((*(int *)(lVar22 + 0x1f8) != 3) &&
             (iVar14 = *(int *)(*(long *)(lVar20 + 8) + 0x1fc), iVar14 == *(int *)(lVar22 + 0x1fc)))
          {
            param_4 = (byte ****)(ulong)*(byte *)(lVar22 + 0x6bb);
            uVar2 = 0;
            if (iVar14 != 3) {
              uVar2 = iVar14 + 1;
            }
            param_3 = (long ****)(ulong)uVar2;
            *(uint *)(lVar22 + 0x1fc) = uVar2;
            FUN_7101a000c0(*(long *)(lVar22 + 0x5e8),*(int *)(lVar22 + 0x1f8),param_3,param_4,
                           param_5,param_6,param_7,param_8);
            if (*(int *)(lVar22 + 0x1f8) == 2) {
              if ((*(char *)(lVar22 + 0x6bd) != '\0') &&
                 (plVar11 = *(long **)(*(long *)(*(long *)(lVar22 + 0x5e8) + 0x80) + 0x10),
                 plVar11 != (long *)0x0)) {
                puVar12 = (ushort *)(lVar22 + 0x2c0);
LAB_7101a2ae20:
                param_3 = (long ****)&DAT_ffffffff;
                param_4 = (byte ****)0x1;
                FUN_71037a2270(plVar11,puVar12,0xffffffff,1);
              }
            }
            else if ((((*(int *)(lVar22 + 0x1f8) == 0) && (*(char *)(lVar22 + 0x1c4) != -1)) &&
                     (*(int *)(lVar22 + 0x394) == 0)) &&
                    (plVar11 = *(long **)(*(long *)(*(long *)(lVar22 + 0x5e8) + 0x80) + 0x10),
                    plVar11 != (long *)0x0)) {
              puVar12 = (ushort *)(lVar22 + 0x1d0);
              goto LAB_7101a2ae20;
            }
          }
        }
      }
    }
    else {
      iVar14 = *(int *)(param_1 + 0x160);
      if (iVar14 - 3U < 2) {
        for (; lVar20 != lVar22; lVar20 = lVar20 + 0x10) {
          lVar24 = *(long *)(lVar20 + 8);
          if (7 < *(uint *)(lVar24 + 0x150)) goto LAB_7101a2ae30;
          param_3 = (long ****)
                    (ulong)*(uint *)(&DAT_71044713e0 + (long)(int)*(uint *)(lVar24 + 0x150) * 4);
          param_4 = (byte ****)(ulong)*(byte *)(lVar24 + 0x6bb);
          *(uint *)(lVar24 + 0x1fc) =
               *(uint *)(&DAT_71044713e0 + (long)(int)*(uint *)(lVar24 + 0x150) * 4);
          FUN_7101a000c0(*(long *)(lVar24 + 0x5e8),*(int *)(lVar24 + 0x1f8),param_3,param_4,param_5,
                         param_6,param_7,param_8);
          if (*(int *)(lVar24 + 0x1f8) == 2) {
            if ((*(char *)(lVar24 + 0x6bd) != '\0') &&
               (plVar11 = *(long **)(*(long *)(*(long *)(lVar24 + 0x5e8) + 0x80) + 0x10),
               plVar11 != (long *)0x0)) {
              puVar12 = (ushort *)(lVar24 + 0x2c0);
LAB_7101a2a3b8:
              param_4 = (byte ****)0x1;
              param_3 = (long ****)&DAT_ffffffff;
              FUN_71037a2270(plVar11,puVar12,0xffffffff,1);
            }
          }
          else if (((*(int *)(lVar24 + 0x1f8) == 0) && (*(char *)(lVar24 + 0x1c4) != -1)) &&
                  ((*(int *)(lVar24 + 0x394) == 0 &&
                   (plVar11 = *(long **)(*(long *)(*(long *)(lVar24 + 0x5e8) + 0x80) + 0x10),
                   plVar11 != (long *)0x0)))) {
            puVar12 = (ushort *)(lVar24 + 0x1d0);
            goto LAB_7101a2a3b8;
          }
        }
      }
      else {
        iVar3 = iVar14 + 2;
        if (-1 < iVar14 + 1) {
          iVar3 = iVar14 + 1;
        }
        iVar3 = iVar3 >> 1;
        if (0 < iVar14) {
          lVar24 = 8;
          for (lVar19 = 1; lVar19 - 1U < (ulong)(lVar22 - lVar20 >> 4); lVar19 = lVar19 + 1) {
            lVar20 = *(long *)(lVar20 + lVar24);
            param_4 = (byte ****)(ulong)*(byte *)(lVar20 + 0x6bb);
            param_3 = (long ****)0x0;
            *(undefined4 *)(lVar20 + 0x1fc) = 0;
            FUN_7101a000c0(*(long *)(lVar20 + 0x5e8),*(int *)(lVar20 + 0x1f8),(long ****)0x0,param_4
                           ,param_5,param_6,param_7,param_8);
            if (*(int *)(lVar20 + 0x1f8) == 2) {
              if ((*(char *)(lVar20 + 0x6bd) != '\0') &&
                 (plVar11 = *(long **)(*(long *)(*(long *)(lVar20 + 0x5e8) + 0x80) + 0x10),
                 plVar11 != (long *)0x0)) {
                puVar12 = (ushort *)(lVar20 + 0x2c0);
LAB_7101a2a53c:
                param_4 = (byte ****)0x1;
                param_3 = (long ****)&DAT_ffffffff;
                FUN_71037a2270(plVar11,puVar12,0xffffffff,1);
              }
            }
            else if ((((*(int *)(lVar20 + 0x1f8) == 0) && (*(char *)(lVar20 + 0x1c4) != -1)) &&
                     (*(int *)(lVar20 + 0x394) == 0)) &&
                    (plVar11 = *(long **)(*(long *)(*(long *)(lVar20 + 0x5e8) + 0x80) + 0x10),
                    plVar11 != (long *)0x0)) {
              puVar12 = (ushort *)(lVar20 + 0x1d0);
              goto LAB_7101a2a53c;
            }
            if (iVar3 <= lVar19) {
              iVar14 = *(int *)(param_1 + 0x160);
              goto LAB_7101a2a554;
            }
            lVar22 = *(long *)(param_1 + 600);
            lVar20 = *(long *)(param_1 + 0x250);
            lVar24 = lVar24 + 0x10;
          }
          goto LAB_7101a2ae3c;
        }
LAB_7101a2a554:
        if (iVar3 < iVar14) {
          uVar17 = (ulong)iVar3;
          uVar18 = uVar17 << 4 | 8;
          do {
            if ((ulong)(*(long *)(param_1 + 600) - *(long *)(param_1 + 0x250) >> 4) <= uVar17)
            goto LAB_7101a2ae3c;
            lVar20 = *(long *)(*(long *)(param_1 + 0x250) + uVar18);
            param_4 = (byte ****)(ulong)*(byte *)(lVar20 + 0x6bb);
            param_3 = (long ****)0x1;
            *(undefined4 *)(lVar20 + 0x1fc) = 1;
            FUN_7101a000c0(*(long *)(lVar20 + 0x5e8),*(int *)(lVar20 + 0x1f8),(long ****)0x1,param_4
                           ,param_5,param_6,param_7,param_8);
            if (*(int *)(lVar20 + 0x1f8) == 2) {
              if ((*(char *)(lVar20 + 0x6bd) != '\0') &&
                 (plVar11 = *(long **)(*(long *)(*(long *)(lVar20 + 0x5e8) + 0x80) + 0x10),
                 plVar11 != (long *)0x0)) {
                puVar12 = (ushort *)(lVar20 + 0x2c0);
LAB_7101a2a5fc:
                param_4 = (byte ****)0x1;
                param_3 = (long ****)&DAT_ffffffff;
                FUN_71037a2270(plVar11,puVar12,0xffffffff,1);
              }
            }
            else if (((*(int *)(lVar20 + 0x1f8) == 0) && (*(char *)(lVar20 + 0x1c4) != -1)) &&
                    ((*(int *)(lVar20 + 0x394) == 0 &&
                     (plVar11 = *(long **)(*(long *)(*(long *)(lVar20 + 0x5e8) + 0x80) + 0x10),
                     plVar11 != (long *)0x0)))) {
              puVar12 = (ushort *)(lVar20 + 0x1d0);
              goto LAB_7101a2a5fc;
            }
            iVar14 = *(int *)(param_1 + 0x160);
            uVar17 = uVar17 + 1;
            uVar18 = uVar18 + 0x10;
          } while ((long)uVar17 < (long)iVar14);
        }
        lVar20 = *(long *)(param_1 + 0x250);
        uVar17 = *(long *)(param_1 + 600) - lVar20 >> 4;
        if (iVar14 < (int)uVar17) {
          uVar18 = (ulong)iVar14;
          uVar23 = uVar18 << 4 | 8;
          do {
            if (uVar17 <= uVar18) goto LAB_7101a2ae3c;
            lVar20 = *(long *)(lVar20 + uVar23);
            bVar10 = (*(byte *)(lVar20 + 0x150) & 1) != 0;
            if (bVar10) {
              iVar14 = *(int *)(lVar20 + 0x1f8);
              bVar7 = *(byte *)(lVar20 + 0x6bb);
              lVar22 = *(long *)(lVar20 + 0x5e8);
              *(undefined4 *)(lVar20 + 0x1fc) = 1;
            }
            else {
              iVar14 = *(int *)(lVar20 + 0x1f8);
              bVar7 = *(byte *)(lVar20 + 0x6bb);
              lVar22 = *(long *)(lVar20 + 0x5e8);
              *(undefined4 *)(lVar20 + 0x1fc) = 0;
            }
            param_3 = (long ****)(ulong)bVar10;
            param_4 = (byte ****)(ulong)bVar7;
            FUN_7101a000c0(lVar22,iVar14,param_3,param_4,param_5,param_6,param_7,param_8);
            if (*(int *)(lVar20 + 0x1f8) == 2) {
              if ((*(char *)(lVar20 + 0x6bd) != '\0') &&
                 (plVar11 = *(long **)(*(long *)(*(long *)(lVar20 + 0x5e8) + 0x80) + 0x10),
                 plVar11 != (long *)0x0)) {
                puVar12 = (ushort *)(lVar20 + 0x2c0);
LAB_7101a2a6e4:
                param_4 = (byte ****)0x1;
                param_3 = (long ****)&DAT_ffffffff;
                FUN_71037a2270(plVar11,puVar12,0xffffffff,1);
              }
            }
            else if ((((*(int *)(lVar20 + 0x1f8) == 0) && (*(char *)(lVar20 + 0x1c4) != -1)) &&
                     (*(int *)(lVar20 + 0x394) == 0)) &&
                    (plVar11 = *(long **)(*(long *)(*(long *)(lVar20 + 0x5e8) + 0x80) + 0x10),
                    plVar11 != (long *)0x0)) {
              puVar12 = (ushort *)(lVar20 + 0x1d0);
              goto LAB_7101a2a6e4;
            }
            lVar20 = *(long *)(param_1 + 0x250);
            uVar15 = *(long *)(param_1 + 600) - lVar20;
            uVar18 = uVar18 + 1;
            uVar23 = uVar23 + 0x10;
            uVar17 = (long)uVar15 >> 4;
          } while ((long)uVar18 < (long)(int)(uVar15 >> 4));
        }
      }
    }
  }
  *(byte *)(param_1 + 0x169) = param_2 & 1;
  bVar10 = (param_2 & 1) == 0;
  pcVar16 = "mel_chara_select_suddendeath_team";
  if (bVar10) {
    pcVar16 = "mel_chara_select_suddendeath_normal";
  }
  pcVar5 = "mel_chara_select_melee_team";
  if (bVar10) {
    pcVar5 = "mel_chara_select_melee_normal";
  }
  pcVar4 = "mel_chara_select_various_team";
  if ((param_2 & 1) == 0) {
    pcVar4 = "mel_chara_select_various_normal";
  }
  if (*(int *)(param_1 + 0x16c) == 3) {
    pcVar5 = pcVar4;
  }
  uVar17 = 0;
  if (*(int *)(param_1 + 0x16c) != 4) {
    pcVar16 = pcVar5;
  }
  while( true ) {
    cVar8 = pcVar16[uVar17];
    if (cVar8 == '\0') break;
    local_f8[uVar17] = cVar8;
    if (0x3e < (int)uVar17 + 1U) {
      uVar17 = (ulong)((int)uVar17 + 1);
      break;
    }
    cVar8 = (pcVar16 + uVar17)[1];
    if (cVar8 == '\0') {
      uVar17 = uVar17 + 1;
      break;
    }
    local_f8[uVar17 + 1] = cVar8;
    uVar17 = uVar17 + 2;
  }
  local_f8[uVar17 & 0xffffffff] = '\0';
  if (local_f8[0] != '\0') {
    pcVar16 = local_f8;
    do {
      pcVar16 = pcVar16 + 1;
    } while (*pcVar16 != '\0');
  }
  if (*(char *)(param_1 + 0xf82) == '\0') {
    FUN_7103776910(&local_b8,**(long **)(param_1 + 0x198) + 8,(long ****)"set_txt_title_00",param_3,
                   param_4,param_5,param_6,param_7,param_8);
    FUN_710377a120((long)&local_b8,local_f8,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar17 = local_b0[0];
    local_b8 = &PTR_FUN_710523d9a8;
    local_b0[0] = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
  }
  else {
    FUN_710377a120(param_1 + 0xe50,local_f8,param_3,param_4,param_5,param_6,param_7,param_8);
    if ((*(int *)(param_1 + 0x16c) == 0x15) ||
       (bVar10 = *(char *)(param_1 + 0x169) != '\0', *(int *)(param_1 + 0x16c) == 0x16)) {
      bVar10 = false;
    }
    lVar20 = *(long *)(*(long *)(param_1 + 0xe18) + 0x1b8);
    if (lVar20 != 0) {
      lVar22 = *(long *)(param_1 + 0xe18) + 0x1b8;
      lVar24 = lVar22;
      do {
        if (4 < *(int *)(lVar20 + 0x20)) {
          lVar24 = lVar20;
        }
        lVar20 = *(long *)(lVar20 + (ulong)(*(int *)(lVar20 + 0x20) < 5) * 8);
      } while (lVar20 != 0);
      if (((lVar24 != lVar22) && (*(int *)(lVar24 + 0x20) < 6)) &&
         (plVar11 = *(long **)(lVar24 + 0x28), plVar11 != (long *)0x0)) {
        (**(code **)(*plVar11 + 0x1f8))(plVar11,bVar10);
        (**(code **)(*plVar11 + 0x388))(plVar11,bVar10 ^ 1,0);
      }
    }
  }
  plVar11 = *(long **)(param_1 + 0xdd0);
  *(undefined1 *)((long)plVar11 + 0x255) = *(undefined1 *)(param_1 + 0x169);
  if (*(uint *)(plVar11 + 0x1c) != 0xffffffff) {
    FUN_71019f08a0((uint *)&local_b8,(long)plVar11,(ulong)*(uint *)(plVar11 + 0x1c),param_4,param_5,
                   param_6,param_7,param_8);
    uVar18 = (plVar11[1] - *plVar11 >> 4) * 0x2e8ba2e8ba2e8ba3;
    uVar17 = (ulong)(int)plVar11[0x1c];
    if (uVar18 < uVar17 || uVar18 - uVar17 == 0) goto LAB_7101a2ae3c;
    FUN_7103778300(0x3f800000,*(long *)(*plVar11 + uVar17 * 0xb0 + 0x20),(long)local_b0);
  }
  if (*(uint *)(plVar11 + 0x1f) != 0xffffffff) {
    FUN_71019f08a0((uint *)&local_b8,(long)plVar11,(ulong)*(uint *)(plVar11 + 0x1f),param_4,param_5,
                   param_6,param_7,param_8);
    uVar18 = (plVar11[1] - *plVar11 >> 4) * 0x2e8ba2e8ba2e8ba3;
    uVar17 = (ulong)(int)plVar11[0x1f];
    if (uVar18 < uVar17 || uVar18 - uVar17 == 0) goto LAB_7101a2ae3c;
    FUN_7103778300(0x3f800000,*(long *)(*plVar11 + uVar17 * 0xb0 + 0x20),(long)local_b0);
  }
  if (*(uint *)(plVar11 + 0x22) != 0xffffffff) {
    FUN_71019f08a0((uint *)&local_b8,(long)plVar11,(ulong)*(uint *)(plVar11 + 0x22),param_4,param_5,
                   param_6,param_7,param_8);
    uVar18 = (plVar11[1] - *plVar11 >> 4) * 0x2e8ba2e8ba2e8ba3;
    uVar17 = (ulong)(int)plVar11[0x22];
    if (uVar18 < uVar17 || uVar18 - uVar17 == 0) goto LAB_7101a2ae3c;
    FUN_7103778300(0x3f800000,*(long *)(*plVar11 + uVar17 * 0xb0 + 0x20),(long)local_b0);
  }
  if (*(uint *)(plVar11 + 0x25) != 0xffffffff) {
    FUN_71019f08a0((uint *)&local_b8,(long)plVar11,(ulong)*(uint *)(plVar11 + 0x25),param_4,param_5,
                   param_6,param_7,param_8);
    uVar18 = (plVar11[1] - *plVar11 >> 4) * 0x2e8ba2e8ba2e8ba3;
    uVar17 = (ulong)(int)plVar11[0x25];
    if (uVar18 < uVar17 || uVar18 - uVar17 == 0) goto LAB_7101a2ae3c;
    FUN_7103778300(0x3f800000,*(long *)(*plVar11 + uVar17 * 0xb0 + 0x20),(long)local_b0);
  }
  if (*(uint *)(plVar11 + 0x28) != 0xffffffff) {
    FUN_71019f08a0((uint *)&local_b8,(long)plVar11,(ulong)*(uint *)(plVar11 + 0x28),param_4,param_5,
                   param_6,param_7,param_8);
    uVar18 = (plVar11[1] - *plVar11 >> 4) * 0x2e8ba2e8ba2e8ba3;
    uVar17 = (ulong)(int)plVar11[0x28];
    if (uVar18 < uVar17 || uVar18 - uVar17 == 0) goto LAB_7101a2ae3c;
    FUN_7103778300(0x3f800000,*(long *)(*plVar11 + uVar17 * 0xb0 + 0x20),(long)local_b0);
  }
  if (*(uint *)(plVar11 + 0x2b) != 0xffffffff) {
    FUN_71019f08a0((uint *)&local_b8,(long)plVar11,(ulong)*(uint *)(plVar11 + 0x2b),param_4,param_5,
                   param_6,param_7,param_8);
    uVar18 = (plVar11[1] - *plVar11 >> 4) * 0x2e8ba2e8ba2e8ba3;
    uVar17 = (ulong)(int)plVar11[0x2b];
    if (uVar18 < uVar17 || uVar18 - uVar17 == 0) goto LAB_7101a2ae3c;
    FUN_7103778300(0x3f800000,*(long *)(*plVar11 + uVar17 * 0xb0 + 0x20),(long)local_b0);
  }
  if (*(uint *)(plVar11 + 0x2e) != 0xffffffff) {
    FUN_71019f08a0((uint *)&local_b8,(long)plVar11,(ulong)*(uint *)(plVar11 + 0x2e),param_4,param_5,
                   param_6,param_7,param_8);
    uVar18 = (plVar11[1] - *plVar11 >> 4) * 0x2e8ba2e8ba2e8ba3;
    uVar17 = (ulong)(int)plVar11[0x2e];
    if (uVar18 < uVar17 || uVar18 - uVar17 == 0) goto LAB_7101a2ae3c;
    FUN_7103778300(0x3f800000,*(long *)(*plVar11 + uVar17 * 0xb0 + 0x20),(long)local_b0);
  }
  if (*(uint *)(plVar11 + 0x31) != 0xffffffff) {
    FUN_71019f08a0((uint *)&local_b8,(long)plVar11,(ulong)*(uint *)(plVar11 + 0x31),param_4,param_5,
                   param_6,param_7,param_8);
    uVar18 = (plVar11[1] - *plVar11 >> 4) * 0x2e8ba2e8ba2e8ba3;
    uVar17 = (ulong)(int)plVar11[0x31];
    if (uVar18 < uVar17 || uVar18 - uVar17 == 0) {
LAB_7101a2ae3c:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    FUN_7103778300(0x3f800000,*(long *)(*plVar11 + uVar17 * 0xb0 + 0x20),(long)local_b0);
  }
  lVar20 = *(long *)(param_1 + 0x250);
  lVar22 = *(long *)(param_1 + 600);
  if (lVar20 != lVar22) {
    do {
      lVar24 = *(long *)(lVar20 + 8);
      ppppbVar13 = (byte ****)(ulong)*(byte *)(param_1 + 0x169);
      *(byte *)(lVar24 + 0x6bb) = *(byte *)(param_1 + 0x169);
      FUN_7101a000c0(*(long *)(lVar24 + 0x5e8),*(int *)(lVar24 + 0x1f8),
                     (long ****)(ulong)*(uint *)(lVar24 + 0x1fc),ppppbVar13,param_5,param_6,param_7,
                     param_8);
      iVar14 = *(int *)(lVar24 + 0x1f8);
      if ((iVar14 == 2) && (*(char *)(lVar24 + 0x6bd) != '\0')) {
LAB_7101a2ac54:
        plVar11 = *(long **)(*(long *)(*(long *)(lVar24 + 0x5e8) + 0x80) + 0x10);
        if (plVar11 != (long *)0x0) {
          puVar12 = (ushort *)(lVar24 + 0x2c0);
LAB_7101a2ac68:
          ppppbVar13 = (byte ****)0x1;
          FUN_71037a2270(plVar11,puVar12,0xffffffff,1);
        }
      }
      else if (*(char *)(lVar24 + 0x1c4) != -1) {
        if ((iVar14 == 0) && (*(int *)(lVar24 + 0x394) == 0)) {
          plVar11 = *(long **)(*(long *)(*(long *)(lVar24 + 0x5e8) + 0x80) + 0x10);
          if (plVar11 != (long *)0x0) {
            puVar12 = (ushort *)(lVar24 + 0x1d0);
            goto LAB_7101a2ac68;
          }
        }
        else if ((iVar14 == 2) && (*(char *)(lVar24 + 0x6b9) == '\0')) goto LAB_7101a2ac54;
      }
      *(undefined1 *)(*(long *)(lVar20 + 8) + 0x6ba) = 1;
      if (*(int *)(param_1 + 0x170) != 0) {
        FUN_7101a07580(*(long *)(lVar20 + 8));
      }
      lVar24 = *(long *)(lVar20 + 8);
      uVar2 = *(uint *)(lVar24 + 0x1f8);
      if (*(char *)(lVar24 + 0x6bb) == '\0') {
        uVar21 = 0xffffffff;
      }
      else {
        uVar21 = *(uint *)(lVar24 + 0x1fc);
      }
      uVar9 = *(uint *)(lVar24 + 0x150);
      if (7 < uVar9) {
LAB_7101a2ae30:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      plVar11 = *(long **)(param_1 + 0xdd0);
      uVar6 = *(uint *)(plVar11 + (long)(int)uVar9 * 3 + 0x1c);
      *(undefined4 *)(plVar11 + (long)(int)uVar9 * 3 + 0x1d) = *(undefined4 *)(lVar24 + 0x154);
      *(uint *)((long)plVar11 + (long)(int)uVar9 * 0x18 + 0xec) = uVar2;
      *(uint *)(plVar11 + (long)(int)uVar9 * 3 + 0x1e) = uVar21;
      if (uVar6 != 0xffffffff) {
        FUN_71019f08a0((uint *)&local_b8,(long)plVar11,(ulong)uVar6,ppppbVar13,param_5,param_6,
                       param_7,param_8);
        uVar18 = (plVar11[1] - *plVar11 >> 4) * 0x2e8ba2e8ba2e8ba3;
        uVar17 = (ulong)(int)*(uint *)(plVar11 + (long)(int)uVar9 * 3 + 0x1c);
        if (uVar18 < uVar17 || uVar18 - uVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        FUN_7103778300(0x3f800000,*(long *)(*plVar11 + uVar17 * 0xb0 + 0x20),(long)local_b0);
      }
      lVar24 = *(long *)(lVar20 + 8);
      param_6 = (ulong)*(uint *)(lVar24 + 0x158);
      param_5 = (long ****)(ulong)uVar21;
      FUN_71032d0830(param_1 + 0xde8,*(uint *)(lVar24 + 0x150),(ulong)*(uint *)(lVar24 + 0x154),
                     (ulong)uVar2,param_5,param_6,param_7,param_8);
      lVar24 = *(long *)(*(long *)(lVar20 + 8) + 0x678);
      if (lVar24 != 0) {
        lVar24 = *(long *)(lVar24 + 8);
        iVar14 = *(int *)(lVar24 + 0x28);
        if (iVar14 == *(int *)(*(long *)(lVar20 + 8) + 0x150)) {
          FUN_71032d2e70(*(long *)(lVar24 + 0x20),iVar14,(ulong)uVar2,(ulong)uVar21,param_5,param_6,
                         param_7,param_8);
        }
      }
      lVar20 = lVar20 + 0x10;
    } while (lVar22 != lVar20);
  }
  return;
}

