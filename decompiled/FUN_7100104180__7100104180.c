// addr:      7100104180
// offset:    0x104180
// name:      FUN_7100104180
// mangled:   
// signature: undefined FUN_7100104180(void)


undefined8 FUN_7100104180(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  int aiStack_40 [4];
  
  lVar1 = DAT_71052adb38;
  plVar6 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
  case 7:
  case 8:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    *(code **)(param_1 + 0x30) = FUN_71001411a0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar5 = "nex::NexMatchLeaveSessionJob::SendMonitoringData";
    break;
  case 6:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    *(code **)(param_1 + 0x30) = FUN_7100141230;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar5 = "nex::NexMatchLeaveSessionJob::LeaveMesh";
    break;
  default:
    uVar3 = FUN_71000da970((long)plVar6);
    if ((uVar3 & 1) != 0) {
      FUN_71000bce50(aiStack_40,(int *)(param_1 + 100));
      if (aiStack_40[0] != 0) {
        *(code **)(param_1 + 0x30) = FUN_7100104000;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "NexMatchLeaveSessionJob::GetMatchmakeSessionOwners";
      }
      lVar4 = (**(code **)(*plVar6 + 0xf0))(plVar6);
      FUN_7100150e30(*(long *)(lVar1 + 0xb8),lVar4,1);
      *(char **)(param_1 + 0x40) = "NexMatchLeaveSessionJob::GetMatchmakeSessionOwners";
      *(code **)(param_1 + 0x30) = FUN_7100104000;
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    return 5;
  }
  *(char **)(param_1 + 0x40) = pcVar5;
  return 0;
}

