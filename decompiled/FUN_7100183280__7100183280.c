// addr:      7100183280
// offset:    0x183280
// name:      FUN_7100183280
// mangled:   
// signature: undefined FUN_7100183280(void)


undefined8 FUN_7100183280(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_71000b4a50(*(long *)(param_1 + 0x88));
  if ((uVar1 & 1) == 0) {
    FUN_710017f1c0(*(long *)(param_1 + 0x90),0);
    *(code **)(param_1 + 0x30) = FUN_71001830c0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalEventJob::WatchUpdateEvent";
  }
  return 5;
}

