// addr:      7100111960
// offset:    0x111960
// name:      FUN_7100111960
// mangled:   
// signature: undefined FUN_7100111960(void)


undefined8 FUN_7100111960(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x160)) {
    if (*(char *)(param_1 + 0xb3) != -3) {
      FUN_71001a16d0(param_1,*(char *)(param_1 + 0xb3),*(long *)(param_1 + 0xb8));
    }
    *(undefined2 *)(param_1 + 0xc0) = 0;
    *(undefined1 *)(param_1 + 0xc2) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined1 *)(param_1 + 0x90) = 0xfd;
    *(undefined2 *)(param_1 + 0xb2) = 0xfd00;
    *(char **)(param_1 + 0x40) = "NexProcessHostMigrationJob::NexSendRankDecision";
    *(char *)(param_1 + 0x83) = *(char *)(param_1 + 0x83) + '\x01';
    lVar3 = 0;
    lVar1 = param_1 + 0x178;
    *(code **)(param_1 + 0x30) = FUN_7100110480;
    *(undefined8 *)(param_1 + 0x38) = 0;
    do {
      if (*(int *)(lVar1 + lVar3) != 0) {
        plVar2 = (long *)FUN_7100193a40(DAT_71052adfc0);
        FUN_71001ae030(plVar2,*(int *)(lVar1 + lVar3));
        *(undefined4 *)(lVar1 + lVar3) = 0;
      }
      lVar3 = lVar3 + 4;
    } while (lVar3 != 0x80);
    memset((void *)(param_1 + 0xf0),0,0x20);
    *(undefined1 *)(param_1 + 0x1f8) = 0;
    return 1;
  }
  return 0;
}

