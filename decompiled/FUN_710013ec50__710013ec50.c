// addr:      710013ec50
// offset:    0x13ec50
// name:      FUN_710013ec50
// mangled:   
// signature: ulong __cdecl FUN_710013ec50(long * param_1)


ulong FUN_710013ec50(long *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int aiStack_58 [4];
  int local_48 [4];
  int aiStack_38 [4];
  undefined4 local_28 [2];
  
  uVar2 = (**(code **)(*param_1 + 0x48))();
  if ((uVar2 & 1) == 0) {
    FUN_71001928e0(local_48,DAT_71052adfc0,(long)(param_1 + 0x12));
    if (local_48[0] == 0) {
      *(undefined4 *)(param_1 + 0x22) = 4;
      FUN_7100193380(DAT_71052adfc0,1);
      param_1[7] = 0;
      uVar3 = 0;
      uVar4 = 0;
      uVar2 = 5;
      param_1[8] = (long)"JoinSessionJob::WaitJoinMesh";
      param_1[6] = (long)FUN_710013edb0;
    }
    else {
      uVar1 = FUN_7100146fd0();
      DAT_71052ac6d7 = (undefined1)uVar1;
      (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
      FUN_71000bce50(aiStack_58,local_48);
      uVar2 = (**(code **)(*param_1 + 0x78))(param_1,aiStack_58);
      uVar4 = uVar2 & 0xffffff00;
      uVar3 = uVar2 & 0xffff0000;
    }
  }
  else {
    local_48[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
    local_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
    FUN_71000bce50(aiStack_38,local_48);
    (**(code **)(*param_1 + 0x78))(param_1,aiStack_38);
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
  }
  return uVar3 | uVar2 & 0xff | uVar4 & 0xff00;
}

