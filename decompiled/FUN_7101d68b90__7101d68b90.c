// addr:      7101d68b90
// offset:    0x1d68b90
// name:      FUN_7101d68b90
// mangled:   
// signature: undefined __cdecl FUN_7101d68b90(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d68b90(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ushort *puVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  ulong uVar14;
  ulong uVar15;
  undefined2 *puVar16;
  char *pcVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  undefined **ppuVar23;
  long lVar24;
  long *plVar25;
  long ****pppplVar26;
  uint uVar27;
  ulong uVar28;
  undefined8 *local_170;
  int local_158;
  uint local_150;
  undefined **local_138;
  ulong local_130;
  undefined **local_128;
  ulong local_120;
  undefined **local_118;
  ulong local_110;
  undefined8 local_108;
  undefined1 local_100 [64];
  undefined **local_c0;
  ulong local_b8;
  long ****pppplVar13;
  
  plVar25 = *(long **)**(undefined8 **)(param_1 + 0x80);
  if (*(char *)(*(undefined8 **)(param_1 + 0x80) + 1) != '\0') {
    FUN_7103775dc0(plVar25,0,(long ****)0x9003,param_4,param_5,param_6,param_7,param_8);
    *(undefined1 *)(param_1 + 0x70) = 0;
    if ((*(long *)(plVar25[2] + 8) != 0) &&
       (lVar18 = *(long *)(*(long *)(plVar25[2] + 8) + 0x18), lVar18 != 0)) {
      *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 1;
    }
    pcVar12 = (char *)FUN_7101465a30();
    if ((*pcVar12 == '\t') && (1 < (byte)pcVar12[0x1e])) {
      lVar18 = plVar25[2];
      pcVar12 = "draw_on";
    }
    else {
      lVar18 = plVar25[2];
      pcVar12 = "nocontest_on";
    }
    FUN_7103778300(0x3f800000,lVar18,(long)pcVar12);
    FUN_7103778300(0x3f800000,plVar25[2],0x7104421055);
    return;
  }
  plVar1 = plVar25 + 1;
  pcVar12 = (char *)FUN_7101465a30();
  if (pcVar12[5] == '\0') {
    if (*pcVar12 == '#') {
      pcVar17 = "team_on";
    }
    else {
      pcVar17 = "team_off";
    }
    FUN_7103778300(0x3f800000,plVar25[2],(long)pcVar17);
    local_150 = 2;
    uVar10 = 2;
    if (pcVar12[0x38c2] == '\x02') {
      uVar10 = 1;
    }
    uVar27 = (uint)(pcVar12[0x38c2] != '\x02');
    if (pcVar12[0x62] != '\x02') {
      uVar27 = uVar10;
    }
    if (pcVar12[0x7122] != '\x02') {
      uVar27 = uVar27 + 1;
    }
    if (pcVar12[0xa982] != '\x02') {
      uVar27 = uVar27 + 1;
    }
    if (pcVar12[0xe1e2] != '\x02') {
      uVar27 = uVar27 + 1;
    }
    if (pcVar12[0x11a42] != '\x02') {
      uVar27 = uVar27 + 1;
    }
    if (pcVar12[0x152a2] != '\x02') {
      uVar27 = uVar27 + 1;
    }
    if (pcVar12[0x18b02] != '\x02') {
      uVar27 = uVar27 + 1;
    }
    ppuVar23 = (undefined **)(ulong)uVar27;
    local_100[0] = 0;
    local_108 = 0;
    FUN_710062dc20((uint *)&local_108,"player_%d");
    FUN_7103778300(0x3f800000,plVar25[2],(long)local_100);
    if (uVar27 != 2) {
      if (uVar27 < 5) {
        local_150 = 4;
      }
      else if (uVar27 < 7) {
        local_150 = 6;
      }
      else {
        local_150 = 7;
        if (uVar27 != 7) {
          local_150 = 8;
        }
      }
    }
    bVar3 = pcVar12[4];
    iVar22 = (int)(char)bVar3;
    if (((char)bVar3 + -1 == 0) || (FUN_7103778300(0x3f800000,plVar25[2],0x710437c8cc), bVar3 < 3))
    {
      local_158 = 0;
    }
    else {
      local_158 = (iVar22 + ((char)bVar3 + -1) * (iVar22 - 3U)) -
                  (int)((ulong)(iVar22 - 3U) * (ulong)(iVar22 - 4) >> 1);
    }
    if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0))
    {
      FUN_7101764000();
      ppuVar23 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0))
    {
      FUN_7101764000();
      ppuVar23 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    lVar20 = *(long *)(DAT_710532f730 + 8);
    lVar18 = lVar20 + 0x160;
    uVar28 = 0;
    local_170 = &DAT_71052c67d0;
    iVar11 = -1;
    do {
      puVar19 = &DAT_71052c5730;
      iVar9 = iVar11;
      if ((((((uVar28 == DAT_71052c573c) || (puVar19 = &DAT_71052c5990, uVar28 == DAT_71052c599c))
            || (puVar19 = &DAT_71052c5bf0, uVar28 == DAT_71052c5bfc)) ||
           ((puVar19 = &DAT_71052c5e50, uVar28 == DAT_71052c5e5c ||
            (puVar19 = &DAT_71052c60b0, uVar28 == DAT_71052c60bc)))) ||
          (puVar19 = &DAT_71052c6310, uVar28 == DAT_71052c631c)) ||
         ((puVar19 = &DAT_71052c6570, uVar28 == DAT_71052c657c ||
          (puVar19 = &DAT_71052c67d0, uVar28 == DAT_71052c67dc)))) {
        iVar5 = *(int *)((long)puVar19 + 0x14);
        lVar21 = (long)iVar5;
        if ((iVar5 != -1) && (pcVar12[lVar21 * 0x3860 + 0x62] != '\x02')) {
          pcVar17 = pcVar12 + lVar21 * 0x3860 + 0x58;
          uVar27 = (uint)uVar28;
          local_c0 = (undefined **)CONCAT44(local_c0._4_4_,uVar27);
          uVar10 = FUN_71017a7d70(0x71052c5730,(uint *)&local_c0,ppuVar23,param_4,param_5,param_6,
                                  param_7,param_8);
          pppplVar13 = (long ****)(ulong)uVar10;
          if (iVar5 == *(int *)(pcVar12 + 0x48)) {
            pppplVar26 = *(long *****)pcVar17;
            if (pcVar12[lVar21 * 0x3860 + 0x3844] == '\0') {
              bVar8 = FUN_7103265e70(lVar18,(ulong)pppplVar26);
              if (!bVar8) goto LAB_7101d6962c;
              uVar10 = DAT_71052c51b0 - 1;
              if ((uVar10 < 0x24) && ((0x800000495U >> ((ulong)uVar10 & 0x3f) & 1) != 0)) {
LAB_7101d690fc:
                puVar19 = &DAT_71052c5730;
                if ((((uVar27 != DAT_71052c573c) &&
                     (puVar19 = &DAT_71052c5990, uVar27 != DAT_71052c599c)) &&
                    (puVar19 = &DAT_71052c5bf0, uVar27 != DAT_71052c5bfc)) &&
                   (((puVar19 = &DAT_71052c5e50, uVar27 != DAT_71052c5e5c &&
                     (puVar19 = &DAT_71052c60b0, uVar27 != DAT_71052c60bc)) &&
                    ((puVar19 = &DAT_71052c6310, uVar27 != DAT_71052c631c &&
                     ((puVar19 = &DAT_71052c6570, uVar27 != DAT_71052c657c &&
                      (puVar19 = local_170, uVar27 != DAT_71052c67dc)))))))) {
                  puVar19 = &DAT_71052c5730;
                }
                nn::mii::CharInfoAccessor::CharInfoAccessor
                          ((CharInfoAccessor *)&local_c0,(CharInfo *)(puVar19 + 0x2a));
                iVar9 = nn::mii::CharInfoAccessor::GetGender();
                param_4 = (byte ****)(ulong)(iVar9 == 1);
                param_5 = (long ****)0x0;
                FUN_7103265040((uint *)&local_c0,lVar18,(undefined1 *)pppplVar26,(ulong)param_4,0,
                               param_6,param_7,param_8);
                FUN_7101d68080((long)plVar1,(long)&local_c0,pppplVar26,param_4,param_5,param_6,
                               param_7,param_8);
              }
              else {
                uVar10 = DAT_71052c51b0 - 0xe;
                if (uVar10 < 0x18) {
                  if ((DAT_71052c51b6 != '\0' || DAT_71052c51da != '\0') ||
                     ((0x8007f7U >> (ulong)(uVar10 & 0x1f) & 1) != 0)) goto LAB_7101d690fc;
                }
                else if (DAT_71052c51b6 != '\0' || DAT_71052c51da != '\0') goto LAB_7101d690fc;
LAB_7101d6935c:
                if (((DAT_71053144d8 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(&DAT_71053144d8), iVar9 != 0)) {
                  FUN_7101764000();
                  ppuVar23 = &PTR_LOOP_7104f17000;
                  FUN_71000001c0();
                  __cxa_guard_release(&DAT_71053144d8);
                }
                puVar2 = &DAT_7104544c84;
                if ((&DAT_71052c5866)[lVar21 * 0x130] != 0) {
                  puVar2 = &DAT_71052c5866 + lVar21 * 0x130;
                }
                FUN_7101d68310((long)plVar1,puVar2,(long ****)ppuVar23,param_4,param_5,param_6,
                               param_7,param_8);
              }
            }
            else {
              if (DAT_71052c51b6 == '\0' && DAT_71052c51da == '\0') goto LAB_7101d6935c;
LAB_7101d6962c:
              lVar24 = *(long *)(lVar20 + 0x168);
              uVar10 = FUN_71032632a0(lVar24,(ulong)pppplVar26);
              if ((uVar10 & 1) != 0) {
                pppplVar26 = (long ****)FUN_71032631a0(lVar24,0x11b1ccb807);
              }
              bVar8 = FUN_71032648e0(lVar18,(ulong)pppplVar26);
              if (bVar8) {
                pppplVar26 = (long ****)FUN_7103263e20(lVar18,(int)pcVar12[lVar21 * 0x3860 + 0x60]);
                lVar24 = *(long *)(DAT_710532f730 + 8);
                bVar8 = FUN_7103264990(lVar24 + 0x160,(ulong)pppplVar26);
                if (bVar8) {
                  pppplVar26 = (long ****)FUN_71032631a0(*(long *)(lVar24 + 0x168),0x13b28d453e);
                }
                else {
                  bVar8 = FUN_7103264ab0(lVar24 + 0x160,(ulong)pppplVar26);
                  if (bVar8) {
                    pppplVar26 = (long ****)FUN_71032631a0(*(long *)(lVar24 + 0x168),0x13b3e567a6);
                  }
                }
              }
              param_4 = (byte ****)(long)pcVar12[lVar21 * 0x3860 + 99];
              param_5 = (long ****)0x0;
              FUN_7103265040((uint *)&local_c0,lVar18,(undefined1 *)pppplVar26,(ulong)param_4,0,
                             param_6,param_7,param_8);
              FUN_7101d68080((long)plVar1,(long)&local_c0,pppplVar26,param_4,param_5,param_6,param_7
                             ,param_8);
            }
            FUN_7101d67dd0((long)plVar1,(long)pcVar17,(undefined **)pppplVar13,param_4,param_5,
                           param_6,param_7,param_8);
            ppuVar23 = (undefined **)pppplVar13;
            if (iVar22 != 1) {
              FUN_7103776640(&local_c0,(long)plVar1,(byte ****)"parts_star_1_00",pppplVar13,param_4,
                             param_5,param_6,param_7,param_8);
              uVar7 = local_b8;
              FUN_7103778630((ulong)(uint)(float)(uint)(local_158 +
                                                       pcVar12[lVar21 * 0x3860 + 0x38b4]),local_b8,
                             0x71044334a5);
              local_c0 = &PTR_FUN_710523d988;
              local_b8 = 0;
              ppuVar23 = (undefined **)pppplVar13;
              if (uVar7 != 0) {
                uVar15 = *(ulong *)(uVar7 + 0x18);
                *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
                *(undefined8 *)(uVar7 + 0x18) = 0;
                if (uVar15 != 0) {
                  FUN_710392eb40(uVar15);
                }
                FUN_710392eb40(uVar7);
                ppuVar23 = (undefined **)pppplVar13;
              }
            }
            iVar9 = iVar5;
            if (pcVar12[lVar21 * 0x3860 + 0x60] != 'R') {
              iVar9 = iVar11;
            }
          }
          else {
            cVar4 = pcVar12[lVar21 * 0x3860 + 0x8f];
            uVar15 = (ulong)local_150;
            uVar27 = (int)cVar4 - 1;
            param_4 = (byte ****)(ulong)uVar27;
            FUN_7103776640(&local_c0,(long)plVar1,(byte ****)"set_parts_win_%d_%02d",uVar15,param_4,
                           param_5,param_6,param_7,param_8);
            FUN_7103776910(&local_118,(long)&local_c0,(long ****)"set_window",uVar15,param_4,param_5
                           ,param_6,param_7,param_8);
            uVar7 = local_110;
            uVar10 = (int)cVar4 + 7;
            if (5 < (int)cVar4 - 2U) {
              uVar10 = 8;
            }
            if (0x19 < (int)uVar10) {
              uVar10 = 0xffffffff;
            }
            if ((((*(long **)(local_110 + 8) != (long *)0x0) && (DAT_710593bc38 != 0)) &&
                (uVar10 < 0x20)) &&
               (lVar24 = *(long *)(*(long *)(DAT_710593bc38 + 8) + (long)(int)uVar10 * 8),
               lVar24 != 0)) {
              uVar15 = 0;
              FUN_710379e9c0(*(long **)(local_110 + 8),lVar24,0);
            }
            FUN_7103776910(&local_128,(long)&local_c0,(long ****)"set_window_sd",uVar15,param_4,
                           param_5,param_6,param_7,param_8);
            uVar15 = local_120;
            if (((*(long **)(local_120 + 8) != (long *)0x0) && (DAT_710593bc38 != 0)) &&
               ((uVar10 < 0x20 &&
                (lVar24 = *(long *)(*(long *)(DAT_710593bc38 + 8) + (long)(int)uVar10 * 8),
                lVar24 != 0)))) {
              FUN_710379e9c0(*(long **)(local_120 + 8),lVar24,0);
            }
            FUN_7101d67dd0((long)&local_c0,(long)pcVar17,(undefined **)pppplVar13,param_4,param_5,
                           param_6,param_7,param_8);
            ppuVar23 = (undefined **)(ulong)((int)pcVar12[lVar21 * 0x3860 + 0x8e] + 1);
            FUN_7103778430((long)&local_c0,"rank_%d",ppuVar23,param_4,param_5,param_6,param_7,
                           param_8);
            if (iVar22 != 1) {
              ppuVar23 = (undefined **)(ulong)local_150;
              param_4 = (byte ****)(ulong)uVar27;
              FUN_7103776640(&local_138,(long)plVar1,(byte ****)"parts_star_%d_%02d",ppuVar23,
                             param_4,param_5,param_6,param_7,param_8);
              uVar6 = local_130;
              FUN_7103778630((ulong)(uint)(float)(uint)(local_158 +
                                                       pcVar12[lVar21 * 0x3860 + 0x38b4]),local_130,
                             0x71044334a5);
              local_138 = &PTR_FUN_710523d988;
              local_130 = 0;
              if (uVar6 != 0) {
                uVar14 = *(ulong *)(uVar6 + 0x18);
                *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
                *(undefined8 *)(uVar6 + 0x18) = 0;
                if (uVar14 != 0) {
                  FUN_710392eb40(uVar14);
                }
                FUN_710392eb40(uVar6);
              }
            }
            local_128 = &PTR_FUN_710523d9a8;
            local_120 = 0;
            if (uVar15 != 0) {
              FUN_710392eb40(uVar15);
            }
            local_118 = &PTR_FUN_710523d9a8;
            local_110 = 0;
            if (uVar7 != 0) {
              FUN_710392eb40(uVar7);
            }
            uVar7 = local_b8;
            local_c0 = &PTR_FUN_710523d988;
            local_b8 = 0;
            if (uVar7 != 0) {
              uVar15 = *(ulong *)(uVar7 + 0x18);
              *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
              *(undefined8 *)(uVar7 + 0x18) = 0;
              if (uVar15 != 0) {
                FUN_710392eb40(uVar15);
              }
              FUN_710392eb40(uVar7);
            }
          }
        }
      }
      uVar28 = uVar28 + 1;
      iVar11 = iVar9;
    } while (uVar28 != 8);
  }
  else {
    FUN_7103778300(0x3f800000,plVar25[2],0x710436c708);
    FUN_71033938b0((uint *)&local_c0,(char)*(undefined4 *)(pcVar12 + 0x4c));
    FUN_7101d68080((long)plVar1,(long)&local_c0,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar10 = (uint)(byte)pcVar12[0x4c];
    if (pcVar12[0x62] == '\x02') {
      iVar9 = -1;
    }
    else {
      iVar9 = -(uint)(uVar10 != (int)pcVar12[0x70]);
    }
    if ((pcVar12[0x38c2] != '\x02') && (uVar10 == (int)pcVar12[0x38d0])) {
      if (iVar9 == -1) {
        iVar9 = 1;
      }
      if (pcVar12[0x38ef] < pcVar12[(long)iVar9 * 0x3860 + 0x8f]) {
        iVar9 = 1;
      }
    }
    if ((pcVar12[0x7122] != '\x02') && (uVar10 == (int)pcVar12[0x7130])) {
      iVar22 = 2;
      if (iVar9 != -1) {
        iVar22 = iVar9;
      }
      iVar9 = 2;
      if (pcVar12[(long)iVar22 * 0x3860 + 0x8f] <= pcVar12[0x714f]) {
        iVar9 = iVar22;
      }
    }
    if ((pcVar12[0xa982] != '\x02') && (uVar10 == (int)pcVar12[0xa990])) {
      iVar22 = 3;
      if (iVar9 != -1) {
        iVar22 = iVar9;
      }
      iVar9 = 3;
      if (pcVar12[(long)iVar22 * 0x3860 + 0x8f] <= pcVar12[0xa9af]) {
        iVar9 = iVar22;
      }
    }
    if ((pcVar12[0xe1e2] != '\x02') && (uVar10 == (int)pcVar12[0xe1f0])) {
      iVar22 = 4;
      if (iVar9 != -1) {
        iVar22 = iVar9;
      }
      iVar9 = 4;
      if (pcVar12[(long)iVar22 * 0x3860 + 0x8f] <= pcVar12[0xe20f]) {
        iVar9 = iVar22;
      }
    }
    if ((pcVar12[0x11a42] != '\x02') && (uVar10 == (int)pcVar12[0x11a50])) {
      iVar22 = 5;
      if (iVar9 != -1) {
        iVar22 = iVar9;
      }
      iVar9 = 5;
      if (pcVar12[(long)iVar22 * 0x3860 + 0x8f] <= pcVar12[0x11a6f]) {
        iVar9 = iVar22;
      }
    }
    if ((pcVar12[0x152a2] != '\x02') && (uVar10 == (int)pcVar12[0x152b0])) {
      iVar22 = 6;
      if (iVar9 != -1) {
        iVar22 = iVar9;
      }
      iVar9 = 6;
      if (pcVar12[(long)iVar22 * 0x3860 + 0x8f] <= pcVar12[0x152cf]) {
        iVar9 = iVar22;
      }
    }
    if ((pcVar12[0x18b02] != '\x02') && (uVar10 == (int)pcVar12[0x18b10])) {
      iVar22 = 7;
      if (iVar9 != -1) {
        iVar22 = iVar9;
      }
      iVar9 = 7;
      if (pcVar12[(long)iVar22 * 0x3860 + 0x8f] <= pcVar12[0x18b2f]) {
        iVar9 = iVar22;
      }
    }
    if (pcVar12[(long)iVar9 * 0x3860 + 0x60] != 'R') {
      iVar9 = -1;
    }
  }
  iVar22 = *(int *)(pcVar12 + 0x1c580);
  if ((*(int *)(pcVar12 + 0x1c580) == -1) && (iVar22 = iVar9, iVar9 == -1)) {
LAB_7101d69868:
    FUN_7103775dc0(*(long **)**(undefined8 **)(param_1 + 0x80),0,(long ****)0x9003,param_4,param_5,
                   param_6,param_7,param_8);
    *(undefined1 *)(param_1 + 0x70) = 0;
    lVar20 = *(long *)**(undefined8 **)(param_1 + 0x80);
    lVar18 = *(long *)(*(long *)(lVar20 + 0x10) + 8);
    if ((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x18), lVar18 != 0)) {
      *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 1;
    }
    puVar16 = FUN_7101465a30();
    if (*(char *)((long)puVar16 + 5) == '\0') {
      pcVar12 = "in";
    }
    else {
      pcVar12 = "in_team";
    }
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x10),(long)pcVar12);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x10),0x71043e0447);
    return;
  }
  puVar19 = *(undefined8 **)(param_1 + 0x80);
  *(int *)(puVar19 + 0x1a) = iVar22;
  if (*(uint *)((long)puVar19 + 0xbc) < 0x13) {
    *(undefined4 *)((long)puVar19 + (long)(int)*(uint *)((long)puVar19 + 0xbc) * 4 + 0x70) = 1;
    *(int *)(puVar19 + 0x33) = iVar22;
    if (*(uint *)((long)puVar19 + 0x184) < 0x13) {
      *(undefined4 *)((long)puVar19 + (long)(int)*(uint *)((long)puVar19 + 0x184) * 4 + 0x138) = 1;
      *(int *)(puVar19 + 0x4c) = iVar22;
      if (*(uint *)((long)puVar19 + 0x24c) < 0x13) {
        *(undefined4 *)((long)puVar19 + (long)(int)*(uint *)((long)puVar19 + 0x24c) * 4 + 0x200) = 1
        ;
        FUN_7103778300(0x3f800000,*(long *)(*(long *)*puVar19 + 0x10),0x71042b46a6);
        goto LAB_7101d69868;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

