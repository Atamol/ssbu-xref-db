// addr:      71001a1100
// offset:    0x1a1100
// name:      FUN_71001a1100
// mangled:   
// signature: undefined FUN_71001a1100(void)


undefined8 FUN_71001a1100(long param_1)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  
  bVar1 = FUN_7100193110(DAT_71052adfc0);
  if (bVar1 < 0x20) {
    plVar2 = (long *)FUN_7100193580(DAT_71052adfc0);
    uVar3 = FUN_7100199ef0(plVar2,(uint)bVar1);
    if (((uVar3 & 1) == 0) && (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58))) {
      return 5;
    }
  }
  *(code **)(param_1 + 0x30) = FUN_71001a1190;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "ProcessDestroyMeshJob::CleanupMesh";
  return 5;
}

