// addr:      71000b3e20
// offset:    0xb3e20
// name:      FUN_71000b3e20
// mangled:   
// signature: undefined __cdecl FUN_71000b3e20(int * param_1, long param_2, long param_3)


void FUN_71000b3e20(int *param_1,long param_2,long param_3)

{
  int local_40 [4];
  undefined4 local_28 [2];
  
  if (param_3 == 0) {
    local_40[0] = 0x10c07;
  }
  else if (*(int *)(param_2 + 0x58) == 1) {
    local_40[0] = 0x10c08;
  }
  else {
    *(long *)(param_2 + 0x88) = param_3;
    FUN_71000baac0(param_2);
    *(code **)(param_2 + 0x30) = FUN_71000b3ef0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(char **)(param_2 + 0x40) = "MonitoringDataSendJob::StepSendReport";
    FUN_71000b4160((int *)(param_2 + 0x58));
    local_40[0] = 0;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_40 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_71000bce50(param_1,local_40);
  return;
}

