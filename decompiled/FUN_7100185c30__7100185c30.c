// addr:      7100185c30
// offset:    0x185c30
// name:      FUN_7100185c30
// mangled:   
// signature: undefined __cdecl FUN_7100185c30(int * param_1, long param_2)


void FUN_7100185c30(int *param_1,long param_2)

{
  int local_38 [4];
  undefined4 local_28 [2];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(code **)(param_2 + 0x30) = FUN_7100185ca0;
  *(char **)(param_2 + 0x40) = "LocalResendMessageJob::ResendMessage";
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_38 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_71000bce50(param_1,local_38);
  return;
}

