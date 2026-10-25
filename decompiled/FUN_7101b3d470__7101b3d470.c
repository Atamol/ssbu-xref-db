// addr:      7101b3d470
// offset:    0x1b3d470
// name:      FUN_7101b3d470
// mangled:   
// signature: undefined __cdecl FUN_7101b3d470(long * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b3d470(long *param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  ulong uVar2;
  long ***ppplVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar4;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  long ****pppplVar5;
  char *pcVar6;
  byte ****ppppbVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  long ***local_c0;
  undefined8 *local_b8;
  long ***local_b0;
  undefined8 *local_a8;
  long ***local_a0;
  undefined8 *local_98;
  long ***local_90;
  undefined8 *local_88;
  long ***local_80;
  undefined8 *local_78;
  long ***local_70;
  undefined4 local_64;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar4 = extraout_x1;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&DAT_00000008;
      param_3 = &local_80;
      auVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      uVar4 = auVar10._8_8_;
      if (((auVar10._0_8_ & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8),
         uVar4 = extraout_x1_00, puVar1 != (undefined8 *)0x0)) goto LAB_7101b3d4f8;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3d4f8:
  FUN_7103773200(puVar1,uVar4,param_3,param_4,param_5,param_6,param_7,param_8);
  param_1[1] = (long)puVar1;
  FUN_7101414b10(param_1 + 2,param_1 + 1,param_3,param_4,param_5,param_6,param_7,param_8);
  pppplVar5 = (long ****)&DAT_000001c8;
  memset(param_1 + 5,0,0x1c8);
  param_1[4] = (long)&PTR_FUN_710523d9e8;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pppplVar5 = &local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_7101b3d580;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3d580:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  param_1[5] = (long)puVar1;
  param_1[6] = (long)&PTR_FUN_710523d9e8;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pppplVar5 = &local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_7101b3d5e4;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3d5e4:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  param_1[7] = (long)puVar1;
  param_1[8] = (long)&PTR_FUN_710523d9e8;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pppplVar5 = &local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_7101b3d644;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3d644:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  param_1[9] = (long)puVar1;
  param_1[10] = (long)&PTR_FUN_710523d9e8;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pppplVar5 = &local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_7101b3d6a8;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3d6a8:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  param_1[0xb] = (long)puVar1;
  param_1[0xc] = (long)&PTR_FUN_710523d9e8;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pppplVar5 = &local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_7101b3d708;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3d708:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  param_1[0xd] = (long)puVar1;
  param_1[0xe] = (long)&PTR_FUN_710523d9e8;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pppplVar5 = &local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_7101b3d76c;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3d76c:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  param_1[0xf] = (long)puVar1;
  param_1[0x10] = (long)&PTR_FUN_710523d9e8;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pppplVar5 = &local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_7101b3d7cc;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3d7cc:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  param_1[0x11] = (long)puVar1;
  param_1[0x12] = (long)&PTR_FUN_710523d9e8;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pppplVar5 = &local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_7101b3d830;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3d830:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  param_1[0x13] = (long)puVar1;
  param_1[0x14] = (long)&PTR_FUN_710523d9e8;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pppplVar5 = &local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_7101b3d890;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3d890:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  param_1[0x15] = (long)puVar1;
  param_1[0x16] = (long)&PTR_FUN_710523d9e8;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pppplVar5 = &local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_7101b3d8f4;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3d8f4:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  param_1[0x17] = (long)puVar1;
  param_1[0x18] = (long)&PTR_FUN_710523d9e8;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pppplVar5 = &local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_7101b3d954;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3d954:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  param_1[0x19] = (long)puVar1;
  param_1[0x1a] = (long)&PTR_FUN_710523d9e8;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pppplVar5 = &local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_7101b3d9b8;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3d9b8:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  param_1[0x1b] = (long)puVar1;
  param_1[0x1c] = (long)&PTR_FUN_710523d9e8;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pppplVar5 = &local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_7101b3da18;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3da18:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  param_1[0x1d] = (long)puVar1;
  param_1[0x1e] = (long)&PTR_FUN_710523d9e8;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pppplVar5 = &local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_7101b3da7c;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3da7c:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  param_1[0x1f] = (long)puVar1;
  param_1[0x20] = (long)&PTR_FUN_710523d9e8;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pppplVar5 = &local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_7101b3dadc;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3dadc:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  param_1[0x21] = (long)puVar1;
  param_1[0x22] = (long)&PTR_FUN_710523d9e8;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pppplVar5 = &local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_7101b3db40;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3db40:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  param_1[0x23] = (long)puVar1;
  param_1[0x24] = (long)&PTR_FUN_710523d9e8;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pppplVar5 = &local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_7101b3dba0;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3dba0:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  param_1[0x25] = (long)puVar1;
  param_1[0x26] = (long)&PTR_FUN_710523d9e8;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pppplVar5 = &local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_7101b3dc04;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3dc04:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  param_1[0x27] = (long)puVar1;
  param_1[0x28] = (long)&PTR_FUN_710523d9e8;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pppplVar5 = &local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_7101b3dc64;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3dc64:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  param_1[0x29] = (long)puVar1;
  param_1[0x2a] = (long)&PTR_FUN_710523d9e8;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pppplVar5 = &local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_7101b3dcc8;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3dcc8:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  param_1[0x2b] = (long)puVar1;
  param_1[0x2c] = (long)&PTR_FUN_710523d9e8;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pppplVar5 = &local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_7101b3dd28;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3dd28:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  param_1[0x2d] = (long)puVar1;
  param_1[0x2e] = (long)&PTR_FUN_710523d9e8;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pppplVar5 = &local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_7101b3dd8c;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3dd8c:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  param_1[0x2f] = (long)puVar1;
  param_1[0x30] = (long)&PTR_FUN_710523d9e8;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pppplVar5 = &local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_7101b3ddec;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3ddec:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  param_1[0x31] = (long)puVar1;
  param_1[0x32] = (long)&PTR_FUN_710523d9e8;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pppplVar5 = &local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_7101b3de50;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3de50:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  param_1[0x33] = (long)puVar1;
  param_1[0x34] = (long)&PTR_FUN_710523d9e8;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pppplVar5 = &local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_7101b3deb0;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3deb0:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  param_1[0x35] = (long)puVar1;
  param_1[0x36] = (long)&PTR_FUN_710523d9e8;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pppplVar5 = &local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_7101b3df14;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3df14:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  param_1[0x37] = (long)puVar1;
  param_1[0x38] = (long)&PTR_FUN_710523d9e8;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pppplVar5 = &local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_7101b3df74;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3df74:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  param_1[0x39] = (long)puVar1;
  param_1[0x3a] = (long)&PTR_FUN_710523d9e8;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pppplVar5 = &local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_7101b3dfd8;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3dfd8:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  param_1[0x3b] = (long)puVar1;
  param_1[0x3c] = (long)&PTR_FUN_710523d9e8;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pppplVar5 = &local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar1 != (undefined8 *)0x0)) goto LAB_7101b3e038;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3e038:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  param_1[0x3d] = (long)puVar1;
  param_1[0x3e] = (long)&PTR_FUN_710523d9a8;
  param_1[0x3f] = 0;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  uVar4 = extraout_x1_01;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000020;
      pppplVar5 = &local_80;
      auVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      uVar4 = auVar10._8_8_;
      if (((auVar10._0_8_ & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         uVar4 = extraout_x1_02, puVar1 != (undefined8 *)0x0)) goto LAB_7101b3e0a8;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3e0a8:
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  param_1[0x41] = 0;
  param_1[0x3f] = (long)puVar1;
  param_1[0x40] = 0;
  FUN_7101438520(param_1 + 0x40,uVar4,pppplVar5,param_4,param_5,param_6,param_7,param_8);
  FUN_7101438520(param_1 + 0x41,extraout_x1_03,pppplVar5,param_4,param_5,param_6,param_7,param_8);
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  FUN_7101438520(param_1 + 0x42,extraout_x1_04,pppplVar5,param_4,param_5,param_6,param_7,param_8);
  FUN_7101438520(param_1 + 0x43,extraout_x1_05,pppplVar5,param_4,param_5,param_6,param_7,param_8);
  pcVar6 = "}GebE";
  ppppbVar7 = (byte ****)0x0;
  FUN_71032cbf30(param_1 + 1,**(long **)(*param_1 + 0x78),(ulong *)"}GebE",(byte ****)0x0,param_5,
                 param_6,param_7,param_8);
  FUN_71037780e0(&local_80,*(long *)param_1[1] + 8,(long ****)&DAT_7104421055,pcVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  puVar1 = local_78;
  if ((long ****)(param_1 + 4) != &local_80) {
    local_78 = (undefined8 *)0x0;
    uVar2 = param_1[5];
    param_1[5] = (long)puVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar1 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  FUN_71037780e0(&local_80,*(long *)param_1[1] + 8,(long ****)&DAT_710428ff7d,pcVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  puVar1 = local_78;
  if ((long ****)(param_1 + 6) != &local_80) {
    local_78 = (undefined8 *)0x0;
    uVar2 = param_1[7];
    param_1[7] = (long)puVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar1 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  FUN_71037780e0(&local_80,*(long *)param_1[1] + 8,(long ****)"on_right_blank",pcVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  puVar1 = local_78;
  if ((long ****)(param_1 + 8) != &local_80) {
    local_78 = (undefined8 *)0x0;
    uVar2 = param_1[9];
    param_1[9] = (long)puVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar1 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  FUN_71037780e0(&local_80,*(long *)param_1[1] + 8,(long ****)"on_right_snake",pcVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  puVar1 = local_78;
  if ((long ****)(param_1 + 10) != &local_80) {
    local_78 = (undefined8 *)0x0;
    uVar2 = param_1[0xb];
    param_1[0xb] = (long)puVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar1 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  FUN_71037780e0(&local_80,*(long *)param_1[1] + 8,(long ****)"on_left_blank",pcVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  puVar1 = local_78;
  if ((long ****)(param_1 + 0xc) != &local_80) {
    local_78 = (undefined8 *)0x0;
    uVar2 = param_1[0xd];
    param_1[0xd] = (long)puVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar1 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  FUN_71037780e0(&local_80,*(long *)param_1[1] + 8,(long ****)"on_left_campbell",pcVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  puVar1 = local_78;
  if ((long ****)(param_1 + 0xe) != &local_80) {
    local_78 = (undefined8 *)0x0;
    uVar2 = param_1[0xf];
    param_1[0xf] = (long)puVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar1 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  FUN_71037780e0(&local_80,*(long *)param_1[1] + 8,(long ****)"on_left_meilin",pcVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  puVar1 = local_78;
  if ((long ****)(param_1 + 0x10) != &local_80) {
    local_78 = (undefined8 *)0x0;
    uVar2 = param_1[0x11];
    param_1[0x11] = (long)puVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar1 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  FUN_71037780e0(&local_80,*(long *)param_1[1] + 8,(long ****)"on_left_otacon",pcVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  puVar1 = local_78;
  if ((long ****)(param_1 + 0x12) != &local_80) {
    local_78 = (undefined8 *)0x0;
    uVar2 = param_1[0x13];
    param_1[0x13] = (long)puVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar1 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  FUN_71037780e0(&local_80,*(long *)param_1[1] + 8,(long ****)"on_left_slippy",pcVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  puVar1 = local_78;
  if ((long ****)(param_1 + 0x14) != &local_80) {
    local_78 = (undefined8 *)0x0;
    uVar2 = param_1[0x15];
    param_1[0x15] = (long)puVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar1 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  FUN_71037780e0(&local_80,*(long *)param_1[1] + 8,(long ****)"in_serif",pcVar6,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  puVar1 = local_78;
  if ((long ****)(param_1 + 0x16) != &local_80) {
    local_78 = (undefined8 *)0x0;
    uVar2 = param_1[0x17];
    param_1[0x17] = (long)puVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar1 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  FUN_71037780e0(&local_80,*(long *)param_1[1] + 8,(long ****)"out_serif",pcVar6,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  puVar1 = local_78;
  if ((long ****)(param_1 + 0x18) != &local_80) {
    local_78 = (undefined8 *)0x0;
    uVar2 = param_1[0x19];
    param_1[0x19] = (long)puVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar1 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  FUN_71037780e0(&local_80,*(long *)param_1[1] + 8,(long ****)"loop_left_eye_00",pcVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  puVar1 = local_78;
  if ((long ****)(param_1 + 0x1a) != &local_80) {
    local_78 = (undefined8 *)0x0;
    uVar2 = param_1[0x1b];
    param_1[0x1b] = (long)puVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar1 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  FUN_71037780e0(&local_80,*(long *)param_1[1] + 8,(long ****)"loop_left_eye_01",pcVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  puVar1 = local_78;
  if ((long ****)(param_1 + 0x1c) != &local_80) {
    local_78 = (undefined8 *)0x0;
    uVar2 = param_1[0x1d];
    param_1[0x1d] = (long)puVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar1 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  FUN_71037780e0(&local_80,*(long *)param_1[1] + 8,(long ****)"loop_left_eye_02",pcVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  puVar1 = local_78;
  if ((long ****)(param_1 + 0x1e) != &local_80) {
    local_78 = (undefined8 *)0x0;
    uVar2 = param_1[0x1f];
    param_1[0x1f] = (long)puVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar1 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  FUN_71037780e0(&local_80,*(long *)param_1[1] + 8,(long ****)"loop_left_eye_03",pcVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  puVar1 = local_78;
  if ((long ****)(param_1 + 0x20) != &local_80) {
    local_78 = (undefined8 *)0x0;
    uVar2 = param_1[0x21];
    param_1[0x21] = (long)puVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar1 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  FUN_71037780e0(&local_80,*(long *)param_1[1] + 8,(long ****)"loop_left_mouth_00",pcVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  puVar1 = local_78;
  if ((long ****)(param_1 + 0x22) != &local_80) {
    local_78 = (undefined8 *)0x0;
    uVar2 = param_1[0x23];
    param_1[0x23] = (long)puVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar1 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  FUN_71037780e0(&local_80,*(long *)param_1[1] + 8,(long ****)"loop_left_mouth_01",pcVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  puVar1 = local_78;
  if ((long ****)(param_1 + 0x24) != &local_80) {
    local_78 = (undefined8 *)0x0;
    uVar2 = param_1[0x25];
    param_1[0x25] = (long)puVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar1 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  FUN_71037780e0(&local_80,*(long *)param_1[1] + 8,(long ****)"loop_left_mouth_02",pcVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  puVar1 = local_78;
  if ((long ****)(param_1 + 0x26) != &local_80) {
    local_78 = (undefined8 *)0x0;
    uVar2 = param_1[0x27];
    param_1[0x27] = (long)puVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar1 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  FUN_71037780e0(&local_80,*(long *)param_1[1] + 8,(long ****)"loop_left_mouth_03",pcVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  puVar1 = local_78;
  if ((long ****)(param_1 + 0x28) != &local_80) {
    local_78 = (undefined8 *)0x0;
    uVar2 = param_1[0x29];
    param_1[0x29] = (long)puVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar1 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  FUN_71037780e0(&local_80,*(long *)param_1[1] + 8,(long ****)"loop_right_eye_00",pcVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  puVar1 = local_78;
  if ((long ****)(param_1 + 0x2a) != &local_80) {
    local_78 = (undefined8 *)0x0;
    uVar2 = param_1[0x2b];
    param_1[0x2b] = (long)puVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar1 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  FUN_71037780e0(&local_80,*(long *)param_1[1] + 8,(long ****)"loop_right_eye_01",pcVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  puVar1 = local_78;
  if ((long ****)(param_1 + 0x2c) != &local_80) {
    local_78 = (undefined8 *)0x0;
    uVar2 = param_1[0x2d];
    param_1[0x2d] = (long)puVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar1 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  FUN_71037780e0(&local_80,*(long *)param_1[1] + 8,(long ****)"loop_right_eye_02",pcVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  puVar1 = local_78;
  if ((long ****)(param_1 + 0x2e) != &local_80) {
    local_78 = (undefined8 *)0x0;
    uVar2 = param_1[0x2f];
    param_1[0x2f] = (long)puVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar1 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  FUN_71037780e0(&local_80,*(long *)param_1[1] + 8,(long ****)"loop_right_eye_03",pcVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  puVar1 = local_78;
  if ((long ****)(param_1 + 0x30) != &local_80) {
    local_78 = (undefined8 *)0x0;
    uVar2 = param_1[0x31];
    param_1[0x31] = (long)puVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar1 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  FUN_71037780e0(&local_80,*(long *)param_1[1] + 8,(long ****)"loop_right_mouth_00",pcVar6,ppppbVar7
                 ,param_5,param_6,param_7,param_8);
  puVar1 = local_78;
  if ((long ****)(param_1 + 0x32) != &local_80) {
    local_78 = (undefined8 *)0x0;
    uVar2 = param_1[0x33];
    param_1[0x33] = (long)puVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar1 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  FUN_71037780e0(&local_80,*(long *)param_1[1] + 8,(long ****)"loop_right_mouth_01",pcVar6,ppppbVar7
                 ,param_5,param_6,param_7,param_8);
  puVar1 = local_78;
  if ((long ****)(param_1 + 0x34) != &local_80) {
    local_78 = (undefined8 *)0x0;
    uVar2 = param_1[0x35];
    param_1[0x35] = (long)puVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar1 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  FUN_71037780e0(&local_80,*(long *)param_1[1] + 8,(long ****)"loop_right_mouth_02",pcVar6,ppppbVar7
                 ,param_5,param_6,param_7,param_8);
  puVar1 = local_78;
  if ((long ****)(param_1 + 0x36) != &local_80) {
    local_78 = (undefined8 *)0x0;
    uVar2 = param_1[0x37];
    param_1[0x37] = (long)puVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar1 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  FUN_71037780e0(&local_80,*(long *)param_1[1] + 8,(long ****)"loop_right_mouth_03",pcVar6,ppppbVar7
                 ,param_5,param_6,param_7,param_8);
  puVar1 = local_78;
  if ((long ****)(param_1 + 0x38) != &local_80) {
    local_78 = (undefined8 *)0x0;
    uVar2 = param_1[0x39];
    param_1[0x39] = (long)puVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar1 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  FUN_71037780e0(&local_80,*(long *)param_1[1] + 8,(long ****)"loop_gauge_stop",pcVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  puVar1 = local_78;
  if ((long ****)(param_1 + 0x3a) != &local_80) {
    local_78 = (undefined8 *)0x0;
    uVar2 = param_1[0x3b];
    param_1[0x3b] = (long)puVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar1 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  FUN_71037780e0(&local_80,*(long *)param_1[1] + 8,(long ****)"loop_gauge",pcVar6,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  puVar1 = local_78;
  if ((long ****)(param_1 + 0x3c) != &local_80) {
    local_78 = (undefined8 *)0x0;
    uVar2 = param_1[0x3d];
    param_1[0x3d] = (long)puVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar1 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  local_90 = (long ***)&PTR_FUN_710523d9e8;
  local_88 = (undefined8 *)
             FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  if (local_88 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pcVar6 = (char *)&local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (local_88 = (undefined8 *)
                     FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                    param_8), local_88 != (undefined8 *)0x0)) goto LAB_7101b3eaf0;
    }
    local_88 = (undefined8 *)0x0;
  }
LAB_7101b3eaf0:
  *(undefined1 *)(local_88 + 2) = 1;
  *local_88 = 0;
  local_88[1] = 0;
  if (&local_90 != (long ****)(param_1 + 0x1a)) {
    puVar1 = (undefined8 *)param_1[0x1b];
    *local_88 = *puVar1;
    local_88[1] = puVar1[1];
    *(undefined1 *)(local_88 + 2) = *(undefined1 *)(param_1[0x1b] + 0x10);
  }
  FUN_71014388e0(param_1[0x40],(undefined ***)&local_90,(long ****)pcVar6,ppppbVar7,param_5,param_6,
                 param_7,param_8);
  puVar1 = local_88;
  local_90 = (long ***)&PTR_FUN_710523d9e8;
  local_88 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  puVar1 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pcVar6 = (char *)&local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                  param_8), puVar1 != (undefined8 *)0x0)) goto LAB_7101b3eba8;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3eba8:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar8 = (undefined8 *)param_1[0x1d];
  *puVar1 = *puVar8;
  puVar1[1] = puVar8[1];
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1[0x1d] + 0x10);
  plVar9 = (long *)param_1[0x40];
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ***)&SUB_00000018;
      pcVar6 = (char *)&local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                  param_8), puVar8 != (undefined8 *)0x0)) goto LAB_7101b3ec30;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7101b3ec30:
  *puVar8 = 0;
  puVar8[1] = 0;
  *(undefined1 *)(puVar8 + 2) = 1;
  *puVar8 = *puVar1;
  puVar8[1] = puVar1[1];
  *(undefined1 *)(puVar8 + 2) = *(undefined1 *)(puVar1 + 2);
  pppplVar5 = (long ****)plVar9[1];
  local_78 = puVar8;
  if (pppplVar5 == (long ****)plVar9[2]) {
    FUN_7101438690(plVar9,&local_80,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  }
  else {
    *pppplVar5 = (long ***)&PTR_FUN_710523d9e8;
    ppplVar3 = (long ***)
               FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8)
    ;
    if (ppplVar3 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_70 = (long ***)&SUB_00000018;
        pcVar6 = (char *)&local_70;
        uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar2 & 1) != 0) &&
           (ppplVar3 = (long ***)
                       FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                      param_8), ppplVar3 != (long ***)0x0)) goto LAB_7101b3ecbc;
      }
      ppplVar3 = (long ***)0x0;
    }
LAB_7101b3ecbc:
    *(undefined1 *)(ppplVar3 + 2) = 1;
    *ppplVar3 = (long **)0x0;
    ppplVar3[1] = (long **)0x0;
    pppplVar5[1] = ppplVar3;
    if (pppplVar5 != &local_80) {
      *ppplVar3 = (long **)*local_78;
      pppplVar5[1][1] = (long **)local_78[1];
      *(undefined1 *)(pppplVar5[1] + 2) = *(undefined1 *)(local_78 + 2);
    }
    plVar9[1] = plVar9[1] + 0x10;
  }
  puVar8 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar8);
  }
  FUN_710392eb40((ulong)puVar1);
  puVar1 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pcVar6 = (char *)&local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                  param_8), puVar1 != (undefined8 *)0x0)) goto LAB_7101b3ed90;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3ed90:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar8 = (undefined8 *)param_1[0x1f];
  *puVar1 = *puVar8;
  puVar1[1] = puVar8[1];
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1[0x1f] + 0x10);
  plVar9 = (long *)param_1[0x40];
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ***)&SUB_00000018;
      pcVar6 = (char *)&local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                  param_8), puVar8 != (undefined8 *)0x0)) goto LAB_7101b3ee18;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7101b3ee18:
  *puVar8 = 0;
  puVar8[1] = 0;
  *(undefined1 *)(puVar8 + 2) = 1;
  *puVar8 = *puVar1;
  puVar8[1] = puVar1[1];
  *(undefined1 *)(puVar8 + 2) = *(undefined1 *)(puVar1 + 2);
  pppplVar5 = (long ****)plVar9[1];
  local_78 = puVar8;
  if (pppplVar5 == (long ****)plVar9[2]) {
    FUN_7101438690(plVar9,&local_80,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  }
  else {
    *pppplVar5 = (long ***)&PTR_FUN_710523d9e8;
    ppplVar3 = (long ***)
               FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8)
    ;
    if (ppplVar3 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_70 = (long ***)&SUB_00000018;
        pcVar6 = (char *)&local_70;
        uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar2 & 1) != 0) &&
           (ppplVar3 = (long ***)
                       FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                      param_8), ppplVar3 != (long ***)0x0)) goto LAB_7101b3eea4;
      }
      ppplVar3 = (long ***)0x0;
    }
LAB_7101b3eea4:
    *(undefined1 *)(ppplVar3 + 2) = 1;
    *ppplVar3 = (long **)0x0;
    ppplVar3[1] = (long **)0x0;
    pppplVar5[1] = ppplVar3;
    if (pppplVar5 != &local_80) {
      *ppplVar3 = (long **)*local_78;
      pppplVar5[1][1] = (long **)local_78[1];
      *(undefined1 *)(pppplVar5[1] + 2) = *(undefined1 *)(local_78 + 2);
    }
    plVar9[1] = plVar9[1] + 0x10;
  }
  puVar8 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar8);
  }
  FUN_710392eb40((ulong)puVar1);
  puVar1 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pcVar6 = (char *)&local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                  param_8), puVar1 != (undefined8 *)0x0)) goto LAB_7101b3ef78;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3ef78:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar8 = (undefined8 *)param_1[0x21];
  *puVar1 = *puVar8;
  puVar1[1] = puVar8[1];
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1[0x21] + 0x10);
  plVar9 = (long *)param_1[0x40];
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ***)&SUB_00000018;
      pcVar6 = (char *)&local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                  param_8), puVar8 != (undefined8 *)0x0)) goto LAB_7101b3f000;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7101b3f000:
  *puVar8 = 0;
  puVar8[1] = 0;
  *(undefined1 *)(puVar8 + 2) = 1;
  *puVar8 = *puVar1;
  puVar8[1] = puVar1[1];
  *(undefined1 *)(puVar8 + 2) = *(undefined1 *)(puVar1 + 2);
  pppplVar5 = (long ****)plVar9[1];
  local_78 = puVar8;
  if (pppplVar5 == (long ****)plVar9[2]) {
    FUN_7101438690(plVar9,&local_80,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  }
  else {
    *pppplVar5 = (long ***)&PTR_FUN_710523d9e8;
    ppplVar3 = (long ***)
               FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8)
    ;
    if (ppplVar3 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_70 = (long ***)&SUB_00000018;
        pcVar6 = (char *)&local_70;
        uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar2 & 1) != 0) &&
           (ppplVar3 = (long ***)
                       FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                      param_8), ppplVar3 != (long ***)0x0)) goto LAB_7101b3f08c;
      }
      ppplVar3 = (long ***)0x0;
    }
LAB_7101b3f08c:
    *(undefined1 *)(ppplVar3 + 2) = 1;
    *ppplVar3 = (long **)0x0;
    ppplVar3[1] = (long **)0x0;
    pppplVar5[1] = ppplVar3;
    if (pppplVar5 != &local_80) {
      *ppplVar3 = (long **)*local_78;
      pppplVar5[1][1] = (long **)local_78[1];
      *(undefined1 *)(pppplVar5[1] + 2) = *(undefined1 *)(local_78 + 2);
    }
    plVar9[1] = plVar9[1] + 0x10;
  }
  puVar8 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar8);
  }
  FUN_710392eb40((ulong)puVar1);
  local_a0 = (long ***)&PTR_FUN_710523d9e8;
  local_98 = (undefined8 *)
             FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  if (local_98 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pcVar6 = (char *)&local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (local_98 = (undefined8 *)
                     FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                    param_8), local_98 != (undefined8 *)0x0)) goto LAB_7101b3f15c;
    }
    local_98 = (undefined8 *)0x0;
  }
LAB_7101b3f15c:
  *(undefined1 *)(local_98 + 2) = 1;
  *local_98 = 0;
  local_98[1] = 0;
  if (&local_a0 != (long ****)(param_1 + 0x2a)) {
    puVar1 = (undefined8 *)param_1[0x2b];
    *local_98 = *puVar1;
    local_98[1] = puVar1[1];
    *(undefined1 *)(local_98 + 2) = *(undefined1 *)(param_1[0x2b] + 0x10);
  }
  FUN_71014388e0(param_1[0x41],(undefined ***)&local_a0,(long ****)pcVar6,ppppbVar7,param_5,param_6,
                 param_7,param_8);
  puVar1 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9e8;
  local_98 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  puVar1 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pcVar6 = (char *)&local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                  param_8), puVar1 != (undefined8 *)0x0)) goto LAB_7101b3f214;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3f214:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar8 = (undefined8 *)param_1[0x2d];
  *puVar1 = *puVar8;
  puVar1[1] = puVar8[1];
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1[0x2d] + 0x10);
  plVar9 = (long *)param_1[0x41];
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ***)&SUB_00000018;
      pcVar6 = (char *)&local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                  param_8), puVar8 != (undefined8 *)0x0)) goto LAB_7101b3f29c;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7101b3f29c:
  *puVar8 = 0;
  puVar8[1] = 0;
  *(undefined1 *)(puVar8 + 2) = 1;
  *puVar8 = *puVar1;
  puVar8[1] = puVar1[1];
  *(undefined1 *)(puVar8 + 2) = *(undefined1 *)(puVar1 + 2);
  pppplVar5 = (long ****)plVar9[1];
  local_78 = puVar8;
  if (pppplVar5 == (long ****)plVar9[2]) {
    FUN_7101438690(plVar9,&local_80,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  }
  else {
    *pppplVar5 = (long ***)&PTR_FUN_710523d9e8;
    ppplVar3 = (long ***)
               FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8)
    ;
    if (ppplVar3 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_70 = (long ***)&SUB_00000018;
        pcVar6 = (char *)&local_70;
        uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar2 & 1) != 0) &&
           (ppplVar3 = (long ***)
                       FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                      param_8), ppplVar3 != (long ***)0x0)) goto LAB_7101b3f328;
      }
      ppplVar3 = (long ***)0x0;
    }
