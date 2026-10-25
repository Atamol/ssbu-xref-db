// addr:      710017c7b0
// offset:    0x17c7b0
// name:      FUN_710017c7b0
// mangled:   
// signature: undefined FUN_710017c7b0(void)


undefined8 FUN_710017c7b0(long param_1)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  code *pcVar10;
  int aiStack_78 [4];
  undefined **ppuStack_68;
  undefined4 uStack_60;
  
  *(undefined4 *)(param_1 + 0x110) = 2;
  bVar1 = FUN_7100193110(DAT_71052adfc0);
  if (((0x1f < bVar1) || (bVar2 = FUN_7100193560(DAT_71052adfc0), 0x1f < bVar2)) ||
     (bVar2 = FUN_7100193560(DAT_71052adfc0), bVar1 == bVar2)) goto LAB_710017c9c0;
  lVar7 = param_1 + 0x118;
  FUN_71000b1cb0(lVar7,*(long *)(*(long *)(param_1 + 0x158) + 0x18) + 0x2c0);
  uStack_60 = 0;
  ppuStack_68 = (undefined **)0x20;
  FUN_71000b2b70();
  FUN_71000be920(&ppuStack_68);
  FUN_71000beb80(aiStack_78,(long)&ppuStack_68,lVar7);
  plVar4 = (long *)FUN_7100161fa0(DAT_71052add68);
  lVar5 = (**(code **)(*plVar4 + 0x58))(plVar4,&ppuStack_68);
  if ((lVar5 == 0) || (*(byte *)(lVar5 + 0x38) == bVar1)) {
    aiStack_78[2] = 0;
    aiStack_78[0] = 0x20;
    aiStack_78[1] = 0;
    FUN_71000b2b70();
    lVar7 = param_1 + 0x138;
    uVar6 = FUN_71001809e0(*(long *)(*(long *)(param_1 + 0x158) + 0x18),lVar7);
    if ((uVar6 & 1) == 0) goto LAB_710017c8f8;
  }
  else {
    aiStack_78[2] = 0;
    aiStack_78[0] = 0x20;
    aiStack_78[1] = 0;
    FUN_71000b2b70();
    FUN_71000b1cb0(param_1 + 0x138,lVar7);
LAB_710017c8f8:
    FUN_71000b28c0(lVar7);
  }
  ppuStack_68 = &PTR_FUN_7104f4a808;
  FUN_71000b1cf0();
  bVar3 = FUN_71000b2850(param_1 + 0x138);
  if (!bVar3) {
LAB_710017c9c0:
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalProcessHostMigrationJobNew::HostMigrationFailure";
    return 0;
  }
  FUN_71000be920(&ppuStack_68);
  aiStack_78[2] = 0;
  aiStack_78[0] = 0x20;
  aiStack_78[1] = 0;
  FUN_71000b2b70();
  FUN_71000beb80(aiStack_78,(long)&ppuStack_68,param_1 + 0x138);
  plVar4 = (long *)FUN_7100161fa0(DAT_71052add68);
  lVar7 = (**(code **)(*plVar4 + 0x58))(plVar4,&ppuStack_68);
  if (lVar7 == 0) {
    aiStack_78[2] = 0;
    aiStack_78[0] = 0x20;
    aiStack_78[1] = 0;
    FUN_71000bec90();
  }
  else {
    *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(lVar7 + 0x38);
    uVar8 = FUN_71001a1780(param_1);
    plVar4 = FUN_71000bb680();
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + *plVar4 * 10000;
    if ((int)uVar8 == 1) {
      pcVar10 = FUN_710017cab0;
      pcVar9 = "LocalProcessHostMigrationJobNew::LocalPrepareForBecomingHost";
      goto LAB_710017ca30;
    }
    if ((int)uVar8 == 2) {
      pcVar10 = FUN_710017cbd0;
      pcVar9 = "LocalProcessHostMigrationJobNew::WaitLocalHostMigrationClient";
      goto LAB_710017ca30;
    }
  }
  pcVar10 = FUN_71001a1d80;
  pcVar9 = "LocalProcessHostMigrationJobNew::HostMigrationFailure";
LAB_710017ca30:
  *(code **)(param_1 + 0x30) = pcVar10;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar9;
  ppuStack_68 = &PTR_FUN_7104f4a808;
  FUN_71000b1cf0();
  return 0;
}

