// addr:      71001a0570
// offset:    0x1a0570
// name:      FUN_71001a0570
// mangled:   
// signature: undefined FUN_71001a0570(void)


undefined8 FUN_71001a0570(long param_1)

{
  *(char **)(param_1 + 0x40) = "ProcessConnectionRequestJob::WaitInverseConnection";
  *(code **)(param_1 + 0x30) = FUN_71001a0590;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}

