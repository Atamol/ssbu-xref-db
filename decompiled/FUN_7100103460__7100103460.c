// addr:      7100103460
// offset:    0x103460
// name:      FUN_7100103460
// mangled:   
// signature: undefined FUN_7100103460(void)


undefined8 FUN_7100103460(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  code *pcVar5;
  char *pcVar6;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  lVar1 = DAT_71052adb38;
  switch(iVar2) {
  case 5:
    aiStack_40[0] = 0xc406;
    break;
  case 6:
    aiStack_40[0] = 0xa471;
    break;
  case 7:
    aiStack_40[0] = 0xc420;
    break;
  case 8:
    aiStack_40[0] = 0xc421;
    break;
  default:
    if ((((*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x218)) &&
         (2 < *(int *)(param_1 + 0x230) - 0xeU)) &&
        (uVar3 = FUN_71000ee650(*(long *)(DAT_71052adb38 + 8),
                                *(int *)(DAT_71052adb38 +
                                         (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180)),
        2 < (uVar3 & 0xffff))) &&
       (uVar4 = (**(code **)(**(long **)(lVar1 + (ulong)*(byte *)(lVar1 + 0x162) * 8 + 0x168) + 0xe0
                            ))(), (uVar4 & 1) != 0)) {
      return 5;
    }
    pcVar5 = FUN_7100102fc0;
    pcVar6 = "NexMatchJointSessionJob::StartLeaveCurrentMatchmakeSession";
    goto LAB_7100103540;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
  FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_40);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  pcVar5 = FUN_71000f70d0;
  pcVar6 = "NexMatchJointSessionJob::ProcessFailure";
LAB_7100103540:
  *(code **)(param_1 + 0x30) = pcVar5;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar6;
  return 0;
}

