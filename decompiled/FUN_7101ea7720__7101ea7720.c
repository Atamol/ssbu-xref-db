// addr:      7101ea7720
// offset:    0x1ea7720
// name:      FUN_7101ea7720
// mangled:   
// signature: undefined __cdecl FUN_7101ea7720(undefined8 * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101ea7720(undefined8 *param_1,long *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ****pppplVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 uVar5;
  long ****pppplVar6;
  byte ****ppppbVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long ****pppplVar11;
  long *plVar12;
  long *plVar13;
  long ****pppplVar14;
  ulong uVar15;
  long *plVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  long ***local_80;
  ulong local_78;
  long ***local_70;
  undefined4 local_64;
  
  *param_1 = &PTR_FUN_71050b2630;
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
  puVar2 = (undefined8 *)FUN_710392e290(0x10,0x2f0,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar2 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)0x2f0;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar2 = (undefined8 *)
                   FUN_710392e290(0x10,0x2f0,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar2 != (undefined8 *)0x0)) goto LAB_7101ea77d0;
    }
    puVar2 = (undefined8 *)0x0;
  }
LAB_7101ea77d0:
  puVar4 = (undefined8 *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar5 = extraout_x1;
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&DAT_00000008;
      param_3 = &local_80;
      auVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      uVar5 = auVar20._8_8_;
      if (((auVar20._0_8_ & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8),
         uVar5 = extraout_x1_00, puVar4 != (undefined8 *)0x0)) goto LAB_7101ea782c;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea782c:
  FUN_7103773200(puVar4,uVar5,param_3,param_4,param_5,param_6,param_7,param_8);
  pppplVar14 = (long ****)(puVar2 + 1);
  *puVar2 = puVar4;
  FUN_7103776290(pppplVar14,extraout_x1_01,param_3,param_4,param_5,param_6,param_7,param_8);
  puVar2[3] = &PTR_FUN_710523d9a8;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea78ac;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea78ac:
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar2[5] = &PTR_FUN_710523d9a8;
  puVar2[4] = puVar4;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea7918;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea7918:
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar2[7] = &PTR_FUN_710523d9a8;
  puVar2[6] = puVar4;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea7984;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea7984:
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar2[9] = &PTR_FUN_710523d9a8;
  puVar2[8] = puVar4;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea79f0;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea79f0:
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar2[0xb] = &PTR_FUN_710523d9a8;
  puVar2[10] = puVar4;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea7a5c;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea7a5c:
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar2[0xd] = &PTR_FUN_710523d9a8;
  puVar2[0xc] = puVar4;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea7ac8;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea7ac8:
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar2[0xf] = &PTR_FUN_710523d9a8;
  puVar2[0xe] = puVar4;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea7b34;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea7b34:
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  pppplVar11 = (long ****)(puVar2 + 0x14);
  *pppplVar11 = (long ***)0x0;
  puVar2[0x10] = puVar4;
  puVar2[0x2a] = 0;
  puVar2[0x2b] = 0;
  puVar2[0x28] = 0;
  puVar2[0x29] = 0;
  puVar2[0x26] = 0;
  puVar2[0x27] = 0;
  puVar2[0x24] = 0;
  puVar2[0x25] = 0;
  puVar2[0x22] = 0;
  puVar2[0x23] = 0;
  puVar2[0x20] = 0;
  puVar2[0x21] = 0;
  puVar2[0x1e] = 0;
  puVar2[0x1f] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1d] = 0;
  puVar2[0x1a] = 0;
  puVar2[0x1b] = 0;
  puVar2[0x18] = 0;
  puVar2[0x19] = 0;
  puVar2[0x16] = 0;
  puVar2[0x17] = 0;
  *pppplVar11 = (long ***)&PTR_FUN_710523d9a8;
  puVar2[0x15] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea7bd0;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea7bd0:
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar2[0x16] = &PTR_FUN_710523d9a8;
  puVar2[0x15] = puVar4;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea7c3c;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea7c3c:
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar2[0x18] = &PTR_FUN_710523d9a8;
  puVar2[0x17] = puVar4;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea7ca8;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea7ca8:
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar2[0x1a] = &PTR_FUN_710523d9a8;
  puVar2[0x19] = puVar4;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea7d14;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea7d14:
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar2[0x1c] = &PTR_FUN_710523d9a8;
  puVar2[0x1b] = puVar4;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea7d80;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea7d80:
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar2[0x1e] = &PTR_FUN_710523d9a8;
  puVar2[0x1d] = puVar4;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea7de8;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea7de8:
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar2[0x1f] = puVar4;
  puVar2[0x20] = &PTR_FUN_710523d9a8;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea7e48;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea7e48:
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar2[0x21] = puVar4;
  puVar2[0x22] = &PTR_FUN_710523d9a8;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea7ea8;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea7ea8:
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar2[0x23] = puVar4;
  puVar2[0x24] = &PTR_FUN_710523d9a8;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea7f08;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea7f08:
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar2[0x25] = puVar4;
  puVar2[0x26] = &PTR_FUN_710523d9a8;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea7f68;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea7f68:
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar2[0x27] = puVar4;
  puVar2[0x28] = &PTR_FUN_710523d9a8;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea7fc8;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea7fc8:
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar2[0x29] = puVar4;
  puVar2[0x2a] = &PTR_FUN_710523d9a8;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea8028;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea8028:
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar2[0x2b] = puVar4;
  puVar2[0x2c] = &PTR_FUN_710523d9a8;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea8088;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea8088:
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar2[0x2d] = puVar4;
  puVar2[0x2e] = &PTR_FUN_710523d9a8;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea80e8;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea80e8:
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar2[0x2f] = puVar4;
  puVar2[0x30] = &PTR_FUN_710523d9a8;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea8148;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea8148:
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar2[0x31] = puVar4;
  puVar2[0x32] = &PTR_FUN_710523d9a8;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea81a8;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea81a8:
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar2[0x33] = puVar4;
  puVar2[0x34] = &PTR_FUN_710523d9a8;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea8208;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea8208:
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar2[0x35] = puVar4;
  puVar2[0x36] = &PTR_FUN_710523d9a8;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea8268;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea8268:
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar2[0x37] = puVar4;
  puVar2[0x38] = &PTR_FUN_710523d9a8;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea82c8;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea82c8:
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar2[0x39] = puVar4;
  puVar2[0x3a] = &PTR_FUN_710523d9a8;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea8328;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea8328:
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar2[0x3b] = puVar4;
  puVar2[0x3c] = 0;
  puVar2[0x3d] = 0;
  puVar2[0x3e] = 0;
  puVar2[0x3f] = 0;
  puVar2[0x40] = &PTR_FUN_710523d9a8;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea8390;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea8390:
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar2[0x41] = puVar4;
  puVar2[0x42] = &PTR_FUN_710523d9a8;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar5 = extraout_x1_02;
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      auVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      uVar5 = auVar20._8_8_;
      if (((auVar20._0_8_ & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         uVar5 = extraout_x1_03, puVar4 != (undefined8 *)0x0)) goto LAB_7101ea83f4;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea83f4:
  puVar4[2] = 0;
  puVar4[3] = 0;
  plVar16 = puVar2 + 0x47;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar2[0x43] = puVar4;
  pppplVar1 = (long ****)(puVar2 + 0x49);
  puVar2[0x44] = 0;
  *(undefined4 *)(puVar2 + 0x45) = 0;
  puVar2[0x48] = 0;
  puVar2[0x47] = 0;
  puVar2[0x46] = plVar16;
  FUN_7103776290(pppplVar1,uVar5,param_3,param_4,param_5,param_6,param_7,param_8);
  puVar2[0x4b] = &PTR_FUN_710523d9a8;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea847c;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea847c:
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar2[0x4c] = puVar4;
  puVar2[0x4d] = &PTR_FUN_710523d9e8;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea84e8;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea84e8:
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined1 *)(puVar4 + 2) = 1;
  puVar2[0x4e] = puVar4;
  puVar2[0x4f] = 0;
  puVar2[0x50] = &PTR_FUN_710523d9e8;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea8554;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea8554:
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined1 *)(puVar4 + 2) = 1;
  puVar2[0x51] = puVar4;
  puVar2[0x52] = &PTR_FUN_710523d9e8;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea85b8;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea85b8:
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined1 *)(puVar4 + 2) = 1;
  puVar2[0x53] = puVar4;
  puVar2[0x54] = &PTR_FUN_710523d9e8;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea8620;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea8620:
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined1 *)(puVar4 + 2) = 1;
  puVar2[0x55] = puVar4;
  puVar2[0x56] = &PTR_FUN_710523d9e8;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea8684;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea8684:
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined1 *)(puVar4 + 2) = 1;
  puVar2[0x57] = puVar4;
  puVar2[0x58] = &PTR_FUN_710523d9e8;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      param_3 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea86ec;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea86ec:
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined1 *)(puVar4 + 2) = 1;
  puVar2[0x59] = puVar4;
  puVar2[0x5a] = &PTR_FUN_710523d9e8;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_80 = (long ***)&SUB_00000018;
      pppplVar6 = &local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar6,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101ea8750;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101ea8750:
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined1 *)(puVar4 + 2) = 1;
  pppplVar6 = (long ****)&DAT_7104545c88;
  puVar2[0x5b] = puVar4;
  ppppbVar7 = (byte ****)0x0;
  *(undefined4 *)(puVar2 + 0x5c) = 0;
  *(undefined1 *)((long)puVar2 + 0x2e4) = 0;
  param_1[0x10] = puVar2;
  FUN_71032cbf30(puVar2,*param_2,(ulong *)&DAT_7104545c88,(byte ****)0x0,param_5,param_6,param_7,
                 param_8);
  lVar10 = *(long *)*puVar2 + 8;
  FUN_7103776640(&local_80,lVar10,(byte ****)"set_boundingbox",pppplVar6,ppppbVar7,param_5,param_6,
                 param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != pppplVar14) {
    local_78 = 0;
    uVar15 = puVar2[2];
    puVar2[2] = uVar3;
    if (uVar15 != 0) {
      uVar3 = *(ulong *)(uVar15 + 0x18);
      *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar15 + 0x18) = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar3 != 0) {
    uVar15 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
    FUN_710392eb40(uVar3);
  }
  lVar8 = puVar2[2];
  if ((undefined8 *)(lVar8 + 0x10) != puVar2 + 3) {
    *(undefined8 *)puVar2[4] = **(undefined8 **)(lVar8 + 0x18);
    *(undefined8 *)(puVar2[4] + 8) = *(undefined8 *)(*(long *)(lVar8 + 0x18) + 8);
    *(undefined8 *)(puVar2[4] + 0x10) = *(undefined8 *)(*(long *)(lVar8 + 0x18) + 0x10);
    *(undefined8 *)(puVar2[4] + 0x18) = *(undefined8 *)(*(long *)(lVar8 + 0x18) + 0x18);
  }
  FUN_7103776910(&local_80,(long)pppplVar14,(long ****)"set_boundexingbox",pppplVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 5)) {
    local_78 = 0;
    uVar15 = puVar2[6];
    puVar2[6] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776910(&local_80,(long)pppplVar14,(long ****)"set_boundingbox_icn_t",pppplVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 7)) {
    local_78 = 0;
    uVar15 = puVar2[8];
    puVar2[8] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776910(&local_80,(long)pppplVar14,(long ****)"set_boundingbox_icn_b",pppplVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 9)) {
    local_78 = 0;
    uVar15 = puVar2[10];
    puVar2[10] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776910(&local_80,(long)pppplVar14,(long ****)"set_boundingbox_icn_l",pppplVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0xb)) {
    local_78 = 0;
    uVar15 = puVar2[0xc];
    puVar2[0xc] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776910(&local_80,(long)pppplVar14,(long ****)"set_boundingbox_icn_r",pppplVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0xd)) {
    local_78 = 0;
    uVar15 = puVar2[0xe];
    puVar2[0xe] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776910(&local_80,(long)pppplVar14,(long ****)"set_select_point",pppplVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0xf)) {
    local_78 = 0;
    uVar15 = puVar2[0x10];
    puVar2[0x10] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  if ((*(long *)(puVar2[2] + 8) != 0) &&
     (lVar8 = *(long *)(*(long *)(puVar2[2] + 8) + 0x18), lVar8 != 0)) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  lVar8 = *(long *)puVar2[8];
  if (lVar8 == 0) {
    fVar17 = 0.0;
    fVar18 = 0.0;
  }
  else {
    fVar18 = ABS(*(float *)(lVar8 + 0x54));
    fVar17 = ABS(*(float *)(lVar8 + 0x50));
  }
  puVar2[0x13] = 0;
  puVar2[0x12] = CONCAT44(fVar18 * 0.5,fVar17 * 0.5);
  FUN_7103778300(0x3f800000,puVar2[2],0x710435beb8);
  lVar8 = *(long *)puVar2[0x10];
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  FUN_7103776910(&local_80,lVar10,(long ****)"set_null_startpoint",pppplVar6,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != pppplVar11) {
    local_78 = 0;
    uVar15 = puVar2[0x15];
    puVar2[0x15] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776910(&local_80,lVar10,(long ****)"set_startpoint_start",pppplVar6,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0x16)) {
    local_78 = 0;
    uVar15 = puVar2[0x17];
    puVar2[0x17] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776910(&local_80,lVar10,(long ****)"set_startpoint_end",pppplVar6,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0x18)) {
    local_78 = 0;
    uVar15 = puVar2[0x19];
    puVar2[0x19] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776910(&local_80,lVar10,(long ****)"set_startpoint_bar",pppplVar6,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0x1a)) {
    local_78 = 0;
    uVar15 = puVar2[0x1b];
    puVar2[0x1b] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  lVar8 = *(long *)puVar2[0x15];
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  FUN_7103776910(&local_80,lVar10,(long ****)"set_null_endtpoint",pppplVar6,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0x1c)) {
    local_78 = 0;
    uVar15 = puVar2[0x1d];
    puVar2[0x1d] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776910(&local_80,lVar10,(long ****)"set_endpoint_start",pppplVar6,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0x1e)) {
    local_78 = 0;
    uVar15 = puVar2[0x1f];
    puVar2[0x1f] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776910(&local_80,lVar10,(long ****)"set_endpoint_end",pppplVar6,ppppbVar7,param_5,param_6,
                 param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0x20)) {
    local_78 = 0;
    uVar15 = puVar2[0x21];
    puVar2[0x21] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776910(&local_80,lVar10,(long ****)"set_endpoint_bar",pppplVar6,ppppbVar7,param_5,param_6,
                 param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0x22)) {
    local_78 = 0;
    uVar15 = puVar2[0x23];
    puVar2[0x23] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  lVar8 = *(long *)puVar2[0x1d];
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  FUN_7103776910(&local_80,lVar10,(long ****)"set_null_handle",pppplVar6,ppppbVar7,param_5,param_6,
                 param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0x24)) {
    local_78 = 0;
    uVar15 = puVar2[0x25];
    puVar2[0x25] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776910(&local_80,lVar10,(long ****)"set_handle_start",pppplVar6,ppppbVar7,param_5,param_6,
                 param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0x26)) {
    local_78 = 0;
    uVar15 = puVar2[0x27];
    puVar2[0x27] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776910(&local_80,lVar10,(long ****)"set_handle_end",pppplVar6,ppppbVar7,param_5,param_6,
                 param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0x28)) {
    local_78 = 0;
    uVar15 = puVar2[0x29];
    puVar2[0x29] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776910(&local_80,lVar10,(long ****)"set_handle_bar",pppplVar6,ppppbVar7,param_5,param_6,
                 param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0x2a)) {
    local_78 = 0;
    uVar15 = puVar2[0x2b];
    puVar2[0x2b] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  lVar8 = *(long *)puVar2[0x25];
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  FUN_7103776910(&local_80,lVar10,(long ****)"set_null_handle_touch",pppplVar6,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0x30)) {
    local_78 = 0;
    uVar15 = puVar2[0x31];
    puVar2[0x31] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776910(&local_80,lVar10,(long ****)"set_handle_touch_icn",pppplVar6,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0x32)) {
    local_78 = 0;
    uVar15 = puVar2[0x33];
    puVar2[0x33] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776910(&local_80,lVar10,(long ****)"handle_touch_point",pppplVar6,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0x34)) {
    local_78 = 0;
    uVar15 = puVar2[0x35];
    puVar2[0x35] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  lVar8 = *(long *)puVar2[0x31];
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  FUN_7103776910(&local_80,lVar10,(long ****)"set_null_handle_decide",pppplVar6,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0x36)) {
    local_78 = 0;
    uVar15 = puVar2[0x37];
    puVar2[0x37] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776910(&local_80,lVar10,(long ****)"set_handle_touch_icn_00",pppplVar6,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0x38)) {
    local_78 = 0;
    uVar15 = puVar2[0x39];
    puVar2[0x39] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776910(&local_80,lVar10,(long ****)"handle_touch_point_00",pppplVar6,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0x3a)) {
    local_78 = 0;
    uVar15 = puVar2[0x3b];
    puVar2[0x3b] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  lVar8 = *(long *)puVar2[0x37];
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  FUN_7103776910(&local_80,lVar10,(long ****)"set_handle_icn",pppplVar6,ppppbVar7,param_5,param_6,
                 param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0x2c)) {
    local_78 = 0;
    uVar15 = puVar2[0x2d];
    puVar2[0x2d] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776910(&local_80,lVar10,(long ****)"hit_00",pppplVar6,ppppbVar7,param_5,param_6,param_7,
                 param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0x2e)) {
    local_78 = 0;
    uVar15 = puVar2[0x2f];
    puVar2[0x2f] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  lVar8 = *(long *)puVar2[0x2b];
  if (lVar8 == 0) {
    fVar17 = 0.0;
    fVar18 = 0.0;
  }
  else {
    fVar18 = ABS(*(float *)(lVar8 + 0x54));
    fVar17 = ABS(*(float *)(lVar8 + 0x50));
  }
  puVar2[0x3d] = 0;
  puVar2[0x3c] = CONCAT44(fVar18,fVar17);
  lVar8 = *(long *)puVar2[0x2b];
  uVar5 = _ConstantZero;
  uVar19 = uRam0000007107459008;
  if (lVar8 != 0) {
    uVar5 = *(undefined8 *)(lVar8 + 0x30);
    uVar19 = 0;
  }
  puVar2[0x3f] = uVar19;
  puVar2[0x3e] = uVar5;
  FUN_7103776910(&local_80,lVar10,(long ****)"set_propaty_info",pppplVar6,ppppbVar7,param_5,param_6,
                 param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0x40)) {
    local_78 = 0;
    uVar15 = puVar2[0x41];
    puVar2[0x41] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776910(&local_80,lVar10,(long ****)"hit_01",pppplVar6,ppppbVar7,param_5,param_6,param_7,
                 param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0x42)) {
    local_78 = 0;
    uVar15 = puVar2[0x43];
    puVar2[0x43] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  lVar8 = *(long *)puVar2[0x41];
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  if (*(long *)puVar2[0x43] == 0) {
    fVar17 = 0.0;
  }
  else {
    fVar17 = ABS(*(float *)(*(long *)puVar2[0x43] + 0x54));
  }
  *(undefined4 *)(puVar2 + 0x45) = 0x707;
  *(float *)(puVar2 + 0x44) = fVar17 + 8.0;
  FUN_71037780e0(&local_80,lVar10,(long ****)"propaty_icn_landform",pppplVar6,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar3 = local_78;
  local_78 = 0;
  plVar12 = (long *)puVar2[0x47];
  plVar9 = plVar16;
  plVar13 = plVar16;
  while (plVar12 != (long *)0x0) {
    while (plVar13 = plVar12, 1 < *(uint *)(plVar13 + 4)) {
      plVar12 = (long *)*plVar13;
      plVar9 = plVar13;
      if ((long *)*plVar13 == (long *)0x0) {
        lVar8 = *plVar13;
        goto joined_r0x007101ea92c8;
      }
    }
    if (*(uint *)(plVar13 + 4) != 0) break;
    plVar9 = plVar13 + 1;
    plVar12 = (long *)*plVar9;
  }
  lVar8 = *plVar9;
joined_r0x007101ea92c8:
  if (lVar8 == 0) {
    plVar12 = (long *)FUN_710392e290(0x10,0x38,pppplVar6,ppppbVar7,param_5,param_6,param_7,param_8);
    if (plVar12 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_70 = (long ***)&DAT_00000038;
        pppplVar6 = &local_70;
        uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar15 & 1) != 0) &&
           (plVar12 = (long *)FUN_710392e290(0x10,0x38,pppplVar6,ppppbVar7,param_5,param_6,param_7,
                                             param_8), plVar12 != (long *)0x0)) goto LAB_7101ea9344;
      }
      plVar12 = (long *)0x0;
    }
