// addr:      7100143750
// offset:    0x143750
// name:      FUN_7100143750
// mangled:   
// signature: ulong __cdecl FUN_7100143750(long * param_1)


ulong FUN_7100143750(long *param_1)

{
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int local_40 [4];
  int local_30 [4];
  
  local_30[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_30 | 4));
  local_40[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_40);
  bVar1 = FUN_71001931d0((long)DAT_71052adfc0);
  if (bVar1) {
    bVar2 = FUN_71001921a0((long)DAT_71052adfc0);
    if ((bVar2 & 1) == 0) {
      FUN_7100191a60(local_40,DAT_71052adfc0,(int *)(param_1 + 0x22));
    }
    else {
      FUN_7100192050(local_40,DAT_71052adfc0,(int *)(param_1 + 0x22));
    }
  }
  else {
    FUN_7100192af0(local_40,(long)DAT_71052adfc0,(int *)(param_1 + 0x22));
  }
  FUN_71000bcf30(local_30,local_40);
  if (local_30[0] == 0) {
    param_1[7] = 0;
    uVar4 = 0;
    uVar5 = 0;
    param_1[8] = (long)"RandomMatchmakeJob::WaitLeaveMesh";
    param_1[6] = (long)FUN_7100143870;
    uVar3 = 5;
  }
  else {
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    uVar3 = (**(code **)(*param_1 + 0x88))(param_1);
    uVar4 = uVar3 & 0xffff0000;
    uVar5 = uVar3 & 0xff00;
    uVar3 = uVar3 & 0xff;
  }
  return uVar4 | uVar3 | uVar5;
}

