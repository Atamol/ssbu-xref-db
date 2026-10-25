// addr:      710017aba0
// offset:    0x17aba0
// name:      FUN_710017aba0
// mangled:   
// signature: undefined8 __cdecl FUN_710017aba0(long param_1)


undefined8 FUN_710017aba0(long param_1)

{
  code *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int local_30 [4];
  
  (**(code **)(**(long **)(param_1 + 0xa0) + 0x70))
            (local_30,*(long **)(param_1 + 0xa0),param_1 + 0x60,0);
  bVar4 = local_30[0] != 0;
  pcVar1 = FUN_710017ac70;
  if (bVar4) {
    pcVar1 = FUN_710017ac20;
  }
  pcVar2 = "LocalMatchCreateSessionJob::WaitDestroyLocalNetwork";
  if (bVar4) {
    pcVar2 = "LocalMatchCreateSessionJob::CompleteFailure";
  }
  *(code **)(param_1 + 0x30) = pcVar1;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar2;
  uVar3 = 5;
  if (bVar4) {
    uVar3 = 0;
  }
  return uVar3;
}

