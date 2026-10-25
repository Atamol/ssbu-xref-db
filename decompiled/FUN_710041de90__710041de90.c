// addr:      710041de90
// offset:    0x41de90
// name:      FUN_710041de90
// mangled:   
// signature: undefined __cdecl FUN_710041de90(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710041de90(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  ulong uVar2;
  long ****pppplVar3;
  long ***local_20;
  undefined4 local_14;
  
  pppplVar3 = &local_20;
  DAT_7105324f3c = 0;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x58,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_14 = 0;
      local_20 = (long ***)&DAT_00000058;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_14);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x58,pppplVar3,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_710041def8;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_710041def8:
  DAT_7105324f48 = puVar1 + 0xb;
  DAT_7105324f40 = puVar1;
  DAT_7105324f50 = DAT_7105324f48;
  *puVar1 = &DAT_71044128f0;
  puVar1[1] = "BRAVE";
  puVar1[2] = "BUDDY";
  puVar1[3] = "DOLLY";
  puVar1[4] = "MASTER";
  puVar1[5] = "TANTAN";
  puVar1[6] = "PICKEL";
  puVar1[7] = &DAT_710434a228;
  puVar1[8] = "FLAME_FIRST";
  puVar1[9] = "DEMON";
  puVar1[10] = "TRAIL";
  FUN_71000001c0();
  return;
}

