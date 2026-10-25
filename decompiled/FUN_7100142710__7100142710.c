// addr:      7100142710
// offset:    0x142710
// name:      FUN_7100142710
// mangled:   
// signature: undefined FUN_7100142710(void)


ulong FUN_7100142710(long *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar5 = aiStack_90;
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  lVar1 = DAT_71052adb38;
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
    if (*(char *)((long)param_1 + 0x7f) == '\0') {
      if (((char)param_1[0x10] == '\0') || (*(char *)((long)param_1 + 0x82) != '\0')) {
        *(undefined2 *)((long)param_1 + 0x7d) = 0;
        *(undefined2 *)(param_1 + 0x10) = 0;
        (**(code **)(**(long **)(lVar1 + 8) + 0x20))
                  (aiStack_40,*(long **)(lVar1 + 8),
                   *(undefined8 *)(lVar1 + (ulong)*(byte *)(lVar1 + 0x162) * 8 + 0x168));
        if (aiStack_40[0] == 0) {
          *(undefined1 *)(lVar1 + 0x15d) = 1;
          (**(code **)(*param_1 + 0x60))(param_1);
          uVar4 = 0;
          uVar8 = 0;
          uVar7 = 0;
          goto LAB_7100142830;
        }
        lVar2 = param_1[0xd];
        (**(code **)(**(long **)(lVar1 + 8) + 0x28))();
        if ((char)lVar2 == '\0') {
          FUN_71000bce50(aiStack_90,aiStack_40);
          pcVar6 = *(code **)(*param_1 + 0x80);
        }
        else {
          FUN_71000bce50(aiStack_80,aiStack_40);
          pcVar6 = *(code **)(*param_1 + 0x78);
          piVar5 = aiStack_80;
        }
      }
      else {
        (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
        aiStack_40[0] = 0x6439;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_40 | 4));
        auStack_28[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
        FUN_71000bce50(aiStack_70,aiStack_40);
        pcVar6 = *(code **)(*param_1 + 0x80);
        piVar5 = aiStack_70;
      }
    }
    else {
      lVar1 = param_1[0xd];
      (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
      if ((char)lVar1 == '\0') {
        aiStack_40[0] = 0x6439;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_40 | 4));
        auStack_28[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
        FUN_71000bce50(aiStack_60,aiStack_40);
        pcVar6 = *(code **)(*param_1 + 0x80);
        piVar5 = aiStack_60;
      }
      else {
        aiStack_40[0] = 0x6439;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_40 | 4));
        auStack_28[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
        FUN_71000bce50(aiStack_50,aiStack_40);
        pcVar6 = *(code **)(*param_1 + 0x78);
        piVar5 = aiStack_50;
      }
    }
    uVar4 = (*pcVar6)(param_1,piVar5);
    uVar7 = uVar4 & 0xffffff00;
    uVar8 = uVar4 & 0xffff0000;
    goto LAB_7100142830;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
  FUN_71000bcf30((int *)((long)param_1 + 0x6c),aiStack_40);
  uVar4 = 0;
  param_1[6] = (long)FUN_71001429b0;
  param_1[7] = 0;
  uVar8 = 0;
  uVar7 = 0;
  param_1[8] = (long)"nn::pia::session::RandomMatchmakeJob::CompleteFailure";
LAB_7100142830:
  return uVar8 | uVar4 & 0xff | uVar7 & 0xff00;
}

