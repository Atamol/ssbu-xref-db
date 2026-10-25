// addr:      7101a016d0
// offset:    0x1a016d0
// name:      FUN_7101a016d0
// mangled:   
// signature: undefined __cdecl FUN_7101a016d0(long param_1)


void FUN_7101a016d0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar3;
  
  if (*(int *)(param_1 + 0x13c) == 0) {
    *(uint *)(*(long *)(param_1 + 0x618) + 0x48) = (uint)*(byte *)(param_1 + 0x211);
    FUN_71019e9460(*(long *)(param_1 + 0x618));
    return;
  }
  lVar3 = *(long *)(param_1 + 0x618);
  if (*(char *)(lVar3 + 0x50) != '\0') {
    FUN_7103778300(0x3f800000,*(long *)(lVar3 + 0x10),0x7104421cea);
    (**(code **)(**(long **)(lVar3 + 0x40) + 0x60))(*(long **)(lVar3 + 0x40),0);
    *(undefined1 *)(lVar3 + 0x50) = 1;
    uVar1 = *(uint *)(*(long *)(param_1 + 0x618) + 0x48);
    uVar2 = (ulong)uVar1;
    if (uVar1 != *(byte *)(param_1 + 0x211)) {
      lVar3 = *(long *)(param_1 + 0x5e8);
      *(char *)(param_1 + 0x211) = (char)uVar1;
      *(uint *)(lVar3 + 0x250) = uVar1;
      if (*(int *)(lVar3 + 0x21c) == 1) {
        FUN_710377a280(lVar3 + 0x88,(byte *)"mel_chara_select_lv_n",1);
        FUN_7103778430(lVar3 + 0x68,"cp_level_%d",(ulong)*(uint *)(lVar3 + 0x250),uVar2,in_x4,in_x5,
                       in_x6,in_x7);
      }
      *(undefined1 *)(param_1 + 0x6ba) = 1;
      *(undefined4 *)(param_1 + 0x698) = 0xd;
    }
    if (0x12 < *(uint *)(param_1 + 0x134)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x134) * 4 + 0xe8) = 3;
  }
  return;
}

