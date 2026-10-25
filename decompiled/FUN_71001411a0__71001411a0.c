// addr:      71001411a0
// offset:    0x1411a0
// name:      FUN_71001411a0
// mangled:   
// signature: undefined8 __cdecl FUN_71001411a0(long param_1)


undefined8 FUN_71001411a0(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(DAT_71052ac580 + 0x30);
  lVar4 = *(long *)(param_1 + 0xa0);
  plVar2 = FUN_71000bb680();
  iVar1 = 0;
  if (*plVar2 != 0) {
    iVar1 = (int)((lVar3 - lVar4) / *plVar2);
  }
  if (-1 < iVar1) {
    DAT_71052acc0c = iVar1;
  }
  FUN_7100193380(DAT_71052adfc0,0);
  FUN_7100193330(DAT_71052adfc0,1);
  *(char **)(param_1 + 0x40) = "LeaveSessionJob::CompleteProcess";
  *(code **)(param_1 + 0x30) = FUN_7100141ab0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0x320004;
}

