// addr:      71000ff630
// offset:    0xff630
// name:      FUN_71000ff630
// mangled:   
// signature: undefined FUN_71000ff630(void)


undefined8 FUN_71000ff630(long param_1)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  int aiStack_c0 [4];
  int aiStack_b0 [32];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar3 == 7) {
    aiStack_b0[0] = 0xc420;
  }
  else if (iVar3 == 6) {
    aiStack_b0[0] = 0xa471;
  }
  else if (iVar3 == 5) {
    aiStack_b0[0] = 0xc406;
  }
  else {
    if (iVar3 != 8) {
      if (*(char *)(param_1 + 0xfb) != '\0') {
        FUN_71000bcf30((int *)(param_1 + 0x220),(int *)(param_1 + 0x100));
        *(undefined1 *)(param_1 + 0x130) = 6;
        *(code **)(param_1 + 0x30) = FUN_71000f7210;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::StartLeaveMesh";
        return 5;
      }
      bVar2 = FUN_7100140e30(param_1);
      uVar1 = (ulong)((ulong)*(byte *)(DAT_71052adb38 + 0x162) == 0);
      if (!bVar2) {
        uVar1 = (ulong)*(byte *)(DAT_71052adb38 + 0x162);
      }
      plVar6 = *(long **)(DAT_71052adb38 + uVar1 * 8 + 0x168);
      FUN_710015fd60((undefined8 *)aiStack_b0);
      FUN_710015fea0(param_1 + 0x138,(long)aiStack_b0);
      (**(code **)(*plVar6 + 0xa0))
                (aiStack_c0,plVar6,param_1 + 0x60,*(undefined4 *)(param_1 + 0xf0));
      if (aiStack_c0[0] == 0) {
        pcVar4 = FUN_71001001a0;
        uVar7 = 0;
        pcVar5 = "NexMatchJointSessionJob::WaitGetNextMeshHostStationLocation";
      }
      else {
        *(undefined1 *)(param_1 + 0x130) = 0x1d;
        FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_c0);
        FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                 (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
        pcVar4 = FUN_71000f7210;
        uVar7 = 5;
        pcVar5 = "NexMatchJointSessionJob::StartLeaveMesh";
      }
      *(code **)(param_1 + 0x30) = pcVar4;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = pcVar5;
      FUN_710015ff20((undefined8 *)aiStack_b0);
      return uVar7;
    }
    aiStack_b0[0] = 0xc421;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_b0 | 4));
  aiStack_c0[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_b0 | 4),(Result *)aiStack_c0);
  FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_b0);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  *(code **)(param_1 + 0x30) = FUN_71000f70d0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::ProcessFailure";
  return 0;
}

