// addr:      710011f5f0
// offset:    0x11f5f0
// name:      FUN_710011f5f0
// mangled:   
// signature: undefined FUN_710011f5f0(void)


undefined8 FUN_710011f5f0(long param_1,int *param_2)

{
  FUN_71000bcf30((int *)(param_1 + 0xa0),param_2);
  *(char **)(param_1 + 0x40) = "LanMatchCreateSessionJob::UnregisterGathering";
  *(code **)(param_1 + 0x30) = FUN_710011f630;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 5;
}

