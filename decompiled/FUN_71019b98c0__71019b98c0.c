// addr:      71019b98c0
// offset:    0x19b98c0
// name:      FUN_71019b98c0
// mangled:   
// signature: undefined __cdecl FUN_71019b98c0(long param_1, undefined8 param_2, long * * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_71019b98c0(long param_1,undefined8 param_2,long **********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  long *plVar2;
  long **********pppppppppplVar3;
  void *__src;
  int iVar4;
  byte bVar5;
  uint uVar6;
  long ****************__n;
  long **********pppppppppplVar7;
  bool bVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  int *piVar16;
  long **********__dest;
  undefined1 *puVar17;
  undefined8 uVar18;
  char *pcVar19;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  int iVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long **********pppppppppplVar23;
  int *piVar24;
  undefined4 uVar25;
  int *piVar26;
  undefined8 uVar27;
  int *piVar28;
  undefined1 *puVar29;
  long ***********ppppppppppplVar30;
  float fVar31;
  double dVar32;
  undefined1 auVar33 [16];
  long **********local_3e8;
  long **********local_3e0;
  undefined4 *local_3d8;
  char *local_3d0;
  undefined8 local_3c8;
  char *local_3c0;
  undefined8 local_3b8;
  char *local_3b0;
  undefined8 local_3a8;
  undefined5 uStack_3a0;
  undefined3 local_39b;
  undefined4 uStack_398;
  undefined1 uStack_394;
  char *local_390;
  undefined4 local_388;
  char *local_380;
  undefined4 local_378;
  char *local_370;
  undefined4 local_368;
  char *local_360;
  undefined4 local_358;
  char *local_350;
  undefined4 local_348;
  char *local_340;
  undefined4 local_338;
  char *local_330;
  undefined4 local_328;
  char *local_320;
  undefined4 local_318;
  char *local_310;
  undefined4 local_308;
  char *local_300;
  undefined4 local_2f8;
  char *local_2f0;
  undefined4 local_2e8;
  char *local_2e0;
  undefined4 local_2d8;
  char *local_2d0;
  undefined4 local_2c8;
  char *local_2c0;
  undefined4 local_2b8;
  char *local_2b0;
  undefined4 local_2a8;
  char *local_2a0;
  undefined4 local_298;
  char *local_290;
  undefined4 local_288;
  char *local_280;
  undefined4 local_278;
  char *local_270;
  undefined4 local_268;
  char *local_260;
  undefined4 local_258;
  char *local_250;
  undefined4 local_248;
  char *local_240;
  undefined4 local_238;
  char *local_230;
  undefined4 local_228;
  char *local_220;
  undefined4 local_218;
  char *local_210;
  undefined4 local_208;
  char *local_200;
  undefined4 local_1f8;
  char *local_1f0;
  undefined4 local_1e8;
  char *local_1e0;
  undefined4 local_1d8;
  char *local_1d0;
  undefined4 local_1c8;
  char *local_1c0;
  undefined4 local_1b8;
  char *local_1b0;
  long ****************local_1a8;
  byte local_19e;
  int local_88;
  ulong *local_80 [2];
  
  if (*(int *)(param_1 + 0x1fc) != 0) {
    lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    if (((lVar12 != 0) &&
        (plVar13 = (long *)FUN_71037964b0(lVar12,0x71042b3cc4), plVar13 != (long *)0x0)) &&
       (uVar14 = (**(code **)(*plVar13 + 0x138))(), (uVar14 & 1) == 0)) {
      return;
    }
    uVar11 = *(uint *)(param_1 + 500);
    lVar12 = (long)(int)uVar11;
    if (*(int *)(param_1 + 0x358) - 2U < 3) {
      if (uVar11 < 0x13) {
        *(undefined4 *)(param_1 + lVar12 * 4 + 0x1a8) = 8;
        if (0x11 < *(int *)(param_1 + 500)) {
          return;
        }
        uVar11 = *(int *)(param_1 + 500) + 1;
        *(uint *)(param_1 + 500) = uVar11;
        if (uVar11 < 0x13) {
          lVar12 = (long)(int)uVar11;
          uVar25 = 5;
          goto LAB_71019b99b0;
        }
      }
    }
    else if (uVar11 < 0x13) {
      uVar25 = 0x10;
LAB_71019b99b0:
      *(undefined4 *)(param_1 + lVar12 * 4 + 0x1a8) = uVar25;
      return;
    }
    goto LAB_71019ba898;
  }
  uVar11 = *(uint *)(*(long *)(param_1 + 0x350) + 0xb0);
  if (uVar11 != 0xffffffff) {
    if (uVar11 < 10 && *(char *)(DAT_71053398b0 + 8) != '\0') {
      puVar21 = (undefined8 *)(&DAT_7105339860)[(int)uVar11];
      iVar20 = 0;
      if (puVar21 != (undefined8 *)0x0) goto LAB_71019b99c8;
    }
    else {
      puVar21 = &DAT_7105339830;
LAB_71019b99c8:
      uVar6 = *(int *)(puVar21[2] + 0x9c) - 1;
      if (uVar6 < 7) {
        iVar20 = *(int *)(&DAT_7104753de0 + (long)(int)uVar6 * 4);
      }
      else {
        iVar20 = 0;
      }
    }
    fVar31 = 0.0;
    if (1 < iVar20 - 1U) {
      fVar31 = 1.0;
    }
    param_3 = (long **********)0x1a6c6c925a;
    param_4 = (byte ****)0x0;
    param_5 = (long ****)0x0;
    param_6 = 0;
    param_7 = 0;
    param_8 = 0;
    FUN_710175dfc0(fVar31,1.0,*(long *)(DAT_71052c5120 + 8),uVar11,0x1a6c6c925a,0,0,0,0,0);
  }
  lVar12 = *(long *)(DAT_710532f7b0 + 8);
  iVar20 = *(int *)(lVar12 + 0x214);
  if (*(int *)(param_1 + 0x358) == 2) {
    uStack_398 = 0;
    uStack_394 = 0;
    local_3a8 = 0;
    uStack_3a0 = 0;
    local_39b = 0;
    local_3b8 = 0;
    local_3b0 = (char *)0x0;
    local_3c8 = 0;
    local_3c0 = (char *)0x0;
    local_3d8 = (undefined4 *)0x0;
    local_3d0 = (char *)0x0;
    local_3e8 = (long **********)0x0;
    local_3e0 = (long **********)0x0;
    uVar14 = FUN_71022e5e10(iVar20,&local_3e8);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(*DAT_7105314510 + 1) == '\0') {
        puVar21 = *(undefined8 **)**(undefined8 **)(*DAT_7105314510 + 0x168);
        puVar21[1] = local_3e0;
        puVar21[2] = local_3d8;
        *puVar21 = local_3e8;
        puVar21[5] = local_3c0;
        puVar21[6] = local_3b8;
        puVar21[3] = local_3d0;
        puVar21[4] = local_3c8;
        *(ulong *)((long)puVar21 + 0x4d) = CONCAT17(uStack_394,CONCAT43(uStack_398,local_39b));
        puVar21[8] = local_3a8;
        puVar21[9] = CONCAT35(local_39b,uStack_3a0);
        puVar21[7] = local_3b0;
      }
      plVar13 = (long *)(*DAT_7105314508 + 0x5b4dd8);
      plVar2 = (long *)(*DAT_7105314508 + 0x5b4de8);
      if (*plVar2 == 0) {
        plVar15 = (long *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,
                                         param_7,param_8);
        if (plVar15 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_80[0] = (ulong *)((ulong)local_80[0] & 0xffffffff00000000);
            local_1a8 = (long ****************)&SUB_00000018;
            param_3 = (long **********)&local_1a8;
            uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
            if (((uVar14 & 1) != 0) &&
               (plVar15 = (long *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,
                                                 param_6,param_7,param_8), plVar15 != (long *)0x0))
            goto LAB_71019b9b64;
          }
          plVar15 = (long *)0x0;
        }