LAB_7101ea9344:
    *(undefined4 *)(plVar12 + 4) = 1;
    plVar12[2] = (long)plVar13;
    plVar12[5] = (long)&PTR_FUN_710523d9e8;
    plVar12[6] = uVar3;
    *plVar12 = 0;
    plVar12[1] = 0;
    *plVar9 = (long)plVar12;
    if (*(long *)puVar2[0x46] != 0) {
      puVar2[0x46] = *(long *)puVar2[0x46];
      plVar12 = (long *)*plVar9;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>((long *)puVar2[0x47],plVar12);
    puVar2[0x48] = puVar2[0x48] + 1;
  }
  else if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = 0;
  FUN_71037780e0(&local_80,lVar10,(long ****)"propaty_icn_gear",pppplVar6,ppppbVar7,param_5,param_6,
                 param_7,param_8);
  uVar3 = local_78;
  local_78 = 0;
  plVar12 = (long *)*plVar16;
  plVar9 = plVar16;
  plVar13 = plVar16;
  while (plVar12 != (long *)0x0) {
    while (plVar13 = plVar12, 2 < *(uint *)(plVar13 + 4)) {
      plVar12 = (long *)*plVar13;
      plVar9 = plVar13;
      if ((long *)*plVar13 == (long *)0x0) {
        lVar8 = *plVar13;
        goto joined_r0x007101ea9418;
      }
    }
    if (*(uint *)(plVar13 + 4) == 2) break;
    plVar9 = plVar13 + 1;
    plVar12 = (long *)*plVar9;
  }
  lVar8 = *plVar9;
