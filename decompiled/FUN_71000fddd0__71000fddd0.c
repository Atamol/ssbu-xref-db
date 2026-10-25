// addr:      71000fddd0
// offset:    0xfddd0
// name:      FUN_71000fddd0
// mangled:   
// signature: undefined FUN_71000fddd0(void)


undefined8 FUN_71000fddd0(long param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar2 == 7) {
    aiStack_40[0] = 0xc420;
  }
  else if (iVar2 == 6) {
    aiStack_40[0] = 0xa471;
  }
  else if (iVar2 == 5) {
    aiStack_40[0] = 0xc406;
  }
  else {
    if (iVar2 != 8) {
      if (*(char *)(param_1 + 0xfb) != '\0') {
        FUN_71000bcf30((int *)(param_1 + 0x220),(int *)(param_1 + 0x100));
        *(undefined1 *)(param_1 + 0x130) = 6;
        *(code **)(param_1 + 0x30) = FUN_71000f7210;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::StartLeaveMesh";
        return 5;
      }
      bVar1 = FUN_7100150680(*(long *)(DAT_71052adb38 + 0xb8),*(long *)(param_1 + 0xa0));
      if ((bVar1) &&
         ((bVar1 = FUN_7100140060(param_1), !bVar1 || (*(char *)(param_1 + 0xf7) == '\0')))) {
        return 5;
      }
      *(code **)(param_1 + 0x30) = FUN_71000fd6b0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar3 = "NexMatchJointSessionJob::StartLeavePreviousMesh";
      goto LAB_71000fdeb8;
    }
    aiStack_40[0] = 0xc421;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
  FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_40);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  *(code **)(param_1 + 0x30) = FUN_71000f70d0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar3 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000fdeb8:
  *(char **)(param_1 + 0x40) = pcVar3;
  return 0;
}

