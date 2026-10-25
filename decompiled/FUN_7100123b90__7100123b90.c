// addr:      7100123b90
// offset:    0x123b90
// name:      FUN_7100123b90
// mangled:   
// signature: undefined FUN_7100123b90(void)


undefined8 FUN_7100123b90(long param_1,byte param_2,uint param_3)

{
  int iVar1;
  char *pcVar2;
  code *pcVar3;
  long lVar4;
  bool bVar5;
  undefined1 uVar6;
  long *plVar7;
  
  iVar1 = (param_3 & 0xffff) * 3000 + 0x9c4;
  *(int *)(param_1 + 0x60) = iVar1;
  lVar4 = DAT_71052ac580;
  plVar7 = FUN_71000bb680();
  *(ulong *)(param_1 + 0x158) = *(long *)(lVar4 + 0x30) + *plVar7 * (ulong)(uint)(iVar1 * 2);
  uVar6 = FUN_7100193110(DAT_71052adfc0);
  bVar5 = (param_2 & 1) == 0;
  pcVar2 = "LanProcessHostMigrationJob::LanCleanupOldHostInfoOnMultiCandidate";
  if (bVar5) {
    pcVar2 = "LanProcessHostMigrationJob::LanMakeHostCandidateRanking";
  }
  *(char **)(param_1 + 0x40) = pcVar2;
  pcVar3 = FUN_7100123c50;
  if (bVar5) {
    pcVar3 = FUN_7100123cb0;
  }
  *(undefined1 *)(param_1 + 0x86) = uVar6;
  *(byte *)(param_1 + 0x1a0) = param_2 & 1;
  *(code **)(param_1 + 0x30) = pcVar3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 1;
}

