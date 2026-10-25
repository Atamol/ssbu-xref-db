// addr:      71001707a0
// offset:    0x1707a0
// name:      FUN_71001707a0
// mangled:   
// signature: undefined8 __cdecl FUN_71001707a0(long param_1)


undefined8 FUN_71001707a0(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_28;
  
  local_28 = 0;
  FUN_71000bb5d0(&local_28);
  lVar3 = local_28 - *(long *)(param_1 + 0x98);
  plVar2 = FUN_71000bb680();
  lVar1 = 0;
  if (*plVar2 != 0) {
    lVar1 = lVar3 / *plVar2;
  }
  if (lVar1 < *(int *)(param_1 + 0x88)) {
    return 5;
  }
  *(undefined8 *)(param_1 + 0x30) = 0x50;
  *(undefined8 *)(param_1 + 0x38) = 1;
  *(char **)(param_1 + 0x40) = "LdnHostMigrationJob::ConnectNetwork";
  return 0;
}

