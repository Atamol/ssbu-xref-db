// addr:      7100112320
// offset:    0x112320
// name:      FUN_7100112320
// mangled:   
// signature: undefined FUN_7100112320(void)


undefined8 FUN_7100112320(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  char *pcVar5;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  FUN_7100192e90(aiStack_40,DAT_71052adfc0);
  aiStack_50[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
  if (aiStack_40[0] == aiStack_50[0]) {
    uVar3 = 0;
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    pcVar5 = "ProcessHostMigrationJob::HostMigrationFailure";
  }
  else {
    iVar1 = *(int *)(DAT_71052acd90 + 0x58);
    if (iVar1 != 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (*(int *)((long)plVar4 + 0x14) == 1) {
        FUN_71001d0a10(plVar4);
        plVar4 = *(long **)(param_1 + 0x118);
      }
      FUN_71001d1590(plVar4);
      uVar2 = FUN_710024bec0(*(long *)(DAT_71052acd90 + 0x68),*(long **)(param_1 + 0x118),iVar1,
                             *(ulong *)(param_1 + 0x170));
      if ((uVar2 & 1) != 0) {
        *(code **)(param_1 + 0x30) = FUN_7100112440;
        pcVar5 = "NexProcessHostMigrationJob::NexWaitMatchMakingClientHostIsUpdated";
        uVar3 = 5;
        goto LAB_7100112420;
      }
    }
    uVar3 = 0;
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    pcVar5 = "NexProcessHostMigrationJob::HostMigrationFailure";
  }
LAB_7100112420:
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar5;
  return uVar3;
}

