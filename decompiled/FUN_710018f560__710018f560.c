// addr:      710018f560
// offset:    0x18f560
// name:      FUN_710018f560
// mangled:   
// signature: undefined FUN_710018f560(void)


undefined8 FUN_710018f560(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  char *pcVar5;
  
  lVar1 = FUN_7100193580(DAT_71052adfc0);
  uVar2 = FUN_710019ac40(lVar1,param_1 + 0x6e);
  if ((uVar2 & 1) == 0) {
    pcVar4 = FUN_710018f700;
    uVar3 = 0;
    pcVar5 = "LeaveWithHostMigrationJob::CleanupMesh";
  }
  else {
    *(undefined1 *)(param_1 + 0x8e) = 1;
    pcVar4 = FUN_710018f800;
    uVar3 = 5;
    pcVar5 = "LeaveWithHostMigrationJob::WaitMigrationResponse";
  }
  *(code **)(param_1 + 0x30) = pcVar4;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar5;
  return uVar3;
}

