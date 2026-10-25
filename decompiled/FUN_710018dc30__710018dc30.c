// addr:      710018dc30
// offset:    0x18dc30
// name:      FUN_710018dc30
// mangled:   
// signature: undefined8 __cdecl FUN_710018dc30(long * param_1, undefined4 param_2)


undefined8 FUN_710018dc30(long *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  char *pcVar4;
  int local_40 [4];
  undefined4 local_28 [2];
  
  (**(code **)(*param_1 + 0x30))();
  if (((int)param_1[0x2c] == 1) || (uVar1 = FUN_71000b4990((long)param_1), (uVar1 & 1) != 0)) {
    return 0;
  }
  (**(code **)(*param_1 + 0x10))(param_1,1);
  *(undefined4 *)(param_1 + 0x2b) = param_2;
  uVar1 = FUN_71000b4990(*(long *)(DAT_71052adfc0 + 8));
  if ((uVar1 & 1) != 0) {
    iVar2 = (int)param_1[0x2b];
    if (iVar2 - 4U < 0x15) {
      if (iVar2 == 7) {
        local_40[0] = 0x6848;
      }
      else if (iVar2 == 6) {
        local_40[0] = 0x6847;
      }
      else if (iVar2 == 5) {
        local_40[0] = 0x6846;
      }
      else {
        local_40[0] = 0x6849;
      }
    }
    else {
      local_40[0] = 0x6838;
    }
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_40 | 4));
    local_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
    FUN_71000bcf30((int *)((long)param_1 + 0x19c),local_40);
    *(undefined1 *)(param_1 + 0x33) = 1;
    uVar1 = FUN_71000b4990(*(long *)(DAT_71052adfc0 + 0x20));
    if ((uVar1 & 1) == 0) {
      iVar2 = FUN_71001936d0(DAT_71052adfc0);
      if (iVar2 == 3) {
        pcVar3 = FUN_710018de80;
        pcVar4 = "KickoutManageJob::ClientStartLeaveMesh";
      }
      else {
        pcVar3 = FUN_710018ddc0;
        pcVar4 = "KickoutManageJob::ClientFinalize";
      }
      param_1[6] = (long)pcVar3;
      param_1[7] = 0;
      param_1[8] = (long)pcVar4;
      return 1;
    }
  }
  param_1[6] = (long)FUN_710018de80;
  param_1[7] = 0;
  param_1[8] = (long)"KickoutManageJob::ClientStartLeaveMesh";
  uVar1 = FUN_71000b4990(*(long *)(DAT_71052adfc0 + 0x10));
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x2b) = 0;
  }
  return 1;
}

