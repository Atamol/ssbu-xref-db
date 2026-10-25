// addr:      7100173f20
// offset:    0x173f20
// name:      FUN_7100173f20
// mangled:   
// signature: undefined __cdecl FUN_7100173f20(int * param_1, long * param_2, undefined4 * param_3)


void FUN_7100173f20(int *param_1,long *param_2,undefined4 *param_3)

{
  int local_40 [4];
  undefined4 local_28 [2];
  
  (**(code **)(*param_2 + 0x10))(param_2,0);
  param_2[0xb] = (long)param_3;
  FUN_71000b40e0(param_3);
  FUN_71000b4160((undefined4 *)param_2[0xb]);
  param_2[6] = (long)FUN_7100173fc0;
  param_2[7] = 0;
  param_2[8] = (long)"LocalEventCheckBackgroundJob::UpdateConnectionStatus";
  local_40[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_40 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_71000bce50(param_1,local_40);
  return;
}

