// addr:      7100243a70
// offset:    0x243a70
// name:      FUN_7100243a70
// mangled:   
// signature: undefined __cdecl FUN_7100243a70(long param_1)


void FUN_7100243a70(long param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  
  switch(*(undefined4 *)(param_1 + 100)) {
  case 0:
    FUN_7100243b10(param_1);
    return;
  case 1:
    FUN_7100243d30(param_1);
    return;
  case 2:
    if ((*(long *)(param_1 + 0x3e0) == 0) || (*(long *)(param_1 + 0x2c0) == 0)) {
      uVar1 = 1;
    }
    else {
      if (*(long *)(param_1 + 0x130) == 0) {
        pcVar2 = (code *)0x0;
      }
      else {
        pcVar2 = (code *)0x0;
        if (*(long *)(*(long *)(param_1 + 0x130) + 0x10) != 0) {
          pcVar2 = FUN_7100247110;
        }
      }
      uVar1 = 3;
      if (pcVar2 == (code *)0x0) {
        uVar1 = 1;
      }
    }
    *(undefined4 *)(param_1 + 100) = uVar1;
    break;
  case 3:
    FUN_7100244300(param_1);
    return;
  case 4:
    FUN_7100244640(param_1);
    return;
  }
  return;
}

