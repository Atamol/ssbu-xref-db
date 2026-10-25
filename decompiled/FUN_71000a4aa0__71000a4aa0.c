// addr:      71000a4aa0
// offset:    0xa4aa0
// name:      FUN_71000a4aa0
// mangled:   
// signature: undefined __cdecl FUN_71000a4aa0(undefined8 * param_1)


void FUN_71000a4aa0(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_7104f4a130;
  if (0 < *(int *)((long)param_1 + 0x6c)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      FUN_7100089850((undefined8 *)(param_1[0x14] + lVar3));
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x270;
    } while (lVar4 < *(int *)((long)param_1 + 0x6c));
  }
  iVar2 = *(int *)((long)param_1 + 100);
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      lVar3 = *(long *)(param_1[0x13] + lVar4 * 8);
      if (lVar3 != 0) {
        FUN_7100099da0(lVar3,0);
        FUN_7100093660();
        iVar2 = *(int *)((long)param_1 + 100);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  FUN_7100088be0((long)(param_1 + 0x299));
  plVar1 = (long *)FUN_7100093610();
  (**(code **)(*plVar1 + 0x18))(plVar1,param_1[0x2d6]);
  plVar1 = (long *)FUN_7100093610();
  (**(code **)(*plVar1 + 0x18))(plVar1,param_1[0x2d7]);
  plVar1 = param_1 + 8;
  FUN_71000afa50((undefined1 *)(param_1 + 0x263),param_1[7],plVar1);
  if (0 < *(int *)(param_1 + 0xe)) {
    lVar4 = 0;
    lVar3 = 0x828;
    do {
      *(undefined ***)(param_1[0x15] + lVar3) = &PTR_FUN_7104f4a168;
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x840;
    } while (lVar4 < *(int *)(param_1 + 0xe));
  }
  if (param_1[0x118] != 0) {
    FUN_710008d090();
  }
  if (0 < *(int *)(param_1 + 1)) {
    lVar4 = 0;
    lVar3 = 0x110;
    do {
      FUN_71000af0d0(param_1[2] + lVar3,param_1[7]);
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x9e8;
    } while (lVar4 < *(int *)(param_1 + 1));
  }
  *(int *)(param_1 + 0xb) = *(int *)(param_1 + 0xb) + -1;
  (**(code **)(*(long *)param_1[9] + 0x18))((long *)param_1[9],param_1[0x241]);
  FUN_7100098f00();
  FUN_71000992a0();
  FUN_71000937a0();
  FUN_71000af770(param_1[7],plVar1);
  FUN_7100093520(0);
  FUN_7100093600(0);
  FUN_710009d970(plVar1);
  FUN_71000a0c60(plVar1);
  FUN_71000accc0(plVar1);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x2dc));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x2d8));
  param_1[0x299] = &PTR_FUN_7104f49c08;
  FUN_7100033910();
  FUN_7100031870();
  FUN_7100033910();
  FUN_7100031870();
  return;
}

