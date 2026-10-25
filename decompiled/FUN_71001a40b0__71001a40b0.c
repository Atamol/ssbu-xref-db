// addr:      71001a40b0
// offset:    0x1a40b0
// name:      FUN_71001a40b0
// mangled:   
// signature: undefined8 __cdecl FUN_71001a40b0(long param_1)


undefined8 FUN_71001a40b0(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  char *pcVar6;
  code *pcVar7;
  ulong local_38;
  
  lVar1 = FUN_7100193a40(DAT_71052adfc0);
  uVar2 = FUN_71001adfc0(lVar1,*(int *)(param_1 + 0x68));
  lVar1 = FUN_7100193a40(DAT_71052adfc0);
  uVar3 = FUN_71001adfc0(lVar1,*(int *)(param_1 + 0x6c));
  lVar1 = FUN_7100193a40(DAT_71052adfc0);
  uVar4 = FUN_71001adfc0(lVar1,*(int *)(param_1 + 0x70));
  if ((((uVar2 & 1) == 0) && ((uVar3 & 1) == 0)) && ((uVar4 & 1) == 0)) {
    pcVar7 = FUN_71001a41d0;
    pcVar6 = "ProcessJoinRequestJob::JoinSucceeded";
  }
  else {
    local_38 = 0;
    FUN_71000bb5d0(&local_38);
    if ((local_38 < *(ulong *)(param_1 + 0x58)) && (*(char *)(param_1 + 0xbb) == '\0')) {
      return 5;
    }
    plVar5 = (long *)FUN_7100193a40(DAT_71052adfc0);
    FUN_71001ae030(plVar5,*(int *)(param_1 + 0x68));
    *(undefined4 *)(param_1 + 0x68) = 0;
    plVar5 = (long *)FUN_7100193a40(DAT_71052adfc0);
    FUN_71001ae030(plVar5,*(int *)(param_1 + 0x6c));
    *(undefined4 *)(param_1 + 0x6c) = 0;
    plVar5 = (long *)FUN_7100193a40(DAT_71052adfc0);
    FUN_71001ae030(plVar5,*(int *)(param_1 + 0x70));
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    pcVar7 = FUN_71001a3920;
    pcVar6 = "ProcessJoinRequestJob::InitialStep";
  }
  *(code **)(param_1 + 0x30) = pcVar7;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar6;
  return 0;
}

