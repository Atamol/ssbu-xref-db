// addr:      710011ce30
// offset:    0x11ce30
// name:      FUN_710011ce30
// mangled:   
// signature: undefined FUN_710011ce30(void)


undefined8 FUN_710011ce30(long param_1)

{
  ulong uVar1;
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  if ((*(long *)(param_1 + 0x58) == 0) || (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0')) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x138) + 0xa8))
                      (*(long **)(param_1 + 0x138),param_1 + 0x90);
    if ((uVar1 & 1) == 0) {
      return 5;
    }
    if (*(int *)(param_1 + 0x60) == 2) {
      *(code **)(param_1 + 0x30) = FUN_710013e7c0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "JoinSessionJob::MeshStartup";
      return 0;
    }
    if (*(int *)(param_1 + 0x60) != 3) {
      return 5;
    }
    FUN_71000bce50(aiStack_38,(int *)(param_1 + 100));
  }
  else {
    aiStack_38[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
  }
  FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_38);
  *(char **)(param_1 + 0x40) = "LanMatchJoinSessionJob::LeaveMatchmakeSession";
  *(code **)(param_1 + 0x30) = FUN_710011cd30;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 5;
}

