// addr:      7100108ae0
// offset:    0x108ae0
// name:      NexMatchRandomMatchmakeJob_WaitNotification_step
// mangled:   
// signature: undefined NexMatchRandomMatchmakeJob_WaitNotification_step(void)


undefined8 NexMatchRandomMatchmakeJob_WaitNotification_step(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
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
    uVar5 = FUN_7100143730(param_1);
    if ((uVar5 & 1) == 0) {
      if (*(ulong *)(DAT_71052ac580 + 0x30) <= *(ulong *)(param_1 + 0x168)) {
        plVar9 = *(long **)(DAT_71052adb38 + 8);
        plVar6 = (long *)FUN_71000ecfb0((long)plVar9,0);
        if (plVar6 == (long *)0x0) {
          uVar3 = 1;
          plVar6 = (long *)FUN_71000ecfb0((long)plVar9,1);
        }
        else {
          uVar1 = *(undefined4 *)(param_1 + 100);
          uVar7 = (**(code **)(*plVar6 + 0x18))();
          uVar3 = (**(code **)(*plVar9 + 0x60))(plVar9,uVar1,uVar7);
          plVar6 = (long *)FUN_71000ecfb0((long)plVar9,1);
        }
        if (plVar6 != (long *)0x0) {
          uVar1 = *(undefined4 *)(param_1 + 100);
          uVar7 = (**(code **)(*plVar6 + 0x18))();
          uVar4 = (**(code **)(*plVar9 + 0x60))(plVar9,uVar1,uVar7);
          uVar3 = uVar3 & uVar4;
        }
        plVar6 = (long *)FUN_71000ecfb0((long)plVar9,2);
        if (plVar6 != (long *)0x0) {
          uVar1 = *(undefined4 *)(param_1 + 100);
          uVar7 = (**(code **)(*plVar6 + 0x18))();
          uVar4 = (**(code **)(*plVar9 + 0x60))(plVar9,uVar1,uVar7);
          uVar3 = uVar3 & uVar4;
        }
        plVar6 = (long *)FUN_71000ecfb0((long)plVar9,3);
        if (plVar6 != (long *)0x0) {
          uVar1 = *(undefined4 *)(param_1 + 100);
          uVar7 = (**(code **)(*plVar6 + 0x18))();
          uVar4 = (**(code **)(*plVar9 + 0x60))(plVar9,uVar1,uVar7);
          uVar3 = uVar3 & uVar4;
        }
        if ((uVar3 & 1) != 0) {
          *(code **)(param_1 + 0x30) = FUN_7100108de0;
          *(undefined8 *)(param_1 + 0x38) = 0;
          *(char **)(param_1 + 0x40) = "NexMatchRandomMatchmakeJob::StartNatSession";
          lVar10 = *(long *)(DAT_71052ac580 + 0x30);
          lVar8 = *(long *)(param_1 + 0x188);
          plVar6 = FUN_71000bb680();
          lVar11 = *plVar6;
          uVar5 = (**(code **)(*DAT_71052acd90 + 0x58))();
          if ((uVar5 & 1) == 0) {
            return 0;
          }
          DAT_71052ac638 = 0;
          if (lVar11 != 0) {
            DAT_71052ac638 = (undefined4)((lVar10 - lVar8) / lVar11);
          }
          return 0;
        }
        aiStack_50[0] = 0;
        aiStack_50[1] = 0x800;
        aiStack_50[2] = 0;
        (**(code **)(*plVar9 + 0x38))(plVar9,aiStack_50);
        return 5;
      }
      aiStack_50[0] = 0xac5a;
    }
    else {
      aiStack_50[0] = 0x6c05;
    }
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_38[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_38);
    FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_50);
    *(char **)(param_1 + 0x40) = "NexMatchRandomMatchmakeJob::LeaveMatchmakeSession";
    *(code **)(param_1 + 0x30) = FUN_71001082f0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    return 5;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_38);
  FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_50);
  *(code **)(param_1 + 0x30) = FUN_71001429b0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "nex::NexMatchRandomMatchmakeJob::CompleteFailure";
  return 0;
}

