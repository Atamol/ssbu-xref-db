// addr:      7100111aa0
// offset:    0x111aa0
// name:      FUN_7100111aa0
// mangled:   
// signature: undefined8 __cdecl FUN_7100111aa0(long param_1)


undefined8 FUN_7100111aa0(long param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  char *pcVar7;
  int local_58 [4];
  int local_48 [4];
  undefined4 local_38 [2];
  
  *(undefined4 *)(param_1 + 0x110) = 9;
  FUN_7100192e90(local_48,DAT_71052adfc0);
  local_58[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_58 | 4));
  local_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
  if (local_48[0] == local_58[0]) {
    uVar5 = 0;
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    pcVar7 = "ProcessHostMigrationJob::HostMigrationFailure";
    goto LAB_7100111bdc;
  }
  iVar3 = *(int *)(DAT_71052acd90 + 0x58);
  if (iVar3 != 0) {
    if (DAT_71052adb38 == 0) {
      uVar5 = 0;
      *(code **)(param_1 + 0x30) = FUN_71001a2190;
      pcVar7 = "NexProcessHostMigrationJob::HostMigrationSuccess";
      goto LAB_7100111bdc;
    }
    plVar6 = *(long **)(param_1 + 0x118);
    lVar1 = *(long *)(DAT_71052acd90 + 0x68);
    uVar2 = *(ulong *)(DAT_71052acd90 + 0x70);
    if (*(int *)((long)plVar6 + 0x14) == 1) {
      FUN_71001d0a10(plVar6);
      plVar6 = *(long **)(param_1 + 0x118);
    }
    FUN_71001d1590(plVar6);
    FUN_7100254520(uVar2);
    uVar4 = FUN_710024ff30(lVar1,*(long **)(param_1 + 0x118),iVar3,uVar2);
    if ((uVar4 & 1) != 0) {
      *(code **)(param_1 + 0x30) = FUN_7100111c00;
      pcVar7 = "NexProcessHostMigrationJob::WaitUpdateSessionOpenStatus";
      uVar5 = 5;
      goto LAB_7100111bdc;
    }
  }
  uVar5 = 0;
  *(code **)(param_1 + 0x30) = FUN_71001a1d80;
  pcVar7 = "NexProcessHostMigrationJob::HostMigrationFailure";
LAB_7100111bdc:
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar7;
  return uVar5;
}

