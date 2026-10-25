// addr:      71026617f0
// offset:    0x26617f0
// name:      FUN_71026617f0
// mangled:   
// signature: undefined __cdecl FUN_71026617f0(undefined1[16] param_1, undefined1[16] param_2, undefined1[16] param_3, undefined1[16] param_4, long param_5, undefined8 param_6, long * * * * param_7, undefined1[16] * param_8, undefined1[16] * param_9, undefined1[16] * param_10, long * * * param_11, long * * * param_12)


void FUN_71026617f0(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                   undefined1 param_4 [16],long param_5,undefined8 param_6,long ****param_7,
                   undefined1 (*param_8) [16],undefined1 (*param_9) [16],undefined1 (*param_10) [16]
                   ,long ***param_11,long ***param_12)

{
  bool bVar1;
  bool bVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar3;
  undefined8 extraout_x1_03;
  undefined4 uVar4;
  long lVar5;
  undefined **ppuVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  
  FUN_71025e7060(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12);
  fVar8 = *(float *)(param_5 + 0x8a0) + param_1._0_4_;
  *(float *)(param_5 + 0x8a0) = fVar8;
  uVar3 = extraout_x1;
  if (6000.0 <= fVar8) {
    FUN_7102661a20(param_5);
    fVar8 = *(float *)(param_5 + 0x8a0);
    uVar3 = extraout_x1_00;
  }
  if (2100.0 <= fVar8) {
    if (5700.0 <= fVar8) {
      if (5700.0 < fVar8) goto LAB_7102661848;
    }
    else if (*(int *)(param_5 + 0x878) != 2) {
      uVar4 = 2;
      goto LAB_710266187c;
    }
  }
  else {
LAB_7102661848:
    if (*(int *)(param_5 + 0x878) != 1) {
      uVar4 = 1;
LAB_710266187c:
      *(undefined4 *)(param_5 + 0x878) = uVar4;
    }
  }
  if (2700.0 <= fVar8) {
    if (5100.0 <= fVar8) {
      if (*(int *)(param_5 + 0x880) != 2) goto LAB_71026618e0;
    }
    else if (*(int *)(param_5 + 0x880) != 1) {
      uVar4 = 1;
      goto LAB_71026618e4;
    }
  }
  else if (*(int *)(param_5 + 0x880) != 2) {
    if (*(int *)(param_5 + 0x880) == 0) {
      *(undefined1 *)(param_5 + 0x884) = 1;
    }
LAB_71026618e0:
    uVar4 = 2;
LAB_71026618e4:
    *(undefined4 *)(param_5 + 0x880) = uVar4;
  }
  plVar7 = *(long **)(*(long *)(param_5 + 0x8c0) + 8);
  if (plVar7 == (long *)0x0) goto LAB_71026619a4;
  lVar5 = plVar7[1];
  if ((fVar8 < 0.0) || (*(float *)(lVar5 + 0xf0) < fVar8)) {
    fVar9 = *(float *)(lVar5 + 0xf4);
    bVar1 = true;
    bVar2 = false;
    if (*(float *)(lVar5 + 0xf0) < fVar8) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar9) && !NAN(fVar8)) {
        bVar1 = fVar9 < fVar8;
        bVar2 = false;
      }
    }
    if (bVar1 == bVar2) {
      if (*(char *)((long)plVar7 + 0x14) == '\0') goto LAB_71026619a4;
      ppuVar6 = &PTR_s_stage_morning_village_city_71050c9f50;
    }
    else {
      if ((fVar9 < fVar8) && (fVar8 <= *(float *)(lVar5 + 0xf8))) {
        if (*(char *)((long)plVar7 + 0x14) != '\0') goto LAB_71026619a4;
        ppuVar6 = &PTR_s_stage_morning_city_71050c9f78;
        goto LAB_710266191c;
      }
      if ((fVar8 <= *(float *)(lVar5 + 0xf8)) || (*(float *)(lVar5 + 0xfc) < fVar8)) {
        if ((fVar8 <= *(float *)(lVar5 + 0xfc)) || (6000.0 < fVar8)) goto LAB_71026619a4;
        goto LAB_710266190c;
      }
      if (*(char *)((long)plVar7 + 0x14) == '\0') goto LAB_71026619a4;
      ppuVar6 = &PTR_s_stage_morning_city_village_71050c9fa0;
    }
    param_7 = (long ****)0x1;
    FUN_7102633b90(*(long *)(*plVar7 + 0x318),(long *********)ppuVar6[*(uint *)(plVar7 + 2)],1,
                   param_8,(long ****)param_9,param_10,param_11,param_12);
    *(undefined1 *)((long)plVar7 + 0x14) = 0;
    uVar3 = extraout_x1_02;
  }
  else {
LAB_710266190c:
    if (*(char *)((long)plVar7 + 0x14) != '\0') goto LAB_71026619a4;
    ppuVar6 = &PTR_s_stage_morning_village_71050c9f28;
LAB_710266191c:
    param_7 = (long ****)0x1;
    FUN_7102633b90(*(long *)(*plVar7 + 0x318),(long *********)ppuVar6[*(uint *)(plVar7 + 2)],1,
                   param_8,(long ****)param_9,param_10,param_11,param_12);
    *(undefined1 *)((long)plVar7 + 0x14) = 1;
    uVar3 = extraout_x1_01;
  }
LAB_71026619a4:
  FUN_71026673b0(*(long *)(param_5 + 0x888),uVar3,param_7,(byte ****)param_8,(long ****)param_9,
                 param_10,param_11,param_12);
  FUN_71026673b0(*(long *)(param_5 + 0x890),extraout_x1_03,param_7,(byte ****)param_8,
                 (long ****)param_9,param_10,param_11,param_12);
  FUN_710266d1d0(*(float *)(param_5 + 0x8a0),*(long **)(*(long *)(param_5 + 0x898) + 8));
  return;
}

