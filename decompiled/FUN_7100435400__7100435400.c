// addr:      7100435400
// offset:    0x435400
// name:      FUN_7100435400
// mangled:   
// signature: undefined __cdecl FUN_7100435400(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7100435400(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  ulong uVar2;
  long ****pppplVar3;
  long ***local_20;
  undefined4 local_14;
  
  pppplVar3 = &local_20;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_14 = 0;
      local_20 = (long ***)&SUB_00000018;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_14);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar3,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_7100435460;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7100435460:
  DAT_710532dde0 = puVar1 + 3;
  DAT_710532ddd8 = puVar1;
  DAT_710532dde8 = DAT_710532dde0;
  *puVar1 = "00_Ground01R";
  puVar1[1] = "00_Ground02_DokanMixL";
  puVar1[2] = "00_Ground03_ColorBlockMixR";
  FUN_71000001c0();
  return;
}

