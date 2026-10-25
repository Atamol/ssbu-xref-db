// addr:      7100106590
// offset:    0x106590
// name:      FUN_7100106590
// mangled:   
// signature: undefined8 __cdecl FUN_7100106590(long param_1)


undefined8 FUN_7100106590(long param_1)

{
  int iVar1;
  ulong uVar2;
  code *pcVar3;
  char *pcVar4;
  undefined4 local_48 [4];
  int aiStack_38 [4];
  undefined4 local_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
  case 6:
  case 7:
  case 8:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    pcVar3 = FUN_710013e030;
    pcVar4 = "nex::NexMatchDestroySessionJob::SendMonitoringData";
    break;
  default:
    uVar2 = (**(code **)(**(long **)(DAT_71052adb38 +
                                     (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168)
                        + 0x78))();
    if ((uVar2 & 1) == 0) {
      return 5;
    }
    FUN_7100149290(DAT_71052adb38,0);
    if (*(int *)(param_1 + 0x60) == 3) {
      FUN_71000bce50(aiStack_38,(int *)(param_1 + 100));
      local_48[0] = 0x6c4b;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
      local_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
    }
    pcVar3 = FUN_7100106460;
    pcVar4 = "NexMatchDestroySessionJob::UnregisterCurrentMatchmakeSession";
  }
  *(code **)(param_1 + 0x30) = pcVar3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar4;
  return 0;
}

