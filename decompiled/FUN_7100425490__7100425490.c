// addr:      7100425490
// offset:    0x425490
// name:      FUN_7100425490
// mangled:   
// signature: undefined __cdecl FUN_7100425490(void)


void FUN_7100425490(void)

{
  int iVar1;
  
  DAT_71053290b0 = 0;
  DAT_71053290b8 = "SystemInitSaveScene";
  if (((DAT_71053290f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053290f8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053290f8);
  }
  DAT_71053290c0 = &PTR_PTR_71050b8950;
  DAT_71053290c8 = "SystemStartupScene";
  if (((DAT_7105329100 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329100), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329100);
  }
  DAT_71053290d0 = &PTR_PTR_71050b8958;
  DAT_71053290d8 = "SystemLoadSaveScene";
  if (((DAT_7105329108 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329108), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329108);
  }
  DAT_71053290e8 = 0;
  DAT_71053290f0 = 0;
  DAT_71053290e0 = &PTR_PTR_71050b8960;
  return;
}

