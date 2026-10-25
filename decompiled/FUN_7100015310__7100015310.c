// addr:      7100015310
// offset:    0x15310
// name:      FUN_7100015310
// mangled:   
// signature: undefined1 * __cdecl FUN_7100015310(ulong param_1, undefined1 * param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined1 *
FUN_7100015310(ulong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((long)param_1 < 100000) {
    pcVar1 = "%5ld";
  }
  else if ((long)param_1 < 0x9c4000) {
    param_1 = param_1 >> 10 & 0x3fffff;
    pcVar1 = "%4ldk";
  }
  else {
    if ((long)param_1 < 0x6400000) {
      uVar2 = param_1 >> 0x14 & 0xfff;
      uVar3 = (ulong)(((uint)param_1 & 0xfffff) / 0x19999);
      pcVar1 = "%2ld.%0ldM";
LAB_71000153f4:
      FUN_7100007ef0(param_2,6,pcVar1,uVar2,uVar3,param_6,param_7,param_8);
      return param_2;
    }
    if ((long)param_1 < 0x271000000) {
      param_1 = param_1 >> 0x14;
      pcVar1 = "%4ldM";
    }
    else {
      if ((long)param_1 < 0x1900000000) {
        uVar2 = param_1 >> 0x1e;
        uVar3 = (ulong)((uint)param_1 >> 1 & 0x1fffffff) / 0x3333333;
        pcVar1 = "%2ld.%0ldG";
        goto LAB_71000153f4;
      }
      if ((long)param_1 < 0x9c400000000) {
        param_1 = param_1 >> 0x1e;
        pcVar1 = "%4ldG";
      }
      else if ((long)param_1 < 0x27100000000000) {
        param_1 = param_1 >> 0x28;
        pcVar1 = "%4ldT";
      }
      else {
        param_1 = param_1 >> 0x32;
        pcVar1 = "%4ldP";
      }
    }
  }
  FUN_7100007ef0(param_2,6,pcVar1,param_1,param_5,param_6,param_7,param_8);
  return param_2;
}

