// addr:      7100175e10
// offset:    0x175e10
// name:      FUN_7100175e10
// mangled:   
// signature: undefined FUN_7100175e10(void)


undefined8 FUN_7100175e10(long param_1)

{
  bool bVar1;
  int aiStack_30 [4];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    if (*(char *)(*(long *)(param_1 + 0x78) + 0x470) == '\0') {
      bVar1 = FUN_71001804d0(*(long *)(param_1 + 0x78));
      if ((!bVar1) &&
         (FUN_71001804e0(aiStack_30,*(long *)(param_1 + 0x78),*(undefined4 **)(param_1 + 0x60)),
         aiStack_30[0] == 0)) {
        *(code **)(param_1 + 0x30) = FUN_7100175fc0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitDisconnectNetwork";
      }
      return 5;
    }
  }
  else if (**(int **)(param_1 + 0x60) == 1) {
    FUN_71000b4300((long)*(int **)(param_1 + 0x60));
  }
  *(code **)(param_1 + 0x30) = FUN_7100175f70;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitForCancel";
  return 0;
}

