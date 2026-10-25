// addr:      7100103b70
// offset:    0x103b70
// name:      FUN_7100103b70
// mangled:   
// signature: undefined FUN_7100103b70(void)


undefined8 FUN_7100103b70(long param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  int aiStack_58 [4];
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  lVar2 = DAT_71052adb38;
  switch(iVar3) {
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
    lVar6 = **(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    if (*(char *)(param_1 + 0x263) == '\0') {
      uVar4 = (**(code **)(lVar6 + 0x68))();
    }
    else {
      uVar4 = (**(code **)(lVar6 + 0x78))();
    }
    if ((uVar4 & 1) == 0) {
      return 5;
    }
    if (*(int *)(param_1 + 0x60) == 3) {
      piVar1 = (int *)(param_1 + 100);
      FUN_71000bce50(aiStack_48,piVar1);
      FUN_71000bce50(aiStack_48,piVar1);
      aiStack_58[0] = 0xac5a;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_58 | 4))
      ;
      auStack_38[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_58 | 4),(Result *)auStack_38);
      if (aiStack_48[0] == aiStack_58[0]) {
        FUN_71000bce50(aiStack_48,piVar1);
        FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_48);
      }
    }
    FUN_7100149270(lVar2,0);
    *(code **)(param_1 + 0x30) = FUN_71001035f0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar5 = "NexMatchJointSessionJob::StartLeaveBufferMatchmakeSession";
    goto LAB_7100103c58;
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
  pcVar5 = "NexMatchJointSessionJob::ProcessFailure";
LAB_7100103c58:
  *(char **)(param_1 + 0x40) = pcVar5;
  return 0;
}

