// addr:      710017b460
// offset:    0x17b460
// name:      FUN_710017b460
// mangled:   
// signature: undefined FUN_710017b460(void)


void FUN_710017b460(int *param_1,long param_2,undefined8 param_3)

{
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  *(undefined8 *)(param_2 + 0x98) = param_3;
  *(code **)(param_2 + 0x30) = FUN_710017b4d0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(char **)(param_2 + 0x40) = "LocalMatchBrowseMatchmakeJob::WaitHostMigration";
  aiStack_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
  FUN_71000bce50(param_1,aiStack_38);
  return;
}

