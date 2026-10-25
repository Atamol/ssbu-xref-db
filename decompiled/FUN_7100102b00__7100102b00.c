// addr:      7100102b00
// offset:    0x102b00
// name:      FUN_7100102b00
// mangled:   
// signature: undefined FUN_7100102b00(void)


undefined8 FUN_7100102b00(long param_1)

{
  long *plVar1;
  char *pcVar2;
  code *pcVar3;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  plVar1 = *(long **)(DAT_71052adb38 + (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 +
                     0x168);
  (**(code **)(*plVar1 + 0xb0))(aiStack_40,plVar1,param_1 + 0x60,*(undefined4 *)(param_1 + 0xf0));
  if (aiStack_40[0] == 0) {
    pcVar3 = FUN_7100102e90;
    pcVar2 = "NexMatchJointSessionJob::WaitUpdateJointSessionOpenStatus";
  }
  else {
    aiStack_50[0] = 0x6c59;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_50);
    FUN_71000d8f90(*(long *)(DAT_71052adb38 + (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8
                            + 0x168));
    pcVar3 = FUN_71000f7210;
    pcVar2 = "NexMatchJointSessionJob::StartLeaveMesh";
  }
  *(code **)(param_1 + 0x30) = pcVar3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar2;
  return 5;
}