LAB_7101b3f328:
    *(undefined1 *)(ppplVar3 + 2) = 1;
    *ppplVar3 = (long **)0x0;
    ppplVar3[1] = (long **)0x0;
    pppplVar5[1] = ppplVar3;
    if (pppplVar5 != &local_80) {
      *ppplVar3 = (long **)*local_78;
      pppplVar5[1][1] = (long **)local_78[1];
      *(undefined1 *)(pppplVar5[1] + 2) = *(undefined1 *)(local_78 + 2);
    }
    plVar9[1] = plVar9[1] + 0x10;
  }
  puVar8 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar8);
  }
  FUN_710392eb40((ulong)puVar1);
  puVar1 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pcVar6 = (char *)&local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                  param_8), puVar1 != (undefined8 *)0x0)) goto LAB_7101b3f3fc;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3f3fc:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar8 = (undefined8 *)param_1[0x2f];
  *puVar1 = *puVar8;
  puVar1[1] = puVar8[1];
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1[0x2f] + 0x10);
  plVar9 = (long *)param_1[0x41];
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ***)&SUB_00000018;
      pcVar6 = (char *)&local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                  param_8), puVar8 != (undefined8 *)0x0)) goto LAB_7101b3f484;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7101b3f484:
  *puVar8 = 0;
  puVar8[1] = 0;
  *(undefined1 *)(puVar8 + 2) = 1;
  *puVar8 = *puVar1;
  puVar8[1] = puVar1[1];
  *(undefined1 *)(puVar8 + 2) = *(undefined1 *)(puVar1 + 2);
  pppplVar5 = (long ****)plVar9[1];
  local_78 = puVar8;
  if (pppplVar5 == (long ****)plVar9[2]) {
    FUN_7101438690(plVar9,&local_80,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  }
  else {
    *pppplVar5 = (long ***)&PTR_FUN_710523d9e8;
    ppplVar3 = (long ***)
               FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8)
    ;
    if (ppplVar3 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_70 = (long ***)&SUB_00000018;
        pcVar6 = (char *)&local_70;
        uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar2 & 1) != 0) &&
           (ppplVar3 = (long ***)
                       FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                      param_8), ppplVar3 != (long ***)0x0)) goto LAB_7101b3f510;
      }
      ppplVar3 = (long ***)0x0;
    }
