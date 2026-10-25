// addr:      710018f800
// offset:    0x18f800
// name:      FUN_710018f800
// mangled:   
// signature: undefined8 __cdecl FUN_710018f800(long param_1)


undefined8 FUN_710018f800(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = 0;
  do {
    while (bVar1 = FUN_7100190a90(DAT_71052adfc0,(byte)uVar2), bVar1) {
      if (*(char *)(param_1 + 0x6e + uVar2) != '\0') {
        if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x60)) {
          return 5;
        }
        goto LAB_710018f890;
      }
      uVar2 = uVar2 + 1;
      if (0x1f < uVar2) goto LAB_710018f890;
    }
    *(undefined1 *)(param_1 + 0x6e + uVar2) = 0;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x20);
LAB_710018f890:
  *(code **)(param_1 + 0x30) = FUN_710018f700;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  *(char **)(param_1 + 0x40) = "LeaveWithHostMigrationJob::CleanupMesh";
  return 0;
}

