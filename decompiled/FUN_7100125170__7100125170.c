// addr:      7100125170
// offset:    0x125170
// name:      FUN_7100125170
// mangled:   
// signature: undefined FUN_7100125170(void)


undefined8 FUN_7100125170(long param_1)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  code *pcVar9;
  char *pcVar10;
  long *plVar11;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  plVar11 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  uVar3 = FUN_710011b3c0((long)plVar11);
  if (((uVar3 & 1) == 0) || (*(int *)(param_1 + 0x118) == 1)) {
    FUN_7100192e90(aiStack_40,DAT_71052adfc0);
    aiStack_50[0] = 0x6c50;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    if ((aiStack_40[0] != aiStack_50[0]) &&
       (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58))) {
      return 5;
    }
    FUN_710011b450(aiStack_40,(long)plVar11);
    uVar4 = 5;
  }
  else {
    lVar5 = (**(code **)(*plVar11 + 0xf0))(plVar11);
    if (lVar5 == -1) {
LAB_7100125280:
      FUN_7100116f40();
      uVar4 = FUN_71001170c0();
      (**(code **)(*plVar11 + 0xf8))(plVar11,uVar4);
      (**(code **)(*plVar11 + 0xe8))(plVar11,1);
      (**(code **)(*plVar11 + 0x110))(plVar11);
      if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58)) {
        plVar7 = (long *)FUN_7100161fb0(DAT_71052add68);
        uVar4 = (**(code **)(*plVar11 + 0xf0))(plVar11);
        lVar5 = (**(code **)(*plVar7 + 0x50))(plVar7,uVar4);
        if (((lVar5 != 0) && (bVar1 = *(byte *)(lVar5 + 0x38), bVar1 < 0x20)) &&
           (bVar2 = FUN_7100193560(DAT_71052adfc0), bVar1 == bVar2)) {
          FUN_71000b40e0((undefined4 *)(param_1 + 0x118));
          puVar8 = (undefined8 *)FUN_7100116f40();
          lVar5 = FUN_7100117050(puVar8);
          FUN_7100128230(lVar5);
          pcVar9 = FUN_71001253a0;
          uVar4 = 5;
          pcVar10 = "LanProcessHostMigrationJob::LanWaitSendUpdateSessionMessage";
          goto LAB_710012537c;
        }
      }
    }
    else {
      lVar5 = (**(code **)(*plVar11 + 0xf0))(plVar11);
      FUN_7100116f40();
      lVar6 = FUN_71001170c0();
      if (lVar5 == lVar6) goto LAB_7100125280;
    }
    uVar4 = 0;
  }
  pcVar9 = FUN_71001a1d80;
  pcVar10 = "LanProcessHostMigrationJob::HostMigrationFailure";
LAB_710012537c:
  *(code **)(param_1 + 0x30) = pcVar9;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar10;
  return uVar4;
}

