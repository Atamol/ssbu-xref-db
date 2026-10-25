// addr:      7100176a80
// offset:    0x176a80
// name:      FUN_7100176a80
// mangled:   
// signature: undefined FUN_7100176a80(void)


undefined8 FUN_7100176a80(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  long alStack_50 [2];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    alStack_50[0] = 0;
    FUN_71000bb5d0(alStack_50);
    lVar4 = alStack_50[0] - *(long *)(param_1 + 0x80);
    plVar2 = FUN_71000bb680();
    lVar3 = 0;
    if (*plVar2 != 0) {
      lVar3 = lVar4 / *plVar2;
    }
    if (lVar3 < 0x2711) {
      plVar2 = *(long **)(param_1 + 0x78);
      lVar4 = *(long *)(param_1 + 0x60);
      lVar3 = (**(code **)(*plVar2 + 0x160))(plVar2);
      FUN_7100182400((int *)alStack_50,(long)plVar2,lVar4,lVar3);
      if ((int)alStack_50[0] == 0) {
        *(code **)(param_1 + 0x30) = FUN_7100176bf0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitScanNetwork";
      }
      uVar1 = 5;
    }
    else {
      if (**(int **)(param_1 + 0x60) == 1) {
        FUN_71000b4300((long)*(int **)(param_1 + 0x60));
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x78) + 0x400) + 0x48) = 1;
      }
      FUN_7100176130(param_1);
      puVar5 = *(undefined4 **)(param_1 + 0x58);
      alStack_50[0] = CONCAT44(alStack_50[0]._4_4_,0x2c0a);
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)alStack_50 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)alStack_50 | 4),(Result *)auStack_28);
      FUN_71000bce50(aiStack_40,(int *)alStack_50);
      FUN_71000b41f0(puVar5,aiStack_40);
      *(undefined8 *)(param_1 + 0x58) = 0;
      uVar1 = 1;
    }
  }
  else {
    if (**(int **)(param_1 + 0x60) == 1) {
      FUN_71000b4300((long)*(int **)(param_1 + 0x60));
    }
    uVar1 = 0;
    *(code **)(param_1 + 0x30) = FUN_7100175f70;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitForCancel";
  }
  return uVar1;
}

