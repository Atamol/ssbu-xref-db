// addr:      7101a99ed0
// offset:    0x1a99ed0
// name:      FUN_7101a99ed0
// mangled:   
// signature: undefined __cdecl FUN_7101a99ed0(long param_1)


void FUN_7101a99ed0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0xfc) == 0) {
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x110) + 0x10),0x710435b0ba);
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x110) + 0x10),0x7104349df1);
    *(undefined1 *)(param_1 + 0x168) = 0;
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x110),0);
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x130) + 8);
    plVar1 = *(long **)(lVar3 + 0xe8);
    if (((plVar1 != (long *)0x0) && (*(int *)(lVar3 + 0xd8) == 3)) &&
       (*(char *)(lVar3 + 0x110) == '\0')) {
      if (*(char *)(lVar3 + 0x112) == '\0') {
        (**(code **)(*plVar1 + 0xa0))(plVar1,0);
        (**(code **)(**(long **)(lVar3 + 0xe8) + 0x18))();
        *(undefined1 *)(lVar3 + 0x112) = 1;
      }
      *(undefined1 *)(lVar3 + 0x113) = 0;
    }
  }
  plVar1 = *(long **)(*(long *)(*(long *)(param_1 + 0x130) + 8) + 0xe8);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0xd8))();
    lVar3 = *(long *)(*(long *)(param_1 + 0x130) + 8);
    plVar1 = *(long **)(lVar3 + 0xe8);
    if ((uVar2 & 1) == 0) {
      if (plVar1 == (long *)0x0) {
        return;
      }
      if (*(char *)(lVar3 + 0x111) == '\0') {
        return;
      }
      if (*(int *)(lVar3 + 0xd8) != 3) {
        return;
      }
      FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x110) + 0x10),0x71042c358c);
    }
    else if (((plVar1 != (long *)0x0) && (*(int *)(lVar3 + 0xd8) == 3)) &&
            ((*(char *)(lVar3 + 0x110) == '\0' && (*(char *)(lVar3 + 0x112) != '\0')))) {
      (**(code **)(*plVar1 + 0x10))();
      *(undefined1 *)(lVar3 + 0x112) = 0;
    }
  }
  if (*(uint *)(param_1 + 0xf4) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xf4) * 4 + 0xa8) = 2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

