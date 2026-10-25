// addr:      71017c0f50
// offset:    0x17c0f50
// name:      FUN_71017c0f50
// mangled:   
// signature: undefined __cdecl FUN_71017c0f50(long * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71017c0f50(long *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long ****pppplVar9;
  Uid *pUVar10;
  uint uVar11;
  long lVar12;
  long **pplVar13;
  code *pcVar14;
  uint uVar15;
  long lVar16;
  byte *pbVar17;
  undefined8 local_380;
  undefined8 local_378;
  long local_370;
  long local_368;
  long *local_360;
  undefined8 local_270;
  byte local_268 [264];
  long alStack_160 [4];
  long *local_140;
  long alStack_130 [4];
  long *local_110;
  long alStack_100 [4];
  long *local_e0;
  long alStack_d0 [4];
  long *local_b0;
  long alStack_a0 [4];
  long *local_80;
  long ***local_70;
  code *local_68;
  undefined8 uStack_60;
  long *local_58;
  long ****local_50;
  ulong local_38;
  
  if (param_1[0xc] != 0) goto LAB_71017c17b0;
  lVar12 = param_1[3];
  param_1[4] = lVar12;
  if (param_1[5] != lVar12) {
    local_360 = param_1 + 5;
    local_380._0_4_ = 0;
    local_380._4_4_ = 0;
    local_368 = 0;
    local_378._0_4_ = 0;
    local_378._4_4_ = 0;
    local_370 = 0;
    FUN_71017c5960(param_1 + 3,&local_380);
    if (local_370 != CONCAT44(local_378._4_4_,(undefined4)local_378)) {
      local_370 = local_370 +
                  ((ulong)((local_370 + -0x1b0) - CONCAT44(local_378._4_4_,(undefined4)local_378)) /
                   0x1b0 ^ 0xffffffffffffffff) * 0x1b0;
    }
    if (CONCAT44(local_380._4_4_,(undefined4)local_380) != 0) {
      FUN_710392eb40(CONCAT44(local_380._4_4_,(undefined4)local_380));
    }
  }
  lVar12 = *param_1;
  if ((ulong)((param_1[2] - lVar12 >> 6) * -0x349cf60f68a0a23b) < 99) {
    lVar16 = param_1[1];
    local_360 = param_1 + 2;
    lVar4 = FUN_710392e290(0x10,0x26c01c0,param_3,param_4,param_5,param_6,param_7,param_8);
    if (lVar4 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_38 = local_38 & 0xffffffff00000000;
        local_70 = (long ***)0x26c01c0;
        param_3 = &local_70;
        uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_38);
        if (((uVar5 & 1) != 0) &&
           (lVar4 = FUN_710392e290(0x10,0x26c01c0,param_3,param_4,param_5,param_6,param_7,param_8),
           lVar4 != 0)) goto LAB_71017c108c;
      }
      lVar4 = 0;
    }
