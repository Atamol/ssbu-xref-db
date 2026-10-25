// addr:      71000d5530
// offset:    0xd5530
// name:      FUN_71000d5530
// mangled:   
// signature: undefined FUN_71000d5530(void)


undefined8 FUN_71000d5530(long param_1)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  
  lVar3 = FUN_7100192f60(DAT_71052adfc0);
  if ((*(long *)(param_1 + 0x58) == 0) || (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0')) {
    uVar4 = FUN_710018b370(param_1);
    if (((uVar4 & 1) != 0) ||
       ((bVar1 = FUN_71001921a0(DAT_71052adfc0), (bVar1 & 1) == 0 &&
        (uVar4 = FUN_710018b870(param_1), (uVar4 & 1) != 0)))) {
      FUN_7100152020(lVar3);
      return 1;
    }
    bVar2 = FUN_7100152040(lVar3);
    if (!bVar2) {
      return 5;
    }
    bVar1 = FUN_71001921a0(DAT_71052adfc0);
    if ((bVar1 & 1) == 0) {
      *(code **)(param_1 + 0x30) = FUN_71000d5800;
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar5 = "NexJoinMeshJob::WaitCheckKickoutJob";
    }
    else {
      *(code **)(param_1 + 0x30) = FUN_71000d5680;
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar5 = "NexJoinMeshJob::WaitCheckHostConnection";
    }
  }
  else {
    FUN_7100152020(lVar3);
    bVar1 = FUN_71001921a0(DAT_71052adfc0);
    if (((bVar1 & 1) == 0) || (bVar2 = FUN_71001931d0(DAT_71052adfc0), !bVar2)) {
      *(code **)(param_1 + 0x30) = FUN_710018d6e0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar5 = "NexJoinMeshJob::LeaveMesh";
    }
    else {
      *(code **)(param_1 + 0x30) = FUN_710018d4e0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar5 = "NexJoinMeshJob::LeaveMeshWithHostMigration";
    }
  }
  *(char **)(param_1 + 0x40) = pcVar5;
  return 0;
}

