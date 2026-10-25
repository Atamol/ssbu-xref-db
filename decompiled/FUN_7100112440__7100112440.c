// addr:      7100112440
// offset:    0x112440
// name:      FUN_7100112440
// mangled:   
// signature: undefined FUN_7100112440(void)


undefined8 FUN_7100112440(long param_1)

{
  bool bVar1;
  long *plVar2;
  char *pcVar3;
  code *pcVar4;
  int aiStack_48 [4];
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  FUN_7100192e90(aiStack_38,DAT_71052adfc0);
  aiStack_48[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_28);
  if (aiStack_38[0] == aiStack_48[0]) {
    if (*(int *)((long)*(long **)(param_1 + 0x118) + 0x14) == 1) {
      FUN_71001d0a10(*(long **)(param_1 + 0x118));
    }
LAB_71001124b4:
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    pcVar3 = "NexProcessHostMigrationJob::HostMigrationFailure";
  }
  else {
    if (*(char *)(param_1 + 0xb3) == -3) {
      plVar2 = *(long **)(param_1 + 0x118);
      bVar1 = *(int *)((long)plVar2 + 0x14) == 1;
      if (*(char *)(param_1 + 0xc1) != '\0') {
        if (bVar1) {
          FUN_71001d0a10(plVar2);
        }
        *(code **)(param_1 + 0x30) = FUN_71001a2450;
        pcVar3 = "NexProcessHostMigrationJob::WaitNewHostFinished";
        goto LAB_7100112534;
      }
      if (bVar1) {
        return 5;
      }
      pcVar4 = FUN_710170d030;
      if ((int)plVar2[0xb] < 0) {
        pcVar4 = (code *)0x0;
      }
      if (pcVar4 != (code *)0x0) goto LAB_71001124b4;
    }
    else if (*(int *)((long)*(long **)(param_1 + 0x118) + 0x14) == 1) {
      FUN_71001d0a10(*(long **)(param_1 + 0x118));
    }
    *(code **)(param_1 + 0x30) = FUN_71001a2310;
    pcVar3 = "NexProcessHostMigrationJob::WaitNewHostGreeting";
  }
LAB_7100112534:
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar3;
  return 0;
}