LAB_71019b9b64:
        *(undefined1 *)(plVar15 + 2) = 0;
        plVar15[1] = (long)plVar13;
        lVar12 = *plVar13;
        *plVar15 = lVar12;
        *(long **)(lVar12 + 8) = plVar15;
        *plVar13 = (long)plVar15;
        *plVar2 = *plVar2 + 1;
      }
      else {
        *(byte *)(*plVar13 + 0x10) = *(byte *)(*plVar13 + 0x10) & 1;
      }
    }
    lVar12 = *(long *)(DAT_710532f7b0 + 8);
  }
  piVar16 = FUN_71032df050(lVar12,iVar20);
  local_3e0 = (long **********)0x0;
  local_3d8 = (undefined4 *)0x0;
  local_3e8 = (long **********)0x0;
  __src = *(void **)(piVar16 + 0x46);
  __n = (long ****************)(*(long *)(piVar16 + 0x48) - (long)__src);
  uVar18 = extraout_x1;
  pppppppppplVar23 = local_3e0;
  if (__n != (long ****************)0x0) {
    if ((ulong)((long)__n >> 2) >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    __dest = (long **********)
             FUN_710392e290(0x10,__n,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    uVar18 = extraout_x1_00;
    if (__dest == (long **********)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_80[0] = (ulong *)((ulong)local_80[0] & 0xffffffff00000000);
        param_3 = (long **********)&local_1a8;
        local_1a8 = __n;
        auVar33 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
        uVar18 = auVar33._8_8_;
        if (((auVar33._0_8_ & 1) != 0) &&
           (__dest = (long **********)
                     FUN_710392e290(0x10,__n,(long ****)param_3,param_4,param_5,param_6,param_7,
                                    param_8), uVar18 = extraout_x1_01,
           __dest != (long **********)0x0)) goto LAB_71019b9c14;
      }
      __dest = (long **********)0x0;
    }
LAB_71019b9c14:
    local_3d8 = (undefined4 *)((long)__dest + ((long)__n >> 2) * 4);
    pppppppppplVar7 = __dest;
    local_3e8 = __dest;
    pppppppppplVar23 = __dest;
    if (0 < (long)__n) {
      param_3 = (long **********)__n;
      local_3e0 = __dest;
      memcpy(__dest,__src,(size_t)__n);
      pppppppppplVar3 = (long **********)((long)__dest + (long)__n);
      local_3e0 = pppppppppplVar3;
      uVar18 = extraout_x1_02;
      pppppppppplVar7 = pppppppppplVar3;
      pppppppppplVar23 = pppppppppplVar3;
      if (__n != (long ****************)0x0) {
        do {
          puVar21 = (undefined8 *)*DAT_71052b7950;
          uVar25 = *(undefined4 *)__dest;
          if ((*(char *)(puVar21 + 1) == '\0') &&
             (((iVar10 = nn::time::StandardNetworkSystemClock::GetCurrentTime
                                   ((PosixTime *)&local_1a8), iVar10 == 0 ||
               (iVar10 = nn::time::StandardUserSystemClock::GetCurrentTime((PosixTime *)&local_1a8),
               iVar10 == 0)) && ((long)puVar21[2] < (long)local_1a8)))) {
            *puVar21 = 2;
            *(undefined1 *)(puVar21 + 1) = 1;
            puVar22 = puVar21 + 3;
            puVar21[2] = 0;
            do {
              *puVar22 = 0;
              puVar22[1] = 0;
              *(undefined4 *)(puVar22 + 2) = 0xffffffff;
              *(undefined8 *)((long)puVar22 + 0x1c) = 0;
              *(undefined8 *)((long)puVar22 + 0x14) = 0;
              *(undefined4 *)((long)puVar22 + 0x24) = 0xffffffff;
              *(undefined4 *)(puVar22 + 7) = 0xffffffff;
              *(undefined8 *)((long)puVar22 + 0x44) = 0;
              *(undefined8 *)((long)puVar22 + 0x3c) = 0;
              *(undefined4 *)((long)puVar22 + 0x4c) = 0xffffffff;
              *(undefined4 *)(puVar22 + 0xc) = 0xffffffff;
              *(undefined8 *)((long)puVar22 + 0x6c) = 0;
              *(undefined8 *)((long)puVar22 + 100) = 0;
              *(undefined4 *)((long)puVar22 + 0x74) = 0xffffffff;
              *(undefined4 *)(puVar22 + 0x11) = 0xffffffff;
              *(undefined8 *)((long)puVar22 + 0x94) = 0;
              *(undefined8 *)((long)puVar22 + 0x8c) = 0;
              *(undefined4 *)((long)puVar22 + 0x9c) = 0xffffffff;
              *(undefined4 *)(puVar22 + 0x16) = 0xffffffff;
              *(undefined8 *)((long)puVar22 + 0xbc) = 0;
              *(undefined8 *)((long)puVar22 + 0xb4) = 0;
              *(undefined4 *)((long)puVar22 + 0xc4) = 0xffffffff;
              puVar22[5] = 0;
              puVar22[6] = 0;
              puVar22[10] = 0;
              puVar22[0xb] = 0;
              puVar22[0xf] = 0;
              puVar22[0x10] = 0;
              puVar22[0x14] = 0;
              puVar22[0x15] = 0;
              puVar22 = puVar22 + 0x19;
            } while (puVar22 != puVar21 + 0x4e5);
          }
          uVar18 = 500;
          uVar11 = *(uint *)((long)puVar21 + 4);
          if (499 < uVar11) goto LAB_71019ba898;
          *(undefined4 *)((long)puVar21 + (ulong)uVar11 * 0x14 + 0x28) = uVar25;
          uVar27 = *(undefined8 *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x78) + 0x5e048);
          __dest = (long **********)((long)__dest + 4);
          *(undefined8 *)((long)puVar21 + (ulong)uVar11 * 0x14 + 0x18) =
               *(undefined8 *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x78) + 0x5e040);
          *(undefined8 *)((long)puVar21 + (ulong)uVar11 * 0x14 + 0x20) = uVar27;
          *(uint *)((long)puVar21 + 4) = (uVar11 + 1) % 500;
          pppppppppplVar7 = local_3e8;
          pppppppppplVar23 = local_3e0;
        } while (__dest != pppppppppplVar3);
      }
    }
    local_3e0 = pppppppppplVar7;
    if (local_3e0 != (long **********)0x0) {
      FUN_710392eb40((ulong)local_3e0);
      uVar18 = extraout_x1_03;
      pppppppppplVar23 = local_3e0;
    }
  }
  local_3e0 = pppppppppplVar23;
  puVar1 = (ulong *)(piVar16 + 0x46);
  uVar14 = *puVar1;
  if (uVar14 != 0) {
    *(ulong *)(piVar16 + 0x48) = uVar14;
    FUN_710392eb40(uVar14);
    piVar16[0x48] = 0;
    piVar16[0x49] = 0;
    piVar16[0x4a] = 0;
    piVar16[0x4b] = 0;
    *puVar1 = 0;
    uVar18 = extraout_x1_04;
  }
  piVar16[0x48] = 0;
  piVar16[0x49] = 0;
  piVar16[0x4a] = 0;
  piVar16[0x4b] = 0;
  *puVar1 = 0;
  FUN_71003a5020(*DAT_71052b7950,uVar18,param_3,param_4,param_5,param_6,param_7,param_8);
  iVar10 = *(int *)(param_1 + 0x358);
  piVar16 = FUN_71032df050(*(long *)(DAT_710532f7b0 + 8),iVar20);
  FUN_710375aa90((long *)local_80,"amiibo_write",(long ****)param_3,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_71032e2e70(&local_1a8,*(long *)(DAT_710532f7b0 + 8),iVar20);
  uVar11 = (uint)local_19e;
  if (9 < local_19e) {
    uVar11 = 10;
  }
  local_3e0 = (long **********)((ulong)local_3e0 & 0xffffffffffffff00);
  local_3e8 = (long **********)0x0;
  if ((uVar11 != 0) && (FUN_71019bc200((uint *)&local_3e8,"%02X"), uVar11 != 1)) {
    uVar14 = 1;
    do {
      FUN_71019bc200((uint *)&local_3e8," %02X");
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar11);
  }
  puVar1 = local_80[0];
  nn::prepo::PlayReport::Add((char *)(*local_80[0] + 0x4020),"uid");
  uVar9 = FUN_71032e00b0(*(long *)(DAT_710532f7b0 + 8),iVar20);
  local_3e8 = (long **********)(ulong)uVar9;
  nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),(Any64BitId *)"numbering_id");
  FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),*(undefined1 **)(piVar16 + 2));
  nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),0x7104359c60);
  uVar11 = FUN_71032633f0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),*(ulong *)(piVar16 + 2));
  local_3e8 = (long **********)(ulong)*(byte *)((long)piVar16 + 0x12);
  if (uVar11 <= *(byte *)((long)piVar16 + 0x12)) {
    local_3e8 = (long **********)0x0;
  }
  nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),(Any64BitId *)"color");
  bVar5 = *(byte *)((long)piVar16 + 0xaa);
  pppppppppplVar23 = (long **********)(ulong)bVar5;
  uVar9 = (ushort)bVar5;
  if (0xde < bVar5) {
    uVar9 = bVar5 + 0x2e;
  }
  if (uVar9 == 0) {
LAB_71019b9ff0:
    pppppppppplVar23 = (long **********)0x0;
  }
  else if (0xde < uVar9) {
    lVar12 = *(long *)(DAT_710532f730 + 8);
    bVar8 = FUN_71032a2c10(*(long *)(lVar12 + 0x218),uVar9);
    if ((bVar8) && (uVar14 = FUN_71032a2f50(*(long *)(lVar12 + 0x218),uVar9), (int)uVar14 < 0xe)) {
      lVar12 = *(long *)(DAT_710532f730 + 8);
      bVar8 = FUN_71032a2c10(*(long *)(lVar12 + 0x218),uVar9);
      if ((bVar8) && (uVar14 = FUN_71032a2f50(*(long *)(lVar12 + 0x218),uVar9), (int)uVar14 < 0xe))
      {
        pppppppppplVar23 = (long **********)(ulong)*(byte *)((long)piVar16 + 0xaa);
        goto LAB_71019b9ff4;
      }
    }
    goto LAB_71019b9ff0;
  }
