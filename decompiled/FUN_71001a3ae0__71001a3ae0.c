// addr:      71001a3ae0
// offset:    0x1a3ae0
// name:      FUN_71001a3ae0
// mangled:   
// signature: undefined FUN_71001a3ae0(void)


undefined8 FUN_71001a3ae0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_7100161fa0(DAT_71052add68);
  if (*(long *)(lVar1 + 0x98) != 0) {
    plVar2 = (long *)FUN_7100193580(DAT_71052adfc0);
    FUN_7100199c80(plVar2,(long *)(param_1 + 0x90),*(undefined1 *)(param_1 + 0xba));
    plVar2 = (long *)FUN_7100161fa0(DAT_71052add68);
    lVar1 = (**(code **)(*plVar2 + 0x58))(plVar2,(long *)(param_1 + 0x90));
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x48) = 6;
    }
  }
  *(char **)(param_1 + 0x40) = "ProcessJoinRequestJob::InitialStep";
  *(code **)(param_1 + 0x30) = FUN_71001a3920;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}

