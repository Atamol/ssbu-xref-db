// addr:      71019f0fb0
// offset:    0x19f0fb0
// name:      FUN_71019f0fb0
// mangled:   
// signature: undefined __cdecl FUN_71019f0fb0(long * param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71019f0fb0(long *param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **local_30;
  ulong local_28;
  
  uVar3 = (param_1[1] - *param_1 >> 4) * 0x2e8ba2e8ba2e8ba3;
  uVar2 = (ulong)param_2;
  if (uVar2 <= uVar3 && uVar3 - uVar2 != 0) {
    FUN_7103776390(&local_30,(undefined8 *)(*param_1 + uVar2 * 0xb0 + 0x18),param_3,param_4,param_5,
                   param_6,param_7,param_8);
    if ((int)param_3 == 1) {
      pcVar1 = "clear_kumite_on";
    }
    else if ((int)param_3 == 2) {
      pcVar1 = "clear_standard_on";
    }
    else {
      pcVar1 = "clear_off";
    }
    FUN_7103778300(0x3f800000,local_28,(long)pcVar1);
    uVar2 = local_28;
    local_30 = &PTR_FUN_710523d988;
    local_28 = 0;
    if (uVar2 != 0) {
      uVar3 = *(ulong *)(uVar2 + 0x18);
      *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar2 + 0x18) = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
      FUN_710392eb40(uVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}