LAB_71019b9ff4:
  local_3e8 = pppppppppplVar23;
  nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),(Any64BitId *)"spirits_ability0");
  bVar5 = *(byte *)((long)piVar16 + 0xab);
  pppppppppplVar23 = (long **********)(ulong)bVar5;
  uVar9 = (ushort)bVar5;
  if (0xde < bVar5) {
    uVar9 = bVar5 + 0x2e;
  }
  if (uVar9 == 0) {
LAB_71019ba090:
    pppppppppplVar23 = (long **********)0x0;
  }
  else if (0xde < uVar9) {
    lVar12 = *(long *)(DAT_710532f730 + 8);
    bVar8 = FUN_71032a2c10(*(long *)(lVar12 + 0x218),uVar9);
    if ((bVar8) && (uVar14 = FUN_71032a2f50(*(long *)(lVar12 + 0x218),uVar9), (int)uVar14 < 0xe)) {
      lVar12 = *(long *)(DAT_710532f730 + 8);
      bVar8 = FUN_71032a2c10(*(long *)(lVar12 + 0x218),uVar9);
      if (bVar8) {
        uVar14 = FUN_71032a2f50(*(long *)(lVar12 + 0x218),uVar9);
        uVar11 = (uint)*(byte *)((long)piVar16 + 0xab);
        if (0xd < (int)uVar14) {
          uVar11 = 0;
        }
        pppppppppplVar23 = (long **********)(ulong)uVar11;
        goto LAB_71019ba094;
      }
    }
    goto LAB_71019ba090;
  }
