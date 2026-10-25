// addr:      7100111c00
// offset:    0x111c00
// name:      FUN_7100111c00
// mangled:   
// signature: undefined FUN_7100111c00(void)


undefined8 FUN_7100111c00(long param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  long lVar4;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x118) + 0x14);
  if (iVar1 == 1) {
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
    FUN_71001d0a10(*(long **)(param_1 + 0x118));
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    pcVar2 = "ProcessHostMigrationJob::HostMigrationFailure";
    goto LAB_7100111d78;
  }
  lVar4 = *(long *)(DAT_71052acd90 + 0x70);
  if (((lVar4 != 0) && (iVar1 == 2)) &&
     (iVar1 = *(int *)(lVar4 + 0xc), iVar1 == *(int *)(DAT_71052acd90 + 0x58))) {
    uVar3 = 1;
    if (*(char *)(lVar4 + 0x80) == '\0') {
      uVar3 = 2;
    }
    if (iVar1 == *(int *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180)) {
      FUN_7100149240(DAT_71052adb38,uVar3);
    }
    else {
      if (iVar1 != *(int *)(DAT_71052adb38 + (ulong)(*(byte *)(DAT_71052adb38 + 0x162) == 0) * 4 +
                           0x180)) goto LAB_7100111d64;
      FUN_7100149250(DAT_71052adb38,uVar3);
    }
    if (*(long *)(lVar4 + 0x18) == *(long *)(DAT_71052adb38 + 0xf0)) {
      *(code **)(param_1 + 0x30) = FUN_71001a20c0;
      pcVar2 = "NexProcessHostMigrationJob::SendMigrationFinish";
      goto LAB_7100111d78;
    }
  }
LAB_7100111d64:
  *(code **)(param_1 + 0x30) = FUN_71001a1d80;
  pcVar2 = "NexProcessHostMigrationJob::HostMigrationFailure";
LAB_7100111d78:
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar2;
  return 0;
}

