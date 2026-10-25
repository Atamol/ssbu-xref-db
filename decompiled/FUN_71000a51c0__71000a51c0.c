// addr:      71000a51c0
// offset:    0xa51c0
// name:      FUN_71000a51c0
// mangled:   
// signature: undefined __cdecl FUN_71000a51c0(long param_1, long param_2)


void FUN_71000a51c0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if (*(char *)(param_2 + 0xc) == '\0') {
    FUN_7100093660();
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x16c0));
  iVar1 = *(int *)(param_1 + 0x8b8);
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x8b0) + lVar2 * 8) == param_2) goto LAB_71000a522c;
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  *(long *)(*(long *)(param_1 + 0x8b0) + (long)iVar1 * 8) = param_2;
  *(int *)(param_1 + 0x8b8) = *(int *)(param_1 + 0x8b8) + 1;
LAB_71000a522c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x16c0));
  return;
}

