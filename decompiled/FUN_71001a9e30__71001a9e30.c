// addr:      71001a9e30
// offset:    0x1a9e30
// name:      FUN_71001a9e30
// mangled:   
// signature: undefined4 __cdecl FUN_71001a9e30(long * param_1, byte param_2, uint param_3, uint param_4)


undefined4 FUN_71001a9e30(long *param_1,byte param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_71000b4990((long)param_1);
  uVar2 = 0;
  if ((((uVar1 & 1) == 0) && (param_3 != 0)) && (param_2 < *(byte *)(param_1 + 0xb))) {
    if ((param_3 < *(uint *)((long)param_1 + 0x5c)) ||
       ((*(uint *)((long)param_1 + 0x5c) == param_3 &&
        (param_4 <= *(uint *)(param_1[0xe] + (ulong)param_2 * 4))))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
      (**(code **)(*param_1 + 0x10))(param_1,1);
      param_1[6] = (long)FUN_71001a9ef0;
      param_1[7] = 0;
      param_1[8] = (long)"RelayRouteManageJob::WaitAllDirectConnectionReport";
    }
  }
  return uVar2;
}

