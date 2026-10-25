// addr:      7101b518d0
// offset:    0x1b518d0
// name:      FUN_7101b518d0
// mangled:   
// signature: undefined __cdecl FUN_7101b518d0(undefined8 * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b518d0(undefined8 *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar5;
  byte ****ppppbVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_100 [32];
  undefined8 *local_e0;
  undefined **local_d8;
  ulong local_d0;
  undefined **local_c8;
  ulong local_c0;
  undefined **local_b8;
  ulong local_b0;
  long ***local_a8;
  byte ***apppbStack_a0 [8];
  
  *param_1 = &PTR_FUN_71050ab0f0;
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
  plVar1 = (long *)FUN_710392e290(0x10,0x1a0,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar1 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ***)&DAT_000001a0;
      param_3 = &local_a8;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar2 & 1) != 0) &&
         (plVar1 = (long *)FUN_710392e290(0x10,0x1a0,param_3,param_4,param_5,param_6,param_7,param_8
                                         ), plVar1 != (long *)0x0)) goto LAB_7101b5197c;
    }
    plVar1 = (long *)0x0;
  }
LAB_7101b5197c:
  *plVar1 = (long)param_1;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar7 = extraout_x1;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ***)&DAT_00000008;
      param_3 = &local_a8;
      auVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      uVar7 = auVar10._8_8_;
      if (((auVar10._0_8_ & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8),
         uVar7 = extraout_x1_00, puVar3 != (undefined8 *)0x0)) goto LAB_7101b519e0;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b519e0:
  FUN_7103773200(puVar3,uVar7,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar1[1] = (long)puVar3;
  FUN_7101414b10(plVar1 + 2,plVar1 + 1,param_3,param_4,param_5,param_6,param_7,param_8);
  pppplVar5 = (long ****)&DAT_00000180;
  memset(plVar1 + 4,0,0x180);
  plVar1[5] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ***)&SUB_00000020;
      pppplVar5 = &local_a8;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b51a68;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b51a68:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[6] = (long)puVar3;
  plVar1[7] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ***)&SUB_00000020;
      pppplVar5 = &local_a8;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b51ad0;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b51ad0:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined4 *)(plVar1 + 10) = 0;
  plVar1[8] = (long)puVar3;
  plVar1[9] = 0;
  plVar1[0xd] = 0;
  plVar1[0xe] = 0;
  plVar1[0xb] = (long)&PTR_FUN_710523d9a8;
  plVar1[0xc] = 0;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ***)&SUB_00000020;
      pppplVar5 = &local_a8;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b51b44;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b51b44:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0xc] = (long)puVar3;
  plVar1[0xd] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ***)&SUB_00000020;
      pppplVar5 = &local_a8;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b51bac;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b51bac:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined4 *)(plVar1 + 0x10) = 0;
  plVar1[0xe] = (long)puVar3;
  plVar1[0xf] = 0;
  plVar1[0x13] = 0;
  plVar1[0x14] = 0;
  plVar1[0x11] = (long)&PTR_FUN_710523d9a8;
  plVar1[0x12] = 0;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ***)&SUB_00000020;
      pppplVar5 = &local_a8;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b51c20;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b51c20:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x12] = (long)puVar3;
  plVar1[0x13] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ***)&SUB_00000020;
      pppplVar5 = &local_a8;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b51c88;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b51c88:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined4 *)(plVar1 + 0x16) = 0;
  plVar1[0x14] = (long)puVar3;
  plVar1[0x15] = 0;
  plVar1[0x19] = 0;
  plVar1[0x1a] = 0;
  plVar1[0x17] = (long)&PTR_FUN_710523d9a8;
  plVar1[0x18] = 0;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ***)&SUB_00000020;
      pppplVar5 = &local_a8;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b51cfc;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b51cfc:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x18] = (long)puVar3;
  plVar1[0x19] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ***)&SUB_00000020;
      pppplVar5 = &local_a8;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b51d64;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b51d64:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined4 *)(plVar1 + 0x1c) = 0;
  plVar1[0x1a] = (long)puVar3;
  plVar1[0x1b] = 0;
  plVar1[0x1f] = 0;
  plVar1[0x20] = 0;
  plVar1[0x1d] = (long)&PTR_FUN_710523d9a8;
  plVar1[0x1e] = 0;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ***)&SUB_00000020;
      pppplVar5 = &local_a8;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b51dd8;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b51dd8:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x1e] = (long)puVar3;
  plVar1[0x1f] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ***)&SUB_00000020;
      pppplVar5 = &local_a8;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b51e40;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b51e40:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined4 *)(plVar1 + 0x22) = 0;
  plVar1[0x20] = (long)puVar3;
  plVar1[0x21] = 0;
  plVar1[0x25] = 0;
  plVar1[0x26] = 0;
  plVar1[0x23] = (long)&PTR_FUN_710523d9a8;
  plVar1[0x24] = 0;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ***)&SUB_00000020;
      pppplVar5 = &local_a8;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b51eb4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b51eb4:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x24] = (long)puVar3;
  plVar1[0x25] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ***)&SUB_00000020;
      pppplVar5 = &local_a8;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b51f1c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b51f1c:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined4 *)(plVar1 + 0x28) = 0;
  plVar1[0x26] = (long)puVar3;
  plVar1[0x27] = 0;
  plVar1[0x2b] = 0;
  plVar1[0x2c] = 0;
  plVar1[0x29] = (long)&PTR_FUN_710523d9a8;
  plVar1[0x2a] = 0;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ***)&SUB_00000020;
      pppplVar5 = &local_a8;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b51f90;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b51f90:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x2a] = (long)puVar3;
  plVar1[0x2b] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ***)&SUB_00000020;
      pppplVar5 = &local_a8;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b51ff8;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b51ff8:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined4 *)(plVar1 + 0x2e) = 0;
  plVar1[0x2c] = (long)puVar3;
  plVar1[0x2d] = 0;
  plVar1[0x31] = 0;
  plVar1[0x32] = 0;
  plVar1[0x2f] = (long)&PTR_FUN_710523d9a8;
  plVar1[0x30] = 0;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ***)&SUB_00000020;
      pppplVar5 = &local_a8;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b5206c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b5206c:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x30] = (long)puVar3;
  plVar1[0x31] = (long)&PTR_FUN_710523d9a8;
  local_e0 = param_1;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ***)&SUB_00000020;
      pppplVar5 = &local_a8;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b520d8;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b520d8:
  puVar3[2] = 0;
  puVar3[3] = 0;
  pppplVar5 = (long ****)&DAT_7104544ae0;
  *puVar3 = 0;
  puVar3[1] = 0;
  ppppbVar6 = (byte ****)0x0;
  plVar1[0x32] = (long)puVar3;
  plVar1[0x33] = 0;
  FUN_71032cbf30(plVar1 + 1,**(long **)(*plVar1 + 0x78),(ulong *)&DAT_7104544ae0,(byte ****)0x0,
                 param_5,param_6,param_7,param_8);
  FUN_7103776390(&local_d8,(undefined8 *)(*(long *)plVar1[1] + 8),pppplVar5,ppppbVar6,param_5,
                 param_6,param_7,param_8);
  uVar8 = 0;
  puVar9 = (undefined1 *)0x0;
  do {
    uVar7 = *(undefined8 *)(*plVar1 + 0x78);
    *(uint *)((long)plVar1 + (long)(puVar9 + 0x20)) = uVar8;
    *(undefined8 *)((long)plVar1 + (long)(puVar9 + 0x48)) = uVar7;
    FUN_71003a4ca0((uint *)&local_a8,"set_icon_%02d",(ulong)uVar8,pppplVar5,ppppbVar6,param_5,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_b8,(long)&local_d8,(long ****)apppbStack_a0,pppplVar5,ppppbVar6,param_5,
                   param_6,param_7,param_8);
    uVar2 = local_b0;
    if ((undefined1 *)((long)&local_e0 - (long)plVar1) != puVar9) {
      local_b0 = 0;
      uVar4 = *(ulong *)((long)plVar1 + (long)(puVar9 + 0x30));
      *(ulong *)((long)plVar1 + (long)(puVar9 + 0x30)) = uVar2;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
    }
    uVar2 = local_b0;
    local_b8 = &PTR_FUN_710523d9a8;
    local_b0 = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    FUN_7103776640(&local_b8,(long)&local_d8,apppbStack_a0,pppplVar5,ppppbVar6,param_5,param_6,
                   param_7,param_8);
    FUN_7103776910(&local_c8,(long)&local_b8,(long ****)"set_tex_stock",pppplVar5,ppppbVar6,param_5,
                   param_6,param_7,param_8);
    uVar2 = local_c0;
    if (auStack_100 + -(long)plVar1 != puVar9) {
      local_c0 = 0;
      uVar4 = *(ulong *)((long)plVar1 + (long)(puVar9 + 0x40));
      *(ulong *)((long)plVar1 + (long)(puVar9 + 0x40)) = uVar2;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
    }
    uVar2 = local_c0;
    local_c8 = &PTR_FUN_710523d9a8;
    local_c0 = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    uVar2 = local_b0;
    local_b8 = &PTR_FUN_710523d988;
    local_b0 = 0;
    if (uVar2 != 0) {
      uVar4 = *(ulong *)(uVar2 + 0x18);
      *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar2 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar2);
    }
    uVar2 = local_d0;
    puVar3 = local_e0;
    puVar9 = puVar9 + 0x30;
    uVar8 = uVar8 + 1;
  } while (puVar9 != (undefined1 *)0x180);
  local_d8 = &PTR_FUN_710523d988;
  local_d0 = 0;
  if (uVar2 != 0) {
    uVar4 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar2);
  }
  puVar3[0x10] = plVar1;
  return;
}