joined_r0x007101ea9418:
  if (lVar8 == 0) {
    plVar12 = (long *)FUN_710392e290(0x10,0x38,pppplVar6,ppppbVar7,param_5,param_6,param_7,param_8);
    if (plVar12 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_70 = (long ***)&DAT_00000038;
        pppplVar6 = &local_70;
        uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar15 & 1) != 0) &&
           (plVar12 = (long *)FUN_710392e290(0x10,0x38,pppplVar6,ppppbVar7,param_5,param_6,param_7,
                                             param_8), plVar12 != (long *)0x0)) goto LAB_7101ea9478;
      }
      plVar12 = (long *)0x0;
    }
LAB_7101ea9478:
    *(undefined4 *)(plVar12 + 4) = 2;
    plVar12[2] = (long)plVar13;
    plVar12[5] = (long)&PTR_FUN_710523d9e8;
    plVar12[6] = uVar3;
    *plVar12 = 0;
    plVar12[1] = 0;
    *plVar9 = (long)plVar12;
    if (*(long *)puVar2[0x46] != 0) {
      puVar2[0x46] = *(long *)puVar2[0x46];
      plVar12 = (long *)*plVar9;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>((long *)puVar2[0x47],plVar12);
    puVar2[0x48] = puVar2[0x48] + 1;
  }
  else if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = 0;
  FUN_71037780e0(&local_80,lVar10,(long ****)"propaty_icn_rail",pppplVar6,ppppbVar7,param_5,param_6,
                 param_7,param_8);
  uVar3 = local_78;
  local_78 = 0;
  plVar12 = (long *)*plVar16;
  plVar9 = plVar16;
  plVar13 = plVar16;
  while (plVar12 != (long *)0x0) {
    while (plVar13 = plVar12, 4 < *(uint *)(plVar13 + 4)) {
      plVar12 = (long *)*plVar13;
      plVar9 = plVar13;
      if ((long *)*plVar13 == (long *)0x0) {
        lVar8 = *plVar13;
        goto joined_r0x007101ea954c;
      }
    }
    if (*(uint *)(plVar13 + 4) == 4) break;
    plVar9 = plVar13 + 1;
    plVar12 = (long *)*plVar9;
  }
  lVar8 = *plVar9;
