// addr:      7100193e40
// offset:    0x193e40
// name:      FUN_7100193e40
// mangled:   
// signature: undefined FUN_7100193e40(void)


undefined8 FUN_7100193e40(long param_1)

{
  if (((((((((*(char *)(param_1 + 0x6c) != '\0') || (*(char *)(param_1 + 0x6d) != '\0')) ||
           (*(char *)(param_1 + 0x6e) != '\0')) ||
          (((*(char *)(param_1 + 0x6f) != '\0' || (*(char *)(param_1 + 0x70) != '\0')) ||
           ((*(char *)(param_1 + 0x71) != '\0' ||
            ((*(char *)(param_1 + 0x72) != '\0' || (*(char *)(param_1 + 0x73) != '\0')))))))) ||
         (*(char *)(param_1 + 0x74) != '\0')) ||
        ((((((*(char *)(param_1 + 0x75) != '\0' || (*(char *)(param_1 + 0x76) != '\0')) ||
            (*(char *)(param_1 + 0x77) != '\0')) ||
           ((*(char *)(param_1 + 0x78) != '\0' || (*(char *)(param_1 + 0x79) != '\0')))) ||
          (*(char *)(param_1 + 0x7a) != '\0')) ||
         (((*(char *)(param_1 + 0x7b) != '\0' || (*(char *)(param_1 + 0x7c) != '\0')) ||
          (((*(char *)(param_1 + 0x7d) != '\0' ||
            (((*(char *)(param_1 + 0x7e) != '\0' || (*(char *)(param_1 + 0x7f) != '\0')) ||
             (*(char *)(param_1 + 0x80) != '\0')))) ||
           (((*(char *)(param_1 + 0x81) != '\0' || (*(char *)(param_1 + 0x82) != '\0')) ||
            (*(char *)(param_1 + 0x83) != '\0')))))))))) ||
       (((*(char *)(param_1 + 0x84) != '\0' || (*(char *)(param_1 + 0x85) != '\0')) ||
        ((*(char *)(param_1 + 0x86) != '\0' ||
         (((*(char *)(param_1 + 0x87) != '\0' || (*(char *)(param_1 + 0x88) != '\0')) ||
          (*(char *)(param_1 + 0x89) != '\0')))))))) ||
      ((*(char *)(param_1 + 0x8a) != '\0' || (*(char *)(param_1 + 0x8b) != '\0')))) &&
     (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x60))) {
    return 5;
  }
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(code **)(param_1 + 0x30) = FUN_7100193d30;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "DestroyMeshJob::CleanupMesh";
  return 0;
}

