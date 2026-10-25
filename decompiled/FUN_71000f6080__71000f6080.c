// addr:      71000f6080
// offset:    0xf6080
// name:      FUN_71000f6080
// mangled:   
// signature: undefined FUN_71000f6080(void)


undefined8 FUN_71000f6080(long *param_1)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar3 = aiStack_90;
  FUN_7100192e90(aiStack_40,DAT_71052adfc0);
  if (aiStack_40[0] == 0) {
    iVar2 = FUN_7100146ba0(DAT_71052adb38);
    if (iVar2 == 5) {
      puVar6 = (undefined4 *)param_1[0xb];
      if (puVar6 == (undefined4 *)0x0) goto LAB_71000f6258;
      aiStack_40[0] = 0xc406;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
      FUN_71000bce50(aiStack_60,aiStack_40);
      piVar3 = aiStack_60;
    }
    else {
      iVar2 = FUN_7100146ba0(DAT_71052adb38);
      if (iVar2 == 6) {
        puVar6 = (undefined4 *)param_1[0xb];
        if (puVar6 == (undefined4 *)0x0) goto LAB_71000f6258;
        aiStack_40[0] = 0xa471;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_40 | 4));
        auStack_28[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
        FUN_71000bce50(aiStack_70,aiStack_40);
        piVar3 = aiStack_70;
      }
      else {
        iVar2 = FUN_7100146ba0(DAT_71052adb38);
        if (iVar2 == 7) {
          puVar6 = (undefined4 *)param_1[0xb];
          if (puVar6 == (undefined4 *)0x0) goto LAB_71000f6258;
          aiStack_40[0] = 0xc420;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)aiStack_40 | 4));
          auStack_28[0] = 0;
          nn::err::ErrorResultVariant::operator=
                    ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
          FUN_71000bce50(aiStack_80,aiStack_40);
          piVar3 = aiStack_80;
        }
        else {
          iVar2 = FUN_7100146ba0(DAT_71052adb38);
          if (iVar2 != 8) {
            FUN_710013fd20((long)param_1);
            *(undefined1 *)(DAT_71052adb38 + 0x15d) = 1;
            FUN_7100193380(DAT_71052adfc0,1);
            lVar1 = DAT_71052ac580;
            param_1[0x39] = *(long *)(DAT_71052ac580 + 0x30);
            param_1[0x3b] = *(long *)(lVar1 + 0x30);
            iVar2 = FUN_7100146ba0(DAT_71052adb38);
            switch(iVar2) {
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
              FUN_7100192e90(aiStack_40,DAT_71052adfc0);
              if ((aiStack_40[0] == 0) && (iVar2 = FUN_7100146ba0(DAT_71052adb38), iVar2 != 4)) {
                if (*(char *)((long)param_1 + 0xfb) == '\0') {
                  if (*(char *)((long)param_1 + 0x264) != '\0') {
                    *(undefined1 *)(param_1 + 0x26) = 0xf;
                    aiStack_40[0] = 0x10c08;
                    nn::err::ErrorResultVariant::ErrorResultVariant
                              ((ErrorResultVariant *)((ulong)aiStack_40 | 4));
                    auStack_28[0] = 0;
                    nn::err::ErrorResultVariant::operator=
                              ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
                    FUN_71000bcf30((int *)(param_1 + 0x44),aiStack_40);
                    FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                             (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8
                                            + 0x168));
                    goto LAB_71000f6354;
                  }
                  param_1[6] = (long)FUN_71000f74b0;
                  param_1[7] = 0;
                  pcVar4 = "NexMatchJointSessionJob::CloseMatchmakeSession";
                  goto LAB_71000f63fc;
                }
                FUN_71000bcf30((int *)(param_1 + 0x44),(int *)(param_1 + 0x20));
                uVar5 = 6;
              }
              else {
                aiStack_40[0] = 0x6c59;
                nn::err::ErrorResultVariant::ErrorResultVariant
                          ((ErrorResultVariant *)((ulong)aiStack_40 | 4));
                auStack_28[0] = 0;
                nn::err::ErrorResultVariant::operator=
                          ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
                FUN_71000bcf30((int *)(param_1 + 0x44),aiStack_40);
                uVar5 = 4;
              }
              *(undefined1 *)(param_1 + 0x26) = uVar5;
LAB_71000f6354:
              param_1[8] = (long)"NexMatchJointSessionJob::StartLeaveMesh";
              param_1[6] = (long)FUN_71000f7210;
              param_1[7] = 0;
              return 5;
            }
            *(undefined1 *)((long)param_1 + 0xfa) = 1;
            *(undefined1 *)(param_1 + 0x26) = 3;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)aiStack_40 | 4));
            auStack_28[0] = 0;
            nn::err::ErrorResultVariant::operator=
                      ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
            FUN_71000bcf30((int *)(param_1 + 0x44),aiStack_40);
            (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
            param_1[6] = (long)FUN_71000f70d0;
            param_1[7] = 0;
            pcVar4 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000f63fc:
            param_1[8] = (long)pcVar4;
            return 0;
          }
          puVar6 = (undefined4 *)param_1[0xb];
          if (puVar6 == (undefined4 *)0x0) goto LAB_71000f6258;
          aiStack_40[0] = 0xc421;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)aiStack_40 | 4));
          auStack_28[0] = 0;
          nn::err::ErrorResultVariant::operator=
                    ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
          FUN_71000bce50(aiStack_90,aiStack_40);
        }
      }
    }
  }
  else {
    puVar6 = (undefined4 *)param_1[0xb];
    if (puVar6 == (undefined4 *)0x0) goto LAB_71000f6258;
    aiStack_40[0] = 0x8c56;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_50,aiStack_40);
    piVar3 = aiStack_50;
  }
  FUN_71000b41f0(puVar6,piVar3);
  param_1[0xb] = 0;
LAB_71000f6258:
  FUN_7100140910(param_1);
  return 1;
}

