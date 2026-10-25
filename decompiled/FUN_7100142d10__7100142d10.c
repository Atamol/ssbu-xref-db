// addr:      7100142d10
// offset:    0x142d10
// name:      FUN_7100142d10
// mangled:   
// signature: undefined FUN_7100142d10(void)


ulong FUN_7100142d10(long *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ErrorResultVariant *this;
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar5 = aiStack_80;
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar3) {
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
    bVar2 = FUN_71001919a0(DAT_71052adfc0);
    lVar1 = DAT_71052adb38;
    if (bVar2) {
      FUN_71001919d0(aiStack_40,DAT_71052adfc0);
      if (aiStack_40[0] == 0) {
        *(undefined4 *)(lVar1 + 0xd4) = 2;
        this = (ErrorResultVariant *)((ulong)aiStack_70 | 4);
        aiStack_70[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(this);
        auStack_28[0] = 0;
        nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_28);
        FUN_71000bce50(aiStack_60,aiStack_70);
        FUN_7100147420(lVar1,1,0,aiStack_60);
        bVar2 = FUN_7100147c20(lVar1);
        if (bVar2) {
          *(undefined1 *)(lVar1 + 0x15d) = 0;
          FUN_71001509c0(*(long *)(lVar1 + 0xb8));
          (**(code **)(*param_1 + 0x68))(param_1);
          uVar4 = 0;
          uVar7 = 0;
          uVar8 = 0;
          goto LAB_7100142e20;
        }
        (**(code **)(**(long **)(lVar1 + 8) + 0x28))();
        aiStack_70[0] = 0x10c08;
        nn::err::ErrorResultVariant::ErrorResultVariant(this);
        auStack_28[0] = 0;
        nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_28);
        FUN_71000bce50(aiStack_80,aiStack_70);
        pcVar6 = *(code **)(*param_1 + 0x78);
      }
      else {
        (**(code **)(**(long **)(lVar1 + 8) + 0x28))();
        FUN_71000bce50(aiStack_50,aiStack_40);
        pcVar6 = *(code **)(*param_1 + 0x78);
        piVar5 = aiStack_50;
      }
      uVar4 = (*pcVar6)(param_1,piVar5);
      uVar8 = uVar4 & 0xffffff00;
      uVar7 = uVar4 & 0xffff0000;
    }
    else {
      uVar7 = 0;
      uVar8 = 0;
      uVar4 = 5;
    }
    goto LAB_7100142e20;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
  aiStack_70[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)aiStack_70);
  FUN_71000bcf30((int *)((long)param_1 + 0x6c),aiStack_40);
  uVar4 = 0;
  param_1[6] = (long)FUN_71001429b0;
  param_1[7] = 0;
  uVar7 = 0;
  uVar8 = 0;
  param_1[8] = (long)"nn::pia::session::RandomMatchmakeJob::CompleteFailure";
LAB_7100142e20:
  return uVar7 | uVar4 & 0xff | uVar8 & 0xff00;
}

