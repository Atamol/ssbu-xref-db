// addr:      7100123cb0
// offset:    0x123cb0
// name:      FUN_7100123cb0
// mangled:   
// signature: undefined8 __cdecl FUN_7100123cb0(long param_1)


undefined8 FUN_7100123cb0(long param_1)

{
  char *pcVar1;
  code *pcVar2;
  int local_30 [4];
  
  FUN_71001a2c80(local_30,param_1,(uint)*(byte *)(param_1 + 0x86),param_1 + 0xc5,
                 (undefined4 *)(param_1 + 0xe8),(undefined4 *)(param_1 + 0xec),0);
  pcVar1 = "LanProcessHostMigrationJob::LanSendRankDecision";
  pcVar2 = FUN_7100123d30;
  if (local_30[0] != 0) {
    pcVar1 = "LanProcessHostMigrationJob::HostMigrationFailure";
    pcVar2 = FUN_71001a1d80;
  }
  *(code **)(param_1 + 0x30) = pcVar2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar1;
  return 0;
}

