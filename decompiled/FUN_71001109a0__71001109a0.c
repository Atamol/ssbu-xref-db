// addr:      71001109a0
// offset:    0x1109a0
// name:      FUN_71001109a0
// mangled:   
// signature: undefined FUN_71001109a0(void)


undefined8 FUN_71001109a0(long param_1)

{
  code *pcVar1;
  char *pcVar2;
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
    pcVar1 = FUN_71001a1d80;
    pcVar2 = "NexProcessHostMigrationJob::HostMigrationFailure";
    goto LAB_7100110bcc;
  }
  if (*(char *)(param_1 + 0xb3) == -3) {
    if (*(char *)(param_1 + 0xc1) != '\0') {
      pcVar1 = FUN_71001a2450;
      pcVar2 = "NexProcessHostMigrationJob::WaitNewHostFinished";
      goto LAB_7100110bcc;
    }
    if ((((((((*(char *)(param_1 + 0xf0) != '\x01') && (*(char *)(param_1 + 0xf1) != '\x01')) &&
            (*(char *)(param_1 + 0xf2) != '\x01')) &&
           (((*(char *)(param_1 + 0xf3) != '\x01' && (*(char *)(param_1 + 0xf4) != '\x01')) &&
            ((*(char *)(param_1 + 0xf5) != '\x01' &&
             ((*(char *)(param_1 + 0xf6) != '\x01' && (*(char *)(param_1 + 0xf7) != '\x01'))))))))
          && (*(char *)(param_1 + 0xf8) != '\x01')) &&
         ((((((*(char *)(param_1 + 0xf9) != '\x01' && (*(char *)(param_1 + 0xfa) != '\x01')) &&
             (*(char *)(param_1 + 0xfb) != '\x01')) &&
            ((*(char *)(param_1 + 0xfc) != '\x01' && (*(char *)(param_1 + 0xfd) != '\x01')))) &&
           (*(char *)(param_1 + 0xfe) != '\x01')) &&
          (((*(char *)(param_1 + 0xff) != '\x01' && (*(char *)(param_1 + 0x100) != '\x01')) &&
           (((*(char *)(param_1 + 0x101) != '\x01' &&
             (((*(char *)(param_1 + 0x102) != '\x01' && (*(char *)(param_1 + 0x103) != '\x01')) &&
              (*(char *)(param_1 + 0x104) != '\x01')))) &&
            (((*(char *)(param_1 + 0x105) != '\x01' && (*(char *)(param_1 + 0x106) != '\x01')) &&
             (*(char *)(param_1 + 0x107) != '\x01')))))))))) &&
        (((*(char *)(param_1 + 0x108) != '\x01' && (*(char *)(param_1 + 0x109) != '\x01')) &&
         ((*(char *)(param_1 + 0x10a) != '\x01' &&
          (((*(char *)(param_1 + 0x10b) != '\x01' && (*(char *)(param_1 + 0x10c) != '\x01')) &&
           (*(char *)(param_1 + 0x10d) != '\x01')))))))) &&
       ((*(char *)(param_1 + 0x10e) != '\x01' && (*(char *)(param_1 + 0x10f) != '\x01')))) {
      if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x150)) {
        return 5;
      }
      pcVar1 = FUN_7100110c30;
      pcVar2 = "NexProcessHostMigrationJob::NexGetMatchMakingClientHost";
      goto LAB_7100110bcc;
    }
  }
  pcVar1 = FUN_71001a2310;
  pcVar2 = "NexProcessHostMigrationJob::WaitNewHostGreeting";
LAB_7100110bcc:
  *(code **)(param_1 + 0x30) = pcVar1;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar2;
  return 0;
}

