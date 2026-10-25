// addr:      7100170530
// offset:    0x170530
// name:      FUN_7100170530
// mangled:   
// signature: undefined FUN_7100170530(void)


undefined8 FUN_7100170530(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 *puVar4;
  int aiStack_40 [4];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    plVar3 = (long *)(*(long **)(param_1 + 0x78))[0x80];
    puVar4 = *(undefined4 **)(param_1 + 0x60);
    lVar2 = (**(code **)(**(long **)(param_1 + 0x78) + 0x158))();
    FUN_710016f650(aiStack_40,plVar3,puVar4,lVar2,0);
    if (aiStack_40[0] == 0) {
      FUN_710017dcc0(*(long *)(param_1 + 0x78));
      lVar2 = *(long *)(param_1 + 0x78);
      *(undefined1 *)(lVar2 + 0x47d) = 0;
      *(undefined1 *)(lVar2 + 0x569) = 1;
      FUN_71000b4820((long)plVar3,1);
      *(undefined8 *)(param_1 + 0x30) = 0x40;
      *(undefined8 *)(param_1 + 0x38) = 1;
      *(char **)(param_1 + 0x40) = "LdnHostMigrationJob::WaitCreateNetwork";
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

