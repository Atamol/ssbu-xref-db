// addr:      7100124030
// offset:    0x124030
// name:      FUN_7100124030
// mangled:   
// signature: undefined FUN_7100124030(void)


undefined8 FUN_7100124030(long param_1)

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
  if ((aiStack_38[0] == aiStack_48[0]) ||
     (*(ulong *)(param_1 + 0x58) <= *(ulong *)(DAT_71052ac580 + 0x30))) {
    pcVar1 = FUN_71001a1d80;
    pcVar2 = "LanProcessHostMigrationJob::HostMigrationFailure";
  }
  else if (((((((*(char *)(param_1 + 0xb3) == -3) && (*(char *)(param_1 + 0xf0) != '\x01')) &&
              (*(char *)(param_1 + 0xf1) != '\x01')) &&
             ((*(char *)(param_1 + 0xf2) != '\x01' && (*(char *)(param_1 + 0xf3) != '\x01')))) &&
            ((*(char *)(param_1 + 0xf4) != '\x01' &&
             ((*(char *)(param_1 + 0xf5) != '\x01' && (*(char *)(param_1 + 0xf6) != '\x01')))))) &&
           (*(char *)(param_1 + 0xf7) != '\x01')) &&
          ((((*(char *)(param_1 + 0xf8) != '\x01' && (*(char *)(param_1 + 0xf9) != '\x01')) &&
            (*(char *)(param_1 + 0xfa) != '\x01')) &&
           (((*(char *)(param_1 + 0xfb) != '\x01' && (*(char *)(param_1 + 0xfc) != '\x01')) &&
            ((*(char *)(param_1 + 0xfd) != '\x01' &&
             ((*(char *)(param_1 + 0xfe) != '\x01' && (*(char *)(param_1 + 0xff) != '\x01'))))))))))
  {
    if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x148)) {
      return 5;
    }
    pcVar1 = FUN_71001241f0;
    pcVar2 = "LanProcessHostMigrationJob::LanGetMatchMakingClientHost";
  }
  else {
    pcVar1 = FUN_71001a2310;
    pcVar2 = "LanProcessHostMigrationJob::WaitNewHostGreeting";
  }
  *(code **)(param_1 + 0x30) = pcVar1;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar2;
  return 0;
}