joined_r0x007101ea954c:
  if (lVar8 == 0) {
    plVar12 = (long *)FUN_710392e290(0x10,0x38,pppplVar6,ppppbVar7,param_5,param_6,param_7,param_8);
    if (plVar12 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_70 = (long ***)&DAT_00000038;
        pppplVar6 = &local_70;
        uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar15 & 1) != 0) &&
           (plVar12 = (long *)FUN_710392e290(0x10,0x38,pppplVar6,ppppbVar7,param_5,param_6,param_7,
                                             param_8), plVar12 != (long *)0x0)) goto LAB_7101ea95ac;
      }
      plVar12 = (long *)0x0;
    }
LAB_7101ea95ac:
    *(undefined4 *)(plVar12 + 4) = 4;
    plVar12[2] = (long)plVar13;
    plVar12[5] = (long)&PTR_FUN_710523d9e8;
    plVar12[6] = uVar3;
    *plVar12 = 0;
    plVar12[1] = 0;
    *plVar9 = (long)plVar12;
    if (*(long *)puVar2[0x46] != 0) {
      puVar2[0x46] = *(long *)puVar2[0x46];
      plVar12 = (long *)*plVar9;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>((long *)puVar2[0x47],plVar12);
    puVar2[0x48] = puVar2[0x48] + 1;
  }
  else if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = 0;
  FUN_71037780e0(&local_80,lVar10,(long ****)"propaty_icn_bomb",pppplVar6,ppppbVar7,param_5,param_6,
                 param_7,param_8);
  uVar3 = local_78;
  local_78 = 0;
  plVar12 = (long *)*plVar16;
  plVar9 = plVar16;
  plVar13 = plVar16;
  while (plVar12 != (long *)0x0) {
    while (plVar13 = plVar12, 0x100 < *(uint *)(plVar13 + 4)) {
      plVar12 = (long *)*plVar13;
      plVar9 = plVar13;
      if ((long *)*plVar13 == (long *)0x0) {
        lVar8 = *plVar13;
        goto joined_r0x007101ea9680;
      }
    }
    if (*(uint *)(plVar13 + 4) == 0x100) break;
    plVar9 = plVar13 + 1;
    plVar12 = (long *)*plVar9;
  }
  lVar8 = *plVar9;
