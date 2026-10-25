// addr:      710017ce30
// offset:    0x17ce30
// name:      FUN_710017ce30
// mangled:   
// signature: undefined FUN_710017ce30(void)


undefined8 FUN_710017ce30(long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  code *pcVar5;
  undefined8 auStack_50 [4];
  
  if ((*(int *)(*(long *)(*(long *)(param_1 + 0x158) + 0x18) + 0x418) == 2) &&
     (*(int *)(param_1 + 0x110) != 6)) {
    *(undefined4 *)(param_1 + 0x110) = 6;
  }
  uVar2 = FUN_7100174f00(*(long *)(param_1 + 0x158));
  if (((uVar2 & 1) == 0) || (bVar1 = FUN_7100174cb0(*(long *)(param_1 + 0x158)), bVar1)) {
    if ((*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58)) &&
       (*(int *)(*(long *)(*(long *)(param_1 + 0x158) + 0x18) + 0x41c) != 4)) {
      uVar3 = 5;
    }
    else {
      uVar3 = 0;
      *(code **)(param_1 + 0x30) = FUN_71001a1d80;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "LocalProcessHostMigrationJobNew::HostMigrationFailure";
    }
  }
  else {
    FUN_71000b1c60(auStack_50,*(long *)(*(long *)(param_1 + 0x158) + 0x18) + 0x2a0);
    uVar2 = FUN_71000b2b10((long)auStack_50,param_1 + 0x138);
    if ((uVar2 & 1) == 0) {
      FUN_71000b2b70();
      FUN_71000b2b70();
      pcVar5 = FUN_71001a1d80;
      pcVar4 = "LocalProcessHostMigrationJobNew::HostMigrationFailure";
    }
    else {
      pcVar5 = FUN_71001a1a40;
      pcVar4 = "LocalProcessHostMigrationJobNew::SendGreetingMessage";
    }
    *(code **)(param_1 + 0x30) = pcVar5;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = pcVar4;
    FUN_71000b1cf0();
    uVar3 = 0;
  }
  return uVar3;
}

