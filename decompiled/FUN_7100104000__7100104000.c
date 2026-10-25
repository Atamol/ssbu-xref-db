// addr:      7100104000
// offset:    0x104000
// name:      FUN_7100104000
// mangled:   
// signature: undefined FUN_7100104000(void)


undefined8 FUN_7100104000(long param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  byte bVar5;
  code *pcVar6;
  char *pcVar7;
  ulong uVar8;
  int aiStack_50 [4];
  
  lVar3 = DAT_71052adb38;
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar4) {
  case 5:
  case 7:
  case 8:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    *(code **)(param_1 + 0x30) = FUN_71001411a0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar7 = "nex::NexMatchLeaveSessionJob::SendMonitoringData";
    break;
  case 6:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    *(code **)(param_1 + 0x30) = FUN_7100141230;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar7 = "nex::NexMatchLeaveSessionJob::LeaveMesh";
    break;
  default:
    bVar5 = *(byte *)(param_1 + 0x128);
    if (bVar5 != 0) {
      uVar8 = 0;
      lVar1 = param_1 + 0x129;
      do {
        while( true ) {
          iVar4 = *(int *)(lVar1 + uVar8 * 4 + -0x81);
          bVar2 = *(byte *)(lVar3 + 0x162);
          if ((iVar4 != *(int *)(lVar3 + (ulong)bVar2 * 4 + 0x180)) &&
             (*(char *)(lVar1 + uVar8) == '\0')) break;
          uVar8 = uVar8 + 1;
          if (bVar5 <= uVar8) goto LAB_71001040fc;
        }
        *(undefined1 *)(lVar1 + uVar8) = 1;
        FUN_71000da870(aiStack_50,*(long *)(lVar3 + (ulong)bVar2 * 8 + 0x168),
                       (int *)(param_1 + 0x60),iVar4);
        if (aiStack_50[0] == 0) {
          pcVar6 = FUN_7100104180;
          pcVar7 = "NexMatchLeaveSessionJob::WaitGetMatchmakeSessionOwners";
          goto LAB_710010410c;
        }
        bVar5 = *(byte *)(param_1 + 0x128);
        uVar8 = uVar8 + 1;
      } while (uVar8 < bVar5);
    }
LAB_71001040fc:
    pcVar6 = FUN_7100141230;
    pcVar7 = "LeaveSessionJob::LeaveMesh";
LAB_710010410c:
    *(code **)(param_1 + 0x30) = pcVar6;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = pcVar7;
    return 5;
  }
  *(char **)(param_1 + 0x40) = pcVar7;
  return 0;
}

