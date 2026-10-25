// addr:      7100143290
// offset:    0x143290
// name:      FUN_7100143290
// mangled:   
// signature: undefined FUN_7100143290(void)


ulong FUN_7100143290(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
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
    FUN_71001928e0(aiStack_40,DAT_71052adfc0,(long)(param_1 + 0x12));
    if (aiStack_40[0] == 0) {
      FUN_7100193380(DAT_71052adfc0,1);
      param_1[7] = 0;
      param_1[6] = (long)FUN_7100143420;
      uVar4 = 0;
      uVar5 = 0;
      uVar3 = 5;
      param_1[8] = (long)"RandomMatchmakeJob::WaitJoinMesh";
      *(undefined4 *)(param_1 + 0xc) = 4;
    }
    else {
      uVar2 = FUN_7100146fd0();
      DAT_71052ac6d7 = (undefined1)uVar2;
      (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
      FUN_71000bce50(aiStack_50,aiStack_40);
      uVar3 = (**(code **)(*param_1 + 0x80))(param_1,aiStack_50);
      uVar5 = uVar3 & 0xffffff00;
      uVar4 = uVar3 & 0xffff0000;
    }
    goto LAB_71001433bc;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
  FUN_71000bcf30((int *)((long)param_1 + 0x6c),aiStack_40);
  uVar3 = 0;
  param_1[6] = (long)FUN_71001429b0;
  param_1[7] = 0;
  uVar4 = 0;
  uVar5 = 0;
  param_1[8] = (long)"nn::pia::session::RandomMatchmakeJob::CompleteFailure";
LAB_71001433bc:
  return uVar4 | uVar3 & 0xff | uVar5 & 0xff00;
}

