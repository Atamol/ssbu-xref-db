// addr:      71014aa930
// offset:    0x14aa930
// name:      FUN_71014aa930
// mangled:   
// signature: undefined __cdecl FUN_71014aa930(long * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71014aa930(long *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  ulong *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  
  FUN_7101341d50(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateLoadAsyncForHomeRunContest",(long ****)FUN_71014ab2d0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateSetupBatterOrder",(long ****)FUN_71014ab360,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateShowPlayerInformation",(long ****)FUN_71014ab3f0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateShowBatterOrder",(long ****)FUN_71014ab470,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateShowRemainingTimes",(long ****)FUN_71014ab4f0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateStartPauseUntilReady",(long ****)FUN_71014ab570,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateEndPauseUntilReady",(long ****)FUN_71014ab5f0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateResetBatterFighter",(long ****)FUN_71014ab670,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateFadeOut",(long ****)FUN_71014ab6f0,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateShowReady",(long ****)FUN_71014ab770,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateMeleeForHomeRunContest",(long ****)FUN_71014ab7f0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StatePause",(long ****)FUN_71014ab870,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateOperatorHUDDone",(long ****)FUN_71014ab8f0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateRetryPreparations",(long ****)FUN_71014ab970,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateEndProduction",(long ****)FUN_71014ab9f0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateResult",(long ****)FUN_71014aba70,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateResultNoContest",(long ****)FUN_71014abaf0,param_4,
                 param_5,param_6,param_7,param_8);
  pcVar3 = FUN_71014abb70;
  FUN_710135bea0((long)param_1,(byte *)"StateApplyParameters",(long ****)FUN_71014abb70,param_4,
                 param_5,param_6,param_7,param_8);
  puVar5 = (ulong *)param_1[0x20];
  lVar4 = param_1[0x21];
  lVar8 = lVar4 - (long)puVar5;
  if (lVar8 != 0) {
    uVar11 = param_1[0x23];
    plVar9 = (long *)((long)puVar5 + (uVar11 >> 5 & 0x7fffffffffffff8));
    lVar10 = *plVar9 + (uVar11 & 0xff) * 0x10;
    while (*(long *)((long)puVar5 + (param_1[0x24] + uVar11 >> 5 & 0x7fffffffffffff8)) +
           (param_1[0x24] + uVar11 & 0xff) * 0x10 != lVar10) {
      lVar10 = lVar10 + 0x10;
      if (lVar10 - *plVar9 == 0x1000) {
        plVar9 = plVar9 + 1;
        lVar10 = *plVar9;
      }
    }
  }
  param_1[0x24] = 0;
  uVar2 = extraout_x1;
  while (uVar11 = lVar8 >> 3, 2 < uVar11) {
    if (*puVar5 != 0) {
      FUN_710392eb40(*puVar5);
      puVar5 = (ulong *)param_1[0x20];
      lVar4 = param_1[0x21];
      uVar2 = extraout_x1_00;
    }
    puVar5 = puVar5 + 1;
    param_1[0x20] = (long)puVar5;
    lVar8 = lVar4 - (long)puVar5;
  }
  if (uVar11 == 1) {
    lVar4 = 0x80;
LAB_71014aabb0:
    param_1[0x23] = lVar4;
  }
  else if (uVar11 == 2) {
    lVar4 = 0x100;
    goto LAB_71014aabb0;
  }
  puVar5 = (ulong *)param_1[0x19];
  lVar4 = param_1[0x1a];
  lVar8 = lVar4 - (long)puVar5;
  if (lVar8 != 0) {
    uVar11 = param_1[0x1c];
    plVar9 = (long *)((long)puVar5 + (uVar11 >> 6 & 0x3fffffffffffff8));
    lVar10 = *plVar9 + (uVar11 & 0x1ff) * 8;
    while (*(long *)((long)puVar5 + (param_1[0x1d] + uVar11 >> 6 & 0x3fffffffffffff8)) +
           (param_1[0x1d] + uVar11 & 0x1ff) * 8 != lVar10) {
      lVar10 = lVar10 + 8;
      if (lVar10 - *plVar9 == 0x1000) {
        plVar9 = plVar9 + 1;
        lVar10 = *plVar9;
      }
    }
  }
  param_1[0x1d] = 0;
  while (uVar11 = lVar8 >> 3, 2 < uVar11) {
    if (*puVar5 != 0) {
      FUN_710392eb40(*puVar5);
      puVar5 = (ulong *)param_1[0x19];
      lVar4 = param_1[0x1a];
      uVar2 = extraout_x1_01;
    }
    puVar5 = puVar5 + 1;
    param_1[0x19] = (long)puVar5;
    lVar8 = lVar4 - (long)puVar5;
  }
  if (uVar11 == 1) {
    lVar4 = 0x100;
  }
  else {
    if (uVar11 != 2) goto LAB_71014aac80;
    lVar4 = 0x200;
  }
  param_1[0x1c] = lVar4;
