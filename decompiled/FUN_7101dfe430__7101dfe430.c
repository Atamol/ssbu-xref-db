// addr:      7101dfe430
// offset:    0x1dfe430
// name:      FUN_7101dfe430
// mangled:   
// signature: undefined __cdecl FUN_7101dfe430(long param_1, long param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101dfe430(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  undefined **local_40;
  ulong local_38;
  undefined **local_30;
  ulong local_28;
  
  FUN_7103776640(&local_30,param_2,(byte ****)"set_parts_have",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar1 = local_28;
  if ((*(uint *)(param_1 + 0x2ac) & 0xfffffffe) == 6) {
    FUN_7103778300(0x3f800000,local_28,0x710429257e);
    FUN_7103776910(&local_40,(long)&local_30,(long ****)"set_txt_numl_have_dtl",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_710377a280((long)&local_40,(byte *)"mnu_spirits_recall_spirit_n",1);
    uVar2 = local_38;
    local_40 = &PTR_FUN_710523d9a8;
    local_38 = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  else {
    FUN_7103778300(0x3f800000,local_28,0x71043cd335);
  }
  local_30 = &PTR_FUN_710523d988;
  local_28 = 0;
  if (uVar1 != 0) {
    uVar2 = *(ulong *)(uVar1 + 0x18);
    *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar1 + 0x18) = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    FUN_710392eb40(uVar1);
  }
  return;
}

