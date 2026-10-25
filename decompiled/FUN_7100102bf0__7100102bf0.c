// addr:      7100102bf0
// offset:    0x102bf0
// name:      FUN_7100102bf0
// mangled:   
// signature: undefined FUN_7100102bf0(void)


undefined8 FUN_7100102bf0(long *param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  int aiStack_58 [4];
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
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
    FUN_7100192e90(aiStack_48,DAT_71052adfc0);
    if ((aiStack_48[0] == 0) && (iVar1 = FUN_7100146ba0(DAT_71052adb38), iVar1 != 4)) {
      if (*(char *)((long)param_1 + 0xfb) == '\0') {
        *(undefined1 *)(DAT_71052adb38 + 0x15d) = 0;
        uVar2 = FUN_7100140080((long)param_1);
        if ((uVar2 & 1) != 0) {
          puVar4 = (undefined4 *)param_1[0xb];
          if (puVar4 != (undefined4 *)0x0) {
            aiStack_48[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)aiStack_48 | 4));
            auStack_38[0] = 0;
            nn::err::ErrorResultVariant::operator=
                      ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_38);
            FUN_71000bce50(aiStack_58,aiStack_48);
            FUN_71000b4180(puVar4,aiStack_58);
            param_1[0xb] = 0;
          }
          FUN_7100193380(DAT_71052adfc0,0);
          FUN_7100140910(param_1);
          return 1;
        }
        *(undefined1 *)(DAT_71052adb38 + 0x15d) = 1;
        *(undefined1 *)(param_1 + 0x26) = 0x25;
        aiStack_48[0] = 0x6c59;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_48 | 4));
        auStack_38[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_38);
        FUN_71000bcf30((int *)(param_1 + 0x44),aiStack_48);
        FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                 (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
        goto LAB_7100102cb8;
      }
      FUN_71000bcf30((int *)(param_1 + 0x44),(int *)(param_1 + 0x20));
      uVar3 = 6;
    }
    else {
      aiStack_48[0] = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4))
      ;
      auStack_38[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_38);
      FUN_71000bcf30((int *)(param_1 + 0x44),aiStack_48);
      uVar3 = 4;
    }
    *(undefined1 *)(param_1 + 0x26) = uVar3;
LAB_7100102cb8:
    param_1[8] = (long)"NexMatchJointSessionJob::StartLeaveMesh";
    param_1[6] = (long)FUN_71000f7210;
    param_1[7] = 0;
    return 5;
  }
  *(undefined1 *)((long)param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x26) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
  auStack_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_38);
  FUN_71000bcf30((int *)(param_1 + 0x44),aiStack_48);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  param_1[6] = (long)FUN_71000f70d0;
  param_1[7] = 0;
  param_1[8] = (long)"NexMatchJointSessionJob::ProcessFailure";
  return 0;
}

