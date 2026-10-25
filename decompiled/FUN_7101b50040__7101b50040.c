// addr:      7101b50040
// offset:    0x1b50040
// name:      FUN_7101b50040
// mangled:   
// signature: undefined __cdecl FUN_7101b50040(undefined8 * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b50040(undefined8 *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
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
  
  *param_1 = &PTR_FUN_71050ab048;
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
  plVar1 = (long *)FUN_710392e290(0x10,0x90,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar1 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000090;
      param_3 = &local_78;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (plVar1 = (long *)FUN_710392e290(0x10,0x90,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar1 != (long *)0x0)) goto LAB_7101b500ec;
    }
    plVar1 = (long *)0x0;
  }
LAB_7101b500ec:
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
         uVar7 = extraout_x1_00, puVar3 != (undefined8 *)0x0)) goto LAB_7101b50150;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b50150:
  FUN_7103773200(puVar3,uVar7,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar1[1] = (long)puVar3;
  FUN_7101414b10(plVar1 + 2,plVar8,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar1[4] = (long)&PTR_FUN_710523d9a8;
  plVar1[5] = 0;
  plVar1[10] = 0;
  plVar1[0xb] = 0;
  plVar1[8] = 0;
  plVar1[9] = 0;
  plVar1[6] = 0;
  plVar1[7] = 0;
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
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b501dc;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b501dc:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[6] = (long)&PTR_FUN_710523d9a8;
  plVar1[5] = (long)puVar3;
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
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b50248;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b50248:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[8] = (long)&PTR_FUN_710523d9a8;
  plVar1[7] = (long)puVar3;
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
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b502b4;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b502b4:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[10] = (long)&PTR_FUN_710523d9a8;
  plVar1[9] = (long)puVar3;
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
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b5031c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b5031c:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0xc] = (long)&PTR_FUN_710523d9e8;
  plVar1[0xb] = (long)puVar3;
  plVar1[0xd] = 0;
  plVar1[0x10] = 0;
  plVar1[0x11] = 0;
  plVar1[0xe] = 0;
  plVar1[0xf] = 0;
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
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b50398;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b50398:
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
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b50404;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b50404:
  *(undefined1 *)(puVar3 + 2) = 1;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[0x10] = (long)&PTR_FUN_710523d9e8;
  plVar1[0xf] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      pppplVar5 = &local_78;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101b5046c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101b5046c:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  plVar1[0x11] = (long)puVar3;
  puVar6 = &DAT_7104544ac0;
  uVar7 = 0;
  FUN_71032cbf30(plVar8,**(long **)(*plVar1 + 0x78),(ulong *)&DAT_7104544ac0,(byte ****)0x0,param_5,
                 param_6,param_7,param_8);
  FUN_71037780e0(&local_78,*(long *)plVar1[1] + 8,(long ****)&DAT_7104421055,puVar6,uVar7,param_5,
                 param_6,param_7,param_8);
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
  FUN_71037780e0(&local_78,*(long *)*plVar8 + 8,(long ****)"pos_ptn",puVar6,uVar7,param_5,param_6,
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
  FUN_71037780e0(&local_78,*(long *)*plVar8 + 8,(long ****)"reverse",puVar6,uVar7,param_5,param_6,
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
  FUN_7103776910(&local_78,*(long *)*plVar8 + 8,(long ****)"cut_in_pib",puVar6,uVar7,param_5,param_6
                 ,param_7,param_8);
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
  local_78 = (long ***)&PTR_FUN_710523d9a8;
  local_70 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_7103776910(&local_78,*(long *)*plVar8 + 8,(long ****)"set_rep_cutin_00",puVar6,uVar7,param_5,
                 param_6,param_7,param_8);
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
  local_78 = (long ***)&PTR_FUN_710523d9a8;
  local_70 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_7103776910(&local_78,*(long *)*plVar8 + 8,(long ****)"set_pic_bg_line",puVar6,uVar7,param_5,
                 param_6,param_7,param_8);
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
  local_78 = (long ***)&PTR_FUN_710523d9a8;
  local_70 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_7103776910(&local_78,*(long *)*plVar8 + 8,(long ****)"set_pic_bg_center",puVar6,uVar7,param_5,
                 param_6,param_7,param_8);
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
  local_78 = (long ***)&PTR_FUN_710523d9a8;
  local_70 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  param_1[0x10] = plVar1;
  return;
}

