// addr:      71014d2130
// offset:    0x14d2130
// name:      FUN_71014d2130
// mangled:   
// signature: undefined __cdecl FUN_71014d2130(long * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71014d2130(long *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
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
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 uVar2;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  code *pcVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  long *plVar15;
  undefined8 uVar16;
  
  FUN_7101341d50(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateWaitForSyncWhenBeginning",(long ****)FUN_71014d2df0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateHowToPlayDescription",(long ****)FUN_71014d2e80,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateAppearanceProduction",(long ****)FUN_71014d2f00,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateEndProduction",(long ****)FUN_71014d2f80,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateSuddenDeathPreparations",(long ****)FUN_71014d3000,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateSuddenDeathStartingProduction",
                 (long ****)FUN_71014d3080,param_4,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateSuddenDeath",(long ****)FUN_71014d3100,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StatePause",(long ****)FUN_71014d3180,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateOperatorHUDDone",(long ****)FUN_71014d3200,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateDisconnectSyncCommunication",(long ****)FUN_71014d3280,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateResetTraining",(long ****)FUN_71014d3300,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateRetryPreparations",(long ****)FUN_71014d3380,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateContinuePreparations",(long ****)FUN_71014d3400,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateSkipMelee",(long ****)FUN_71014d3480,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateResult",(long ****)FUN_71014d3500,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateApplyParameters",(long ****)FUN_71014d3580,param_4,
                 param_5,param_6,param_7,param_8);
  pcVar3 = FUN_71014d3600;
  FUN_710135bea0((long)param_1,(byte *)"StateWaitForSyncWhenEnding",(long ****)FUN_71014d3600,
                 param_4,param_5,param_6,param_7,param_8);
  puVar7 = (ulong *)param_1[0x20];
  lVar5 = param_1[0x21];
  lVar9 = lVar5 - (long)puVar7;
  if (lVar9 != 0) {
    uVar13 = param_1[0x23];
    plVar10 = (long *)((long)puVar7 + (uVar13 >> 5 & 0x7fffffffffffff8));
    lVar12 = *plVar10 + (uVar13 & 0xff) * 0x10;
    while (*(long *)((long)puVar7 + (param_1[0x24] + uVar13 >> 5 & 0x7fffffffffffff8)) +
           (param_1[0x24] + uVar13 & 0xff) * 0x10 != lVar12) {
      lVar12 = lVar12 + 0x10;
      if (lVar12 - *plVar10 == 0x1000) {
        plVar10 = plVar10 + 1;
        lVar12 = *plVar10;
      }
    }
  }
  param_1[0x24] = 0;
  uVar2 = extraout_x1;
  while (uVar13 = lVar9 >> 3, 2 < uVar13) {
    if (*puVar7 != 0) {
      FUN_710392eb40(*puVar7);
      puVar7 = (ulong *)param_1[0x20];
      lVar5 = param_1[0x21];
      uVar2 = extraout_x1_00;
    }
    puVar7 = puVar7 + 1;
    param_1[0x20] = (long)puVar7;
    lVar9 = lVar5 - (long)puVar7;
  }
  if (uVar13 == 1) {
    lVar5 = 0x80;
LAB_71014d23a4:
    param_1[0x23] = lVar5;
  }
  else if (uVar13 == 2) {
    lVar5 = 0x100;
    goto LAB_71014d23a4;
  }
  plVar10 = param_1 + 0x1a;
  lVar9 = *plVar10;
  plVar15 = param_1 + 0x19;
  puVar7 = (ulong *)*plVar15;
  lVar5 = lVar9 - (long)puVar7;
  puVar14 = (ulong *)(param_1 + 0x1c);
  uVar13 = *puVar14;
  if (lVar5 != 0) {
    plVar11 = (long *)((long)puVar7 + (uVar13 >> 6 & 0x3fffffffffffff8));
    lVar12 = *plVar11 + (uVar13 & 0x1ff) * 8;
    while (*(long *)((long)puVar7 + (param_1[0x1d] + uVar13 >> 6 & 0x3fffffffffffff8)) +
           (param_1[0x1d] + uVar13 & 0x1ff) * 8 != lVar12) {
      lVar12 = lVar12 + 8;
      if (lVar12 - *plVar11 == 0x1000) {
        plVar11 = plVar11 + 1;
        lVar12 = *plVar11;
      }
    }
  }
  param_1[0x1d] = 0;
  ppuVar4 = (undefined **)pcVar3;
  while (uVar13 = lVar5 >> 3, 2 < uVar13) {
    if (*puVar7 != 0) {
      FUN_710392eb40(*puVar7);
      puVar7 = (ulong *)*plVar15;
      lVar9 = *plVar10;
      uVar2 = extraout_x1_01;
    }
    puVar7 = puVar7 + 1;
    *plVar15 = (long)puVar7;
    lVar5 = lVar9 - (long)puVar7;
  }
  if (uVar13 == 1) {
    uVar13 = 0x100;
  }
  else {
    if (uVar13 != 2) goto LAB_71014d2488;
    uVar13 = 0x200;
  }
  *puVar14 = uVar13;
