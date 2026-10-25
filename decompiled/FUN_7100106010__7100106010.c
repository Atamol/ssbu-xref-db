// addr:      7100106010
// offset:    0x106010
// name:      FUN_7100106010
// mangled:   
// signature: undefined8 __cdecl FUN_7100106010(long param_1)


undefined8 FUN_7100106010(long param_1)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  ErrorResultVariant *this;
  int local_58 [4];
  int local_48 [4];
  undefined4 local_38 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    local_48[0] = 0xc406;
    break;
  case 6:
    local_48[0] = 0xa471;
    break;
  case 7:
    local_48[0] = 0xc420;
    break;
  case 8:
    local_48[0] = 0xc421;
    break;
  default:
    uVar2 = (**(code **)(**(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 +
                                    0x168) + 0x78))();
    if ((uVar2 & 1) == 0) {
      return 5;
    }
    FUN_7100149270(DAT_71052adb38,0);
    if (*(int *)(param_1 + 0x60) != 2) {
      if (*(int *)(param_1 + 0x60) != 3) {
        return 5;
      }
      FUN_71000bce50(local_48,(int *)(param_1 + 100));
      local_58[0] = 0x10c08;
      this = (ErrorResultVariant *)((ulong)local_58 | 4);
      nn::err::ErrorResultVariant::ErrorResultVariant(this);
      local_38[0] = 0;
      nn::err::ErrorResultVariant::operator=(this,(Result *)local_38);
      if (local_48[0] == local_58[0]) {
        local_48[0] = 0xac5a;
      }
      else {
        FUN_71000bce50(local_48,(int *)(param_1 + 100));
        local_58[0] = 0xe437;
        nn::err::ErrorResultVariant::ErrorResultVariant(this);
        local_38[0] = 0;
        nn::err::ErrorResultVariant::operator=(this,(Result *)local_38);
        if (local_48[0] != local_58[0]) goto LAB_71001061e4;
        local_48[0] = 0xe437;
      }
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
      local_58[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_58);
      FUN_71000bcf30((int *)(param_1 + 0x90),local_48);
    }
LAB_71001061e4:
    *(code **)(param_1 + 0x30) = FUN_710013d590;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar3 = "NexMatchCreateSessionJob::CompleteFailure";
    goto LAB_71001060bc;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
  local_58[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_58);
  FUN_71000bcf30((int *)(param_1 + 0x90),local_48);
  *(code **)(param_1 + 0x30) = FUN_710013d590;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar3 = "nex::NexMatchCreateSessionJob::CompleteFailure";
LAB_71001060bc:
  *(char **)(param_1 + 0x40) = pcVar3;
  return 0;
}

