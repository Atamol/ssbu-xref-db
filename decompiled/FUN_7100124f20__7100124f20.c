// addr:      7100124f20
// offset:    0x124f20
// name:      FUN_7100124f20
// mangled:   
// signature: undefined FUN_7100124f20(void)


undefined8 FUN_7100124f20(long param_1)

{
  if (*(char *)(param_1 + 0xc4) == '\0') {
    return 0;
  }
  if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x158)) {
    if (*(char *)(param_1 + 0xb3) != -3) {
      *(char *)(param_1 + 0x86) = *(char *)(param_1 + 0xb3);
    }
    *(code **)(param_1 + 0x30) = FUN_7100123d30;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LanProcessHostMigrationJob::LanSendRankDecision";
    FUN_7100124c40(param_1);
    memset((void *)(param_1 + 0xf0),0,0x10);
    *(undefined1 *)(param_1 + 0x1a0) = 0;
    return 1;
  }
  return 0;
}

