// addr:      7100123b10
// offset:    0x123b10
// name:      FUN_7100123b10
// mangled:   
// signature: undefined FUN_7100123b10(void)


undefined8 FUN_7100123b10(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  char *pcVar4;
  code *pcVar5;
  
  *(undefined4 *)(param_1 + 0x110) = 5;
  uVar1 = FUN_71001a1890();
  if ((uVar1 & 1) == 0) {
    pcVar5 = FUN_71001a1d80;
    pcVar4 = "LanProcessHostMigrationJob::HostMigrationFailure";
  }
  else {
    FUN_71001a1930(param_1);
    FUN_71000b40e0((undefined4 *)(param_1 + 0x118));
    puVar2 = (undefined8 *)FUN_7100116f40();
    lVar3 = FUN_7100117050(puVar2);
    FUN_7100127560(lVar3);
    pcVar5 = FUN_71001a1a40;
    pcVar4 = "LanProcessHostMigrationJob::SendGreetingMessage";
  }
  *(code **)(param_1 + 0x30) = pcVar5;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar4;
  return 0;
}

