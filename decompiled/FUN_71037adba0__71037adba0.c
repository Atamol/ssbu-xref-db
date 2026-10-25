// addr:      71037adba0
// offset:    0x37adba0
// name:      FUN_71037adba0
// mangled:   
// signature: undefined8 __cdecl FUN_71037adba0(undefined8 param_1, undefined4 param_2, undefined4 param_3)


undefined8 FUN_71037adba0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  
  switch(param_3) {
  case 0:
    uVar1 = FUN_71037ab600(param_1,param_2,(byte *)"sys_date_format_full",3);
    return uVar1;
  case 1:
    uVar1 = FUN_71037ab600(param_1,param_2,(byte *)"sys_date_format_yymm",2);
    return uVar1;
  case 2:
    pcVar2 = "sys_date_format_mmdd";
    break;
  case 3:
    pcVar2 = "sys_date_format_mdd";
    break;
  case 4:
    uVar1 = FUN_71037ab600(param_1,param_2,(byte *)"sys_date_format_full_space",3);
    return uVar1;
  default:
    return 0;
  }
  uVar1 = FUN_71037ab600(param_1,param_2,(byte *)pcVar2,2);
  return uVar1;
}

