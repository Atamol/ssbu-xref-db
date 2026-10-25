// addr:      7101c47ff0
// offset:    0x1c47ff0
// name:      FUN_7101c47ff0
// mangled:   
// signature: undefined8 __cdecl FUN_7101c47ff0(long param_1)


undefined8 FUN_7101c47ff0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(int *)(*(long *)(param_1 + 0x1a0) + 0x108) == 0) ||
     (*(int *)(*(long *)(param_1 + 0x1a0) + 0x268) == 0)) {
    uVar2 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x40) != 0) {
      if ((DAT_71053144d8 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_71053144d8);
        if (iVar1 != 0) {
          FUN_7101764000();
          FUN_71000001c0();
          __cxa_guard_release(&DAT_71053144d8);
        }
      }
      if ((long *)**(undefined8 **)(param_1 + 0x40) != (long *)0x0) {
        FUN_7103375650((long *)**(undefined8 **)(param_1 + 0x40),"g_is_rule_priority",
                       &DAT_71043cdb7b);
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

