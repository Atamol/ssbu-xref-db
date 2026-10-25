// addr:      710018ec80
// offset:    0x18ec80
// name:      FUN_710018ec80
// mangled:   
// signature: undefined FUN_710018ec80(void)


undefined8 FUN_710018ec80(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = DAT_71052ac580;
  if (*(char *)(param_1 + 0x78) != '\0') {
    if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58)) {
      lVar2 = FUN_7100161fa0(DAT_71052add68);
      if (*(long *)(lVar2 + 0x98) != 0) {
        return 5;
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x60);
      plVar3 = FUN_71000bb680();
      *(long *)(param_1 + 0x58) = *(long *)(lVar2 + 0x30) + *plVar3 * (long)iVar1;
    }
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  *(code **)(param_1 + 0x30) = FUN_710018ed30;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "LeaveMeshJob::StartDisconnectStations";
  return 0;
}

