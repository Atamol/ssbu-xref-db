// addr:      710017a330
// offset:    0x17a330
// name:      FUN_710017a330
// mangled:   
// signature: undefined FUN_710017a330(void)


undefined8 FUN_710017a330(long param_1)

{
  code *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  long *plVar5;
  int aiStack_30 [4];
  
  plVar5 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  (**(code **)(*plVar5 + 0x60))(aiStack_30,plVar5,param_1 + 0x60,*(undefined4 *)(param_1 + 0x114));
  bVar4 = aiStack_30[0] != 0;
  pcVar1 = FUN_710017a3d0;
  if (bVar4) {
    pcVar1 = FUN_710013e970;
  }
  pcVar2 = "LocalMatchJoinSessionJob::WaitLeaveMatchmake";
  if (bVar4) {
    pcVar2 = "LocalMatchJoinSessionJob::CompleteFailure";
  }
  *(code **)(param_1 + 0x30) = pcVar1;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar2;
  uVar3 = 5;
  if (bVar4) {
    uVar3 = 0;
  }
  return uVar3;
}