LAB_7101b3f510:
    *(undefined1 *)(ppplVar3 + 2) = 1;
    *ppplVar3 = (long **)0x0;
    ppplVar3[1] = (long **)0x0;
    pppplVar5[1] = ppplVar3;
    if (pppplVar5 != &local_80) {
      *ppplVar3 = (long **)*local_78;
      pppplVar5[1][1] = (long **)local_78[1];
      *(undefined1 *)(pppplVar5[1] + 2) = *(undefined1 *)(local_78 + 2);
    }
    plVar9[1] = plVar9[1] + 0x10;
  }
  puVar8 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar8);
  }
  FUN_710392eb40((ulong)puVar1);
  puVar1 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pcVar6 = (char *)&local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                  param_8), puVar1 != (undefined8 *)0x0)) goto LAB_7101b3f5e4;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3f5e4:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar8 = (undefined8 *)param_1[0x31];
  *puVar1 = *puVar8;
  puVar1[1] = puVar8[1];
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1[0x31] + 0x10);
  plVar9 = (long *)param_1[0x41];
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ***)&SUB_00000018;
      pcVar6 = (char *)&local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                  param_8), puVar8 != (undefined8 *)0x0)) goto LAB_7101b3f66c;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7101b3f66c:
  *puVar8 = 0;
  puVar8[1] = 0;
  *(undefined1 *)(puVar8 + 2) = 1;
  *puVar8 = *puVar1;
  puVar8[1] = puVar1[1];
  *(undefined1 *)(puVar8 + 2) = *(undefined1 *)(puVar1 + 2);
  pppplVar5 = (long ****)plVar9[1];
  local_78 = puVar8;
  if (pppplVar5 == (long ****)plVar9[2]) {
    FUN_7101438690(plVar9,&local_80,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  }
  else {
    *pppplVar5 = (long ***)&PTR_FUN_710523d9e8;
    ppplVar3 = (long ***)
               FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8)
    ;
    if (ppplVar3 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_70 = (long ***)&SUB_00000018;
        pcVar6 = (char *)&local_70;
        uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar2 & 1) != 0) &&
           (ppplVar3 = (long ***)
                       FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                      param_8), ppplVar3 != (long ***)0x0)) goto LAB_7101b3f6f8;
      }
      ppplVar3 = (long ***)0x0;
    }
