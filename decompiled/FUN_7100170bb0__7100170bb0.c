// addr:      7100170bb0
// offset:    0x170bb0
// name:      FUN_7100170bb0
// mangled:   
// signature: undefined FUN_7100170bb0(void)


undefined8 FUN_7100170bb0(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lStack_28;
  
  lStack_28 = 0;
  FUN_71000bb5d0(&lStack_28);
  lVar3 = lStack_28 - *(long *)(param_1 + 0x98);
  plVar2 = FUN_71000bb680();
  lVar1 = 0;
  if (*plVar2 != 0) {
    lVar1 = lVar3 / *plVar2;
  }
  if (lVar1 < *(int *)(param_1 + 0x8c)) {
    return 5;
  }
  *(undefined8 *)(param_1 + 0x30) = 0x50;
  *(undefined8 *)(param_1 + 0x38) = 1;
  *(char **)(param_1 + 0x40) = "LdnHostMigrationJob::ConnectNetwork";
  return 0;
}

