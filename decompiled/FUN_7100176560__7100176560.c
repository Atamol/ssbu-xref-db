// addr:      7100176560
// offset:    0x176560
// name:      FUN_7100176560
// mangled:   
// signature: undefined FUN_7100176560(void)


undefined8 FUN_7100176560(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  undefined4 uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  undefined **appuStack_c0 [5];
  int aiStack_98 [4];
  undefined **ppuStack_88;
  undefined4 uStack_80;
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    uVar2 = FUN_7100181120(*(long *)(param_1 + 0x78),1);
    if ((uVar2 & 1) == 0) {
      lVar4 = *(long *)(param_1 + 0x78);
      uVar6 = 1;
    }
    else {
      ppuStack_88 = (undefined **)0x0;
      FUN_71000bb5d0(&ppuStack_88);
      lVar8 = (long)ppuStack_88 - *(long *)(param_1 + 0x70);
      plVar3 = FUN_71000bb680();
      lVar4 = 0;
      if (*plVar3 != 0) {
        lVar4 = lVar8 / *plVar3;
      }
      if (lVar4 < 0x1b59) {
        return 5;
      }
      lVar4 = *(long *)(param_1 + 0x78);
      lVar8 = 0;
      do {
        lVar4 = lVar4 + lVar8;
        bVar1 = FUN_7100172880(lVar4 + 0xa8);
        if ((bVar1) && (*(int *)(lVar4 + 0xd8) == 1)) {
          FUN_71000be920(&ppuStack_88);
          FUN_71000beb80(aiStack_98,(long)&ppuStack_88,lVar4 + 0xb0);
          lVar9 = *(long *)(param_1 + 0x78);
          FUN_71000be940(appuStack_c0,(long)&ppuStack_88);
          FUN_710017f110(lVar9,(long)appuStack_c0);
          appuStack_c0[0] = &PTR_FUN_7104f4a808;
          FUN_71000b1cf0();
          FUN_71000b28c0(lVar4 + 0xb0);
          *(undefined2 *)(lVar4 + 0xd0) = 0;
          *(undefined4 *)(lVar4 + 0xd8) = 0;
          *(undefined2 *)(lVar4 + 0xdc) = 0xff00;
          ppuStack_88 = &PTR_FUN_7104f4a808;
          FUN_71000b1cf0();
        }
        lVar4 = *(long *)(param_1 + 0x78);
        lVar8 = lVar8 + 0x40;
      } while (lVar8 != 0x200);
      uVar6 = 2;
    }
    *(undefined4 *)(lVar4 + 0x41c) = uVar6;
    uStack_80 = 0;
    ppuStack_88 = (undefined **)0x10;
    FUN_71000b2b70();
    pcVar7 = FUN_7100176720;
    pcVar5 = "LocalHostMigrationJob::ChangeAllowParticipatingState";
  }
  else {
    if (**(int **)(param_1 + 0x60) == 1) {
      FUN_71000b4300((long)*(int **)(param_1 + 0x60));
    }
    pcVar7 = FUN_7100175f70;
    pcVar5 = "LocalHostMigrationJob::WaitForCancel";
  }
  *(code **)(param_1 + 0x30) = pcVar7;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar5;
  return 0;
}

