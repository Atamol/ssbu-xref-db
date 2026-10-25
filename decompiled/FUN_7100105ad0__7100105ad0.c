// addr:      7100105ad0
// offset:    0x105ad0
// name:      FUN_7100105ad0
// mangled:   
// signature: undefined FUN_7100105ad0(void)


undefined8 FUN_7100105ad0(long param_1)

{
  char *pcVar1;
  code *pcVar2;
  int aiStack_30 [4];
  
  FUN_71000ed7a0(aiStack_30);
  if (aiStack_30[0] == 0) {
    pcVar2 = FUN_7100105b50;
    pcVar1 = "NexMatchCreateSessionJob::WaitStartNatSession";
  }
  else {
    FUN_71000bcf30((int *)(param_1 + 0x90),aiStack_30);
    pcVar2 = FUN_7100105660;
    pcVar1 = "NexMatchCreateSessionJob::UnregisterGathering";
  }
  *(code **)(param_1 + 0x30) = pcVar2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar1;
  return 5;
}

