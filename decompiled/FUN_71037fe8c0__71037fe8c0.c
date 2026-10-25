// addr:      71037fe8c0
// offset:    0x37fe8c0
// name:      FUN_71037fe8c0
// mangled:   
// signature: undefined __cdecl FUN_71037fe8c0(long param_1)


void FUN_71037fe8c0(long param_1)

{
  code *pcVar1;
  
  DAT_7105940900 = nvnBootstrapLoader("nvnDeviceInitialize");
  DAT_7105940918 = (undefined *)nvnBootstrapLoader("nvnDeviceGetProcAddress");
  DAT_71052aa340 = (code *)nvnBootstrapLoader("nvnDeviceGetProcAddress");
  pcVar1 = (code *)(*DAT_71052aa340)(0,"nvnSetExternalDebuggerEnabledNVX");
  (*pcVar1)(*(undefined1 *)(param_1 + 8));
  FUN_71037f8180(0,DAT_7105940918);
  FUN_7100033a40(0,DAT_71052aa340);
  return;
}

