// addr:      710011f630
// offset:    0x11f630
// name:      FUN_710011f630
// mangled:   
// signature: undefined8 __cdecl FUN_710011f630(long param_1)


undefined8 FUN_710011f630(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int aiStack_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    local_38[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_38 | 4));
    local_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
    FUN_71000bcf30((int *)(param_1 + 0xa0),local_38);
    *(code **)(param_1 + 0x30) = FUN_710013d590;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "nn::pia::lan::LanMatchCreateSessionJob::CompleteFailure";
    return 0;
  }
  (**(code **)(**(long **)(param_1 + 0xb0) + 0x70))
            (local_38,*(long **)(param_1 + 0xb0),param_1 + 0x60,
             *(undefined4 *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180))
  ;
  if (local_38[0] != 0) {
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    puVar2 = *(undefined4 **)(param_1 + 0x58);
    FUN_71000bce50(aiStack_48,(int *)(param_1 + 0xa0));
    FUN_71000b41f0(puVar2,aiStack_48);
    *(undefined8 *)(param_1 + 0x58) = 0;
    return 1;
  }
  *(char **)(param_1 + 0x40) = "LanMatchCreateSessionJob::WaitUnregisterGathering";
  *(code **)(param_1 + 0x30) = FUN_710011f760;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 5;
}

