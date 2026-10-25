// addr:      71000d3140
// offset:    0xd3140
// name:      FUN_71000d3140
// mangled:   
// signature: undefined8 __cdecl FUN_71000d3140(long param_1)


undefined8 FUN_71000d3140(long param_1)

{
  byte bVar1;
  
  if ((*(long *)(param_1 + 0x58) == 0) || (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0')) {
    bVar1 = FUN_71000c36d0(DAT_71052acd90);
    if ((bVar1 & 1) != 0) {
      (**(code **)(**(long **)(DAT_71052acd90 + 0x88) + 0x50))();
      (**(code **)(**(long **)(DAT_71052acd90 + 0x88) + 0x60))();
    }
  }
  *(char **)(param_1 + 0x40) = "NexNatServerAddressResolveJob::StepComplete";
  *(code **)(param_1 + 0x30) = FUN_71000d2f00;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 6;
}

