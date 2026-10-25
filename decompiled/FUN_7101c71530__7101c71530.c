// addr:      7101c71530
// offset:    0x1c71530
// name:      FUN_7101c71530
// mangled:   
// signature: undefined __cdecl FUN_7101c71530(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c71530(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  undefined **local_68;
  ulong local_60;
  ushort local_54 [2];
  
  lVar1 = param_1 + 0x170;
  do {
    FUN_7103776910(&local_68,param_1,(long ****)"set_txt_nomal",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar2 = local_60;
    if (*(long **)(local_60 + 0x10) != (long *)0x0) {
      param_3 = 0;
      param_4 = 0;
      local_54[0] = 0;
      local_54[1] = 0;
      FUN_71037a2270(*(long **)(local_60 + 0x10),local_54,0,0);
    }
    local_68 = &PTR_FUN_710523d9a8;
    local_60 = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    FUN_7103776910(&local_68,param_1,(long ****)"set_txt_italic",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar2 = local_60;
    if (*(long **)(local_60 + 0x10) != (long *)0x0) {
      param_3 = 0;
      param_4 = 0;
      local_54[0] = 0;
      local_54[1] = 0;
      FUN_71037a2270(*(long **)(local_60 + 0x10),local_54,0,0);
    }
    local_68 = &PTR_FUN_710523d9a8;
    local_60 = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),0x7104280a9e);
    param_1 = param_1 + 0x10;
  } while (param_1 != lVar1);
  return;
}

