// addr:      7100141920
// offset:    0x141920
// name:      FUN_7100141920
// mangled:   
// signature: undefined FUN_7100141920(void)


undefined8 FUN_7100141920(long *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  uVar1 = FUN_7100146ba0(DAT_71052adb38);
  if ((uVar1 < 10 && (1 << (ulong)(uVar1 & 0x1f) & 0x3a0U) != 0) ||
     (iVar2 = FUN_7100146ba0(DAT_71052adb38), iVar2 == 6)) {
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    uVar3 = 0;
    param_1[6] = (long)FUN_71001411a0;
    param_1[7] = 0;
    param_1[8] = (long)"nn::pia::session::LeaveSessionJob::SendMonitoringData";
  }
  else {
    uVar4 = (**(code **)(**(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 +
                                    0x168) + 0x68))();
    if ((uVar4 & 1) == 0) {
      uVar3 = 5;
    }
    else {
      FUN_7100149270(DAT_71052adb38,0);
      if ((int)param_1[0xc] == 3) {
        FUN_71000bce50(aiStack_40,(int *)((long)param_1 + 100));
        aiStack_50[0] = 0x6c4b;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_50 | 4));
        auStack_28[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
        if (aiStack_40[0] != aiStack_50[0]) {
          FUN_71000bce50(aiStack_40,(int *)((long)param_1 + 100));
        }
      }
      (**(code **)(*param_1 + 0x48))(param_1);
      uVar3 = 0;
    }
  }
  return uVar3;
}

