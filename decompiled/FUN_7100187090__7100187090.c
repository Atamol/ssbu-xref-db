// addr:      7100187090
// offset:    0x187090
// name:      FUN_7100187090
// mangled:   
// signature: undefined8 __cdecl FUN_7100187090(long * param_1)


undefined8 FUN_7100187090(long *param_1)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  int *piVar4;
  int local_50 [4];
  int aiStack_40 [4];
  undefined4 local_28 [2];
  
  lVar2 = param_1[0xe];
  if (*(int *)(lVar2 + 0x48) == 5) {
    param_1[6] = (long)FUN_7100186f80;
    param_1[7] = 0;
    pcVar3 = "ConnectStationJob::ConnectionSucceeded";
  }
  else {
    piVar4 = (int *)param_1[0xd];
    if ((piVar4 != (int *)0x0) && ((char)piVar4[10] != '\0')) {
      if (2 < *piVar4 - 2U) {
        FUN_71000b4260(piVar4);
        lVar2 = param_1[0xe];
      }
      param_1[0xd] = 0;
      if ((lVar2 != 0) && (*(int *)(lVar2 + 0x48) == 4)) {
        *(undefined4 *)(lVar2 + 0x48) = 6;
        return 1;
      }
      return 1;
    }
    if (*(ulong *)(DAT_71052ac580 + 0x30) < (ulong)param_1[0xb]) {
      uVar1 = (**(code **)(*param_1 + 0x40))(param_1);
      if ((uVar1 & 1) == 0) {
        return 5;
      }
    }
    else if (piVar4 != (int *)0x0) {
      if (2 < *piVar4 - 2U) {
        local_50[0] = 0x6c0e;
        nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4))
        ;
        local_28[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
        FUN_71000bce50(aiStack_40,local_50);
        FUN_71000b41f0(piVar4,aiStack_40);
      }
      param_1[0xd] = 0;
    }
    param_1[6] = (long)FUN_7100186ed0;
    param_1[7] = 0;
    pcVar3 = "ConnectStationJob::ConnectionFailed";
  }
  param_1[8] = (long)pcVar3;
  return 0;
}

