// addr:      710017cbd0
// offset:    0x17cbd0
// name:      FUN_710017cbd0
// mangled:   
// signature: undefined8 __cdecl FUN_710017cbd0(long param_1)


undefined8 FUN_710017cbd0(long param_1)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 auStack_50 [4];
  
  FUN_71000b1c60(auStack_50,*(long *)(*(long *)(param_1 + 0x158) + 0x18) + 0x2c0);
  lVar1 = param_1 + 0x138;
  local_68 = 0;
  local_70 = 0x20;
  FUN_71000b2b70();
  local_68 = 0;
  local_70 = 0x20;
  FUN_71000b2b70();
  *(undefined4 *)(param_1 + 0x110) = 6;
  if ((*(char *)(param_1 + 0x160) == '\0') &&
     (uVar4 = FUN_710017f4a0(*(long *)(*(long *)(param_1 + 0x158) + 0x18),lVar1),
     (~uVar4 & 0xffff) == 0)) {
    *(undefined1 *)(param_1 + 0x160) = 1;
    uVar5 = FUN_71000b2b10((long)auStack_50,lVar1);
    if ((uVar5 & 1) != 0) goto LAB_710017cc68;
LAB_710017cca8:
    bVar3 = FUN_71000b2850(param_1 + 0x118);
    if ((((bVar3) && (bVar3 = FUN_71000b2850((long)auStack_50), bVar3)) &&
        (uVar5 = FUN_71000b2b10((long)auStack_50,param_1 + 0x118), (uVar5 & 1) == 0)) &&
       (uVar5 = FUN_71000b2b10((long)auStack_50,lVar1), (uVar5 & 1) == 0)) {
      local_68 = 0;
      local_70 = 0x20;
      FUN_71000b2b70();
      local_68 = 0;
      local_70 = 0x20;
      FUN_71000b2b70();
      if (*(char *)(param_1 + 0x160) != '\0') {
        FUN_71000b1cb0(lVar1,(long)auStack_50);
        plVar6 = (long *)FUN_7100161fa0(DAT_71052add68);
        lVar7 = (**(code **)(*plVar6 + 0x68))(plVar6,lVar1);
        if (lVar7 != 0) {
          *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(lVar7 + 0x38);
          FUN_71000b1c60(&local_70,*(long *)(*(long *)(param_1 + 0x158) + 0x18) + 0x2a0);
          uVar5 = FUN_71000b2b10(lVar1,(long)&local_70);
          bVar3 = (uVar5 & 1) == 0;
          pcVar2 = FUN_710017cab0;
          if (bVar3) {
            pcVar2 = FUN_71001a2310;
          }
          pcVar8 = "LocalProcessHostMigrationJobNew::LocalPrepareForBecomingHost";
          if (bVar3) {
            pcVar8 = "LocalProcessHostMigrationJobNew::WaitNewHostGreeting";
          }
          *(code **)(param_1 + 0x30) = pcVar2;
          *(undefined8 *)(param_1 + 0x38) = 0;
          *(char **)(param_1 + 0x40) = pcVar8;
          FUN_71000b1cf0();
          uVar9 = 0;
          goto LAB_710017cd30;
        }
      }
    }
    else if ((*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58)) &&
            (*(int *)(*(long *)(*(long *)(param_1 + 0x158) + 0x18) + 0x41c) != 4)) {
      uVar9 = 5;
      goto LAB_710017cd30;
    }
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar8 = "LocalProcessHostMigrationJobNew::HostMigrationFailure";
  }
  else {
    uVar5 = FUN_71000b2b10((long)auStack_50,lVar1);
    if ((uVar5 & 1) == 0) goto LAB_710017cca8;
LAB_710017cc68:
    bVar3 = FUN_7100174cb0(*(long *)(param_1 + 0x158));
    if (bVar3) goto LAB_710017cca8;
    *(code **)(param_1 + 0x30) = FUN_71001a2310;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar8 = "LocalProcessHostMigrationJobNew::WaitNewHostGreeting";
  }
  uVar9 = 0;
  *(char **)(param_1 + 0x40) = pcVar8;
LAB_710017cd30:
  FUN_71000b1cf0();
  return uVar9;
}

