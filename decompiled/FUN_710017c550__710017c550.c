// addr:      710017c550
// offset:    0x17c550
// name:      FUN_710017c550
// mangled:   
// signature: undefined FUN_710017c550(void)


undefined8 FUN_710017c550(long *param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  code *pcVar9;
  undefined8 auStack_50 [4];
  
  *(undefined4 *)(param_1 + 0x22) = 1;
  plVar2 = (long *)FUN_7100161fa0(DAT_71052add68);
  lVar3 = (**(code **)(*plVar2 + 0x48))(plVar2,*(undefined1 *)((long)param_1 + 0x86));
  plVar2 = (long *)FUN_7100161fa0(DAT_71052add68);
  lVar4 = (**(code **)(*plVar2 + 0x48))(plVar2,(char)param_1[0x12]);
  if (lVar4 == 0) {
    *(undefined1 *)((long)param_1 + 0x161) = 1;
  }
  else {
    FUN_71000b1c60(auStack_50,*(long *)(param_1[0x2b] + 0x18) + 0x2c0);
    if (lVar3 == 0) {
      FUN_71000b28c0((long)(param_1 + 0x23));
      puVar7 = (undefined8 *)(lVar4 + 0x18);
LAB_710017c738:
      FUN_71000b1cb0((long)(param_1 + 0x27),(long)puVar7);
      bVar1 = FUN_71000b2850((long)(param_1 + 0x27));
    }
    else {
      FUN_71000b1cb0((long)(param_1 + 0x23),lVar3 + 0x18);
      FUN_71000b2b70();
      FUN_71000b2b70();
      FUN_71000b2b70();
      uVar5 = FUN_71000b2b10((long)(param_1 + 0x23),(long)auStack_50);
      if (((uVar5 & 1) == 0) && (bVar1 = FUN_71000b2850((long)auStack_50), bVar1)) {
        uVar5 = FUN_71000b2b10((long)auStack_50,lVar4 + 0x18);
        if ((uVar5 & 1) != 0) {
          puVar7 = auStack_50;
          goto LAB_710017c738;
        }
        FUN_71000b2b70();
        FUN_71000b2b70();
        *(undefined1 *)((long)param_1 + 0x161) = 1;
        bVar1 = FUN_71000b2850((long)(param_1 + 0x27));
      }
      else {
        FUN_71000b1cb0((long)(param_1 + 0x27),lVar4 + 0x18);
        bVar1 = FUN_71000b2850((long)(param_1 + 0x27));
      }
    }
    if (!bVar1) {
      *(undefined1 *)((long)param_1 + 0x161) = 1;
    }
    FUN_71000b1cf0();
  }
  uVar5 = (**(code **)(*param_1 + 0x30))(param_1);
  if ((uVar5 & 1) == 0) {
    *(undefined1 *)((long)param_1 + 0x161) = 1;
  }
  else if (*(char *)((long)param_1 + 0x161) == '\0') {
    uVar6 = FUN_71001a1780((long)param_1);
    plVar2 = FUN_71000bb680();
    param_1[0xb] = param_1[0xb] + *plVar2 * 10000;
    if ((int)uVar6 == 1) {
      pcVar9 = FUN_710017cab0;
      pcVar8 = "LocalProcessHostMigrationJobNew::LocalPrepareForBecomingHost";
      goto LAB_710017c708;
    }
    if ((int)uVar6 == 2) {
      pcVar9 = FUN_710017cbd0;
      pcVar8 = "LocalProcessHostMigrationJobNew::WaitLocalHostMigrationClient";
      goto LAB_710017c708;
    }
  }
  pcVar9 = FUN_71001a1d80;
  pcVar8 = "LocalProcessHostMigrationJobNew::HostMigrationFailure";
LAB_710017c708:
  param_1[6] = (long)pcVar9;
  param_1[7] = 0;
  param_1[8] = (long)pcVar8;
  return 0;
}

