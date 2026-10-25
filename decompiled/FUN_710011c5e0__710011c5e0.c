// addr:      710011c5e0
// offset:    0x11c5e0
// name:      FUN_710011c5e0
// mangled:   
// signature: undefined FUN_710011c5e0(void)


undefined8 FUN_710011c5e0(long param_1)

{
  long lVar1;
  undefined **ppuStack_58;
  undefined4 uStack_50;
  
  lVar1 = *(long *)(param_1 + 0x70);
  FUN_7100160230(&ppuStack_58,param_1 + 0x80);
  FUN_71000beb40(lVar1 + 0x10,(long)&ppuStack_58);
  ppuStack_58 = &PTR_FUN_7104f4a808;
  FUN_71000b1cf0();
  uStack_50 = 0;
  ppuStack_58 = (undefined **)0x40000000;
  (**(code **)(**(long **)(param_1 + 0x70) + 0x18))(*(long **)(param_1 + 0x70),&ppuStack_58);
  *(char **)(param_1 + 0x40) = "ConnectStationJob::SendConnectionRequest";
  *(code **)(param_1 + 0x30) = FUN_71001867a0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}

