// addr:      71001057a0
// offset:    0x1057a0
// name:      FUN_71001057a0
// mangled:   
// signature: undefined8 __cdecl FUN_71001057a0(long param_1)


undefined8 FUN_71001057a0(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int local_58 [4];
  undefined4 local_48 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
    local_58[0] = 0xc406;
    break;
  case 6:
    local_58[0] = 0xa471;
    break;
  case 7:
    local_58[0] = 0xc420;
    break;
  case 8:
    local_58[0] = 0xc421;
    break;
  default:
    if ((*(long *)(param_1 + 0x58) == 0) || (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0')) {
      if (*(ulong *)(DAT_71052ac580 + 0x30) <= *(ulong *)(param_1 + 0xc0)) {
        plVar9 = *(long **)(DAT_71052adb38 + 8);
        plVar5 = (long *)FUN_71000ecfb0((long)plVar9,0);
        if (plVar5 == (long *)0x0) {
          uVar3 = 1;
          plVar5 = (long *)FUN_71000ecfb0((long)plVar9,1);
        }
        else {
          uVar1 = *(undefined4 *)
                   (DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180);
          uVar6 = (**(code **)(*plVar5 + 0x18))();
          uVar3 = (**(code **)(*plVar9 + 0x60))(plVar9,uVar1,uVar6);
          plVar5 = (long *)FUN_71000ecfb0((long)plVar9,1);
        }
        if (plVar5 != (long *)0x0) {
          uVar1 = *(undefined4 *)
                   (DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180);
          uVar6 = (**(code **)(*plVar5 + 0x18))();
          uVar4 = (**(code **)(*plVar9 + 0x60))(plVar9,uVar1,uVar6);
          uVar3 = uVar3 & uVar4;
        }
        plVar5 = (long *)FUN_71000ecfb0((long)plVar9,2);
        if (plVar5 != (long *)0x0) {
          uVar1 = *(undefined4 *)
                   (DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180);
          uVar6 = (**(code **)(*plVar5 + 0x18))();
          uVar4 = (**(code **)(*plVar9 + 0x60))(plVar9,uVar1,uVar6);
          uVar3 = uVar3 & uVar4;
        }
        plVar5 = (long *)FUN_71000ecfb0((long)plVar9,3);
        if (plVar5 != (long *)0x0) {
          uVar1 = *(undefined4 *)
                   (DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180);
          uVar6 = (**(code **)(*plVar5 + 0x18))();
          uVar4 = (**(code **)(*plVar9 + 0x60))(plVar9,uVar1,uVar6);
          uVar3 = uVar3 & uVar4;
        }
        if ((uVar3 & 1) != 0) {
          *(code **)(param_1 + 0x30) = FUN_7100105ad0;
          *(undefined8 *)(param_1 + 0x38) = 0;
          *(char **)(param_1 + 0x40) = "NexMatchCreateSessionJob::StartNatSession";
          lVar10 = *(long *)(DAT_71052ac580 + 0x30);
          lVar8 = *(long *)(param_1 + 0xd0);
          plVar5 = FUN_71000bb680();
          lVar11 = *plVar5;
          uVar7 = (**(code **)(*DAT_71052acd90 + 0x58))();
          if ((uVar7 & 1) == 0) {
            return 0;
          }
          DAT_71052ac638 = 0;
          if (lVar11 != 0) {
            DAT_71052ac638 = (undefined4)((lVar10 - lVar8) / lVar11);
          }
          return 0;
        }
        local_58[0] = 0;
        local_58[1] = 0x800;
        local_58[2] = 0;
        (**(code **)(*plVar9 + 0x38))(plVar9,local_58);
        return 5;
      }
      local_58[0] = 0xac5a;
    }
    else {
      local_58[0] = 0x6c05;
    }
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_58 | 4));
    local_48[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
    FUN_71000bcf30((int *)(param_1 + 0x90),local_58);
    *(char **)(param_1 + 0x40) = "NexMatchCreateSessionJob::UnregisterGathering";
    *(code **)(param_1 + 0x30) = FUN_7100105660;
    *(undefined8 *)(param_1 + 0x38) = 0;
    return 5;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_58 | 4));
  local_48[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
  FUN_71000bcf30((int *)(param_1 + 0x90),local_58);
  *(code **)(param_1 + 0x30) = FUN_710013d590;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "nex::NexMatchCreateSessionJob::CompleteFailure";
  return 0;
}

