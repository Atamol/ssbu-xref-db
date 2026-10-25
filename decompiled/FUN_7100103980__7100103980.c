// addr:      7100103980
// offset:    0x103980
// name:      FUN_7100103980
// mangled:   
// signature: undefined FUN_7100103980(void)


undefined8 FUN_7100103980(long param_1)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int aiStack_58 [4];
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
    aiStack_48[0] = 0xc406;
    break;
  case 6:
    aiStack_48[0] = 0xa471;
    break;
  case 7:
    aiStack_48[0] = 0xc420;
    break;
  case 8:
    aiStack_48[0] = 0xc421;
    break;
  default:
    lVar4 = **(long **)(DAT_71052adb38 + (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 +
                       0x168);
    if (*(char *)(param_1 + 0x263) == '\0') {
      uVar3 = (**(code **)(lVar4 + 0x68))();
    }
    else {
      uVar3 = (**(code **)(lVar4 + 0x78))();
    }
    if ((uVar3 & 1) != 0) {
      if (*(int *)(param_1 + 0x60) == 3) {
        piVar1 = (int *)(param_1 + 100);
        FUN_71000bce50(aiStack_48,piVar1);
        FUN_71000bce50(aiStack_48,piVar1);
        aiStack_58[0] = 0xac5a;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_58 | 4));
        auStack_38[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_58 | 4),(Result *)auStack_38);
        if (aiStack_48[0] == aiStack_58[0]) {
          FUN_71000bce50(aiStack_48,piVar1);
          FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_48);
        }
      }
      FUN_7100149290(DAT_71052adb38,0);
      *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::StartLeaveBufferMatchmakeSession";
      *(code **)(param_1 + 0x30) = FUN_71001035f0;
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    return 5;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
  aiStack_58[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)aiStack_58);
  FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_48);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  *(code **)(param_1 + 0x30) = FUN_71000f70d0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::ProcessFailure";
  return 0;
}