joined_r0x007101ea9680:
  if (lVar8 == 0) {
    plVar12 = (long *)FUN_710392e290(0x10,0x38,pppplVar6,ppppbVar7,param_5,param_6,param_7,param_8);
    if (plVar12 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_70 = (long ***)&DAT_00000038;
        pppplVar6 = &local_70;
        uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar15 & 1) != 0) &&
           (plVar12 = (long *)FUN_710392e290(0x10,0x38,pppplVar6,ppppbVar7,param_5,param_6,param_7,
                                             param_8), plVar12 != (long *)0x0)) goto LAB_7101ea96e0;
      }
      plVar12 = (long *)0x0;
    }
LAB_7101ea96e0:
    *(undefined4 *)(plVar12 + 4) = 0x100;
    plVar12[2] = (long)plVar13;
    plVar12[5] = (long)&PTR_FUN_710523d9e8;
    plVar12[6] = uVar3;
    *plVar12 = 0;
    plVar12[1] = 0;
    *plVar9 = (long)plVar12;
    if (*(long *)puVar2[0x46] != 0) {
      puVar2[0x46] = *(long *)puVar2[0x46];
      plVar12 = (long *)*plVar9;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>((long *)puVar2[0x47],plVar12);
    puVar2[0x48] = puVar2[0x48] + 1;
  }
  else if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = 0;
  FUN_71037780e0(&local_80,lVar10,(long ****)"propaty_icn_bomb",pppplVar6,ppppbVar7,param_5,param_6,
                 param_7,param_8);
  uVar3 = local_78;
  local_78 = 0;
  plVar12 = (long *)*plVar16;
  plVar9 = plVar16;
  plVar13 = plVar16;
  while (plVar12 != (long *)0x0) {
    while (plVar13 = plVar12, 0x200 < *(uint *)(plVar13 + 4)) {
      plVar12 = (long *)*plVar13;
      plVar9 = plVar13;
      if ((long *)*plVar13 == (long *)0x0) {
        lVar8 = *plVar13;
        goto joined_r0x007101ea97b4;
      }
    }
    if (*(uint *)(plVar13 + 4) == 0x200) break;
    plVar9 = plVar13 + 1;
    plVar12 = (long *)*plVar9;
  }
  lVar8 = *plVar9;
