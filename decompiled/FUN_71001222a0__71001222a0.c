// addr:      71001222a0
// offset:    0x1222a0
// name:      FUN_71001222a0
// mangled:   
// signature: undefined FUN_71001222a0(void)


void FUN_71001222a0(int *param_1,long param_2,int param_3,long param_4,long *param_5,uint param_6)

{
  int iVar1;
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  *(long *)(param_2 + 0x98) = param_4;
  iVar1 = FUN_710011be40(param_4);
  if (iVar1 == param_3) {
    *(char *)(param_2 + 0xa0) = (char)(param_6 & 1);
    FUN_710011b8b0(*(long *)(param_2 + 0x98),param_5,(ulong)(param_6 & 1));
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(char **)(param_2 + 0x40) = "LanMatchUpdateSessionSettingJob::UpdateSessionSetting";
    *(code **)(param_2 + 0x30) = FUN_7100122370;
    aiStack_50[0] = 0;
  }
  else {
    aiStack_50[0] = 0x10c07;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_38);
  FUN_71000bce50(param_1,aiStack_50);
  return;
}

