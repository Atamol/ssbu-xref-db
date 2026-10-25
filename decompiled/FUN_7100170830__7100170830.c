// addr:      7100170830
// offset:    0x170830
// name:      FUN_7100170830
// mangled:   
// signature: undefined FUN_7100170830(void)


undefined8 FUN_7100170830(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  int aiStack_40 [4];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    plVar3 = *(long **)(*(long *)(param_1 + 0x78) + 0x400);
    FUN_710016ffa0(aiStack_40,plVar3,*(undefined4 **)(param_1 + 0x60));
    if (aiStack_40[0] == 0) {
      FUN_710017dcc0(*(long *)(param_1 + 0x78));
      lVar2 = *(long *)(param_1 + 0x78);
      *(undefined1 *)(lVar2 + 0x47d) = 0;
      *(undefined1 *)(lVar2 + 0x569) = 1;
      FUN_71000b4820((long)plVar3,1);
      *(undefined8 *)(param_1 + 0x30) = 0x58;
      *(undefined8 *)(param_1 + 0x38) = 1;
      *(char **)(param_1 + 0x40) = "LdnHostMigrationJob::WaitConnectNetwork";
    }
    uVar1 = 5;
  }
  else {
    if (**(int **)(param_1 + 0x60) == 1) {
      FUN_71000b4300((long)*(int **)(param_1 + 0x60));
    }
    uVar1 = 0;
    *(code **)(param_1 + 0x30) = FUN_7100175f70;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LdnHostMigrationJob::WaitForCancel";
  }
  return uVar1;
}