LAB_71019ba094:
  local_3e8 = pppppppppplVar23;
  nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),(Any64BitId *)"spirits_ability1");
  bVar5 = *(byte *)(piVar16 + 0x2b);
  pppppppppplVar23 = (long **********)(ulong)bVar5;
  uVar9 = (ushort)bVar5;
  if (0xde < bVar5) {
    uVar9 = bVar5 + 0x2e;
  }
  if (uVar9 == 0) {
LAB_71019ba134:
    pppppppppplVar23 = (long **********)0x0;
  }
  else if (0xde < uVar9) {
    lVar12 = *(long *)(DAT_710532f730 + 8);
    bVar8 = FUN_71032a2c10(*(long *)(lVar12 + 0x218),uVar9);
    if ((bVar8) && (uVar14 = FUN_71032a2f50(*(long *)(lVar12 + 0x218),uVar9), (int)uVar14 < 0xe)) {
      lVar12 = *(long *)(DAT_710532f730 + 8);
      bVar8 = FUN_71032a2c10(*(long *)(lVar12 + 0x218),uVar9);
      if ((bVar8) && (uVar14 = FUN_71032a2f50(*(long *)(lVar12 + 0x218),uVar9), (int)uVar14 < 0xe))
      {
        pppppppppplVar23 = (long **********)(ulong)*(byte *)(piVar16 + 0x2b);
        goto LAB_71019ba138;
      }
    }
    goto LAB_71019ba134;
  }
