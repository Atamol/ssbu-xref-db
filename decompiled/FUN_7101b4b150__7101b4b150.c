// addr:      7101b4b150
// offset:    0x1b4b150
// name:      FUN_7101b4b150
// mangled:   
// signature: undefined __cdecl FUN_7101b4b150(long * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b4b150(long *param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar7;
  undefined8 uVar8;
  long *********ppppppppplVar9;
  byte ****ppppbVar10;
  long ****pppplVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined **local_b0;
  ulong local_a8;
  undefined **local_a0;
  ulong local_98;
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  ulong local_78;
  long ***local_70;
  undefined8 *local_68;
  
  plVar6 = param_1 + 1;
  *param_1 = param_2;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar8 = extraout_x1;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&DAT_00000008;
      param_3 = &local_70;
      auVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      uVar8 = auVar13._8_8_;
      if (((auVar13._0_8_ & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8),
         uVar8 = extraout_x1_00, puVar3 != (undefined8 *)0x0)) goto LAB_7101b4b1d8;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4b1d8:
  FUN_7103773200(puVar3,uVar8,param_3,param_4,param_5,param_6,param_7,param_8);
  param_1[1] = (long)puVar3;
  FUN_7101414b10(param_1 + 2,plVar6,param_3,param_4,param_5,param_6,param_7,param_8);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = (long)&PTR_FUN_710523d9e8;
  param_1[5] = 0;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4b26c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4b26c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  pppplVar11 = (long ****)(param_1 + 6);
  *pppplVar11 = (long ***)&PTR_FUN_710523d9e8;
  param_1[5] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4b2dc;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4b2dc:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[8] = (long)&PTR_FUN_710523d9e8;
  param_1[7] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4b348;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4b348:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[10] = (long)&PTR_FUN_710523d9e8;
  param_1[9] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4b3b8;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4b3b8:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xc] = (long)&PTR_FUN_710523d9e8;
  param_1[0xb] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4b424;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4b424:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0xe] = (long)&PTR_FUN_710523d9e8;
  param_1[0xd] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4b494;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4b494:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x10] = (long)&PTR_FUN_710523d9e8;
  param_1[0xf] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4b500;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4b500:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x12] = (long)&PTR_FUN_710523d9e8;
  param_1[0x11] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4b570;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4b570:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x13] = (long)puVar3;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = (long)&PTR_FUN_710523d9a8;
  param_1[0x15] = 0;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4b604;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4b604:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x16] = (long)&PTR_FUN_710523d9a8;
  param_1[0x15] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4b670;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4b670:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x18] = (long)&PTR_FUN_710523d9a8;
  param_1[0x17] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4b6d8;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4b6d8:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x1a] = (long)&PTR_FUN_710523d9a8;
  param_1[0x19] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4b740;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4b740:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x1c] = (long)&PTR_FUN_710523d9a8;
  param_1[0x1b] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4b7a8;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4b7a8:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x1e] = (long)&PTR_FUN_710523d9a8;
  param_1[0x1d] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4b810;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4b810:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x1f] = (long)puVar3;
  param_1[0x20] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4b870;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4b870:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x21] = (long)puVar3;
  param_1[0x22] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4b8d0;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4b8d0:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x23] = (long)puVar3;
  param_1[0x24] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4b930;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4b930:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x25] = (long)puVar3;
  param_1[0x26] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4b990;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4b990:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x27] = (long)puVar3;
  param_1[0x28] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4b9f0;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4b9f0:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x29] = (long)puVar3;
  param_1[0x2a] = (long)&PTR_FUN_71050aadf0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2b] = (long)&PTR_FUN_710523d9e8;
  param_1[0x2c] = 0;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4ba6c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4ba6c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x2c] = (long)puVar3;
  param_1[0x2d] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4bad0;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4bad0:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x2e] = (long)puVar3;
  param_1[0x2f] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4bb30;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4bb30:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x30] = (long)puVar3;
  param_1[0x31] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4bb94;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4bb94:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x32] = (long)puVar3;
  param_1[0x33] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4bbf4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4bbf4:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x34] = (long)puVar3;
  param_1[0x35] = (long)&PTR_FUN_71050aadf0;
  param_1[0x2a] = (long)&PTR_FUN_71050aae18;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = (long)&PTR_FUN_710523d9e8;
  param_1[0x37] = 0;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4bc78;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4bc78:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x37] = (long)puVar3;
  param_1[0x38] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4bcd8;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4bcd8:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x39] = (long)puVar3;
  param_1[0x3a] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4bd3c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4bd3c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x3b] = (long)puVar3;
  param_1[0x3c] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4bd9c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4bd9c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x3d] = (long)puVar3;
  param_1[0x3e] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4be00;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4be00:
  *(undefined1 *)(puVar3 + 2) = 1;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x35] = (long)&PTR_FUN_71050aae40;
  param_1[0x3f] = (long)puVar3;
  param_1[0x40] = (long)&PTR_FUN_71050aae68;
  param_1[0x42] = 0;
  param_1[0x41] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4be7c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4be7c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x42] = (long)puVar3;
  param_1[0x40] = (long)&PTR_FUN_71050aae90;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x43] = (long)&PTR_FUN_71050aaeb8;
  param_1[0x44] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4bf1c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4bf1c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x45] = (long)puVar3;
  param_1[0x46] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4bf80;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4bf80:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x47] = (long)puVar3;
  param_1[0x43] = (long)&PTR_FUN_71050aaee0;
  param_1[0x48] = (long)&PTR_FUN_71050aaeb8;
  param_1[0x49] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4bff8;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4bff8:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x4a] = (long)puVar3;
  param_1[0x4b] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4c05c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4c05c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x4c] = (long)puVar3;
  param_1[0x48] = (long)&PTR_FUN_71050aaf08;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4c128;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4c128:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x4f] = (long)puVar3;
  param_1[0x50] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4c18c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4c18c:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x51] = (long)puVar3;
  param_1[0x52] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4c1f0;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4c1f0:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x53] = (long)puVar3;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4c260;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4c260:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x55] = (long)puVar3;
  param_1[0x56] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4c2c8;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4c2c8:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x57] = (long)puVar3;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4c344;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4c344:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x5a] = (long)puVar3;
  param_1[0x5b] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4c3a8;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4c3a8:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x5c] = (long)puVar3;
  param_1[0x5d] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4c40c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4c40c:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[0x5e] = (long)puVar3;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4c47c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4c47c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x60] = (long)puVar3;
  param_1[0x61] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar7 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b4c4e4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b4c4e4:
  *puVar3 = 0;
  puVar3[1] = 0;
  pppplVar7 = (long ****)&DAT_7104544a58;
  *(undefined1 *)(puVar3 + 2) = 1;
  param_1[0x62] = (long)puVar3;
  ppppbVar10 = (byte ****)0x0;
  FUN_71032cbf30(plVar6,**(long **)(*param_1 + 0x78),(ulong *)&DAT_7104544a58,(byte ****)0x0,param_5
                 ,param_6,param_7,param_8);
  FUN_71037780e0(&local_70,*(long *)param_1[1] + 8,(long ****)"type_punchout",pppplVar7,ppppbVar10,
                 param_5,param_6,param_7,param_8);
  puVar3 = local_68;
  if ((long ****)(param_1 + 4) != &local_70) {
    local_68 = (undefined8 *)0x0;
    uVar4 = param_1[5];
    param_1[5] = (long)puVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  puVar3 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_71037780e0(&local_70,*(long *)*plVar6 + 8,(long ****)"type_ko",pppplVar7,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  puVar3 = local_68;
  if (pppplVar11 != &local_70) {
    local_68 = (undefined8 *)0x0;
    uVar4 = param_1[7];
    param_1[7] = (long)puVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  puVar3 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_71037780e0(&local_70,*(long *)*plVar6 + 8,(long ****)"type_suddendeath",pppplVar7,ppppbVar10,
                 param_5,param_6,param_7,param_8);
  puVar3 = local_68;
  if ((long ****)(param_1 + 8) != &local_70) {
    local_68 = (undefined8 *)0x0;
    uVar4 = param_1[9];
    param_1[9] = (long)puVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  puVar3 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_71037780e0(&local_70,*(long *)*plVar6 + 8,(long ****)"player_color",pppplVar7,ppppbVar10,
                 param_5,param_6,param_7,param_8);
  puVar3 = local_68;
  if ((long ****)(param_1 + 10) != &local_70) {
    local_68 = (undefined8 *)0x0;
    uVar4 = param_1[0xb];
    param_1[0xb] = (long)puVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  puVar3 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_71037780e0(&local_70,*(long *)*plVar6 + 8,(long ****)"blink",pppplVar7,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  puVar3 = local_68;
  if ((long ****)(param_1 + 0xc) != &local_70) {
    local_68 = (undefined8 *)0x0;
    uVar4 = param_1[0xd];
    param_1[0xd] = (long)puVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  puVar3 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_71037780e0(&local_70,*(long *)*plVar6 + 8,(long ****)"bg_anim",pppplVar7,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  puVar3 = local_68;
  if ((long ****)(param_1 + 0xe) != &local_70) {
    local_68 = (undefined8 *)0x0;
    uVar4 = param_1[0xf];
    param_1[0xf] = (long)puVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  puVar3 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_71037780e0(&local_70,*(long *)*plVar6 + 8,(long ****)"mii_on",pppplVar7,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  puVar3 = local_68;
  if ((long ****)(param_1 + 0x10) != &local_70) {
    local_68 = (undefined8 *)0x0;
    uVar4 = param_1[0x11];
    param_1[0x11] = (long)puVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  puVar3 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_71037780e0(&local_70,*(long *)*plVar6 + 8,(long ****)"mii_off",pppplVar7,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  puVar3 = local_68;
  if ((long ****)(param_1 + 0x12) != &local_70) {
    local_68 = (undefined8 *)0x0;
    uVar4 = param_1[0x13];
    param_1[0x13] = (long)puVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  puVar3 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_7103776910(&local_70,*(long *)param_1[1] + 8,(long ****)"set_txt_00",pppplVar7,ppppbVar10,
                 param_5,param_6,param_7,param_8);
  puVar3 = local_68;
  if ((long ****)(param_1 + 0x14) != &local_70) {
    local_68 = (undefined8 *)0x0;
    uVar4 = param_1[0x15];
    param_1[0x15] = (long)puVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  puVar3 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_7103776910(&local_70,*(long *)*plVar6 + 8,(long ****)"set_txt_01",pppplVar7,ppppbVar10,param_5
                 ,param_6,param_7,param_8);
  puVar3 = local_68;
  if ((long ****)(param_1 + 0x16) != &local_70) {
    local_68 = (undefined8 *)0x0;
    uVar4 = param_1[0x17];
    param_1[0x17] = (long)puVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  puVar3 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_7103776910(&local_70,*(long *)*plVar6 + 8,(long ****)"set_txt_02",pppplVar7,ppppbVar10,param_5
                 ,param_6,param_7,param_8);
  puVar3 = local_68;
  if ((long ****)(param_1 + 0x18) != &local_70) {
    local_68 = (undefined8 *)0x0;
    uVar4 = param_1[0x19];
    param_1[0x19] = (long)puVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  puVar3 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_7103776910(&local_70,*(long *)*plVar6 + 8,(long ****)"set_txt_rank",pppplVar7,ppppbVar10,
                 param_5,param_6,param_7,param_8);
  puVar3 = local_68;
  if ((long ****)(param_1 + 0x1a) != &local_70) {
    local_68 = (undefined8 *)0x0;
    uVar4 = param_1[0x1b];
    param_1[0x1b] = (long)puVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  puVar3 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_7103776910(&local_70,*(long *)*plVar6 + 8,(long ****)"set_txt_count",pppplVar7,ppppbVar10,
                 param_5,param_6,param_7,param_8);
  puVar3 = local_68;
  if ((long ****)(param_1 + 0x1c) != &local_70) {
    local_68 = (undefined8 *)0x0;
    uVar4 = param_1[0x1d];
    param_1[0x1d] = (long)puVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  puVar3 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_7103776910(&local_70,*(long *)*plVar6 + 8,(long ****)"set_txt_ko",pppplVar7,ppppbVar10,param_5
                 ,param_6,param_7,param_8);
  puVar3 = local_68;
  if ((long ****)(param_1 + 0x1e) != &local_70) {
    local_68 = (undefined8 *)0x0;
    uVar4 = param_1[0x1f];
    param_1[0x1f] = (long)puVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  puVar3 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_7103776910(&local_70,*(long *)*plVar6 + 8,(long ****)"set_rep_ko_k",pppplVar7,ppppbVar10,
                 param_5,param_6,param_7,param_8);
  puVar3 = local_68;
  if ((long ****)(param_1 + 0x20) != &local_70) {
    local_68 = (undefined8 *)0x0;
    uVar4 = param_1[0x21];
    param_1[0x21] = (long)puVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  puVar3 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_7103776910(&local_70,*(long *)*plVar6 + 8,(long ****)"set_rep_ko_o",pppplVar7,ppppbVar10,
                 param_5,param_6,param_7,param_8);
  puVar3 = local_68;
  if ((long ****)(param_1 + 0x22) != &local_70) {
    local_68 = (undefined8 *)0x0;
    uVar4 = param_1[0x23];
    param_1[0x23] = (long)puVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  puVar3 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_7103776910(&local_70,*(long *)*plVar6 + 8,(long ****)"set_rep_00",pppplVar7,ppppbVar10,param_5
                 ,param_6,param_7,param_8);
  puVar3 = local_68;
  if ((long ****)(param_1 + 0x24) != &local_70) {
    local_68 = (undefined8 *)0x0;
    uVar4 = param_1[0x25];
    param_1[0x25] = (long)puVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  puVar3 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_7103776910(&local_70,*(long *)*plVar6 + 8,(long ****)"set_rep_sudden_00",pppplVar7,ppppbVar10,
                 param_5,param_6,param_7,param_8);
  puVar3 = local_68;
  if ((long ****)(param_1 + 0x26) != &local_70) {
    local_68 = (undefined8 *)0x0;
    uVar4 = param_1[0x27];
    param_1[0x27] = (long)puVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  puVar3 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_7103776910(&local_70,*(long *)*plVar6 + 8,(long ****)"set_rep_sudden_01",pppplVar7,ppppbVar10,
                 param_5,param_6,param_7,param_8);
  puVar3 = local_68;
  if ((long ****)(param_1 + 0x28) != &local_70) {
    local_68 = (undefined8 *)0x0;
    uVar4 = param_1[0x29];
    param_1[0x29] = (long)puVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  puVar3 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_7101b4d350(param_1 + 0x35,(undefined8 *)(*(long *)*plVar6 + 8),pppplVar7,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  FUN_7101b4d350(param_1 + 0x2a,(undefined8 *)(*(long *)*plVar6 + 8),pppplVar7,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  FUN_7103776390(&local_80,(undefined8 *)(*(long *)*plVar6 + 8),pppplVar7,ppppbVar10,param_5,param_6
                 ,param_7,param_8);
  pppplVar7 = (long ****)0x0;
  (**(code **)(param_1[0x40] + 0x10))(&local_70,param_1 + 0x40,&local_80);
  puVar3 = local_68;
  if ((long ****)(param_1 + 0x41) != &local_70) {
    *(undefined8 *)param_1[0x42] = *local_68;
    *(undefined8 *)(param_1[0x42] + 8) = local_68[1];
    *(undefined1 *)(param_1[0x42] + 0x10) = *(undefined1 *)(local_68 + 2);
  }
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  bVar2 = local_68 != (undefined8 *)0x0;
  local_68 = (undefined8 *)0x0;
  if (bVar2) {
    local_68 = (undefined8 *)0x0;
    local_70 = (long ***)&PTR_FUN_710523d9e8;
    FUN_710392eb40((ulong)puVar3);
  }
  uVar4 = local_78;
  plVar1 = param_1 + 0x43;
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar4 != 0) {
    uVar5 = *(ulong *)(uVar4 + 0x18);
    *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar4 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar4);
  }
  FUN_7103776390(&local_90,(undefined8 *)(*(long *)*plVar6 + 8),pppplVar7,ppppbVar10,param_5,param_6
                 ,param_7,param_8);
  FUN_7103776390(&local_80,&local_90,pppplVar7,ppppbVar10,param_5,param_6,param_7,param_8);
  pppplVar7 = (long ****)0x0;
  (**(code **)(*plVar1 + 0x10))(&local_70,plVar1,&local_80);
  puVar3 = local_68;
  if ((long ****)(param_1 + 0x44) != &local_70) {
    *(undefined8 *)param_1[0x45] = *local_68;
    *(undefined8 *)(param_1[0x45] + 8) = local_68[1];
    *(undefined1 *)(param_1[0x45] + 0x10) = *(undefined1 *)(local_68 + 2);
  }
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  bVar2 = local_68 != (undefined8 *)0x0;
  local_68 = (undefined8 *)0x0;
  if (bVar2) {
    local_68 = (undefined8 *)0x0;
    local_70 = (long ***)&PTR_FUN_710523d9e8;
    FUN_710392eb40((ulong)puVar3);
  }
  uVar4 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar4 != 0) {
    uVar5 = *(ulong *)(uVar4 + 0x18);
    *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar4 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar4);
  }
  FUN_7103776390(&local_80,&local_90,pppplVar7,ppppbVar10,param_5,param_6,param_7,param_8);
  pppplVar7 = (long ****)0x1;
  (**(code **)(*plVar1 + 0x10))(&local_70,plVar1,&local_80);
  puVar3 = local_68;
  if ((long ****)(param_1 + 0x46) != &local_70) {
    *(undefined8 *)param_1[0x47] = *local_68;
    *(undefined8 *)(param_1[0x47] + 8) = local_68[1];
    *(undefined1 *)(param_1[0x47] + 0x10) = *(undefined1 *)(local_68 + 2);
  }
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  bVar2 = local_68 != (undefined8 *)0x0;
  local_68 = (undefined8 *)0x0;
  if (bVar2) {
    local_68 = (undefined8 *)0x0;
    local_70 = (long ***)&PTR_FUN_710523d9e8;
    FUN_710392eb40((ulong)puVar3);
  }
  uVar4 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar4 != 0) {
    uVar5 = *(ulong *)(uVar4 + 0x18);
    *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar4 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar4);
  }
  plVar6 = param_1 + 0x48;
  FUN_7103776390(&local_80,&local_90,pppplVar7,ppppbVar10,param_5,param_6,param_7,param_8);
  pppplVar7 = (long ****)0x0;
  (**(code **)(param_1[0x48] + 0x10))(&local_70,plVar6,&local_80);
  puVar3 = local_68;
  if ((long ****)(param_1 + 0x49) != &local_70) {
    *(undefined8 *)param_1[0x4a] = *local_68;
    *(undefined8 *)(param_1[0x4a] + 8) = local_68[1];
    *(undefined1 *)(param_1[0x4a] + 0x10) = *(undefined1 *)(local_68 + 2);
  }
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  bVar2 = local_68 != (undefined8 *)0x0;
  local_68 = (undefined8 *)0x0;
  if (bVar2) {
    local_68 = (undefined8 *)0x0;
    local_70 = (long ***)&PTR_FUN_710523d9e8;
    FUN_710392eb40((ulong)puVar3);
  }
  uVar4 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar4 != 0) {
    uVar5 = *(ulong *)(uVar4 + 0x18);
    *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar4 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar4);
  }
  FUN_7103776390(&local_80,&local_90,pppplVar7,ppppbVar10,param_5,param_6,param_7,param_8);
  uVar8 = 1;
  (**(code **)(*plVar6 + 0x10))(&local_70,plVar6,&local_80);
  puVar3 = local_68;
  if ((long ****)(param_1 + 0x4b) != &local_70) {
    *(undefined8 *)param_1[0x4c] = *local_68;
    *(undefined8 *)(param_1[0x4c] + 8) = local_68[1];
    *(undefined1 *)(param_1[0x4c] + 0x10) = *(undefined1 *)(local_68 + 2);
  }
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  bVar2 = local_68 != (undefined8 *)0x0;
  local_68 = (undefined8 *)0;
  if (bVar2) {
    local_68 = (undefined8 *)0x0;
    local_70 = (long ***)&PTR_FUN_710523d9e8;
    FUN_710392eb40((ulong)puVar3);
  }
  uVar4 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar4 != 0) {
    uVar5 = *(ulong *)(uVar4 + 0x18);
    *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar4 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar4);
  }
  uVar4 = local_88;
  local_90 = &PTR_FUN_710523d988;
  local_88 = 0;
  if (uVar4 != 0) {
    uVar5 = *(ulong *)(uVar4 + 0x18);
    *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar4 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar4);
  }
  lVar12 = *(long *)(*param_1 + 0x78);
  FUN_7103776640(&local_a0,*(long *)param_1[1] + 8,(byte ****)"set_part_curtain_l",uVar8,ppppbVar10,
                 param_5,param_6,param_7,param_8);
  param_1[0x4d] = lVar12;
  FUN_7103776910(&local_70,(long)&local_a0,(long ****)"set_rep_00",uVar8,ppppbVar10,param_5,param_6,
                 param_7,param_8);
  puVar3 = local_68;
  if ((long ****)(param_1 + 0x4e) != &local_70) {
    local_68 = (undefined8 *)0x0;
    uVar4 = param_1[0x4f];
    param_1[0x4f] = (long)puVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  puVar3 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_7103776910(&local_70,(long)&local_a0,(long ****)"set_txt_00",uVar8,ppppbVar10,param_5,param_6,
                 param_7,param_8);
  puVar3 = local_68;
  if ((long ****)(param_1 + 0x50) != &local_70) {
    local_68 = (undefined8 *)0x0;
    uVar4 = param_1[0x51];
    param_1[0x51] = (long)puVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  puVar3 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_7103776910(&local_70,(long)&local_a0,(long ****)"set_txt_01",uVar8,ppppbVar10,param_5,param_6,
                 param_7,param_8);
  puVar3 = local_68;
  if ((long ****)(param_1 + 0x52) != &local_70) {
    local_68 = (undefined8 *)0x0;
    uVar4 = param_1[0x53];
    param_1[0x53] = (long)puVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  puVar3 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_71037780e0(&local_70,(long)&local_a0,(long ****)"chr_bg_color",uVar8,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  puVar3 = local_68;
  if ((long ****)(param_1 + 0x54) != &local_70) {
    local_68 = (undefined8 *)0x0;
    uVar4 = param_1[0x55];
    param_1[0x55] = (long)puVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  puVar3 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_71037780e0(&local_70,(long)&local_a0,(long ****)&DAT_710428ff7d,uVar8,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  puVar3 = local_68;
  if ((long ****)(param_1 + 0x56) != &local_70) {
    local_68 = (undefined8 *)0x0;
    uVar4 = param_1[0x57];
    param_1[0x57] = (long)puVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  puVar3 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  uVar4 = local_98;
  local_a0 = &PTR_FUN_710523d988;
  local_98 = 0;
  if (uVar4 != 0) {
    uVar5 = *(ulong *)(uVar4 + 0x18);
    *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar4 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar4);
  }
  lVar12 = *(long *)(*param_1 + 0x78);
  FUN_7103776640(&local_b0,*(long *)param_1[1] + 8,(byte ****)"set_part_curtain_r",uVar8,ppppbVar10,
                 param_5,param_6,param_7,param_8);
  param_1[0x58] = lVar12;
  FUN_7103776910(&local_70,(long)&local_b0,(long ****)"set_rep_00",uVar8,ppppbVar10,param_5,param_6,
                 param_7,param_8);
  puVar3 = local_68;
  if ((long ****)(param_1 + 0x59) != &local_70) {
    local_68 = (undefined8 *)0x0;
    uVar4 = param_1[0x5a];
    param_1[0x5a] = (long)puVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  puVar3 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_7103776910(&local_70,(long)&local_b0,(long ****)"set_txt_00",uVar8,ppppbVar10,param_5,param_6,
                 param_7,param_8);
  puVar3 = local_68;
  if ((long ****)(param_1 + 0x5b) != &local_70) {
    local_68 = (undefined8 *)0x0;
    uVar4 = param_1[0x5c];
    param_1[0x5c] = (long)puVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  puVar3 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_7103776910(&local_70,(long)&local_b0,(long ****)"set_txt_01",uVar8,ppppbVar10,param_5,param_6,
                 param_7,param_8);
  puVar3 = local_68;
  if ((long ****)(param_1 + 0x5d) != &local_70) {
    local_68 = (undefined8 *)0x0;
    uVar4 = param_1[0x5e];
    param_1[0x5e] = (long)puVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  puVar3 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_71037780e0(&local_70,(long)&local_b0,(long ****)"chr_bg_color",uVar8,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  puVar3 = local_68;
  if ((long ****)(param_1 + 0x5f) != &local_70) {
    local_68 = (undefined8 *)0x0;
    uVar4 = param_1[0x60];
    param_1[0x60] = (long)puVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  puVar3 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_71037780e0(&local_70,(long)&local_b0,(long ****)&DAT_710428ff7d,uVar8,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  puVar3 = local_68;
  if ((long ****)(param_1 + 0x61) != &local_70) {
    local_68 = (undefined8 *)0x0;
    uVar4 = param_1[0x62];
    param_1[0x62] = (long)puVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  puVar3 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  uVar4 = local_a8;
  local_b0 = &PTR_FUN_710523d988;
  local_a8 = 0;
  if (uVar4 != 0) {
    uVar5 = *(ulong *)(uVar4 + 0x18);
    *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar4 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar4);
  }
  ppppppppplVar9 = (long *********)0x0;
  plVar6 = FUN_7103240d30(*(long **)(*param_1 + 0x78),0x710442201c,(long ****)0x0,ppppbVar10,param_5
                          ,param_6,param_7,param_8);
  FUN_7103778b80(param_1[0x21],(long)plVar6,ppppppppplVar9,ppppbVar10,param_5,param_6,param_7,
                 param_8);
  ppppppppplVar9 = (long *********)0x0;
  plVar6 = FUN_7103240d30(*(long **)(*param_1 + 0x78),0x710439d13c,(long ****)0x0,ppppbVar10,param_5
                          ,param_6,param_7,param_8);
  FUN_7103778b80(param_1[0x23],(long)plVar6,ppppppppplVar9,ppppbVar10,param_5,param_6,param_7,
                 param_8);
  ppppppppplVar9 = (long *********)0x0;
  plVar6 = FUN_7103240d30(*(long **)(*param_1 + 0x78),0x710439d156,(long ****)0x0,ppppbVar10,param_5
                          ,param_6,param_7,param_8);
  FUN_7103778b80(param_1[0x27],(long)plVar6,ppppppppplVar9,ppppbVar10,param_5,param_6,param_7,
                 param_8);
  ppppppppplVar9 = (long *********)0x0;
  plVar6 = FUN_7103240d30(*(long **)(*param_1 + 0x78),0x710439d156,(long ****)0x0,ppppbVar10,param_5
                          ,param_6,param_7,param_8);
  FUN_7103778b80(param_1[0x29],(long)plVar6,ppppppppplVar9,ppppbVar10,param_5,param_6,param_7,
                 param_8);
  FUN_710377b140((long)pppplVar11);
  return;
}

