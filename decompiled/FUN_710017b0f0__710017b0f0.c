// addr:      710017b0f0
// offset:    0x17b0f0
// name:      FUN_710017b0f0
// mangled:   
// signature: undefined FUN_710017b0f0(void)


void FUN_710017b0f0(int *param_1,long param_2,long *param_3,undefined8 param_4)

{
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  *(long **)(param_2 + 0x98) = param_3;
  (**(code **)(*param_3 + 0x168))(param_3,param_4);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(char **)(param_2 + 0x40) = "LocalMatchBrowseMatchmakeJob::BrowseMatchmake";
  *(code **)(param_2 + 0x30) = FUN_710017b180;
  aiStack_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
  FUN_71000bce50(param_1,aiStack_38);
  return;
}

