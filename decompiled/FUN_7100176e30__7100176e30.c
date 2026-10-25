// addr:      7100176e30
// offset:    0x176e30
// name:      FUN_7100176e30
// mangled:   
// signature: undefined8 __cdecl FUN_7100176e30(long param_1)


undefined8 FUN_7100176e30(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  int local_40 [4];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x78) + 0xd8))
                      (*(long **)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x6c));
    plVar2 = (long *)(**(code **)(**(long **)(param_1 + 0x78) + 0x168))
                               (*(long **)(param_1 + 0x78),uVar1);
    plVar3 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    (**(code **)(*plVar3 + 0x158))(plVar3,uVar1);
    FUN_7100181f40(local_40,*(long **)(param_1 + 0x78),*(undefined4 **)(param_1 + 0x60),plVar2);
    if (local_40[0] == 0) {
      *(undefined8 *)(param_1 + 0x30) = 0x58;
      *(undefined8 *)(param_1 + 0x38) = 1;
      *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitConnectNetwork";
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

