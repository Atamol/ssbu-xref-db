// addr:      7101b438a0
// offset:    0x1b438a0
// name:      FUN_7101b438a0
// mangled:   
// signature: undefined __cdecl FUN_7101b438a0(long * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b438a0(long *param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_3b8 [16];
  undefined1 auStack_3a8 [16];
  undefined1 auStack_398 [16];
  undefined1 auStack_388 [680];
  long ****local_e0;
  long ****local_d8;
  long ****local_d0;
  uint local_c4;
  undefined1 *local_c0;
  long *local_b8;
  undefined **local_b0;
  ulong local_a8;
  long ***local_a0;
  ulong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_c4 = (uint)param_3;
  *param_1 = param_2;
  *(byte *)(param_1 + 1) = (byte)param_3 & 1;
  local_b8 = param_1 + 2;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar11 = extraout_x1;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&DAT_00000008;
      param_3 = &local_a0;
      auVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      uVar11 = auVar13._8_8_;
      if (((auVar13._0_8_ & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8),
         uVar11 = extraout_x1_00, puVar3 != (undefined8 *)0x0)) goto LAB_7101b43938;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b43938:
  FUN_7103773200(puVar3,uVar11,param_3,param_4,param_5,param_6,param_7,param_8);
  param_1[2] = (long)puVar3;
  FUN_7101414b10(param_1 + 3,local_b8,param_3,param_4,param_5,param_6,param_7,param_8);
  pppplVar9 = (long ****)&DAT_00000128;
  memset(param_1 + 6,0,0x128);
  param_1[5] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b439c0;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b439c0:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[6] = (long)puVar3;
  param_1[7] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b43a20;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b43a20:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[8] = (long)puVar3;
  param_1[9] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b43a80;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b43a80:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[10] = (long)puVar3;
  param_1[0xb] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b43ae0;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b43ae0:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0xc] = (long)puVar3;
  param_1[0xd] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b43b40;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b43b40:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0xe] = (long)puVar3;
  param_1[0xf] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b43ba0;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b43ba0:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x10] = (long)puVar3;
  param_1[0x11] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b43c00;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b43c00:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x12] = (long)puVar3;
  param_1[0x13] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b43c60;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b43c60:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x14] = (long)puVar3;
  param_1[0x15] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b43cc0;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b43cc0:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x16] = (long)puVar3;
  param_1[0x17] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b43d20;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b43d20:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x18] = (long)puVar3;
  param_1[0x19] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b43d80;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b43d80:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x1a] = (long)puVar3;
  param_1[0x1b] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b43de0;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b43de0:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x1c] = (long)puVar3;
  param_1[0x1d] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b43e40;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b43e40:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x1e] = (long)puVar3;
  param_1[0x1f] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b43ea0;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b43ea0:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x20] = (long)puVar3;
  param_1[0x21] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b43f00;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b43f00:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x22] = (long)puVar3;
  param_1[0x23] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b43f60;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b43f60:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x24] = (long)puVar3;
  param_1[0x25] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b43fc0;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b43fc0:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x26] = (long)puVar3;
  param_1[0x27] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b44020;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b44020:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x28] = (long)puVar3;
  param_1[0x29] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b44080;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b44080:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  pppplVar9 = (long ****)&DAT_00000188;
  param_1[0x2a] = (long)puVar3;
  memset(param_1 + 0x2c,0,0x188);
  param_1[0x2b] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b44100;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b44100:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x2c] = (long)puVar3;
  param_1[0x2d] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b44164;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b44164:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x2e] = (long)puVar3;
  param_1[0x2f] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b441c4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b441c4:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x30] = (long)puVar3;
  param_1[0x31] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b44228;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b44228:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x32] = (long)puVar3;
  param_1[0x33] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b44288;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b44288:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x34] = (long)puVar3;
  param_1[0x35] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b442ec;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b442ec:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x36] = (long)puVar3;
  param_1[0x37] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4434c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4434c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x38] = (long)puVar3;
  param_1[0x39] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b443b0;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b443b0:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x3a] = (long)puVar3;
  param_1[0x3b] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b44410;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b44410:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x3c] = (long)puVar3;
  param_1[0x3d] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b44474;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b44474:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x3e] = (long)puVar3;
  param_1[0x3f] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b444d4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b444d4:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x40] = (long)puVar3;
  param_1[0x41] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4453c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4453c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x42] = (long)puVar3;
  param_1[0x43] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b445a0;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b445a0:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x44] = (long)puVar3;
  param_1[0x45] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b44608;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b44608:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x46] = (long)puVar3;
  param_1[0x47] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4466c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4466c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x48] = (long)puVar3;
  param_1[0x49] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b446d4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b446d4:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x4a] = (long)puVar3;
  param_1[0x4b] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b44738;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b44738:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x4c] = (long)puVar3;
  param_1[0x4d] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b447a0;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b447a0:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x4e] = (long)puVar3;
  param_1[0x4f] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b44804;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b44804:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x50] = (long)puVar3;
  param_1[0x51] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4486c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4486c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x52] = (long)puVar3;
  param_1[0x53] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b448d0;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b448d0:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x54] = (long)puVar3;
  param_1[0x55] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b44938;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b44938:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x56] = (long)puVar3;
  param_1[0x57] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4499c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4499c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x58] = (long)puVar3;
  param_1[0x59] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b44a04;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b44a04:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x5a] = (long)puVar3;
  param_1[0x5b] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b44a68;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b44a68:
  *(undefined1 *)(puVar3 + 2) = 1;
  *puVar3 = 0;
  puVar3[1] = 0;
  pppplVar9 = (long ****)0x6f8;
  param_1[0x5c] = (long)puVar3;
  memset(param_1 + 0x5e,0,0x6f8);
  param_1[0x5d] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b44ae4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b44ae4:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x5e] = (long)puVar3;
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b44b5c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b44b5c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x60] = (long)puVar3;
  param_1[0x61] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b44bc4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b44bc4:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x62] = (long)puVar3;
  param_1[99] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b44c28;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b44c28:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[100] = (long)puVar3;
  param_1[0x66] = 0;
  param_1[0x65] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b44c94;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b44c94:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x66] = (long)puVar3;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b44d0c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b44d0c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x68] = (long)puVar3;
  param_1[0x69] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b44d74;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b44d74:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x6a] = (long)puVar3;
  param_1[0x6b] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b44dd8;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b44dd8:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x6c] = (long)puVar3;
  param_1[0x6e] = 0;
  param_1[0x6d] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b44e44;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b44e44:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x6e] = (long)puVar3;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b44ebc;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b44ebc:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x70] = (long)puVar3;
  param_1[0x71] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b44f24;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b44f24:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x72] = (long)puVar3;
  param_1[0x73] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b44f88;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b44f88:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x74] = (long)puVar3;
  param_1[0x76] = 0;
  param_1[0x75] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b44ff4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b44ff4:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x76] = (long)puVar3;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x77] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4506c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4506c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x78] = (long)puVar3;
  param_1[0x79] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b450d4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b450d4:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x7a] = (long)puVar3;
  param_1[0x7b] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b45138;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b45138:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x7c] = (long)puVar3;
  param_1[0x7e] = 0;
  param_1[0x7d] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b451a4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b451a4:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x7e] = (long)puVar3;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4521c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4521c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x80] = (long)puVar3;
  param_1[0x81] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b45284;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b45284:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x82] = (long)puVar3;
  param_1[0x83] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b452e8;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b452e8:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x84] = (long)puVar3;
  param_1[0x86] = 0;
  param_1[0x85] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b45354;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b45354:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x86] = (long)puVar3;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b453cc;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b453cc:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x88] = (long)puVar3;
  param_1[0x89] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b45434;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b45434:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x8a] = (long)puVar3;
  param_1[0x8b] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b45498;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b45498:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x8c] = (long)puVar3;
  param_1[0x8e] = 0;
  param_1[0x8d] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b45504;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b45504:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x8e] = (long)puVar3;
  param_1[0x94] = 0;
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4557c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4557c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x90] = (long)puVar3;
  param_1[0x91] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b455e4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b455e4:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x92] = (long)puVar3;
  param_1[0x93] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b45648;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b45648:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x94] = (long)puVar3;
  param_1[0x96] = 0;
  param_1[0x95] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b456b4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b456b4:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x96] = (long)puVar3;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[0x97] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4572c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4572c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x98] = (long)puVar3;
  param_1[0x99] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b45794;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b45794:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x9a] = (long)puVar3;
  param_1[0x9b] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b457f8;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b457f8:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x9c] = (long)puVar3;
  param_1[0x9e] = 0;
  param_1[0x9d] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b45864;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b45864:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x9e] = (long)puVar3;
  param_1[0xa4] = 0;
  param_1[0xa3] = 0;
  param_1[0xa2] = 0;
  param_1[0xa1] = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b458dc;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b458dc:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xa0] = (long)puVar3;
  param_1[0xa1] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b45944;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b45944:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xa2] = (long)puVar3;
  param_1[0xa3] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b459a8;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b459a8:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xa4] = (long)puVar3;
  param_1[0xa6] = 0;
  param_1[0xa5] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b45a14;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b45a14:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0xa6] = (long)puVar3;
  param_1[0xac] = 0;
  param_1[0xab] = 0;
  param_1[0xaa] = 0;
  param_1[0xa9] = 0;
  param_1[0xa8] = 0;
  param_1[0xa7] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b45a8c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b45a8c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xa8] = (long)puVar3;
  param_1[0xa9] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b45af4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b45af4:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xaa] = (long)puVar3;
  param_1[0xab] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b45b58;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b45b58:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xac] = (long)puVar3;
  param_1[0xae] = 0;
  param_1[0xad] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b45bc4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b45bc4:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0xae] = (long)puVar3;
  param_1[0xb4] = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  param_1[0xaf] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b45c3c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b45c3c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xb0] = (long)puVar3;
  param_1[0xb1] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b45ca4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b45ca4:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xb2] = (long)puVar3;
  param_1[0xb3] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b45d08;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b45d08:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xb4] = (long)puVar3;
  param_1[0xb6] = 0;
  param_1[0xb5] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b45d74;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b45d74:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0xb6] = (long)puVar3;
  param_1[0xbc] = 0;
  param_1[0xbb] = 0;
  param_1[0xba] = 0;
  param_1[0xb9] = 0;
  param_1[0xb8] = 0;
  param_1[0xb7] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b45dec;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b45dec:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xb8] = (long)puVar3;
  param_1[0xb9] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b45e54;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b45e54:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xba] = (long)puVar3;
  param_1[0xbb] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b45eb8;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b45eb8:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xbc] = (long)puVar3;
  param_1[0xbe] = 0;
  param_1[0xbd] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b45f24;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b45f24:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0xbe] = (long)puVar3;
  param_1[0xc4] = 0;
  param_1[0xc3] = 0;
  param_1[0xc2] = 0;
  param_1[0xc1] = 0;
  param_1[0xc0] = 0;
  param_1[0xbf] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b45f9c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b45f9c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xc0] = (long)puVar3;
  param_1[0xc1] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b46004;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b46004:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xc2] = (long)puVar3;
  param_1[0xc3] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b46068;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b46068:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xc4] = (long)puVar3;
  param_1[0xc6] = 0;
  param_1[0xc5] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b460d4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b460d4:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0xc6] = (long)puVar3;
  param_1[0xcc] = 0;
  param_1[0xcb] = 0;
  param_1[0xca] = 0;
  param_1[0xc9] = 0;
  param_1[200] = 0;
  param_1[199] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4614c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4614c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[200] = (long)puVar3;
  param_1[0xc9] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b461b4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b461b4:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xca] = (long)puVar3;
  param_1[0xcb] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b46218;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b46218:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xcc] = (long)puVar3;
  param_1[0xce] = 0;
  param_1[0xcd] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b46284;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b46284:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0xce] = (long)puVar3;
  param_1[0xd4] = 0;
  param_1[0xd3] = 0;
  param_1[0xd2] = 0;
  param_1[0xd1] = 0;
  param_1[0xd0] = 0;
  param_1[0xcf] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b462fc;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b462fc:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xd0] = (long)puVar3;
  param_1[0xd1] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b46364;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b46364:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xd2] = (long)puVar3;
  param_1[0xd3] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b463c8;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b463c8:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xd4] = (long)puVar3;
  param_1[0xd6] = 0;
  param_1[0xd5] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b46434;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b46434:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0xd6] = (long)puVar3;
  param_1[0xdc] = 0;
  param_1[0xdb] = 0;
  param_1[0xda] = 0;
  param_1[0xd9] = 0;
  param_1[0xd8] = 0;
  param_1[0xd7] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b464ac;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b464ac:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xd8] = (long)puVar3;
  param_1[0xd9] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b46514;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b46514:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xda] = (long)puVar3;
  param_1[0xdb] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b46578;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b46578:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xdc] = (long)puVar3;
  param_1[0xde] = 0;
  param_1[0xdd] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b465e4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b465e4:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0xde] = (long)puVar3;
  param_1[0xe4] = 0;
  param_1[0xe3] = 0;
  param_1[0xe2] = 0;
  param_1[0xe1] = 0;
  param_1[0xe0] = 0;
  param_1[0xdf] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4665c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4665c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xe0] = (long)puVar3;
  param_1[0xe1] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b466c4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b466c4:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xe2] = (long)puVar3;
  param_1[0xe3] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b46728;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b46728:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xe4] = (long)puVar3;
  param_1[0xe6] = 0;
  param_1[0xe5] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b46794;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b46794:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0xe6] = (long)puVar3;
  param_1[0xec] = 0;
  param_1[0xeb] = 0;
  param_1[0xea] = 0;
  param_1[0xe9] = 0;
  param_1[0xe8] = 0;
  param_1[0xe7] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4680c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4680c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xe8] = (long)puVar3;
  param_1[0xe9] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b46874;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b46874:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xea] = (long)puVar3;
  param_1[0xeb] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b468d8;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b468d8:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xec] = (long)puVar3;
  param_1[0xee] = 0;
  param_1[0xed] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b46944;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b46944:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0xee] = (long)puVar3;
  param_1[0xf4] = 0;
  param_1[0xf3] = 0;
  param_1[0xf2] = 0;
  param_1[0xf1] = 0;
  param_1[0xf0] = 0;
  param_1[0xef] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b469bc;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b469bc:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xf0] = (long)puVar3;
  param_1[0xf1] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b46a24;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b46a24:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xf2] = (long)puVar3;
  param_1[0xf3] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b46a88;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b46a88:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xf4] = (long)puVar3;
  param_1[0xf6] = 0;
  param_1[0xf5] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b46af4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b46af4:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0xf6] = (long)puVar3;
  param_1[0xfc] = 0;
  param_1[0xfb] = 0;
  param_1[0xfa] = 0;
  param_1[0xf9] = 0;
  param_1[0xf8] = 0;
  param_1[0xf7] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b46b6c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b46b6c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xf8] = (long)puVar3;
  param_1[0xf9] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b46bd4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b46bd4:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xfa] = (long)puVar3;
  param_1[0xfb] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b46c38;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b46c38:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xfc] = (long)puVar3;
  param_1[0xfe] = 0;
  param_1[0xfd] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b46ca4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b46ca4:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0xfe] = (long)puVar3;
  param_1[0x104] = 0;
  param_1[0x103] = 0;
  param_1[0x102] = 0;
  param_1[0x101] = 0;
  param_1[0x100] = 0;
  param_1[0xff] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b46d1c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b46d1c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x100] = (long)puVar3;
  param_1[0x101] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b46d84;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b46d84:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x102] = (long)puVar3;
  param_1[0x103] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b46de8;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b46de8:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x104] = (long)puVar3;
  param_1[0x106] = 0;
  param_1[0x105] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b46e54;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b46e54:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x106] = (long)puVar3;
  param_1[0x10c] = 0;
  param_1[0x10b] = 0;
  param_1[0x10a] = 0;
  param_1[0x109] = 0;
  param_1[0x108] = 0;
  param_1[0x107] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b46ecc;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b46ecc:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x108] = (long)puVar3;
  param_1[0x109] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b46f34;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b46f34:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x10a] = (long)puVar3;
  param_1[0x10b] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b46f98;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b46f98:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x10c] = (long)puVar3;
  param_1[0x10e] = 0;
  param_1[0x10d] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b47004;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b47004:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x10e] = (long)puVar3;
  param_1[0x114] = 0;
  param_1[0x113] = 0;
  param_1[0x112] = 0;
  param_1[0x111] = 0;
  param_1[0x110] = 0;
  param_1[0x10f] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4707c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4707c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x110] = (long)puVar3;
  param_1[0x111] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b470e4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b470e4:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x112] = (long)puVar3;
  param_1[0x113] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b47148;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b47148:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x114] = (long)puVar3;
  param_1[0x116] = 0;
  param_1[0x115] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b471b4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b471b4:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x116] = (long)puVar3;
  param_1[0x11c] = 0;
  param_1[0x11b] = 0;
  param_1[0x11a] = 0;
  param_1[0x119] = 0;
  param_1[0x118] = 0;
  param_1[0x117] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4722c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4722c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x118] = (long)puVar3;
  param_1[0x119] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b47294;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b47294:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x11a] = (long)puVar3;
  param_1[0x11b] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b472f8;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b472f8:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x11c] = (long)puVar3;
  param_1[0x11e] = 0;
  param_1[0x11d] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b47364;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b47364:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x11e] = (long)puVar3;
  param_1[0x124] = 0;
  param_1[0x123] = 0;
  param_1[0x122] = 0;
  param_1[0x121] = 0;
  param_1[0x120] = 0;
  param_1[0x11f] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b473dc;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b473dc:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x120] = (long)puVar3;
  param_1[0x121] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b47444;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b47444:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x122] = (long)puVar3;
  param_1[0x123] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b474a8;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b474a8:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x124] = (long)puVar3;
  param_1[0x126] = 0;
  param_1[0x125] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b47514;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b47514:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x126] = (long)puVar3;
  param_1[300] = 0;
  param_1[299] = 0;
  param_1[0x12a] = 0;
  param_1[0x129] = 0;
  param_1[0x128] = 0;
  param_1[0x127] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4758c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4758c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x128] = (long)puVar3;
  param_1[0x129] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b475f4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b475f4:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x12a] = (long)puVar3;
  param_1[299] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b47658;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b47658:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[300] = (long)puVar3;
  param_1[0x12e] = 0;
  param_1[0x12d] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b476c4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b476c4:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x12e] = (long)puVar3;
  param_1[0x134] = 0;
  param_1[0x133] = 0;
  param_1[0x132] = 0;
  param_1[0x131] = 0;
  param_1[0x130] = 0;
  param_1[0x12f] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4773c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4773c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x130] = (long)puVar3;
  param_1[0x131] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b477a4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b477a4:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x132] = (long)puVar3;
  param_1[0x133] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b47808;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b47808:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x134] = (long)puVar3;
  param_1[0x136] = 0;
  param_1[0x135] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000020;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b47874;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b47874:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x136] = (long)puVar3;
  param_1[0x13c] = 0;
  param_1[0x13b] = 0;
  param_1[0x13a] = 0;
  param_1[0x139] = 0;
  param_1[0x138] = 0;
  param_1[0x137] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b478ec;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b478ec:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x138] = (long)puVar3;
  param_1[0x139] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b47954;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b47954:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x13a] = (long)puVar3;
  param_1[0x13b] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_a0 = (long ***)&SUB_00000018;
      pppplVar9 = &local_a0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b479b8;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b479b8:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x13c] = (long)puVar3;
  puVar10 = &DAT_7104544970;
  uVar11 = 0;
  FUN_71032cbf30(local_b8,**(long **)(*param_1 + 0x78),(ulong *)&DAT_7104544970,(byte ****)0x0,
                 param_5,param_6,param_7,param_8);
  FUN_71037780e0(&local_a0,*(long *)param_1[2] + 8,(long ****)"type_pokesta1_info",puVar10,uVar11,
                 param_5,param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x2b) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x2c];
    param_1[0x2c] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9e8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_a0,*(long *)param_1[2] + 8,(long ****)"type_pokesta2_info",puVar10,uVar11,
                 param_5,param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x2d) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x2e];
    param_1[0x2e] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9e8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_a0,*(long *)param_1[2] + 8,(long ****)"type_pokesta1",puVar10,uVar11,param_5
                 ,param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x2f) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x30];
    param_1[0x30] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9e8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_a0,*(long *)param_1[2] + 8,(long ****)"type_pokesta2",puVar10,uVar11,param_5
                 ,param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x31) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x32];
    param_1[0x32] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9e8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_a0,*(long *)param_1[2] + 8,(long ****)"info_off",puVar10,uVar11,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_98;
  local_d0 = (long ****)(param_1 + 0x33);
  if (local_d0 != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x34];
    param_1[0x34] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9e8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_a0,*(long *)param_1[2] + 8,(long ****)"bg_pokesta1",puVar10,uVar11,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_98;
  local_d8 = (long ****)(param_1 + 0x35);
  if (local_d8 != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x36];
    param_1[0x36] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9e8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_a0,*(long *)param_1[2] + 8,(long ****)"bg_pokesta2",puVar10,uVar11,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_98;
  local_e0 = (long ****)(param_1 + 0x37);
  if (local_e0 != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x38];
    param_1[0x38] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9e8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_a0,*(long *)param_1[2] + 8,(long ****)"count_txt_off",puVar10,uVar11,param_5
                 ,param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x39) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x3a];
    param_1[0x3a] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9e8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_a0,*(long *)param_1[2] + 8,(long ****)"count_05",puVar10,uVar11,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x3b) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x3c];
    param_1[0x3c] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9e8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_a0,*(long *)param_1[2] + 8,(long ****)"count_04",puVar10,uVar11,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x3d) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x3e];
    param_1[0x3e] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9e8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_a0,*(long *)param_1[2] + 8,(long ****)"count_03",puVar10,uVar11,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x3f) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x40];
    param_1[0x40] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9e8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_a0,*(long *)param_1[2] + 8,(long ****)"count_02",puVar10,uVar11,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x41) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x42];
    param_1[0x42] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9e8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_a0,*(long *)param_1[2] + 8,(long ****)"count_01",puVar10,uVar11,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x43) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x44];
    param_1[0x44] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9e8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_a0,*(long *)param_1[2] + 8,(long ****)"txt_01",puVar10,uVar11,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x45) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x46];
    param_1[0x46] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9e8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_a0,*(long *)param_1[2] + 8,(long ****)"txt_02",puVar10,uVar11,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x47) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x48];
    param_1[0x48] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9e8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_a0,*(long *)param_1[2] + 8,(long ****)"txt_03",puVar10,uVar11,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x49) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x4a];
    param_1[0x4a] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9e8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_a0,*(long *)param_1[2] + 8,(long ****)"txt_04",puVar10,uVar11,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x4b) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x4c];
    param_1[0x4c] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9e8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_a0,*(long *)param_1[2] + 8,(long ****)"txt_05",puVar10,uVar11,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x4d) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x4e];
    param_1[0x4e] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9e8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_a0,*(long *)param_1[2] + 8,(long ****)"txt_06",puVar10,uVar11,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x4f) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x50];
    param_1[0x50] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9e8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_a0,*(long *)param_1[2] + 8,(long ****)"txt_07",puVar10,uVar11,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x51) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x52];
    param_1[0x52] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9e8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_a0,*(long *)param_1[2] + 8,(long ****)"txt_08",puVar10,uVar11,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x53) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x54];
    param_1[0x54] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9e8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_a0,*(long *)param_1[2] + 8,(long ****)"teambattle_pokesta1_little",puVar10,
                 uVar11,param_5,param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x55) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x56];
    param_1[0x56] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9e8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_a0,*(long *)param_1[2] + 8,(long ****)"teambattle_pokesta2_little",puVar10,
                 uVar11,param_5,param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x57) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x58];
    param_1[0x58] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9e8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_a0,*(long *)param_1[2] + 8,(long ****)"teambattle_pokesta1_many",puVar10,
                 uVar11,param_5,param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x59) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x5a];
    param_1[0x5a] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9e8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_a0,*(long *)param_1[2] + 8,(long ****)"teambattle_pokesta2_many",puVar10,
                 uVar11,param_5,param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x5b) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x5c];
    param_1[0x5c] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9e8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_7103776910(&local_a0,*(long *)param_1[2] + 8,(long ****)"set_txt_info_00",puVar10,uVar11,
                 param_5,param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 5) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[6];
    param_1[6] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9a8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_7103776910(&local_a0,*(long *)param_1[2] + 8,(long ****)"set_txt_info_01",puVar10,uVar11,
                 param_5,param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 7) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[8];
    param_1[8] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9a8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_7103776910(&local_a0,*(long *)param_1[2] + 8,(long ****)"set_txt_info_02",puVar10,uVar11,
                 param_5,param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 9) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[10];
    param_1[10] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9a8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_7103776910(&local_a0,*(long *)param_1[2] + 8,(long ****)"set_txt_info_03",puVar10,uVar11,
                 param_5,param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0xb) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0xc];
    param_1[0xc] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9a8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_7103776910(&local_a0,*(long *)param_1[2] + 8,(long ****)"set_txt_info_04",puVar10,uVar11,
                 param_5,param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0xd) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0xe];
    param_1[0xe] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9a8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_7103776910(&local_a0,*(long *)param_1[2] + 8,(long ****)"set_txt_00",puVar10,uVar11,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0xf) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x10];
    param_1[0x10] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9a8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_7103776910(&local_a0,*(long *)param_1[2] + 8,(long ****)"set_txt_01",puVar10,uVar11,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x11) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x12];
    param_1[0x12] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9a8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_7103776910(&local_a0,*(long *)param_1[2] + 8,(long ****)"set_txt_02",puVar10,uVar11,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x13) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x14];
    param_1[0x14] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9a8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_7103776910(&local_a0,*(long *)param_1[2] + 8,(long ****)"set_txt_03",puVar10,uVar11,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x15) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x16];
    param_1[0x16] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9a8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_7103776910(&local_a0,*(long *)param_1[2] + 8,(long ****)"set_txt_04",puVar10,uVar11,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x17) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x18];
    param_1[0x18] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9a8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_7103776910(&local_a0,*(long *)param_1[2] + 8,(long ****)"set_txt_05",puVar10,uVar11,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x19) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x1a];
    param_1[0x1a] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9a8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_7103776910(&local_a0,*(long *)param_1[2] + 8,(long ****)"set_txt_06",puVar10,uVar11,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x1b) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x1c];
    param_1[0x1c] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9a8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_7103776910(&local_a0,*(long *)param_1[2] + 8,(long ****)"set_txt_07",puVar10,uVar11,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x1d) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x1e];
    param_1[0x1e] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9a8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_7103776910(&local_a0,*(long *)param_1[2] + 8,(long ****)"set_txt_08",puVar10,uVar11,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x1f) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x20];
    param_1[0x20] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9a8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_7103776910(&local_a0,*(long *)param_1[2] + 8,(long ****)"set_txt_count_01",puVar10,uVar11,
                 param_5,param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x21) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x22];
    param_1[0x22] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9a8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_7103776910(&local_a0,*(long *)param_1[2] + 8,(long ****)"set_txt_count_02",puVar10,uVar11,
                 param_5,param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x23) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x24];
    param_1[0x24] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9a8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_7103776910(&local_a0,*(long *)param_1[2] + 8,(long ****)"set_txt_count_03",puVar10,uVar11,
                 param_5,param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x25) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x26];
    param_1[0x26] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9a8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_7103776910(&local_a0,*(long *)param_1[2] + 8,(long ****)"set_txt_count_04",puVar10,uVar11,
                 param_5,param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x27) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x28];
    param_1[0x28] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9a8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_7103776910(&local_a0,*(long *)param_1[2] + 8,(long ****)"set_txt_count_05",puVar10,uVar11,
                 param_5,param_6,param_7,param_8);
  uVar4 = local_98;
  if ((long ****)(param_1 + 0x29) != &local_a0) {
    local_98 = 0;
    uVar5 = param_1[0x2a];
    param_1[0x2a] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_98;
  local_a0 = (long ***)&PTR_FUN_710523d9a8;
  local_98 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  lVar1 = -(long)param_1;
  puVar12 = (undefined1 *)0x0;
  local_c0 = auStack_3b8 + lVar1;
  uVar4 = 1;
  do {
    uVar7 = uVar4;
    FUN_7103776640(&local_b0,*(long *)*local_b8 + 8,(byte ****)"set_part_%02d",uVar4,uVar11,param_5,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_a0,(long)&local_b0,(long ****)"set_txt_00",uVar7,uVar11,param_5,param_6,
                   param_7,param_8);
    uVar5 = local_98;
    if (auStack_388 + lVar1 != puVar12) {
      local_98 = 0;
      uVar6 = *(ulong *)((long)param_1 + (long)(puVar12 + 0x2f0));
      *(ulong *)((long)param_1 + (long)(puVar12 + 0x2f0)) = uVar5;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    uVar5 = local_98;
    local_a0 = (long ***)&PTR_FUN_710523d9a8;
    local_98 = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_71037780e0(&local_a0,(long)&local_b0,(long ****)"txt_color",uVar7,uVar11,param_5,param_6,
                   param_7,param_8);
    uVar5 = local_98;
    if (auStack_398 + lVar1 != puVar12) {
      local_98 = 0;
      uVar6 = *(ulong *)((long)param_1 + (long)(puVar12 + 0x300));
      *(ulong *)((long)param_1 + (long)(puVar12 + 0x300)) = uVar5;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    uVar5 = local_98;
    local_a0 = (long ***)&PTR_FUN_710523d9e8;
    local_98 = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_71037780e0(&local_a0,(long)&local_b0,(long ****)"txt_on",uVar7,uVar11,param_5,param_6,
                   param_7,param_8);
    uVar5 = local_98;
    if (auStack_3a8 + lVar1 != puVar12) {
      local_98 = 0;
      uVar6 = *(ulong *)((long)param_1 + (long)(puVar12 + 0x310));
      *(ulong *)((long)param_1 + (long)(puVar12 + 0x310)) = uVar5;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    uVar5 = local_98;
    local_a0 = (long ***)&PTR_FUN_710523d9e8;
    local_98 = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_71037780e0(&local_a0,(long)&local_b0,(long ****)"txt_off",uVar7,uVar11,param_5,param_6,
                   param_7,param_8);
    uVar5 = local_98;
    if (local_c0 != puVar12) {
      local_98 = 0;
      uVar7 = *(ulong *)((long)param_1 + (long)(puVar12 + 800));
      *(ulong *)((long)param_1 + (long)(puVar12 + 800)) = uVar5;
      if (uVar7 != 0) {
        FUN_710392eb40(uVar7);
      }
    }
    uVar5 = local_98;
    local_a0 = (long ***)&PTR_FUN_710523d9e8;
    local_98 = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    plVar8 = *(long **)(*(long *)((long)param_1 + (long)(puVar12 + 0x2f0)) + 0x10);
    if (plVar8 != (long *)0x0) {
      uVar11 = 0;
      local_a0 = (long ***)((ulong)local_a0 & 0xffffffff00000000);
      FUN_71037a2270(plVar8,(ushort *)&local_a0,0,0);
    }
    uVar5 = local_a8;
    local_b0 = &PTR_FUN_710523d988;
    local_a8 = 0;
    if (uVar5 != 0) {
      uVar7 = *(ulong *)(uVar5 + 0x18);
      *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar5 + 0x18) = 0;
      if (uVar7 != 0) {
        FUN_710392eb40(uVar7);
      }
      FUN_710392eb40(uVar5);
    }
    puVar12 = puVar12 + 0x40;
    uVar4 = (ulong)((int)uVar4 + 1);
  } while (puVar12 != (undefined1 *)0x700);
  pppplVar9 = local_e0;
  if ((local_c4 & 1) != 0) {
    pppplVar9 = local_d8;
  }
  FUN_710377aee0(0x3f800000,(long)pppplVar9);
  FUN_710377aee0(0x3f800000,(long)local_d0);
  plVar8 = *(long **)(param_1[0x22] + 0x10);
  if (plVar8 != (long *)0x0) {
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = (long ***)0x0;
    local_98 = 0;
    uVar2 = FUN_71037ad940((long)&local_a0,0x20,0,1,0,0);
    FUN_71037a2270(plVar8,(ushort *)&local_a0,uVar2,0);
  }
  plVar8 = *(long **)(param_1[0x24] + 0x10);
  if (plVar8 != (long *)0x0) {
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = (long ***)0x0;
    local_98 = 0;
    uVar2 = FUN_71037ad940((long)&local_a0,0x20,0,2,0,0);
    FUN_71037a2270(plVar8,(ushort *)&local_a0,uVar2,0);
  }
  plVar8 = *(long **)(param_1[0x26] + 0x10);
  if (plVar8 != (long *)0x0) {
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = (long ***)0x0;
    local_98 = 0;
    uVar2 = FUN_71037ad940((long)&local_a0,0x20,0,3,0,0);
    FUN_71037a2270(plVar8,(ushort *)&local_a0,uVar2,0);
  }
  plVar8 = *(long **)(param_1[0x28] + 0x10);
  if (plVar8 != (long *)0x0) {
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = (long ***)0x0;
    local_98 = 0;
    uVar2 = FUN_71037ad940((long)&local_a0,0x20,0,4,0,0);
    FUN_71037a2270(plVar8,(ushort *)&local_a0,uVar2,0);
  }
  plVar8 = *(long **)(param_1[0x2a] + 0x10);
  if (plVar8 != (long *)0x0) {
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = (long ***)0x0;
    local_98 = 0;
    uVar2 = FUN_71037ad940((long)&local_a0,0x20,0,5,0,0);
    FUN_71037a2270(plVar8,(ushort *)&local_a0,uVar2,0);
  }
  return;
}