joined_r0x007101ea97b4:
  if (lVar8 == 0) {
    plVar12 = (long *)FUN_710392e290(0x10,0x38,pppplVar6,ppppbVar7,param_5,param_6,param_7,param_8);
    if (plVar12 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_70 = (long ***)&DAT_00000038;
        pppplVar6 = &local_70;
        uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar15 & 1) != 0) &&
           (plVar12 = (long *)FUN_710392e290(0x10,0x38,pppplVar6,ppppbVar7,param_5,param_6,param_7,
                                             param_8), plVar12 != (long *)0x0)) goto LAB_7101ea9814;
      }
      plVar12 = (long *)0x0;
    }
LAB_7101ea9814:
    *(undefined4 *)(plVar12 + 4) = 0x200;
    plVar12[2] = (long)plVar13;
    plVar12[5] = (long)&PTR_FUN_710523d9e8;
    plVar12[6] = uVar3;
    *plVar12 = 0;
    plVar12[1] = 0;
    *plVar9 = (long)plVar12;
    if (*(long *)puVar2[0x46] != 0) {
      puVar2[0x46] = *(long *)puVar2[0x46];
      plVar12 = (long *)*plVar9;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>((long *)puVar2[0x47],plVar12);
    puVar2[0x48] = puVar2[0x48] + 1;
  }
  else if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = 0;
  FUN_71037780e0(&local_80,lVar10,(long ****)"propaty_icn_wind",pppplVar6,ppppbVar7,param_5,param_6,
                 param_7,param_8);
  uVar3 = local_78;
  local_78 = 0;
  plVar9 = (long *)*plVar16;
  plVar13 = plVar16;
  while (plVar9 != (long *)0x0) {
    while (plVar13 = plVar9, 0x400 < *(uint *)(plVar13 + 4)) {
      plVar9 = (long *)*plVar13;
      plVar16 = plVar13;
      if ((long *)*plVar13 == (long *)0x0) goto LAB_7101ea98d0;
    }
    if (*(uint *)(plVar13 + 4) == 0x400) break;
    plVar16 = plVar13 + 1;
    plVar9 = (long *)*plVar16;
  }
