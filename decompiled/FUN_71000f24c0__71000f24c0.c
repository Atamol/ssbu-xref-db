// addr:      71000f24c0
// offset:    0xf24c0
// name:      FUN_71000f24c0
// mangled:   
// signature: undefined FUN_71000f24c0(void)


undefined8 FUN_71000f24c0(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  char *pcVar5;
  code *pcVar6;
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
    uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
    if ((uVar2 & 1) != 0) {
      aiStack_38[0] = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
      FUN_71000bcf30((int *)(param_1 + 0x24),aiStack_38);
      param_1[8] = (long)"NexMatchJoinSessionJob::MeshCleanup";
      param_1[6] = (long)FUN_710013f360;
      param_1[7] = 0;
      return 5;
    }
    param_1[0x27] = 0;
    param_1[0x2e] = *(long *)(DAT_71052ac580 + 0x30);
    FUN_71000ede30(*(long *)(DAT_71052adb38 + 8));
    *(undefined4 *)(param_1 + 0x2f) = 0;
    plVar3 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    (**(code **)(*plVar3 + 0x50))
              (aiStack_38,plVar3,param_1 + 0xc,*(undefined4 *)((long)param_1 + 0x114));
    if (aiStack_38[0] == 0) {
      *(undefined4 *)(param_1 + 0x22) = 2;
      pcVar6 = FUN_71000f3050;
      pcVar5 = "NexMatchJoinSessionJob::WaitJoinMatchmake";
    }
    else {
      FUN_71000bcf30((int *)(param_1 + 0x24),aiStack_38);
      pcVar6 = FUN_71000f2880;
      pcVar5 = "NexMatchJoinSessionJob::LeaveMatchmakeSession";
    }
    uVar4 = 5;
    param_1[6] = (long)pcVar6;
    param_1[7] = 0;
    goto LAB_71000f25dc;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
  FUN_71000bcf30((int *)(param_1 + 0x24),aiStack_38);
  uVar4 = 0;
  param_1[6] = (long)FUN_710013e970;
  param_1[7] = 0;
  pcVar5 = "nex::NexMatchJoinSessionJob::CompleteFailure";
LAB_71000f25dc:
  param_1[8] = (long)pcVar5;
  return uVar4;
}