LAB_7101b3f6f8:
    *(undefined1 *)(ppplVar3 + 2) = 1;
    *ppplVar3 = (long **)0x0;
    ppplVar3[1] = (long **)0x0;
    pppplVar5[1] = ppplVar3;
    if (pppplVar5 != &local_80) {
      *ppplVar3 = (long **)*local_78;
      pppplVar5[1][1] = (long **)local_78[1];
      *(undefined1 *)(pppplVar5[1] + 2) = *(undefined1 *)(local_78 + 2);
    }
    plVar9[1] = plVar9[1] + 0x10;
  }
  puVar8 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar8);
  }
  FUN_710392eb40((ulong)puVar1);
  local_b0 = (long ***)&PTR_FUN_710523d9e8;
  local_a8 = (undefined8 *)
             FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  if (local_a8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pcVar6 = (char *)&local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (local_a8 = (undefined8 *)
                     FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                    param_8), local_a8 != (undefined8 *)0x0)) goto LAB_7101b3f7c8;
    }
    local_a8 = (undefined8 *)0x0;
  }
LAB_7101b3f7c8:
  *(undefined1 *)(local_a8 + 2) = 1;
  *local_a8 = 0;
  local_a8[1] = 0;
  if (&local_b0 != (long ****)(param_1 + 0x22)) {
    puVar1 = (undefined8 *)param_1[0x23];
    *local_a8 = *puVar1;
    local_a8[1] = puVar1[1];
    *(undefined1 *)(local_a8 + 2) = *(undefined1 *)(param_1[0x23] + 0x10);
  }
  FUN_71014388e0(param_1[0x42],(undefined ***)&local_b0,(long ****)pcVar6,ppppbVar7,param_5,param_6,
                 param_7,param_8);
  puVar1 = local_a8;
  local_b0 = (long ***)&PTR_FUN_710523d9e8;
  local_a8 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  puVar1 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pcVar6 = (char *)&local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                  param_8), puVar1 != (undefined8 *)0x0)) goto LAB_7101b3f880;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3f880:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar8 = (undefined8 *)param_1[0x25];
  *puVar1 = *puVar8;
  puVar1[1] = puVar8[1];
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1[0x25] + 0x10);
  plVar9 = (long *)param_1[0x42];
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ***)&SUB_00000018;
      pcVar6 = (char *)&local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                  param_8), puVar8 != (undefined8 *)0x0)) goto LAB_7101b3f908;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7101b3f908:
  *puVar8 = 0;
  puVar8[1] = 0;
  *(undefined1 *)(puVar8 + 2) = 1;
  *puVar8 = *puVar1;
  puVar8[1] = puVar1[1];
  *(undefined1 *)(puVar8 + 2) = *(undefined1 *)(puVar1 + 2);
  pppplVar5 = (long ****)plVar9[1];
  local_78 = puVar8;
  if (pppplVar5 == (long ****)plVar9[2]) {
    FUN_7101438690(plVar9,&local_80,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  }
  else {
    *pppplVar5 = (long ***)&PTR_FUN_710523d9e8;
    ppplVar3 = (long ***)
               FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8)
    ;
    if (ppplVar3 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_70 = (long ***)&SUB_00000018;
        pcVar6 = (char *)&local_70;
        uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar2 & 1) != 0) &&
           (ppplVar3 = (long ***)
                       FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                      param_8), ppplVar3 != (long ***)0x0)) goto LAB_7101b3f994;
      }
      ppplVar3 = (long ***)0x0;
    }
