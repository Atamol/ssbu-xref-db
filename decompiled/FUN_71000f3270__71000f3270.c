// addr:      71000f3270
// offset:    0xf3270
// name:      FUN_71000f3270
// mangled:   
// signature: undefined FUN_71000f3270(void)


undefined8 FUN_71000f3270(long *param_1)

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
    uVar5 = (**(code **)(*param_1 + 0x48))(param_1);
    if ((uVar5 & 1) == 0) {
      if (*(ulong *)(DAT_71052ac580 + 0x30) <= (ulong)param_1[0x2a]) {
        plVar9 = *(long **)(DAT_71052adb38 + 8);
        plVar6 = (long *)FUN_71000ecfb0((long)plVar9,0);
        if (plVar6 == (long *)0x0) {
          uVar3 = 1;
          plVar6 = (long *)FUN_71000ecfb0((long)plVar9,1);
        }
        else {
          uVar1 = *(undefined4 *)((long)param_1 + 0x114);
          uVar7 = (**(code **)(*plVar6 + 0x18))();
          uVar3 = (**(code **)(*plVar9 + 0x60))(plVar9,uVar1,uVar7);
          plVar6 = (long *)FUN_71000ecfb0((long)plVar9,1);
        }
        if (plVar6 != (long *)0x0) {
          uVar1 = *(undefined4 *)((long)param_1 + 0x114);
          uVar7 = (**(code **)(*plVar6 + 0x18))();
          uVar4 = (**(code **)(*plVar9 + 0x60))(plVar9,uVar1,uVar7);
          uVar3 = uVar3 & uVar4;
        }
        plVar6 = (long *)FUN_71000ecfb0((long)plVar9,2);
        if (plVar6 != (long *)0x0) {
          uVar1 = *(undefined4 *)((long)param_1 + 0x114);
          uVar7 = (**(code **)(*plVar6 + 0x18))();
          uVar4 = (**(code **)(*plVar9 + 0x60))(plVar9,uVar1,uVar7);
          uVar3 = uVar3 & uVar4;
        }
        plVar6 = (long *)FUN_71000ecfb0((long)plVar9,3);
        if (plVar6 != (long *)0x0) {
          uVar1 = *(undefined4 *)((long)param_1 + 0x114);
          uVar7 = (**(code **)(*plVar6 + 0x18))();
          uVar4 = (**(code **)(*plVar9 + 0x60))(plVar9,uVar1,uVar7);
          uVar3 = uVar3 & uVar4;
        }
        if ((uVar3 & 1) != 0) {
          param_1[6] = (long)FUN_71000f3580;
          param_1[7] = 0;
          param_1[8] = (long)"NexMatchJoinSessionJob::GetStationLocation";
          lVar10 = *(long *)(DAT_71052ac580 + 0x30);
          lVar8 = param_1[0x2e];
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
    FUN_71000bcf30((int *)(param_1 + 0x24),aiStack_50);
    param_1[8] = (long)"NexMatchJoinSessionJob::LeaveMatchmakeSession";
    param_1[6] = (long)FUN_71000f2880;
    param_1[7] = 0;
    return 5;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_38);
  FUN_71000bcf30((int *)(param_1 + 0x24),aiStack_50);
  param_1[6] = (long)FUN_710013e970;
  param_1[7] = 0;
  param_1[8] = (long)"nex::NexMatchJoinSessionJob::CompleteFailure";
  return 0;
}

