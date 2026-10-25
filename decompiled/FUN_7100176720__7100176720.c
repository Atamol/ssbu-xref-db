// addr:      7100176720
// offset:    0x176720
// name:      FUN_7100176720
// mangled:   
// signature: undefined FUN_7100176720(void)


undefined8 FUN_7100176720(long param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int aiStack_58 [4];
  int aiStack_48 [4];
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  uVar1 = FUN_7100181270(*(long *)(param_1 + 0x78));
  FUN_7100182610(aiStack_38,*(long *)(param_1 + 0x78),*(undefined4 **)(param_1 + 0x60),uVar1);
  if (aiStack_38[0] == 0) {
    *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitChangeAllowParticipatingState";
    *(code **)(param_1 + 0x30) = FUN_7100176800;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    aiStack_48[0] = 0x4c11;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_28);
    if (aiStack_38[0] != aiStack_48[0]) {
      puVar2 = *(undefined4 **)(param_1 + 0x58);
      FUN_71000bce50(aiStack_58,aiStack_38);
      FUN_71000b41f0(puVar2,aiStack_58);
      *(undefined8 *)(param_1 + 0x58) = 0;
      FUN_7100176130(param_1);
      return 1;
    }
  }
  return 5;
}

