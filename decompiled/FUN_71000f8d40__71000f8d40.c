// addr:      71000f8d40
// offset:    0xf8d40
// name:      FUN_71000f8d40
// mangled:   
// signature: undefined FUN_71000f8d40(void)


undefined8 FUN_71000f8d40(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  lVar1 = DAT_71052adb38;
  plVar5 = *(long **)(DAT_71052adb38 + (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 +
                     0x168);
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
    uVar3 = FUN_71000da970((long)plVar5);
    if ((uVar3 & 1) != 0) {
      FUN_71000bce50(aiStack_48,(int *)(param_1 + 100));
      if (aiStack_48[0] != 0) {
        *(code **)(param_1 + 0x30) = FUN_71000f8aa0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::GetMatchmakeSessionOwners";
      }
      lVar4 = (**(code **)(*plVar5 + 0xf0))(plVar5);
      FUN_7100150e30(*(long *)(lVar1 + 0xb8),lVar4,1);
      *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::GetMatchmakeSessionOwners";
      *(code **)(param_1 + 0x30) = FUN_71000f8aa0;
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    return 5;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
  auStack_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_38);
  FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_48);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  *(code **)(param_1 + 0x30) = FUN_71000f70d0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::ProcessFailure";
  return 0;
}

