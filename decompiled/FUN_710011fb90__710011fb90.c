// addr:      710011fb90
// offset:    0x11fb90
// name:      FUN_710011fb90
// mangled:   
// signature: undefined FUN_710011fb90(void)


void FUN_710011fb90(int *param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  *(long *)(param_2 + 0x90) = param_3;
  uVar1 = FUN_710011baa0(param_3,param_4,1);
  if ((uVar1 & 1) == 0) {
    aiStack_38[0] = 0x10c07;
  }
  else {
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(char **)(param_2 + 0x40) = "LanMatchBrowseMatchmakeJob::BrowseMatchmake";
    *(code **)(param_2 + 0x30) = FUN_710011fc30;
    aiStack_38[0] = 0;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
  FUN_71000bce50(param_1,aiStack_38);
  return;
}

