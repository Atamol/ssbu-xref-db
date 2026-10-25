// addr:      71001a2310
// offset:    0x1a2310
// name:      FUN_71001a2310
// mangled:   
// signature: undefined8 __cdecl FUN_71001a2310(long * param_1)


undefined8 FUN_71001a2310(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  *(undefined4 *)(param_1 + 0x22) = 0xb;
  FUN_7100192e90(local_40,DAT_71052adfc0);
  local_50[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  if (local_40[0] == local_50[0]) {
LAB_71001a237c:
    uVar2 = 0;
    param_1[6] = (long)FUN_71001a1d80;
    param_1[7] = 0;
    param_1[8] = (long)"ProcessHostMigrationJob::HostMigrationFailure";
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0xb3);
    if (cVar1 == -3) {
      if ((ulong)param_1[0xb] <= *(ulong *)(DAT_71052ac580 + 0x30)) {
        uVar3 = (**(code **)(*param_1 + 0x80))(param_1);
        if ((uVar3 & 1) != 0) {
          return 0;
        }
        goto LAB_71001a237c;
      }
    }
    else {
      if (*(char *)((long)param_1 + 0xc4) == '\0') {
        if (cVar1 != (char)param_1[0x12]) goto LAB_71001a237c;
      }
      else {
        *(char *)(param_1 + 0x12) = cVar1;
      }
      lVar4 = FUN_7100193580(DAT_71052adfc0);
      FUN_710019a2d0(lVar4,(ulong)*(byte *)(param_1 + 0x12));
      *(undefined1 *)(param_1 + 0x18) = 1;
      *(undefined1 *)((long)param_1 + 0xb2) = 0;
      param_1[8] = (long)"ProcessHostMigrationJob::WaitNewHostFinished";
      param_1[6] = (long)FUN_71001a2450;
      param_1[7] = 0;
    }
    uVar2 = 5;
  }
  return uVar2;
}

