// addr:      710018b770
// offset:    0x18b770
// name:      FUN_710018b770
// mangled:   
// signature: undefined8 __cdecl FUN_710018b770(long param_1)


undefined8 FUN_710018b770(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  
  lVar1 = FUN_7100193a40(DAT_71052adfc0);
  uVar2 = FUN_71001adfc0(lVar1,*(int *)(param_1 + 0x68));
  if ((uVar2 & 1) == 0) {
    *(code **)(param_1 + 0x30) = FUN_710018bdd0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(char **)(param_1 + 0x40) = "JoinMeshJob::WaitJoinResponse";
    return 0;
  }
  uVar2 = FUN_710018a7d0(param_1);
  if ((((uVar2 & 1) == 0) && (uVar2 = FUN_710018b370(param_1), (uVar2 & 1) == 0)) &&
     (uVar2 = FUN_710018b870(param_1), (uVar2 & 1) == 0)) {
    if (*(char *)(param_1 + 0x80) != '\0') {
      return 5;
    }
    plVar3 = (long *)FUN_7100193a40(DAT_71052adfc0);
    FUN_71001ae030(plVar3,*(int *)(param_1 + 0x68));
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(code **)(param_1 + 0x30) = FUN_710018b9f0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "JoinMeshJob::AnalyzeJoinResponse";
    return 0;
  }
  plVar3 = (long *)FUN_7100193a40(DAT_71052adfc0);
  FUN_71001ae030(plVar3,*(int *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  return 1;
}

