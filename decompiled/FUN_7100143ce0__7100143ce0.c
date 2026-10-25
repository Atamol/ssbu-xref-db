// addr:      7100143ce0
// offset:    0x143ce0
// name:      FUN_7100143ce0
// mangled:   
// signature: undefined FUN_7100143ce0(void)


void FUN_7100143ce0(long param_1)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  
  if (*(char *)(param_1 + 0x68) == '\0') {
    pcVar3 = FUN_7100142f40;
    pcVar2 = "RandomMatchmakeJob::GetStationConnection";
  }
  else {
    lVar1 = FUN_7100193a50(DAT_71052adfc0);
    FUN_71001aea30(lVar1,(uint)*(ushort *)
                                (DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 2 +
                                0x15e));
    pcVar3 = FUN_7100142c40;
    pcVar2 = "RandomMatchmakeJob::CreateMesh";
  }
  *(code **)(param_1 + 0x30) = pcVar3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar2;
  return;
}