LAB_71017c108c:
    local_370 = lVar4 + ((lVar16 - lVar12) / 0x64340) * 0x64340;
    local_380._0_4_ = (undefined4)lVar4;
    local_380._4_4_ = (uint)((ulong)lVar4 >> 0x20);
    local_368 = lVar4 + 0x26c01c0;
    local_378 = local_370;
    FUN_71017c17d0(param_1,&local_380);
    if (local_370 != local_378) {
      local_370 = local_370 + ~((ulong)((local_370 + -0x64340) - local_378) / 0x64340) * 0x64340;
    }
    if (CONCAT44(local_380._4_4_,(undefined4)local_380) != 0) {
      FUN_710392eb40(CONCAT44(local_380._4_4_,(undefined4)local_380));
    }
  }
  local_268[0] = 0;
  local_140 = (long *)0x0;
  local_110 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_b0 = (long *)0x0;
  local_80 = (long *)0x0;
  local_378._4_4_ = local_378._4_4_ & 0xffffff00;
  local_380._0_4_ = 5;
  for (uVar5 = 0; "save:/save_data/mii"[uVar5] != '\0'; uVar5 = uVar5 + 2) {
    cVar1 = "save:/save_data/mii"[uVar5 + 1];
    *(char *)((long)&local_378 + uVar5 + 4) = "save:/save_data/mii"[uVar5];
    if (cVar1 == '\0') {
      uVar5 = uVar5 + 1;
      break;
    }
    *(char *)((long)&local_378 + uVar5 + 5) = cVar1;
  }
  uVar11 = 0x811c9dc5;
  *(undefined1 *)(((ulong)&local_380 | 0xc) + (uVar5 & 0xffffffff)) = 0;
  local_378._0_4_ = (undefined4)uVar5;
  uVar15 = local_378._4_4_ & 0xff;
  local_380._4_4_ = uVar11;
  if (local_378._4_1_ != '\0') {
    pbVar17 = (byte *)((ulong)&local_380 | 0xd);
    do {
      local_380._4_4_ = local_380._4_4_ * 0x89 ^ uVar15;
      uVar15 = (uint)*pbVar17;
      pbVar17 = pbVar17 + 1;
    } while (uVar15 != 0);
  }
  for (uVar5 = 0; (&DAT_710425eb1f)[uVar5] != 0; uVar5 = uVar5 + 2) {
    bVar2 = (&DAT_710425eb20)[uVar5];
    local_268[uVar5] = (&DAT_710425eb1f)[uVar5];
    if (bVar2 == 0) {
      uVar5 = uVar5 + 1;
      break;
    }
    local_268[uVar5 + 1] = bVar2;
  }
  local_268[uVar5 & 0xffffffff] = 0;
  uVar15 = (uint)local_268[0];
  if (local_268[0] != 0) {
    pbVar17 = local_268;
    do {
      pbVar17 = pbVar17 + 1;
      uVar11 = uVar11 * 0x89 ^ uVar15;
      uVar15 = (uint)*pbVar17;
    } while (uVar15 != 0);
  }
  local_270 = CONCAT44((int)uVar5,uVar11);
  local_70 = (long ***)&DAT_710509f538;
  local_68 = FUN_71017c1b50;
  uStack_60 = 0;
  local_58 = param_1;
  local_50 = &local_70;
  FUN_71003cb050((long *)&local_70,alStack_160);
  if (&local_70 == local_50) {
    pplVar13 = (*local_50)[4];
LAB_71017c1270:
    (*(code *)pplVar13)();
  }
  else if (local_50 != (long ****)0x0) {
    pplVar13 = (*local_50)[5];
    goto LAB_71017c1270;
  }
  local_70 = (long ***)&DAT_710509f580;
  local_68 = (code *)param_1;
  local_50 = &local_70;
  FUN_71003cb050((long *)&local_70,alStack_130);
  if (&local_70 == local_50) {
    pplVar13 = (*local_50)[4];
LAB_71017c12bc:
    (*(code *)pplVar13)();
  }
  else if (local_50 != (long ****)0x0) {
    pplVar13 = (*local_50)[5];
    goto LAB_71017c12bc;
  }
  local_70 = (long ***)&PTR_FUN_710509f5c8;
  local_68 = (code *)param_1;
  local_50 = &local_70;
  FUN_71017c1d00((long *)&local_70,alStack_d0);
  if (&local_70 == local_50) {
    pplVar13 = (*local_50)[4];
LAB_71017c1308:
    (*(code *)pplVar13)();
  }
  else if (local_50 != (long ****)0x0) {
    pplVar13 = (*local_50)[5];
    goto LAB_71017c1308;
  }
  local_70 = (long ***)&PTR_FUN_710509f610;
  local_68 = (code *)param_1;
  local_50 = &local_70;
  FUN_71017c1d00((long *)&local_70,alStack_a0);
  if (&local_70 == local_50) {
    pplVar13 = (*local_50)[4];
LAB_71017c1354:
    (*(code *)pplVar13)();
  }
  else if (local_50 != (long ****)0x0) {
    pplVar13 = (*local_50)[5];
    goto LAB_71017c1354;
  }
  puVar6 = (undefined8 *)FUN_710392e290(0x10,0x4d0,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_38 = local_38 & 0xffffffff00000000;
      local_70 = (long ***)0x4d0;
      pppplVar9 = &local_70;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_38);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x4d0,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_71017c13b4;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_71017c13b4:
  *puVar6 = param_1;
  FUN_71017c1e40((undefined4 *)(puVar6 + 2),(undefined4 *)&local_380);
  puVar6[0x94] = FUN_71017c2130;
  puVar6[0x95] = FUN_710143c880;
  puVar6[0x91] = FUN_71017c2120;
  puVar6[0x69] = FUN_71017c2150;
  puVar6[0x6b] = FUN_71017c2160;
  puVar6[0x6d] = FUN_71017c2220;
  puVar6[0x6f] = FUN_71017c22e0;
  puVar6[0x71] = FUN_71017c2530;
  puVar6[0x73] = FUN_71017c2910;
  puVar6[0x75] = FUN_71017c2d30;
  puVar6[0x77] = FUN_71017c31d0;
  puVar6[0x79] = FUN_71017c3fd0;
  puVar6[0x7b] = FUN_71017c4290;
  puVar6[100] = puVar6;
  puVar6[0x68] = 0;
  puVar6[0x67] = 0;
  puVar6[0x90] = 0;
  puVar6[0x8f] = 0;
  puVar6[0x8e] = 0;
  puVar6[0x8d] = 0;
  puVar6[0x8c] = 0;
  puVar6[0x8b] = 0;
  puVar6[0x93] = puVar6;
  puVar6[0x92] = 0;
  *(undefined2 *)(puVar6 + 0x99) = 0;
  puVar6[0x98] = 0;
  puVar6[0x97] = 0;
  puVar6[0x96] = 0;
  puVar6[0x6a] = 0;
  puVar6[0x6c] = 0;
  puVar6[0x6e] = 0;
  puVar6[0x70] = 0;
  puVar6[0x72] = 0;
  puVar6[0x74] = 0;
  puVar6[0x76] = 0;
  puVar6[0x78] = 0;
  puVar6[0x7a] = 0;
  puVar6[0x7c] = 0;
  puVar6[0x7d] = FUN_71017c47a0;
  puVar6[0x7e] = 0;
  puVar6[0x66] = 0;
  puVar6[0x65] = 0;
  *(undefined8 *)((long)puVar6 + 0x43c) = 0;
  *(undefined8 *)((long)puVar6 + 0x434) = 0;
  *(undefined8 *)((long)puVar6 + 0x42c) = 0;
  *(undefined8 *)((long)puVar6 + 0x424) = 0;
  *(undefined8 *)((long)puVar6 + 0x41c) = 0;
  *(undefined8 *)((long)puVar6 + 0x414) = 0;
  *(undefined8 *)((long)puVar6 + 0x40c) = 0;
  *(undefined8 *)((long)puVar6 + 0x3fc) = 0;
  *(undefined4 *)((long)puVar6 + 0x444) = 0;
  *(undefined8 *)((long)puVar6 + 0x404) = 0;
  *(undefined4 *)(puVar6 + 0x89) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x44c) = 0;
  *(undefined4 *)(puVar6 + 0x8a) = 0xffffffff;
  *(undefined1 *)((long)puVar6 + 0x454) = 0;
  *(undefined4 *)(puVar6 + 0x7f) = 0;
  FUN_71017c47e0(puVar6 + 100);
  local_70 = (long ***)0x0;
  local_38 = 0;
  pUVar10 = (Uid *)*DAT_710593b580;
  iVar3 = *(int *)(pUVar10 + 0x7300);
  if (iVar3 != -1) {
    if (*(ulong *)(pUVar10 + 0x72c0) <= (ulong)(long)iVar3) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pUVar10 = pUVar10 + (long)iVar3 * 0xcc0 + 0xcc0;
  }
  iVar3 = nn::fs::GetSaveDataSize((long *)&local_70,(long *)&local_38,pUVar10);
  uVar5 = local_38;
  if (iVar3 != 0) {
    nn::err::ShowError(iVar3);
    uVar5 = 0;
  }
  puVar6[0x97] = uVar5 - 0x80000;
  uVar5 = param_1[0xc];
  param_1[0xc] = (long)puVar6;
  if (uVar5 != 0) {
    uVar7 = *(ulong *)(uVar5 + 0x470);
    if (uVar7 != 0) {
      *(ulong *)(uVar5 + 0x478) = uVar7;
      FUN_710392eb40(uVar7);
    }
    uVar7 = *(ulong *)(uVar5 + 0x458);
    if (uVar7 != 0) {
      *(ulong *)(uVar5 + 0x460) = uVar7;
      FUN_710392eb40(uVar7);
    }
    plVar8 = *(long **)(uVar5 + 0x310);
    if ((long *)(uVar5 + 0x2f0) == plVar8) {
      pcVar14 = *(code **)(*plVar8 + 0x20);
LAB_71017c1604:
      (*pcVar14)();
    }
    else if (plVar8 != (long *)0x0) {
      pcVar14 = *(code **)(*plVar8 + 0x28);
      goto LAB_71017c1604;
    }
    plVar8 = *(long **)(uVar5 + 0x2e0);
    if ((long *)(uVar5 + 0x2c0) == plVar8) {
      pcVar14 = *(code **)(*plVar8 + 0x20);
LAB_71017c1630:
      (*pcVar14)();
    }
    else if (plVar8 != (long *)0x0) {
      pcVar14 = *(code **)(*plVar8 + 0x28);
      goto LAB_71017c1630;
    }
    plVar8 = *(long **)(uVar5 + 0x2b0);
    if ((long *)(uVar5 + 0x290) == plVar8) {
      pcVar14 = *(code **)(*plVar8 + 0x20);
LAB_71017c165c:
      (*pcVar14)();
    }
    else if (plVar8 != (long *)0x0) {
      pcVar14 = *(code **)(*plVar8 + 0x28);
      goto LAB_71017c165c;
    }
    plVar8 = *(long **)(uVar5 + 0x280);
    if ((long *)(uVar5 + 0x260) == plVar8) {
      pcVar14 = *(code **)(*plVar8 + 0x20);
LAB_71017c1688:
      (*pcVar14)();
    }
    else if (plVar8 != (long *)0x0) {
      pcVar14 = *(code **)(*plVar8 + 0x28);
      goto LAB_71017c1688;
    }
    plVar8 = *(long **)(uVar5 + 0x250);
    if ((long *)(uVar5 + 0x230) == plVar8) {
      pcVar14 = *(code **)(*plVar8 + 0x20);
LAB_71017c16b4:
      (*pcVar14)();
    }
    else if (plVar8 != (long *)0x0) {
      pcVar14 = *(code **)(*plVar8 + 0x28);
      goto LAB_71017c16b4;
    }
    FUN_710392eb40(uVar5);
  }
  if (alStack_a0 == local_80) {
    pcVar14 = *(code **)(*local_80 + 0x20);
LAB_71017c16ec:
    (*pcVar14)();
  }
  else if (local_80 != (long *)0x0) {
    pcVar14 = *(code **)(*local_80 + 0x28);
    goto LAB_71017c16ec;
  }
  if (alStack_d0 == local_b0) {
    pcVar14 = *(code **)(*local_b0 + 0x20);
LAB_71017c171c:
    (*pcVar14)();
  }
  else if (local_b0 != (long *)0x0) {
    pcVar14 = *(code **)(*local_b0 + 0x28);
    goto LAB_71017c171c;
  }
  if (alStack_100 == local_e0) {
    pcVar14 = *(code **)(*local_e0 + 0x20);
LAB_71017c174c:
    (*pcVar14)();
  }
  else if (local_e0 != (long *)0x0) {
    pcVar14 = *(code **)(*local_e0 + 0x28);
    goto LAB_71017c174c;
  }
  if (alStack_130 == local_110) {
    pcVar14 = *(code **)(*local_110 + 0x20);
LAB_71017c177c:
    (*pcVar14)();
  }
  else if (local_110 != (long *)0x0) {
    pcVar14 = *(code **)(*local_110 + 0x28);
    goto LAB_71017c177c;
  }
  if (alStack_160 == local_140) {
    pcVar14 = *(code **)(*local_140 + 0x20);
  }
  else {
    if (local_140 == (long *)0x0) goto LAB_71017c17b0;
    pcVar14 = *(code **)(*local_140 + 0x28);
  }
  (*pcVar14)();
LAB_71017c17b0:
  *(undefined1 *)((long)param_1 + 0xfc) = 0;
  return;
}

