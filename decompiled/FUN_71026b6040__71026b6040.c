// addr:      71026b6040
// offset:    0x26b6040
// name:      FUN_71026b6040
// mangled:   
// signature: undefined __cdecl FUN_71026b6040(undefined8 * param_1)


void FUN_71026b6040(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_71050cdfc0;
  if (*(char *)((long)param_1 + 0x5c) != '\0') {
    if (((long *)param_1[10] != (long *)0x0) && (*(int *)(param_1 + 0xb) != -1)) {
      plVar1 = *(long **)(*(long *)param_1[10] + 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x58))(plVar1,8);
      }
      *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
    }
    *(undefined1 *)((long)param_1 + 0x5c) = 0;
  }
  return;
}

