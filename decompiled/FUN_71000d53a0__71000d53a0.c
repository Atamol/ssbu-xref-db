// addr:      71000d53a0
// offset:    0xd53a0
// name:      FUN_71000d53a0
// mangled:   
// signature: undefined FUN_71000d53a0(void)


undefined8 FUN_71000d53a0(long param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ushort uVar7;
  int aiStack_60 [4];
  
  lVar4 = FUN_7100192f60(DAT_71052adfc0);
  if (*(char *)(lVar4 + 0x51) != '\0') {
    *(code **)(param_1 + 0x30) = FUN_710018cf30;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "NexJoinMeshJob::CompleteProcess";
    return 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 3;
  if (*(ushort *)(param_1 + 0x6c) < 2) {
LAB_71000d54c4:
    *(char **)(param_1 + 0x40) = "NexJoinMeshJob::WaitBandwidthCheck";
    *(code **)(param_1 + 0x30) = FUN_71000d5530;
    *(undefined8 *)(param_1 + 0x38) = 0;
    return 5;
  }
  uVar3 = FUN_7100151fe0(lVar4);
  if ((uVar3 & 1) == 0) {
    FUN_7100152020(lVar4);
    return 5;
  }
  plVar5 = (long *)FUN_7100161fb0(DAT_71052add68);
  aiStack_60[0] = 0;
  aiStack_60[1] = 0x800;
  aiStack_60[2] = 0;
  (**(code **)(*plVar5 + 0x68))(plVar5,aiStack_60);
  if (1 < *(ushort *)(param_1 + 0x6c)) {
    uVar7 = 2;
    do {
      plVar5 = (long *)FUN_7100161fb0(DAT_71052add68);
      lVar6 = (**(code **)(*plVar5 + 0x38))
                        (plVar5,*(long *)(param_1 + 0x70) +
                                ((ulong)*(ushort *)(param_1 + 0x6c) - (ulong)uVar7) * 0x80);
      if (((lVar6 != 0) && (cVar1 = *(char *)(lVar6 + 0x38), cVar1 != -3)) &&
         (cVar2 = FUN_7100193560(DAT_71052adfc0), cVar1 != cVar2)) goto LAB_71000d54b4;
      uVar7 = uVar7 + 1;
    } while (uVar7 <= *(ushort *)(param_1 + 0x6c));
    if (lVar6 != 0) {
LAB_71000d54b4:
      FUN_7100151ef0(aiStack_60,lVar4,*(byte *)(lVar6 + 0x38));
      goto LAB_71000d54c4;
    }
  }
  *(code **)(param_1 + 0x30) = FUN_71000d5530;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NexJoinMeshJob::WaitBandwidthCheck";
  return 0;
}

