// addr:      710011fe70
// offset:    0x11fe70
// name:      FUN_710011fe70
// mangled:   
// signature: undefined FUN_710011fe70(void)


void FUN_710011fe70(int *param_1,long param_2,long *param_3)

{
  int *piVar1;
  int aiStack_48 [4];
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  *(long **)(param_2 + 0x90) = param_3;
  (**(code **)(*param_3 + 0xb0))(aiStack_38,param_3,param_2 + 0x60);
  if (aiStack_38[0] == 0) {
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(char **)(param_2 + 0x40) = "LanMatchBrowseMatchmakeJob::WaitRequestSessionInfo";
    *(code **)(param_2 + 0x30) = FUN_710011ff10;
    aiStack_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_28);
    piVar1 = aiStack_48;
  }
  else {
    piVar1 = aiStack_38;
  }
  FUN_71000bce50(param_1,piVar1);
  return;
}

