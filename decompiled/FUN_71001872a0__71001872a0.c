// addr:      71001872a0
// offset:    0x1872a0
// name:      FUN_71001872a0
// mangled:   
// signature: undefined FUN_71001872a0(void)


undefined8 FUN_71001872a0(long param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  long *plVar4;
  long lVar5;
  
  piVar3 = *(int **)(param_1 + 0x68);
  if ((piVar3 == (int *)0x0) || ((char)piVar3[10] == '\0')) {
    bVar2 = FUN_71001873a0(param_1);
    if (bVar2) {
      *(undefined1 *)(param_1 + 0x79) = 0;
      lVar5 = DAT_71052ac580;
      iVar1 = *(int *)(param_1 + 0x60);
      plVar4 = FUN_71000bb680();
      *(long *)(param_1 + 0x58) = *(long *)(lVar5 + 0x30) + *plVar4 * (long)iVar1;
      *(char **)(param_1 + 0x40) = "ConnectStationJob::WaitRequestAck";
      *(code **)(param_1 + 0x30) = FUN_7100186b50;
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    return 5;
  }
  if (2 < *piVar3 - 2U) {
    FUN_71000b4260(piVar3);
  }
  lVar5 = *(long *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x48) == 4) {
      *(undefined4 *)(lVar5 + 0x48) = 6;
      return 1;
    }
    return 1;
  }
  return 1;
}