LAB_71019ba138:
  local_3e8 = pppppppppplVar23;
  nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),(Any64BitId *)"spirits_ability2");
  local_3e8 = (long **********)(ulong)*(ushort *)((long)piVar16 + 0xa2);
  nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),(Any64BitId *)"lv_exp");
  local_3e8 = (long **********)(ulong)*(ushort *)(piVar16 + 0x29);
  nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),(Any64BitId *)"cp_exp");
  nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),0x710432992c);
  nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),0x71043f0387);
  local_3e8 = (long **********)(ulong)*(ushort *)(piVar16 + 0x2c);
  nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),(Any64BitId *)"prize_point");
  nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),0x7104339ab8);
  nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),0x71044328fc);
  nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),0x710443290e);
  nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),0x710438c247);
  memset(&local_1a8,0,0x120);
  local_88 = 0xffffffff;
  puVar29 = *(undefined1 **)(piVar16 + 2);
  lVar12 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
  puVar17 = FUN_71032631a0(lVar12,0x11b1ccb807);
  if ((((((ulong)puVar29 & 0xff00000000000000) == 0xc100000000000000) &&
       (((ulong)puVar29 & 0xffffffffff) != 0)) &&
      (((ulong)puVar17 & 0xff00000000000000) == 0xc100000000000000)) &&
     (((ulong)puVar17 & 0xffffffffff) != 0)) {
    if ((((ulong)puVar17 ^ (ulong)puVar29) & 0xffffffffff) == 0) {
LAB_71019ba300:
      iVar4 = piVar16[0x42];
      if (iVar4 == 2) {
        uVar14 = 0x915a4ff6;
LAB_71019ba348:
        uVar14 = uVar14 | 0x1200000000;
      }
      else {
        if (iVar4 != 1) {
          if (iVar4 != 0) {
            puVar29 = &DAT_c1ffff0000000000;
            goto LAB_71019ba364;
          }
          uVar14 = 0x80f1c82e;
          goto LAB_71019ba348;
        }
        uVar14 = 0x14ef73f367;
      }
      puVar29 = FUN_71032631a0(lVar12,uVar14);
    }
  }
  else if ((((ulong)puVar17 & 0xffffffffff) != 0 &&
           ((ulong)puVar17 & 0xff00000000000000) == 0xc100000000000000) ==
           (((ulong)puVar29 & 0xff00000000000000) == 0xc100000000000000 &&
           ((ulong)puVar29 & 0xffffffffff) != 0)) goto LAB_71019ba300;
