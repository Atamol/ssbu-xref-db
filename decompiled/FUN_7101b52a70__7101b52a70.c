// addr:      7101b52a70
// offset:    0x1b52a70
// name:      FUN_7101b52a70
// mangled:   
// signature: undefined __cdecl FUN_7101b52a70(undefined8 * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b52a70(undefined8 *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined1 auVar21 [16];
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  ulong local_78;
  long ***local_70;
  ulong local_68;
  
  *param_1 = &PTR_FUN_71050ab128;
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
  plVar1 = (long *)FUN_710392e290(0x10,0x408,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar1 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)0x408;
      param_3 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (plVar1 = (long *)FUN_710392e290(0x10,0x408,param_3,param_4,param_5,param_6,param_7,param_8
                                         ), plVar1 != (long *)0x0)) goto LAB_7101b52b1c;
    }
    plVar1 = (long *)0x0;
  }
LAB_7101b52b1c:
  plVar18 = plVar1 + 1;
  *plVar1 = (long)param_1;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar10 = extraout_x1;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&DAT_00000008;
      param_3 = &local_70;
      auVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      uVar10 = auVar21._8_8_;
      if (((auVar21._0_8_ & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8),
         uVar10 = extraout_x1_00, puVar3 != (undefined8 *)0x0)) goto LAB_7101b52b80;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b52b80:
  FUN_7103773200(puVar3,uVar10,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar1[1] = (long)puVar3;
  FUN_7101414b10(plVar1 + 2,plVar18,param_3,param_4,param_5,param_6,param_7,param_8);
  pppplVar7 = (long ****)&DAT_00000148;
  memset(plVar1 + 5,0,0x148);
  plVar1[4] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b52c10;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b52c10:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  pppplVar11 = (long ****)(plVar1 + 6);
  *pppplVar11 = (long ***)&PTR_FUN_710523d9e8;
  plVar1[5] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b52c80;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b52c80:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  plVar1[8] = (long)&PTR_FUN_710523d9e8;
  plVar1[7] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b52cec;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b52cec:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  pppplVar12 = (long ****)(plVar1 + 10);
  *pppplVar12 = (long ***)&PTR_FUN_710523d9e8;
  plVar1[9] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b52d5c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b52d5c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  pppplVar13 = (long ****)(plVar1 + 0xc);
  *pppplVar13 = (long ***)&PTR_FUN_710523d9e8;
  plVar1[0xb] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b52dc8;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b52dc8:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  plVar1[0xe] = (long)&PTR_FUN_710523d9e8;
  plVar1[0xd] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b52e38;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b52e38:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  plVar1[0x10] = (long)&PTR_FUN_710523d9e8;
  plVar1[0xf] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b52ea4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b52ea4:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  plVar1[0x12] = (long)&PTR_FUN_710523d9e8;
  plVar1[0x11] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b52f14;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b52f14:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  plVar1[0x14] = (long)&PTR_FUN_710523d9e8;
  plVar1[0x13] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b52f7c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b52f7c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  plVar1[0x16] = (long)&PTR_FUN_710523d9e8;
  plVar1[0x15] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b52fec;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b52fec:
  *(undefined1 *)(puVar3 + 2) = 1;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x18] = (long)&PTR_FUN_710523d9e8;
  plVar1[0x17] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b53054;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b53054:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  plVar1[0x1a] = (long)&PTR_FUN_710523d9e8;
  plVar1[0x19] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b530c0;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b530c0:
  *(undefined1 *)(puVar3 + 2) = 1;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x1c] = (long)&PTR_FUN_710523d9e8;
  plVar1[0x1b] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b53128;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b53128:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  plVar1[0x1e] = (long)&PTR_FUN_710523d9e8;
  plVar1[0x1d] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b53194;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b53194:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  plVar1[0x1f] = (long)puVar3;
  plVar1[0x20] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b531f4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b531f4:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  plVar1[0x21] = (long)puVar3;
  plVar1[0x22] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b53258;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b53258:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  plVar1[0x23] = (long)puVar3;
  plVar1[0x24] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b532b8;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b532b8:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  plVar1[0x25] = (long)puVar3;
  plVar1[0x26] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b5331c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b5331c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  plVar1[0x27] = (long)puVar3;
  plVar1[0x28] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b5337c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b5337c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  plVar1[0x29] = (long)puVar3;
  plVar1[0x2a] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b533e0;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b533e0:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  plVar1[0x2b] = (long)puVar3;
  plVar1[0x2c] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b53440;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b53440:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  plVar1[0x2d] = (long)puVar3;
  plVar1[0x2e] = (long)&PTR_FUN_710523d9a8;
  plVar1[0x41] = 0;
  plVar1[0x3f] = 0;
  plVar1[0x40] = 0;
  plVar1[0x3d] = 0;
  plVar1[0x3e] = 0;
  plVar1[0x3b] = 0;
  plVar1[0x3c] = 0;
  plVar1[0x39] = 0;
  plVar1[0x3a] = 0;
  plVar1[0x37] = 0;
  plVar1[0x38] = 0;
  plVar1[0x35] = 0;
  plVar1[0x36] = 0;
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  plVar1[0x31] = 0;
  plVar1[0x32] = 0;
  plVar1[0x2f] = 0;
  plVar1[0x30] = 0;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b534d4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b534d4:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x2f] = (long)puVar3;
  plVar1[0x30] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b53534;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b53534:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x31] = (long)puVar3;
  plVar1[0x32] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b53594;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b53594:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x33] = (long)puVar3;
  plVar1[0x34] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b535f4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b535f4:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x35] = (long)puVar3;
  plVar1[0x36] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b53654;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b53654:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x37] = (long)puVar3;
  plVar1[0x38] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b536b4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b536b4:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x39] = (long)puVar3;
  plVar1[0x3a] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b53714;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b53714:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x3b] = (long)puVar3;
  plVar1[0x3c] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b53774;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b53774:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x3d] = (long)puVar3;
  plVar1[0x3e] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b537d4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b537d4:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x3f] = (long)puVar3;
  plVar1[0x40] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b53834;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b53834:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x41] = (long)puVar3;
  plVar1[0x61] = 0;
  plVar1[0x60] = 0;
  plVar1[0x5f] = 0;
  plVar1[0x5e] = 0;
  plVar1[0x5d] = 0;
  plVar1[0x5c] = 0;
  plVar1[0x5b] = 0;
  plVar1[0x5a] = 0;
  plVar1[0x59] = 0;
  plVar1[0x58] = 0;
  plVar1[0x57] = 0;
  plVar1[0x56] = 0;
  plVar1[0x55] = 0;
  plVar1[0x54] = 0;
  plVar1[0x53] = 0;
  plVar1[0x52] = 0;
  plVar1[0x51] = 0;
  plVar1[0x50] = 0;
  plVar1[0x4f] = 0;
  plVar1[0x4e] = 0;
  plVar1[0x4d] = 0;
  plVar1[0x4c] = 0;
  plVar1[0x4b] = 0;
  plVar1[0x4a] = 0;
  plVar1[0x49] = 0;
  plVar1[0x48] = 0;
  plVar1[0x47] = 0;
  plVar1[0x46] = 0;
  plVar1[0x45] = 0;
  plVar1[0x44] = 0;
  plVar1[0x43] = 0;
  plVar1[0x42] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b53914;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b53914:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x43] = (long)puVar3;
  plVar1[0x44] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b53978;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b53978:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x45] = (long)puVar3;
  plVar1[0x46] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b539dc;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b539dc:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x47] = (long)puVar3;
  plVar1[0x48] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b53a40;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b53a40:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x49] = (long)puVar3;
  plVar1[0x4a] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b53aa4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b53aa4:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x4b] = (long)puVar3;
  plVar1[0x4c] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b53b08;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b53b08:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x4d] = (long)puVar3;
  plVar1[0x4e] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b53b6c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b53b6c:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x4f] = (long)puVar3;
  plVar1[0x50] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b53bd0;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b53bd0:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x51] = (long)puVar3;
  plVar1[0x52] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b53c34;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b53c34:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x53] = (long)puVar3;
  plVar1[0x54] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b53c98;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b53c98:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x55] = (long)puVar3;
  plVar1[0x56] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b53cfc;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b53cfc:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x57] = (long)puVar3;
  plVar1[0x58] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b53d60;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b53d60:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x59] = (long)puVar3;
  plVar1[0x5a] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b53dc4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b53dc4:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x5b] = (long)puVar3;
  plVar1[0x5c] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b53e28;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b53e28:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x5d] = (long)puVar3;
  plVar1[0x5e] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b53e8c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b53e8c:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x5f] = (long)puVar3;
  plVar1[0x60] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b53ef0;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b53ef0:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x61] = (long)puVar3;
  plVar1[0x67] = 0;
  plVar1[0x66] = 0;
  plVar1[0x65] = 0;
  plVar1[100] = 0;
  plVar1[99] = 0;
  plVar1[0x62] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b53f68;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b53f68:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[99] = (long)puVar3;
  plVar1[100] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b53fcc;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b53fcc:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x65] = (long)puVar3;
  plVar1[0x66] = (long)&PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar7 = &local_70;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b54030;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b54030:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x6d] = (long)FUN_7101b524f0;
  plVar1[0x6f] = (long)FUN_7101b52510;
  plVar1[0x67] = (long)puVar3;
  plVar1[0x68] = (long)plVar1;
  plVar1[0x6c] = 0;
  plVar1[0x6b] = 0;
  plVar1[0x80] = 0;
  plVar1[0x7f] = 0;
  plVar1[0x6e] = 0;
  plVar1[0x70] = 0;
  plVar1[0x71] = (long)FUN_7101b525a0;
  plVar1[0x72] = 0;
  plVar1[0x6a] = 0;
  plVar1[0x69] = 0;
  *(undefined8 *)((long)plVar1 + 0x3dc) = 0;
  *(undefined8 *)((long)plVar1 + 0x3d4) = 0;
  *(undefined8 *)((long)plVar1 + 0x3cc) = 0;
  *(undefined8 *)((long)plVar1 + 0x3c4) = 0;
  *(undefined8 *)((long)plVar1 + 0x3bc) = 0;
  *(undefined8 *)((long)plVar1 + 0x3b4) = 0;
  *(undefined8 *)((long)plVar1 + 0x3ac) = 0;
  *(undefined8 *)((long)plVar1 + 0x39c) = 0;
  *(undefined4 *)((long)plVar1 + 0x3e4) = 0;
  *(undefined8 *)((long)plVar1 + 0x3a4) = 0;
  plVar1[0x7d] = 0xffffffff;
  *(undefined4 *)(plVar1 + 0x7e) = 0xffffffff;
  *(undefined1 *)((long)plVar1 + 0x3f4) = 0;
  *(undefined4 *)(plVar1 + 0x73) = 0;
  FUN_7101b525b0(plVar1 + 0x68);
  param_1[0x10] = plVar1;
  puVar8 = &DAT_7104544ae8;
  uVar10 = 0;
  FUN_71032cbf30(plVar18,**(long **)(*plVar1 + 0x78),(ulong *)&DAT_7104544ae8,(byte ****)0x0,param_5
                 ,param_6,param_7,param_8);
  FUN_71037780e0(&local_70,*(long *)plVar1[1] + 8,(long ****)&DAT_7104421055,puVar8,uVar10,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 4)) {
    local_68 = 0;
    uVar4 = plVar1[5];
    plVar1[5] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)*plVar18 + 8,(long ****)&DAT_710428ff7d,puVar8,uVar10,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != pppplVar11) {
    local_68 = 0;
    uVar4 = plVar1[7];
    plVar1[7] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)*plVar18 + 8,(long ****)"distance_in",puVar8,uVar10,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 8)) {
    local_68 = 0;
    uVar4 = plVar1[9];
    plVar1[9] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)*plVar18 + 8,(long ****)"distance_out",puVar8,uVar10,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != pppplVar12) {
    local_68 = 0;
    uVar4 = plVar1[0xb];
    plVar1[0xb] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)*plVar18 + 8,(long ****)"ff_off",puVar8,uVar10,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != pppplVar13) {
    local_68 = 0;
    uVar4 = plVar1[0xd];
    plVar1[0xd] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)*plVar18 + 8,(long ****)"ff_on",puVar8,uVar10,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0xe)) {
    local_68 = 0;
    uVar4 = plVar1[0xf];
    plVar1[0xf] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)*plVar18 + 8,(long ****)"ff_on_stop",puVar8,uVar10,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x10)) {
    local_68 = 0;
    uVar4 = plVar1[0x11];
    plVar1[0x11] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)*plVar18 + 8,(long ****)"gsp_onoff",puVar8,uVar10,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x12)) {
    local_68 = 0;
    uVar4 = plVar1[0x13];
    plVar1[0x13] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)*plVar18 + 8,(long ****)"gsp_icon_onoff",puVar8,uVar10,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x14)) {
    local_68 = 0;
    uVar4 = plVar1[0x15];
    plVar1[0x15] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)*plVar18 + 8,(long ****)"player_onoff",puVar8,uVar10,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x18)) {
    local_68 = 0;
    uVar4 = plVar1[0x19];
    plVar1[0x19] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)*plVar18 + 8,(long ****)"player_in",puVar8,uVar10,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x1a)) {
    local_68 = 0;
    uVar4 = plVar1[0x1b];
    plVar1[0x1b] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)*plVar18 + 8,(long ****)"player_out",puVar8,uVar10,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x1c)) {
    local_68 = 0;
    uVar4 = plVar1[0x1d];
    plVar1[0x1d] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)*plVar18 + 8,(long ****)"player_loop",puVar8,uVar10,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x1e)) {
    local_68 = 0;
    uVar4 = plVar1[0x1f];
    plVar1[0x1f] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)*plVar18 + 8,(long ****)"result_off",puVar8,uVar10,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x20)) {
    local_68 = 0;
    uVar4 = plVar1[0x21];
    plVar1[0x21] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)*plVar18 + 8,(long ****)"result_in",puVar8,uVar10,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x22)) {
    local_68 = 0;
    uVar4 = plVar1[0x23];
    plVar1[0x23] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)*plVar18 + 8,(long ****)"gsp_type",puVar8,uVar10,param_5,param_6
                 ,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x24)) {
    local_68 = 0;
    uVar4 = plVar1[0x25];
    plVar1[0x25] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)*plVar18 + 8,(long ****)"line_anim_1p",puVar8,uVar10,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x26)) {
    local_68 = 0;
    uVar4 = plVar1[0x27];
    plVar1[0x27] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)*plVar18 + 8,(long ****)"line_anim_2p",puVar8,uVar10,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x28)) {
    local_68 = 0;
    uVar4 = plVar1[0x29];
    plVar1[0x29] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)*plVar18 + 8,(long ****)"line_anim_3p",puVar8,uVar10,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x2a)) {
    local_68 = 0;
    uVar4 = plVar1[0x2b];
    plVar1[0x2b] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)*plVar18 + 8,(long ****)"line_anim_4p",puVar8,uVar10,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x2c)) {
    local_68 = 0;
    uVar4 = plVar1[0x2d];
    plVar1[0x2d] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_7103776640(&local_80,*(long *)*plVar18 + 8,(byte ****)"set_parts_gsp",puVar8,uVar10,param_5,
                 param_6,param_7,param_8);
  FUN_71037780e0(&local_70,(long)&local_80,(long ****)"gsp_type",puVar8,uVar10,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x16)) {
    local_68 = 0;
    uVar4 = plVar1[0x17];
    plVar1[0x17] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  uVar2 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar2 != 0) {
    uVar4 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar2);
  }
  FUN_7103776910(&local_70,*(long *)*plVar18 + 8,(long ****)"set_txt_num",puVar8,uVar10,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x2e)) {
    local_68 = 0;
    uVar4 = plVar1[0x2f];
    plVar1[0x2f] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_7103776910(&local_70,*(long *)*plVar18 + 8,(long ****)"set_txt_distance_00",puVar8,uVar10,
                 param_5,param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x30)) {
    local_68 = 0;
    uVar4 = plVar1[0x31];
    plVar1[0x31] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_7103776910(&local_70,*(long *)*plVar18 + 8,(long ****)"set_txt_distance_01",puVar8,uVar10,
                 param_5,param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x32)) {
    local_68 = 0;
    uVar4 = plVar1[0x33];
    plVar1[0x33] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_7103776910(&local_70,*(long *)*plVar18 + 8,(long ****)"set_rep_chara_2",puVar8,uVar10,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x36)) {
    local_68 = 0;
    uVar4 = plVar1[0x37];
    plVar1[0x37] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_7103776910(&local_70,*(long *)*plVar18 + 8,(long ****)"set_gsp",puVar8,uVar10,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x3e)) {
    local_68 = 0;
    uVar4 = plVar1[0x3f];
    plVar1[0x3f] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_7103776910(&local_70,*(long *)*plVar18 + 8,(long ****)"set_txt_gsp",puVar8,uVar10,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x40)) {
    local_68 = 0;
    uVar4 = plVar1[0x41];
    plVar1[0x41] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_7103776640(&local_80,*(long *)*plVar18 + 8,(byte ****)"set_parts_gsp",puVar8,uVar10,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_70,(long)&local_80,(long ****)"set_txt_gsp_count",puVar8,uVar10,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x34)) {
    local_68 = 0;
    uVar4 = plVar1[0x35];
    plVar1[0x35] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  uVar2 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar2 != 0) {
    uVar4 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar2);
  }
  FUN_7103776640(&local_70,*(long *)*plVar18 + 8,(byte ****)"set_parts_gsp",puVar8,uVar10,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_68;
  if ((long *)(local_68 + 0x10) == plVar1 + 0x38) {
    local_70 = (long ***)&PTR_FUN_710523d988;
    local_68 = 0;
    if (uVar2 != 0) goto LAB_7101b54b2c;
  }
  else {
    *(undefined8 *)plVar1[0x39] = **(undefined8 **)(local_68 + 0x18);
    *(undefined8 *)(plVar1[0x39] + 8) = *(undefined8 *)(*(long *)(local_68 + 0x18) + 8);
    *(undefined8 *)(plVar1[0x39] + 0x10) = *(undefined8 *)(*(long *)(local_68 + 0x18) + 0x10);
    *(undefined8 *)(plVar1[0x39] + 0x18) = *(undefined8 *)(*(long *)(local_68 + 0x18) + 0x18);
LAB_7101b54b2c:
    local_68 = 0;
    local_70 = (long ***)&PTR_FUN_710523d988;
    uVar4 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar2);
  }
  FUN_7103776640(&local_70,*(long *)*plVar18 + 8,(byte ****)"set_gsp_icon",puVar8,uVar10,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_68;
  if ((long *)(local_68 + 0x10) == plVar1 + 0x3a) {
    local_70 = (long ***)&PTR_FUN_710523d988;
    local_68 = 0;
    if (uVar2 == 0) goto LAB_7101b54bdc;
  }
  else {
    *(undefined8 *)plVar1[0x3b] = **(undefined8 **)(local_68 + 0x18);
    *(undefined8 *)(plVar1[0x3b] + 8) = *(undefined8 *)(*(long *)(local_68 + 0x18) + 8);
    *(undefined8 *)(plVar1[0x3b] + 0x10) = *(undefined8 *)(*(long *)(local_68 + 0x18) + 0x10);
    *(undefined8 *)(plVar1[0x3b] + 0x18) = *(undefined8 *)(*(long *)(local_68 + 0x18) + 0x18);
  }
  local_68 = 0;
  local_70 = (long ***)&PTR_FUN_710523d988;
  uVar4 = *(ulong *)(uVar2 + 0x18);
  *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
  *(undefined8 *)(uVar2 + 0x18) = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_710392eb40(uVar2);
LAB_7101b54bdc:
  FUN_7103776910(&local_70,*(long *)*plVar18 + 8,(long ****)"bg_icon",puVar8,uVar10,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x3c)) {
    local_68 = 0;
    uVar4 = plVar1[0x3d];
    plVar1[0x3d] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  uVar9 = 0;
  FUN_7103776640(&local_80,*(long *)*plVar18 + 8,(byte ****)"set_parts_reticle_%02d",0,uVar10,
                 param_5,param_6,param_7,param_8);
  uVar2 = local_78;
  if ((long *)(local_78 + 0x10) != plVar1 + 0x42) {
    *(undefined8 *)plVar1[0x43] = **(undefined8 **)(local_78 + 0x18);
    *(undefined8 *)(plVar1[0x43] + 8) = *(undefined8 *)(*(long *)(local_78 + 0x18) + 8);
    *(undefined8 *)(plVar1[0x43] + 0x10) = *(undefined8 *)(*(long *)(local_78 + 0x18) + 0x10);
    *(undefined8 *)(plVar1[0x43] + 0x18) = *(undefined8 *)(*(long *)(local_78 + 0x18) + 0x18);
  }
  FUN_7103776910(&local_70,(long)&local_80,(long ****)"set_txt_num",uVar9,uVar10,param_5,param_6,
                 param_7,param_8);
  uVar4 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x44)) {
    local_68 = 0;
    uVar5 = plVar1[0x45];
    plVar1[0x45] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  uVar9 = 0;
  FUN_7103776640(&local_90,*(long *)*plVar18 + 8,(byte ****)"set_parts_line_num_%02d",0,uVar10,
                 param_5,param_6,param_7,param_8);
  uVar4 = local_88;
  if ((long *)(local_88 + 0x10) != plVar1 + 0x46) {
    *(undefined8 *)plVar1[0x47] = **(undefined8 **)(local_88 + 0x18);
    *(undefined8 *)(plVar1[0x47] + 8) = *(undefined8 *)(*(long *)(local_88 + 0x18) + 8);
    *(undefined8 *)(plVar1[0x47] + 0x10) = *(undefined8 *)(*(long *)(local_88 + 0x18) + 0x10);
    *(undefined8 *)(plVar1[0x47] + 0x18) = *(undefined8 *)(*(long *)(local_88 + 0x18) + 0x18);
  }
  FUN_7103776910(&local_70,(long)&local_90,(long ****)"set_txt_num",uVar9,uVar10,param_5,param_6,
                 param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x48)) {
    local_68 = 0;
    uVar6 = plVar1[0x49];
    plVar1[0x49] = uVar5;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
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
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar2 != 0) {
    uVar4 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar2);
  }
  uVar9 = 1;
  FUN_7103776640(&local_80,*(long *)*plVar18 + 8,(byte ****)"set_parts_reticle_%02d",1,uVar10,
                 param_5,param_6,param_7,param_8);
  uVar2 = local_78;
  if ((long *)(local_78 + 0x10) != plVar1 + 0x4a) {
    *(undefined8 *)plVar1[0x4b] = **(undefined8 **)(local_78 + 0x18);
    *(undefined8 *)(plVar1[0x4b] + 8) = *(undefined8 *)(*(long *)(local_78 + 0x18) + 8);
    *(undefined8 *)(plVar1[0x4b] + 0x10) = *(undefined8 *)(*(long *)(local_78 + 0x18) + 0x10);
    *(undefined8 *)(plVar1[0x4b] + 0x18) = *(undefined8 *)(*(long *)(local_78 + 0x18) + 0x18);
  }
  FUN_7103776910(&local_70,(long)&local_80,(long ****)"set_txt_num",uVar9,uVar10,param_5,param_6,
                 param_7,param_8);
  uVar4 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x4c)) {
    local_68 = 0;
    uVar5 = plVar1[0x4d];
    plVar1[0x4d] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  uVar9 = 1;
  FUN_7103776640(&local_90,*(long *)*plVar18 + 8,(byte ****)"set_parts_line_num_%02d",1,uVar10,
                 param_5,param_6,param_7,param_8);
  uVar4 = local_88;
  if ((long *)(local_88 + 0x10) != plVar1 + 0x4e) {
    *(undefined8 *)plVar1[0x4f] = **(undefined8 **)(local_88 + 0x18);
    *(undefined8 *)(plVar1[0x4f] + 8) = *(undefined8 *)(*(long *)(local_88 + 0x18) + 8);
    *(undefined8 *)(plVar1[0x4f] + 0x10) = *(undefined8 *)(*(long *)(local_88 + 0x18) + 0x10);
    *(undefined8 *)(plVar1[0x4f] + 0x18) = *(undefined8 *)(*(long *)(local_88 + 0x18) + 0x18);
  }
  FUN_7103776910(&local_70,(long)&local_90,(long ****)"set_txt_num",uVar9,uVar10,param_5,param_6,
                 param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x50)) {
    local_68 = 0;
    uVar6 = plVar1[0x51];
    plVar1[0x51] = uVar5;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
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
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar2 != 0) {
    uVar4 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar2);
  }
  uVar9 = 2;
  FUN_7103776640(&local_80,*(long *)*plVar18 + 8,(byte ****)"set_parts_reticle_%02d",2,uVar10,
                 param_5,param_6,param_7,param_8);
  uVar2 = local_78;
  if ((long *)(local_78 + 0x10) != plVar1 + 0x52) {
    *(undefined8 *)plVar1[0x53] = **(undefined8 **)(local_78 + 0x18);
    *(undefined8 *)(plVar1[0x53] + 8) = *(undefined8 *)(*(long *)(local_78 + 0x18) + 8);
    *(undefined8 *)(plVar1[0x53] + 0x10) = *(undefined8 *)(*(long *)(local_78 + 0x18) + 0x10);
    *(undefined8 *)(plVar1[0x53] + 0x18) = *(undefined8 *)(*(long *)(local_78 + 0x18) + 0x18);
  }
  FUN_7103776910(&local_70,(long)&local_80,(long ****)"set_txt_num",uVar9,uVar10,param_5,param_6,
                 param_7,param_8);
  uVar4 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x54)) {
    local_68 = 0;
    uVar5 = plVar1[0x55];
    plVar1[0x55] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  uVar9 = 2;
  FUN_7103776640(&local_90,*(long *)*plVar18 + 8,(byte ****)"set_parts_line_num_%02d",2,uVar10,
                 param_5,param_6,param_7,param_8);
  uVar4 = local_88;
  if ((long *)(local_88 + 0x10) != plVar1 + 0x56) {
    *(undefined8 *)plVar1[0x57] = **(undefined8 **)(local_88 + 0x18);
    *(undefined8 *)(plVar1[0x57] + 8) = *(undefined8 *)(*(long *)(local_88 + 0x18) + 8);
    *(undefined8 *)(plVar1[0x57] + 0x10) = *(undefined8 *)(*(long *)(local_88 + 0x18) + 0x10);
    *(undefined8 *)(plVar1[0x57] + 0x18) = *(undefined8 *)(*(long *)(local_88 + 0x18) + 0x18);
  }
  FUN_7103776910(&local_70,(long)&local_90,(long ****)"set_txt_num",uVar9,uVar10,param_5,param_6,
                 param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x58)) {
    local_68 = 0;
    uVar6 = plVar1[0x59];
    plVar1[0x59] = uVar5;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
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
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar2 != 0) {
    uVar4 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar2);
  }
  uVar9 = 3;
  FUN_7103776640(&local_80,*(long *)*plVar18 + 8,(byte ****)"set_parts_reticle_%02d",3,uVar10,
                 param_5,param_6,param_7,param_8);
  uVar2 = local_78;
  if ((long *)(local_78 + 0x10) != plVar1 + 0x5a) {
    *(undefined8 *)plVar1[0x5b] = **(undefined8 **)(local_78 + 0x18);
    *(undefined8 *)(plVar1[0x5b] + 8) = *(undefined8 *)(*(long *)(local_78 + 0x18) + 8);
    *(undefined8 *)(plVar1[0x5b] + 0x10) = *(undefined8 *)(*(long *)(local_78 + 0x18) + 0x10);
    *(undefined8 *)(plVar1[0x5b] + 0x18) = *(undefined8 *)(*(long *)(local_78 + 0x18) + 0x18);
  }
  FUN_7103776910(&local_70,(long)&local_80,(long ****)"set_txt_num",uVar9,uVar10,param_5,param_6,
                 param_7,param_8);
  uVar4 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x5c)) {
    local_68 = 0;
    uVar5 = plVar1[0x5d];
    plVar1[0x5d] = uVar4;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar4 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  uVar9 = 3;
  FUN_7103776640(&local_90,*(long *)*plVar18 + 8,(byte ****)"set_parts_line_num_%02d",3,uVar10,
                 param_5,param_6,param_7,param_8);
  uVar4 = local_88;
  if ((long *)(local_88 + 0x10) != plVar1 + 0x5e) {
    *(undefined8 *)plVar1[0x5f] = **(undefined8 **)(local_88 + 0x18);
    *(undefined8 *)(plVar1[0x5f] + 8) = *(undefined8 *)(*(long *)(local_88 + 0x18) + 8);
    *(undefined8 *)(plVar1[0x5f] + 0x10) = *(undefined8 *)(*(long *)(local_88 + 0x18) + 0x10);
    *(undefined8 *)(plVar1[0x5f] + 0x18) = *(undefined8 *)(*(long *)(local_88 + 0x18) + 0x18);
  }
  FUN_7103776910(&local_70,(long)&local_90,(long ****)"set_txt_num",uVar9,uVar10,param_5,param_6,
                 param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x60)) {
    local_68 = 0;
    uVar6 = plVar1[0x61];
    plVar1[0x61] = uVar5;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
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
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar2 != 0) {
    uVar4 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar2);
  }
  FUN_7103776640(&local_80,*(long *)*plVar18 + 8,(byte ****)"set_keyhelp",uVar9,uVar10,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_70,(long)&local_80,(long ****)"set_txt_icon",uVar9,uVar10,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x62)) {
    local_68 = 0;
    uVar4 = plVar1[99];
    plVar1[99] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  uVar2 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar2 != 0) {
    uVar4 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar2);
  }
  FUN_7103776640(&local_80,*(long *)*plVar18 + 8,(byte ****)"set_keyhelp_01",uVar9,uVar10,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_70,(long)&local_80,(long ****)"set_txt_icon",uVar9,uVar10,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 100)) {
    local_68 = 0;
    uVar4 = plVar1[0x65];
    plVar1[0x65] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  uVar2 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar2 != 0) {
    uVar4 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar2);
  }
  FUN_7103776640(&local_80,*(long *)*plVar18 + 8,(byte ****)"set_key_help_02",uVar9,uVar10,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_70,(long)&local_80,(long ****)"set_txt_icon",uVar9,uVar10,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x66)) {
    local_68 = 0;
    uVar4 = plVar1[0x67];
    plVar1[0x67] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  uVar2 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar2 != 0) {
    uVar4 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar2);
  }
  FUN_710377b140((long)pppplVar11);
  FUN_710377b140((long)pppplVar12);
  FUN_710377b140((long)pppplVar13);
  plVar14 = (long *)plVar1[0x13];
  plVar19 = (long *)plVar14[1];
  if (plVar19 != (long *)0x0) {
    if ((char)plVar14[2] != '\0') {
      plVar20 = *(long **)(*plVar14 + 0x80);
      plVar14 = (long *)(*plVar14 + 0x88);
      if (plVar20 != plVar14) {
        do {
          while( true ) {
            uVar2 = (**(code **)(*(long *)plVar20[0xd] + 0x148))();
            if (((uVar2 & 1) != 0) &&
               (uVar2 = (**(code **)(*plVar19 + 0x120))(plVar19,plVar20[0xd]), (uVar2 & 1) != 0)) {
              (**(code **)(*(long *)plVar20[0xd] + 0x178))();
              (**(code **)(*(long *)plVar20[0xd] + 0x140))((long *)plVar20[0xd],0);
            }
            plVar15 = (long *)plVar20[1];
            if ((long *)plVar20[1] == (long *)0x0) break;
            do {
              plVar20 = plVar15;
              plVar15 = (long *)*plVar20;
            } while ((long *)*plVar20 != (long *)0x0);
LAB_7101b555a4:
            if (plVar20 == plVar14) goto LAB_7101b555bc;
          }
          plVar15 = plVar20 + 2;
          plVar17 = (long *)*plVar15;
          if ((long *)*plVar17 != plVar20) {
            do {
              lVar16 = *plVar15;
              plVar15 = (long *)(lVar16 + 0x10);
              plVar20 = (long *)*plVar15;
            } while (*plVar20 != lVar16);
            goto LAB_7101b555a4;
          }
          plVar20 = plVar17;
        } while (plVar17 != plVar14);
LAB_7101b555bc:
        plVar19 = *(long **)(plVar1[0x13] + 8);
      }
    }
    (**(code **)(*plVar19 + 0x188))(plVar19);
  }
  plVar14 = (long *)plVar1[0x15];
  plVar19 = (long *)plVar14[1];
  if (plVar19 != (long *)0x0) {
    if ((char)plVar14[2] != '\0') {
      plVar20 = *(long **)(*plVar14 + 0x80);
      plVar14 = (long *)(*plVar14 + 0x88);
      if (plVar20 != plVar14) {
        do {
          while( true ) {
            uVar2 = (**(code **)(*(long *)plVar20[0xd] + 0x148))();
            if (((uVar2 & 1) != 0) &&
               (uVar2 = (**(code **)(*plVar19 + 0x120))(plVar19,plVar20[0xd]), (uVar2 & 1) != 0)) {
              (**(code **)(*(long *)plVar20[0xd] + 0x178))();
              (**(code **)(*(long *)plVar20[0xd] + 0x140))((long *)plVar20[0xd],0);
            }
            plVar15 = (long *)plVar20[1];
            if ((long *)plVar20[1] == (long *)0x0) break;
            do {
              plVar20 = plVar15;
              plVar15 = (long *)*plVar20;
            } while ((long *)*plVar20 != (long *)0x0);
LAB_7101b55690:
            if (plVar20 == plVar14) goto LAB_7101b556a8;
          }
          plVar15 = plVar20 + 2;
          plVar17 = (long *)*plVar15;
          if ((long *)*plVar17 != plVar20) {
            do {
              lVar16 = *plVar15;
              plVar15 = (long *)(lVar16 + 0x10);
              plVar20 = (long *)*plVar15;
            } while (*plVar20 != lVar16);
            goto LAB_7101b55690;
          }
          plVar20 = plVar17;
        } while (plVar17 != plVar14);
LAB_7101b556a8:
        plVar19 = *(long **)(plVar1[0x15] + 8);
      }
    }
    (**(code **)(*plVar19 + 0x188))(plVar19);
  }
  lVar16 = *(long *)plVar1[0x43];
  if (lVar16 != 0) {
    *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe;
  }
  lVar16 = *(long *)plVar1[0x47];
  if (lVar16 != 0) {
    *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe;
  }
  lVar16 = *(long *)plVar1[0x4b];
  if (lVar16 != 0) {
    *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe;
  }
  lVar16 = *(long *)plVar1[0x4f];
  if (lVar16 != 0) {
    *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe;
  }
  lVar16 = *(long *)plVar1[0x53];
  if (lVar16 != 0) {
    *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe;
  }
  lVar16 = *(long *)plVar1[0x57];
  if (lVar16 != 0) {
    *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe;
  }
  lVar16 = *(long *)plVar1[0x5b];
  if (lVar16 != 0) {
    *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe;
  }
  lVar16 = *(long *)plVar1[0x5f];
  if (lVar16 != 0) {
    *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe;
  }
  FUN_7103776910(&local_70,*(long *)*plVar18 + 8,(long ****)"set_txt_number",uVar9,uVar10,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_70,"mel_homerun_digit",uVar9,uVar10,param_5,param_6,param_7,param_8);
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  return;
}

