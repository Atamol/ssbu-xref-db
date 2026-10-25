// addr:      71001b7ca0
// offset:    0x1b7ca0
// name:      FUN_71001b7ca0
// mangled:   
// signature: long * __cdecl FUN_71001b7ca0(long * param_1, long * param_2)


long * FUN_71001b7ca0(long *param_1,long *param_2)

{
  code *pcVar1;
  
  if (param_1 != param_2) {
    if ((int)param_1[1] == 4) {
      pcVar1 = *(code **)(*param_1 + -0x14);
      if (pcVar1 == (code *)0x0) {
        free((undefined8 *)(*param_1 + -0x14));
      }
      else {
        (*pcVar1)();
      }
    }
    *(int *)(param_1 + 1) = (int)param_2[1];
    switch((int)param_2[1]) {
    case 1:
    case 2:
    case 4:
    case 5:
    case 6:
      *param_1 = *param_2;
      break;
    case 3:
      *(char *)param_1 = (char)*param_2;
    }
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return param_1;
}

