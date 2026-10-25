// addr:      71001a71f0
// offset:    0x1a71f0
// name:      FUN_71001a71f0
// mangled:   
// signature: undefined FUN_71001a71f0(void)


undefined8 FUN_71001a71f0(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58)) {
    bVar3 = FUN_7100193560(DAT_71052adfc0);
    bVar4 = FUN_7100193110(DAT_71052adfc0);
    if ((bVar4 | bVar3) < 0x20) {
      aiStack_50[0] = 0;
      uVar2 = *(undefined4 *)(param_1 + 0xf0);
      iVar1 = *(int *)(param_1 + 0xe8) + 1;
      lVar6 = FUN_7100193580(DAT_71052adfc0);
      bVar5 = FUN_710019a6e0(lVar6,(ulong)bVar4,uVar2,iVar1,aiStack_50,0);
      if (bVar5) {
        *(int *)(param_1 + 0xe8) = iVar1;
        *(code **)(param_1 + 0x30) = FUN_71001a7330;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "ProcessUpdateMeshJob::StartRelayConnection";
      }
      return 5;
    }
  }
  else {
    aiStack_50[0] = 0x6c0e;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_38[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_38);
    FUN_71000bcf30((int *)(*(long *)(DAT_71052adfc0 + 8) + 0x9c),aiStack_50);
  }
  *(code **)(param_1 + 0x30) = FUN_71001a65f0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "ProcessUpdateMeshJob::UpdateFailed";
  return 0;
}

