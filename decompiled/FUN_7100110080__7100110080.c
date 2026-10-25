// addr:      7100110080
// offset:    0x110080
// name:      FUN_7100110080
// mangled:   
// signature: undefined FUN_7100110080(void)


undefined8 FUN_7100110080(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  char *pcVar6;
  code *pcVar7;
  undefined1 auStack_40 [16];
  
  uVar4 = FUN_71001a1890();
  if ((uVar4 & 1) != 0) {
    iVar3 = *(int *)(DAT_71052acd90 + 0x58);
    if (iVar3 != 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (*(int *)((long)plVar5 + 0x14) == 1) {
        FUN_71001d0a10(plVar5);
        plVar5 = *(long **)(param_1 + 0x118);
      }
      FUN_71001d1590(plVar5);
      uVar2 = FUN_710024bc70(*(long *)(DAT_71052acd90 + 0x68),*(long **)(param_1 + 0x118),iVar3,1);
      lVar1 = DAT_71052adb38;
      if ((uVar2 & 1) != 0) {
        if ((DAT_71052adb38 != 0) && (iVar3 = FUN_7100146ba0(DAT_71052adb38), iVar3 == 3)) {
          plVar5 = *(long **)(lVar1 + (ulong)*(byte *)(lVar1 + 0x162) * 8 + 0x168);
          (**(code **)(*plVar5 + 0xd8))
                    (auStack_40,plVar5,
                     *(undefined4 *)(lVar1 + (ulong)*(byte *)(lVar1 + 0x162) * 4 + 0x180));
        }
        lVar1 = DAT_71052ac580;
        plVar5 = FUN_71000bb680();
        pcVar6 = "NexProcessHostMigrationJob::WaitAfterPrepareForBecomingHost";
        *(long *)(param_1 + 0x218) = *(long *)(lVar1 + 0x30) + *plVar5 * 10000;
        pcVar7 = FUN_71001101a0;
        goto LAB_7100110178;
      }
    }
  }
  pcVar7 = FUN_71001a1d80;
  pcVar6 = "NexProcessHostMigrationJob::HostMigrationFailure";
LAB_7100110178:
  *(code **)(param_1 + 0x30) = pcVar7;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar6;
  return 0;
}

