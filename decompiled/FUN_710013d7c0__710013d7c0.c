// addr:      710013d7c0
// offset:    0x13d7c0
// name:      FUN_710013d7c0
// mangled:   
// signature: undefined FUN_710013d7c0(void)


ulong FUN_710013d7c0(long *param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  ErrorResultVariant *this;
  int aiStack_98 [4];
  int aiStack_88 [4];
  int aiStack_78 [4];
  int aiStack_68 [4];
  int aiStack_58 [4];
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  lVar1 = DAT_71052adb38;
  switch(iVar4) {
  case 5:
    aiStack_48[0] = 0xc406;
    break;
  case 6:
    aiStack_48[0] = 0xa471;
    break;
  case 7:
    aiStack_48[0] = 0xc420;
    break;
  case 8:
    aiStack_48[0] = 0xc421;
    break;
  default:
    if ((int)param_1[0xc] - 2U < 3) {
      if ((int)param_1[0xc] == 3) {
        (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
        FUN_71000bce50(aiStack_58,(int *)((long)param_1 + 100));
        pcVar7 = *(code **)(*param_1 + 0x48);
        piVar6 = aiStack_58;
      }
      else {
        FUN_71000bce50(aiStack_48,(int *)((long)param_1 + 100));
        lVar2 = DAT_71052adb38;
        if (aiStack_48[0] == 0) {
          *(undefined4 *)(DAT_71052adb38 + 0xd4) = 2;
          this = (ErrorResultVariant *)((ulong)aiStack_88 | 4);
          aiStack_88[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant(this);
          auStack_38[0] = 0;
          nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_38);
          FUN_71000bce50(aiStack_78,aiStack_88);
          FUN_7100147420(lVar2,1,0,aiStack_78);
          bVar3 = FUN_7100147c20(lVar1);
          if (bVar3) {
            *(undefined1 *)(lVar1 + 0x15d) = 0;
            FUN_71001509c0(*(long *)(lVar1 + 0xb8));
            (**(code **)(*param_1 + 0x40))(param_1);
            uVar5 = 0;
            uVar9 = 0;
            uVar8 = 0;
            goto LAB_710013d8c0;
          }
          (**(code **)(**(long **)(lVar1 + 8) + 0x28))();
          aiStack_88[0] = 0x10c08;
          nn::err::ErrorResultVariant::ErrorResultVariant(this);
          auStack_38[0] = 0;
          nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_38);
          FUN_71000bce50(aiStack_98,aiStack_88);
          pcVar7 = *(code **)(*param_1 + 0x48);
          piVar6 = aiStack_98;
        }
        else {
          (**(code **)(**(long **)(lVar1 + 8) + 0x28))();
          FUN_71000bce50(aiStack_68,aiStack_48);
          pcVar7 = *(code **)(*param_1 + 0x48);
          piVar6 = aiStack_68;
        }
      }
      uVar5 = (*pcVar7)(param_1,piVar6);
      uVar8 = uVar5 & 0xffffff00;
      uVar9 = uVar5 & 0xffff0000;
    }
    else {
      uVar9 = 0;
      uVar8 = 0;
      uVar5 = 5;
    }
    goto LAB_710013d8c0;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
  aiStack_88[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)aiStack_88);
  FUN_71000bcf30((int *)(param_1 + 0x12),aiStack_48);
  uVar5 = 0;
  param_1[6] = (long)FUN_710013d590;
  param_1[7] = 0;
  uVar9 = 0;
  uVar8 = 0;
  param_1[8] = (long)"nn::pia::session::CreateSessionJob::CompleteFailure";
LAB_710013d8c0:
  return uVar9 | uVar5 & 0xff | uVar8 & 0xff00;
}

