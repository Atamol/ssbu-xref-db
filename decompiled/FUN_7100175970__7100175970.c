// addr:      7100175970
// offset:    0x175970
// name:      FUN_7100175970
// mangled:   
// signature: undefined __cdecl FUN_7100175970(int * param_1, long param_2, undefined4 * param_3, int param_4)


void FUN_7100175970(int *param_1,long param_2,undefined4 *param_3,int param_4)

{
  char *pcVar1;
  code *pcVar2;
  int local_40 [4];
  undefined4 local_28 [2];
  
  *(undefined4 **)(param_2 + 0x58) = param_3;
  FUN_71000b40e0(param_3);
  FUN_71000b4160(*(undefined4 **)(param_2 + 0x58));
  if (param_4 == 0) {
    pcVar2 = FUN_7100175a20;
    pcVar1 = "LocalForceDisconnectNetworkJob::WaitHostMigrationEnd";
  }
  else {
    if (param_4 != 1) goto LAB_71001759dc;
    pcVar2 = FUN_7100175b00;
    pcVar1 = "LocalForceDisconnectNetworkJob::WaitDisconnected";
  }
  *(code **)(param_2 + 0x30) = pcVar2;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(char **)(param_2 + 0x40) = pcVar1;
LAB_71001759dc:
  local_40[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_40 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_71000bce50(param_1,local_40);
  return;
}

