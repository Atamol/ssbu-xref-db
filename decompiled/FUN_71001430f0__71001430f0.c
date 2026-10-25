// addr:      71001430f0
// offset:    0x1430f0
// name:      FUN_71001430f0
// mangled:   
// signature: undefined FUN_71001430f0(void)


ulong FUN_71001430f0(long *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
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
    plVar2 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,param_1 + 0x12);
    if ((uVar3 & 1) == 0) {
LAB_7100143244:
      uVar5 = 0;
      uVar6 = 0;
      uVar3 = 5;
      goto LAB_71001431a8;
    }
    if ((int)param_1[0x22] != 2) {
      if ((int)param_1[0x22] == 3) {
        (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
        FUN_71000bce50(aiStack_50,(int *)((long)param_1 + 0x114));
        uVar3 = (**(code **)(*param_1 + 0x80))(param_1,aiStack_50);
        uVar5 = uVar3 & 0xffff0000;
        uVar6 = uVar3 & 0xff00;
        uVar3 = uVar3 & 0xff;
        goto LAB_71001431a8;
      }
      goto LAB_7100143244;
    }
    lVar4 = FUN_71001602c0((long)(param_1 + 0x12));
    param_1[0x11] = lVar4;
    param_1[6] = (long)FUN_7100143290;
    param_1[7] = 0;
    pcVar7 = "RandomMatchmakeJob::JoinMesh";
    goto LAB_71001431a4;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
  FUN_71000bcf30((int *)((long)param_1 + 0x6c),aiStack_40);
  param_1[6] = (long)FUN_71001429b0;
  param_1[7] = 0;
  pcVar7 = "nn::pia::session::RandomMatchmakeJob::CompleteFailure";
LAB_71001431a4:
  uVar3 = 0;
  uVar6 = 0;
  uVar5 = 0;
  param_1[8] = (long)pcVar7;
LAB_71001431a8:
  return uVar5 | uVar3 | uVar6;
}

