// addr:      7100110c30
// offset:    0x110c30
// name:      FUN_7100110c30
// mangled:   
// signature: undefined FUN_7100110c30(void)


undefined8 FUN_7100110c30(long param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  char *pcVar6;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  *(undefined4 *)(param_1 + 0x110) = 4;
  FUN_7100192e90(aiStack_40,DAT_71052adfc0);
  aiStack_50[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
  if (aiStack_40[0] == aiStack_50[0]) {
    uVar4 = 0;
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    pcVar6 = "ProcessHostMigrationJob::HostMigrationFailure";
  }
  else if (((*(char *)(param_1 + 0x1f8) == '\0') && (DAT_71052adb38 != 0)) &&
          (uVar2 = FUN_7100146e00(DAT_71052adb38), uVar2 < 3)) {
    uVar4 = 0;
    *(code **)(param_1 + 0x30) = FUN_7100110da0;
    pcVar6 = "NexProcessHostMigrationJob::NexPrepareForBecomingHostMulti";
  }
  else {
    iVar1 = *(int *)(DAT_71052acd90 + 0x58);
    if (iVar1 != 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (*(int *)((long)plVar5 + 0x14) == 1) {
        FUN_71001d0a10(plVar5);
        plVar5 = *(long **)(param_1 + 0x118);
      }
      FUN_71001d1590(plVar5);
      uVar3 = FUN_710024bec0(*(long *)(DAT_71052acd90 + 0x68),*(long **)(param_1 + 0x118),iVar1,
                             *(ulong *)(param_1 + 0x170));
      if ((uVar3 & 1) != 0) {
        *(code **)(param_1 + 0x30) = FUN_7100110e60;
        pcVar6 = "NexProcessHostMigrationJob::NexWaitMatchMakingClientHost";
        uVar4 = 5;
        goto LAB_7100110d40;
      }
    }
    uVar4 = 0;
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    pcVar6 = "NexProcessHostMigrationJob::HostMigrationFailure";
  }
LAB_7100110d40:
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar6;
  return uVar4;
}

