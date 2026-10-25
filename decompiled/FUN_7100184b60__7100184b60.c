// addr:      7100184b60
// offset:    0x184b60
// name:      FUN_7100184b60
// mangled:   
// signature: undefined __cdecl FUN_7100184b60(int * param_1, long * param_2, undefined4 * param_3, undefined4 param_4)


void FUN_7100184b60(int *param_1,long *param_2,undefined4 *param_3,undefined4 param_4)

{
  uint uVar1;
  int local_48 [4];
  undefined4 local_38 [2];
  
  uVar1 = FUN_71000b4990((long)param_2);
  if ((uVar1 & 1) == 0) {
    (**(code **)(*param_2 + 0x10))(param_2,0);
    param_2[0xb] = (long)param_3;
    FUN_71000b40e0(param_3);
    FUN_71000b4160((undefined4 *)param_2[0xb]);
    *(undefined4 *)(param_2 + 0xc) = param_4;
    param_2[6] = (long)FUN_7100184c30;
    param_2[7] = 0;
    param_2[8] = (long)"LocalAllowParticipatingBackgroundJob::AllowParticipating";
    local_48[0] = 0;
  }
  else {
    local_48[0] = 0x10c08;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
  local_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_71000bce50(param_1,local_48);
  return;
}

