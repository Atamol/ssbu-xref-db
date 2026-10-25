// addr:      710043ab90
// offset:    0x43ab90
// name:      FUN_710043ab90
// mangled:   
// signature: undefined __cdecl FUN_710043ab90(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710043ab90(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  ulong uVar2;
  long ****pppplVar3;
  undefined **ppuVar4;
  long ****pppplVar5;
  long ****pppplVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  long ***local_70;
  undefined4 local_64;
  
  pppplVar3 = &local_70;
  pppplVar5 = &local_70;
  pppplVar6 = &local_70;
  pppplVar7 = &local_70;
  pppplVar8 = &local_70;
  DAT_710532e978 = 0;
  DAT_710532e970 = 0xc2700000;
  DAT_710532e980 = 0;
  DAT_710532e988 = 0;
  DAT_710532e998 = 0;
  DAT_710532e990 = 0x42700000;
  uRam000000710532e9a8 = 0;
  _DAT_710532e9a0 = 0x41f00000;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ***)&DAT_00000008;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,8,pppplVar3,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_710043ac3c;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_710043ac3c:
  DAT_710532e9b8 = puVar1 + 1;
  DAT_710532e9c0 = DAT_710532e9b8;
  *puVar1 = 0xc95d55886;
  ppuVar4 = &PTR_LOOP_7104f17000;
  DAT_710532e9b0 = puVar1;
  FUN_71000001c0();
  puVar1 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)ppuVar4,param_4,param_5,param_6,param_7,param_8);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ***)&SUB_00000018;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_710043acc8;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_710043acc8:
  DAT_710532e9d0 = puVar1 + 3;
  DAT_710532e9d8 = DAT_710532e9d0;
  *puVar1 = 0x101a831dd4;
  puVar1[1] = 0x105d236704;
  puVar1[2] = 0x1060434eb4;
  ppuVar4 = &PTR_LOOP_7104f17000;
  DAT_710532e9c8 = puVar1;
  FUN_71000001c0();
  puVar1 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)ppuVar4,param_4,param_5,param_6,param_7,param_8);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ***)&SUB_00000018;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar6,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_710043ad70;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_710043ad70:
  DAT_710532e9e8 = puVar1 + 3;
  DAT_710532e9f0 = DAT_710532e9e8;
  *puVar1 = 0x104d926bd1;
  puVar1[1] = 0xdb68a8681;
  puVar1[2] = 0xec1e6841b;
  ppuVar4 = &PTR_LOOP_7104f17000;
  DAT_710532e9e0 = puVar1;
  FUN_71000001c0();
  puVar1 = (undefined8 *)
           FUN_710392e290(0x10,0x10,(long ****)ppuVar4,param_4,param_5,param_6,param_7,param_8);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ***)&DAT_00000010;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_710043ae1c;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_710043ae1c:
  DAT_710532ea00 = puVar1 + 2;
  DAT_710532e9f8 = puVar1;
  DAT_710532ea08 = DAT_710532ea00;
  *puVar1 = 0x1d8a5d1ae3;
  puVar1[1] = 0x1c3a7de264;
  ppuVar4 = &PTR_LOOP_7104f17000;
  FUN_71000001c0();
  DAT_710532ea10 = 0;
  DAT_710532ea18 = 0;
  DAT_710532ea40 = 0;
  DAT_710532ea20 = 0;
  DAT_710532ea28 = 0xfffffffa00000000;
  DAT_710532ea48 = 0;
  DAT_710532ea30 = 0xe4dc02bc0;
  DAT_710532ea38 = 0xe4dc02bc0;
  DAT_710532ea4c = FUN_7103151710((byte *)"IPP0002");
  DAT_710532ea50 = 0;
  DAT_710532ea58 = 0;
  DAT_710532ea80 = 0;
  DAT_710532ea88 = 0;
  DAT_710532ea60 = 0;
  DAT_710532ea68 = 0xfffffffa00000000;
  DAT_710532ea70 = 0xe370078a0;
  DAT_710532ea78 = 0xe370078a0;
  DAT_710532ea8c = FUN_7103151710((byte *)"IPP0003");
  DAT_710532ea90 = 0xe8520a4b0;
  DAT_710532ea98 = 0xe8520a4b0;
  DAT_710532eaa0 = 0;
  DAT_710532eaa8 = 0;
  DAT_710532eaac = FUN_7103151710((byte *)"IPP0004");
  DAT_710532eab0 = 0;
  DAT_710532eab8 = 0;
  DAT_710532eae0 = 0;
  DAT_710532eae8 = 0;
  DAT_710532eac0 = 0;
  DAT_710532eac8 = 0xfffffffa00000000;
  DAT_710532ead0 = 0xf0c2bc9c5;
  DAT_710532ead8 = 0xf0c2bc9c5;
  DAT_710532eaec = FUN_7103151710((byte *)"IPP0005");
  DAT_710532eaf0 = 0xf314be075;
  DAT_710532eaf8 = 0xf314be075;
  DAT_710532eb00 = 0;
  DAT_710532eb08 = 0;
  DAT_710532eb0c = FUN_7103151710((byte *)"IPP0006");
  DAT_710532eb10 = 0xf836b3c65;
  DAT_710532eb18 = 0xf836b3c65;
  DAT_710532eb20 = 0;
  DAT_710532eb28 = 0;
  DAT_710532eb2c = FUN_7103151710((byte *)"IPP0007");
  DAT_710532eb30 = 0;
  DAT_710532eb38 = 0x1ace7afcb6;
  DAT_710532eb50 = 0;
  DAT_710532eb58 = 0xdf7da8858;
  DAT_710532eb60 = &DAT_710532e9c8;
  DAT_710532eb68 = 0xfffffffa00000002;
  DAT_710532eb70 = 0;
  DAT_710532eb78 = 0x1281f926d3;
  DAT_710532eba0 = &DAT_710532e9e0;
  DAT_710532eb40 = 0;
  DAT_710532eb48 = 0xfffffffa00000000;
  DAT_710532eba8 = 0;
  DAT_710532eb80 = &DAT_710532e9b0;
  DAT_710532eb88 = 0xfffffffa00000001;
  DAT_710532eb90 = 0x104d926bd1;
  DAT_710532eb98 = 0;
  DAT_710532ebac = FUN_7103151710((byte *)"IPP0008");
  DAT_710532ebb0 = 0;
  DAT_710532ebb8 = 0;
  DAT_710532ebc0 = &DAT_710532e9f8;
  DAT_710532ebc8 = 0xfffffffa00000003;
  puVar1 = (undefined8 *)
           FUN_710392e290(0x10,0x38,(long ****)ppuVar4,param_4,param_5,param_6,param_7,param_8);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ***)&DAT_00000038;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x38,pppplVar8,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_710043b068;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_710043b068:
  DAT_710532ebd8 = puVar1 + 7;
  DAT_710532ebd0 = puVar1;
  DAT_710532ebe0 = DAT_710532ebd8;
  *puVar1 = 0xf0c2bc9c5;
  puVar1[1] = 0xf314be075;
  puVar1[2] = 0xf836b3c65;
  puVar1[4] = 0xe370078a0;
  puVar1[3] = 0xe4dc02bc0;
  puVar1[5] = 0xe8520a4b0;
  puVar1[6] = 0x104d926bd1;
  FUN_71000001c0();
  return;
}

