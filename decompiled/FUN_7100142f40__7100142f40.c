// addr:      7100142f40
// offset:    0x142f40
// name:      FUN_7100142f40
// mangled:   
// signature: undefined FUN_7100142f40(void)


ulong FUN_7100142f40(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  int aiStack_d0 [4];
  int aiStack_c0 [4];
  int aiStack_b0 [32];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
    aiStack_b0[0] = 0xc406;
    break;
  case 6:
    aiStack_b0[0] = 0xa471;
    break;
  case 7:
    aiStack_b0[0] = 0xc420;
    break;
  case 8:
    aiStack_b0[0] = 0xc421;
    break;
  default:
    plVar4 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    uVar1 = *(undefined4 *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180);
    FUN_710015fd60((undefined8 *)aiStack_b0);
    FUN_710015fea0((long)(param_1 + 0x12),(long)aiStack_b0);
    (**(code **)(*plVar4 + 0xa0))(aiStack_c0,plVar4,param_1 + 0x22,uVar1);
    if (aiStack_c0[0] == 0) {
      param_1[7] = 0;
      uVar5 = 0;
      uVar6 = 0;
      uVar3 = 5;
      param_1[8] = (long)"RandomMatchmakeJob::WaitGetStationConnection";
      param_1[6] = (long)FUN_71001430f0;
    }
    else {
      (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
      FUN_71000bce50(aiStack_d0,aiStack_c0);
      uVar3 = (**(code **)(*param_1 + 0x80))(param_1,aiStack_d0);
      uVar6 = uVar3 & 0xffffff00;
      uVar5 = uVar3 & 0xffff0000;
    }
    FUN_710015ff20((undefined8 *)aiStack_b0);
    goto LAB_710014308c;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_b0 | 4));
  aiStack_c0[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_b0 | 4),(Result *)aiStack_c0);
  FUN_71000bcf30((int *)((long)param_1 + 0x6c),aiStack_b0);
  uVar3 = 0;
  param_1[6] = (long)FUN_71001429b0;
  param_1[7] = 0;
  uVar5 = 0;
  uVar6 = 0;
  param_1[8] = (long)"nn::pia::session::RandomMatchmakeJob::CompleteFailure";
LAB_710014308c:
  return uVar5 | uVar3 & 0xff | uVar6 & 0xff00;
}

