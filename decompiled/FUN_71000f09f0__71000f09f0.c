// addr:      71000f09f0
// offset:    0xf09f0
// name:      FUN_71000f09f0
// mangled:   
// signature: undefined FUN_71000f09f0(void)


undefined8 FUN_71000f09f0(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined **ppuStack_68;
  undefined4 uStack_60;
  
  bVar1 = FUN_71000c5ac0(DAT_71052acd90,(long *)(param_1 + 0x80));
  if ((bVar1) && (*(char *)(*(long *)(param_1 + 0x70) + 0x38) == -2)) {
    lVar2 = FUN_7100161fb0(DAT_71052add68);
    FUN_7100160230(&ppuStack_68,param_1 + 0x80);
    FUN_71000beb40(lVar2 + 0x108,(long)&ppuStack_68);
    ppuStack_68 = &PTR_FUN_7104f4a808;
    FUN_71000b1cf0();
    lVar2 = FUN_7100161fb0(DAT_71052add68);
    uStack_60 = 0;
    ppuStack_68 = (undefined **)0x20000;
    (**(code **)(*(long *)(lVar2 + 0x108) + 0x28))(lVar2 + 0x108,&ppuStack_68);
  }
  *(char **)(param_1 + 0x40) = "NexConnectStationJob::TryCurrentAddress";
  *(code **)(param_1 + 0x30) = FUN_71000f1bc0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}

