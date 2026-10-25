// addr:      71001101a0
// offset:    0x1101a0
// name:      FUN_71001101a0
// mangled:   
// signature: undefined FUN_71001101a0(void)


undefined8 FUN_71001101a0(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  
  if (*(int *)((long)*(long **)(param_1 + 0x118) + 0x14) == 1) {
    if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x218)) {
      return 5;
    }
    FUN_71001d0a10(*(long **)(param_1 + 0x118));
    FUN_71001d1590(*(long **)(param_1 + 0x118));
  }
  lVar2 = DAT_71052adb38;
  if ((*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x218)) &&
     (iVar1 = *(int *)(DAT_71052acd90 + 0x58), iVar1 != 0)) {
    if (DAT_71052adb38 != 0) {
      iVar3 = FUN_7100146ba0(DAT_71052adb38);
      if (iVar3 == 3) {
        if (iVar1 != *(int *)(lVar2 + (ulong)((ulong)*(byte *)(lVar2 + 0x162) == 0) * 4 + 0x180))
        goto LAB_7100110328;
        uVar4 = (**(code **)(**(long **)(lVar2 + (ulong)*(byte *)(lVar2 + 0x162) * 8 + 0x168) + 0xe0
                            ))();
        if ((uVar4 & 1) == 0) {
          return 5;
        }
        uVar4 = (**(code **)(**(long **)(lVar2 + (ulong)(*(char *)(lVar2 + 0x162) == '\0') * 8 +
                                        0x168) + 0xe0))();
        if ((uVar4 & 1) == 0) {
          return 5;
        }
      }
      else {
        iVar3 = FUN_7100146ba0(lVar2);
        if (iVar3 == 1) {
          if (iVar1 != *(int *)(lVar2 + (ulong)*(byte *)(lVar2 + 0x162) * 4 + 0x180))
          goto LAB_7100110328;
          uVar4 = (**(code **)(**(long **)(lVar2 + (ulong)*(byte *)(lVar2 + 0x162) * 8 + 0x168) +
                              0xe0))();
          if ((uVar4 & 1) == 0) {
            return 5;
          }
        }
      }
    }
    FUN_71001a1930(param_1);
    *(code **)(param_1 + 0x30) = FUN_71001a1a40;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar5 = "NexProcessHostMigrationJob::SendGreetingMessage";
  }
  else {
LAB_7100110328:
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar5 = "NexProcessHostMigrationJob::HostMigrationFailure";
  }
  *(char **)(param_1 + 0x40) = pcVar5;
  return 0;
}

