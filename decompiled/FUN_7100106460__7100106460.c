// addr:      7100106460
// offset:    0x106460
// name:      FUN_7100106460
// mangled:   
// signature: undefined FUN_7100106460(void)


undefined8 FUN_7100106460(long param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  int aiStack_30 [4];
  
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar4) {
  case 5:
  case 6:
  case 7:
  case 8:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    *(code **)(param_1 + 0x30) = FUN_710013e030;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "nex::NexMatchDestroySessionJob::SendMonitoringData";
    return 0;
  }
  if (*(int *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180) != 0) {
    plVar5 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    (**(code **)(*plVar5 + 0x70))(aiStack_30,plVar5,param_1 + 0x60);
    pcVar1 = "NexMatchDestroySessionJob::WaitUnregisterCurrentMatchmakeSession";
    pcVar3 = FUN_71001066b0;
    if (aiStack_30[0] != 0) {
      pcVar1 = "DestroySessionJob::SendMonitoringData";
      pcVar3 = FUN_710013e030;
    }
    uVar2 = 5;
    if (aiStack_30[0] != 0) {
      uVar2 = 0;
    }
    *(char **)(param_1 + 0x40) = pcVar1;
    *(code **)(param_1 + 0x30) = pcVar3;
    *(undefined8 *)(param_1 + 0x38) = 0;
    return uVar2;
  }
  *(code **)(param_1 + 0x30) = FUN_710013e030;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "DestroySessionJob::SendMonitoringData";
  return 0;
}