LAB_7101b3f994:
    *(undefined1 *)(ppplVar3 + 2) = 1;
    *ppplVar3 = (long **)0x0;
    ppplVar3[1] = (long **)0x0;
    pppplVar5[1] = ppplVar3;
    if (pppplVar5 != &local_80) {
      *ppplVar3 = (long **)*local_78;
      pppplVar5[1][1] = (long **)local_78[1];
      *(undefined1 *)(pppplVar5[1] + 2) = *(undefined1 *)(local_78 + 2);
    }
    plVar9[1] = plVar9[1] + 0x10;
  }
  puVar8 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar8);
  }
  FUN_710392eb40((ulong)puVar1);
  puVar1 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pcVar6 = (char *)&local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                  param_8), puVar1 != (undefined8 *)0x0)) goto LAB_7101b3fa68;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3fa68:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar8 = (undefined8 *)param_1[0x27];
  *puVar1 = *puVar8;
  puVar1[1] = puVar8[1];
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1[0x27] + 0x10);
  plVar9 = (long *)param_1[0x42];
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ***)&SUB_00000018;
      pcVar6 = (char *)&local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                  param_8), puVar8 != (undefined8 *)0x0)) goto LAB_7101b3faf0;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7101b3faf0:
  *puVar8 = 0;
  puVar8[1] = 0;
  *(undefined1 *)(puVar8 + 2) = 1;
  *puVar8 = *puVar1;
  puVar8[1] = puVar1[1];
  *(undefined1 *)(puVar8 + 2) = *(undefined1 *)(puVar1 + 2);
  pppplVar5 = (long ****)plVar9[1];
  local_78 = puVar8;
  if (pppplVar5 == (long ****)plVar9[2]) {
    FUN_7101438690(plVar9,&local_80,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  }
  else {
    *pppplVar5 = (long ***)&PTR_FUN_710523d9e8;
    ppplVar3 = (long ***)
               FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8)
    ;
    if (ppplVar3 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_70 = (long ***)&SUB_00000018;
        pcVar6 = (char *)&local_70;
        uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar2 & 1) != 0) &&
           (ppplVar3 = (long ***)
                       FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                      param_8), ppplVar3 != (long ***)0x0)) goto LAB_7101b3fb7c;
      }
      ppplVar3 = (long ***)0x0;
    }
