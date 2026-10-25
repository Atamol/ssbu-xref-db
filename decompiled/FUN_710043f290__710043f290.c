// addr:      710043f290
// offset:    0x43f290
// name:      FUN_710043f290
// mangled:   
// signature: undefined __cdecl FUN_710043f290(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710043f290(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  ulong uVar2;
  long ****pppplVar3;
  undefined **ppuVar4;
  long ***local_28;
  undefined4 local_14;
  
  puVar1 = (undefined8 *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_14 = 0;
      local_28 = (long ***)&DAT_00000008;
      pppplVar3 = &local_28;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_14);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,8,pppplVar3,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_710043f2f4;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_710043f2f4:
  DAT_710532f0e0 = puVar1 + 1;
  DAT_710532f0e8 = DAT_710532f0e0;
  *puVar1 = 0x1c5da3bb24;
  ppuVar4 = &PTR_LOOP_7104f17000;
  DAT_710532f0d8 = puVar1;
  FUN_71000001c0();
  puVar1 = (undefined8 *)
           FUN_710392e290(0x10,0x20,(long ****)ppuVar4,param_4,param_5,param_6,param_7,param_8);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_14 = 0;
      local_28 = (long ***)&SUB_00000020;
      pppplVar3 = &local_28;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_14);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar3,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_710043f380;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_710043f380:
  DAT_710532f0f8 = puVar1 + 4;
  DAT_710532f100 = DAT_710532f0f8;
  *puVar1 = 0x13e7f48f5f;
  puVar1[1] = 0x104bb964c2;
  puVar1[2] = 0x1506e5fd40;
  puVar1[3] = 0x221eeeb8c7;
  ppuVar4 = &PTR_LOOP_7104f17000;
  DAT_710532f0f0 = puVar1;
  FUN_71000001c0();
  puVar1 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)ppuVar4,param_4,param_5,param_6,param_7,param_8);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_14 = 0;
      local_28 = (long ***)&SUB_00000018;
      pppplVar3 = &local_28;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_14);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar3,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_710043f434;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_710043f434:
  DAT_710532f110 = puVar1 + 3;
  DAT_710532f118 = DAT_710532f110;
  *puVar1 = 0x1c5da3bb24;
  puVar1[1] = 0x1758e4ed3a;
  puVar1[2] = 0x246be8049d;
  ppuVar4 = &PTR_LOOP_7104f17000;
  DAT_710532f108 = puVar1;
  FUN_71000001c0();
  puVar1 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)ppuVar4,param_4,param_5,param_6,param_7,param_8);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_14 = 0;
      local_28 = (long ***)&SUB_00000018;
      pppplVar3 = &local_28;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_14);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar3,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_710043f4d0;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_710043f4d0:
  DAT_710532f128 = puVar1 + 3;
  DAT_710532f130 = DAT_710532f128;
  *puVar1 = 0x20ec3725be;
  puVar1[1] = 0x1d28c9df5c;
  puVar1[2] = 0x220069347e;
  ppuVar4 = &PTR_LOOP_7104f17000;
  DAT_710532f120 = puVar1;
  FUN_71000001c0();
  puVar1 = (undefined8 *)
           FUN_710392e290(0x10,0x48,(long ****)ppuVar4,param_4,param_5,param_6,param_7,param_8);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_14 = 0;
      local_28 = (long ***)&DAT_00000048;
      pppplVar3 = &local_28;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_14);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x48,pppplVar3,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_710043f578;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_710043f578:
  DAT_710532f140 = puVar1 + 9;
  DAT_710532f138 = puVar1;
  DAT_710532f148 = DAT_710532f140;
  *puVar1 = 0x13e7f48f5f;
  puVar1[1] = 0x1d7abb386c;
  ppuVar4 = &PTR_LOOP_7104f17000;
  puVar1[4] = 0x199ca5cc9b;
  puVar1[5] = 1;
  puVar1[2] = 1;
  puVar1[3] = 0x104bb964c2;
  puVar1[8] = 1;
  puVar1[6] = 0x1506e5fd40;
  puVar1[7] = 0x1f678d954c;
  FUN_71000001c0();
  puVar1 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)ppuVar4,param_4,param_5,param_6,param_7,param_8);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_14 = 0;
      local_28 = (long ***)&SUB_00000018;
      pppplVar3 = &local_28;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_14);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar3,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_710043f628;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_710043f628:
  DAT_710532f158 = puVar1 + 3;
  DAT_710532f150 = puVar1;
  DAT_710532f160 = DAT_710532f158;
  puVar1[2] = 1;
  *puVar1 = 0x1c1a03c1f4;
  puVar1[1] = 0x26cd545795;
  ppuVar4 = &PTR_LOOP_7104f17000;
  FUN_71000001c0();
  puVar1 = (undefined8 *)
           FUN_710392e290(0x10,0x30,(long ****)ppuVar4,param_4,param_5,param_6,param_7,param_8);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_14 = 0;
      local_28 = (long ***)&DAT_00000030;
      pppplVar3 = &local_28;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_14);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x30,pppplVar3,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_710043f6bc;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_710043f6bc:
  DAT_710532f170 = puVar1 + 6;
  DAT_710532f178 = DAT_710532f170;
  *puVar1 = 0x1c5da3bb24;
  puVar1[1] = 0x18a61216d4;
  puVar1[4] = 0x13b51683b2;
  puVar1[5] = 0;
  ppuVar4 = &PTR_LOOP_7104f17000;
  puVar1[2] = 0;
  puVar1[3] = 0x1758e4ed3a;
  DAT_710532f168 = puVar1;
  FUN_71000001c0();
  puVar1 = (undefined8 *)
           FUN_710392e290(0x10,0x30,(long ****)ppuVar4,param_4,param_5,param_6,param_7,param_8);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_14 = 0;
      local_28 = (long ***)&DAT_00000030;
      pppplVar3 = &local_28;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_14);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x30,pppplVar3,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_710043f758;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_710043f758:
  DAT_710532f188 = puVar1 + 6;
  DAT_710532f190 = DAT_710532f188;
  *puVar1 = 0x1c5da3bb24;
  puVar1[1] = 0x1bb32d9b1b;
  puVar1[4] = 0x18001ea3f3;
  puVar1[5] = 0;
  ppuVar4 = &PTR_LOOP_7104f17000;
  puVar1[2] = 0;
  puVar1[3] = 0x1758e4ed3a;
  DAT_710532f180 = puVar1;
  FUN_71000001c0();
  puVar1 = (undefined8 *)
           FUN_710392e290(0x10,0x48,(long ****)ppuVar4,param_4,param_5,param_6,param_7,param_8);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_14 = 0;
      local_28 = (long ***)&DAT_00000048;
      pppplVar3 = &local_28;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_14);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x48,pppplVar3,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_710043f7f4;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_710043f7f4:
  DAT_710532f1a0 = puVar1 + 9;
  DAT_710532f198 = puVar1;
  DAT_710532f1a8 = DAT_710532f1a0;
  *puVar1 = 0x13e7f48f5f;
  puVar1[1] = 0x21d0f650a4;
  ppuVar4 = &PTR_LOOP_7104f17000;
  puVar1[4] = 0x1e9e362d0a;
  puVar1[5] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0x104bb964c2;
  puVar1[8] = 0;
  puVar1[6] = 0x1506e5fd40;
  puVar1[7] = 0x234b7ecc05;
  FUN_71000001c0();
  puVar1 = (undefined8 *)
           FUN_710392e290(0x10,0x10,(long ****)ppuVar4,param_4,param_5,param_6,param_7,param_8);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_14 = 0;
      local_28 = (long ***)&DAT_00000010;
      pppplVar3 = &local_28;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_14);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,pppplVar3,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_710043f8a4;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_710043f8a4:
  DAT_710532f1b8 = puVar1 + 2;
  ppuVar4 = &PTR_LOOP_7104f17000;
  DAT_710532f1c0 = DAT_710532f1b8;
  *puVar1 = "reflection_cubemap_roof";
  puVar1[1] = "reflection_cubemap_roof_break";
  DAT_710532f1b0 = puVar1;
  FUN_71000001c0();
  puVar1 = (undefined8 *)
           FUN_710392e290(0x10,0x10,(long ****)ppuVar4,param_4,param_5,param_6,param_7,param_8);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_14 = 0;
      local_28 = (long ***)&DAT_00000010;
      pppplVar3 = &local_28;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_14);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,pppplVar3,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_710043f934;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_710043f934:
  DAT_710532f1d0 = puVar1 + 2;
  DAT_710532f1c8 = puVar1;
  DAT_710532f1d8 = DAT_710532f1d0;
  *puVar1 = "stage_roof";
  puVar1[1] = "stage_roof_break";
  FUN_71000001c0();
  return;
}

