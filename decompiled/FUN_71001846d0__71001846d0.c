// addr:      71001846d0
// offset:    0x1846d0
// name:      FUN_71001846d0
// mangled:   
// signature: undefined __cdecl FUN_71001846d0(int * param_1, long param_2, undefined4 * param_3, undefined4 param_4)


void FUN_71001846d0(int *param_1,long param_2,undefined4 *param_3,undefined4 param_4)

{
  ulong uVar1;
  int *piVar2;
  ErrorResultVariant *this;
  int local_58 [4];
  int local_48 [4];
  undefined4 local_38 [2];
  
  uVar1 = FUN_71001800a0(*(long *)(param_2 + 0xb0));
  if ((uVar1 & 1) == 0) {
    local_48[0] = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
    local_58[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_58);
    piVar2 = local_48;
  }
  else {
    FUN_7100184b60(local_48,*(long **)(param_2 + 0x58),(undefined4 *)(param_2 + 0x68),param_4);
    if (local_48[0] == 0) {
      *(undefined4 *)(param_2 + 0x98) = param_4;
      local_58[0] = 0;
      this = (ErrorResultVariant *)((ulong)local_58 | 4);
      nn::err::ErrorResultVariant::ErrorResultVariant(this);
      local_38[0] = 0;
      nn::err::ErrorResultVariant::operator=(this,(Result *)local_38);
      FUN_71000bcf30((int *)(param_2 + 0x9c),local_58);
      *(undefined4 **)(param_2 + 0x60) = param_3;
      FUN_71000b40e0(param_3);
      FUN_71000b4160(*(undefined4 **)(param_2 + 0x60));
      FUN_71000b4820(*(long *)(param_2 + 0x58),1);
      *(char **)(param_2 + 0x40) = "LocalAllowParticipatingJob::WaitAllowParticipating";
      *(code **)(param_2 + 0x30) = FUN_7100184800;
      *(undefined8 *)(param_2 + 0x38) = 0;
      local_58[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(this);
      local_38[0] = 0;
      nn::err::ErrorResultVariant::operator=(this,(Result *)local_38);
      piVar2 = local_58;
    }
    else {
      piVar2 = local_48;
    }
  }
  FUN_71000bce50(param_1,piVar2);
  return;
}

