// addr:      7100102e90
// offset:    0x102e90
// name:      FUN_7100102e90
// mangled:   
// signature: undefined FUN_7100102e90(void)


undefined8 FUN_7100102e90(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  char *pcVar5;
  long *plVar6;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  plVar6 = *(long **)(DAT_71052adb38 + (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 +
                     0x168);
  uVar1 = (**(code **)(*plVar6 + 0xb8))(plVar6);
  if ((uVar1 & 1) == 0) {
    uVar2 = 5;
  }
  else {
    FUN_71000bce50(aiStack_40,(int *)(param_1 + 100));
    if (aiStack_40[0] == 0) {
      plVar6 = (long *)(**(code **)(*plVar6 + 0x120))(plVar6);
      uVar1 = (**(code **)(*plVar6 + 0x38))();
      uVar3 = 1;
      if ((uVar1 & 1) == 0) {
        uVar3 = 2;
      }
      FUN_7100149250(DAT_71052adb38,uVar3);
      pcVar4 = FUN_7100102bf0;
      uVar2 = 0;
      pcVar5 = "NexMatchJointSessionJob::ProcessComplete";
    }
    else {
      aiStack_50[0] = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
      FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_50);
      FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                               (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
      pcVar4 = FUN_71000f7210;
      uVar2 = 5;
      pcVar5 = "NexMatchJointSessionJob::StartLeaveMesh";
    }
    *(code **)(param_1 + 0x30) = pcVar4;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = pcVar5;
  }
  return uVar2;
}

