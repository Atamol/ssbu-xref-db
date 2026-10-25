// addr:      71000d3050
// offset:    0xd3050
// name:      FUN_71000d3050
// mangled:   
// signature: undefined8 __cdecl FUN_71000d3050(long param_1)


undefined8 FUN_71000d3050(long param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  char *pcVar5;
  int local_30 [4];
  
  bVar1 = FUN_71000c36d0(DAT_71052acd90);
  if (((bVar1 & 1) != 0) && (*(ulong *)(DAT_71052ac580 + 0x30) <= *(ulong *)(param_1 + 0x60))) {
    uVar2 = (**(code **)(**(long **)(DAT_71052acd90 + 0x88) + 0x40))();
    if ((uVar2 & 1) == 0) {
      return 5;
    }
    (**(code **)(**(long **)(DAT_71052acd90 + 0x88) + 0x48))(local_30);
    if (((local_30[0] == 0) && (*(long *)(param_1 + 0x58) != 0)) &&
       (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0')) {
      pcVar4 = FUN_71000d3140;
      uVar3 = 7;
      pcVar5 = "NexNatServerAddressResolveJob::StepResolveRelayServerSetting";
      goto LAB_71000d30e0;
    }
  }
  pcVar4 = FUN_71000d2f00;
  uVar3 = 5;
  pcVar5 = "NexNatServerAddressResolveJob::StepComplete";
LAB_71000d30e0:
  *(code **)(param_1 + 0x30) = pcVar4;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar5;
  return uVar3;
}

