// addr:      710017aa80
// offset:    0x17aa80
// name:      FUN_710017aa80
// mangled:   
// signature: undefined FUN_710017aa80(void)


undefined8 FUN_710017aa80(long param_1)

{
  uint uVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  undefined4 *puVar5;
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar3 = aiStack_60;
  lVar4 = *(long *)(param_1 + 0xa8);
  uVar2 = FUN_7100174f00(lVar4);
  if (((uVar2 & 1) == 0) && (uVar1 = FUN_7100174f20(lVar4), (uVar1 & 1) == 0)) {
    puVar5 = *(undefined4 **)(param_1 + 0x58);
    aiStack_50[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_40,aiStack_50);
    piVar3 = aiStack_40;
  }
  else {
    FUN_7100175430(aiStack_50,*(long **)(param_1 + 0xa8));
    if (aiStack_50[0] == 0) {
      *(code **)(param_1 + 0x30) = FUN_710013d410;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "CreateSessionJob::MeshStartup";
      return 0;
    }
    puVar5 = *(undefined4 **)(param_1 + 0x58);
    FUN_71000bce50(aiStack_60,aiStack_50);
  }
  FUN_71000b41f0(puVar5,piVar3);
  *(undefined8 *)(param_1 + 0x58) = 0;
  return 1;
}