LAB_71019ba364:
  uVar18 = FUN_71032626e0(lVar12,(ulong)puVar29);
  local_88 = (int)uVar18;
  if (local_88 == 0x6e) {
    local_88 = 0x4b;
  }
  else if (local_88 == 0x72) {
    local_88 = 0x24;
  }
  local_3e8 = *(long ***********)((long)piVar16 + 0xc5);
  local_3e0 = *(long ***********)((long)piVar16 + 0xcd);
  local_3d8 = *(undefined4 **)((long)piVar16 + 0xd5);
  local_3d0 = *(char **)((long)piVar16 + 0xdd);
  local_3c8 = *(undefined8 *)((long)piVar16 + 0xe5);
  local_3c0 = *(char **)((long)piVar16 + 0xed);
  local_3b8 = *(undefined8 *)((long)piVar16 + 0xf5);
  local_3b0 = (char *)CONCAT62(local_3b0._2_6_,*(undefined2 *)((long)piVar16 + 0xfd));
  ppppppppppplVar30 = &local_3e8;
  FUN_7100323350((float *)&local_1a8,(byte *)&local_3e8);
  puVar1 = local_80[0];
  local_3e0 = (long **********)&DAT_71042e69f1;
  local_3d0 = "offensive";
  local_3c8 = CONCAT44(local_3c8._4_4_,2);
  local_3c0 = "grounded";
  local_3b8 = CONCAT44(local_3b8._4_4_,3);
  local_3b0 = "attack_out_cliff";
  local_3a8 = CONCAT44(local_3a8._4_4_,4);
  uStack_398 = 5;
  local_390 = "return_to_cliff";
  local_388 = 6;
  local_380 = "air_offensive";
  local_378 = 7;
  local_368 = 8;
  local_360 = "feint_master";
  local_358 = 9;
  local_350 = "feint_counter";
  local_340 = "feint_shooter";
  local_338 = 0xb;
  local_330 = "catcher";
  local_328 = 0xc;
  local_318 = 0xd;
  local_310 = "_100_keeper";
  local_308 = 0xe;
  local_300 = "attack_cancel";
  local_2f8 = 0xf;
  local_2e8 = 0x10;
  local_2e0 = "dash_attacker";
  local_2d8 = 0x11;
  local_2d0 = "critical_hitter";
  local_2c8 = 0x12;
  local_2b8 = 0x13;
  local_2b0 = "shield_master";
  local_2a8 = 0x14;
  local_2a0 = "just_shield_master";
  local_298 = 0x15;
  local_288 = 0x16;
  local_280 = "item_collector";
  local_278 = 0x17;
  local_270 = "item_throw_to_target";
  local_3d8 = (undefined4 *)CONCAT44(local_3d8._4_4_,1);
  uStack_3a0 = 0x71044543c2;
  local_39b = 0;
  local_370 = "cliffer";
  local_320 = "_100_attacker";
  local_2f0 = "smash_holder";
  local_268 = 0x18;
  local_258 = 0x19;
  local_250 = "smashball_collector";
  local_248 = 0x1a;
  local_240 = "hammer_collector";
  local_238 = 0x1b;
  local_2c0 = "meteor_master";
  local_290 = "shield_catch_master";
  local_228 = 0x1c;
  local_220 = "item_swinger";
  local_260 = "dragoon_collector";
  local_218 = 0x1d;
  local_230 = "special_flagger";
  local_210 = "homerun_batter";
  local_208 = 0x1e;
  local_200 = "club_swinger";
  local_1f8 = 0x1f;
  local_1e8 = 0x20;
  local_1f0 = "death_swinger";
  local_1d8 = 0x21;
  local_348 = 10;
  local_1e0 = "item_shooter";
  local_1d0 = "carrier_breaker";
  local_1c8 = 0x22;
  local_3e8 = (long **********)((ulong)local_3e8 & 0xffffffff00000000);
  local_1c0 = "charger";
  local_1b8 = 0x23;
  local_1b0 = "appeal";
  do {
    fVar31 = 1.0;
    if (*(uint *)ppppppppppplVar30 < 0x48) {
      fVar31 = *(float *)((long)&local_1a8 + (long)(int)*(uint *)ppppppppppplVar30 * 4);
    }
    dVar32 = 0.0;
    if ((ulong)ABS((double)fVar31) < 0x7ff0000000000001) {
      dVar32 = (double)fVar31;
    }
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),dVar32);
    ppppppppppplVar30 = ppppppppppplVar30 + 2;
  } while (ppppppppppplVar30 != (long ***********)&local_1a8);
  if (iVar10 == 2) {
    pcVar19 = (char *)(*puVar1 + 0x4020);
LAB_71019ba764:
    nn::prepo::PlayReport::Add(pcVar19,0x7104421c33);
  }
  else {
    if (iVar10 == 3) {
      pcVar19 = (char *)(*puVar1 + 0x4020);
      goto LAB_71019ba764;
    }
    if (iVar10 == 4) {
      pcVar19 = (char *)(*puVar1 + 0x4020);
      goto LAB_71019ba764;
    }
  }
  iVar10 = *(int *)(*DAT_710593b580 + 0x7300);
  if ((iVar10 == -1) || ((ulong)(long)iVar10 < *(ulong *)(*DAT_710593b580 + 0x72c0))) {
    nn::prepo::PlayReport::Save((Uid *)(*puVar1 + 0x4020));
    local_80[0] = (ulong *)0x0;
    uVar14 = *puVar1;
    *puVar1 = 0;
    if (uVar14 != 0) {
      FUN_710392eb40(uVar14);
    }
    FUN_710392eb40((ulong)puVar1);
    if (*(uint *)(param_1 + 0x358) < 2) {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x30),0x71042b3cc4);
      FUN_71019bbbf0(param_1,iVar20,param_1 + 0x38,param_4,param_5,param_6,param_7,param_8);
      piVar24 = *(int **)(param_1 + 0x210);
      piVar26 = *(int **)(param_1 + 0x218);
      piVar16 = piVar24;
      if (piVar24 != piVar26) {
        iVar10 = *piVar24;
        piVar28 = piVar24;
        while ((piVar16 = piVar28, iVar10 != iVar20 &&
               (piVar28 = piVar28 + 1, piVar16 = piVar26, piVar26 != piVar28))) {
          iVar10 = *piVar28;
        }
      }
      uVar14 = (long)piVar16 - (long)piVar24 >> 2;
      if (uVar14 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 4)) {
        FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 0x48) + uVar14 * 0x10 + 8),
                       0x71043df9cf);
      }
    }
    return;
  }
LAB_71019ba898:
                    /* WARNING: Subroutine does not return */
  abort();
}

