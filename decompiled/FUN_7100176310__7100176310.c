// addr:      7100176310
// offset:    0x176310
// name:      FUN_7100176310
// mangled:   
// signature: undefined8 __cdecl FUN_7100176310(long param_1)


undefined8 FUN_7100176310(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  int local_40 [4];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    plVar3 = *(long **)(param_1 + 0x78);
    lVar4 = *(long *)(param_1 + 0x60);
    lVar2 = (**(code **)(*plVar3 + 0x158))(plVar3);
    FUN_71001819f0(local_40,plVar3,lVar4,lVar2);
    if (local_40[0] == 0) {
      *(undefined8 *)(param_1 + 0x30) = 0x40;
      *(undefined8 *)(param_1 + 0x38) = 1;
      *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitCreateNetwork";
    }
    uVar1 = 5;
  }
  else {
    if (**(int **)(param_1 + 0x60) == 1) {
      FUN_71000b4300((long)*(int **)(param_1 + 0x60));
    }
    uVar1 = 0;
    *(code **)(param_1 + 0x30) = FUN_7100175f70;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitForCancel";
  }
  return uVar1;
}

