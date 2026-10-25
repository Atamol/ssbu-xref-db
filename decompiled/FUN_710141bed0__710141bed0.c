// addr:      710141bed0
// offset:    0x141bed0
// name:      FUN_710141bed0
// mangled:   
// signature: undefined __cdecl FUN_710141bed0(long param_1)


void FUN_710141bed0(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  cVar1 = *(char *)(lVar3 + 0x48);
  *(char *)(lVar3 + 0x22) = cVar1;
  *(char *)(lVar3 + 0x23) = cVar1;
  *(undefined2 *)(lVar3 + 0x20) = 0;
  lVar2 = *(long *)(*(long *)(lVar3 + 8) + 0x80);
  if (cVar1 == '\0') {
    lVar2 = lVar2 + 0xa0;
  }
  else {
    lVar2 = lVar2 + 0xb0;
  }
  FUN_710377aee0(0x3f800000,lVar2);
  if (*(char *)(lVar3 + 0x48) != '\0') {
    *(undefined4 *)(lVar3 + 0x3c) = *(undefined4 *)(lVar3 + 0x4c);
    *(undefined4 *)(lVar3 + 0x40) = *(undefined4 *)(lVar3 + 0x4c);
    *(undefined2 *)(lVar3 + 0x38) = 0;
    FUN_710377a280(*(long *)(*(long *)(lVar3 + 8) + 0x80) + 0x90,(byte *)"mel_kumite_opponent",1);
    return;
  }
  return;
}