LAB_7101b3fb7c:
    *(undefined1 *)(ppplVar3 + 2) = 1;
    *ppplVar3 = (long **)0x0;
    ppplVar3[1] = (long **)0x0;
    pppplVar5[1] = ppplVar3;
    if (pppplVar5 != &local_80) {
      *ppplVar3 = (long **)*local_78;
      pppplVar5[1][1] = (long **)local_78[1];
      *(undefined1 *)(pppplVar5[1] + 2) = *(undefined1 *)(local_78 + 2);
    }
    plVar9[1] = plVar9[1] + 0x10;
  }
  puVar8 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar8);
  }
  FUN_710392eb40((ulong)puVar1);
  puVar1 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pcVar6 = (char *)&local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                  param_8), puVar1 != (undefined8 *)0x0)) goto LAB_7101b3fc50;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3fc50:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar8 = (undefined8 *)param_1[0x29];
  *puVar1 = *puVar8;
  puVar1[1] = puVar8[1];
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1[0x29] + 0x10);
  plVar9 = (long *)param_1[0x42];
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ***)&SUB_00000018;
      pcVar6 = (char *)&local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                  param_8), puVar8 != (undefined8 *)0x0)) goto LAB_7101b3fcd8;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7101b3fcd8:
  *puVar8 = 0;
  puVar8[1] = 0;
  *(undefined1 *)(puVar8 + 2) = 1;
  *puVar8 = *puVar1;
  puVar8[1] = puVar1[1];
  *(undefined1 *)(puVar8 + 2) = *(undefined1 *)(puVar1 + 2);
  pppplVar5 = (long ****)plVar9[1];
  local_78 = puVar8;
  if (pppplVar5 == (long ****)plVar9[2]) {
    FUN_7101438690(plVar9,&local_80,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  }
  else {
    *pppplVar5 = (long ***)&PTR_FUN_710523d9e8;
    ppplVar3 = (long ***)
               FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8)
    ;
    if (ppplVar3 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_70 = (long ***)&SUB_00000018;
        pcVar6 = (char *)&local_70;
        uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar2 & 1) != 0) &&
           (ppplVar3 = (long ***)
                       FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                      param_8), ppplVar3 != (long ***)0x0)) goto LAB_7101b3fd64;
      }
      ppplVar3 = (long ***)0x0;
    }
