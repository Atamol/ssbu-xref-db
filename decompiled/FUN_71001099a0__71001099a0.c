// addr:      71001099a0
// offset:    0x1099a0
// name:      FUN_71001099a0
// mangled:   
// signature: undefined8 __cdecl FUN_71001099a0(long param_1)


undefined8 FUN_71001099a0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  char *pcVar5;
  long lVar6;
  int local_38 [4];
  undefined4 local_28 [2];
  
  lVar6 = *(long *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    local_38[0] = 0xc406;
    break;
  case 6:
    local_38[0] = 0xa471;
    break;
  case 7:
    local_38[0] = 0xc420;
    break;
  case 8:
    local_38[0] = 0xc421;
    break;
  default:
    uVar2 = FUN_71000e0b40(lVar6);
    if ((uVar2 & 1) == 0) {
      return 5;
    }
    FUN_71000bce50(local_38,(int *)(param_1 + 0x114));
    pcVar4 = FUN_71001082f0;
    uVar3 = 5;
    pcVar5 = "NexMatchRandomMatchmakeJob::LeaveMatchmakeSession";
    goto LAB_7100109a50;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_38 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_71000bcf30((int *)(param_1 + 0x6c),local_38);
  pcVar4 = FUN_71001429b0;
  uVar3 = 0;
  pcVar5 = "nex::NexMatchRandomMatchmakeJob::CompleteFailure";
LAB_7100109a50:
  *(code **)(param_1 + 0x30) = pcVar4;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar5;
  return uVar3;
}

