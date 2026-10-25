// addr:      710141bd50
// offset:    0x141bd50
// name:      FUN_710141bd50
// mangled:   
// signature: undefined __cdecl FUN_710141bd50(long param_1, long param_2)


void FUN_710141bd50(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x28);
  bVar1 = false;
  if (*(char *)(param_2 + 0x14) != '\0') {
    bVar1 = (~*(uint *)(*(long *)(*(long *)(*plVar3 + 0x10) + 8) + 0x50) & 3) == 0;
  }
  *(bool *)(plVar3 + 9) = bVar1;
  *(undefined4 *)((long)plVar3 + 0x4c) = *(undefined4 *)(param_2 + 0x18);
  *(bool *)((long)plVar3 + 0x23) = bVar1;
  *(bool *)((long)plVar3 + 0x22) = bVar1;
  *(undefined2 *)(plVar3 + 4) = 0;
  if (bVar1 == false) {
    lVar2 = *(long *)(plVar3[1] + 0x80) + 0xa0;
  }
  else {
    lVar2 = *(long *)(plVar3[1] + 0x80) + 0xb0;
  }
  FUN_710377aee0(0x3f800000,lVar2);
  if ((char)plVar3[9] != '\0') {
    *(undefined4 *)((long)plVar3 + 0x3c) = *(undefined4 *)((long)plVar3 + 0x4c);
    *(undefined4 *)(plVar3 + 8) = *(undefined4 *)((long)plVar3 + 0x4c);
    *(undefined2 *)(plVar3 + 7) = 0;
    FUN_710377a280(*(long *)(plVar3[1] + 0x80) + 0x90,(byte *)"mel_kumite_opponent",1);
    return;
  }
  return;
}

