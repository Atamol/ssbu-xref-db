// addr:      71000d5680
// offset:    0xd5680
// name:      FUN_71000d5680
// mangled:   
// signature: undefined FUN_71000d5680(void)


undefined8 FUN_71000d5680(long param_1)

{
  byte bVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  char *pcVar8;
  
  if ((*(long *)(param_1 + 0x58) == 0) || (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0')) {
    uVar5 = FUN_710018b370(param_1);
    if ((uVar5 & 1) != 0) {
      return 1;
    }
    lVar6 = FUN_71001939c0(DAT_71052adfc0);
    if (*(char *)(lVar6 + 0x84) != '\0') {
      return 5;
    }
    lVar6 = FUN_71001939d0(DAT_71052adfc0);
    uVar4 = FUN_71000b4990(lVar6);
    if ((uVar4 & 1) != 0) {
      return 5;
    }
    plVar7 = (long *)FUN_7100161fa0(DAT_71052add68);
    uVar3 = FUN_7100193110(DAT_71052adfc0);
    lVar6 = (**(code **)(*plVar7 + 0x48))(plVar7,uVar3);
    if (lVar6 == 0) {
      return 5;
    }
    if (*(int *)(lVar6 + 0x48) != 5) {
      return 5;
    }
    *(code **)(param_1 + 0x30) = FUN_710018cf30;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar8 = "NexJoinMeshJob::CompleteProcess";
  }
  else {
    bVar1 = FUN_71001921a0(DAT_71052adfc0);
    if (((bVar1 & 1) == 0) || (bVar2 = FUN_71001931d0(DAT_71052adfc0), !bVar2)) {
      *(code **)(param_1 + 0x30) = FUN_710018d6e0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar8 = "NexJoinMeshJob::LeaveMesh";
    }
    else {
      *(code **)(param_1 + 0x30) = FUN_710018d4e0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar8 = "NexJoinMeshJob::LeaveMeshWithHostMigration";
    }
  }
  *(char **)(param_1 + 0x40) = pcVar8;
  return 0;
}

