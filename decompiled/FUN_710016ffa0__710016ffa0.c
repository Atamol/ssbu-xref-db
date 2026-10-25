// addr:      710016ffa0
// offset:    0x16ffa0
// name:      FUN_710016ffa0
// mangled:   
// signature: undefined __cdecl FUN_710016ffa0(int * param_1, long * param_2, undefined4 * param_3)


void FUN_710016ffa0(int *param_1,long *param_2,undefined4 *param_3)

{
  long *plVar1;
  int local_50 [4];
  long local_40 [2];
  undefined4 local_28 [2];
  
  local_40[0] = 0;
  FUN_71000bb5d0(local_40);
  plVar1 = FUN_71000bb680();
  param_2[0xd] = local_40[0] + *plVar1 * 0x1194;
  FUN_7100172d30((int *)local_40,param_2,param_3,3);
  if ((int)local_40[0] == 0) {
    plVar1 = (long *)param_2[0x54];
    param_2[6] = (long)FUN_71001700a0;
    param_2[7] = 0;
    param_2[8] = (long)"LdnBackgroundProcessJob::ConnectNetworkPrivate";
    DAT_71052ac5e0 = 0;
    if (*(char *)((long)plVar1 + 0x53) == '\x02') {
      DAT_71052ac5e0 = plVar1[1];
    }
    DAT_71052ac5e8 = (**(code **)(*plVar1 + 8))();
    local_50[0] = 0;
  }
  else {
    local_50[0] = 0x10c08;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  FUN_71000bce50(param_1,local_50);
  return;
}

