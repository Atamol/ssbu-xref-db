// addr:      71000f0790
// offset:    0xf0790
// name:      FUN_71000f0790
// mangled:   
// signature: undefined FUN_71000f0790(void)


undefined8 FUN_71000f0790(long param_1)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  code *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  ErrorResultVariant *this;
  char acStack_84 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  ulong uStack_50;
  undefined8 uStack_48;
  
  iVar6 = *(int *)(DAT_71052acd90 + 0xb4);
  if (*(char *)(param_1 + 0x78) != '\0') {
    lVar2 = FUN_7100161fb0(DAT_71052add68);
    bVar1 = FUN_7100160300(lVar2 + 8);
    if (bVar1) {
      iVar6 = *(int *)(DAT_71052acd90 + 0xb8) + iVar6;
    }
    bVar1 = FUN_7100160300(param_1 + 0x80);
    if (bVar1) {
      iVar6 = *(int *)(DAT_71052acd90 + 0xb8) + iVar6;
    }
  }
  uStack_50 = 0;
  FUN_71000bb5d0(&uStack_50);
  if (*(ulong *)(param_1 + 0x100) < uStack_50) {
    puVar7 = *(undefined4 **)(param_1 + 0x68);
    this = (ErrorResultVariant *)((ulong)aiStack_70 | 4);
    aiStack_70[0] = 0x644a;
    nn::err::ErrorResultVariant::ErrorResultVariant(this);
    uStack_48._0_4_ = 0;
    nn::err::ErrorResultVariant::operator=(this,(Result *)&uStack_48);
    FUN_71000bce50(aiStack_60,aiStack_70);
    FUN_71000b41f0(puVar7,aiStack_60);
    lVar2 = DAT_71052acd90;
    aiStack_70[0] = 0x644a;
    nn::err::ErrorResultVariant::ErrorResultVariant(this);
    uStack_48 = (ulong)uStack_48._4_4_ << 0x20;
    nn::err::ErrorResultVariant::operator=(this,(Result *)&uStack_48);
    FUN_71000bce50(aiStack_80,aiStack_70);
    FUN_71000c5af0(lVar2,(long *)(param_1 + 0x80),aiStack_80,
                   (uint)(*(char *)(param_1 + 0x78) == '\0'));
    FUN_71000c5390(DAT_71052acd90,(long *)(param_1 + 0x80),1,1);
    *(code **)(param_1 + 0x30) = FUN_7100186ed0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar4 = "ConnectStationJob::ConnectionFailed";
  }
  else {
    FUN_71000c59b0(aiStack_70,DAT_71052acd90,(long *)(param_1 + 0x80),
                   (undefined4 *)(param_1 + 0x108),(uint)*(byte *)(param_1 + 0x78),0,
                   *(char *)(*(long *)(param_1 + 0x70) + 0x38),acStack_84);
    if (aiStack_70[0] != 0) {
      return 5;
    }
    if (acStack_84[0] == '\0') {
      if (*(char *)(param_1 + 0x78) == '\0') {
        if (*(char *)(*(long *)(param_1 + 0x70) + 0x38) != -2) {
          FUN_7100193a00(DAT_71052adfc0);
        }
        plVar3 = FUN_71000bb680();
        lVar2 = *plVar3;
        uStack_48 = 0;
        FUN_71000bb5d0(&uStack_48);
        lVar2 = uStack_48 + lVar2 * 15000;
        pcVar5 = FUN_71000f1060;
        pcVar4 = "NexConnectStationJob::WaitForNatTraversalStarted";
      }
      else {
        plVar3 = FUN_71000bb680();
        lVar2 = *plVar3;
        uStack_48 = 0;
        FUN_71000bb5d0(&uStack_48);
        lVar2 = uStack_48 + lVar2 * iVar6;
        pcVar5 = FUN_71000f0ae0;
        pcVar4 = "NexConnectStationJob::WaitForNatTraversalCompleted";
      }
      *(long *)(param_1 + 0x100) = lVar2;
    }
    else {
      pcVar5 = FUN_71000f09f0;
      pcVar4 = "NexConnectStationJob::ResolveCurrentAddress";
    }
    *(code **)(param_1 + 0x30) = pcVar5;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  *(char **)(param_1 + 0x40) = pcVar4;
  return 0;
}

