// addr:      71000140a0
// offset:    0x140a0
// name:      FUN_71000140a0
// mangled:   
// signature: bool __cdecl FUN_71000140a0(long param_1, long param_2)


bool FUN_71000140a0(long param_1,long param_2)

{
  char *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 in_x7;
  
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    lVar3 = FUN_710000bc00(*(long *)(param_1 + 0xa8));
    lVar4 = FUN_710000bc10(*(long *)(param_1 + 0xa8));
    if (*(long **)(param_2 + 0x8f0) == (long *)0x0) {
      lVar5 = -2;
      bVar2 = false;
    }
    else {
      lVar5 = *(long *)(**(long **)(param_2 + 0x8f0) + 0xc0);
      bVar2 = 0 < lVar3 && lVar3 < lVar5;
    }
    if (0 < lVar4) {
      bVar2 = (bool)(bVar2 | lVar4 < *(long *)(param_2 + 0x40));
    }
    pcVar1 = "TRUE";
    if (!bVar2) {
      pcVar1 = "FALSE";
    }
    FUN_7100015de0(param_1,(byte *)"Conn: %ld (%p) Receive pipe weight: (%ld/%zu), penalized: %s\n",
                   *(undefined8 *)(param_2 + 0x68),param_2,lVar5,*(long *)(param_2 + 0x40),pcVar1,
                   in_x7);
  }
  return bVar2;
}

