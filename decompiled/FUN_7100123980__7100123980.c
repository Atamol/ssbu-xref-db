// addr:      7100123980
// offset:    0x123980
// name:      FUN_7100123980
// mangled:   
// signature: undefined FUN_7100123980(void)


undefined8 FUN_7100123980(long *param_1)

{
  code *pcVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  code *pcVar6;
  
  *(undefined4 *)(param_1 + 0x22) = 1;
  uVar3 = (**(code **)(*param_1 + 0x30))();
  if ((uVar3 & 1) == 0) {
    pcVar5 = "LanProcessHostMigrationJob::HostMigrationFailure";
    pcVar6 = FUN_71001a1d80;
  }
  else {
    uVar4 = FUN_71001a1780((long)param_1);
    pcVar1 = FUN_71001a1d80;
    pcVar2 = "LanProcessHostMigrationJob::HostMigrationFailure";
    if ((int)uVar4 == 2) {
      pcVar1 = FUN_71001a2310;
      pcVar2 = "LanProcessHostMigrationJob::WaitNewHostGreeting";
    }
    pcVar5 = "LanProcessHostMigrationJob::LanPrepareForBecomingHost";
    pcVar6 = FUN_7100123b10;
    if ((int)uVar4 != 1) {
      pcVar5 = pcVar2;
      pcVar6 = pcVar1;
    }
  }
  param_1[6] = (long)pcVar6;
  param_1[7] = 0;
  param_1[8] = (long)pcVar5;
  return 0;
}

