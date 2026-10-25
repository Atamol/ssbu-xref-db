// addr:      71000f3050
// offset:    0xf3050
// name:      FUN_71000f3050
// mangled:   
// signature: undefined FUN_71000f3050(void)


undefined8 FUN_71000f3050(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  long lVar7;
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    aiStack_50[0] = 0xc406;
    break;
  case 6:
    aiStack_50[0] = 0xa471;
    break;
  case 7:
    aiStack_50[0] = 0xc420;
    break;
  case 8:
    aiStack_50[0] = 0xc421;
    break;
  default:
    plVar6 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    uVar2 = (**(code **)(*plVar6 + 0x58))(plVar6);
    if ((uVar2 & 1) == 0) {
      return 5;
    }
    iVar1 = *(int *)(param_1 + 0x60);
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 5;
      }
      FUN_71000bce50(aiStack_50,(int *)(param_1 + 100));
      FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_50);
      *(char **)(param_1 + 0x40) = "NexMatchJoinSessionJob::LeaveMatchmakeSession";
      *(code **)(param_1 + 0x30) = FUN_71000f2880;
      *(undefined8 *)(param_1 + 0x38) = 0;
      return 5;
    }
    FUN_7100149270(DAT_71052adb38,*(int *)(param_1 + 0x114));
    FUN_710013f6f0(param_1,1);
    uVar3 = (**(code **)(*plVar6 + 0xf0))(plVar6);
    *(undefined8 *)(param_1 + 0x138) = uVar3;
    FUN_71000b40e0((int *)(param_1 + 0x60));
    lVar7 = *(long *)(DAT_71052adb38 + 8);
    lVar4 = FUN_71000ecfb0(lVar7,0);
    if (lVar4 != 0) {
      *(undefined1 *)(param_1 + 0x178) = 1;
    }
    lVar4 = FUN_71000ecfb0(lVar7,1);
    if (lVar4 != 0) {
      *(undefined1 *)(param_1 + 0x179) = 1;
    }
    lVar4 = FUN_71000ecfb0(lVar7,2);
    if (lVar4 != 0) {
      *(undefined1 *)(param_1 + 0x17a) = 1;
    }
    lVar4 = FUN_71000ecfb0(lVar7,3);
    if (lVar4 != 0) {
      *(undefined1 *)(param_1 + 0x17b) = 1;
    }
    lVar4 = DAT_71052ac580;
    plVar6 = FUN_71000bb680();
    *(long *)(param_1 + 0x150) = *(long *)(lVar4 + 0x30) + *plVar6 * 10000;
    pcVar5 = "NexMatchJoinSessionJob::WaitNotification";
    *(code **)(param_1 + 0x30) = FUN_71000f3270;
    *(undefined8 *)(param_1 + 0x38) = 0;
    goto LAB_71000f3174;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_38);
  FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_50);
  *(code **)(param_1 + 0x30) = FUN_710013e970;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar5 = "nex::NexMatchJoinSessionJob::CompleteFailure";
LAB_71000f3174:
  *(char **)(param_1 + 0x40) = pcVar5;
  return 0;
}

