// addr:      710018de80
// offset:    0x18de80
// name:      FUN_710018de80
// mangled:   
// signature: undefined FUN_710018de80(void)


undefined8 FUN_710018de80(long param_1)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  char *pcVar7;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  lVar1 = DAT_71052adfc0;
  bVar2 = FUN_7100193560(DAT_71052adfc0);
  if (bVar2 < 0x20) {
    FUN_7100192e90(aiStack_40,lVar1);
    aiStack_50[0] = 0x6c50;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    if ((aiStack_40[0] != aiStack_50[0]) || (*(char *)(param_1 + 0x198) != '\0')) {
      uVar3 = FUN_710018eaf0(*(long **)(lVar1 + 0x10),(undefined4 *)(param_1 + 0x160));
      if ((uVar3 & 1) == 0) {
        uVar5 = FUN_710018eac0(*(long *)(lVar1 + 0x10),(undefined4 *)(param_1 + 0x160));
        if ((uVar5 & 1) == 0) {
          return 5;
        }
      }
      else {
        FUN_71000b4820(*(long *)(lVar1 + 0x10),0);
      }
      pcVar6 = FUN_710018df90;
      uVar4 = 5;
      pcVar7 = "KickoutManageJob::ClientWaitLeaveMesh";
      goto LAB_710018df74;
    }
  }
  pcVar6 = FUN_710018ddc0;
  uVar4 = 0;
  pcVar7 = "KickoutManageJob::ClientFinalize";
LAB_710018df74:
  *(code **)(param_1 + 0x30) = pcVar6;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar7;
  return uVar4;
}

