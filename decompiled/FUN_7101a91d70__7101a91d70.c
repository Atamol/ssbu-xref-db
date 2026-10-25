// addr:      7101a91d70
// offset:    0x1a91d70
// name:      FUN_7101a91d70
// mangled:   
// signature: undefined __cdecl FUN_7101a91d70(long param_1, uint param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a91d70(long param_1,uint param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  int iVar2;
  undefined2 *puVar3;
  char cVar4;
  char *pcVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  ushort uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *********ppppppppplVar14;
  undefined1 *puVar15;
  long lVar16;
  byte *pbVar17;
  undefined **ppuVar18;
  undefined ***pppuVar19;
  int iVar20;
  undefined1 *puVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  char *pcVar27;
  long lVar28;
  uint uVar29;
  undefined8 *puVar30;
  long lVar31;
  undefined8 *puVar32;
  long ********local_1e0;
  undefined8 local_1d8;
  ulong local_1d0;
  undefined8 uStack_1c8;
  long ***local_1c0;
  ulong uStack_1b8;
  char local_1b0 [8];
  ulong local_1a8;
  uint local_1a0;
  undefined **local_170;
  undefined8 local_168;
  undefined **local_128;
  char *local_120 [8];
  undefined **local_e0;
  ulong local_d8;
  undefined **local_d0;
  ulong local_c8;
  undefined **local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  
  if ((7 < *(uint *)(param_1 + 0x377c)) || (0x1d < param_2)) goto LAB_7101a93690;
  lVar16 = param_1 + (long)(int)*(uint *)(param_1 + 0x377c) * 0x6c8 + (long)(int)param_2 * 0x38;
  iVar20 = *(int *)(lVar16 + 0x138);
  uVar10 = *(uint *)(lVar16 + 0x13c);
  local_1e0 = *(long *********)(lVar16 + 0x148);
  local_1d8 = *(undefined8 *)(lVar16 + 0x150);
  uVar26 = *(uint *)(lVar16 + 0x144);
  local_1d0 = *(ulong *)(lVar16 + 0x158);
  uStack_1c8 = *(undefined8 *)(lVar16 + 0x160);
  ppppppppplVar14 = (long *********)(ulong)uVar10;
  FUN_7101a939e0(param_1,iVar20,ppppppppplVar14,param_4,param_5,param_6,param_7,param_8);
  if (uVar10 == 1) {
    FUN_7103776640(&local_128,**(long **)(param_1 + 0x120) + 8,(byte ****)"set_part_footer",
                   ppppppppplVar14,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_b0,(long)&local_128,(long ****)"set_rep_pic_reward_00",ppppppppplVar14,
                   param_4,param_5,param_6,param_7,param_8);
    pcVar27 = local_120[0];
    local_128 = &PTR_FUN_710523d988;
    local_120[0] = (char *)0x0;
    if (pcVar27 != (char *)0x0) {
      uVar11 = *(ulong *)(pcVar27 + 0x18);
      *(undefined ***)(pcVar27 + 0x10) = &PTR_FUN_710523d9a8;
      pcVar27[0x18] = '\0';
      pcVar27[0x19] = '\0';
      pcVar27[0x1a] = '\0';
      pcVar27[0x1b] = '\0';
      pcVar27[0x1c] = '\0';
      pcVar27[0x1d] = '\0';
      pcVar27[0x1e] = '\0';
      pcVar27[0x1f] = '\0';
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40((ulong)pcVar27);
    }
    ppppppppplVar14 = &local_1e0;
    FUN_7101b11530(&local_b0,*(long **)(param_1 + 0x118),ppppppppplVar14,param_4,param_5,param_6,
                   param_7,param_8);
LAB_7101a92080:
    pcVar27 = (char *)local_a8;
    local_b0 = &PTR_FUN_710523d9a8;
    local_a8 = (long ****)0x0;
    if (pcVar27 != (char *)0x0) {
      FUN_710392eb40((ulong)pcVar27);
    }
  }
  else if (iVar20 == 3 && uVar10 == 4) {
    FUN_7103776640(&local_128,**(long **)(param_1 + 0x120) + 8,(byte ****)"set_part_footer",
                   ppppppppplVar14,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_b0,(long)&local_128,(long ****)"set_rep_spirits",ppppppppplVar14,param_4,
                   param_5,param_6,param_7,param_8);
    pcVar27 = local_120[0];
    local_128 = &PTR_FUN_710523d988;
    local_120[0] = (char *)0x0;
    if (pcVar27 != (char *)0x0) {
      uVar11 = *(ulong *)(pcVar27 + 0x18);
      *(undefined ***)(pcVar27 + 0x10) = &PTR_FUN_710523d9a8;
      pcVar27[0x18] = '\0';
      pcVar27[0x19] = '\0';
      pcVar27[0x1a] = '\0';
      pcVar27[0x1b] = '\0';
      pcVar27[0x1c] = '\0';
      pcVar27[0x1d] = '\0';
      pcVar27[0x1e] = '\0';
      pcVar27[0x1f] = '\0';
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40((ulong)pcVar27);
    }
    FUN_7103776640(&local_170,**(long **)(param_1 + 0x120) + 8,(byte ****)"set_part_footer",
                   ppppppppplVar14,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_128,(long)&local_170,(long ****)"set_rep_spirits_shadow",ppppppppplVar14,
                   param_4,param_5,param_6,param_7,param_8);
    uVar11 = local_168;
    local_170 = &PTR_FUN_710523d988;
    local_168 = 0;
    if (uVar11 != 0) {
      uVar12 = *(ulong *)(uVar11 + 0x18);
      *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar11 + 0x18) = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      FUN_710392eb40(uVar11);
    }
    lVar16 = *DAT_7105329f98;
    if ((char)local_1d8 == '\x04') {
      lVar28 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      uVar10 = FUN_71032a7800(lVar28,local_1d0);
      lVar31 = *(long *)(lVar28 + 0x20);
      uVar11 = (*(long *)(lVar28 + 0x28) - lVar31 >> 6) * -0x3333333333333333;
      if ((uint)uVar11 <= uVar10) goto LAB_7101a91fd8;
      ppppppppplVar14 = (long *********)0xffff;
      uVar9 = *(ushort *)(lVar31 + (ulong)uVar10 * 0x140);
      if ((long *********)(ulong)uVar9 == (long *********)0xffff) {
        uVar12 = 0xffffffff;
      }
      else {
        uVar12 = (ulong)*(ushort *)(lVar28 + (long)(short)uVar9 * 2 + 0x60);
        ppppppppplVar14 = (long *********)(ulong)uVar9;
      }
    }
    else {
      lVar28 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      lVar31 = *(long *)(lVar28 + 0x20);
      uVar11 = (*(long *)(lVar28 + 0x28) - lVar31 >> 6) * -0x3333333333333333;
LAB_7101a91fd8:
      uVar12 = 0xffffffff;
      ppppppppplVar14 = (long *********)0xffff;
    }
    puVar3 = (undefined2 *)(lVar31 + uVar12 * 0x140);
    if (uVar11 <= uVar12) {
      puVar3 = &DAT_7105182b08;
    }
    uVar10 = 1;
    uVar9 = (ushort)ppppppppplVar14;
    if (*(char *)(puVar3 + 0x2f) == '\x03') {
      bVar7 = FUN_71025c9890(uVar9);
      uVar10 = 1;
      if (bVar7) {
        uVar10 = 2;
      }
    }
    uVar29 = FUN_710259d0a0(*(long *)(lVar16 + 0x20),(byte)uVar10,uVar9,param_4,param_5,param_6,
                            param_7,param_8);
    if ((uVar29 & 1) != 0) {
      FUN_71037799d0((long)local_a8);
      FUN_71037799d0((long)local_120[0]);
      FUN_71025ae1b0(uVar9,&local_128,0,(byte ****)(ulong)uVar10,param_5,param_6,param_7,param_8);
      ppppppppplVar14 = (long *********)0x0;
      param_4 = (byte ****)(ulong)uVar10;
      FUN_71025ae1b0(uVar9,&local_b0,0,param_4,param_5,param_6,param_7,param_8);
    }
    pcVar27 = local_120[0];
    local_128 = &PTR_FUN_710523d9a8;
    local_120[0] = (char *)0x0;
    if (pcVar27 != (char *)0x0) {
      FUN_710392eb40((ulong)pcVar27);
    }
    goto LAB_7101a92080;
  }
  puVar32 = (undefined8 *)(param_1 + 0x120);
  FUN_7103776640(&local_b0,*(long *)*puVar32 + 8,(byte ****)"set_part_footer",ppppppppplVar14,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_c0,(long)&local_b0,(long ****)"set_txt_title",ppppppppplVar14,param_4,
                 param_5,param_6,param_7,param_8);
  pcVar27 = (char *)local_a8;
  local_b0 = &PTR_FUN_710523d988;
  local_a8 = (long ****)0x0;
  if (pcVar27 != (char *)0x0) {
    uVar11 = *(ulong *)(pcVar27 + 0x18);
    *(undefined ***)(pcVar27 + 0x10) = &PTR_FUN_710523d9a8;
    pcVar27[0x18] = '\0';
    pcVar27[0x19] = '\0';
    pcVar27[0x1a] = '\0';
    pcVar27[0x1b] = '\0';
    pcVar27[0x1c] = '\0';
    pcVar27[0x1d] = '\0';
    pcVar27[0x1e] = '\0';
    pcVar27[0x1f] = '\0';
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    FUN_710392eb40((ulong)pcVar27);
  }
  FUN_7103776640(&local_b0,*(long *)*puVar32 + 8,(byte ****)"set_part_footer",ppppppppplVar14,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_d0,(long)&local_b0,(long ****)"set_txt_mission",ppppppppplVar14,param_4,
                 param_5,param_6,param_7,param_8);
  uVar11 = (ulong)local_a8;
  local_b0 = &PTR_FUN_710523d988;
  local_a8 = (long ****)0x0;
  if (uVar11 != 0) {
    uVar12 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar11);
  }
  FUN_7103776640(&local_b0,*(long *)*puVar32 + 8,(byte ****)"set_part_footer",ppppppppplVar14,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_e0,(long)&local_b0,(long ****)"set_txt_item",ppppppppplVar14,param_4,param_5
                 ,param_6,param_7,param_8);
  uVar11 = (ulong)local_a8;
  local_b0 = &PTR_FUN_710523d988;
  local_a8 = (long ****)0x0;
  if (uVar11 != 0) {
    uVar12 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar11);
  }
  if (iVar20 == 1) {
    FUN_710377a120((long)&local_c0,"mnu_clear_getter_title_lock",ppppppppplVar14,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_d0,"mnu_clear_getter_mission_lock",ppppppppplVar14,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_e0,"mnu_clear_getter_item_lock",ppppppppplVar14,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103776640(&local_b0,*(long *)*puVar32 + 8,(byte ****)"set_part_footer",ppppppppplVar14,
                   param_4,param_5,param_6,param_7,param_8);
    pcVar27 = (char *)local_a8;
    FUN_7103778300(0x3f800000,(long)local_a8,0x7104329aaf);
    local_b0 = &PTR_FUN_710523d988;
    local_a8 = (long ****)0x0;
    if (pcVar27 != (char *)0x0) {
      uVar11 = *(ulong *)(pcVar27 + 0x18);
      *(undefined ***)(pcVar27 + 0x10) = &PTR_FUN_710523d9a8;
      pcVar27[0x18] = '\0';
      pcVar27[0x19] = '\0';
      pcVar27[0x1a] = '\0';
      pcVar27[0x1b] = '\0';
      pcVar27[0x1c] = '\0';
      pcVar27[0x1d] = '\0';
      pcVar27[0x1e] = '\0';
      pcVar27[0x1f] = '\0';
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40((ulong)pcVar27);
    }
    lVar16 = *(long *)(DAT_710532f730 + 8);
    uVar11 = FUN_7103267660(*(long *)(lVar16 + 0x348),*(uint *)(param_1 + 0x377c),uVar26);
    lVar16 = *(long *)(lVar16 + 0x348);
    if (((uVar11 & 0xff00000000000000) == 0x6200000000000000) && ((uVar11 & 0xffffffffff) != 0)) {
      lVar16 = *(long *)(lVar16 + 8);
      pcVar27 = *(char **)(lVar16 + 0x20);
      cVar4 = *pcVar27;
      if ((cVar4 == '\f') && (iVar20 = *(int *)(pcVar27 + 1) + -1, 0 < *(int *)(pcVar27 + 1))) {
        uVar12 = *(ulong *)(lVar16 + 0x48) & 0xffffffffff;
        iVar22 = 0;
        pbVar17 = &DAT_7104742dbb;
        do {
          iVar23 = iVar20 + iVar22;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          iVar23 = iVar23 >> 1;
          puVar1 = (uint *)(*(long *)(*(long *)(lVar16 + 0x18) + 0x28) + (long)*(int *)(pcVar27 + 5)
                           + (long)iVar23 * 8);
          uVar24 = *(ulong *)(*(long *)(*(long *)(lVar16 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
          if (uVar24 == uVar12) {
            uVar10 = puVar1[1];
            if ((int)uVar10 < 0) goto LAB_7101a9253c;
            pbVar17 = (byte *)(pcVar27 + (int)uVar10);
            break;
          }
          iVar2 = iVar23 + -1;
          if (uVar24 <= uVar12) {
            iVar22 = iVar23 + 1;
            iVar2 = iVar20;
          }
          iVar20 = iVar2;
        } while (iVar22 <= iVar20);
      }
      else {
LAB_7101a9253c:
        pbVar17 = &DAT_7104742dbb;
      }
      if (((1 < *pbVar17 - 0xb) ||
          (uVar26 = (uint)(uVar11 >> 0x28) & 0xffff, *(uint *)(pbVar17 + 1) <= uVar26)) ||
         (uVar12 = FUN_7103269eb0(lVar16,uVar26), ((uVar12 ^ uVar11) & 0xffffffffff) != 0)) {
        uVar26 = FUN_710326a580(lVar16,uVar11 & 0xffffffffff);
      }
      uVar10 = uVar26;
      if (cVar4 != '\f') goto LAB_7101a92614;
LAB_7101a92594:
      uVar26 = uVar10;
      iVar20 = *(int *)(pcVar27 + 1) + -1;
      if (*(int *)(pcVar27 + 1) < 1) goto LAB_7101a92614;
      uVar11 = *(ulong *)(lVar16 + 0x48) & 0xffffffffff;
      iVar22 = 0;
      pbVar17 = &DAT_7104742dbb;
      do {
        iVar23 = iVar20 + iVar22;
        if (iVar23 < 0) {
          iVar23 = iVar23 + 1;
        }
        iVar23 = iVar23 >> 1;
        puVar1 = (uint *)(*(long *)(*(long *)(lVar16 + 0x18) + 0x28) + (long)*(int *)(pcVar27 + 5) +
                         (long)iVar23 * 8);
        uVar12 = *(ulong *)(*(long *)(*(long *)(lVar16 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
        if (uVar12 == uVar11) {
          uVar10 = puVar1[1];
          if ((int)uVar10 < 0) goto LAB_7101a92614;
          pbVar17 = (byte *)(pcVar27 + (int)uVar10);
          break;
        }
        iVar2 = iVar23 + -1;
        if (uVar12 <= uVar11) {
          iVar22 = iVar23 + 1;
          iVar2 = iVar20;
        }
        iVar20 = iVar2;
      } while (iVar22 <= iVar20);
    }
    else {
      lVar16 = *(long *)(lVar16 + 8);
      pcVar27 = *(char **)(lVar16 + 0x20);
      uVar26 = 0xffffffff;
      uVar10 = 0xffffffff;
      if (*pcVar27 == '\f') goto LAB_7101a92594;
LAB_7101a92614:
      pbVar17 = &DAT_7104742dbb;
    }
    if ((1 < *pbVar17 - 0xb) || (*(uint *)(pbVar17 + 1) <= uVar26)) {
      local_a8 = (long ****)((ulong)local_a8 & 0xffffffffffffff00);
      local_b0 = (undefined **)0x0;
      goto LAB_7101a93520;
    }
    puVar15 = (undefined1 *)(ulong)uVar26;
    FUN_710326a3e0((long *)&local_128,lVar16,uVar26);
    if ((*local_120[0] == '\f') &&
       (iVar20 = *(int *)(local_120[0] + 1) + -1, 0 < *(int *)(local_120[0] + 1))) {
      iVar22 = 0;
      pcVar27 = "";
      do {
        iVar23 = iVar20 + iVar22;
        if (iVar23 < 0) {
          iVar23 = iVar23 + 1;
        }
        iVar23 = iVar23 >> 1;
        if (*(ulong *)(local_128[4] +
                      (ulong)*(uint *)(local_128[5] +
                                      (long)iVar23 * 8 + (long)*(int *)(local_120[0] + 5)) * 8) ==
            0x12f017f57c) {
          uVar10 = *(uint *)((long)(local_128[5] +
                                   (long)iVar23 * 8 + (long)*(int *)(local_120[0] + 5)) + 4);
          if ((int)uVar10 < 0) goto LAB_7101a928a0;
          pcVar27 = local_120[0] + (int)uVar10;
          ppuVar18 = local_128;
          goto LAB_7101a928ac;
        }
        iVar2 = iVar23 + -1;
        if (*(ulong *)(local_128[4] +
                      (ulong)*(uint *)(local_128[5] +
                                      (long)iVar23 * 8 + (long)*(int *)(local_120[0] + 5)) * 8) <
            0x12f017f57d) {
          iVar22 = iVar23 + 1;
          iVar2 = iVar20;
        }
        iVar20 = iVar2;
      } while (iVar22 <= iVar20);
      ppuVar18 = (undefined **)0x0;
    }
    else {
LAB_7101a928a0:
      ppuVar18 = (undefined **)0x0;
      pcVar27 = "";
    }
LAB_7101a928ac:
    if (*pcVar27 == '\n') {
      puVar21 = ppuVar18[5] + *(int *)(pcVar27 + 1);
      if (puVar21 != (undefined1 *)0x0) goto LAB_7101a928cc;
      uVar11 = 0;
    }
    else {
      puVar21 = &DAT_7104867c2e;
LAB_7101a928cc:
      uVar11 = 0;
      while( true ) {
        cVar4 = puVar21[uVar11];
        if (cVar4 == '\0') break;
        *(char *)((long)&local_a8 + uVar11) = cVar4;
        if (0x3e < (int)uVar11 + 1U) {
          uVar11 = (ulong)((int)uVar11 + 1);
          break;
        }
        cVar4 = (puVar21 + uVar11)[1];
        if (cVar4 == '\0') {
          uVar11 = uVar11 + 1;
          break;
        }
        *(char *)((long)&local_a8 + uVar11 + 1) = cVar4;
        uVar11 = uVar11 + 2;
      }
    }
    *(undefined1 *)((long)&local_a8 + (uVar11 & 0xffffffff)) = 0;
    uVar26 = (uint)(byte)local_a8;
    uVar10 = 0x811c9dc5;
    local_b0 = (undefined **)(uVar11 << 0x20);
    if ((byte)local_a8 != 0) {
      pbVar17 = (byte *)((long)&local_a8 + 1);
      do {
        uVar10 = uVar10 * 0x89 ^ uVar26;
        uVar26 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar26 != 0);
    }
    local_b0 = (undefined **)CONCAT44((int)uVar11,uVar10);
    if ((int)uVar11 == 0) goto LAB_7101a93520;
    pppuVar19 = (undefined ***)&local_b0;
    goto LAB_7101a93514;
  }
  lVar16 = *(long *)(DAT_710532f730 + 8);
  uVar12 = FUN_7103267660(*(long *)(lVar16 + 0x348),*(uint *)(param_1 + 0x377c),uVar26);
  uVar11 = uVar12;
  FUN_7103267fe0((uint *)&local_128,lVar16 + 0x340,uVar12);
  local_168 = local_168 & 0xffffffffffffff00;
  local_170 = (undefined **)0x0;
  if ((7 < *(uint *)(param_1 + 0x377c)) || (0x1d < uVar26)) {
LAB_7101a93690:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pcVar27 = (char *)(param_1 + 0x3934);
  if (*(char *)(param_1 + (long)(int)*(uint *)(param_1 + 0x377c) * 0x6c8 + (long)(int)uVar26 * 0x38
               + 0x168) == '\0') {
    if (*pcVar27 != '\0') {
      FUN_7103776640(&local_b0,*(long *)*puVar32 + 8,(byte ****)"set_part_footer",uVar11,param_4,
                     param_5,param_6,param_7,param_8);
      pcVar5 = (char *)local_a8;
      FUN_7103778300(0x3f800000,(long)local_a8,0x71043f04b3);
      local_b0 = &PTR_FUN_710523d988;
      local_a8 = (long ****)0x0;
      if (pcVar5 != (char *)0x0) {
        uVar11 = *(ulong *)(pcVar5 + 0x18);
        *(undefined ***)(pcVar5 + 0x10) = &PTR_FUN_710523d9a8;
        pcVar5[0x18] = '\0';
        pcVar5[0x19] = '\0';
        pcVar5[0x1a] = '\0';
        pcVar5[0x1b] = '\0';
        pcVar5[0x1c] = '\0';
        pcVar5[0x1d] = '\0';
        pcVar5[0x1e] = '\0';
        pcVar5[0x1f] = '\0';
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
        }
        FUN_710392eb40((ulong)pcVar5);
      }
      *pcVar27 = '\0';
    }
  }
  else if (*pcVar27 == '\0') {
    FUN_7103776640(&local_b0,*(long *)*puVar32 + 8,(byte ****)"set_part_footer",uVar11,param_4,
                   param_5,param_6,param_7,param_8);
    pcVar5 = (char *)local_a8;
    FUN_7103778300(0x3f800000,(long)local_a8,0x710426fad7);
    local_b0 = &PTR_FUN_710523d988;
    local_a8 = (long ****)0x0;
    if (pcVar5 != (char *)0x0) {
      uVar11 = *(ulong *)(pcVar5 + 0x18);
      *(undefined ***)(pcVar5 + 0x10) = &PTR_FUN_710523d9a8;
      pcVar5[0x18] = '\0';
      pcVar5[0x19] = '\0';
      pcVar5[0x1a] = '\0';
      pcVar5[0x1b] = '\0';
      pcVar5[0x1c] = '\0';
      pcVar5[0x1d] = '\0';
      pcVar5[0x1e] = '\0';
      pcVar5[0x1f] = '\0';
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40((ulong)pcVar5);
    }
    *pcVar27 = '\x01';
  }
  lVar31 = *(long *)(lVar16 + 0x348);
  uVar11 = uVar12 & 0xffffffffff;
  bVar7 = (uVar12 & 0xffffffffff) == 0;
  bVar8 = uVar12 >> 0x38 != 0x62;
  uVar10 = (uint)(uVar12 >> 0x20);
  if (bVar8 || bVar7) {
    lVar28 = *(long *)(lVar31 + 8);
    pcVar27 = *(char **)(lVar28 + 0x20);
    uVar29 = 0xffffffff;
    uVar26 = 0xffffffff;
    if (*pcVar27 == '\f') goto LAB_7101a92744;
LAB_7101a927c4:
    pbVar17 = &DAT_7104742dbb;
  }
  else {
    lVar28 = *(long *)(lVar31 + 8);
    pcVar27 = *(char **)(lVar28 + 0x20);
    cVar4 = *pcVar27;
    if ((cVar4 == '\f') && (iVar22 = *(int *)(pcVar27 + 1) + -1, 0 < *(int *)(pcVar27 + 1))) {
      uVar24 = *(ulong *)(lVar28 + 0x48) & 0xffffffffff;
      iVar23 = 0;
      pbVar17 = &DAT_7104742dbb;
      do {
        iVar2 = iVar22 + iVar23;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        puVar1 = (uint *)(*(long *)(*(long *)(lVar28 + 0x18) + 0x28) + (long)*(int *)(pcVar27 + 5) +
                         (long)iVar2 * 8);
        uVar25 = *(ulong *)(*(long *)(*(long *)(lVar28 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
        if (uVar25 == uVar24) {
          uVar26 = puVar1[1];
          if ((int)uVar26 < 0) goto LAB_7101a926ec;
          pbVar17 = (byte *)(pcVar27 + (int)uVar26);
          break;
        }
        iVar6 = iVar2 + -1;
        if (uVar25 <= uVar24) {
          iVar23 = iVar2 + 1;
          iVar6 = iVar22;
        }
        iVar22 = iVar6;
      } while (iVar23 <= iVar22);
    }
    else {
LAB_7101a926ec:
      pbVar17 = &DAT_7104742dbb;
    }
    if (((1 < *pbVar17 - 0xb) || (uVar29 = uVar10 >> 8 & 0xffff, *(uint *)(pbVar17 + 1) <= uVar29))
       || (uVar24 = FUN_7103269eb0(lVar28,uVar29), ((uVar24 ^ uVar12) & 0xffffffffff) != 0)) {
      uVar29 = FUN_710326a580(lVar28,uVar11);
    }
    uVar26 = uVar29;
    if (cVar4 != '\f') goto LAB_7101a927c4;
LAB_7101a92744:
    uVar29 = uVar26;
    iVar22 = *(int *)(pcVar27 + 1) + -1;
    if (*(int *)(pcVar27 + 1) < 1) goto LAB_7101a927c4;
    uVar24 = *(ulong *)(lVar28 + 0x48) & 0xffffffffff;
    iVar23 = 0;
    pbVar17 = &DAT_7104742dbb;
    do {
      iVar2 = iVar22 + iVar23;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*(long *)(lVar28 + 0x18) + 0x28) + (long)*(int *)(pcVar27 + 5) +
                       (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*(long *)(lVar28 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == uVar24) {
        uVar26 = puVar1[1];
        if ((int)uVar26 < 0) goto LAB_7101a927c4;
        pbVar17 = (byte *)(pcVar27 + (int)uVar26);
        break;
      }
      iVar6 = iVar2 + -1;
      if (uVar25 <= uVar24) {
        iVar23 = iVar2 + 1;
        iVar6 = iVar22;
      }
      iVar22 = iVar6;
    } while (iVar23 <= iVar22);
  }
  puVar15 = &DAT_c1ffff0000000000;
  if ((*pbVar17 - 0xb < 2) && (uVar29 < *(uint *)(pbVar17 + 1))) {
    FUN_710326a3e0(&local_b0,lVar28,uVar29);
    if ((*(char *)local_a8 == '\f') &&
       (iVar22 = *(int *)((long)local_a8 + 1) + -1, 0 < *(int *)((long)local_a8 + 1))) {
      iVar23 = 0;
      pcVar27 = "";
      do {
        iVar2 = iVar22 + iVar23;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        if (*(ulong *)(local_b0[4] +
                      (ulong)*(uint *)(local_b0[5] +
                                      (long)iVar2 * 8 + (long)*(int *)((long)local_a8 + 5)) * 8) ==
            0xbd8f6a88e) {
          uVar26 = *(uint *)((long)(local_b0[5] +
                                   (long)iVar2 * 8 + (long)*(int *)((long)local_a8 + 5)) + 4);
          if ((int)uVar26 < 0) goto LAB_7101a92988;
          pcVar27 = (char *)((long)local_a8 + (long)(int)uVar26);
          ppuVar18 = local_b0;
          goto LAB_7101a92994;
        }
        iVar6 = iVar2 + -1;
        if (*(ulong *)(local_b0[4] +
                      (ulong)*(uint *)(local_b0[5] +
                                      (long)iVar2 * 8 + (long)*(int *)((long)local_a8 + 5)) * 8) <
            0xbd8f6a88f) {
          iVar23 = iVar2 + 1;
          iVar6 = iVar22;
        }
        iVar22 = iVar6;
      } while (iVar23 <= iVar22);
      ppuVar18 = (undefined **)0x0;
    }
    else {
LAB_7101a92988:
      ppuVar18 = (undefined **)0x0;
      pcVar27 = "";
    }
LAB_7101a92994:
    if (*pcVar27 == '\t') {
      uVar24 = *(ulong *)(ppuVar18[4] + (long)*(int *)(pcVar27 + 1) * 8);
    }
    else {
      uVar24 = 0;
    }
    lVar31 = *(long *)(lVar16 + 0x348);
    puVar15 = (undefined1 *)(uVar24 & 0xffffffffff | 0xc1ffff0000000000);
  }
  if (bVar8 || bVar7) {
    lVar31 = *(long *)(lVar31 + 8);
    uVar29 = 0xffffffff;
    pcVar27 = *(char **)(lVar31 + 0x20);
    uVar26 = 0xffffffff;
    if (*pcVar27 == '\f') goto LAB_7101a92ad0;
LAB_7101a92b50:
    pbVar17 = &DAT_7104742dbb;
  }
  else {
    lVar31 = *(long *)(lVar31 + 8);
    pcVar27 = *(char **)(lVar31 + 0x20);
    cVar4 = *pcVar27;
    if ((cVar4 == '\f') && (iVar22 = *(int *)(pcVar27 + 1) + -1, 0 < *(int *)(pcVar27 + 1))) {
      uVar24 = *(ulong *)(lVar31 + 0x48) & 0xffffffffff;
      iVar23 = 0;
      pbVar17 = &DAT_7104742dbb;
      do {
        iVar2 = iVar22 + iVar23;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        puVar1 = (uint *)(*(long *)(*(long *)(lVar31 + 0x18) + 0x28) + (long)*(int *)(pcVar27 + 5) +
                         (long)iVar2 * 8);
        uVar25 = *(ulong *)(*(long *)(*(long *)(lVar31 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
        if (uVar25 == uVar24) {
          uVar26 = puVar1[1];
          if ((int)uVar26 < 0) goto LAB_7101a92a78;
          pbVar17 = (byte *)(pcVar27 + (int)uVar26);
          break;
        }
        iVar6 = iVar2 + -1;
        if (uVar25 <= uVar24) {
          iVar23 = iVar2 + 1;
          iVar6 = iVar22;
        }
        iVar22 = iVar6;
      } while (iVar23 <= iVar22);
    }
    else {
LAB_7101a92a78:
      pbVar17 = &DAT_7104742dbb;
    }
    if (((1 < *pbVar17 - 0xb) || (uVar29 = uVar10 >> 8 & 0xffff, *(uint *)(pbVar17 + 1) <= uVar29))
       || (uVar24 = FUN_7103269eb0(lVar31,uVar29), ((uVar24 ^ uVar12) & 0xffffffffff) != 0)) {
      uVar29 = FUN_710326a580(lVar31,uVar11);
    }
    uVar26 = uVar29;
    if (cVar4 != '\f') goto LAB_7101a92b50;
LAB_7101a92ad0:
    uVar29 = uVar26;
    iVar22 = *(int *)(pcVar27 + 1) + -1;
    if (*(int *)(pcVar27 + 1) < 1) goto LAB_7101a92b50;
    uVar24 = *(ulong *)(lVar31 + 0x48) & 0xffffffffff;
    iVar23 = 0;
    pbVar17 = &DAT_7104742dbb;
    do {
      iVar2 = iVar22 + iVar23;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*(long *)(lVar31 + 0x18) + 0x28) + (long)*(int *)(pcVar27 + 5) +
                       (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*(long *)(lVar31 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == uVar24) {
        uVar26 = puVar1[1];
        if ((int)uVar26 < 0) goto LAB_7101a92b50;
        pbVar17 = (byte *)(pcVar27 + (int)uVar26);
        break;
      }
      iVar6 = iVar2 + -1;
      if (uVar25 <= uVar24) {
        iVar23 = iVar2 + 1;
        iVar6 = iVar22;
      }
      iVar22 = iVar6;
    } while (iVar23 <= iVar22);
  }
  puVar30 = (undefined8 *)0x1effff0000000000;
  if ((*pbVar17 - 0xb < 2) && (uVar29 < *(uint *)(pbVar17 + 1))) {
    FUN_710326a3e0(&local_b0,lVar31,uVar29);
    if ((*(char *)local_a8 == '\f') &&
       (iVar22 = *(int *)((long)local_a8 + 1) + -1, 0 < *(int *)((long)local_a8 + 1))) {
      iVar23 = 0;
      pcVar27 = "";
      do {
        iVar2 = iVar22 + iVar23;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        if (*(ulong *)(local_b0[4] +
                      (ulong)*(uint *)(local_b0[5] +
                                      (long)iVar2 * 8 + (long)*(int *)((long)local_a8 + 5)) * 8) ==
            0xa002f7d1f) {
          uVar26 = *(uint *)((long)(local_b0[5] +
                                   (long)iVar2 * 8 + (long)*(int *)((long)local_a8 + 5)) + 4);
          if ((int)uVar26 < 0) goto LAB_7101a92c24;
          pcVar27 = (char *)((long)local_a8 + (long)(int)uVar26);
          ppuVar18 = local_b0;
          goto LAB_7101a92c30;
        }
        iVar6 = iVar2 + -1;
        if (*(ulong *)(local_b0[4] +
                      (ulong)*(uint *)(local_b0[5] +
                                      (long)iVar2 * 8 + (long)*(int *)((long)local_a8 + 5)) * 8) <
            0xa002f7d20) {
          iVar23 = iVar2 + 1;
          iVar6 = iVar22;
        }
        iVar22 = iVar6;
      } while (iVar23 <= iVar22);
      ppuVar18 = (undefined **)0x0;
    }
    else {
LAB_7101a92c24:
      ppuVar18 = (undefined **)0x0;
      pcVar27 = "";
    }
LAB_7101a92c30:
    if (*pcVar27 == '\t') {
      uVar24 = *(ulong *)(ppuVar18[4] + (long)*(int *)(pcVar27 + 1) * 8);
    }
    else {
      uVar24 = 0;
    }
    puVar30 = (undefined8 *)(uVar24 & 0xffffffffff | 0x1effff0000000000);
  }
  if (((ulong)puVar15 & 0xffffffffff) == 0) {
    if (((ulong)puVar30 & 0xffffffffff) != 0) {
      FUN_710327fc30((uint *)&local_b0,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x268),
                     (ulong)puVar30);
      FUN_71003a4ca0((uint *)&uStack_1b8,"nam_item_%s",&local_a8,puVar30,param_4,param_5,param_6,
                     param_7,param_8);
      goto LAB_7101a92f54;
    }
    if (*(long **)(local_b8 + 0x10) != (long *)0x0) {
      FUN_71037a28a0(*(long **)(local_b8 + 0x10),(byte *)"dammy");
    }
  }
  else {
    if (bVar8 || bVar7) {
      lVar31 = *(long *)(*(long *)(lVar16 + 0x348) + 8);
      pcVar27 = *(char **)(lVar31 + 0x20);
      uVar29 = 0xffffffff;
      uVar26 = 0xffffffff;
      if (*pcVar27 == '\f') goto LAB_7101a92dd4;
LAB_7101a92e54:
      pbVar17 = &DAT_7104742dbb;
    }
    else {
      lVar31 = *(long *)(*(long *)(lVar16 + 0x348) + 8);
      pcVar27 = *(char **)(lVar31 + 0x20);
      cVar4 = *pcVar27;
      if ((cVar4 == '\f') && (iVar22 = *(int *)(pcVar27 + 1) + -1, 0 < *(int *)(pcVar27 + 1))) {
        uVar24 = *(ulong *)(lVar31 + 0x48) & 0xffffffffff;
        iVar23 = 0;
        pbVar17 = &DAT_7104742dbb;
        do {
          iVar2 = iVar22 + iVar23;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(*(long *)(lVar31 + 0x18) + 0x28) + (long)*(int *)(pcVar27 + 5)
                           + (long)iVar2 * 8);
          uVar25 = *(ulong *)(*(long *)(*(long *)(lVar31 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == uVar24) {
            uVar26 = puVar1[1];
            if ((int)uVar26 < 0) goto LAB_7101a92d7c;
            pbVar17 = (byte *)(pcVar27 + (int)uVar26);
            break;
          }
          iVar6 = iVar2 + -1;
          if (uVar25 <= uVar24) {
            iVar23 = iVar2 + 1;
            iVar6 = iVar22;
          }
          iVar22 = iVar6;
        } while (iVar23 <= iVar22);
      }
      else {
LAB_7101a92d7c:
        pbVar17 = &DAT_7104742dbb;
      }
      if (((1 < *pbVar17 - 0xb) || (uVar29 = uVar10 >> 8 & 0xffff, *(uint *)(pbVar17 + 1) <= uVar29)
          ) || (uVar24 = FUN_7103269eb0(lVar31,uVar29), ((uVar24 ^ uVar12) & 0xffffffffff) != 0)) {
        uVar29 = FUN_710326a580(lVar31,uVar11);
      }
      uVar26 = uVar29;
      if (cVar4 != '\f') goto LAB_7101a92e54;
LAB_7101a92dd4:
      uVar29 = uVar26;
      iVar22 = *(int *)(pcVar27 + 1) + -1;
      if (*(int *)(pcVar27 + 1) < 1) goto LAB_7101a92e54;
      uVar24 = *(ulong *)(lVar31 + 0x48) & 0xffffffffff;
      iVar23 = 0;
      pbVar17 = &DAT_7104742dbb;
      do {
        iVar2 = iVar22 + iVar23;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        puVar1 = (uint *)(*(long *)(*(long *)(lVar31 + 0x18) + 0x28) + (long)*(int *)(pcVar27 + 5) +
                         (long)iVar2 * 8);
        uVar25 = *(ulong *)(*(long *)(*(long *)(lVar31 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
        if (uVar25 == uVar24) {
          uVar26 = puVar1[1];
          if ((int)uVar26 < 0) goto LAB_7101a92e54;
          pbVar17 = (byte *)(pcVar27 + (int)uVar26);
          break;
        }
        iVar6 = iVar2 + -1;
        if (uVar25 <= uVar24) {
          iVar23 = iVar2 + 1;
          iVar6 = iVar22;
        }
        iVar22 = iVar6;
      } while (iVar23 <= iVar22);
    }
    if ((*pbVar17 - 0xb < 2) && (uVar29 < *(uint *)(pbVar17 + 1))) {
      FUN_710326a3e0(&local_b0,lVar31,uVar29);
      if ((*(char *)local_a8 == '\f') &&
         (iVar22 = *(int *)((long)local_a8 + 1) + -1, 0 < *(int *)((long)local_a8 + 1))) {
        iVar23 = 0;
        pcVar27 = "";
        do {
          iVar2 = iVar22 + iVar23;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          if (*(ulong *)(local_b0[4] +
                        (ulong)*(uint *)(local_b0[5] +
                                        (long)iVar2 * 8 + (long)*(int *)((long)local_a8 + 5)) * 8)
              == 0xbb58144dc) {
            uVar26 = *(uint *)((long)(local_b0[5] +
                                     (long)iVar2 * 8 + (long)*(int *)((long)local_a8 + 5)) + 4);
            if ((int)uVar26 < 0) goto LAB_7101a93634;
            pcVar27 = (char *)((long)local_a8 + (long)(int)uVar26);
            break;
          }
          iVar6 = iVar2 + -1;
          if (*(ulong *)(local_b0[4] +
                        (ulong)*(uint *)(local_b0[5] +
                                        (long)iVar2 * 8 + (long)*(int *)((long)local_a8 + 5)) * 8) <
              0xbb58144dd) {
            iVar23 = iVar2 + 1;
            iVar6 = iVar22;
          }
          iVar22 = iVar6;
        } while (iVar23 <= iVar22);
      }
      else {
LAB_7101a93634:
        pcVar27 = "";
      }
      switch(*pcVar27) {
      case '\x01':
      case '\x03':
        uVar24 = (ulong)(byte)pcVar27[1];
        break;
      case '\x02':
        uVar24 = (ulong)pcVar27[1];
        break;
      case '\x04':
        uVar24 = (ulong)*(short *)(pcVar27 + 1);
        break;
      case '\x05':
        uVar24 = (ulong)*(ushort *)(pcVar27 + 1);
        break;
      case '\x06':
      case '\a':
        uVar24 = (ulong)*(uint *)(pcVar27 + 1);
        break;
      default:
        uVar24 = 0;
      }
    }
    else {
      uVar24 = 0xffffffff;
    }
    uVar26 = FUN_7103263540(*(long *)(lVar16 + 0x168),(ulong)puVar15,uVar24,param_4,param_5,param_6,
                            param_7,param_8);
    FUN_7103262310((uint *)&local_b0,*(long *)(lVar16 + 0x168),(ulong)puVar15);
    puVar30 = &local_a8;
    FUN_71003a4ca0((uint *)&uStack_1b8,"nam_chr1_%02d_%s",(ulong)uVar26,puVar30,param_4,param_5,
                   param_6,param_7,param_8);
LAB_7101a92f54:
    FUN_710377a120((long)&local_c0,local_1b0,puVar30,param_4,param_5,param_6,param_7,param_8);
  }
  puVar15 = FUN_7103268360(*(long *)(lVar16 + 0x348),uVar12);
  lVar31 = DAT_710532f730;
  FUN_71032933e0(&uStack_1b8,*(long *)(DAT_710532f730 + 8) + 0x2f0,(ulong)puVar15);
  if (iVar20 == 3) {
    uVar25 = 0x2dff000000000000;
    uVar24 = 0x2dff000000000000;
    if (local_1b0[0] == '\x05') {
      uVar24 = FUN_710327d930(*(long *)(*(long *)(*(long *)(lVar31 + 8) + 0x318) + 8),local_1a8);
    }
    lVar28 = *(long *)(*(long *)(lVar16 + 0x318) + 8);
    uVar13 = FUN_710327d930(lVar28,0xd61d998cb);
    if (((((uVar24 & 0xff00000000000000) == 0x2d00000000000000) && ((uVar24 & 0xffffffffff) != 0))
        && ((uVar13 & 0xff00000000000000) == 0x2d00000000000000)) && ((uVar13 & 0xffffffffff) != 0))
    {
      if (((uVar13 ^ uVar24) & 0xffffffffff) != 0) {
LAB_7101a93010:
        if (local_1b0[0] == '\x05') {
          uVar25 = FUN_710327d930(*(long *)(*(long *)(*(long *)(lVar31 + 8) + 0x318) + 8),local_1a8)
          ;
        }
        uVar24 = FUN_710327d930(lVar28,0x155f9548cb);
        if ((((uVar25 & 0xff00000000000000) == 0x2d00000000000000) && ((uVar25 & 0xffffffffff) != 0)
            ) && (((uVar24 & 0xff00000000000000) == 0x2d00000000000000 &&
                  ((uVar24 & 0xffffffffff) != 0)))) {
          if (((uVar24 ^ uVar25) & 0xffffffffff) != 0) {
LAB_7101a93078:
            FUN_7101780fd0((uint *)&local_b0,&uStack_1b8,puVar15,param_4,param_5,param_6,param_7,
                           param_8);
            for (uVar24 = 0; *(char *)((long)&local_a8 + uVar24) != '\0'; uVar24 = uVar24 + 2) {
              *(char *)((long)&local_168 + uVar24) = *(char *)((long)&local_a8 + uVar24);
              if (0x3e < (int)uVar24 + 1U) {
                uVar24 = (ulong)((int)uVar24 + 1);
                break;
              }
              cVar4 = *(char *)((long)&local_a8 + uVar24 + 1);
              if (cVar4 == '\0') {
                uVar24 = uVar24 + 1;
                break;
              }
              *(char *)((long)&local_168 + uVar24 + 1) = cVar4;
            }
            pcVar27 = (char *)&local_168;
            uVar26 = 0x811c9dc5;
            pcVar27[uVar24 & 0xffffffff] = '\0';
            uVar29 = (uint)(byte)local_168;
            if ((byte)local_168 != 0) {
              pbVar17 = (byte *)((long)&local_168 + 1);
              do {
                uVar26 = uVar26 * 0x89 ^ uVar29;
                uVar29 = (uint)*pbVar17;
                pbVar17 = pbVar17 + 1;
              } while (uVar29 != 0);
            }
            local_170 = (undefined **)CONCAT44((int)uVar24,uVar26);
            goto LAB_7101a93218;
          }
        }
        else if (((uVar24 & 0xffffffffff) != 0 &&
                 (uVar24 & 0xff00000000000000) == 0x2d00000000000000) !=
                 ((uVar25 & 0xff00000000000000) == 0x2d00000000000000 &&
                 (uVar25 & 0xffffffffff) != 0)) goto LAB_7101a93078;
        param_4 = (byte ****)(ulong)local_1a0;
        puVar15 = (undefined1 *)0x1;
        FUN_710377a280((long)&local_e0,(byte *)"mnu_insert_popup_reward_sp",1);
        FUN_7103776640(&local_b0,*(long *)*puVar32 + 8,(byte ****)"set_part_footer",puVar15,param_4,
                       param_5,param_6,param_7,param_8);
        pcVar27 = "txt_item_name_sp";
        goto LAB_7101a93248;
      }
    }
    else if (((uVar13 & 0xffffffffff) != 0 && (uVar13 & 0xff00000000000000) == 0x2d00000000000000)
             != ((uVar24 & 0xff00000000000000) == 0x2d00000000000000 && (uVar24 & 0xffffffffff) != 0
                )) goto LAB_7101a93010;
    param_4 = (byte ****)(ulong)local_1a0;
    puVar15 = (undefined1 *)0x1;
    FUN_710377a280((long)&local_e0,(byte *)"mnu_insert_popup_reward_g",1);
    FUN_7103776640(&local_b0,*(long *)*puVar32 + 8,(byte ****)"set_part_footer",puVar15,param_4,
                   param_5,param_6,param_7,param_8);
    pcVar27 = "txt_item_name_gold";
  }
  else {
    pcVar27 = "mnu_clear_getter_item_lock";
LAB_7101a93218:
    FUN_710377a120((long)&local_e0,pcVar27,puVar15,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776640(&local_b0,*(long *)*puVar32 + 8,(byte ****)"set_part_footer",puVar15,param_4,
                   param_5,param_6,param_7,param_8);
    pcVar27 = "txt_item_name_def";
  }
LAB_7101a93248:
  pcVar5 = (char *)local_a8;
  FUN_7103778300(0x3f800000,(long)local_a8,(long)pcVar27);
  local_b0 = &PTR_FUN_710523d988;
  local_a8 = (long ****)0x0;
  if (pcVar5 != (char *)0x0) {
    uVar24 = *(ulong *)(pcVar5 + 0x18);
    *(undefined ***)(pcVar5 + 0x10) = &PTR_FUN_710523d9a8;
    pcVar5[0x18] = '\0';
    pcVar5[0x19] = '\0';
    pcVar5[0x1a] = '\0';
    pcVar5[0x1b] = '\0';
    pcVar5[0x1c] = '\0';
    pcVar5[0x1d] = '\0';
    pcVar5[0x1e] = '\0';
    pcVar5[0x1f] = '\0';
    if (uVar24 != 0) {
      FUN_710392eb40(uVar24);
    }
    FUN_710392eb40((ulong)pcVar5);
  }
  if (bVar8 || bVar7) {
    lVar31 = *(long *)(*(long *)(lVar16 + 0x348) + 8);
    pcVar27 = *(char **)(lVar31 + 0x20);
    uVar26 = 0xffffffff;
    uVar10 = 0xffffffff;
    if (*pcVar27 == '\f') goto LAB_7101a93390;
LAB_7101a93410:
    pbVar17 = &DAT_7104742dbb;
  }
  else {
    lVar31 = *(long *)(*(long *)(lVar16 + 0x348) + 8);
    pcVar27 = *(char **)(lVar31 + 0x20);
    cVar4 = *pcVar27;
    if ((cVar4 == '\f') && (iVar20 = *(int *)(pcVar27 + 1) + -1, 0 < *(int *)(pcVar27 + 1))) {
      uVar24 = *(ulong *)(lVar31 + 0x48) & 0xffffffffff;
      iVar22 = 0;
      pbVar17 = &DAT_7104742dbb;
      do {
        iVar23 = iVar20 + iVar22;
        if (iVar23 < 0) {
          iVar23 = iVar23 + 1;
        }
        iVar23 = iVar23 >> 1;
        puVar1 = (uint *)(*(long *)(*(long *)(lVar31 + 0x18) + 0x28) + (long)*(int *)(pcVar27 + 5) +
                         (long)iVar23 * 8);
        uVar25 = *(ulong *)(*(long *)(*(long *)(lVar31 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
        if (uVar25 == uVar24) {
          uVar26 = puVar1[1];
          if ((int)uVar26 < 0) goto LAB_7101a93338;
          pbVar17 = (byte *)(pcVar27 + (int)uVar26);
          break;
        }
        iVar2 = iVar23 + -1;
        if (uVar25 <= uVar24) {
          iVar22 = iVar23 + 1;
          iVar2 = iVar20;
        }
        iVar20 = iVar2;
      } while (iVar22 <= iVar20);
    }
    else {
LAB_7101a93338:
      pbVar17 = &DAT_7104742dbb;
    }
    if (((1 < *pbVar17 - 0xb) || (uVar26 = uVar10 >> 8 & 0xffff, *(uint *)(pbVar17 + 1) <= uVar26))
       || (uVar24 = FUN_7103269eb0(lVar31,uVar26), ((uVar24 ^ uVar12) & 0xffffffffff) != 0)) {
      uVar26 = FUN_710326a580(lVar31,uVar11);
    }
    uVar10 = uVar26;
    if (cVar4 != '\f') goto LAB_7101a93410;
LAB_7101a93390:
    uVar26 = uVar10;
    iVar20 = *(int *)(pcVar27 + 1) + -1;
    if (*(int *)(pcVar27 + 1) < 1) goto LAB_7101a93410;
    uVar11 = *(ulong *)(lVar31 + 0x48) & 0xffffffffff;
    iVar22 = 0;
    pbVar17 = &DAT_7104742dbb;
    do {
      iVar23 = iVar20 + iVar22;
      if (iVar23 < 0) {
        iVar23 = iVar23 + 1;
      }
      iVar23 = iVar23 >> 1;
      puVar1 = (uint *)(*(long *)(*(long *)(lVar31 + 0x18) + 0x28) + (long)*(int *)(pcVar27 + 5) +
                       (long)iVar23 * 8);
      uVar24 = *(ulong *)(*(long *)(*(long *)(lVar31 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
      if (uVar24 == uVar11) {
        uVar10 = puVar1[1];
        if ((int)uVar10 < 0) goto LAB_7101a93410;
        pbVar17 = (byte *)(pcVar27 + (int)uVar10);
        break;
      }
      iVar2 = iVar23 + -1;
      if (uVar24 <= uVar11) {
        iVar22 = iVar23 + 1;
        iVar2 = iVar20;
      }
      iVar20 = iVar2;
    } while (iVar22 <= iVar20);
  }
  if ((1 < *pbVar17 - 0xb) || (*(uint *)(pbVar17 + 1) <= uVar26)) goto switchD_7101a93500_default;
  puVar15 = (undefined1 *)(ulong)uVar26;
  FUN_710326a3e0(&local_b0,lVar31,uVar26);
  if ((*(char *)local_a8 == '\f') &&
     (iVar20 = *(int *)((long)local_a8 + 1) + -1, 0 < *(int *)((long)local_a8 + 1))) {
    iVar22 = 0;
    pcVar27 = "";
    do {
      iVar23 = iVar20 + iVar22;
      if (iVar23 < 0) {
        iVar23 = iVar23 + 1;
      }
      iVar23 = iVar23 >> 1;
      puVar1 = (uint *)((long)local_b0[5] + (long)iVar23 * 8 + (long)*(int *)((long)local_a8 + 5));
      if (*(long ***)((long)local_b0[4] + (ulong)*puVar1 * 8) == (long **)0x9637ab0d7) {
        uVar10 = puVar1[1];
        if ((int)uVar10 < 0) goto LAB_7101a934d8;
        pcVar27 = (char *)((long)local_a8 + (long)(int)uVar10);
        break;
      }
      iVar2 = iVar23 + -1;
      if (*(long ***)((long)local_b0[4] + (ulong)*puVar1 * 8) < (long **)0x9637ab0d8) {
        iVar22 = iVar23 + 1;
        iVar2 = iVar20;
      }
      iVar20 = iVar2;
    } while (iVar22 <= iVar20);
  }
  else {
LAB_7101a934d8:
    pcVar27 = "";
  }
  switch(*pcVar27) {
  case '\x01':
  case '\x03':
    uVar10 = (uint)(byte)pcVar27[1];
    if (pcVar27[1] == 0) goto switchD_7101a93500_default;
    goto LAB_7101a93584;
  case '\x02':
    uVar10 = (uint)pcVar27[1];
    break;
  case '\x04':
    uVar10 = (uint)*(short *)(pcVar27 + 1);
    break;
  case '\x05':
    uVar10 = (uint)*(ushort *)(pcVar27 + 1);
    if (*(ushort *)(pcVar27 + 1) != 0) goto LAB_7101a93584;
    goto switchD_7101a93500_default;
  case '\x06':
  case '\a':
    uVar10 = *(uint *)(pcVar27 + 1);
    break;
  default:
    goto switchD_7101a93500_default;
  }
  if ((int)uVar10 < 1) {
switchD_7101a93500_default:
    pppuVar19 = &local_128;
LAB_7101a93514:
    FUN_710377a120((long)&local_d0,(char *)(pppuVar19 + 1),puVar15,param_4,param_5,param_6,param_7,
                   param_8);
  }
  else {
LAB_7101a93584:
    uVar26 = 0;
    local_a8 = (long ****)0x0;
    uStack_a0 = 0;
    local_b0 = (undefined **)0x0;
    do {
      uVar11 = FUN_7103267960(*(long *)(lVar16 + 0x348),uVar12);
      local_1c0 = (long ***)(long)(int)uVar11;
      FUN_7101a93c30(&local_b0,local_a8,&local_1c0,param_4,param_5,param_6,param_7,param_8);
      uVar26 = uVar26 + 1;
    } while (uVar10 != uVar26);
    if (*(long **)(local_c8 + 0x10) != (long *)0x0) {
      FUN_71037a2660(*(long **)(local_c8 + 0x10),(byte *)local_120,&local_b0);
    }
    if ((long ****)local_b0 != (long ****)0x0) {
      local_a8 = (long ****)local_b0;
      FUN_710392eb40((ulong)local_b0);
    }
  }
LAB_7101a93520:
  uVar11 = local_d8;
  local_e0 = &PTR_FUN_710523d9a8;
  local_d8 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  uVar11 = local_c8;
  local_d0 = &PTR_FUN_710523d9a8;
  local_c8 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  uVar11 = local_b8;
  local_c0 = &PTR_FUN_710523d9a8;
  local_b8 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  return;
}

