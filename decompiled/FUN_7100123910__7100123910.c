// addr:      7100123910
// offset:    0x123910
// name:      FUN_7100123910
// mangled:   
// signature: undefined8 __cdecl FUN_7100123910(long param_1, uint param_2, undefined1 param_3)


undefined8 FUN_7100123910(long param_1,uint param_2,undefined1 param_3)

{
  undefined1 uVar1;
  char *pcVar2;
  code *pcVar3;
  
  if ((param_2 & 1) == 0) {
    pcVar3 = FUN_7100123a30;
    pcVar2 = "LanProcessHostMigrationJob::LanDecideNextHost";
  }
  else {
    uVar1 = FUN_7100193110(DAT_71052adfc0);
    *(undefined1 *)(param_1 + 0x86) = uVar1;
    *(undefined1 *)(param_1 + 0x90) = param_3;
    pcVar3 = FUN_7100123980;
    pcVar2 = "LanProcessHostMigrationJob::LanCleanupOldHostInfo";
  }
  *(code **)(param_1 + 0x30) = pcVar3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar2;
  return 1;
}

