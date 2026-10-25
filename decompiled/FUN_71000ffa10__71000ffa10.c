// addr:      71000ffa10
// offset:    0xffa10
// name:      FUN_71000ffa10
// mangled:   
// signature: undefined FUN_71000ffa10(void)


undefined8 FUN_71000ffa10(long *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar2 == 7) {
    aiStack_48[0] = 0xc420;
  }
  else if (iVar2 == 6) {
    aiStack_48[0] = 0xa471;
  }
  else if (iVar2 == 5) {
    aiStack_48[0] = 0xc406;
  }
  else {
    if (iVar2 != 8) {
      piVar3 = (int *)param_1[0xb];
      if ((piVar3 != (int *)0x0) && ((char)piVar3[10] != '\0')) {
        if (2 < *piVar3 - 2U) {
          FUN_71000b4260(piVar3);
        }
        param_1[0xb] = 0;
        FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                 (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
        FUN_7100140910(param_1);
        return 1;
      }
      bVar1 = FUN_71001919a0(DAT_71052adfc0);
      if (!bVar1) {
        return 5;
      }
      if (*(char *)((long)param_1 + 0xfb) == '\0') {
        FUN_71001919d0(aiStack_48,DAT_71052adfc0);
        if (aiStack_48[0] == 0) {
          bVar1 = FUN_7100140e30((long)param_1);
          lVar4 = FUN_7100193a50(DAT_71052adfc0);
          if (bVar1) {
            FUN_71001aea30(lVar4,(uint)*(ushort *)
                                        (DAT_71052adb38 +
                                         (ulong)(*(byte *)(DAT_71052adb38 + 0x162) == 0) * 2 + 0x15e
                                        ));
            *(undefined1 *)((long)param_1 + 0xfc) = 1;
          }
          else {
            FUN_71001aea30(lVar4,(uint)*(ushort *)
                                        (DAT_71052adb38 +
                                         (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 2 + 0x15e));
          }
          FUN_71001507a0(*(long *)(DAT_71052adb38 + 0xb8),*(long *)(DAT_71052adb38 + 0xf0),1);
          param_1[8] = (long)"NexMatchJointSessionJob::WaitCompanionStation";
          param_1[6] = (long)FUN_71000ffca0;
          param_1[7] = 0;
          *(undefined4 *)(param_1 + 0x46) = 0x11;
          return 0;
        }
        *(undefined1 *)(param_1 + 0x26) = 0x1b;
        FUN_71000bcf30((int *)(param_1 + 0x44),aiStack_48);
        FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                 (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
      }
      else {
        FUN_71000bcf30((int *)(param_1 + 0x44),(int *)(param_1 + 0x20));
        *(undefined1 *)(param_1 + 0x26) = 6;
      }
      param_1[8] = (long)"NexMatchJointSessionJob::StartLeaveMesh";
      param_1[6] = (long)FUN_71000f7210;
      param_1[7] = 0;
      return 5;
    }
    aiStack_48[0] = 0xc421;
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

