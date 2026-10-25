// addr:      71000f9e90
// offset:    0xf9e90
// name:      FUN_71000f9e90
// mangled:   
// signature: undefined FUN_71000f9e90(void)


undefined8 FUN_71000f9e90(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined1 uVar6;
  int aiStack_58 [4];
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
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
    FUN_7100192e90(aiStack_48,DAT_71052adfc0);
    if ((aiStack_48[0] == 0) &&
       (iVar4 = FUN_7100146ba0(DAT_71052adb38), lVar2 = DAT_71052adb38, iVar4 != 4)) {
      if (*(char *)(param_1 + 0xfb) == '\0') {
        FUN_710014e380(aiStack_48,*(long *)(DAT_71052adb38 + 200),
                       (char)*(undefined4 *)(param_1 + 0x90),*(long *)(param_1 + 0xa0),1);
        aiStack_58[0] = 0x4c0d;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_58 | 4));
        auStack_38[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_58 | 4),(Result *)auStack_38);
        if (aiStack_48[0] == aiStack_58[0]) {
          return 5;
        }
        bVar3 = FUN_7100140e30(param_1);
        if (bVar3) {
          if (aiStack_48[0] != 0) {
            *(undefined1 *)(param_1 + 0x130) = 5;
            aiStack_58[0] = 0x6c57;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)aiStack_58 | 4));
            auStack_38[0] = 0;
            nn::err::ErrorResultVariant::operator=
                      ((ErrorResultVariant *)((ulong)aiStack_58 | 4),(Result *)auStack_38);
            FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_58);
            FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                     (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168)
                          );
            *(code **)(param_1 + 0x30) = FUN_71000f7210;
            *(undefined8 *)(param_1 + 0x38) = 0;
            *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::StartLeaveMesh";
            return 5;
          }
          *(undefined4 *)(param_1 + 0x98) = 3;
          *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::WaitNextSessionId";
          *(undefined4 *)(param_1 + 0x230) = 9;
          *(code **)(param_1 + 0x30) = FUN_71000fd9e0;
          *(undefined8 *)(param_1 + 0x38) = 0;
          lVar5 = DAT_71052adb38;
        }
        else {
          FUN_7100150440(*(long *)(lVar2 + 0xb8),*(long *)(lVar2 + 0xf0),1);
          FUN_7100150440(*(long *)(lVar2 + 0xb8),*(long *)(param_1 + 0xa0),1);
          lVar5 = DAT_71052adb38;
          *(undefined1 *)(DAT_71052adb38 + 0x15c) = 1;
          *(undefined4 *)(param_1 + 0x98) = 10;
          *(undefined1 *)(param_1 + 0xf7) = 0;
          uVar1 = *(undefined4 *)(lVar2 + (ulong)*(byte *)(lVar2 + 0x162) * 4 + 0x180);
          *(code **)(param_1 + 0x30) = FUN_71000fddd0;
          *(undefined8 *)(param_1 + 0x38) = 0;
          *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::WaitUntilLeaderLeavesMesh";
          *(undefined4 *)(param_1 + 0xf0) = uVar1;
          *(undefined4 *)(param_1 + 0x230) = 0xc;
        }
        FUN_7100149240(lVar5,2);
        return 5;
      }
      FUN_71000bcf30((int *)(param_1 + 0x220),(int *)(param_1 + 0x100));
      uVar6 = 6;
    }
    else {
      aiStack_48[0] = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4))
      ;
      aiStack_58[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)aiStack_58);
      FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_48);
      uVar6 = 4;
    }
    *(undefined1 *)(param_1 + 0x130) = uVar6;
    *(code **)(param_1 + 0x30) = FUN_71000f7210;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::StartLeaveMesh";
    return 5;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
  aiStack_58[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)aiStack_58);
  FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_48);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  *(code **)(param_1 + 0x30) = FUN_71000f70d0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::ProcessFailure";
  return 0;
}

