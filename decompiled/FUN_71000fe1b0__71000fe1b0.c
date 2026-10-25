// addr:      71000fe1b0
// offset:    0xfe1b0
// name:      FUN_71000fe1b0
// mangled:   
// signature: undefined FUN_71000fe1b0(void)


undefined8 FUN_71000fe1b0(long param_1)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  char *pcVar6;
  long *plVar7;
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
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
    plVar7 = *(long **)(DAT_71052adb38 + (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 +
                       0x168);
    uVar3 = (**(code **)(*plVar7 + 0xb8))(plVar7);
    if ((uVar3 & 1) == 0) {
      return 5;
    }
    FUN_71000bce50(aiStack_48,(int *)(param_1 + 100));
    if (aiStack_48[0] == 0) {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x120))(plVar7);
      uVar1 = (**(code **)(*plVar7 + 0x30))();
      FUN_71001492f0(DAT_71052adb38,uVar1 & 0xff);
      pcVar5 = FUN_71000fc7d0;
      uVar4 = 0;
      pcVar6 = "NexMatchJointSessionJob::SendPreparedForMigrateSession";
    }
    else {
      *(undefined1 *)(param_1 + 0x130) = 0x16;
      aiStack_48[0] = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4))
      ;
      auStack_38[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_38);
      FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_48);
      FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                               (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
      pcVar5 = FUN_71000f7210;
      uVar4 = 5;
      pcVar6 = "NexMatchJointSessionJob::StartLeaveMesh";
    }
    goto LAB_71000fe344;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
  auStack_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_38);
  FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_48);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  pcVar5 = FUN_71000f70d0;
  uVar4 = 0;
  pcVar6 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000fe344:
  *(code **)(param_1 + 0x30) = pcVar5;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar6;
  return uVar4;
}

