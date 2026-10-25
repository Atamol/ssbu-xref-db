// addr:      710016fbb0
// offset:    0x16fbb0
// name:      FUN_710016fbb0
// mangled:   
// signature: undefined __cdecl FUN_710016fbb0(int * param_1, long * param_2, undefined4 * param_3, long * param_4)


void FUN_710016fbb0(int *param_1,long *param_2,undefined4 *param_3,long *param_4)

{
  long lVar1;
  int *piVar2;
  int local_58 [4];
  int local_48 [4];
  undefined4 local_38 [2];
  
  lVar1 = param_4[1];
  param_2[0x52] = *param_4;
  param_2[0x53] = lVar1;
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
  local_58[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_58);
  FUN_710016eb70(local_58,(long)param_2);
  FUN_71000bcf30(local_48,local_58);
  if (local_48[0] == 0) {
    FUN_7100172d30(local_58,param_2,param_3,7);
    FUN_71000bcf30(local_48,local_58);
    if (local_48[0] == 0) {
      param_2[8] = (long)"LdnBackgroundProcessJob::ScanNetworkPrivate";
      param_2[6] = (long)FUN_710016fcc0;
      param_2[7] = 0;
      local_58[0] = 0;
    }
    else {
      local_58[0] = 0x10c08;
    }
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_58 | 4));
    local_38[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
    piVar2 = local_58;
  }
  else {
    piVar2 = local_48;
  }
  FUN_71000bce50(param_1,piVar2);
  return;
}

