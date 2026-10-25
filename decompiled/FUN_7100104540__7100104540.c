// addr:      7100104540
// offset:    0x104540
// name:      FUN_7100104540
// mangled:   
// signature: undefined FUN_7100104540(void)


undefined8 FUN_7100104540(long param_1)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  long *plVar10;
  uint uVar11;
  undefined **ppuStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  char *pcStack_58;
  
  lVar2 = DAT_71052adb38;
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar4) {
  case 5:
  case 7:
  case 8:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    *(code **)(param_1 + 0x30) = FUN_71001411a0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar9 = "nex::NexMatchLeaveSessionJob::SendMonitoringData";
    break;
  case 6:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    *(code **)(param_1 + 0x30) = FUN_7100141230;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar9 = "nex::NexMatchLeaveSessionJob::LeaveMesh";
    break;
  default:
    plVar10 = *(long **)(DAT_71052adb38 + 8);
    if (plVar10 != (long *)0x0) {
      piVar1 = (int *)(param_1 + 0x60);
      plVar6 = (long *)FUN_71000ecfb0((long)plVar10,1);
      if (plVar6 != (long *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0x18))();
        iVar4 = FUN_71000ee2c0((long)plVar10);
        if (iVar4 != 0) {
          uVar11 = 0;
          do {
            iVar4 = FUN_71000ee290((long)plVar10,uVar11);
            if (((iVar4 != 0) &&
                (uVar8 = (**(code **)(*plVar10 + 0x60))(plVar10,iVar4,lVar7), (uVar8 & 1) != 0)) &&
               (bVar3 = FUN_71000ee7f0((long)plVar10,iVar4,lVar7), !bVar3)) {
              FUN_71000ee730((long)plVar10,iVar4,lVar7);
              FUN_71000e08e0((int *)&ppuStack_70,
                             *(long *)(lVar2 + (ulong)*(byte *)(lVar2 + 0x162) * 8 + 0x168),piVar1,
                             iVar4,lVar7);
              if ((int)ppuStack_70 == 0) goto LAB_71001048a0;
              break;
            }
            uVar11 = uVar11 + 1;
            uVar5 = FUN_71000ee2c0((long)plVar10);
          } while (uVar11 < uVar5);
        }
      }
      plVar6 = (long *)FUN_71000ecfb0((long)plVar10,2);
      if (plVar6 != (long *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0x18))();
        iVar4 = FUN_71000ee2c0((long)plVar10);
        if (iVar4 != 0) {
          uVar11 = 0;
          do {
            iVar4 = FUN_71000ee290((long)plVar10,uVar11);
            if (((iVar4 != 0) &&
                (uVar8 = (**(code **)(*plVar10 + 0x60))(plVar10,iVar4,lVar7), (uVar8 & 1) != 0)) &&
               (bVar3 = FUN_71000ee7f0((long)plVar10,iVar4,lVar7), !bVar3)) {
              FUN_71000ee730((long)plVar10,iVar4,lVar7);
              FUN_71000e08e0((int *)&ppuStack_70,
                             *(long *)(lVar2 + (ulong)*(byte *)(lVar2 + 0x162) * 8 + 0x168),piVar1,
                             iVar4,lVar7);
              if ((int)ppuStack_70 == 0) goto LAB_71001048a0;
              break;
            }
            uVar11 = uVar11 + 1;
            uVar5 = FUN_71000ee2c0((long)plVar10);
          } while (uVar11 < uVar5);
        }
      }
      plVar6 = (long *)FUN_71000ecfb0((long)plVar10,3);
      if (plVar6 != (long *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0x18))();
        iVar4 = FUN_71000ee2c0((long)plVar10);
        if (iVar4 != 0) {
          uVar11 = 0;
          do {
            iVar4 = FUN_71000ee290((long)plVar10,uVar11);
            if ((iVar4 != 0) &&
               (uVar8 = (**(code **)(*plVar10 + 0x60))(plVar10,iVar4,lVar7), (uVar8 & 1) != 0)) {
              bVar3 = FUN_71000ee7f0((long)plVar10,iVar4,lVar7);
              if (!bVar3) {
                FUN_71000ee730((long)plVar10,iVar4,lVar7);
                FUN_71000e08e0((int *)&ppuStack_70,
                               *(long *)(lVar2 + (ulong)*(byte *)(lVar2 + 0x162) * 8 + 0x168),piVar1
                               ,iVar4,lVar7);
                if ((int)ppuStack_70 == 0) {
LAB_71001048a0:
                  *(char **)(param_1 + 0x40) =
                       "NexMatchLeaveSessionJob::WaitLeaveMatchmakeSessionCompanions";
                  *(code **)(param_1 + 0x30) = FUN_71001048c0;
                  *(undefined8 *)(param_1 + 0x38) = 0;
                  return 5;
                }
                break;
              }
            }
            uVar11 = uVar11 + 1;
            uVar5 = FUN_71000ee2c0((long)plVar10);
          } while (uVar11 < uVar5);
        }
      }
    }
    ppuStack_70 = &PTR_FUN_7104f4a708;
    pcStack_68 = FUN_71001417f0;
    uStack_60 = 0;
    pcStack_58 = "LeaveSessionJob::LeaveCurrentMatchmakeSession";
    FUN_71001049c0(param_1,(long)&ppuStack_70);
    return 0;
  }
  *(char **)(param_1 + 0x40) = pcVar9;
  return 0;
}

