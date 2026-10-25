// addr:      71000d2fb0
// offset:    0xd2fb0
// name:      FUN_71000d2fb0
// mangled:   
// signature: undefined8 __cdecl FUN_71000d2fb0(long param_1)


undefined8 FUN_71000d2fb0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  char *pcVar5;
  
  lVar1 = DAT_71052ac580;
  if ((*(long *)(param_1 + 0x58) == 0) || (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0')) {
    plVar3 = FUN_71000bb680();
    *(long *)(param_1 + 0x60) = *(long *)(lVar1 + 0x30) + *plVar3 * 10000;
    (**(code **)(**(long **)(DAT_71052acd90 + 0x88) + 0x38))();
    pcVar4 = FUN_71000d3050;
    uVar2 = 5;
    pcVar5 = "NexNatServerAddressResolveJob::StepWaitRequestRelayServerSetting";
  }
  else {
    pcVar4 = FUN_71000d2f00;
    uVar2 = 0;
    pcVar5 = "NexNatServerAddressResolveJob::StepComplete";
  }
  *(code **)(param_1 + 0x30) = pcVar4;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar5;
  return uVar2;
}

