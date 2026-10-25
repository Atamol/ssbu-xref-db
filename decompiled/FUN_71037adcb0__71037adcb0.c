// addr:      71037adcb0
// offset:    0x37adcb0
// name:      FUN_71037adcb0
// mangled:   
// signature: undefined8 __cdecl FUN_71037adcb0(undefined8 param_1, undefined4 param_2, undefined4 param_3)


undefined8 FUN_71037adcb0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  
  switch(param_3) {
  case 0:
    uVar1 = FUN_71037ab600(param_1,param_2,(byte *)"sys_time_format_full",3);
    return uVar1;
  case 1:
    uVar1 = FUN_71037ab600(param_1,param_2,(byte *)"sys_time_format_hhmm",2);
    return uVar1;
  case 2:
    uVar1 = FUN_71037ab600(param_1,param_2,(byte *)"sys_time_format_hmm",2);
    return uVar1;
  case 3:
    pcVar2 = "sys_time_format_mmss";
    break;
  case 4:
    pcVar2 = "sys_time_format_mss";
    break;
  default:
    return 0;
  }
  uVar1 = FUN_71037ab600(param_1,param_2,(byte *)pcVar2,2);
  return uVar1;
}

