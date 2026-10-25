// addr:      7101714c00
// offset:    0x1714c00
// name:      FUN_7101714c00
// mangled:   
// signature: undefined __cdecl FUN_7101714c00(long param_1, long param_2, undefined2 * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101714c00(long param_1,long param_2,undefined2 *param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  undefined **ppuVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long ****pppplVar9;
  undefined1 *puVar10;
  long lVar11;
  long *****ppppplVar12;
  long ****pppplVar13;
  long lVar14;
  ulong uVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  long ****pppplVar19;
  byte *pbVar20;
  ulong uVar21;
  ulong uVar22;
  char *pcVar23;
  long ****pppplVar24;
  long ****pppplVar25;
  byte *pbVar26;
  int iVar27;
  long *****ppppplVar28;
  long *****ppppplVar29;
  long ****local_1b0;
  long ****local_1a8;
  undefined8 *local_1a0;
  undefined **local_198;
  undefined **local_190;
  undefined **local_188;
  undefined ***local_180;
  undefined8 local_178;
  undefined ***local_70 [2];
  
  local_190 = (undefined **)((ulong)local_190 & 0xffffffffffffff00);
  local_198 = &PTR_FUN_710509cc08;
  local_1b0 = (long ****)0x0;
  local_180 = &local_190;
  local_1a8 = (long ****)0x0;
  local_1a0 = (undefined8 *)0x0;
  local_178 = 0x10;
  if (DAT_710523d00c < 0xe) {
    puVar10 = (&PTR_s_jp_ja_710523d010)[(int)DAT_710523d00c];
  }
  else {
    puVar10 = &DAT_71043ffe6b;
  }
  uVar22 = 0x666666666666666;
  FUN_71001aff70((long)&local_198,"lang:%s",puVar10,param_4,param_5,param_6,param_7,param_8);
  lVar11 = (long)local_1a8 - (long)local_1b0 >> 3;
  uVar21 = lVar11 * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar21) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar14 = (long)local_1a0 - (long)local_1b0 >> 3;
  if ((ulong)(lVar14 * -0x3333333333333333) < 0x333333333333333) {
    uVar15 = lVar14 * -0x6666666666666666;
    uVar22 = uVar21;
    if (uVar21 <= uVar15) {
      uVar22 = uVar15;
    }
    if (uVar22 != 0) goto LAB_7101714cf0;
    puVar6 = (undefined8 *)0x0;
  }
  else {
LAB_7101714cf0:
    puVar6 = FUN_71001b1820(uVar22 * 0x28);
  }
  pppplVar19 = (long ****)(puVar6 + lVar11);
  *pppplVar19 = (long ***)&PTR_FUN_710509cc08;
  *(undefined1 *)(pppplVar19 + 1) = 0;
  pppplVar19[3] = (long ***)(pppplVar19 + 1);
  pppplVar19[4] = (long ***)0x10;
  FUN_71001b47e0((long)pppplVar19,(char *)local_180,-1);
  pppplVar24 = local_1a8;
  puVar6 = puVar6 + uVar22 * 5;
  pppplVar13 = pppplVar19 + 5;
  pppplVar9 = local_1b0;
  pppplVar25 = local_1b0;
  if (local_1a8 != local_1b0) {
    lVar14 = 0;
    lVar11 = (long)local_1b0 - (long)local_1a8;
    do {
      puVar7 = (undefined8 *)((long)pppplVar19 + lVar14 + -0x28);
      *puVar7 = &PTR_FUN_710509cc08;
      puVar10 = (undefined1 *)((long)pppplVar19 + lVar14 + -0x20);
      *puVar10 = 0;
      *(undefined1 **)((long)pppplVar19 + lVar14 + -0x10) = puVar10;
      *(undefined8 *)((long)pppplVar19 + lVar14 + -8) = 0x10;
      if (pppplVar24 != pppplVar19) {
        FUN_7101716c60((long)puVar7,(long)pppplVar24 + lVar14 + -0x28);
      }
      lVar14 = lVar14 + -0x28;
    } while (lVar11 != lVar14);
    pppplVar19 = (long ****)((long)pppplVar19 + lVar14);
    pppplVar9 = local_1a8;
    pppplVar25 = local_1b0;
  }
  while (local_1b0 = pppplVar19, local_1a8 = pppplVar13, local_1a0 = puVar6, pppplVar9 != pppplVar25
        ) {
    pppplVar9 = pppplVar9 + -5;
    (*(code *)**pppplVar9)(pppplVar9);
    puVar6 = local_1a0;
    pppplVar13 = local_1a8;
    pppplVar19 = local_1b0;
  }
  if (pppplVar25 != (long ****)0x0) {
    FUN_71001b1870((long)pppplVar25);
  }
  if ((long *****)(param_1 + 0xd8) != &local_1b0) {
    FUN_710170fde0((long *)(param_1 + 0xd8),(long)local_1b0,(long)local_1a8);
  }
  local_198 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_198);
  pppplVar24 = local_1b0;
  pppplVar9 = local_1a8;
  if (local_1b0 != (long ****)0x0) {
    while (pppplVar9 != pppplVar24) {
      pppplVar9 = pppplVar9 + -5;
      (*(code *)**pppplVar9)(pppplVar9);
    }
    local_1a8 = pppplVar24;
    FUN_71001b1870((long)local_1b0);
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_3 + 0x24);
  local_180 = &local_190;
  local_198 = &PTR_FUN_710509cc08;
  local_190 = (undefined **)((ulong)local_190 & 0xffffffffffffff00);
  local_178 = 0x10;
  FUN_71001b4b40((long)&local_198,param_3 + 0x2a,-1);
  FUN_71001b2f70(param_1 + 0x10,(long)&local_198);
  local_198 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_198);
  *(undefined2 *)(param_1 + 0x38) = *param_3;
  local_190 = (undefined **)((ulong)local_190 & 0xffffffffffff0000);
  local_188 = (undefined **)0x0;
  local_180 = (undefined ***)0x0;
  local_178 = 0;
  local_198 = &PTR_FUN_710509cd98;
  FUN_710170d6f0(&local_188,(undefined8 *)0x0,(undefined8 *)0x0);
  FUN_710028af20(param_1 + 0x78,(long)&local_198);
  local_198 = &PTR_FUN_710509ce18;
  if (local_188 != (undefined **)0x0) {
    local_180 = (undefined ***)local_188;
    FUN_71001b1870((long)local_188);
  }
  uVar5 = *(uint *)(param_3 + 0x50);
  FUN_71001d7780(param_1 + 0x40);
  FUN_71001d7890(param_1 + 0x40,param_3 + 0x52,(ulong)uVar5);
  FUN_71001b6080(&local_198);
  lVar11 = FUN_71001b0ab0((long)&local_198,"DataStorePreparePostParam: (");
  lVar11 = FUN_71001b0ab0(lVar11,"size=");
  lVar11 = FUN_71001b6320(lVar11,(ulong)*(uint *)(param_1 + 0xc));
  lVar11 = FUN_71001b0ab0(lVar11,", name=");
  lVar11 = FUN_71001b5d60(lVar11,param_1 + 0x10);
  lVar11 = FUN_71001b0ab0(lVar11,", dataType=");
  lVar11 = FUN_71001b6470(lVar11,(ulong)*(ushort *)(param_1 + 0x38));
  lVar11 = FUN_71001b0ab0(lVar11,", accessPermission=");
  puVar6 = *(undefined8 **)(param_1 + 0x88);
  lVar14 = FUN_71001b0ab0(lVar11,"DataStorePermission: (permission=");
  lVar14 = FUN_71001b61d0(lVar14,(uint)*(byte *)(param_1 + 0x81));
  FUN_71001b0ab0(lVar14,", targetIds=(");
  if (puVar6 != *(undefined8 **)(param_1 + 0x90)) {
    iVar27 = 0;
    do {
      if (iVar27 != 0) {
        FUN_71001b0ab0(lVar11,", ");
      }
      puVar7 = puVar6 + 1;
      FUN_71001b3300(lVar11,*puVar6);
      iVar27 = iVar27 + -1;
      puVar6 = puVar7;
    } while (puVar7 != *(undefined8 **)(param_1 + 0x90));
  }
  FUN_71001b0ab0(lVar11,"))");
  lVar11 = FUN_71001b0ab0(lVar11,", updatePermission=");
  puVar6 = *(undefined8 **)(param_1 + 0xb0);
  lVar14 = FUN_71001b0ab0(lVar11,"DataStorePermission: (permission=");
  lVar14 = FUN_71001b61d0(lVar14,(uint)*(byte *)(param_1 + 0xa9));
  FUN_71001b0ab0(lVar14,", targetIds=(");
  if (puVar6 != *(undefined8 **)(param_1 + 0xb8)) {
    iVar27 = 0;
    do {
      if (iVar27 != 0) {
        FUN_71001b0ab0(lVar11,", ");
      }
      puVar7 = puVar6 + 1;
      FUN_71001b3300(lVar11,*puVar6);
      iVar27 = iVar27 + -1;
      puVar6 = puVar7;
    } while (puVar7 != *(undefined8 **)(param_1 + 0xb8));
  }
  FUN_71001b0ab0(lVar11,"))");
  lVar11 = FUN_71001b0ab0(lVar11,", dataFlag=");
  lVar11 = FUN_71001b4390(lVar11);
  lVar11 = FUN_71001b6320(lVar11,(ulong)*(uint *)(param_1 + 200));
  lVar11 = FUN_71001b6890(lVar11);
  lVar11 = FUN_71001b0ab0(lVar11,", period=");
  lVar11 = FUN_71001b6470(lVar11,(ulong)*(ushort *)(param_1 + 0xcc));
  lVar11 = FUN_71001b0ab0(lVar11,", referDataId=");
  lVar11 = FUN_71001b6320(lVar11,(ulong)*(uint *)(param_1 + 0xd0));
  lVar11 = FUN_71001b0ab0(lVar11,", persistenceInitParam=");
  lVar11 = FUN_71001b0ab0(lVar11,"DataStorePersistenceInitParam: (");
  lVar11 = FUN_71001b0ab0(lVar11,"persistenceSlotId=");
  lVar11 = FUN_71001b6470(lVar11,(ulong)*(ushort *)(param_1 + 0x112));
  lVar11 = FUN_71001b0ab0(lVar11,", deleteLastObject=");
  lVar11 = FUN_71001b65c0(lVar11,(uint)*(byte *)(param_1 + 0x114));
  FUN_71001b0ab0(lVar11,")");
  FUN_71001b0ab0((long)&local_198,", ratingInitParams=(");
  lVar11 = *(long *)(param_1 + 0xf0);
  if (lVar11 != *(long *)(param_1 + 0xf8)) {
    do {
      lVar14 = FUN_71001b0ab0((long)&local_198,"slot=");
      lVar14 = FUN_71001b6470(lVar14,(long)*(char *)(lVar11 + 9));
      lVar14 = FUN_71001b0ab0(lVar14,", ratingInitParam=");
      lVar8 = FUN_71001b0ab0(lVar14,"DataStoreRatingInitParam: (");
      lVar8 = FUN_71001b0ab0(lVar8,"flag=");
      lVar8 = FUN_71001b61d0(lVar8,(uint)*(byte *)(lVar11 + 0x19));
      lVar8 = FUN_71001b0ab0(lVar8,", internalFlag=");
      lVar8 = FUN_71001b61d0(lVar8,(uint)*(byte *)(lVar11 + 0x1a));
      lVar8 = FUN_71001b0ab0(lVar8,", lockType=");
      lVar8 = FUN_71001b61d0(lVar8,(uint)*(byte *)(lVar11 + 0x1b));
      lVar8 = FUN_71001b0ab0(lVar8,", initialValue=");
      lVar8 = FUN_71001b6740(lVar8,*(undefined8 *)(lVar11 + 0x20));
      lVar8 = FUN_71001b0ab0(lVar8,", rangeMin=");
      lVar8 = FUN_71001b6470(lVar8,(ulong)*(uint *)(lVar11 + 0x28));
      lVar8 = FUN_71001b0ab0(lVar8,", rangeMax=");
      lVar8 = FUN_71001b6470(lVar8,(ulong)*(uint *)(lVar11 + 0x2c));
      lVar8 = FUN_71001b0ab0(lVar8,", periodHour=");
      lVar8 = FUN_71001b6470(lVar8,(long)*(char *)(lVar11 + 0x30));
      lVar8 = FUN_71001b0ab0(lVar8,", periodDuration=");
      lVar8 = FUN_71001b6470(lVar8,(long)*(short *)(lVar11 + 0x32));
      FUN_71001b0ab0(lVar8,")");
      FUN_71001b0ab0(lVar14,", ");
      lVar11 = lVar11 + 0x38;
    } while (lVar11 != *(long *)(param_1 + 0xf8));
  }
  FUN_71001b0ab0((long)&local_198,")");
  FUN_71001b0ab0((long)&local_198,", tags=(");
  lVar11 = *(long *)(param_1 + 0xd8);
  if (lVar11 != *(long *)(param_1 + 0xe0)) {
    do {
      lVar14 = FUN_71001b5d60((long)&local_198,lVar11);
      FUN_71001b0ab0(lVar14,", ");
      lVar11 = lVar11 + 0x28;
    } while (lVar11 != *(long *)(param_1 + 0xe0));
  }
  FUN_71001b0ab0((long)&local_198,")");
  FUN_71001b0ab0((long)&local_198,", metaBinary=");
  pbVar26 = *(byte **)(param_1 + 0x58);
  if (*(byte **)(param_1 + 0x60) != *(byte **)(param_1 + 0x58)) {
    do {
      lVar11 = FUN_71001b4390((long)&local_198);
      pbVar20 = pbVar26 + 1;
      FUN_71001b61d0(lVar11,(uint)*pbVar26);
      pbVar26 = pbVar20;
    } while (pbVar20 != *(byte **)(param_1 + 0x60));
  }
  FUN_71001b0ab0((long)&local_198,")");
  FUN_71001b60c0(&local_198);
  *(undefined1 *)(param_2 + 9) = *(undefined1 *)(param_3 + 4);
  *(undefined1 *)(param_2 + 10) = *(undefined1 *)((long)param_3 + 9);
  *(undefined1 *)(param_2 + 0xb) = *(undefined1 *)(param_3 + 5);
  local_198 = &PTR_FUN_710509cc08;
  local_190 = (undefined **)((ulong)local_190 & 0xffffffffffffff00);
  local_178 = 0x10;
  local_180 = &local_190;
  FUN_71001b47e0((long)&local_198,(char *)(param_3 + 0x696),-1);
  FUN_71001b2f70(param_2 + 0x10,(long)&local_198);
  local_198 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_198);
  local_198 = &PTR_FUN_710509cc08;
  local_178 = 0x10;
  local_190 = (undefined **)((ulong)local_190 & 0xffffffffffffff00);
  local_180 = &local_190;
  FUN_71001b47e0((long)&local_198,(char *)(param_3 + 0x6ba),-1);
  FUN_71001b2f70(param_2 + 0x38,(long)&local_198);
  local_198 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_198);
  local_198 = &PTR_FUN_710509cc08;
  local_178 = 0x10;
  local_190 = (undefined **)((ulong)local_190 & 0xffffffffffffff00);
  local_180 = &local_190;
  FUN_71001b47e0((long)&local_198,(char *)(param_3 + 0x6de),-1);
  FUN_71001b2f70(param_2 + 0x60,(long)&local_198);
  local_198 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_198);
  *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(param_3 + 0x700);
  pcVar23 = (char *)((long)param_3 + 0xb);
  *(undefined4 *)(param_2 + 0xc4) = *(undefined4 *)(param_3 + 0x702);
  local_190 = (undefined **)0x0;
  local_188 = (undefined **)0x0;
  local_198 = (undefined **)0x0;
  do {
    cVar2 = *pcVar23;
    if (cVar2 != -1) {
      if (local_190 == local_188) {
        lVar11 = (long)local_190 - (long)local_198;
        uVar21 = lVar11 + 1;
        if ((long)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        if ((ulong)((long)local_188 - (long)local_198) < 0x3fffffffffffffff) {
          uVar22 = ((long)local_188 - (long)local_198) * 2;
          if (uVar21 <= uVar22) {
            uVar21 = uVar22;
          }
          if (uVar21 != 0) goto LAB_7101715464;
          puVar6 = (undefined8 *)0x0;
        }
        else {
          uVar21 = 0x7fffffffffffffff;
LAB_7101715464:
          puVar6 = FUN_71001b1820(uVar21);
          cVar2 = *pcVar23;
        }
        ppuVar4 = local_198;
        ppuVar17 = (undefined **)((long)puVar6 + lVar11);
        local_188 = (undefined **)((long)puVar6 + uVar21);
        ppuVar16 = (undefined **)((long)ppuVar17 + 1);
        *(char *)ppuVar17 = cVar2;
        ppuVar18 = local_190;
        if (local_190 != local_198) {
          do {
            ppuVar17 = (undefined **)((long)ppuVar17 + -1);
            ppuVar18 = (undefined **)((long)ppuVar18 + -1);
            *(char *)ppuVar17 = *(char *)ppuVar18;
          } while (local_198 != ppuVar18);
          ppuVar17 = (undefined **)
                     ((long)puVar6 + (long)((long)local_198 + (lVar11 - (long)local_190)));
        }
        bVar1 = local_198 != (undefined **)0x0;
        local_198 = ppuVar17;
        local_190 = ppuVar16;
        if (bVar1) {
          FUN_71001b1870((long)ppuVar4);
        }
      }
      else {
        *(char *)local_190 = cVar2;
        local_190 = (undefined **)((long)local_190 + 1);
      }
    }
    pcVar23 = pcVar23 + 1;
  } while (pcVar23 != (char *)((long)param_3 + 0x13));
  if ((undefined ***)(param_2 + 0x88) != &local_198) {
    FUN_71017143b0((undefined ***)(param_2 + 0x88),(undefined1 *)local_198,(undefined1 *)local_190);
  }
  if (local_198 != (undefined **)0x0) {
    local_190 = local_198;
    FUN_71001b1870((long)local_198);
  }
  local_1a8 = (long ****)0x0;
  local_1a0 = (undefined8 *)0x0;
  uVar3 = *param_3;
  local_1b0 = (long ****)&local_1a8;
  FUN_710170e860((long *)&local_1b0,"country",(char *)(param_3 + 0x65c));
  local_198 = &PTR_FUN_710509cc08;
  local_180 = &local_190;
  local_190 = (undefined **)((ulong)local_190 & 0xffffffffffffff00);
  local_178 = 0x10;
  FUN_71001b4b40((long)&local_198,param_3 + 0x65e,-1);
  pppplVar9 = (long ****)FUN_71001b1820(0x58);
  pppplVar24 = pppplVar9 + 4;
  *pppplVar24 = (long ***)&PTR_FUN_710509cc08;
  *(undefined1 *)(pppplVar9 + 5) = 0;
  pppplVar9[7] = (long ***)(pppplVar9 + 5);
  pppplVar9[8] = (long ***)0x10;
  FUN_71001b47e0((long)pppplVar24,"nickname",-1);
  FUN_71001b7960(pppplVar9 + 9,(long)&local_198);
  ppppplVar29 = &local_1a8;
  ppppplVar28 = &local_1a8;
  ppppplVar12 = (long *****)local_1a8;
  while (ppppplVar12 != (long *****)0x0) {
    while( true ) {
      ppppplVar28 = ppppplVar12;
      uVar5 = FUN_71001b4e80((long)pppplVar24,(long)(ppppplVar28 + 4));
      if ((uVar5 & 1) == 0) break;
      ppppplVar12 = (long *****)*ppppplVar28;
      ppppplVar29 = ppppplVar28;
      if ((long *****)*ppppplVar28 == (long *****)0x0) {
        pppplVar13 = *ppppplVar28;
        goto joined_r0x007101715608;
      }
    }
    uVar5 = FUN_71001b4e80((long)(ppppplVar28 + 4),(long)pppplVar24);
    if ((uVar5 & 1) == 0) break;
    ppppplVar29 = ppppplVar28 + 1;
    ppppplVar12 = (long *****)*ppppplVar29;
  }
  pppplVar13 = *ppppplVar29;
joined_r0x007101715608:
  if (pppplVar13 == (long ****)0x0) {
    *pppplVar9 = (long ***)0x0;
    pppplVar9[1] = (long ***)0x0;
    pppplVar9[2] = (long ***)ppppplVar28;
    *ppppplVar29 = pppplVar9;
    if ((long *****)*local_1b0 != (long *****)0x0) {
      pppplVar9 = *ppppplVar29;
      local_1b0 = (long ****)*local_1b0;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((long *)local_1a8,(long *)pppplVar9);
    local_1a0 = (undefined8 *)((long)local_1a0 + 1);
  }
  else if (pppplVar9 != (long ****)0x0) {
    FUN_71001b78a0((long *)(pppplVar9 + 9));
    pppplVar9[4] = (long ***)&PTR_FUN_710509cc08;
    FUN_71001b4910((long)pppplVar24);
    FUN_71001b1870((long)pppplVar9);
  }
  local_198 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_198);
  switch(uVar3) {
  case 0:
    FUN_710170e9d0((long *)&local_1b0,"version",(uint *)(param_3 + 0x66c));
    FUN_71017166a0((long *)&local_1b0,"mii_type",(uint *)(param_3 + 0x66e));
    FUN_710170ecb0((long *)&local_1b0,"mii_gender",(uint *)(param_3 + 0x670));
    FUN_7101716810((long *)&local_1b0,"hat",(uint *)(param_3 + 0x672));
    pppplVar9 = (long ****)FUN_71001b1820(0x58);
    pppplVar24 = pppplVar9 + 4;
    *pppplVar24 = (long ***)&PTR_FUN_710509cc08;
    *(undefined1 *)(pppplVar9 + 5) = 0;
    pppplVar9[7] = (long ***)(pppplVar9 + 5);
    pppplVar9[8] = (long ***)0x10;
    FUN_71001b47e0((long)pppplVar24,"body",-1);
    FUN_71001b7910((ulong *)(pppplVar9 + 9),*(uint *)(param_3 + 0x674));
    ppppplVar29 = &local_1a8;
    ppppplVar28 = &local_1a8;
    ppppplVar12 = (long *****)local_1a8;
    while (ppppplVar12 != (long *****)0x0) {
      while( true ) {
        ppppplVar28 = ppppplVar12;
        uVar5 = FUN_71001b4e80((long)pppplVar24,(long)(ppppplVar28 + 4));
        if ((uVar5 & 1) == 0) break;
        ppppplVar12 = (long *****)*ppppplVar28;
        ppppplVar29 = ppppplVar28;
        if ((long *****)*ppppplVar28 == (long *****)0x0) {
          pppplVar13 = *ppppplVar28;
          goto joined_r0x007101715c84;
        }
      }
      uVar5 = FUN_71001b4e80((long)(ppppplVar28 + 4),(long)pppplVar24);
      if ((uVar5 & 1) == 0) break;
      ppppplVar29 = ppppplVar28 + 1;
      ppppplVar12 = (long *****)*ppppplVar29;
    }
    pppplVar13 = *ppppplVar29;
joined_r0x007101715c84:
    if (pppplVar13 == (long ****)0x0) {
      *pppplVar9 = (long ***)0x0;
      pppplVar9[1] = (long ***)0x0;
      pppplVar9[2] = (long ***)ppppplVar28;
      *ppppplVar29 = pppplVar9;
      if ((long *****)*local_1b0 != (long *****)0x0) {
        pppplVar9 = *ppppplVar29;
        local_1b0 = (long ****)*local_1b0;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((long *)local_1a8,(long *)pppplVar9);
      local_1a0 = (undefined8 *)((long)local_1a0 + 1);
    }
    else if (pppplVar9 != (long ****)0x0) {
      FUN_71001b78a0((long *)(pppplVar9 + 9));
      pppplVar9[4] = (long ***)&PTR_FUN_710509cc08;
      FUN_71001b4910((long)pppplVar24);
      FUN_71001b1870((long)pppplVar9);
    }
    FUN_710170eb40((long *)&local_1b0,"color",(uint *)(param_3 + 0x676));
    FUN_7101716980((long *)&local_1b0,"technique_N",(uint *)(param_3 + 0x678));
    FUN_7101716980((long *)&local_1b0,"technique_U",(uint *)(param_3 + 0x67a));
    FUN_7101716980((long *)&local_1b0,"technique_S",(uint *)(param_3 + 0x67c));
    FUN_7101716980((long *)&local_1b0,"technique_D",(uint *)(param_3 + 0x67e));
    FUN_710170eb40((long *)&local_1b0,"voice",(uint *)(param_3 + 0x680));
    break;
  case 1:
    FUN_710170e9d0((long *)&local_1b0,"version",(uint *)(param_3 + 0x66c));
    pppplVar9 = (long ****)FUN_71001b1820(0x58);
    pppplVar24 = pppplVar9 + 4;
    *pppplVar24 = (long ***)&PTR_FUN_710509cc08;
    *(undefined1 *)(pppplVar9 + 5) = 0;
    pppplVar9[7] = (long ***)(pppplVar9 + 5);
    pppplVar9[8] = (long ***)0x10;
    FUN_71001b47e0((long)pppplVar24,"size",-1);
    FUN_71001b78f0((long *)(pppplVar9 + 9),*(int *)(param_3 + 0x66e));
    ppppplVar29 = &local_1a8;
    ppppplVar28 = &local_1a8;
    ppppplVar12 = (long *****)local_1a8;
    while (ppppplVar12 != (long *****)0x0) {
      while( true ) {
        ppppplVar28 = ppppplVar12;
        uVar5 = FUN_71001b4e80((long)pppplVar24,(long)(ppppplVar28 + 4));
        if ((uVar5 & 1) == 0) break;
        ppppplVar12 = (long *****)*ppppplVar28;
        ppppplVar29 = ppppplVar28;
        if ((long *****)*ppppplVar28 == (long *****)0x0) {
          pppplVar13 = *ppppplVar28;
          goto joined_r0x007101715cc0;
        }
      }
      uVar5 = FUN_71001b4e80((long)(ppppplVar28 + 4),(long)pppplVar24);
      if ((uVar5 & 1) == 0) break;
      ppppplVar29 = ppppplVar28 + 1;
      ppppplVar12 = (long *****)*ppppplVar29;
    }
    pppplVar13 = *ppppplVar29;
joined_r0x007101715cc0:
    if (pppplVar13 == (long ****)0x0) {
      *pppplVar9 = (long ***)0x0;
      pppplVar9[1] = (long ***)0x0;
      pppplVar9[2] = (long ***)ppppplVar28;
      *ppppplVar29 = pppplVar9;
      if ((long *****)*local_1b0 != (long *****)0x0) {
        pppplVar9 = *ppppplVar29;
        local_1b0 = (long ****)*local_1b0;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((long *)local_1a8,(long *)pppplVar9);
      local_1a0 = (undefined8 *)((long)local_1a0 + 1);
    }
    else if (pppplVar9 != (long ****)0x0) {
      FUN_71001b78a0((long *)(pppplVar9 + 9));
      pppplVar9[4] = (long ***)&PTR_FUN_710509cc08;
      FUN_71001b4910((long)pppplVar24);
      FUN_71001b1870((long)pppplVar9);
    }
    FUN_71017166a0((long *)&local_1b0,"capacity",(uint *)(param_3 + 0x670));
    FUN_7101716810((long *)&local_1b0,"bgm",(uint *)(param_3 + 0x672));
    FUN_7101716af0((long *)&local_1b0,"use_gear",(byte *)(param_3 + 0x674));
    FUN_7101716af0((long *)&local_1b0,"use_rail",(byte *)((long)param_3 + 0xce9));
    FUN_7101716980((long *)&local_1b0,"use_gimmick",(uint *)(param_3 + 0x676));
    break;
  case 2:
    FUN_710170e9d0((long *)&local_1b0,"version",(uint *)(param_3 + 0x66c));
    FUN_710170eb40((long *)&local_1b0,"stage",(uint *)(param_3 + 0x66e));
    FUN_710170ecb0((long *)&local_1b0,"stage_type",(uint *)(param_3 + 0x670));
    FUN_710170ee20((long *)&local_1b0,"use_spirits",(byte *)(param_3 + 0x672));
    FUN_710170ecb0((long *)&local_1b0,"melee_mode",(uint *)(param_3 + 0x674));
    FUN_710170ecb0((long *)&local_1b0,"melee_kind",(uint *)(param_3 + 0x676));
    FUN_710170ecb0((long *)&local_1b0,"melee_rule",(uint *)(param_3 + 0x678));
    FUN_710170ef90((long *)&local_1b0,"score",(undefined8 *)(param_3 + 0x67c));
    FUN_710170ecb0((long *)&local_1b0,"movie_time",(uint *)(param_3 + 0x680));
    if (*(char *)(param_3 + 0x682) != -1) {
      local_190 = (undefined **)((ulong)local_190 & 0xffffffffffffff00);
      local_198 = (undefined **)0x0;
      FUN_710062dc20((uint *)&local_198,"fighter_%d");
      local_70[0] = &local_190;
      FUN_710170f880((long *)&local_1b0,local_70,(byte *)(param_3 + 0x682));
    }
    if (*(byte *)((long)param_3 + 0xd05) != 0xff) {
      local_190 = (undefined **)((ulong)local_190 & 0xffffffffffffff00);
      local_198 = (undefined **)0x0;
      FUN_710062dc20((uint *)&local_198,"fighter_%d");
      local_70[0] = &local_190;
      FUN_710170f880((long *)&local_1b0,local_70,(byte *)((long)param_3 + 0xd05));
    }
    if (*(byte *)(param_3 + 0x683) != 0xff) {
      local_190 = (undefined **)((ulong)local_190 & 0xffffffffffffff00);
      local_198 = (undefined **)0x0;
      FUN_710062dc20((uint *)&local_198,"fighter_%d");
      local_70[0] = &local_190;
      FUN_710170f880((long *)&local_1b0,local_70,(byte *)(param_3 + 0x683));
    }
    if (*(byte *)((long)param_3 + 0xd07) != 0xff) {
      local_190 = (undefined **)((ulong)local_190 & 0xffffffffffffff00);
      local_198 = (undefined **)0x0;
      FUN_710062dc20((uint *)&local_198,"fighter_%d");
      local_70[0] = &local_190;
      FUN_710170f880((long *)&local_1b0,local_70,(byte *)((long)param_3 + 0xd07));
    }
    if (*(byte *)(param_3 + 0x684) != 0xff) {
      local_190 = (undefined **)((ulong)local_190 & 0xffffffffffffff00);
      local_198 = (undefined **)0x0;
      FUN_710062dc20((uint *)&local_198,"fighter_%d");
      local_70[0] = &local_190;
      FUN_710170f880((long *)&local_1b0,local_70,(byte *)(param_3 + 0x684));
    }
    if (*(byte *)((long)param_3 + 0xd09) != 0xff) {
      local_190 = (undefined **)((ulong)local_190 & 0xffffffffffffff00);
      local_198 = (undefined **)0x0;
      FUN_710062dc20((uint *)&local_198,"fighter_%d");
      local_70[0] = &local_190;
      FUN_710170f880((long *)&local_1b0,local_70,(byte *)((long)param_3 + 0xd09));
    }
    if (*(byte *)(param_3 + 0x685) != 0xff) {
      local_190 = (undefined **)((ulong)local_190 & 0xffffffffffffff00);
      local_198 = (undefined **)0x0;
      FUN_710062dc20((uint *)&local_198,"fighter_%d");
      local_70[0] = &local_190;
      FUN_710170f880((long *)&local_1b0,local_70,(byte *)(param_3 + 0x685));
    }
    pbVar26 = (byte *)((long)param_3 + 0xd0b);
    if (*pbVar26 == 0xff) break;
    local_190 = (undefined **)((ulong)local_190 & 0xffffffffffffff00);
    local_198 = (undefined **)0x0;
    FUN_710062dc20((uint *)&local_198,"fighter_%d");
    goto LAB_7101716640;
  case 4:
    FUN_710170e9d0((long *)&local_1b0,"version",(uint *)(param_3 + 0x66c));
    FUN_710170ecb0((long *)&local_1b0,"movie_time",(uint *)(param_3 + 0x680));
    FUN_710170ecb0((long *)&local_1b0,"movie_type",(uint *)(param_3 + 0x682));
    FUN_710170eb40((long *)&local_1b0,"stage",(uint *)(param_3 + 0x66e));
    FUN_710170ecb0((long *)&local_1b0,"stage_type",(uint *)(param_3 + 0x670));
    if (*(int *)(param_3 + 0x682) == 0) {
      FUN_7101716af0((long *)&local_1b0,"use_info",(byte *)(param_3 + 0x688));
      pppplVar9 = (long ****)FUN_71001b1820(0x58);
      pppplVar24 = pppplVar9 + 4;
      *pppplVar24 = (long ***)&PTR_FUN_710509cc08;
      *(undefined1 *)(pppplVar9 + 5) = 0;
      pppplVar9[7] = (long ***)(pppplVar9 + 5);
      pppplVar9[8] = (long ***)0x10;
      FUN_71001b47e0((long)pppplVar24,"use_music",-1);
      FUN_71001b7940((byte *)(pppplVar9 + 9),*(byte *)((long)param_3 + 0xd11));
      ppppplVar29 = &local_1a8;
      ppppplVar28 = &local_1a8;
      ppppplVar12 = (long *****)local_1a8;
      while (ppppplVar12 != (long *****)0x0) {
        while( true ) {
          ppppplVar28 = ppppplVar12;
          uVar5 = FUN_71001b4e80((long)pppplVar24,(long)(ppppplVar28 + 4));
          if ((uVar5 & 1) == 0) break;
          ppppplVar12 = (long *****)*ppppplVar28;
          ppppplVar29 = ppppplVar28;
          if ((long *****)*ppppplVar28 == (long *****)0x0) {
            pppplVar13 = *ppppplVar28;
            goto joined_r0x007101715f64;
          }
        }
        uVar5 = FUN_71001b4e80((long)(ppppplVar28 + 4),(long)pppplVar24);
        if ((uVar5 & 1) == 0) break;
        ppppplVar29 = ppppplVar28 + 1;
        ppppplVar12 = (long *****)*ppppplVar29;
      }
      pppplVar13 = *ppppplVar29;
joined_r0x007101715f64:
      if (pppplVar13 == (long ****)0x0) {
        *pppplVar9 = (long ***)0x0;
        pppplVar9[1] = (long ***)0x0;
        pppplVar9[2] = (long ***)ppppplVar28;
        *ppppplVar29 = pppplVar9;
        if ((long *****)*local_1b0 != (long *****)0x0) {
          pppplVar9 = *ppppplVar29;
          local_1b0 = (long ****)*local_1b0;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                  ((long *)local_1a8,(long *)pppplVar9);
        local_1a0 = (undefined8 *)((long)local_1a0 + 1);
      }
      else if (pppplVar9 != (long ****)0x0) {
        FUN_71001b78a0((long *)(pppplVar9 + 9));
        pppplVar9[4] = (long ***)&PTR_FUN_710509cc08;
        FUN_71001b4910((long)pppplVar24);
        FUN_71001b1870((long)pppplVar9);
      }
      pppplVar9 = (long ****)FUN_71001b1820(0x58);
      pppplVar24 = pppplVar9 + 4;
      *pppplVar24 = (long ***)&PTR_FUN_710509cc08;
      *(undefined1 *)(pppplVar9 + 5) = 0;
      pppplVar9[7] = (long ***)(pppplVar9 + 5);
      pppplVar9[8] = (long ***)0x10;
      FUN_71001b47e0((long)pppplVar24,"use_sound_effect",-1);
      FUN_71001b7940((byte *)(pppplVar9 + 9),*(byte *)(param_3 + 0x689));
      ppppplVar29 = &local_1a8;
      ppppplVar28 = &local_1a8;
      ppppplVar12 = (long *****)local_1a8;
      while (ppppplVar12 != (long *****)0x0) {
        while( true ) {
          ppppplVar28 = ppppplVar12;
          uVar5 = FUN_71001b4e80((long)pppplVar24,(long)(ppppplVar28 + 4));
          if ((uVar5 & 1) == 0) break;
          ppppplVar12 = (long *****)*ppppplVar28;
          ppppplVar29 = ppppplVar28;
          if ((long *****)*ppppplVar28 == (long *****)0x0) {
            pppplVar13 = *ppppplVar28;
            goto joined_r0x007101716218;
          }
        }
        uVar5 = FUN_71001b4e80((long)(ppppplVar28 + 4),(long)pppplVar24);
        if ((uVar5 & 1) == 0) break;
        ppppplVar29 = ppppplVar28 + 1;
        ppppplVar12 = (long *****)*ppppplVar29;
      }
      pppplVar13 = *ppppplVar29;
joined_r0x007101716218:
      if (pppplVar13 == (long ****)0x0) {
        *pppplVar9 = (long ***)0x0;
        pppplVar9[1] = (long ***)0x0;
        pppplVar9[2] = (long ***)ppppplVar28;
        *ppppplVar29 = pppplVar9;
        if ((long *****)*local_1b0 != (long *****)0x0) {
          pppplVar9 = *ppppplVar29;
          local_1b0 = (long ****)*local_1b0;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                  ((long *)local_1a8,(long *)pppplVar9);
        local_1a0 = (undefined8 *)((long)local_1a0 + 1);
      }
      else if (pppplVar9 != (long ****)0x0) {
        FUN_71001b78a0((long *)(pppplVar9 + 9));
        pppplVar9[4] = (long ***)&PTR_FUN_710509cc08;
        FUN_71001b4910((long)pppplVar24);
        FUN_71001b1870((long)pppplVar9);
      }
      pppplVar9 = (long ****)FUN_71001b1820(0x58);
      pppplVar24 = pppplVar9 + 4;
      *pppplVar24 = (long ***)&PTR_FUN_710509cc08;
      *(undefined1 *)(pppplVar9 + 5) = 0;
      pppplVar9[7] = (long ***)(pppplVar9 + 5);
      pppplVar9[8] = (long ***)0x10;
      FUN_71001b47e0((long)pppplVar24,"image_quality",-1);
      FUN_71001b7910((ulong *)(pppplVar9 + 9),*(uint *)(param_3 + 0x68c));
      ppppplVar29 = &local_1a8;
      ppppplVar28 = &local_1a8;
      ppppplVar12 = (long *****)local_1a8;
      while (ppppplVar12 != (long *****)0x0) {
        while( true ) {
          ppppplVar28 = ppppplVar12;
          uVar5 = FUN_71001b4e80((long)pppplVar24,(long)(ppppplVar28 + 4));
          if ((uVar5 & 1) == 0) break;
          ppppplVar12 = (long *****)*ppppplVar28;
          ppppplVar29 = ppppplVar28;
          if ((long *****)*ppppplVar28 == (long *****)0x0) {
            pppplVar13 = *ppppplVar28;
            goto joined_r0x007101716344;
          }
        }
        uVar5 = FUN_71001b4e80((long)(ppppplVar28 + 4),(long)pppplVar24);
        if ((uVar5 & 1) == 0) break;
        ppppplVar29 = ppppplVar28 + 1;
        ppppplVar12 = (long *****)*ppppplVar29;
      }
      pppplVar13 = *ppppplVar29;
joined_r0x007101716344:
      if (pppplVar13 == (long ****)0x0) {
        *pppplVar9 = (long ***)0x0;
        pppplVar9[1] = (long ***)0x0;
        pppplVar9[2] = (long ***)ppppplVar28;
        *ppppplVar29 = pppplVar9;
        if ((long *****)*local_1b0 != (long *****)0x0) {
          pppplVar9 = *ppppplVar29;
          local_1b0 = (long ****)*local_1b0;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                  ((long *)local_1a8,(long *)pppplVar9);
        local_1a0 = (undefined8 *)((long)local_1a0 + 1);
      }
      else if (pppplVar9 != (long ****)0x0) {
        FUN_71001b78a0((long *)(pppplVar9 + 9));
        pppplVar9[4] = (long ***)&PTR_FUN_710509cc08;
        FUN_71001b4910((long)pppplVar24);
        FUN_71001b1870((long)pppplVar9);
      }
      FUN_710170ecb0((long *)&local_1b0,"melee_mode",(uint *)(param_3 + 0x674));
      FUN_710170ecb0((long *)&local_1b0,"melee_kind",(uint *)(param_3 + 0x676));
      FUN_710170ecb0((long *)&local_1b0,"melee_rule",(uint *)(param_3 + 0x678));
      FUN_710170ee20((long *)&local_1b0,"use_spirits",(byte *)(param_3 + 0x672));
      FUN_710170ef90((long *)&local_1b0,"score",(undefined8 *)(param_3 + 0x67c));
    }
    else {
      FUN_710170ee20((long *)&local_1b0,"use_caption",(byte *)(param_3 + 0x68a));
      pppplVar9 = (long ****)FUN_71001b1820(0x58);
      pppplVar24 = pppplVar9 + 4;
      *pppplVar24 = (long ***)&PTR_FUN_710509cc08;
      *(undefined1 *)(pppplVar9 + 5) = 0;
      pppplVar9[7] = (long ***)(pppplVar9 + 5);
      pppplVar9[8] = (long ***)0x10;
      FUN_71001b47e0((long)pppplVar24,"use_bgm",-1);
      FUN_71001b7940((byte *)(pppplVar9 + 9),*(byte *)((long)param_3 + 0xd13));
      ppppplVar29 = &local_1a8;
      ppppplVar28 = &local_1a8;
      ppppplVar12 = (long *****)local_1a8;
      while (ppppplVar12 != (long *****)0x0) {
        while( true ) {
          ppppplVar28 = ppppplVar12;
          uVar5 = FUN_71001b4e80((long)pppplVar24,(long)(ppppplVar28 + 4));
          if ((uVar5 & 1) == 0) break;
          ppppplVar12 = (long *****)*ppppplVar28;
          ppppplVar29 = ppppplVar28;
          if ((long *****)*ppppplVar28 == (long *****)0x0) {
            pppplVar13 = *ppppplVar28;
            goto joined_r0x007101715dbc;
          }
        }
        uVar5 = FUN_71001b4e80((long)(ppppplVar28 + 4),(long)pppplVar24);
        if ((uVar5 & 1) == 0) break;
        ppppplVar29 = ppppplVar28 + 1;
        ppppplVar12 = (long *****)*ppppplVar29;
      }
      pppplVar13 = *ppppplVar29;
joined_r0x007101715dbc:
      if (pppplVar13 == (long ****)0x0) {
        *pppplVar9 = (long ***)0x0;
        pppplVar9[1] = (long ***)0x0;
        pppplVar9[2] = (long ***)ppppplVar28;
        *ppppplVar29 = pppplVar9;
        if ((long *****)*local_1b0 != (long *****)0x0) {
          pppplVar9 = *ppppplVar29;
          local_1b0 = (long ****)*local_1b0;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                  ((long *)local_1a8,(long *)pppplVar9);
        local_1a0 = (undefined8 *)((long)local_1a0 + 1);
      }
      else if (pppplVar9 != (long ****)0x0) {
        FUN_71001b78a0((long *)(pppplVar9 + 9));
        pppplVar9[4] = (long ***)&PTR_FUN_710509cc08;
        FUN_71001b4910((long)pppplVar24);
        FUN_71001b1870((long)pppplVar9);
      }
      FUN_7101716980((long *)&local_1b0,"movie_count",(uint *)(param_3 + 0x684));
      pppplVar9 = (long ****)FUN_71001b1820(0x58);
      pppplVar24 = pppplVar9 + 4;
      *pppplVar24 = (long ***)&PTR_FUN_710509cc08;
      *(undefined1 *)(pppplVar9 + 5) = 0;
      pppplVar9[7] = (long ***)(pppplVar9 + 5);
      pppplVar9[8] = (long ***)0x10;
      FUN_71001b47e0((long)pppplVar24,"blocking_count",-1);
      FUN_71001b7910((ulong *)(pppplVar9 + 9),*(uint *)(param_3 + 0x686));
      ppppplVar29 = &local_1a8;
      ppppplVar28 = &local_1a8;
      ppppplVar12 = (long *****)local_1a8;
      while (ppppplVar12 != (long *****)0x0) {
        while( true ) {
          ppppplVar28 = ppppplVar12;
          uVar5 = FUN_71001b4e80((long)pppplVar24,(long)(ppppplVar28 + 4));
          if ((uVar5 & 1) == 0) break;
          ppppplVar12 = (long *****)*ppppplVar28;
          ppppplVar29 = ppppplVar28;
          if ((long *****)*ppppplVar28 == (long *****)0x0) {
            pppplVar13 = *ppppplVar28;
            goto joined_r0x0071017160a4;
          }
        }
        uVar5 = FUN_71001b4e80((long)(ppppplVar28 + 4),(long)pppplVar24);
        if ((uVar5 & 1) == 0) break;
        ppppplVar29 = ppppplVar28 + 1;
        ppppplVar12 = (long *****)*ppppplVar29;
      }
      pppplVar13 = *ppppplVar29;
joined_r0x0071017160a4:
      if (pppplVar13 == (long ****)0x0) {
        *pppplVar9 = (long ***)0x0;
        pppplVar9[1] = (long ***)0x0;
        pppplVar9[2] = (long ***)ppppplVar28;
        *ppppplVar29 = pppplVar9;
        if ((long *****)*local_1b0 != (long *****)0x0) {
          pppplVar9 = *ppppplVar29;
          local_1b0 = (long ****)*local_1b0;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                  ((long *)local_1a8,(long *)pppplVar9);
        local_1a0 = (undefined8 *)((long)local_1a0 + 1);
      }
      else if (pppplVar9 != (long ****)0x0) {
        FUN_71001b78a0((long *)(pppplVar9 + 9));
        pppplVar9[4] = (long ***)&PTR_FUN_710509cc08;
        FUN_71001b4910((long)pppplVar24);
        FUN_71001b1870((long)pppplVar9);
      }
    }
    if (*(char *)(param_3 + 0x68e) != -1) {
      local_190 = (undefined **)((ulong)local_190 & 0xffffffffffffff00);
      local_198 = (undefined **)0x0;
      FUN_710062dc20((uint *)&local_198,"fighter_%d");
      local_70[0] = &local_190;
      FUN_710170f880((long *)&local_1b0,local_70,(byte *)(param_3 + 0x68e));
    }
    if (*(char *)((long)param_3 + 0xd1d) != -1) {
      local_190 = (undefined **)((ulong)local_190 & 0xffffffffffffff00);
      local_198 = (undefined **)0x0;
      FUN_710062dc20((uint *)&local_198,"fighter_%d");
      local_70[0] = &local_190;
      FUN_710170f880((long *)&local_1b0,local_70,(byte *)((long)param_3 + 0xd1d));
    }
    if (*(char *)(param_3 + 0x68f) != -1) {
      local_190 = (undefined **)((ulong)local_190 & 0xffffffffffffff00);
      local_198 = (undefined **)0x0;
      FUN_710062dc20((uint *)&local_198,"fighter_%d");
      local_70[0] = &local_190;
      FUN_710170f880((long *)&local_1b0,local_70,(byte *)(param_3 + 0x68f));
    }
    if (*(char *)((long)param_3 + 0xd1f) != -1) {
      local_190 = (undefined **)((ulong)local_190 & 0xffffffffffffff00);
      local_198 = (undefined **)0x0;
      FUN_710062dc20((uint *)&local_198,"fighter_%d");
      local_70[0] = &local_190;
      FUN_710170f880((long *)&local_1b0,local_70,(byte *)((long)param_3 + 0xd1f));
    }
    if (*(char *)(param_3 + 0x690) != -1) {
      local_190 = (undefined **)((ulong)local_190 & 0xffffffffffffff00);
      local_198 = (undefined **)0x0;
      FUN_710062dc20((uint *)&local_198,"fighter_%d");
      local_70[0] = &local_190;
      FUN_710170f880((long *)&local_1b0,local_70,(byte *)(param_3 + 0x690));
    }
    if (*(char *)((long)param_3 + 0xd21) != -1) {
      local_190 = (undefined **)((ulong)local_190 & 0xffffffffffffff00);
      local_198 = (undefined **)0x0;
      FUN_710062dc20((uint *)&local_198,"fighter_%d");
      local_70[0] = &local_190;
      FUN_710170f880((long *)&local_1b0,local_70,(byte *)((long)param_3 + 0xd21));
    }
    if (*(char *)(param_3 + 0x691) != -1) {
      local_190 = (undefined **)((ulong)local_190 & 0xffffffffffffff00);
      local_198 = (undefined **)0x0;
      FUN_710062dc20((uint *)&local_198,"fighter_%d");
      local_70[0] = &local_190;
      FUN_710170f880((long *)&local_1b0,local_70,(byte *)(param_3 + 0x691));
    }
    if (*(char *)((long)param_3 + 0xd23) == -1) break;
    pbVar26 = (byte *)((long)param_3 + 0xd23);
    local_190 = (undefined **)((ulong)local_190 & 0xffffffffffffff00);
    local_198 = (undefined **)0x0;
    FUN_710062dc20((uint *)&local_198,"fighter_%d");
LAB_7101716640:
    local_70[0] = &local_190;
    FUN_710170f880((long *)&local_1b0,local_70,pbVar26);
  }
  if ((long *****)(param_2 + 0xa8) != &local_1b0) {
    FUN_710170dcd0((long *)(param_2 + 0xa8),(long *)local_1b0,(long *)&local_1a8);
  }
  FUN_710170df50(&local_1b0,local_1a8);
  return;
}

