// addr:      71000c8990
// offset:    0xc8990
// name:      FUN_71000c8990
// mangled:   
// signature: undefined FUN_71000c8990(void)


undefined8 FUN_71000c8990(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  if ((*(long *)(param_1 + 0x60) != 0) && (*(char *)(*(long *)(param_1 + 0x60) + 0x28) != '\0')) {
    *(char **)(param_1 + 0x40) = "NatDetectionJob::StepComplete";
    *(code **)(param_1 + 0x30) = FUN_71000c8b00;
    *(undefined8 *)(param_1 + 0x38) = 0;
    return 6;
  }
  FUN_71000c7d70(aiStack_30,*(long *)(param_1 + 0x68));
  if (aiStack_30[0] == 0) {
    *(code **)(param_1 + 0x30) = FUN_71000c8ce0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "NatDetectionJob::StepStart";
    return 0;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x58);
  FUN_71000bce50(aiStack_40,aiStack_30);
  FUN_71000b41f0(puVar2,aiStack_40);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x10))();
  *(undefined8 *)(param_1 + 0x68) = 0;
  lVar1 = FUN_71000b30b0();
  if (lVar1 != 0) {
    lVar1 = FUN_71000b30b0();
    FUN_71000b3870(lVar1,0);
    return 1;
  }
  return 1;
}

