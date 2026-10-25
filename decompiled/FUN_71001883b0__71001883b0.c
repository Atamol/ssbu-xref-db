// addr:      71001883b0
// offset:    0x1883b0
// name:      FUN_71001883b0
// mangled:   
// signature: undefined FUN_71001883b0(void)


undefined8 FUN_71001883b0(long param_1)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  if (*(char *)(param_1 + 0x7c) != '\0') {
    uVar4 = *(ulong *)(DAT_71052ac580 + 0x30);
    if (uVar4 < *(ulong *)(param_1 + 0x58)) {
      if (*(byte *)(*(long *)(param_1 + 0x68) + 0x38) < 0x20) {
LAB_710018840c:
        if (uVar4 < *(ulong *)(param_1 + 0x70)) {
          return 5;
        }
        lVar5 = *(long *)(param_1 + 0x68);
        if (*(byte *)(lVar5 + 0x38) < 0x20) {
          FUN_710019ee10(*(long **)(lVar5 + 0x98),(uint)*(byte *)(lVar5 + 0x38),0);
        }
        else {
          FUN_710019eea0(*(long **)(lVar5 + 0x98),lVar5 + 0x10);
        }
        lVar5 = DAT_71052ac580;
        iVar1 = *(int *)(param_1 + 0x78);
        plVar3 = FUN_71000bb680();
        *(long *)(param_1 + 0x70) = *(long *)(lVar5 + 0x30) + *plVar3 * (long)iVar1;
        return 5;
      }
      bVar2 = FUN_71000beb20(*(long *)(param_1 + 0x68) + 0x10);
      if (bVar2) {
        uVar4 = *(ulong *)(DAT_71052ac580 + 0x30);
        goto LAB_710018840c;
      }
    }
    *(undefined1 *)(param_1 + 0x7c) = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x48) = 6;
  *(char **)(param_1 + 0x40) = "DisconnectStationJob::DisconnectionSucceeded";
  *(code **)(param_1 + 0x30) = FUN_71001882c0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}

