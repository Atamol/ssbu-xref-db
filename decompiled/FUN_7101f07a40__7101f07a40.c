// addr:      7101f07a40
// offset:    0x1f07a40
// name:      FUN_7101f07a40
// mangled:   
// signature: undefined __cdecl FUN_7101f07a40(uint * param_1)


void FUN_7101f07a40(uint *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  uint local_68 [2];
  undefined1 local_60 [64];
  
  local_60[0] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  if (*param_1 < 2) {
    FUN_710062dc20(local_68,"subwindow_%s_off");
    if (param_1[0x39] == 0) {
      FUN_7103778300(0x3f800000,*(long *)(*(long *)**(undefined8 **)(param_1 + 4) + 0x10),
                     (long)local_60);
    }
    else {
      lVar1 = *(long *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 4) + 0x10) + 8);
      if (((lVar1 == 0) ||
          (plVar2 = (long *)FUN_71037964b0(lVar1,(long)local_60), plVar2 == (long *)0x0)) ||
         (uVar3 = (**(code **)(*plVar2 + 0x138))(), (uVar3 & 1) != 0)) {
        if (0x12 < param_1[0x37]) goto LAB_7101f07af4;
        param_1[(long)(int)param_1[0x37] + 0x24] = 0;
      }
    }
    return;
  }
LAB_7101f07af4:
                    /* WARNING: Subroutine does not return */
  abort();
}

