// addr:      71001241f0
// offset:    0x1241f0
// name:      FUN_71001241f0
// mangled:   
// signature: undefined FUN_71001241f0(void)


undefined8 FUN_71001241f0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
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
    uVar2 = 0;
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar3 = "ProcessHostMigrationJob::HostMigrationFailure";
  }
  else if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58)) {
    lVar4 = *(long *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    FUN_71000b40e0((int *)(param_1 + 0x118));
    iVar1 = FUN_710011be40(lVar4);
    FUN_710011b2f0(aiStack_40,lVar4,(int *)(param_1 + 0x118),iVar1);
    if (aiStack_40[0] == 0) {
      if (*(char *)(param_1 + 0xc4) == '\0') {
        *(code **)(param_1 + 0x30) = FUN_71001246f0;
        pcVar3 = "LanProcessHostMigrationJob::LanCheckMatchMakingClientHost";
      }
      else {
        *(code **)(param_1 + 0x30) = FUN_7100124370;
        pcVar3 = "LanProcessHostMigrationJob::LanWaitMatchMakingClientHost";
      }
    }
    else {
      *(code **)(param_1 + 0x30) = FUN_71001a1d80;
      pcVar3 = "LanProcessHostMigrationJob::HostMigrationFailure";
    }
    uVar2 = 5;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    uVar2 = 0;
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar3 = "LanProcessHostMigrationJob::HostMigrationFailure";
  }
  *(char **)(param_1 + 0x40) = pcVar3;
  return uVar2;
}

