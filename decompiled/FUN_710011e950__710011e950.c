// addr:      710011e950
// offset:    0x11e950
// name:      FUN_710011e950
// mangled:   
// signature: undefined FUN_710011e950(void)


undefined8 FUN_710011e950(long param_1)

{
  char *pcVar1;
  code *pcVar2;
  
  pcVar1 = "LanMatchJointSessionJob::StartGetNextMeshHostStationLocation";
  pcVar2 = FUN_710011e9b0;
  if (*(char *)(param_1 + 0xf5) != '\0') {
    pcVar1 = "LanMatchJointSessionJob::StartCreateNextMesh";
    pcVar2 = FUN_710011e990;
  }
  *(code **)(param_1 + 0x30) = pcVar2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar1;
  return 0;
}

