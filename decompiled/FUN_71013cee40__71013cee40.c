// addr:      71013cee40
// offset:    0x13cee40
// name:      FUN_71013cee40
// mangled:   
// signature: undefined __cdecl FUN_71013cee40(long * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71013cee40(long *param_1,long *param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined **local_30;
  ulong local_28;
  ushort local_14 [2];
  
  if (*(char *)(*param_1 + 0x14) != '\0') {
    FUN_7103778ab0(&local_30,(undefined8 *)(*(long *)(param_1[0x26] + 0x80) + 0x318),param_3,param_4
                   ,param_5,param_6,param_7,param_8);
    if (*(long **)(local_28 + 0x10) != (long *)0x0) {
      local_14[0] = 0;
      local_14[1] = 0;
      FUN_71037a2270(*(long **)(local_28 + 0x10),local_14,0,0);
    }
    FUN_710377a280((long)&local_30,(byte *)"mnu_convention_session_time",2);
    uVar1 = local_28;
    local_30 = &PTR_FUN_710523d9a8;
    local_28 = 0;
    if (uVar1 != 0) {
      FUN_710392eb40(uVar1);
    }
  }
  return;
}

