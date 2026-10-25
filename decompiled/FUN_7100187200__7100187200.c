// addr:      7100187200
// offset:    0x187200
// name:      FUN_7100187200
// mangled:   
// signature: undefined __cdecl FUN_7100187200(int * param_1, long * param_2)


void FUN_7100187200(int *param_1,long *param_2)

{
  int *piVar1;
  undefined4 in_w5;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  *(undefined4 *)(param_2 + 0xc) = in_w5;
  (**(code **)(*param_2 + 0x30))(local_38);
  if (local_38[0] == 0) {
    *(undefined1 *)(param_2[0xe] + 0xb8) = 0;
    param_2[6] = (long)FUN_71001872a0;
    param_2[7] = 0;
    param_2[8] = (long)"ConnectStationJob::SendRelayConnectionRequest";
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
    local_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
    piVar1 = local_48;
  }
  else {
    piVar1 = local_38;
  }
  FUN_71000bce50(param_1,piVar1);
  return;
}

