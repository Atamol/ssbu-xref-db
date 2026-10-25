// addr:      7100107cb0
// offset:    0x107cb0
// name:      FUN_7100107cb0
// mangled:   
// signature: undefined FUN_7100107cb0(void)


undefined8 FUN_7100107cb0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 *puVar3;
  int aiStack_48 [4];
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    aiStack_38[0] = 0xc406;
    break;
  case 6:
    aiStack_38[0] = 0xa471;
    break;
  case 7:
    aiStack_38[0] = 0xc420;
    break;
  case 8:
    aiStack_38[0] = 0xc421;
    break;
  default:
    uVar2 = FUN_7100143730(param_1);
    if ((uVar2 & 1) != 0) {
      aiStack_38[0] = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
      FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_38);
      *(code **)(param_1 + 0x30) = FUN_71001429b0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "NexMatchRandomMatchmakeJob::CompleteFailure";
      return 0;
    }
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(DAT_71052ac580 + 0x30);
    FUN_71000ede30(*(long *)(DAT_71052adb38 + 8));
    *(undefined4 *)(param_1 + 400) = 0;
    (**(code **)(**(long **)(param_1 + 0x148) + 0x18))
              (aiStack_38,*(long **)(param_1 + 0x148),param_1 + 0x110);
    if (aiStack_38[0] == 0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "NexMatchRandomMatchmakeJob::WaitRandomMatchmake";
      *(code **)(param_1 + 0x30) = FUN_7100108090;
      *(undefined4 *)(param_1 + 0x60) = 2;
      return 5;
    }
    puVar3 = *(undefined4 **)(param_1 + 0x58);
    if (puVar3 != (undefined4 *)0x0) {
      FUN_71000bce50(aiStack_48,aiStack_38);
      FUN_71000b41f0(puVar3,aiStack_48);
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    FUN_71000d8f90(*(long *)(param_1 + 0x148));
    return 1;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
  FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_38);
  *(code **)(param_1 + 0x30) = FUN_71001429b0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "nex::NexMatchRandomMatchmakeJob::CompleteFailure";
  return 0;
}

