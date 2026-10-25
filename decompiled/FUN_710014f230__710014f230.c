// addr:      710014f230
// offset:    0x14f230
// name:      FUN_710014f230
// mangled:   
// signature: undefined __cdecl FUN_710014f230(int * param_1, long * param_2)


void FUN_710014f230(int *param_1,long *param_2)

{
  char *pcVar1;
  code *pcVar2;
  int *piVar3;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  piVar3 = local_50;
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x30))(local_40);
  if (local_40[0] == 0) {
    (**(code **)(*param_2 + 0x10))(param_2,1);
    pcVar1 = "SessionStatusCheckJob::CheckSessionStatus";
    pcVar2 = FUN_710014f9d0;
    if (*(long *)(DAT_71052adb38 + 0x70) != 0) {
      pcVar1 = "SessionStatusCheckJob::CheckSessionStatus4JointSession";
      pcVar2 = FUN_710014f310;
    }
    param_2[6] = (long)pcVar2;
    param_2[7] = 0;
    param_2[8] = (long)pcVar1;
    local_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
    local_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  }
  else {
    piVar3 = local_40;
  }
  FUN_71000bce50(param_1,piVar3);
  return;
}

