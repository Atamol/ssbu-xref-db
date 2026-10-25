// addr:      7100102fc0
// offset:    0x102fc0
// name:      FUN_7100102fc0
// mangled:   
// signature: undefined8 __cdecl FUN_7100102fc0(long param_1)


undefined8 FUN_7100102fc0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  code *pcVar5;
  long *plVar6;
  int local_60 [4];
  int local_50 [4];
  undefined4 local_38 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    local_50[0] = 0xc406;
    break;
  case 6:
    local_50[0] = 0xa471;
    break;
  case 7:
    local_50[0] = 0xc420;
    break;
  case 8:
    local_50[0] = 0xc421;
    break;
  default:
    local_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
    local_60[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
    iVar1 = *(int *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180);
    if (iVar1 == 0) {
LAB_71001031a8:
      pcVar5 = FUN_71001035f0;
      pcVar4 = "NexMatchJointSessionJob::StartLeaveBufferMatchmakeSession";
    }
    else {
      plVar6 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
      FUN_71000b40e0((undefined4 *)(param_1 + 0x60));
      uVar2 = FUN_7100146ed0(DAT_71052adb38);
      if (((uVar2 & 1) == 0) && (uVar2 = (**(code **)(*plVar6 + 0xe0))(plVar6), (uVar2 & 1) != 0)) {
        *(undefined1 *)(param_1 + 0x263) = 1;
        pcVar5 = *(code **)(*plVar6 + 0x70);
      }
      else {
        *(undefined1 *)(param_1 + 0x263) = 0;
        pcVar5 = *(code **)(*plVar6 + 0x60);
      }
      (*pcVar5)(local_60,plVar6,(undefined4 *)(param_1 + 0x60),iVar1);
      FUN_71000bcf30(local_50,local_60);
      if (local_50[0] != 0) {
        local_60[0] = 0xac5a;
        nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_60 | 4))
        ;
        local_38[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_38);
        if (local_50[0] == local_60[0]) {
          FUN_71000bcf30((int *)(param_1 + 0x220),local_50);
        }
        goto LAB_71001031a8;
      }
      pcVar5 = FUN_7100103b70;
      pcVar4 = "NexMatchJointSessionJob::WaitLeaveCurrentMatchmakeSession";
    }
    uVar3 = 5;
    *(code **)(param_1 + 0x30) = pcVar5;
    *(undefined8 *)(param_1 + 0x38) = 0;
    goto LAB_71001031d4;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
  local_60[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
  FUN_71000bcf30((int *)(param_1 + 0x220),local_50);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  uVar3 = 0;
  *(code **)(param_1 + 0x30) = FUN_71000f70d0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar4 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71001031d4:
  *(char **)(param_1 + 0x40) = pcVar4;
  return uVar3;
}

