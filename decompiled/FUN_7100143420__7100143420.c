// addr:      7100143420
// offset:    0x143420
// name:      FUN_7100143420
// mangled:   
// signature: undefined FUN_7100143420(void)


ulong FUN_7100143420(long *param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar5 = aiStack_70;
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
    bVar1 = FUN_71001929a0(DAT_71052adfc0);
    if (bVar1) {
      FUN_71001929d0(aiStack_40,DAT_71052adfc0);
      if (aiStack_40[0] == 0) {
        FUN_7100192e90(aiStack_50,DAT_71052adfc0);
        if (aiStack_50[0] == 0) {
          (**(code **)(*param_1 + 0x70))(param_1);
          uVar4 = 0;
          uVar7 = 0;
          uVar8 = 0;
          goto LAB_71001435c4;
        }
        aiStack_50[0] = 0x6439;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_50 | 4));
        auStack_28[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
        FUN_71000bcf30((int *)((long)param_1 + 0x6c),aiStack_50);
        (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
        FUN_71000bce50(aiStack_70,(int *)((long)param_1 + 0x6c));
        pcVar6 = *(code **)(*param_1 + 0x80);
      }
      else {
        aiStack_50[0] = 0x6c05;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_50 | 4));
        auStack_28[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
        if ((aiStack_40[0] == aiStack_50[0]) &&
           ((((*(char *)((long)param_1 + 0x7f) != '\0' || ((char)param_1[0x10] != '\0')) ||
             (*(char *)((long)param_1 + 0x7d) != '\0')) ||
            ((*(char *)((long)param_1 + 0x7e) != '\0' || (*(char *)((long)param_1 + 0x81) != '\0')))
            ))) {
          aiStack_50[0] = 0x6439;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)aiStack_50 | 4));
          auStack_28[0] = 0;
          nn::err::ErrorResultVariant::operator=
                    ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
          FUN_71000bcf30(aiStack_40,aiStack_50);
        }
        (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
        FUN_71000bce50(aiStack_60,aiStack_40);
        pcVar6 = *(code **)(*param_1 + 0x80);
        piVar5 = aiStack_60;
      }
      uVar4 = (*pcVar6)(param_1,piVar5);
      uVar8 = uVar4 & 0xffffff00;
      uVar7 = uVar4 & 0xffff0000;
      goto LAB_71001435c4;
    }
    if ((((*(char *)((long)param_1 + 0x7f) == '\0') && ((char)param_1[0x10] == '\0')) &&
        ((*(char *)((long)param_1 + 0x7d) == '\0' &&
         ((*(char *)((long)param_1 + 0x7e) == '\0' && (*(char *)((long)param_1 + 0x81) == '\0'))))))
       && ((param_1[0xb] == 0 || (*(char *)(param_1[0xb] + 0x28) == '\0')))) {
      bVar2 = FUN_71001921a0(DAT_71052adfc0);
      if (((bVar2 & 1) != 0) &&
         (((bVar2 = FUN_7100193320(DAT_71052adfc0), (bVar2 & 1) != 0 ||
           (bVar1 = FUN_7100193740(DAT_71052adfc0), bVar1)) &&
          (iVar3 = FUN_71001936d0(DAT_71052adfc0), iVar3 != 3)))) {
        *(undefined1 *)(param_1 + 0x10) = 1;
        goto LAB_7100143610;
      }
    }
    else {
LAB_7100143610:
      FUN_7100192a60(aiStack_40,DAT_71052adfc0);
    }
    uVar7 = 0;
    uVar8 = 0;
    uVar4 = 5;
    goto LAB_71001435c4;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
  aiStack_50[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)aiStack_50);
  FUN_71000bcf30((int *)((long)param_1 + 0x6c),aiStack_40);
  uVar4 = 0;
  param_1[6] = (long)FUN_71001429b0;
  param_1[7] = 0;
  uVar7 = 0;
  uVar8 = 0;
  param_1[8] = (long)"nn::pia::session::RandomMatchmakeJob::CompleteFailure";
LAB_71001435c4:
  return uVar7 | uVar4 & 0xff | uVar8 & 0xff00;
}

