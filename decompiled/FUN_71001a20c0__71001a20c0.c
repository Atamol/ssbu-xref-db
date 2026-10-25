// addr:      71001a20c0
// offset:    0x1a20c0
// name:      FUN_71001a20c0
// mangled:   
// signature: undefined FUN_71001a20c0(void)


undefined8 FUN_71001a20c0(long param_1)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  *(undefined4 *)(param_1 + 0x110) = 10;
  FUN_7100192e90(aiStack_40,DAT_71052adfc0);
  aiStack_50[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
  if (aiStack_40[0] == aiStack_50[0]) {
    pcVar3 = FUN_71001a1d80;
    pcVar2 = "ProcessHostMigrationJob::HostMigrationFailure";
  }
  else {
    lVar1 = FUN_7100193580(DAT_71052adfc0);
    FUN_710019a1a0(lVar1,*(byte *)(param_1 + 0xc3));
    *(undefined1 *)(param_1 + 0xb1) = 0;
    pcVar3 = FUN_71001a2190;
    pcVar2 = "ProcessHostMigrationJob::HostMigrationSuccess";
  }
  *(code **)(param_1 + 0x30) = pcVar3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar2;
  return 0;
}

