// addr:      7100173320
// offset:    0x173320
// name:      FUN_7100173320
// mangled:   
// signature: undefined __cdecl FUN_7100173320(int * param_1, long * param_2, undefined4 * param_3)


void FUN_7100173320(int *param_1,long *param_2,undefined4 *param_3)

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
    param_2[6] = 0x60;
    param_2[7] = 1;
    param_2[8] = (long)"LocalBackgroundProcessJob::ConnectNetwork";
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

