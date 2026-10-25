// addr:      7100123c50
// offset:    0x123c50
// name:      FUN_7100123c50
// mangled:   
// signature: undefined FUN_7100123c50(void)


undefined8 FUN_7100123c50(long *param_1)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  
  uVar4 = (**(code **)(*param_1 + 0x30))();
  bVar3 = (uVar4 & 1) == 0;
  pcVar1 = "LanProcessHostMigrationJob::LanSendRankDecision";
  if (bVar3) {
    pcVar1 = "LanProcessHostMigrationJob::HostMigrationFailure";
  }
  param_1[8] = (long)pcVar1;
  pcVar2 = FUN_7100123d30;
  if (bVar3) {
    pcVar2 = FUN_71001a1d80;
  }
  param_1[6] = (long)pcVar2;
  param_1[7] = 0;
  return 0;
}

