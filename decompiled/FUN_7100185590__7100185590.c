// addr:      7100185590
// offset:    0x185590
// name:      FUN_7100185590
// mangled:   
// signature: undefined __cdecl FUN_7100185590(int * param_1, long * param_2, undefined4 * param_3, long param_4)


void FUN_7100185590(int *param_1,long *param_2,undefined4 *param_3,long param_4)

{
  ulong local_50;
  undefined4 local_48;
  undefined4 local_38 [2];
  
  local_48 = 0;
  local_50 = 0x10;
  FUN_71000b2b70();
  (**(code **)(*param_2 + 0x10))(param_2,0);
  param_2[0xb] = (long)param_3;
  FUN_71000b40e0(param_3);
  FUN_71000b4160((undefined4 *)param_2[0xb]);
  FUN_71000beb40((long)(param_2 + 0xc),param_4);
  param_2[6] = (long)FUN_7100185670;
  param_2[7] = 0;
  param_2[8] = (long)"LocalEjectClientBackgroundJob::EjectClient";
  local_50 = local_50 & 0xffffffff00000000;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&local_50 | 4));
  local_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)&local_50 | 4),(Result *)local_38);
  FUN_71000bce50(param_1,(int *)&local_50);
  return;
}

