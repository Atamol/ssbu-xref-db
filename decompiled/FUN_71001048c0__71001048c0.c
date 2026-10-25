// addr:      71001048c0
// offset:    0x1048c0
// name:      FUN_71001048c0
// mangled:   
// signature: undefined FUN_71001048c0(void)


undefined8 FUN_71001048c0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  char *pcVar5;
  long lVar6;
  int aiStack_40 [4];
  
  lVar6 = *(long *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
  case 7:
  case 8:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    pcVar4 = FUN_71001411a0;
    uVar3 = 0;
    pcVar5 = "nex::NexMatchLeaveSessionJob::SendMonitoringData";
    break;
  case 6:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    pcVar4 = FUN_7100141230;
    uVar3 = 0;
    pcVar5 = "nex::NexMatchLeaveSessionJob::LeaveMesh";
    break;
  default:
    uVar2 = FUN_71000e0b40(lVar6);
    if ((uVar2 & 1) == 0) {
      return 5;
    }
    FUN_71000bce50(aiStack_40,(int *)(param_1 + 100));
    pcVar4 = FUN_7100104540;
    uVar3 = 5;
    pcVar5 = "NexMatchLeaveSessionJob::LeaveMatchmakeSessionCompanions";
  }
  *(code **)(param_1 + 0x30) = pcVar4;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar5;
  return uVar3;
}

