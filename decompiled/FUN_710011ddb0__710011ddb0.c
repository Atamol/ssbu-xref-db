// addr:      710011ddb0
// offset:    0x11ddb0
// name:      FUN_710011ddb0
// mangled:   
// signature: undefined FUN_710011ddb0(void)


undefined8 FUN_710011ddb0(long param_1)

{
  int iVar1;
  char *pcVar2;
  
  FUN_710013fd20(param_1);
  *(undefined1 *)(DAT_71052adb38 + 0x15d) = 1;
  *(code **)(param_1 + 0x30) = FUN_710011df00;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "LanMatchJointSessionJob::WaitNextSessionId";
  iVar1 = *(int *)(param_1 + 0x90);
  if (iVar1 - 9U < 2) {
    if (*(char *)(param_1 + 0xf4) == '\0') {
      *(code **)(param_1 + 0x30) = FUN_710011e0c0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar2 = "LanMatchJointSessionJob::SendAnswerToInvitation";
    }
    else {
      *(code **)(param_1 + 0x30) = FUN_710011e000;
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar2 = "LanMatchJointSessionJob::SendInvitationAsCompanion";
    }
  }
  else if (iVar1 == 8) {
    if (*(char *)(param_1 + 0xf4) == '\0') {
      return 0;
    }
    *(code **)(param_1 + 0x30) = FUN_710011dfe0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar2 = "LanMatchJointSessionJob::StartRandomMatchmake";
  }
  else {
    if (iVar1 != 7) {
      return 0;
    }
    if (*(char *)(param_1 + 0xf4) == '\0') {
      return 0;
    }
    *(code **)(param_1 + 0x30) = FUN_710011dfc0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar2 = "LanMatchJointSessionJob::StartJoinMatchmakeSession";
  }
  *(char **)(param_1 + 0x40) = pcVar2;
  return 0;
}

