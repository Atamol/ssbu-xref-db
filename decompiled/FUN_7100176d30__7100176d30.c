// addr:      7100176d30
// offset:    0x176d30
// name:      FUN_7100176d30
// mangled:   
// signature: undefined FUN_7100176d30(void)


undefined8 FUN_7100176d30(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  uint uVar7;
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    plVar2 = *(long **)(param_1 + 0x78);
    if ((int)plVar2[0x90] != 0) {
      bVar1 = false;
      uVar7 = 0;
      do {
        lVar3 = (**(code **)(*plVar2 + 0xd8))(plVar2,uVar7);
        if (lVar3 == 0) break;
        uVar4 = (**(code **)(**(long **)(param_1 + 0x78) + 0x150))(*(long **)(param_1 + 0x78),lVar3)
        ;
        if ((uVar4 & 1) != 0) {
          bVar1 = true;
          *(uint *)(param_1 + 0x6c) = uVar7;
        }
        plVar2 = *(long **)(param_1 + 0x78);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(plVar2 + 0x90));
      if (bVar1) {
        *(undefined8 *)(param_1 + 0x30) = 0x50;
        pcVar6 = "LocalHostMigrationJob::ConnectNetwork";
        uVar5 = 1;
        goto LAB_7100176e18;
      }
    }
    uVar5 = 0;
    *(code **)(param_1 + 0x30) = FUN_7100176a80;
    pcVar6 = "LocalHostMigrationJob::ScanNetwork";
  }
  else {
    if (**(int **)(param_1 + 0x60) == 1) {
      FUN_71000b4300((long)*(int **)(param_1 + 0x60));
    }
    uVar5 = 0;
    *(code **)(param_1 + 0x30) = FUN_7100175f70;
    pcVar6 = "LocalHostMigrationJob::WaitForCancel";
  }
LAB_7100176e18:
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  *(char **)(param_1 + 0x40) = pcVar6;
  return 0;
}