LAB_71014aac80:
  lVar4 = param_1[0x20];
  lVar8 = param_1[0x21];
  uVar11 = 0;
  if (lVar8 - lVar4 != 0) {
    uVar11 = (lVar8 - lVar4) * 0x20 - 1;
  }
  uVar7 = param_1[0x24] + param_1[0x23];
  if (uVar11 == uVar7) {
    FUN_710135a0f0((ulong *)(param_1 + 0x1f),uVar2,(long ****)pcVar3,param_4,param_5,param_6,param_7
                   ,param_8);
    uVar7 = param_1[0x23] + param_1[0x24];
    lVar4 = param_1[0x20];
    lVar8 = param_1[0x21];
    uVar2 = extraout_x1_02;
  }
  if (lVar8 == lVar4) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)
             (*(long *)(lVar4 + (uVar7 >> 5 & 0x7fffffffffffff8)) + (uVar7 & 0xff) * 0x10);
  }
  *puVar6 = 2;
  *(undefined8 *)(puVar6 + 2) = 0xffffffffffffffff;
  param_1[0x24] = param_1[0x24] + 1;
  uVar1 = DAT_71052c33a0;
  lVar4 = param_1[0x19];
  uVar11 = 0;
  if (param_1[0x1a] - lVar4 != 0) {
    uVar11 = (param_1[0x1a] - lVar4) * 0x40 - 1;
  }
  uVar7 = param_1[0x1d] + param_1[0x1c];
  if (uVar11 == uVar7) {
    FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)pcVar3,param_4,param_5,param_6,param_7
                   ,param_8);
    lVar4 = param_1[0x19];
    uVar7 = param_1[0x1c] + param_1[0x1d];
    uVar2 = extraout_x1_03;
  }
  *(undefined8 *)(*(long *)(lVar4 + (uVar7 >> 6 & 0x3fffffffffffff8)) + (uVar7 & 0x1ff) * 8) = uVar1
  ;
  lVar8 = param_1[0x1d];
  param_1[0x1d] = lVar8 + 1;
  uVar1 = DAT_71052c33a8;
  lVar4 = param_1[0x19];
  uVar11 = 0;
  if (param_1[0x1a] - lVar4 != 0) {
    uVar11 = (param_1[0x1a] - lVar4) * 0x40 - 1;
  }
  uVar7 = lVar8 + 1 + param_1[0x1c];
  if (uVar11 == uVar7) {
    FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)pcVar3,param_4,param_5,param_6,param_7
                   ,param_8);
    lVar4 = param_1[0x19];
    uVar7 = param_1[0x1c] + param_1[0x1d];
    uVar2 = extraout_x1_04;
  }
  *(undefined8 *)(*(long *)(lVar4 + (uVar7 >> 6 & 0x3fffffffffffff8)) + (uVar7 & 0x1ff) * 8) = uVar1
  ;
  lVar8 = param_1[0x1d];
  param_1[0x1d] = lVar8 + 1;
  uVar1 = DAT_71052c3630;
  lVar4 = param_1[0x19];
  uVar11 = 0;
  if (param_1[0x1a] - lVar4 != 0) {
    uVar11 = (param_1[0x1a] - lVar4) * 0x40 - 1;
  }
  uVar7 = lVar8 + 1 + param_1[0x1c];
  if (uVar11 == uVar7) {
    FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)pcVar3,param_4,param_5,param_6,param_7
                   ,param_8);
    lVar4 = param_1[0x19];
    uVar7 = param_1[0x1c] + param_1[0x1d];
    uVar2 = extraout_x1_05;
  }
  *(undefined8 *)(*(long *)(lVar4 + (uVar7 >> 6 & 0x3fffffffffffff8)) + (uVar7 & 0x1ff) * 8) = uVar1
  ;
  lVar8 = param_1[0x1d];
  param_1[0x1d] = lVar8 + 1;
  uVar1 = DAT_71052c33b0;
  lVar4 = param_1[0x19];
  uVar11 = 0;
  if (param_1[0x1a] - lVar4 != 0) {
    uVar11 = (param_1[0x1a] - lVar4) * 0x40 - 1;
  }
  uVar7 = lVar8 + 1 + param_1[0x1c];
  if (uVar11 == uVar7) {
    FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)pcVar3,param_4,param_5,param_6,param_7
                   ,param_8);
    lVar4 = param_1[0x19];
    uVar7 = param_1[0x1c] + param_1[0x1d];
    uVar2 = extraout_x1_06;
  }
  *(undefined8 *)(*(long *)(lVar4 + (uVar7 >> 6 & 0x3fffffffffffff8)) + (uVar7 & 0x1ff) * 8) = uVar1
  ;
  lVar8 = param_1[0x1d];
  param_1[0x1d] = lVar8 + 1;
  uVar1 = DAT_71052c3368;
  lVar4 = param_1[0x19];
  uVar11 = 0;
  if (param_1[0x1a] - lVar4 != 0) {
    uVar11 = (param_1[0x1a] - lVar4) * 0x40 - 1;
  }
  uVar7 = lVar8 + 1 + param_1[0x1c];
  if (uVar11 == uVar7) {
    FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)pcVar3,param_4,param_5,param_6,param_7
                   ,param_8);
    lVar4 = param_1[0x19];
    uVar7 = param_1[0x1c] + param_1[0x1d];
    uVar2 = extraout_x1_07;
  }
  *(undefined8 *)(*(long *)(lVar4 + (uVar7 >> 6 & 0x3fffffffffffff8)) + (uVar7 & 0x1ff) * 8) = uVar1
  ;
  lVar8 = param_1[0x1d];
  param_1[0x1d] = lVar8 + 1;
  uVar1 = DAT_71052c3638;
  lVar4 = param_1[0x19];
  uVar11 = 0;
  if (param_1[0x1a] - lVar4 != 0) {
    uVar11 = (param_1[0x1a] - lVar4) * 0x40 - 1;
  }
  uVar7 = lVar8 + 1 + param_1[0x1c];
  if (uVar11 == uVar7) {
    FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)pcVar3,param_4,param_5,param_6,param_7
                   ,param_8);
    lVar4 = param_1[0x19];
    uVar7 = param_1[0x1c] + param_1[0x1d];
    uVar2 = extraout_x1_08;
  }
  *(undefined8 *)(*(long *)(lVar4 + (uVar7 >> 6 & 0x3fffffffffffff8)) + (uVar7 & 0x1ff) * 8) = uVar1
  ;
  lVar8 = param_1[0x1d];
  param_1[0x1d] = lVar8 + 1;
  uVar1 = DAT_71052c3370;
  lVar4 = param_1[0x19];
  uVar11 = 0;
  if (param_1[0x1a] - lVar4 != 0) {
    uVar11 = (param_1[0x1a] - lVar4) * 0x40 - 1;
  }
  uVar7 = lVar8 + 1 + param_1[0x1c];
  if (uVar11 == uVar7) {
    FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)pcVar3,param_4,param_5,param_6,param_7
                   ,param_8);
    lVar4 = param_1[0x19];
    uVar7 = param_1[0x1c] + param_1[0x1d];
    uVar2 = extraout_x1_09;
  }
  *(undefined8 *)(*(long *)(lVar4 + (uVar7 >> 6 & 0x3fffffffffffff8)) + (uVar7 & 0x1ff) * 8) = uVar1
  ;
  lVar8 = param_1[0x1d];
  param_1[0x1d] = lVar8 + 1;
  uVar1 = DAT_71052c3640;
  lVar4 = param_1[0x19];
  uVar11 = 0;
  if (param_1[0x1a] - lVar4 != 0) {
    uVar11 = (param_1[0x1a] - lVar4) * 0x40 - 1;
  }
  uVar7 = lVar8 + 1 + param_1[0x1c];
  if (uVar11 == uVar7) {
    FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)pcVar3,param_4,param_5,param_6,param_7
                   ,param_8);
    lVar4 = param_1[0x19];
    uVar7 = param_1[0x1c] + param_1[0x1d];
    uVar2 = extraout_x1_10;
  }
  *(undefined8 *)(*(long *)(lVar4 + (uVar7 >> 6 & 0x3fffffffffffff8)) + (uVar7 & 0x1ff) * 8) = uVar1
  ;
  lVar8 = param_1[0x1d];
  param_1[0x1d] = lVar8 + 1;
  uVar1 = DAT_71052c3668;
  lVar4 = param_1[0x19];
  uVar11 = 0;
  if (param_1[0x1a] - lVar4 != 0) {
    uVar11 = (param_1[0x1a] - lVar4) * 0x40 - 1;
  }
  uVar7 = lVar8 + 1 + param_1[0x1c];
  if (uVar11 == uVar7) {
    FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)pcVar3,param_4,param_5,param_6,param_7
                   ,param_8);
    lVar4 = param_1[0x19];
    uVar7 = param_1[0x1c] + param_1[0x1d];
    uVar2 = extraout_x1_11;
  }
  *(undefined8 *)(*(long *)(lVar4 + (uVar7 >> 6 & 0x3fffffffffffff8)) + (uVar7 & 0x1ff) * 8) = uVar1
  ;
  lVar8 = param_1[0x1d];
  param_1[0x1d] = lVar8 + 1;
  uVar1 = DAT_71052c3378;
  lVar4 = param_1[0x19];
  uVar11 = 0;
  if (param_1[0x1a] - lVar4 != 0) {
    uVar11 = (param_1[0x1a] - lVar4) * 0x40 - 1;
  }
  uVar7 = lVar8 + 1 + param_1[0x1c];
  if (uVar11 == uVar7) {
    FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)pcVar3,param_4,param_5,param_6,param_7
                   ,param_8);
    lVar4 = param_1[0x19];
    uVar7 = param_1[0x1c] + param_1[0x1d];
    uVar2 = extraout_x1_12;
  }
  *(undefined8 *)(*(long *)(lVar4 + (uVar7 >> 6 & 0x3fffffffffffff8)) + (uVar7 & 0x1ff) * 8) = uVar1
  ;
  lVar8 = param_1[0x1d];
  param_1[0x1d] = lVar8 + 1;
  uVar1 = DAT_71052c3658;
  lVar4 = param_1[0x19];
  uVar11 = 0;
  if (param_1[0x1a] - lVar4 != 0) {
    uVar11 = (param_1[0x1a] - lVar4) * 0x40 - 1;
  }
  uVar7 = lVar8 + 1 + param_1[0x1c];
  if (uVar11 == uVar7) {
    FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)pcVar3,param_4,param_5,param_6,param_7
                   ,param_8);
    lVar4 = param_1[0x19];
    uVar7 = param_1[0x1c] + param_1[0x1d];
    uVar2 = extraout_x1_13;
  }
  *(undefined8 *)(*(long *)(lVar4 + (uVar7 >> 6 & 0x3fffffffffffff8)) + (uVar7 & 0x1ff) * 8) = uVar1
  ;
  lVar8 = param_1[0x1d];
  param_1[0x1d] = lVar8 + 1;
  uVar1 = DAT_71052c3648;
  lVar4 = param_1[0x19];
  uVar11 = 0;
  if (param_1[0x1a] - lVar4 != 0) {
    uVar11 = (param_1[0x1a] - lVar4) * 0x40 - 1;
  }
  uVar7 = lVar8 + 1 + param_1[0x1c];
  if (uVar11 == uVar7) {
    FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)pcVar3,param_4,param_5,param_6,param_7
                   ,param_8);
    lVar4 = param_1[0x19];
    uVar7 = param_1[0x1c] + param_1[0x1d];
    uVar2 = extraout_x1_14;
  }
  *(undefined8 *)(*(long *)(lVar4 + (uVar7 >> 6 & 0x3fffffffffffff8)) + (uVar7 & 0x1ff) * 8) = uVar1
  ;
  lVar8 = param_1[0x1d];
  param_1[0x1d] = lVar8 + 1;
  uVar1 = DAT_71052c3650;
  lVar4 = param_1[0x19];
  uVar11 = 0;
  if (param_1[0x1a] - lVar4 != 0) {
    uVar11 = (param_1[0x1a] - lVar4) * 0x40 - 1;
  }
  uVar7 = lVar8 + 1 + param_1[0x1c];
  if (uVar11 == uVar7) {
    FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)pcVar3,param_4,param_5,param_6,param_7
                   ,param_8);
    lVar4 = param_1[0x19];
    uVar7 = param_1[0x1c] + param_1[0x1d];
    uVar2 = extraout_x1_15;
  }
  *(undefined8 *)(*(long *)(lVar4 + (uVar7 >> 6 & 0x3fffffffffffff8)) + (uVar7 & 0x1ff) * 8) = uVar1
  ;
  lVar8 = param_1[0x1d];
  param_1[0x1d] = lVar8 + 1;
  uVar1 = DAT_71052c3660;
  lVar4 = param_1[0x19];
  uVar11 = 0;
  if (param_1[0x1a] - lVar4 != 0) {
    uVar11 = (param_1[0x1a] - lVar4) * 0x40 - 1;
  }
  uVar7 = lVar8 + 1 + param_1[0x1c];
  if (uVar11 == uVar7) {
    FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)pcVar3,param_4,param_5,param_6,param_7
                   ,param_8);
    lVar4 = param_1[0x19];
    uVar7 = param_1[0x1c] + param_1[0x1d];
    uVar2 = extraout_x1_16;
  }
  *(undefined8 *)(*(long *)(lVar4 + (uVar7 >> 6 & 0x3fffffffffffff8)) + (uVar7 & 0x1ff) * 8) = uVar1
  ;
  lVar8 = param_1[0x1d];
  param_1[0x1d] = lVar8 + 1;
  uVar1 = DAT_71052c3678;
  lVar4 = param_1[0x19];
  uVar11 = 0;
  if (param_1[0x1a] - lVar4 != 0) {
    uVar11 = (param_1[0x1a] - lVar4) * 0x40 - 1;
  }
  uVar7 = lVar8 + 1 + param_1[0x1c];
  if (uVar11 == uVar7) {
    FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)pcVar3,param_4,param_5,param_6,param_7
                   ,param_8);
    lVar4 = param_1[0x19];
    uVar7 = param_1[0x1c] + param_1[0x1d];
    uVar2 = extraout_x1_17;
  }
  *(undefined8 *)(*(long *)(lVar4 + (uVar7 >> 6 & 0x3fffffffffffff8)) + (uVar7 & 0x1ff) * 8) = uVar1
  ;
  lVar8 = param_1[0x1d];
  param_1[0x1d] = lVar8 + 1;
  uVar1 = DAT_71052c3680;
  lVar4 = param_1[0x19];
  uVar11 = 0;
  if (param_1[0x1a] - lVar4 != 0) {
    uVar11 = (param_1[0x1a] - lVar4) * 0x40 - 1;
  }
  uVar7 = lVar8 + 1 + param_1[0x1c];
  if (uVar11 == uVar7) {
    FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)pcVar3,param_4,param_5,param_6,param_7
                   ,param_8);
    lVar4 = param_1[0x19];
    uVar7 = param_1[0x1c] + param_1[0x1d];
  }
  *(undefined8 *)(*(long *)(lVar4 + (uVar7 >> 6 & 0x3fffffffffffff8)) + (uVar7 & 0x1ff) * 8) = uVar1
  ;
  param_1[0x1d] = param_1[0x1d] + 1;
  return;
}

