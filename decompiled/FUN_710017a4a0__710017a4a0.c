// addr:      710017a4a0
// offset:    0x17a4a0
// name:      FUN_710017a4a0
// mangled:   
// signature: undefined FUN_710017a4a0(void)


undefined8 FUN_710017a4a0(long param_1,int *param_2)

{
  ErrorResultVariant *this;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  aiStack_40[0] = 0x646f;
  this = (ErrorResultVariant *)((ulong)aiStack_40 | 4);
  nn::err::ErrorResultVariant::ErrorResultVariant(this);
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_28);
  if (*param_2 == aiStack_40[0]) {
    aiStack_40[0] = 0x641e;
    nn::err::ErrorResultVariant::ErrorResultVariant(this);
  }
  else {
    aiStack_40[0] = 0x6470;
    nn::err::ErrorResultVariant::ErrorResultVariant(this);
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_28);
    if (*param_2 != aiStack_40[0]) goto LAB_710017a580;
    aiStack_40[0] = 0x641f;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
  }
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
  param_2 = aiStack_40;
LAB_710017a580:
  FUN_71000bcf30((int *)(param_1 + 0x120),param_2);
  *(char **)(param_1 + 0x40) = "LocalMatchJoinSessionJob::MeshCleanup";
  *(code **)(param_1 + 0x30) = FUN_710013f360;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}

