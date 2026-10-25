// addr:      7101b3beb0
// offset:    0x1b3beb0
// name:      FUN_7101b3beb0
// mangled:   
// signature: undefined __cdecl FUN_7101b3beb0(undefined8 * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b3beb0(undefined8 *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  long ***local_78;
  ulong local_70;
  undefined4 local_64;
  
  *param_1 = &PTR_FUN_71050aac30;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x1ffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xf] = param_2;
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  plVar1 = (long *)FUN_710392e290(0x10,0x170,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar1 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000170;
      param_3 = &local_78;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (plVar1 = (long *)FUN_710392e290(0x10,0x170,param_3,param_4,param_5,param_6,param_7,param_8
                                         ), plVar1 != (long *)0x0)) goto LAB_7101b3bf5c;
    }
    plVar1 = (long *)0x0;
  }
LAB_7101b3bf5c:
  plVar8 = plVar1 + 1;
  *plVar1 = (long)param_1;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar7 = extraout_x1;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000008;
      param_3 = &local_78;
      auVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      uVar7 = auVar9._8_8_;
      if (((auVar9._0_8_ & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8),
         uVar7 = extraout_x1_00, puVar3 != (undefined8 *)0x0)) goto LAB_7101b3bfc0;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b3bfc0:
  FUN_7103773200(puVar3,uVar7,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar1[1] = (long)puVar3;
  FUN_7101414b10(plVar1 + 2,plVar8,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar1[0x14] = 0;
  plVar1[0x15] = 0;
  plVar1[5] = 0;
  plVar1[0x12] = 0;
  plVar1[0x13] = 0;
  plVar1[0x10] = 0;
  plVar1[0x11] = 0;
  plVar1[0xe] = 0;
  plVar1[0xf] = 0;
  plVar1[0xc] = 0;
  plVar1[0xd] = 0;
  plVar1[10] = 0;
  plVar1[0xb] = 0;
  plVar1[8] = 0;
  plVar1[9] = 0;
  plVar1[6] = 0;
  plVar1[7] = 0;
  plVar1[4] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      param_3 = &local_78;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b3c064;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b3c064:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  plVar1[6] = (long)&PTR_FUN_710523d9e8;
  plVar1[5] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      param_3 = &local_78;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b3c0d4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b3c0d4:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  plVar1[8] = (long)&PTR_FUN_710523d9e8;
  plVar1[7] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      param_3 = &local_78;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b3c140;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b3c140:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  plVar1[10] = (long)&PTR_FUN_710523d9e8;
  plVar1[9] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      param_3 = &local_78;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b3c1b0;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b3c1b0:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  plVar1[0xc] = (long)&PTR_FUN_710523d9e8;
  plVar1[0xb] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      param_3 = &local_78;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b3c21c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b3c21c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  plVar1[0xe] = (long)&PTR_FUN_710523d9e8;
  plVar1[0xd] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      param_3 = &local_78;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b3c28c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b3c28c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  plVar1[0x10] = (long)&PTR_FUN_710523d9e8;
  plVar1[0xf] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      param_3 = &local_78;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b3c2f8;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b3c2f8:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  plVar1[0x12] = (long)&PTR_FUN_710523d9e8;
  plVar1[0x11] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      param_3 = &local_78;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b3c368;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b3c368:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  plVar1[0x14] = (long)&PTR_FUN_710523d9e8;
  plVar1[0x13] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      param_3 = &local_78;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b3c3d4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b3c3d4:
  *(undefined1 *)(puVar3 + 2) = 1;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x15] = (long)puVar3;
  plVar1[0x2c] = 0;
  plVar1[0x2d] = 0;
  plVar1[0x17] = 0;
  plVar1[0x2a] = 0;
  plVar1[0x2b] = 0;
  plVar1[0x28] = 0;
  plVar1[0x29] = 0;
  plVar1[0x26] = 0;
  plVar1[0x27] = 0;
  plVar1[0x24] = 0;
  plVar1[0x25] = 0;
  plVar1[0x22] = 0;
  plVar1[0x23] = 0;
  plVar1[0x20] = 0;
  plVar1[0x21] = 0;
  plVar1[0x1e] = 0;
  plVar1[0x1f] = 0;
  plVar1[0x1c] = 0;
  plVar1[0x1d] = 0;
  plVar1[0x1a] = 0;
  plVar1[0x1b] = 0;
  plVar1[0x18] = 0;
  plVar1[0x19] = 0;
  plVar1[0x16] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000020;
      param_3 = &local_78;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b3c47c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b3c47c:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x18] = (long)&PTR_FUN_710523d9a8;
  plVar1[0x17] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000020;
      param_3 = &local_78;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b3c4e4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b3c4e4:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x1a] = (long)&PTR_FUN_710523d9a8;
  plVar1[0x19] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000020;
      param_3 = &local_78;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b3c54c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b3c54c:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x1c] = (long)&PTR_FUN_710523d9a8;
  plVar1[0x1b] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000020;
      param_3 = &local_78;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b3c5b4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b3c5b4:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x1e] = (long)&PTR_FUN_710523d9a8;
  plVar1[0x1d] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000020;
      param_3 = &local_78;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b3c61c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b3c61c:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x1f] = (long)puVar3;
  plVar1[0x20] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000020;
      param_3 = &local_78;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b3c67c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b3c67c:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x21] = (long)puVar3;
  plVar1[0x22] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000020;
      param_3 = &local_78;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b3c6dc;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b3c6dc:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x23] = (long)puVar3;
  plVar1[0x24] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000020;
      param_3 = &local_78;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b3c73c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b3c73c:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x25] = (long)puVar3;
  plVar1[0x26] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000020;
      param_3 = &local_78;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b3c79c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b3c79c:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x27] = (long)puVar3;
  plVar1[0x28] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000020;
      param_3 = &local_78;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b3c7fc;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b3c7fc:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x29] = (long)puVar3;
  plVar1[0x2a] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000020;
      param_3 = &local_78;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b3c85c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b3c85c:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x2b] = (long)puVar3;
  plVar1[0x2c] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000020;
      pppplVar5 = &local_78;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b3c8bc;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b3c8bc:
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar6 = &DAT_71045448e0;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar7 = 0;
  plVar1[0x2d] = (long)puVar3;
  FUN_71032cbf30(plVar8,**(long **)(*plVar1 + 0x78),(ulong *)&DAT_71045448e0,(byte ****)0x0,param_5,
                 param_6,param_7,param_8);
  *(undefined4 *)(**(long **)plVar1[1] + 0x650) = 0;
  FUN_71037780e0(&local_78,*(long *)plVar1[1] + 8,(long ****)&DAT_7104421055,puVar6,uVar7,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_70;
  if (&local_78 != (long ****)(plVar1 + 4)) {
    local_70 = 0;
    uVar4 = plVar1[5];
    plVar1[5] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_78,*(long *)*plVar8 + 8,(long ****)"dig_1p",puVar6,uVar7,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_70;
  if (&local_78 != (long ****)(plVar1 + 6)) {
    local_70 = 0;
    uVar4 = plVar1[7];
    plVar1[7] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_78,*(long *)*plVar8 + 8,(long ****)"dig_2p",puVar6,uVar7,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_70;
  if (&local_78 != (long ****)(plVar1 + 8)) {
    local_70 = 0;
    uVar4 = plVar1[9];
    plVar1[9] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_78,*(long *)*plVar8 + 8,(long ****)"num_1p_1",puVar6,uVar7,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_70;
  if (&local_78 != (long ****)(plVar1 + 10)) {
    local_70 = 0;
    uVar4 = plVar1[0xb];
    plVar1[0xb] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_78,*(long *)*plVar8 + 8,(long ****)"num_1p_2",puVar6,uVar7,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_70;
  if (&local_78 != (long ****)(plVar1 + 0xc)) {
    local_70 = 0;
    uVar4 = plVar1[0xd];
    plVar1[0xd] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_78,*(long *)*plVar8 + 8,(long ****)"num_2p_1",puVar6,uVar7,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_70;
  if (&local_78 != (long ****)(plVar1 + 0xe)) {
    local_70 = 0;
    uVar4 = plVar1[0xf];
    plVar1[0xf] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_78,*(long *)*plVar8 + 8,(long ****)"num_2p_2",puVar6,uVar7,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_70;
  if (&local_78 != (long ****)(plVar1 + 0x10)) {
    local_70 = 0;
    uVar4 = plVar1[0x11];
    plVar1[0x11] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_78,*(long *)*plVar8 + 8,(long ****)"stock_1p",puVar6,uVar7,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_70;
  if (&local_78 != (long ****)(plVar1 + 0x12)) {
    local_70 = 0;
    uVar4 = plVar1[0x13];
    plVar1[0x13] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_78,*(long *)*plVar8 + 8,(long ****)"stock_2p",puVar6,uVar7,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_70;
  if (&local_78 != (long ****)(plVar1 + 0x14)) {
    local_70 = 0;
    uVar4 = plVar1[0x15];
    plVar1[0x15] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_7103776910(&local_78,*(long *)*plVar8 + 8,(long ****)"set_rep_stock_1p_00",puVar6,uVar7,
                 param_5,param_6,param_7,param_8);
  uVar2 = local_70;
  if (&local_78 != (long ****)(plVar1 + 0x16)) {
    local_70 = 0;
    uVar4 = plVar1[0x17];
    plVar1[0x17] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9a8;
  local_70 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_7103776910(&local_78,*(long *)*plVar8 + 8,(long ****)"set_rep_stock_1p_01",puVar6,uVar7,
                 param_5,param_6,param_7,param_8);
  uVar2 = local_70;
  if (&local_78 != (long ****)(plVar1 + 0x18)) {
    local_70 = 0;
    uVar4 = plVar1[0x19];
    plVar1[0x19] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9a8;
  local_70 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_7103776910(&local_78,*(long *)*plVar8 + 8,(long ****)"set_rep_stock_1p_02",puVar6,uVar7,
                 param_5,param_6,param_7,param_8);
  uVar2 = local_70;
  if (&local_78 != (long ****)(plVar1 + 0x1a)) {
    local_70 = 0;
    uVar4 = plVar1[0x1b];
    plVar1[0x1b] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9a8;
  local_70 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_7103776910(&local_78,*(long *)*plVar8 + 8,(long ****)"set_rep_stock_1p_03",puVar6,uVar7,
                 param_5,param_6,param_7,param_8);
  uVar2 = local_70;
  if (&local_78 != (long ****)(plVar1 + 0x1c)) {
    local_70 = 0;
    uVar4 = plVar1[0x1d];
    plVar1[0x1d] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9a8;
  local_70 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_7103776910(&local_78,*(long *)*plVar8 + 8,(long ****)"set_rep_stock_1p_04",puVar6,uVar7,
                 param_5,param_6,param_7,param_8);
  uVar2 = local_70;
  if (&local_78 != (long ****)(plVar1 + 0x1e)) {
    local_70 = 0;
    uVar4 = plVar1[0x1f];
    plVar1[0x1f] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9a8;
  local_70 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_7103776910(&local_78,*(long *)*plVar8 + 8,(long ****)"set_txt_stock_1p_00",puVar6,uVar7,
                 param_5,param_6,param_7,param_8);
  uVar2 = local_70;
  if (&local_78 != (long ****)(plVar1 + 0x20)) {
    local_70 = 0;
    uVar4 = plVar1[0x21];
    plVar1[0x21] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9a8;
  local_70 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_7103776910(&local_78,*(long *)*plVar8 + 8,(long ****)"set_rep_stock_2p_00",puVar6,uVar7,
                 param_5,param_6,param_7,param_8);
  uVar2 = local_70;
  if (&local_78 != (long ****)(plVar1 + 0x22)) {
    local_70 = 0;
    uVar4 = plVar1[0x23];
    plVar1[0x23] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9a8;
  local_70 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_7103776910(&local_78,*(long *)*plVar8 + 8,(long ****)"set_rep_stock_2p_01",puVar6,uVar7,
                 param_5,param_6,param_7,param_8);
  uVar2 = local_70;
  if (&local_78 != (long ****)(plVar1 + 0x24)) {
    local_70 = 0;
    uVar4 = plVar1[0x25];
    plVar1[0x25] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9a8;
  local_70 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_7103776910(&local_78,*(long *)*plVar8 + 8,(long ****)"set_rep_stock_2p_02",puVar6,uVar7,
                 param_5,param_6,param_7,param_8);
  uVar2 = local_70;
  if (&local_78 != (long ****)(plVar1 + 0x26)) {
    local_70 = 0;
    uVar4 = plVar1[0x27];
    plVar1[0x27] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9a8;
  local_70 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_7103776910(&local_78,*(long *)*plVar8 + 8,(long ****)"set_rep_stock_2p_03",puVar6,uVar7,
                 param_5,param_6,param_7,param_8);
  uVar2 = local_70;
  if (&local_78 != (long ****)(plVar1 + 0x28)) {
    local_70 = 0;
    uVar4 = plVar1[0x29];
    plVar1[0x29] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9a8;
  local_70 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_7103776910(&local_78,*(long *)*plVar8 + 8,(long ****)"set_rep_stock_2p_04",puVar6,uVar7,
                 param_5,param_6,param_7,param_8);
  uVar2 = local_70;
  if (&local_78 != (long ****)(plVar1 + 0x2a)) {
    local_70 = 0;
    uVar4 = plVar1[0x2b];
    plVar1[0x2b] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9a8;
  local_70 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_7103776910(&local_78,*(long *)*plVar8 + 8,(long ****)"set_txt_stock_2p_00",puVar6,uVar7,
                 param_5,param_6,param_7,param_8);
  uVar2 = local_70;
  if (&local_78 != (long ****)(plVar1 + 0x2c)) {
    local_70 = 0;
    uVar4 = plVar1[0x2d];
    plVar1[0x2d] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9a8;
  local_70 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  param_1[0x10] = plVar1;
  return;
}

