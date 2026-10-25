// addr:      7100108090
// offset:    0x108090
// name:      FUN_7100108090
// mangled:   
// signature: undefined FUN_7100108090(void)


undefined8 FUN_7100108090(long param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  char *pcVar8;
  long lVar9;
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
    uVar4 = (**(code **)(**(long **)(param_1 + 0x148) + 0x20))
                      (*(long **)(param_1 + 0x148),(int *)(param_1 + 100),(char *)(param_1 + 0x68));
    if ((uVar4 & 1) == 0) {
      return 5;
    }
    FUN_71000d8f90(*(long *)(param_1 + 0x148));
    if (*(int *)(param_1 + 0x110) != 2) {
      if (*(int *)(param_1 + 0x110) != 3) {
        return 5;
      }
      FUN_71000bce50(aiStack_48,(int *)(param_1 + 0x114));
      FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_48);
      *(char **)(param_1 + 0x40) = "NexMatchRandomMatchmakeJob::LeaveMatchmakeSession";
      *(code **)(param_1 + 0x30) = FUN_71001082f0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      return 5;
    }
    FUN_7100149270(DAT_71052adb38,*(int *)(param_1 + 100));
    if (*(char *)(param_1 + 0x68) == '\0') {
      bVar1 = FUN_71000eb6b0(*(long *)(param_1 + 0x148));
      if ((bVar1 & 1) != 0) {
        uVar3 = FUN_71000eb6c0(*(long *)(param_1 + 0x148));
        lVar6 = DAT_71052adb38;
        *(undefined4 *)(DAT_71052adb38 + 0x20c) = uVar3;
        *(undefined1 *)(lVar6 + 0x210) = 1;
      }
    }
    else {
      uVar3 = 1;
      if (*(char *)(param_1 + 0x185) == '\0') {
        uVar3 = 2;
      }
      FUN_7100149240(DAT_71052adb38,uVar3);
    }
    FUN_7100143c60(param_1,1);
    uVar5 = (**(code **)(**(long **)(param_1 + 0x148) + 0xf0))();
    *(undefined8 *)(param_1 + 0x150) = uVar5;
    lVar9 = *(long *)(DAT_71052adb38 + 8);
    lVar6 = FUN_71000ecfb0(lVar9,0);
    if (lVar6 != 0) {
      *(undefined1 *)(param_1 + 400) = 1;
    }
    lVar6 = FUN_71000ecfb0(lVar9,1);
    if (lVar6 != 0) {
      *(undefined1 *)(param_1 + 0x191) = 1;
    }
    lVar6 = FUN_71000ecfb0(lVar9,2);
    if (lVar6 != 0) {
      *(undefined1 *)(param_1 + 0x192) = 1;
    }
    lVar6 = FUN_71000ecfb0(lVar9,3);
    if (lVar6 != 0) {
      *(undefined1 *)(param_1 + 0x193) = 1;
    }
    lVar6 = DAT_71052ac580;
    plVar7 = FUN_71000bb680();
    *(long *)(param_1 + 0x168) = *(long *)(lVar6 + 0x30) + *plVar7 * 10000;
    pcVar8 = "NexMatchRandomMatchmakeJob::WaitNotification";
    *(code **)(param_1 + 0x30) = NexMatchRandomMatchmakeJob_WaitNotification_step;
    *(undefined8 *)(param_1 + 0x38) = 0;
    goto LAB_710010813c;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
  auStack_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_38);
  FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_48);
  *(code **)(param_1 + 0x30) = FUN_71001429b0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar8 = "nex::NexMatchRandomMatchmakeJob::CompleteFailure";
LAB_710010813c:
  *(char **)(param_1 + 0x40) = pcVar8;
  return 0;
}

