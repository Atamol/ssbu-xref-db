// addr:      7101da2d40
// offset:    0x1da2d40
// name:      FUN_7101da2d40
// mangled:   
// signature: undefined __cdecl FUN_7101da2d40(long param_1)


void FUN_7101da2d40(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x774) == 0) {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x58),0x710424f997);
    (**(code **)(**(long **)(param_1 + 0x70) + 0x70))(*(long **)(param_1 + 0x70),1);
    (**(code **)(**(long **)(param_1 + 0x80) + 0x70))(*(long **)(param_1 + 0x80),0);
    (**(code **)(**(long **)(param_1 + 0x78) + 0x70))(*(long **)(param_1 + 0x78),0);
    (**(code **)(**(long **)(param_1 + 0x88) + 0x70))(*(long **)(param_1 + 0x88),0);
    lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x80);
    (**(code **)(**(long **)(lVar4 + 0x2268) + 0x70))(*(long **)(lVar4 + 0x2268),0);
    if (*(char *)(lVar4 + 0x11b4) == '\0') {
      FUN_7103771a80((long *)(lVar4 + 0x2268),3,0);
    }
    else {
      lVar4 = *(long *)(lVar4 + 0x2268);
      if (*(int *)(lVar4 + 0x254) == 3) {
        FUN_710376b960(lVar4);
      }
    }
    FUN_7101da8880(param_1);
    return;
  }
  if (((*(int *)(param_1 + 0x428) == 0) &&
      (lVar4 = *(long *)(*(long *)**(undefined8 **)(param_1 + 0x20) + 0x600),
      *(char *)(lVar4 + 0x4aa) != '\0')) && ((*(byte *)(lVar4 + 0x1b8) >> 1 & 1) != 0)) {
    lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x80);
    (**(code **)(**(long **)(lVar4 + 0x2268) + 0x70))(*(long **)(lVar4 + 0x2268),1);
    iVar5 = -1;
    if (*(int *)(lVar4 + 0x11b0) - 1U < 5) {
      iVar5 = 1;
    }
    iVar2 = 2;
    if (*(int *)(lVar4 + 0x11b0) < 6) {
      iVar2 = iVar5;
    }
    FUN_7103771a80((long *)(lVar4 + 0x2268),iVar2,0);
  }
  else {
    uVar3 = (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 8) + 0x80) + 0x2268) + 0x78))();
    if ((uVar3 & 1) == 0) {
      iVar2 = *(int *)(*(long *)(param_1 + 0x70) + 0x254);
      iVar5 = 5;
      if (iVar2 != 1) {
        iVar5 = 0;
      }
      iVar1 = 4;
      if (iVar2 != 0) {
        iVar1 = iVar5;
      }
      if (iVar1 == 0) {
        return;
      }
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x58),0x71043cf88f);
      if (*(uint *)(param_1 + 0x76c) < 0x13) {
        *(int *)(param_1 + (long)(int)*(uint *)(param_1 + 0x76c) * 4 + 0x720) = iVar1;
        return;
      }
      goto LAB_7101da2f60;
    }
    *(undefined1 *)(param_1 + 0x44f) = 1;
  }
  FUN_710376b960(*(long *)(param_1 + 0x70));
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x58),0x71043cf88f);
  if (*(uint *)(param_1 + 0x76c) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x76c) * 4 + 0x720) = 6;
    return;
  }
LAB_7101da2f60:
                    /* WARNING: Subroutine does not return */
  abort();
}

