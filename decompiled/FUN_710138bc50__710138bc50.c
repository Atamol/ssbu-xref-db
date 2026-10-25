// addr:      710138bc50
// offset:    0x138bc50
// name:      FUN_710138bc50
// mangled:   
// signature: undefined __cdecl FUN_710138bc50(long * param_1)


/* WARNING: Control flow encountered bad instruction data */

void FUN_710138bc50(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  if ((((DAT_71052c3420 != 0) && (param_1[1] != 0)) &&
      (uVar1 = (**(code **)(*param_1 + 0x10))(param_1), (uVar1 & 1) != 0)) &&
     (((DAT_710532f8b0 == 0 || (*(int *)(*(long *)(DAT_710532f8b0 + 8) + 0x138) == 0)) ||
      (*(char *)(*(long *)(DAT_710532f8b0 + 8) + 0x2b8) != '\v')))) {
    if ((long *)param_1[1] == (long *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    lVar2 = *(long *)param_1[1];
    if (*(char *)(lVar2 + 0xd3a) == '\0') {
      lVar2 = *(long *)(*(long *)(*(long *)(*(long *)(lVar2 + 0x420) + 0x130) + 0x80) + 0x330);
    }
    else {
      lVar2 = *(long *)(*(long *)(lVar2 + 0xa50) + 8);
      if (lVar2 == 0) {
        return;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0x80) + 0x30);
    }
    FUN_710377a280(lVar2,(byte *)"mel_mockbattle_remaining_time",1);
    return;
  }
  return;
}

