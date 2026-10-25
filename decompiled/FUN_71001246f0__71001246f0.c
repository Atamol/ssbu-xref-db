// addr:      71001246f0
// offset:    0x1246f0
// name:      FUN_71001246f0
// mangled:   
// signature: undefined FUN_71001246f0(void)


ulong FUN_71001246f0(long param_1)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  long *plVar5;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  plVar5 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  uVar1 = FUN_710011b3c0((long)plVar5);
  if (((uVar1 & 1) == 0) || (*(int *)(param_1 + 0x118) == 1)) {
    FUN_7100192e90(aiStack_40,DAT_71052adfc0);
    aiStack_50[0] = 0x6c50;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    if ((aiStack_40[0] != aiStack_50[0]) &&
       (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58))) {
      uVar4 = 0x640000;
      uVar1 = 4;
      goto LAB_7100124828;
    }
    FUN_710011b450(aiStack_40,(long)plVar5);
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    pcVar3 = "LanProcessHostMigrationJob::HostMigrationFailure";
    uVar1 = 5;
  }
  else {
    lVar2 = (**(code **)(*plVar5 + 0xf0))(plVar5);
    if (lVar2 == -1) {
      uVar1 = 0;
      *(code **)(param_1 + 0x30) = FUN_7100123b10;
      pcVar3 = "LanProcessHostMigrationJob::LanPrepareForBecomingHost";
    }
    else {
      uVar1 = 0;
      *(code **)(param_1 + 0x30) = FUN_7100124840;
      pcVar3 = "LanProcessHostMigrationJob::LanCheckOldHostDisconnection";
    }
  }
  uVar4 = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar3;
LAB_7100124828:
  return uVar4 | uVar1;
}