LAB_7101b3fd64:
    *(undefined1 *)(ppplVar3 + 2) = 1;
    *ppplVar3 = (long **)0x0;
    ppplVar3[1] = (long **)0x0;
    pppplVar5[1] = ppplVar3;
    if (pppplVar5 != &local_80) {
      *ppplVar3 = (long **)*local_78;
      pppplVar5[1][1] = (long **)local_78[1];
      *(undefined1 *)(pppplVar5[1] + 2) = *(undefined1 *)(local_78 + 2);
    }
    plVar9[1] = plVar9[1] + 0x10;
  }
  puVar8 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar8);
  }
  FUN_710392eb40((ulong)puVar1);
  local_c0 = (long ***)&PTR_FUN_710523d9e8;
  local_b8 = (undefined8 *)
             FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  if (local_b8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pcVar6 = (char *)&local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (local_b8 = (undefined8 *)
                     FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                    param_8), local_b8 != (undefined8 *)0x0)) goto LAB_7101b3fe38;
    }
    local_b8 = (undefined8 *)0x0;
  }
LAB_7101b3fe38:
  *(undefined1 *)(local_b8 + 2) = 1;
  *local_b8 = 0;
  local_b8[1] = 0;
  if (&local_c0 != (long ****)(param_1 + 0x32)) {
    puVar1 = (undefined8 *)param_1[0x33];
    *local_b8 = *puVar1;
    local_b8[1] = puVar1[1];
    *(undefined1 *)(local_b8 + 2) = *(undefined1 *)(param_1[0x33] + 0x10);
  }
  FUN_71014388e0(param_1[0x43],(undefined ***)&local_c0,(long ****)pcVar6,ppppbVar7,param_5,param_6,
                 param_7,param_8);
  puVar1 = local_b8;
  local_c0 = (long ***)&PTR_FUN_710523d9e8;
  local_b8 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  puVar1 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pcVar6 = (char *)&local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                  param_8), puVar1 != (undefined8 *)0x0)) goto LAB_7101b3fef0;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b3fef0:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar8 = (undefined8 *)param_1[0x35];
  *puVar1 = *puVar8;
  puVar1[1] = puVar8[1];
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1[0x35] + 0x10);
  plVar9 = (long *)param_1[0x43];
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ***)&SUB_00000018;
      pcVar6 = (char *)&local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                  param_8), puVar8 != (undefined8 *)0x0)) goto LAB_7101b3ff78;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7101b3ff78:
  *puVar8 = 0;
  puVar8[1] = 0;
  *(undefined1 *)(puVar8 + 2) = 1;
  *puVar8 = *puVar1;
  puVar8[1] = puVar1[1];
  *(undefined1 *)(puVar8 + 2) = *(undefined1 *)(puVar1 + 2);
  pppplVar5 = (long ****)plVar9[1];
  local_78 = puVar8;
  if (pppplVar5 == (long ****)plVar9[2]) {
    FUN_7101438690(plVar9,&local_80,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  }
  else {
    *pppplVar5 = (long ***)&PTR_FUN_710523d9e8;
    ppplVar3 = (long ***)
               FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8)
    ;
    if (ppplVar3 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_70 = (long ***)&SUB_00000018;
        pcVar6 = (char *)&local_70;
        uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar2 & 1) != 0) &&
           (ppplVar3 = (long ***)
                       FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                      param_8), ppplVar3 != (long ***)0x0)) goto LAB_7101b40004;
      }
      ppplVar3 = (long ***)0x0;
    }
