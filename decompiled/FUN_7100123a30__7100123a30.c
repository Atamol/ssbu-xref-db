// addr:      7100123a30
// offset:    0x123a30
// name:      FUN_7100123a30
// mangled:   
// signature: undefined FUN_7100123a30(void)


undefined8 FUN_7100123a30(long param_1)

{
  code *pcVar1;
  code *pcVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  
  *(undefined4 *)(param_1 + 0x110) = 2;
  *(undefined1 *)(param_1 + 0x90) = 0xfd;
  uVar9 = 0;
  do {
    bVar5 = FUN_7100193110(DAT_71052adfc0);
    if ((uint)bVar5 != (uVar9 & 0xff)) {
      bVar6 = FUN_7100190a90(DAT_71052adfc0,(byte)uVar9);
      if (bVar6) {
        *(byte *)(param_1 + 0x90) = (byte)uVar9;
        break;
      }
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x20);
  uVar8 = FUN_71001a1780(param_1);
  iVar7 = (int)uVar8;
  pcVar1 = FUN_71001a1d80;
  pcVar4 = "LanProcessHostMigrationJob::HostMigrationFailure";
  if (iVar7 == 2) {
    pcVar1 = FUN_71001a2310;
    pcVar4 = "LanProcessHostMigrationJob::WaitNewHostGreeting";
  }
  pcVar2 = FUN_7100123b10;
  if (iVar7 != 1) {
    pcVar2 = pcVar1;
  }
  *(code **)(param_1 + 0x30) = pcVar2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar3 = "LanProcessHostMigrationJob::LanPrepareForBecomingHost";
  if (iVar7 != 1) {
    pcVar3 = pcVar4;
  }
  *(char **)(param_1 + 0x40) = pcVar3;
  return 0;
}

