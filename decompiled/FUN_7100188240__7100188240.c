// addr:      7100188240
// offset:    0x188240
// name:      FUN_7100188240
// mangled:   
// signature: undefined FUN_7100188240(void)


undefined8 FUN_7100188240(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x68);
  if (*(byte *)(lVar1 + 0x38) < 0x20) {
    FUN_710019ee10(*(long **)(lVar1 + 0x98),(uint)*(byte *)(lVar1 + 0x38),1);
    FUN_710019ee10(*(long **)(*(long *)(param_1 + 0x68) + 0x98),
                   (uint)*(byte *)(*(long *)(param_1 + 0x68) + 0x38),1);
    lVar1 = *(long *)(param_1 + 0x68);
  }
  *(undefined4 *)(lVar1 + 0x48) = 6;
  *(code **)(param_1 + 0x30) = FUN_71001882c0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "DisconnectStationJob::DisconnectionSucceeded";
  return 5;
}

