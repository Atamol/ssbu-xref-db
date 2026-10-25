// addr:      71001031f0
// offset:    0x1031f0
// name:      FUN_71001031f0
// mangled:   
// signature: undefined8 __cdecl FUN_71001031f0(long param_1)


undefined8 FUN_71001031f0(long param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  char *pcVar5;
  int local_58 [4];
  int local_48 [4];
  undefined4 local_38 [2];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  lVar1 = DAT_71052adfc0;
  switch(iVar3) {
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
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
    local_58[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_58);
    iVar3 = *(int *)(param_1 + 0x94);
    if (iVar3 == 3) {
      bVar2 = FUN_7100191f90(lVar1);
      if (!bVar2) {
        return 5;
      }
      FUN_7100191fc0(local_58,lVar1);
    }
    else if (iVar3 == 2) {
      bVar2 = FUN_7100192260(lVar1);
      if (!bVar2) {
        return 5;
      }
      FUN_7100192290(local_58,lVar1);
    }
    else if (iVar3 == 1) {
      bVar2 = FUN_7100192ce0(lVar1);
      if (!bVar2) {
        return 5;
      }
      FUN_7100192d10(local_58,lVar1);
    }
    else {
      local_58[0] = 0x10c08;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_58 | 4));
      local_38[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
    }
    FUN_71000bcf30(local_48,local_58);
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    lVar1 = DAT_71052ac580;
    if ((*(int *)(param_1 + 0x94) == 2) && (local_48[0] == 0)) {
      plVar4 = FUN_71000bb680();
      *(long *)(param_1 + 0x218) = *(long *)(lVar1 + 0x30) + *plVar4 * 15000;
      *(code **)(param_1 + 0x30) = FUN_7100103460;
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar5 = "NexMatchJointSessionJob::WaitHostMigrated";
    }
    else {
      *(code **)(param_1 + 0x30) = FUN_7100102fc0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar5 = "NexMatchJointSessionJob::StartLeaveCurrentMatchmakeSession";
    }
    goto LAB_7100103340;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
  local_58[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_58);
  FUN_71000bcf30((int *)(param_1 + 0x220),local_48);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  *(code **)(param_1 + 0x30) = FUN_71000f70d0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar5 = "NexMatchJointSessionJob::ProcessFailure";
LAB_7100103340:
  *(char **)(param_1 + 0x40) = pcVar5;
  return 0;
}

