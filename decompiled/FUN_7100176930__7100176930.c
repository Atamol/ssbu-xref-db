// addr:      7100176930
// offset:    0x176930
// name:      FUN_7100176930
// mangled:   
// signature: undefined FUN_7100176930(void)


undefined8 FUN_7100176930(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined8 uStack_50;
  undefined4 uStack_48;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    bVar1 = FUN_71001813d0(*(long *)(param_1 + 0x78));
    if (bVar1) {
      uStack_48 = 0;
      uStack_50 = 0x10;
      FUN_71000b2b70();
      plVar3 = *(long **)(*(long *)(param_1 + 0x78) + 0x408);
      uStack_48 = 0;
      uStack_50 = 0x20;
      (**(code **)(*plVar3 + 0x28))(plVar3,&uStack_50);
      uVar2 = 5;
    }
    else {
      puVar4 = *(undefined4 **)(param_1 + 0x58);
      uStack_50 = (ulong)uStack_50._4_4_ << 0x20;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&uStack_50 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)&uStack_50 | 4),(Result *)auStack_28);
      FUN_71000bce50(aiStack_40,(int *)&uStack_50);
      FUN_71000b4180(puVar4,aiStack_40);
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x418) = 0;
      uStack_48 = 0;
      uStack_50 = 0x10;
      FUN_71000b2b70();
      uVar2 = 1;
    }
  }
  else {
    if (**(int **)(param_1 + 0x60) == 1) {
      FUN_71000b4300((long)*(int **)(param_1 + 0x60));
    }
    uVar2 = 0;
    *(code **)(param_1 + 0x30) = FUN_7100175f70;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitForCancel";
  }
  return uVar2;
}

