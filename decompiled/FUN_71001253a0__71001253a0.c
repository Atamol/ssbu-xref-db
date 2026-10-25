// addr:      71001253a0
// offset:    0x1253a0
// name:      FUN_71001253a0
// mangled:   
// signature: undefined FUN_71001253a0(void)


undefined8 FUN_71001253a0(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  char *pcVar9;
  int aiStack_48 [4];
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  puVar2 = (undefined8 *)FUN_7100116f40();
  lVar3 = FUN_7100117050(puVar2);
  bVar1 = FUN_7100128280(lVar3);
  lVar3 = DAT_71052adb38;
  if (bVar1) {
    plVar4 = (long *)FUN_710011be50(*(long *)(DAT_71052adb38 +
                                              (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168))
    ;
    uVar5 = (**(code **)(*plVar4 + 0x38))();
    if ((uVar5 & 1) == 0) {
      uVar7 = 2;
    }
    else {
      uVar7 = 1;
    }
    FUN_7100149240(lVar3,uVar7);
    pcVar8 = FUN_71001a20c0;
    uVar6 = 0;
    pcVar9 = "ProcessHostMigrationJob::SendMigrationFinish";
  }
  else {
    FUN_7100192e90(aiStack_38,DAT_71052adfc0);
    aiStack_48[0] = 0x6c50;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_28);
    if ((aiStack_38[0] != aiStack_48[0]) &&
       (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58))) {
      return 5;
    }
    pcVar8 = FUN_71001a1d80;
    uVar6 = 5;
    pcVar9 = "LanProcessHostMigrationJob::HostMigrationFailure";
  }
  *(code **)(param_1 + 0x30) = pcVar8;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar9;
  return uVar6;
}

