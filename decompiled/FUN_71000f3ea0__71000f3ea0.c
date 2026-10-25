// addr:      71000f3ea0
// offset:    0xf3ea0
// name:      FUN_71000f3ea0
// mangled:   
// signature: undefined __cdecl FUN_71000f3ea0(long param_1)


void FUN_71000f3ea0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined2 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar2 = DAT_71052adb38;
  lVar1 = DAT_71052adb38 + 0x168;
  lVar4 = (**(code **)(**(long **)(lVar1 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8) + 0x120))()
  ;
  uVar5 = (**(code **)(**(long **)(lVar1 + (ulong)*(byte *)(lVar2 + 0x162) * 8) + 0xf0))();
  FUN_7100112c10(lVar4,uVar5);
  uVar3 = FUN_7100146c10(lVar2);
  FUN_71001129d0(lVar4,uVar3);
  *(code **)(param_1 + 0x30) = FUN_710013f3b0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "JoinSessionJob::CompleteProcess";
  return;
}