LAB_7101ea98d0:
  if (*plVar16 != 0) {
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    goto LAB_7101ea9988;
  }
  plVar9 = (long *)FUN_710392e290(0x10,0x38,pppplVar6,ppppbVar7,param_5,param_6,param_7,param_8);
  if (plVar9 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ***)&DAT_00000038;
      pppplVar6 = &local_70;
      uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar15 & 1) != 0) &&
         (plVar9 = (long *)FUN_710392e290(0x10,0x38,pppplVar6,ppppbVar7,param_5,param_6,param_7,
                                          param_8), plVar9 != (long *)0x0)) goto LAB_7101ea9948;
    }
    plVar9 = (long *)0x0;
  }
LAB_7101ea9948:
  *(undefined4 *)(plVar9 + 4) = 0x400;
  plVar9[2] = (long)plVar13;
  plVar9[5] = (long)&PTR_FUN_710523d9e8;
  plVar9[6] = uVar3;
  *plVar9 = 0;
  plVar9[1] = 0;
  *plVar16 = (long)plVar9;
  if (*(long *)puVar2[0x46] != 0) {
    puVar2[0x46] = *(long *)puVar2[0x46];
    plVar9 = (long *)*plVar16;
  }
  std::__tree_balance_after_insert<std::__tree_node_base<void*>*>((long *)puVar2[0x47],plVar9);
  puVar2[0x48] = puVar2[0x48] + 1;
