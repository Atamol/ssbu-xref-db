// addr:      710011d750
// offset:    0x11d750
// name:      FUN_710011d750
// mangled:   
// signature: undefined8 __cdecl FUN_710011d750(long param_1)


undefined8 FUN_710011d750(long param_1)

{
  int iVar1;
  ulong uVar2;
  int local_38 [4];
  undefined4 local_28 [2];
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x138) + 0x68))();
  if ((uVar2 & 1) != 0) {
    FUN_7100149270(DAT_71052adb38,0);
    iVar1 = FUN_7100146ba0(DAT_71052adb38);
    if (iVar1 == 5) {
      local_38[0] = 0xc406;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_38 | 4));
      local_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
      FUN_71000bcf30((int *)(param_1 + 0x120),local_38);
    }
    *(code **)(param_1 + 0x30) = FUN_710013e970;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LanMatchJoinSessionJob::CompleteFailure";
    return 0;
  }
  return 5;
}

