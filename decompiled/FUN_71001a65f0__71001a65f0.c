// addr:      71001a65f0
// offset:    0x1a65f0
// name:      FUN_71001a65f0
// mangled:   
// signature: undefined8 __cdecl FUN_71001a65f0(long param_1)


undefined8 FUN_71001a65f0(long param_1)

{
  long lVar1;
  uint uVar2;
  char *pcVar3;
  code *pcVar4;
  
  if ((*(char *)(param_1 + 0xf6) != '\0') && (*(int *)(param_1 + 0x100) != 1)) {
    uVar2 = FUN_710018eaf0(*(long **)(DAT_71052adfc0 + 0x10),(undefined4 *)(param_1 + 0x100));
    if ((uVar2 & 1) != 0) {
      FUN_71000b4820(*(long *)(DAT_71052adfc0 + 0x10),0);
      pcVar4 = FUN_71001a7ea0;
      pcVar3 = "ProcessUpdateMeshJob::WaitLeaveMesh";
      goto LAB_71001a6680;
    }
  }
  lVar1 = DAT_71052adfc0;
  *(undefined4 *)(DAT_71052adfc0 + 0xb4) = 6;
  FUN_7100191ed0(lVar1,6);
  pcVar4 = FUN_71001a7dd0;
  pcVar3 = "ProcessUpdateMeshJob::CleanupByProcessFailure";
LAB_71001a6680:
  *(code **)(param_1 + 0x30) = pcVar4;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar3;
  return 0;
}

