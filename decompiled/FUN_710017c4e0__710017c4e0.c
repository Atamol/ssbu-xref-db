// addr:      710017c4e0
// offset:    0x17c4e0
// name:      FUN_710017c4e0
// mangled:   
// signature: undefined8 __cdecl FUN_710017c4e0(long param_1, uint param_2, undefined1 param_3)


undefined8 FUN_710017c4e0(long param_1,uint param_2,undefined1 param_3)

{
  undefined1 uVar1;
  char *pcVar2;
  code *pcVar3;
  
  if ((param_2 & 1) == 0) {
    pcVar3 = FUN_710017c7b0;
    pcVar2 = "LocalProcessHostMigrationJobNew::LocalDecideNextHost";
  }
  else {
    uVar1 = FUN_7100193110(DAT_71052adfc0);
    *(undefined1 *)(param_1 + 0x86) = uVar1;
    *(undefined1 *)(param_1 + 0x90) = param_3;
    pcVar3 = FUN_710017c550;
    pcVar2 = "LocalProcessHostMigrationJobNew::LocalCleanupOldHostInfo";
  }
  *(code **)(param_1 + 0x30) = pcVar3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar2;
  return 1;
}

