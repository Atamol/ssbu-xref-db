// addr:      710141be10
// offset:    0x141be10
// name:      FUN_710141be10
// mangled:   
// signature: undefined __cdecl FUN_710141be10(long param_1)


void FUN_710141be10(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x28);
  if ((*(char *)((long)plVar2 + 0x21) == '\0') &&
     (*(char *)(*(long *)(*(long *)(*plVar2 + 0x10) + 8) + 0x49) == '\0')) goto LAB_710141be80;
  if (*(char *)((long)plVar2 + 0x23) == '\0') {
    lVar1 = *(long *)(plVar2[1] + 0x80);
LAB_710141be74:
    lVar1 = lVar1 + 0xa0;
  }
  else {
    lVar1 = *(long *)(plVar2[1] + 0x80);
    if ((~*(uint *)(*(long *)(*(long *)(*plVar2 + 0x10) + 8) + 0x50) & 3) != 0) goto LAB_710141be74;
    lVar1 = lVar1 + 0xb0;
  }
  FUN_710377aee0(0x3f800000,lVar1);
LAB_710141be80:
  if (*(char *)((long)plVar2 + 0x39) != '\0') {
    FUN_710377a280(*(long *)(plVar2[1] + 0x80) + 0x90,(byte *)"mel_kumite_opponent",1);
    return;
  }
  return;
}

