// addr:      71000ff3e0
// offset:    0xff3e0
// name:      FUN_71000ff3e0
// mangled:   
// signature: undefined FUN_71000ff3e0(void)


undefined8 FUN_71000ff3e0(long *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  char *pcVar6;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  lVar1 = DAT_71052adb38;
  if (iVar3 == 7) {
    aiStack_40[0] = 0xc420;
  }
  else if (iVar3 == 6) {
    aiStack_40[0] = 0xa471;
  }
  else if (iVar3 == 5) {
    aiStack_40[0] = 0xc406;
  }
  else {
    if (iVar3 != 8) {
      if (*(char *)((long)param_1 + 0xfb) != '\0') {
        FUN_71000bcf30((int *)(param_1 + 0x44),(int *)(param_1 + 0x20));
        *(undefined1 *)(param_1 + 0x26) = 6;
        param_1[6] = (long)FUN_71000f7210;
        param_1[7] = 0;
        param_1[8] = (long)"NexMatchJointSessionJob::StartLeaveMesh";
        return 5;
      }
      piVar4 = (int *)param_1[0xb];
      if ((piVar4 != (int *)0x0) && ((char)piVar4[10] != '\0')) {
        if (2 < *piVar4 - 2U) {
          FUN_71000b4260(piVar4);
        }
        param_1[0xb] = 0;
        FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                 (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
        FUN_7100140910(param_1);
        return 1;
      }
      bVar2 = FUN_7100140e30((long)param_1);
      if (bVar2) {
        if ((ulong)param_1[0x3d] < *(ulong *)(DAT_71052ac580 + 0x30)) {
          if ((char)param_1[0x4a] == '\0') goto LAB_71000ff5c4;
        }
        else if ((char)param_1[0x4a] == '\0') {
          return 5;
        }
        *(undefined1 *)(param_1 + 0x4c) = 0;
LAB_71000ff5c4:
        uVar5 = (**(code **)(**(long **)(lVar1 + (ulong)*(byte *)(lVar1 + 0x162) * 8 + 0x168) + 0xe0
                            ))();
        param_1[7] = 0;
        param_1[8] = (long)"NexMatchJointSessionJob::MeshRestart";
        param_1[6] = (long)FUN_71000fec40;
        if ((uVar5 & 1) == 0) {
          return 0;
        }
        return 5;
      }
      if ((ulong)param_1[0x3d] < *(ulong *)(DAT_71052ac580 + 0x30)) {
        if ((char)param_1[0x48] != '\0') goto LAB_71000ff608;
      }
      else {
        if ((char)param_1[0x48] == '\0') {
          return 5;
        }
LAB_71000ff608:
        *(undefined1 *)(param_1 + 0x4c) = 0;
      }
      param_1[6] = (long)FUN_71000fec40;
      param_1[7] = 0;
      pcVar6 = "NexMatchJointSessionJob::MeshRestart";
      goto LAB_71000ff4c8;
    }
    aiStack_40[0] = 0xc421;
  }
  *(undefined1 *)((long)param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x26) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
  FUN_71000bcf30((int *)(param_1 + 0x44),aiStack_40);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  param_1[6] = (long)FUN_71000f70d0;
  param_1[7] = 0;
  pcVar6 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000ff4c8:
  param_1[8] = (long)pcVar6;
  return 0;
}

