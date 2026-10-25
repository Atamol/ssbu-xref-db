// addr:      7100183050
// offset:    0x183050
// name:      FUN_7100183050
// mangled:   
// signature: undefined __cdecl FUN_7100183050(int * param_1, long param_2)


void FUN_7100183050(int *param_1,long param_2)

{
  int local_38 [4];
  undefined4 local_28 [2];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(code **)(param_2 + 0x30) = FUN_71001830c0;
  *(char **)(param_2 + 0x40) = "LocalEventJob::WatchUpdateEvent";
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_38 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_71000bce50(param_1,local_38);
  return;
}

