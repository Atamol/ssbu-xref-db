// addr:      710011df00
// offset:    0x11df00
// name:      FUN_710011df00
// mangled:   
// signature: undefined FUN_710011df00(void)


undefined8 FUN_710011df00(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    FUN_7100140490(param_1);
    puVar3 = *(undefined4 **)(param_1 + 0x58);
    if (puVar3 != (undefined4 *)0x0) {
      aiStack_50[0] = 0xc406;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
      FUN_71000bce50(aiStack_40,aiStack_50);
      FUN_71000b41f0(puVar3,aiStack_40);
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    *(code **)(param_1 + 0x30) = FUN_710011e550;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LanMatchJointSessionJob::StartUpdateSessionKey";
  }
  return uVar2;
}

