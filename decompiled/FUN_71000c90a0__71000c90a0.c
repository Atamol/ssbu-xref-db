// addr:      71000c90a0
// offset:    0xc90a0
// name:      FUN_71000c90a0
// mangled:   
// signature: undefined FUN_71000c90a0(void)


undefined8 FUN_71000c90a0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  char *pcVar4;
  int aiStack_30 [4];
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x68) + 0x18))();
  if ((uVar1 & 1) != 0) {
    FUN_71000c7c80(aiStack_30,*(long *)(param_1 + 0x68));
    if (aiStack_30[0] == 0) {
      pcVar3 = FUN_71000c8990;
      uVar2 = 0;
      pcVar4 = "NatDetectionJob::StepPreTest";
    }
    else {
      *(undefined1 *)(param_1 + 0x90) = 1;
      pcVar3 = FUN_71000c8b00;
      uVar2 = 6;
      pcVar4 = "NatDetectionJob::StepComplete";
    }
    *(code **)(param_1 + 0x30) = pcVar3;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = pcVar4;
    return uVar2;
  }
  *(code **)(param_1 + 0x30) = FUN_71000c8ce0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NatDetectionJob::StepStart";
  return 0;
}

