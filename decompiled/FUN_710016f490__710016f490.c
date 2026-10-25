// addr:      710016f490
// offset:    0x16f490
// name:      FUN_710016f490
// mangled:   
// signature: undefined FUN_710016f490(void)


ulong FUN_710016f490(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  int aiStack_68 [4];
  undefined4 auStack_58 [2];
  int aiStack_50 [4];
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  aiStack_30[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_30 | 4));
  aiStack_40[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_30 | 4),(Result *)aiStack_40);
  aiStack_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  aiStack_40[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_40);
  FUN_71000bce50(aiStack_40,aiStack_50);
  lVar4 = *(long *)(param_1 + 0x70);
  FUN_710016b4f0(aiStack_50,lVar4);
  FUN_71000bcf30(aiStack_30,aiStack_50);
  if ((aiStack_30[0] == 0) || (aiStack_40[0] != 0)) {
    iVar1 = nn::ldn::GetState();
  }
  else {
    FUN_71000bcf30(aiStack_40,aiStack_30);
    iVar1 = nn::ldn::GetState();
  }
  if (iVar1 == 5) {
    auStack_58[0] = nn::ldn::Disconnect();
    FUN_710016b2f0(aiStack_50,lVar4,(Result *)auStack_58);
    FUN_71000bcf30(aiStack_30,aiStack_50);
    if ((aiStack_30[0] != 0) && (aiStack_40[0] == 0)) {
      FUN_71000bcf30(aiStack_40,aiStack_30);
    }
  }
  FUN_710016db10(lVar4);
  FUN_710016c090(aiStack_50);
  FUN_71000bcf30(aiStack_30,aiStack_50);
  if ((aiStack_30[0] != 0) && (aiStack_40[0] == 0)) {
    FUN_71000bcf30(aiStack_40,aiStack_30);
  }
  FUN_710017ddf0(*(long *)(param_1 + 0x70),0);
  puVar5 = *(undefined4 **)(param_1 + 0x58);
  if (*(char *)(puVar5 + 10) == '\0') {
    if (aiStack_40[0] == 0) {
      *(char **)(param_1 + 0x40) = "LdnBackgroundProcessJob::WaitDisconnected";
      uVar3 = 4;
      *(code **)(param_1 + 0x30) = FUN_7100173610;
      *(undefined8 *)(param_1 + 0x38) = 0;
      uVar2 = 0xf0000;
      goto LAB_710016f618;
    }
    FUN_71000bce50(aiStack_68,aiStack_40);
    FUN_71000b41f0(puVar5,aiStack_68);
  }
  else {
    FUN_71000b4260(puVar5);
  }
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar3 = 1;
LAB_710016f618:
  return uVar2 | uVar3;
}

