// addr:      710017cab0
// offset:    0x17cab0
// name:      FUN_710017cab0
// mangled:   
// signature: undefined8 __cdecl FUN_710017cab0(long param_1)


undefined8 FUN_710017cab0(long param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  char *pcVar5;
  code *pcVar6;
  undefined8 auStack_50 [4];
  
  *(undefined4 *)(param_1 + 0x110) = 5;
  FUN_71000b1c60(auStack_50,*(long *)(*(long *)(param_1 + 0x158) + 0x18) + 0x2a0);
  bVar1 = FUN_71000b2850((long)auStack_50);
  if ((bVar1) && (uVar3 = FUN_71000b2b10((long)auStack_50,param_1 + 0x138), (uVar3 & 1) == 0)) {
    FUN_71000b2b70();
    FUN_71000b2b70();
  }
  else {
    uVar3 = FUN_71001a1890();
    if ((uVar3 & 1) != 0) {
      FUN_71001a1930(param_1);
      iVar2 = FUN_7100175240(*(long *)(param_1 + 0x158));
      if (iVar2 - 2U < 2) {
        uVar4 = 2;
      }
      else {
        uVar4 = 1;
      }
      FUN_7100149240(DAT_71052adb38,uVar4);
      pcVar6 = FUN_710017ce30;
      pcVar5 = "LocalProcessHostMigrationJobNew::WaitLocalHostMigrationNewHost";
      goto LAB_710017cba8;
    }
  }
  pcVar6 = FUN_71001a1d80;
  pcVar5 = "LocalProcessHostMigrationJobNew::HostMigrationFailure";
LAB_710017cba8:
  *(code **)(param_1 + 0x30) = pcVar6;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar5;
  FUN_71000b1cf0();
  return 0;
}

