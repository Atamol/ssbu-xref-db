// addr:      7100175d60
// offset:    0x175d60
// name:      FUN_7100175d60
// mangled:   
// signature: undefined __cdecl FUN_7100175d60(int * param_1, long param_2, undefined4 * param_3, byte param_4)


void FUN_7100175d60(int *param_1,long param_2,undefined4 *param_3,byte param_4)

{
  undefined4 uVar1;
  int local_48 [4];
  undefined4 local_38 [2];
  
  *(undefined4 **)(param_2 + 0x58) = param_3;
  FUN_71000b40e0(param_3);
  FUN_71000b4160(*(undefined4 **)(param_2 + 0x58));
  *(byte *)(param_2 + 0x68) = param_4 & 1;
  uVar1 = 2;
  if ((param_4 & 1) == 0) {
    uVar1 = 3;
  }
  *(undefined4 *)(*(long *)(param_2 + 0x78) + 0x418) = uVar1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(char **)(param_2 + 0x40) = "LocalHostMigrationJob::DisconnectNetwork";
  *(code **)(param_2 + 0x30) = FUN_7100175e10;
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
  local_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_71000bce50(param_1,local_48);
  return;
}

