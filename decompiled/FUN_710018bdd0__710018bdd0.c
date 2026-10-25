// addr:      710018bdd0
// offset:    0x18bdd0
// name:      FUN_710018bdd0
// mangled:   
// signature: undefined FUN_710018bdd0(void)


undefined8 FUN_710018bdd0(long param_1)

{
  ulong uVar1;
  
  if (*(char *)(param_1 + 0x80) == '\0') {
    *(code **)(param_1 + 0x30) = FUN_710018b9f0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "JoinMeshJob::AnalyzeJoinResponse";
    return 0;
  }
  uVar1 = FUN_710018a7d0(param_1);
  if ((((uVar1 & 1) == 0) && (uVar1 = FUN_710018b370(param_1), (uVar1 & 1) == 0)) &&
     (uVar1 = FUN_710018b870(param_1), (uVar1 & 1) == 0)) {
    return 5;
  }
  *(undefined1 *)(param_1 + 0x80) = 0;
  return 1;
}

