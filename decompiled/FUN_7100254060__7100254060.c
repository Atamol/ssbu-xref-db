// addr:      7100254060
// offset:    0x254060
// name:      FUN_7100254060
// mangled:   
// signature: undefined8 __cdecl FUN_7100254060(long param_1, long param_2)


undefined8 FUN_7100254060(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long alStack_78 [2];
  undefined **local_68;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined8 local_48;
  undefined ***local_38;
  
  lVar1 = FUN_71001b52a0(param_2);
  if (((lVar1 == 2) && (**(byte **)(param_2 + 0x18) - 0x41 < 0x1a)) &&
     ((*(byte **)(param_2 + 0x18))[1] - 0x41 < 0x1a)) {
    local_50 = local_60;
    local_60[0] = 0;
    local_48 = 0x10;
    local_68 = &PTR_FUN_710509cc08;
    FUN_71001b47e0((long)&local_68,PTR_DAT_7104f5d1b0,-1);
    FUN_71001b7960(alStack_78,param_2);
    local_38 = &local_68;
    auVar3 = FUN_71000ebb80((long *)(param_1 + 0x10),(long)&local_68,"",(long *)&local_38);
    FUN_71001b76e0((long *)(auVar3._0_8_ + 0x48),alStack_78);
    FUN_71001b78a0(alStack_78);
    local_68 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&local_68);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

