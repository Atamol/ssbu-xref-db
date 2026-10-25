// addr:      71019deb30
// offset:    0x19deb30
// name:      FUN_71019deb30
// mangled:   
// signature: undefined __cdecl FUN_71019deb30(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71019deb30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
  uVar1 = *(uint *)(*(long *)(param_1 + 0xe8) + 0x254);
  lVar4 = *(long *)**(long **)(param_1 + 0xe0);
  if (uVar1 != *(uint *)(param_1 + 0xf0)) {
    FUN_7103778430((long)((long *)**(long **)(param_1 + 0xe0) + 1),"type_0%d",(ulong)uVar1,param_4,
                   param_5,param_6,param_7,param_8);
    *(uint *)(param_1 + 0xf0) = uVar1;
  }
  lVar3 = *(long *)(lVar4 + 0x600);
  if ((*(char *)(lVar3 + 0x4aa) != '\0') && ((*(byte *)(lVar3 + 0x1ac) >> 1 & 1) != 0)) {
    lVar3 = *(long *)(lVar5 + 0x80);
    if (*(char *)(lVar3 + 0xc9) == '\0') {
      iVar2 = 4;
    }
    else {
      iVar2 = 0;
    }
    FUN_7103771be0((long *)(lVar3 + 0x2260),iVar2,0);
    *(undefined4 *)(lVar3 + 0x2270) = *(undefined4 *)(*(long *)(lVar3 + 0x2260) + 0x25c);
  }
  iVar2 = *(int *)(*(long *)(param_1 + 0xe8) + 0x25c);
  *(int *)(param_1 + 0xf4) = iVar2;
  if (iVar2 == -1) {
    if (*(int *)(*(long *)(lVar5 + 0x80) + 0x2270) != 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0xf8) = 1;
  }
  *(undefined1 *)(*(long *)(lVar4 + 0x600) + 0x4aa) = 0;
  if (*(uint *)(param_1 + 0xcc) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xcc) * 4 + 0x80) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

