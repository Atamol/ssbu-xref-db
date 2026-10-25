// addr:      710013edb0
// offset:    0x13edb0
// name:      FUN_710013edb0
// mangled:   
// signature: undefined FUN_710013edb0(void)


ulong FUN_710013edb0(long *param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  int aiStack_68 [4];
  int aiStack_58 [4];
  int aiStack_48 [4];
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar3) {
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
    bVar1 = FUN_71001929a0(DAT_71052adfc0);
    if (bVar1) {
      FUN_71001929d0(aiStack_38,DAT_71052adfc0);
      if (aiStack_38[0] == 0) {
        FUN_7100192e90(aiStack_48,DAT_71052adfc0);
        if (aiStack_48[0] == 0) {
          (**(code **)(*param_1 + 0x70))(param_1);
          uVar4 = 0;
          uVar7 = 0;
          uVar8 = 0;
          goto LAB_710013ef3c;
        }
        aiStack_48[0] = 0x6439;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_48 | 4));
        auStack_28[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_28);
        FUN_71000bcf30((int *)(param_1 + 0x24),aiStack_48);
        FUN_71000bce50(aiStack_68,(int *)(param_1 + 0x24));
        pcVar6 = *(code **)(*param_1 + 0x78);
        piVar5 = aiStack_68;
      }
      else {
        aiStack_48[0] = 0x6c05;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_48 | 4));
        auStack_28[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_28);
        if ((aiStack_38[0] == aiStack_48[0]) &&
           ((((*(char *)((long)param_1 + 0x11c) != '\0' ||
              (*(char *)((long)param_1 + 0x11d) != '\0')) ||
             (*(char *)((long)param_1 + 0x11a) != '\0')) ||
            ((*(char *)((long)param_1 + 0x11b) != '\0' || (*(char *)((long)param_1 + 0x11e) != '\0')
             ))))) {
          aiStack_48[0] = 0x6439;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)aiStack_48 | 4));
          auStack_28[0] = 0;
          nn::err::ErrorResultVariant::operator=
                    ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_28);
          FUN_71000bcf30(aiStack_38,aiStack_48);
        }
        FUN_71000bce50(aiStack_58,aiStack_38);
        pcVar6 = *(code **)(*param_1 + 0x78);
        piVar5 = aiStack_58;
      }
      uVar4 = (*pcVar6)(param_1,piVar5);
      uVar8 = uVar4 & 0xffffff00;
      uVar7 = uVar4 & 0xffff0000;
      goto LAB_710013ef3c;
    }
    if (((*(char *)((long)param_1 + 0x11c) == '\0') && (*(char *)((long)param_1 + 0x11d) == '\0'))
       && ((*(char *)((long)param_1 + 0x11a) == '\0' &&
           (((*(char *)((long)param_1 + 0x11b) == '\0' && (*(char *)((long)param_1 + 0x11e) == '\0')
             ) && (uVar4 = (**(code **)(*param_1 + 0x48))(param_1), (uVar4 & 1) == 0)))))) {
      bVar2 = FUN_71001921a0(DAT_71052adfc0);
      if ((((bVar2 & 1) != 0) &&
          ((bVar2 = FUN_7100193320(DAT_71052adfc0), (bVar2 & 1) != 0 ||
           (bVar1 = FUN_7100193740(DAT_71052adfc0), bVar1)))) &&
         (iVar3 = FUN_71001936d0(DAT_71052adfc0), iVar3 != 3)) {
        *(undefined1 *)((long)param_1 + 0x11d) = 1;
        goto LAB_710013ef98;
      }
    }
    else {
LAB_710013ef98:
      FUN_7100192a60(aiStack_38,DAT_71052adfc0);
    }
    uVar7 = 0;
    uVar8 = 0;
    uVar4 = 5;
    goto LAB_710013ef3c;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
  aiStack_48[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)aiStack_48);
  FUN_71000bcf30((int *)(param_1 + 0x24),aiStack_38);
  uVar4 = 0;
  param_1[6] = (long)FUN_710013e970;
  param_1[7] = 0;
  uVar7 = 0;
  uVar8 = 0;
  param_1[8] = (long)"nn::pia::session::JoinSessionJob::CompleteFailure";
LAB_710013ef3c:
  return uVar7 | uVar4 & 0xff | uVar8 & 0xff00;
}

