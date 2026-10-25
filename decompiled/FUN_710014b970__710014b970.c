// addr:      710014b970
// offset:    0x14b970
// name:      FUN_710014b970
// mangled:   
// signature: undefined __cdecl FUN_710014b970(int * param_1, long * param_2, undefined4 * param_3, undefined4 param_4, long * param_5)


void FUN_710014b970(int *param_1,long *param_2,undefined4 *param_3,undefined4 param_4,long *param_5)

{
  ulong uVar1;
  int local_50 [4];
  undefined4 local_38 [2];
  
  uVar1 = (**(code **)(*param_5 + 0xe0))(param_5);
  if ((uVar1 & 1) == 0) {
    local_50[0] = 0x10c08;
  }
  else {
    param_2[0xb] = (long)param_3;
    FUN_71000b4160(param_3);
    *(undefined4 *)(param_2 + 0x12) = param_4;
    param_2[0x13] = (long)param_5;
    (**(code **)(*param_2 + 0x10))(param_2,1);
    param_2[7] = 0;
    param_2[8] = (long)"OpenParticipationJob::OpenParticipation";
    param_2[6] = (long)FUN_710014ba50;
    local_50[0] = 0;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
  local_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_38);
  FUN_71000bce50(param_1,local_50);
  return;
}

