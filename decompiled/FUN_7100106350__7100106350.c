// addr:      7100106350
// offset:    0x106350
// name:      FUN_7100106350
// mangled:   
// signature: undefined FUN_7100106350(void)


undefined8 FUN_7100106350(long param_1)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  char *pcVar4;
  ulong uVar5;
  int aiStack_30 [4];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
  case 6:
  case 7:
  case 8:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    *(code **)(param_1 + 0x30) = FUN_710013e030;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar4 = "nex::NexMatchDestroySessionJob::SendMonitoringData";
    break;
  default:
    uVar5 = (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0');
    if (*(int *)(DAT_71052adb38 + uVar5 * 4 + 0x180) != 0) {
      plVar3 = *(long **)(DAT_71052adb38 + uVar5 * 8 + 0x168);
      (**(code **)(*plVar3 + 0x70))(aiStack_30,plVar3,param_1 + 0x60);
      pcVar1 = FUN_7100106590;
      if (aiStack_30[0] != 0) {
        pcVar1 = FUN_7100106460;
      }
      pcVar4 = "NexMatchDestroySessionJob::WaitUnregisterBufferMatchmakeSession";
      if (aiStack_30[0] != 0) {
        pcVar4 = "NexMatchDestroySessionJob::UnregisterCurrentMatchmakeSession";
      }
      *(code **)(param_1 + 0x30) = pcVar1;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = pcVar4;
      return 0;
    }
    *(code **)(param_1 + 0x30) = FUN_7100106460;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar4 = "NexMatchDestroySessionJob::UnregisterCurrentMatchmakeSession";
  }
  *(char **)(param_1 + 0x40) = pcVar4;
  return 0;
}

