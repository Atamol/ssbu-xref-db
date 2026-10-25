// addr:      71001831b0
// offset:    0x1831b0
// name:      FUN_71001831b0
// mangled:   
// signature: undefined FUN_71001831b0(void)


undefined8 FUN_71001831b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 5;
  switch(*(undefined4 *)(param_1 + 0x58)) {
  case 1:
    break;
  case 2:
    *(code **)(param_1 + 0x30) = FUN_7100183230;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalEventJob::ProcessUpdateEvent";
    return 0;
  case 3:
    *(code **)(param_1 + 0x30) = FUN_7100183280;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalEventJob::WaitBackgroundJobEnd";
    return 0;
  default:
    uVar1 = 1;
  }
  return uVar1;
}