LAB_71014d2488:
  lVar5 = param_1[0x20];
  lVar9 = param_1[0x21];
  uVar13 = 0;
  if (lVar9 - lVar5 != 0) {
    uVar13 = (lVar9 - lVar5) * 0x20 - 1;
  }
  uVar8 = param_1[0x24] + param_1[0x23];
  if (uVar13 == uVar8) {
    FUN_710135a0f0((ulong *)(param_1 + 0x1f),uVar2,(long ****)ppuVar4,param_4,param_5,param_6,
                   param_7,param_8);
    uVar8 = param_1[0x23] + param_1[0x24];
    lVar5 = param_1[0x20];
    lVar9 = param_1[0x21];
    uVar2 = extraout_x1_02;
  }
  if (lVar9 == lVar5) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)
             (*(long *)(lVar5 + (uVar8 >> 5 & 0x7fffffffffffff8)) + (uVar8 & 0xff) * 0x10);
  }
  *puVar6 = 2;
  *(undefined8 *)(puVar6 + 2) = 0xffffffffffffffff;
  param_1[0x24] = param_1[0x24] + 1;
  if (((DAT_71053144d8 & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&DAT_71053144d8), uVar2 = extraout_x1_23, iVar1 != 0)) {
    FUN_7101764000();
    ppuVar4 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
    uVar2 = extraout_x1_24;
  }
  uVar16 = DAT_71052c33a0;
  plVar11 = param_1 + 0x1d;
  lVar5 = param_1[0x19];
  uVar13 = 0;
  if (param_1[0x1a] - lVar5 != 0) {
    uVar13 = (param_1[0x1a] - lVar5) * 0x40 - 1;
  }
  uVar8 = *plVar11 + param_1[0x1c];
  if (DAT_71052c51d1 == '\0') {
    if (uVar13 == uVar8) {
      FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)ppuVar4,param_4,param_5,param_6,
                     param_7,param_8);
      lVar5 = param_1[0x19];
      uVar8 = param_1[0x1c] + param_1[0x1d];
      uVar2 = extraout_x1_13;
    }
    *(undefined8 *)(*(long *)(lVar5 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8) =
         uVar16;
    lVar5 = *plVar11;
    *plVar11 = lVar5 + 1;
    uVar16 = DAT_71052c33a8;
    lVar9 = *plVar15;
    uVar13 = 0;
    if (*plVar10 - lVar9 != 0) {
      uVar13 = (*plVar10 - lVar9) * 0x40 - 1;
    }
    uVar8 = lVar5 + 1 + *puVar14;
    if (uVar13 == uVar8) {
      FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)ppuVar4,param_4,param_5,param_6,
                     param_7,param_8);
      lVar9 = param_1[0x19];
      uVar8 = param_1[0x1c] + param_1[0x1d];
      uVar2 = extraout_x1_14;
    }
    *(undefined8 *)(*(long *)(lVar9 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8) =
         uVar16;
    lVar5 = *plVar11;
    *plVar11 = lVar5 + 1;
    uVar16 = DAT_71052c33b0;
    lVar9 = *plVar15;
    uVar13 = 0;
    if (*plVar10 - lVar9 != 0) {
      uVar13 = (*plVar10 - lVar9) * 0x40 - 1;
    }
    uVar8 = lVar5 + 1 + *puVar14;
    if (uVar13 == uVar8) {
      FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)ppuVar4,param_4,param_5,param_6,
                     param_7,param_8);
      lVar9 = param_1[0x19];
      uVar8 = param_1[0x1c] + param_1[0x1d];
      uVar2 = extraout_x1_15;
    }
    *(undefined8 *)(*(long *)(lVar9 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8) =
         uVar16;
    lVar5 = *plVar11;
    *plVar11 = lVar5 + 1;
    uVar16 = DAT_71052c3368;
    lVar9 = *plVar15;
    uVar13 = 0;
    if (*plVar10 - lVar9 != 0) {
      uVar13 = (*plVar10 - lVar9) * 0x40 - 1;
    }
    uVar8 = lVar5 + 1 + *puVar14;
    if (uVar13 == uVar8) {
      FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)ppuVar4,param_4,param_5,param_6,
                     param_7,param_8);
      lVar9 = param_1[0x19];
      uVar8 = param_1[0x1c] + param_1[0x1d];
      uVar2 = extraout_x1_16;
    }
    *(undefined8 *)(*(long *)(lVar9 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8) =
         uVar16;
    lVar5 = *plVar11;
    *plVar11 = lVar5 + 1;
    uVar16 = DAT_71052c3370;
    lVar9 = *plVar15;
    uVar13 = 0;
    if (*plVar10 - lVar9 != 0) {
      uVar13 = (*plVar10 - lVar9) * 0x40 - 1;
    }
    uVar8 = lVar5 + 1 + *puVar14;
    if (uVar13 == uVar8) {
      FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)ppuVar4,param_4,param_5,param_6,
                     param_7,param_8);
      lVar9 = param_1[0x19];
      uVar8 = param_1[0x1c] + param_1[0x1d];
      uVar2 = extraout_x1_17;
    }
    *(undefined8 *)(*(long *)(lVar9 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8) =
         uVar16;
    lVar5 = *plVar11;
    *plVar11 = lVar5 + 1;
    uVar16 = DAT_71052c36d8;
    lVar9 = *plVar15;
    uVar13 = 0;
    if (*plVar10 - lVar9 != 0) {
      uVar13 = (*plVar10 - lVar9) * 0x40 - 1;
    }
    uVar8 = lVar5 + 1 + *puVar14;
    if (uVar13 == uVar8) {
      FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)ppuVar4,param_4,param_5,param_6,
                     param_7,param_8);
      lVar9 = param_1[0x19];
      uVar8 = param_1[0x1c] + param_1[0x1d];
      uVar2 = extraout_x1_18;
    }
    *(undefined8 *)(*(long *)(lVar9 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8) =
         uVar16;
    lVar5 = *plVar11;
    *plVar11 = lVar5 + 1;
    uVar16 = DAT_71052c3378;
    lVar9 = *plVar15;
    uVar13 = 0;
    if (*plVar10 - lVar9 != 0) {
      uVar13 = (*plVar10 - lVar9) * 0x40 - 1;
    }
    uVar8 = lVar5 + 1 + *puVar14;
    if (uVar13 == uVar8) {
      FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)ppuVar4,param_4,param_5,param_6,
                     param_7,param_8);
      lVar9 = param_1[0x19];
      uVar8 = param_1[0x1c] + param_1[0x1d];
      uVar2 = extraout_x1_19;
    }
    *(undefined8 *)(*(long *)(lVar9 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8) =
         uVar16;
    lVar5 = *plVar11;
    *plVar11 = lVar5 + 1;
    uVar16 = DAT_71052c36e0;
    lVar9 = *plVar15;
    uVar13 = 0;
    if (*plVar10 - lVar9 != 0) {
      uVar13 = (*plVar10 - lVar9) * 0x40 - 1;
    }
    uVar8 = lVar5 + 1 + *puVar14;
    if (uVar13 == uVar8) {
      FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)ppuVar4,param_4,param_5,param_6,
                     param_7,param_8);
      lVar9 = param_1[0x19];
      uVar8 = param_1[0x1c] + param_1[0x1d];
      uVar2 = extraout_x1_20;
    }
    *(undefined8 *)(*(long *)(lVar9 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8) =
         uVar16;
    lVar5 = *plVar11;
    *plVar11 = lVar5 + 1;
    uVar16 = DAT_71052c36e8;
    lVar9 = *plVar15;
    uVar13 = 0;
    if (*plVar10 - lVar9 != 0) {
      uVar13 = (*plVar10 - lVar9) * 0x40 - 1;
    }
    uVar8 = lVar5 + 1 + *puVar14;
    if (uVar13 == uVar8) {
      FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)ppuVar4,param_4,param_5,param_6,
                     param_7,param_8);
      lVar9 = param_1[0x19];
      uVar8 = param_1[0x1c] + param_1[0x1d];
      uVar2 = extraout_x1_21;
    }
    *(undefined8 *)(*(long *)(lVar9 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8) =
         uVar16;
    lVar5 = *plVar11 + 1;
    *plVar11 = lVar5;
    uVar16 = DAT_71052c3380;
  }
  else {
    if (uVar13 == uVar8) {
      FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)ppuVar4,param_4,param_5,param_6,
                     param_7,param_8);
      lVar5 = param_1[0x19];
      uVar8 = param_1[0x1c] + param_1[0x1d];
      uVar2 = extraout_x1_03;
    }
    *(undefined8 *)(*(long *)(lVar5 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8) =
         uVar16;
    lVar5 = *plVar11;
    *plVar11 = lVar5 + 1;
    uVar16 = DAT_71052c33a8;
    lVar9 = *plVar15;
    uVar13 = 0;
    if (*plVar10 - lVar9 != 0) {
      uVar13 = (*plVar10 - lVar9) * 0x40 - 1;
    }
    uVar8 = lVar5 + 1 + *puVar14;
    if (uVar13 == uVar8) {
      FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)ppuVar4,param_4,param_5,param_6,
                     param_7,param_8);
      lVar9 = param_1[0x19];
      uVar8 = param_1[0x1c] + param_1[0x1d];
      uVar2 = extraout_x1_04;
    }
    *(undefined8 *)(*(long *)(lVar9 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8) =
         uVar16;
    lVar5 = *plVar11;
    *plVar11 = lVar5 + 1;
    uVar16 = DAT_71052c33b0;
    lVar9 = *plVar15;
    uVar13 = 0;
    if (*plVar10 - lVar9 != 0) {
      uVar13 = (*plVar10 - lVar9) * 0x40 - 1;
    }
    uVar8 = lVar5 + 1 + *puVar14;
    if (uVar13 == uVar8) {
      FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)ppuVar4,param_4,param_5,param_6,
                     param_7,param_8);
      lVar9 = param_1[0x19];
      uVar8 = param_1[0x1c] + param_1[0x1d];
      uVar2 = extraout_x1_05;
    }
    *(undefined8 *)(*(long *)(lVar9 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8) =
         uVar16;
    lVar5 = *plVar11;
    *plVar11 = lVar5 + 1;
    uVar16 = DAT_71052c3368;
    lVar9 = *plVar15;
    uVar13 = 0;
    if (*plVar10 - lVar9 != 0) {
      uVar13 = (*plVar10 - lVar9) * 0x40 - 1;
    }
    uVar8 = lVar5 + 1 + *puVar14;
    if (uVar13 == uVar8) {
      FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)ppuVar4,param_4,param_5,param_6,
                     param_7,param_8);
      lVar9 = param_1[0x19];
      uVar8 = param_1[0x1c] + param_1[0x1d];
      uVar2 = extraout_x1_06;
    }
    *(undefined8 *)(*(long *)(lVar9 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8) =
         uVar16;
    lVar5 = *plVar11;
    *plVar11 = lVar5 + 1;
    uVar16 = DAT_71052c3370;
    lVar9 = *plVar15;
    uVar13 = 0;
    if (*plVar10 - lVar9 != 0) {
      uVar13 = (*plVar10 - lVar9) * 0x40 - 1;
    }
    uVar8 = lVar5 + 1 + *puVar14;
    if (uVar13 == uVar8) {
      FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)ppuVar4,param_4,param_5,param_6,
                     param_7,param_8);
      lVar9 = param_1[0x19];
      uVar8 = param_1[0x1c] + param_1[0x1d];
      uVar2 = extraout_x1_07;
    }
    *(undefined8 *)(*(long *)(lVar9 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8) =
         uVar16;
    lVar5 = *plVar11;
    *plVar11 = lVar5 + 1;
    uVar16 = DAT_71052c36d8;
    lVar9 = *plVar15;
    uVar13 = 0;
    if (*plVar10 - lVar9 != 0) {
      uVar13 = (*plVar10 - lVar9) * 0x40 - 1;
    }
    uVar8 = lVar5 + 1 + *puVar14;
    if (uVar13 == uVar8) {
      FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)ppuVar4,param_4,param_5,param_6,
                     param_7,param_8);
      lVar9 = param_1[0x19];
      uVar8 = param_1[0x1c] + param_1[0x1d];
      uVar2 = extraout_x1_08;
    }
    *(undefined8 *)(*(long *)(lVar9 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8) =
         uVar16;
    lVar5 = *plVar11;
    *plVar11 = lVar5 + 1;
    uVar16 = DAT_71052c3740;
    lVar9 = *plVar15;
    uVar13 = 0;
    if (*plVar10 - lVar9 != 0) {
      uVar13 = (*plVar10 - lVar9) * 0x40 - 1;
    }
    uVar8 = lVar5 + 1 + *puVar14;
    if (uVar13 == uVar8) {
      FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)ppuVar4,param_4,param_5,param_6,
                     param_7,param_8);
      lVar9 = param_1[0x19];
      uVar8 = param_1[0x1c] + param_1[0x1d];
      uVar2 = extraout_x1_09;
    }
    *(undefined8 *)(*(long *)(lVar9 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8) =
         uVar16;
    lVar5 = *plVar11;
    *plVar11 = lVar5 + 1;
    uVar16 = DAT_71052c3748;
    lVar9 = *plVar15;
    uVar13 = 0;
    if (*plVar10 - lVar9 != 0) {
      uVar13 = (*plVar10 - lVar9) * 0x40 - 1;
    }
    uVar8 = lVar5 + 1 + *puVar14;
    if (uVar13 == uVar8) {
      FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)ppuVar4,param_4,param_5,param_6,
                     param_7,param_8);
      lVar9 = param_1[0x19];
      uVar8 = param_1[0x1c] + param_1[0x1d];
      uVar2 = extraout_x1_10;
    }
    *(undefined8 *)(*(long *)(lVar9 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8) =
         uVar16;
    lVar5 = *plVar11;
    *plVar11 = lVar5 + 1;
    uVar16 = DAT_71052c3758;
    lVar9 = *plVar15;
    uVar13 = 0;
    if (*plVar10 - lVar9 != 0) {
      uVar13 = (*plVar10 - lVar9) * 0x40 - 1;
    }
    uVar8 = lVar5 + 1 + *puVar14;
    if (uVar13 == uVar8) {
      FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)ppuVar4,param_4,param_5,param_6,
                     param_7,param_8);
      lVar9 = param_1[0x19];
      uVar8 = param_1[0x1c] + param_1[0x1d];
      uVar2 = extraout_x1_11;
    }
    *(undefined8 *)(*(long *)(lVar9 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8) =
         uVar16;
    *plVar11 = *plVar11 + 1;
    if (((DAT_71053144d8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&DAT_71053144d8), uVar2 = extraout_x1_25, iVar1 != 0)) {
      FUN_7101764000();
      ppuVar4 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
      uVar2 = extraout_x1_26;
    }
    uVar16 = DAT_71052c33b8;
    if (DAT_71052c51da == '\0') {
      lVar5 = *plVar11;
    }
    else {
      lVar5 = *plVar15;
      uVar13 = 0;
      if (*plVar10 - lVar5 != 0) {
        uVar13 = (*plVar10 - lVar5) * 0x40 - 1;
      }
      uVar8 = *plVar11 + *puVar14;
      if (uVar13 == uVar8) {
        FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)ppuVar4,param_4,param_5,param_6,
                       param_7,param_8);
        lVar5 = param_1[0x19];
        uVar8 = param_1[0x1c] + param_1[0x1d];
        uVar2 = extraout_x1_12;
      }
      *(undefined8 *)(*(long *)(lVar5 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8) =
           uVar16;
      lVar5 = *plVar11 + 1;
      *plVar11 = lVar5;
    }
    uVar16 = DAT_71052c33c0;
    lVar9 = *plVar15;
    uVar13 = lVar5 + *puVar14;
    uVar8 = 0;
    if (*plVar10 - lVar9 != 0) {
      uVar8 = (*plVar10 - lVar9) * 0x40 - 1;
    }
    if (uVar8 == uVar13) {
      FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)ppuVar4,param_4,param_5,param_6,
                     param_7,param_8);
      lVar9 = param_1[0x19];
      uVar13 = param_1[0x1c] + param_1[0x1d];
      uVar2 = extraout_x1_22;
    }
    *(undefined8 *)(*(long *)(lVar9 + (uVar13 >> 6 & 0x3fffffffffffff8)) + (uVar13 & 0x1ff) * 8) =
         uVar16;
    lVar5 = *plVar11 + 1;
    *plVar11 = lVar5;
    uVar16 = DAT_71052c33d0;
  }
  lVar9 = *plVar15;
  uVar13 = lVar5 + *puVar14;
  uVar8 = 0;
  if (*plVar10 - lVar9 != 0) {
    uVar8 = (*plVar10 - lVar9) * 0x40 - 1;
  }
  if (uVar8 == uVar13) {
    FUN_710135ac80((ulong *)(param_1 + 0x18),uVar2,(long ****)ppuVar4,param_4,param_5,param_6,
                   param_7,param_8);
    lVar9 = param_1[0x19];
    uVar13 = param_1[0x1c] + param_1[0x1d];
  }
  *(undefined8 *)(*(long *)(lVar9 + (uVar13 >> 6 & 0x3fffffffffffff8)) + (uVar13 & 0x1ff) * 8) =
       uVar16;
  *plVar11 = *plVar11 + 1;
  return;
}