LAB_7101b40004:
    *(undefined1 *)(ppplVar3 + 2) = 1;
    *ppplVar3 = (long **)0x0;
    ppplVar3[1] = (long **)0x0;
    pppplVar5[1] = ppplVar3;
    if (pppplVar5 != &local_80) {
      *ppplVar3 = (long **)*local_78;
      pppplVar5[1][1] = (long **)local_78[1];
      *(undefined1 *)(pppplVar5[1] + 2) = *(undefined1 *)(local_78 + 2);
    }
    plVar9[1] = plVar9[1] + 0x10;
  }
  puVar8 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar8);
  }
  FUN_710392eb40((ulong)puVar1);
  puVar1 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pcVar6 = (char *)&local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                  param_8), puVar1 != (undefined8 *)0x0)) goto LAB_7101b400d8;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b400d8:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar8 = (undefined8 *)param_1[0x37];
  *puVar1 = *puVar8;
  puVar1[1] = puVar8[1];
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1[0x37] + 0x10);
  plVar9 = (long *)param_1[0x43];
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ***)&SUB_00000018;
      pcVar6 = (char *)&local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                  param_8), puVar8 != (undefined8 *)0x0)) goto LAB_7101b40160;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7101b40160:
  *puVar8 = 0;
  puVar8[1] = 0;
  *(undefined1 *)(puVar8 + 2) = 1;
  *puVar8 = *puVar1;
  puVar8[1] = puVar1[1];
  *(undefined1 *)(puVar8 + 2) = *(undefined1 *)(puVar1 + 2);
  pppplVar5 = (long ****)plVar9[1];
  local_78 = puVar8;
  if (pppplVar5 == (long ****)plVar9[2]) {
    FUN_7101438690(plVar9,&local_80,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  }
  else {
    *pppplVar5 = (long ***)&PTR_FUN_710523d9e8;
    ppplVar3 = (long ***)
               FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8)
    ;
    if (ppplVar3 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_70 = (long ***)&SUB_00000018;
        pcVar6 = (char *)&local_70;
        uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar2 & 1) != 0) &&
           (ppplVar3 = (long ***)
                       FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                      param_8), ppplVar3 != (long ***)0x0)) goto LAB_7101b401ec;
      }
      ppplVar3 = (long ***)0x0;
    }
LAB_7101b401ec:
    *(undefined1 *)(ppplVar3 + 2) = 1;
    *ppplVar3 = (long **)0x0;
    ppplVar3[1] = (long **)0x0;
    pppplVar5[1] = ppplVar3;
    if (pppplVar5 != &local_80) {
      *ppplVar3 = (long **)*local_78;
      pppplVar5[1][1] = (long **)local_78[1];
      *(undefined1 *)(pppplVar5[1] + 2) = *(undefined1 *)(local_78 + 2);
    }
    plVar9[1] = plVar9[1] + 0x10;
  }
  puVar8 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar8);
  }
  FUN_710392eb40((ulong)puVar1);
  puVar1 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pcVar6 = (char *)&local_80;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                  param_8), puVar1 != (undefined8 *)0x0)) goto LAB_7101b402c0;
    }
    puVar1 = (undefined8 *)0x0;
  }
LAB_7101b402c0:
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar8 = (undefined8 *)param_1[0x39];
  *puVar1 = *puVar8;
  puVar1[1] = puVar8[1];
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1[0x39] + 0x10);
  plVar9 = (long *)param_1[0x43];
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ***)&SUB_00000018;
      pcVar6 = (char *)&local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                  param_8), puVar8 != (undefined8 *)0x0)) goto LAB_7101b40348;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7101b40348:
  *puVar8 = 0;
  puVar8[1] = 0;
  *(undefined1 *)(puVar8 + 2) = 1;
  *puVar8 = *puVar1;
  puVar8[1] = puVar1[1];
  *(undefined1 *)(puVar8 + 2) = *(undefined1 *)(puVar1 + 2);
  pppplVar5 = (long ****)plVar9[1];
  local_78 = puVar8;
  if (pppplVar5 == (long ****)plVar9[2]) {
    FUN_7101438690(plVar9,&local_80,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
    goto LAB_7101b40434;
  }
  *pppplVar5 = (long ***)&PTR_FUN_710523d9e8;
  ppplVar3 = (long ***)
             FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  if (ppplVar3 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ***)&SUB_00000018;
      pcVar6 = (char *)&local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (ppplVar3 = (long ***)
                     FUN_710392e290(0x10,0x18,(long ****)pcVar6,ppppbVar7,param_5,param_6,param_7,
                                    param_8), ppplVar3 != (long ***)0x0)) goto LAB_7101b403d4;
    }
    ppplVar3 = (long ***)0x0;
  }
LAB_7101b403d4:
  *(undefined1 *)(ppplVar3 + 2) = 1;
  *ppplVar3 = (long **)0x0;
  ppplVar3[1] = (long **)0x0;
  pppplVar5[1] = ppplVar3;
  if (pppplVar5 != &local_80) {
    *ppplVar3 = (long **)*local_78;
    pppplVar5[1][1] = (long **)local_78[1];
    *(undefined1 *)(pppplVar5[1] + 2) = *(undefined1 *)(local_78 + 2);
  }
  plVar9[1] = plVar9[1] + 0x10;
LAB_7101b40434:
  puVar8 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar8);
  }
  FUN_710392eb40((ulong)puVar1);
  FUN_7103776910(&local_80,*(long *)param_1[1] + 8,(long ****)"set_txt_serif",pcVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  puVar1 = local_78;
  if ((long ****)(param_1 + 0x3e) != &local_80) {
    local_78 = (undefined8 *)0x0;
    uVar2 = param_1[0x3f];
    param_1[0x3f] = (long)puVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar1 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  return;
}

