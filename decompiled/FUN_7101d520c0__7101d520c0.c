// addr:      7101d520c0
// offset:    0x1d520c0
// name:      FUN_7101d520c0
// mangled:   
// signature: undefined __cdecl FUN_7101d520c0(undefined8 * param_1, long param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d520c0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = (int)param_4;
  iVar2 = (int)param_3;
  if (iVar2 == 1) {
    lVar4 = **(long **)(param_2 + 0xa0) + 8;
    if (iVar3 == 0) {
      pcVar1 = "set_parts_btn_01_ll";
    }
    else {
      pcVar1 = "set_parts_btn_05_rl";
    }
  }
  else if (iVar2 == 2) {
    lVar4 = **(long **)(param_2 + 0xa0) + 8;
    if (iVar3 == 0) {
      pcVar1 = "set_parts_btn_03_lb";
    }
    else {
      pcVar1 = "set_parts_btn_07_rb";
    }
  }
  else if (iVar2 == 3) {
    lVar4 = **(long **)(param_2 + 0xa0) + 8;
    if (iVar3 == 0) {
      pcVar1 = "set_parts_btn_02_lr";
    }
    else {
      pcVar1 = "set_parts_btn_06_rr";
    }
  }
  else {
    lVar4 = **(long **)(param_2 + 0xa0) + 8;
    if (iVar3 == 0) {
      pcVar1 = "set_parts_btn_00_lt";
    }
    else {
      pcVar1 = "set_parts_btn_04_rt";
    }
  }
  FUN_7103776640(param_1,lVar4,(byte ****)pcVar1,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

