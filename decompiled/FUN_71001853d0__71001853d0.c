// addr:      71001853d0
// offset:    0x1853d0
// name:      FUN_71001853d0
// mangled:   
// signature: undefined FUN_71001853d0(void)


undefined8 FUN_71001853d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 5;
  switch(*(undefined4 *)(param_1 + 400)) {
  case 1:
    break;
  case 2:
  case 3:
    *(code **)(param_1 + 0x30) = FUN_7100185430;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalEjectClientListCheckJob::WaitBackgroundJobEnd";
    return 0;
  default:
    uVar1 = 1;
  }
  return uVar1;
}

