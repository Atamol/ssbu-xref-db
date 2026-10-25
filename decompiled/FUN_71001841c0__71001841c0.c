// addr:      71001841c0
// offset:    0x1841c0
// name:      FUN_71001841c0
// mangled:   
// signature: undefined __cdecl FUN_71001841c0(int * param_1, long param_2, undefined4 * param_3)


void FUN_71001841c0(int *param_1,long param_2,undefined4 *param_3)

{
  int local_38 [4];
  undefined4 local_28 [2];
  
  if (*(int *)(*(long *)(param_2 + 0x68) + 0x474) == 2) {
    *(undefined4 **)(param_2 + 0x58) = param_3;
    FUN_71000b40e0(param_3);
    FUN_71000b4160(*(undefined4 **)(param_2 + 0x58));
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(char **)(param_2 + 0x40) = "LocalDisconnectNetworkJob::TryPrepareDisconnectNetwork";
    *(code **)(param_2 + 0x30) = FUN_7100184270;
    local_38[0] = 0;
  }
  else {
    local_38[0] = 0x10c08;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_38 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_71000bce50(param_1,local_38);
  return;
}

