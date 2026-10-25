// addr:      71001254c0
// offset:    0x1254c0
// name:      FUN_71001254c0
// mangled:   
// signature: ulong __cdecl FUN_71001254c0(long param_1)


ulong FUN_71001254c0(long param_1)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  ulong uVar5;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  FUN_7100192e90(local_40,DAT_71052adfc0);
  local_50[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  if ((local_40[0] == local_50[0]) ||
     (*(ulong *)(param_1 + 0x58) <= *(ulong *)(DAT_71052ac580 + 0x30))) {
LAB_7100125594:
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    pcVar3 = "LanProcessHostMigrationJob::HostMigrationFailure";
  }
  else {
    plVar4 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    uVar5 = 0x640000;
    uVar1 = FUN_710011b3c0((long)plVar4);
    if (((uVar1 & 1) == 0) || (*(int *)(param_1 + 0x118) == 1)) {
      uVar1 = 4;
      goto LAB_71001255b8;
    }
    lVar2 = (**(code **)(*plVar4 + 0xf0))(plVar4);
    if (lVar2 != -1) goto LAB_7100125594;
    if (*(char *)(param_1 + 0xc4) == '\0') {
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(code **)(param_1 + 0x30) = FUN_7100123b10;
      pcVar3 = "LanProcessHostMigrationJob::LanPrepareForBecomingHost";
    }
    else {
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(code **)(param_1 + 0x30) = FUN_7100124bb0;
      pcVar3 = "LanProcessHostMigrationJob::LanPrepareForBecomingHostMulti";
    }
  }
  uVar5 = 0;
  uVar1 = 0;
  *(char **)(param_1 + 0x40) = pcVar3;
LAB_71001255b8:
  return uVar5 | uVar1;
}

