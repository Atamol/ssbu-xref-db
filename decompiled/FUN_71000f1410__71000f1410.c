// addr:      71000f1410
// offset:    0xf1410
// name:      FUN_71000f1410
// mangled:   
// signature: undefined FUN_71000f1410(void)


undefined8 FUN_71000f1410(long param_1)

{
  long *plVar1;
  char *pcVar2;
  code *pcVar3;
  long lVar4;
  undefined4 *puVar5;
  ErrorResultVariant *this;
  char acStack_84 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  ulong uStack_50;
  undefined8 uStack_48;
  
  plVar1 = (long *)(param_1 + 0x80);
  FUN_7100160500((long)plVar1,0);
  uStack_50 = 0;
  FUN_71000bb5d0(&uStack_50);
  if (*(ulong *)(param_1 + 0x100) < uStack_50) {
    puVar5 = *(undefined4 **)(param_1 + 0x68);
    this = (ErrorResultVariant *)((ulong)aiStack_70 | 4);
    aiStack_70[0] = 0x644a;
    nn::err::ErrorResultVariant::ErrorResultVariant(this);
    uStack_48._0_4_ = 0;
    nn::err::ErrorResultVariant::operator=(this,(Result *)&uStack_48);
    FUN_71000bce50(aiStack_60,aiStack_70);
    FUN_71000b41f0(puVar5,aiStack_60);
    lVar4 = DAT_71052acd90;
    aiStack_70[0] = 0x644a;
    nn::err::ErrorResultVariant::ErrorResultVariant(this);
    uStack_48 = (ulong)uStack_48._4_4_ << 0x20;
    nn::err::ErrorResultVariant::operator=(this,(Result *)&uStack_48);
    FUN_71000bce50(aiStack_80,aiStack_70);
    FUN_71000c5af0(lVar4,plVar1,aiStack_80,(uint)(*(char *)(param_1 + 0x78) == '\0'));
    FUN_71000c5390(DAT_71052acd90,plVar1,1,1);
    *(code **)(param_1 + 0x30) = FUN_7100186ed0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar2 = "ConnectStationJob::ConnectionFailed";
  }
  else {
    FUN_71000c59b0(aiStack_70,DAT_71052acd90,plVar1,(undefined4 *)(param_1 + 0x108),
                   (uint)*(byte *)(param_1 + 0x78),1,*(char *)(*(long *)(param_1 + 0x70) + 0x38),
                   acStack_84);
    if (aiStack_70[0] != 0) {
      return 5;
    }
    if (acStack_84[0] == '\0') {
      plVar1 = FUN_71000bb680();
      lVar4 = *plVar1;
      uStack_48 = 0;
      FUN_71000bb5d0(&uStack_48);
      pcVar2 = "NexConnectStationJob::WaitForNatTraversalStartedByRelay";
      *(long *)(param_1 + 0x100) = uStack_48 + lVar4 * 15000;
      pcVar3 = FUN_71000f15d0;
    }
    else {
      pcVar3 = FUN_71000f09f0;
      pcVar2 = "NexConnectStationJob::ResolveCurrentAddress";
    }
    *(code **)(param_1 + 0x30) = pcVar3;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  *(char **)(param_1 + 0x40) = pcVar2;
  return 0;
}