LAB_7101ea9988:
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = 0;
  FUN_71037780e0(&local_80,lVar10,(long ****)"propaty_info_touch_on",pppplVar6,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0x56)) {
    local_78 = 0;
    uVar15 = puVar2[0x57];
    puVar2[0x57] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_71037780e0(&local_80,lVar10,(long ****)"propaty_info_touch_off",pppplVar6,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0x58)) {
    local_78 = 0;
    uVar15 = puVar2[0x59];
    puVar2[0x59] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776640(&local_80,lVar10,(byte ****)"set_arc",pppplVar6,ppppbVar7,param_5,param_6,param_7,
                 param_8);
  uVar3 = local_78;
  if (&local_80 != pppplVar1) {
    local_78 = 0;
    uVar15 = puVar2[0x4a];
    puVar2[0x4a] = uVar3;
    if (uVar15 != 0) {
      uVar3 = *(ulong *)(uVar15 + 0x18);
      *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar15 + 0x18) = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar3 != 0) {
    uVar15 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
    FUN_710392eb40(uVar3);
  }
  lVar8 = puVar2[0x4a];
  if ((undefined8 *)(lVar8 + 0x10) != puVar2 + 0x4b) {
    *(undefined8 *)puVar2[0x4c] = **(undefined8 **)(lVar8 + 0x18);
    *(undefined8 *)(puVar2[0x4c] + 8) = *(undefined8 *)(*(long *)(lVar8 + 0x18) + 8);
    *(undefined8 *)(puVar2[0x4c] + 0x10) = *(undefined8 *)(*(long *)(lVar8 + 0x18) + 0x10);
    *(undefined8 *)(puVar2[0x4c] + 0x18) = *(undefined8 *)(*(long *)(lVar8 + 0x18) + 0x18);
  }
  FUN_71037780e0(&local_80,(long)pppplVar1,(long ****)"dgree",pppplVar6,ppppbVar7,param_5,param_6,
                 param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0x4d)) {
    local_78 = 0;
    uVar15 = puVar2[0x4e];
    puVar2[0x4e] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  if ((*(long *)(puVar2[0x4a] + 8) != 0) &&
     (lVar8 = *(long *)(*(long *)(puVar2[0x4a] + 8) + 0x18), lVar8 != 0)) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  FUN_71037780e0(&local_80,lVar10,(long ****)"handle_touch_on",pppplVar6,ppppbVar7,param_5,param_6,
                 param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0x50)) {
    local_78 = 0;
    uVar15 = puVar2[0x51];
    puVar2[0x51] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_71037780e0(&local_80,lVar10,(long ****)"handle_touch_off",pppplVar6,ppppbVar7,param_5,param_6,
                 param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0x52)) {
    local_78 = 0;
    uVar15 = puVar2[0x53];
    puVar2[0x53] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_71037780e0(&local_80,lVar10,(long ****)"handle_decide",pppplVar6,ppppbVar7,param_5,param_6,
                 param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0x54)) {
    local_78 = 0;
    uVar15 = puVar2[0x55];
    puVar2[0x55] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_71037780e0(&local_80,lVar10,(long ****)"propaty_info_touch_on",pppplVar6,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0x56)) {
    local_78 = 0;
    uVar15 = puVar2[0x57];
    puVar2[0x57] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_71037780e0(&local_80,lVar10,(long ****)"propaty_info_touch_off",pppplVar6,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0x58)) {
    local_78 = 0;
    uVar15 = puVar2[0x59];
    puVar2[0x59] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_71037780e0(&local_80,lVar10,(long ****)"propaty_info_decide",pppplVar6,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar3 = local_78;
  if (&local_80 != (long ****)(puVar2 + 0x5a)) {
    local_78 = 0;
    uVar15 = puVar2[0x5b];
    puVar2[0x5b] = uVar3;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  *(undefined1 *)((long)puVar2 + 0x2e4) = 0;
  lVar10 = *(long *)puVar2[0x15];
  if (lVar10 != 0) {
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe;
  }
  lVar10 = *(long *)puVar2[0x1d];
  if (lVar10 != 0) {
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe;
  }
  lVar10 = *(long *)puVar2[0x2d];
  if (lVar10 != 0) {
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 1;
  }
  if ((*(long *)(puVar2[0x4a] + 8) != 0) &&
     (lVar10 = *(long *)(*(long *)(puVar2[0x4a] + 8) + 0x18), lVar10 != 0)) {
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe;
  }
  *(undefined1 *)(param_1 + 0xe) = 0;
  return;
}

