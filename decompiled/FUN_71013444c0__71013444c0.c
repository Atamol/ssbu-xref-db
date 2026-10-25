// addr:      71013444c0
// offset:    0x13444c0
// name:      FUN_71013444c0
// mangled:   
// signature: undefined __cdecl FUN_71013444c0(long * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71013444c0(long *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  if (param_1[5] != 0) {
    puVar4 = (ulong *)param_1[4];
    while (puVar4 != (ulong *)0x0) {
      uVar8 = *puVar4;
      plVar2 = (long *)puVar4[3];
      if ((plVar2 != (long *)0x0) &&
         (iVar1 = (int)plVar2[2] + -1, *(int *)(plVar2 + 2) = iVar1, iVar1 == 0)) {
        (**(code **)(*plVar2 + 8))();
      }
      FUN_710392eb40((ulong)puVar4);
      puVar4 = (ulong *)uVar8;
    }
    uVar8 = param_1[3];
    param_1[4] = 0;
    if (uVar8 != 0) {
      uVar3 = uVar8 & 3;
      if (uVar8 - 1 < 3) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        do {
          lVar6 = lVar5 * 8;
          lVar5 = lVar5 + 4;
          *(undefined8 *)(param_1[2] + lVar6) = 0;
          *(undefined8 *)(param_1[2] + lVar6 + 8) = 0;
          *(undefined8 *)(param_1[2] + lVar6 + 0x10) = 0;
          *(undefined8 *)(param_1[2] + lVar6 + 0x18) = 0;
        } while (uVar8 - uVar3 != lVar5);
      }
      if (uVar3 != 0) {
        lVar5 = lVar5 << 3;
        lVar6 = -uVar3;
        do {
          *(undefined8 *)(param_1[2] + lVar5) = 0;
          lVar5 = lVar5 + 8;
          lVar6 = lVar6 + 1;
        } while (lVar6 != 0);
      }
    }
    param_1[5] = 0;
  }
  puVar4 = (ulong *)param_1[0x19];
  lVar5 = param_1[0x1a];
  lVar6 = lVar5 - (long)puVar4;
  param_1[0x17] = 0;
  if (lVar6 != 0) {
    uVar8 = param_1[0x1c];
    plVar2 = (long *)((long)puVar4 + (uVar8 >> 6 & 0x3fffffffffffff8));
    lVar7 = *plVar2 + (uVar8 & 0x1ff) * 8;
    while (*(long *)((long)puVar4 + (param_1[0x1d] + uVar8 >> 6 & 0x3fffffffffffff8)) +
           (param_1[0x1d] + uVar8 & 0x1ff) * 8 != lVar7) {
      lVar7 = lVar7 + 8;
      if (lVar7 - *plVar2 == 0x1000) {
        plVar2 = plVar2 + 1;
        lVar7 = *plVar2;
      }
    }
  }
  param_1[0x1d] = 0;
  while (uVar8 = lVar6 >> 3, 2 < uVar8) {
    if (*puVar4 != 0) {
      FUN_710392eb40(*puVar4);
      puVar4 = (ulong *)param_1[0x19];
      lVar5 = param_1[0x1a];
    }
    puVar4 = puVar4 + 1;
    param_1[0x19] = (long)puVar4;
    lVar6 = lVar5 - (long)puVar4;
  }
  if (uVar8 == 1) {
    lVar5 = 0x100;
LAB_710134467c:
    param_1[0x1c] = lVar5;
  }
  else if (uVar8 == 2) {
    lVar5 = 0x200;
    goto LAB_710134467c;
  }
  puVar4 = (ulong *)param_1[0x20];
  lVar5 = param_1[0x21];
  lVar6 = lVar5 - (long)puVar4;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((long)param_1 + 0xf4) = 0;
  if (lVar6 != 0) {
    uVar8 = param_1[0x23];
    plVar2 = (long *)((long)puVar4 + (uVar8 >> 5 & 0x7fffffffffffff8));
    lVar7 = *plVar2 + (uVar8 & 0xff) * 0x10;
    while (*(long *)((long)puVar4 + (param_1[0x24] + uVar8 >> 5 & 0x7fffffffffffff8)) +
           (param_1[0x24] + uVar8 & 0xff) * 0x10 != lVar7) {
      lVar7 = lVar7 + 0x10;
      if (lVar7 - *plVar2 == 0x1000) {
        plVar2 = plVar2 + 1;
        lVar7 = *plVar2;
      }
    }
  }
  param_1[0x24] = 0;
  while (uVar8 = lVar6 >> 3, 2 < uVar8) {
    if (*puVar4 != 0) {
      FUN_710392eb40(*puVar4);
      puVar4 = (ulong *)param_1[0x20];
      lVar5 = param_1[0x21];
    }
    puVar4 = puVar4 + 1;
    param_1[0x20] = (long)puVar4;
    lVar6 = lVar5 - (long)puVar4;
  }
  if (uVar8 == 1) {
    lVar5 = 0x80;
  }
  else {
    if (uVar8 != 2) goto LAB_7101344748;
    lVar5 = 0x100;
  }
  param_1[0x23] = lVar5;
LAB_7101344748:
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  FUN_710135bea0((long)param_1,(byte *)"StateSampleAsync",(long ****)FUN_710135be00,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateInitializeAsync",(long ****)FUN_710135c340,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateLoadAsync",(long ****)FUN_710135c3e0,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateSetupAsync",(long ****)FUN_710135c470,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateRightExpression",(long ****)FUN_710135c510,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateFadeOutWhenEnding",(long ****)FUN_710135c590,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateReset",(long ****)FUN_710135c610,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateExit",(long ****)FUN_710135c6a0,param_4,param_5,param_6
                 ,param_7,param_8);
  (**(code **)(*param_1 + 0x70))(param_1,param_2);
  (**(code **)(*param_1 + 0x80))(param_1);
                    /* WARNING: Could not recover jumptable at 0x007101344848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))(param_1);
  return;
}

