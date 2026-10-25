// addr:      710018f5e0
// offset:    0x18f5e0
// name:      FUN_710018f5e0
// mangled:   
// signature: undefined FUN_710018f5e0(void)


undefined8 FUN_710018f5e0(long *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  code *pcVar7;
  ulong uVar8;
  
  uVar1 = (**(code **)(*param_1 + 0x30))();
  *(undefined1 *)((long)param_1 + 0x6d) = uVar1;
  bVar2 = FUN_7100193560(DAT_71052adfc0);
  pcVar7 = FUN_710018f700;
  uVar4 = 0;
  pcVar6 = "LeaveWithHostMigrationJob::CleanupMesh";
  if ((*(byte *)((long)param_1 + 0x6d) < 0x20) && (*(byte *)((long)param_1 + 0x6d) != bVar2)) {
    uVar8 = 0;
    do {
      while ((uint)bVar2 == ((uint)uVar8 & 0xff)) {
        *(undefined1 *)((long)param_1 + uVar8 + 0x6e) = 0;
        uVar8 = uVar8 + 1;
        if (uVar8 == 0x20) goto LAB_710018f6c0;
      }
      bVar3 = FUN_7100190a90(DAT_71052adfc0,(byte)uVar8);
      if (bVar3) {
        lVar5 = FUN_7100193580(DAT_71052adfc0);
        FUN_710019a410(lVar5,uVar8 & 0xffffffff,*(undefined1 *)((long)param_1 + 0x6d));
        *(undefined1 *)((long)param_1 + uVar8 + 0x6e) = 1;
      }
      else {
        *(undefined1 *)((long)param_1 + uVar8 + 0x6e) = 0;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != 0x20);
LAB_710018f6c0:
    *(undefined1 *)((long)param_1 + 0x8e) = 1;
    pcVar7 = FUN_710018f800;
    uVar4 = 5;
    pcVar6 = "LeaveWithHostMigrationJob::WaitMigrationResponse";
  }
  param_1[6] = (long)pcVar7;
  param_1[7] = 0;
  param_1[8] = (long)pcVar6;
  return uVar4;
}

