// addr:      7100104430
// offset:    0x104430
// name:      FUN_7100104430
// mangled:   
// signature: undefined FUN_7100104430(void)


undefined8 FUN_7100104430(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  int aiStack_40 [4];
  
  lVar4 = *(long *)(DAT_71052adb38 + (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168)
  ;
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
  case 7:
  case 8:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    uVar3 = 0;
    param_1[6] = (long)FUN_71001411a0;
    param_1[7] = 0;
    param_1[8] = (long)"nex::NexMatchLeaveSessionJob::SendMonitoringData";
    break;
  case 6:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    uVar3 = 0;
    param_1[6] = (long)FUN_7100141230;
    param_1[7] = 0;
    param_1[8] = (long)"nex::NexMatchLeaveSessionJob::LeaveMesh";
    break;
  default:
    uVar2 = FUN_71000e2370(lVar4);
    if ((uVar2 & 1) == 0) {
      uVar3 = 5;
    }
    else {
      FUN_71000bce50(aiStack_40,(int *)((long)param_1 + 100));
      (**(code **)(*param_1 + 0x38))(param_1);
      uVar3 = 0;
    }
  }
  return uVar3;
}

