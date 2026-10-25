// addr:      7101d0e4a0
// offset:    0x1d0e4a0
// name:      FUN_7101d0e4a0
// mangled:   
// signature: undefined __cdecl FUN_7101d0e4a0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d0e4a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  
  FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 0xf8) + 0x10),0x7104308701);
  FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 0x100) + 0x10),0x7104308701);
  if (0 < *(int *)(param_1 + 0x108)) {
    uVar4 = 0;
    do {
      FUN_7103778430(*(long *)(param_1 + 0x100) + 8,"replay_icon_stop_%d",uVar4 & 0xffffffff,param_4
                     ,param_5,param_6,param_7,param_8);
      if (3 < uVar4) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = *(long *)(param_1 + 0x100);
      lVar1 = lVar3 + uVar4;
      *(undefined1 *)(lVar1 + 0x4c) = 0;
      pcVar2 = "icon_reset_%d";
      if (*(char *)(lVar1 + 0x48) != '\0') {
        pcVar2 = "icon_down_%d";
      }
      FUN_7103778430(lVar3 + 8,pcVar2,uVar4 & 0xffffffff,param_4,param_5,param_6,param_7,param_8);
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)*(int *)(param_1 + 0x108));
  }
  return;
}

