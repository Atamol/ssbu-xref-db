// addr:      7100183920
// offset:    0x183920
// name:      FUN_7100183920
// mangled:   
// signature: undefined __cdecl FUN_7100183920(int * param_1, long param_2, undefined4 * param_3, byte param_4)


void FUN_7100183920(int *param_1,long param_2,undefined4 *param_3,byte param_4)

{
  long lVar1;
  int local_48 [4];
  undefined4 local_38 [2];
  
  if (*(int *)(*(long *)(param_2 + 0x88) + 0x474) == 1) {
    *(undefined4 **)(param_2 + 0x58) = param_3;
    FUN_71000b40e0(param_3);
    FUN_71000b4160(*(undefined4 **)(param_2 + 0x58));
    *(byte *)(param_2 + 0x80) = param_4 & 1;
    if ((param_4 & 1) != 0) {
      lVar1 = *(long *)(param_2 + 0x88);
      *(undefined4 *)(lVar1 + 0x418) = 1;
      *(undefined1 *)(lVar1 + 0x468) = 1;
    }
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(char **)(param_2 + 0x40) = "LocalDestroyNetworkJob::TryPrepareDestroyNetwork";
    *(code **)(param_2 + 0x30) = FUN_71001839f0;
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

