// addr:      710011e9d0
// offset:    0x11e9d0
// name:      FUN_710011e9d0
// mangled:   
// signature: undefined8 __cdecl FUN_710011e9d0(long param_1)


undefined8 FUN_710011e9d0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int local_50 [4];
  int aiStack_40 [4];
  undefined4 local_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    FUN_7100140490(param_1);
    puVar3 = *(undefined4 **)(param_1 + 0x58);
    if (puVar3 != (undefined4 *)0x0) {
      local_50[0] = 0xc406;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
      local_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
      FUN_71000bce50(aiStack_40,local_50);
      FUN_71000b41f0(puVar3,aiStack_40);
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    *(code **)(param_1 + 0x30) = FUN_710011ea90;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LanMatchJointSessionJob::WaitCompanionStation";
  }
  return uVar2;
}

