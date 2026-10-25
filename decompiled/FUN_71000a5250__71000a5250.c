// addr:      71000a5250
// offset:    0xa5250
// name:      FUN_71000a5250
// mangled:   
// signature: undefined __cdecl FUN_71000a5250(long param_1, int param_2)


void FUN_71000a5250(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + (long)param_2 * 8 + 0xb0);
  if (lVar4 != 0) {
    do {
      while (lVar3 = *(long *)(lVar4 + 0x1d0), *(char *)(lVar4 + 0xc) != '\0') {
        nn::os::LockMutex((MutexType *)(param_1 + 0x16c0));
        iVar1 = *(int *)(param_1 + 0x8b8);
        if (0 < iVar1) {
          lVar2 = 0;
          do {
            if (*(long *)(*(long *)(param_1 + 0x8b0) + lVar2 * 8) == lVar4) goto LAB_71000a52d8;
            lVar2 = lVar2 + 1;
          } while (lVar2 < iVar1);
        }
        *(long *)(*(long *)(param_1 + 0x8b0) + (long)iVar1 * 8) = lVar4;
        *(int *)(param_1 + 0x8b8) = *(int *)(param_1 + 0x8b8) + 1;
LAB_71000a52d8:
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x16c0));
        lVar4 = lVar3;
        if (lVar3 == 0) goto LAB_71000a52fc;
      }
      FUN_7100093660();
      lVar4 = lVar3;
    } while (lVar3 != 0);
  }
LAB_71000a52fc:
  lVar4 = *(long *)(param_1 + (long)param_2 * 8 + 0x4b0);
  if (lVar4 != 0) {
    do {
      while (lVar3 = *(long *)(lVar4 + 0x1d0), *(char *)(lVar4 + 0xc) == '\0') {
        FUN_7100093660();
        *(undefined1 *)(lVar4 + 0xf) = 0;
        lVar4 = lVar3;
        if (lVar3 == 0) {
          return;
        }
      }
      nn::os::LockMutex((MutexType *)(param_1 + 0x16c0));
      iVar1 = *(int *)(param_1 + 0x8b8);
      if (0 < iVar1) {
        lVar2 = 0;
        do {
          if (*(long *)(*(long *)(param_1 + 0x8b0) + lVar2 * 8) == lVar4) goto LAB_71000a5368;
          lVar2 = lVar2 + 1;
        } while (lVar2 < iVar1);
      }
      *(long *)(*(long *)(param_1 + 0x8b0) + (long)iVar1 * 8) = lVar4;
      *(int *)(param_1 + 0x8b8) = *(int *)(param_1 + 0x8b8) + 1;
LAB_71000a5368:
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x16c0));
      *(undefined1 *)(lVar4 + 0xf) = 0;
      lVar4 = lVar3;
    } while (lVar3 != 0);
  }
  return;
}

