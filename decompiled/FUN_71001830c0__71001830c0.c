// addr:      71001830c0
// offset:    0x1830c0
// name:      FUN_71001830c0
// mangled:   
// signature: undefined8 __cdecl FUN_71001830c0(long param_1)


undefined8 FUN_71001830c0(long param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  int aiStack_30 [4];
  
  uVar2 = FUN_710017e3e0(*(long *)(param_1 + 0x90));
  if (((((uVar2 & 1) == 0) && ((int)(*(long **)(param_1 + 0x90))[0x83] == 0)) ||
      (uVar3 = (**(code **)(**(long **)(param_1 + 0x90) + 0x1c0))(), (uVar3 & 1) != 0)) ||
     (bVar1 = FUN_710017f1d0(*(long *)(param_1 + 0x90)), (bVar1 & 1) != 0)) {
    FUN_7100173f20(aiStack_30,*(long **)(param_1 + 0x88),(undefined4 *)(param_1 + 0x58));
    FUN_71000b4820(*(long *)(param_1 + 0x88),1);
    *(code **)(param_1 + 0x30) = FUN_71001831b0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalEventJob::WaitConnectionStatusUpdated";
  }
  return 5;
}

