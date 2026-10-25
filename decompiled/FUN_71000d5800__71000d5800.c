// addr:      71000d5800
// offset:    0xd5800
// name:      FUN_71000d5800
// mangled:   
// signature: undefined8 __cdecl FUN_71000d5800(long param_1)


undefined8 FUN_71000d5800(long param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  if ((*(long *)(param_1 + 0x58) != 0) && (*(char *)(*(long *)(param_1 + 0x58) + 0x28) != '\0')) {
    bVar1 = FUN_71001921a0(DAT_71052adfc0);
    if (((bVar1 & 1) != 0) && (bVar2 = FUN_71001931d0(DAT_71052adfc0), bVar2)) {
      *(code **)(param_1 + 0x30) = FUN_710018d4e0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "NexJoinMeshJob::LeaveMeshWithHostMigration";
      return 0;
    }
    *(code **)(param_1 + 0x30) = FUN_710018d6e0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "NexJoinMeshJob::LeaveMesh";
    return 0;
  }
  uVar4 = FUN_710018b370(param_1);
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  lVar5 = FUN_71001939d0(DAT_71052adfc0);
  uVar3 = FUN_71000b4990(lVar5);
  if ((uVar3 & 1) != 0) {
    return 5;
  }
  *(code **)(param_1 + 0x30) = FUN_710018cf30;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NexJoinMeshJob::CompleteProcess";
  return 0;
}

