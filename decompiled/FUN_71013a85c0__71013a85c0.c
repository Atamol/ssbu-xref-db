// addr:      71013a85c0
// offset:    0x13a85c0
// name:      FUN_71013a85c0
// mangled:   
// signature: undefined __cdecl FUN_71013a85c0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71013a85c0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_1 + 0x50);
  uVar1 = *(uint *)((long)plVar2 + 0x14);
  if (*(uint *)(plVar2 + 2) != uVar1) {
    lVar3 = *(long *)(plVar2[1] + 0x80);
    if ((int)uVar1 < 1) {
      FUN_710377a280(lVar3 + 0x180,(byte *)"mel_homerun_distance_n",1);
      param_4 = (byte ****)0x0;
    }
    else {
      FUN_710377a280(lVar3 + 0x180,(byte *)"mel_homerun_distance_n",1);
      param_4 = (byte ****)(ulong)(uVar1 % 1000);
    }
    param_3 = (long ****)0x1;
    FUN_710377a280(lVar3 + 400,(byte *)"mel_homerun_distance_decimal_n",1);
    *(undefined4 *)(plVar2 + 2) = *(undefined4 *)((long)plVar2 + 0x14);
    param_2 = extraout_x1;
  }
  FUN_71013a53d0(plVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_71013a67c0(plVar2,extraout_x1_00,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

