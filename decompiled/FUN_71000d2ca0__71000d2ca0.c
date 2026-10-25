// addr:      71000d2ca0
// offset:    0xd2ca0
// name:      FUN_71000d2ca0
// mangled:   
// signature: undefined __cdecl FUN_71000d2ca0(int * param_1, long param_2, undefined4 * param_3)


void FUN_71000d2ca0(int *param_1,long param_2,undefined4 *param_3)

{
  ulong uVar1;
  ErrorResultVariant *this;
  int local_40 [4];
  undefined4 local_28 [2];
  
  if (param_3 == (undefined4 *)0x0) {
    local_40[0] = 0x10c07;
  }
  else {
    uVar1 = FUN_71000b4160(param_3);
    if ((uVar1 & 1) != 0) {
      *(undefined4 **)(param_2 + 0x58) = param_3;
      *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(DAT_71052ac580 + 0x30);
      this = (ErrorResultVariant *)((ulong)local_40 | 4);
      local_40[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(this);
      local_28[0] = 0;
      nn::err::ErrorResultVariant::operator=(this,(Result *)local_28);
      FUN_71000bcf30((int *)(param_2 + 0x68),local_40);
      *(code **)(param_2 + 0x30) = FUN_71000d2dc0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(char **)(param_2 + 0x40) = "NexNatServerAddressResolveJob::StepResolveNatServerAddress";
      FUN_71000baac0(param_2);
      local_40[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(this);
      goto LAB_71000d2d90;
    }
    local_40[0] = 0x10c08;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_40 | 4));
LAB_71000d2d90:
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_71000bce50(param_1,local_40);
  return;
}

